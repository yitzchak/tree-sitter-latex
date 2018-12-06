#include <algorithm>
#include <list>
#include <map>
#include <vector>
#include <bitset>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

#include "tree_sitter/parser.h"


namespace {

using std::any_of;
using std::bitset;
using std::initializer_list;
using std::list;
using std::map;
using std::memcpy;
using std::pair;
using std::string;
using std::vector;

enum SymbolType {
  _AT_LETTER,
  _AT_OTHER,
  _CS_BEGIN,
  _CS_END,
  _DEFAULT_CATCODES,
  _ESCAPED_BEGIN,
  _ESCAPED_END,
  _EXPL_BEGIN,
  _EXPL_END,
  _LUA_END,
  _LUACODE_BEGIN,
  _LUADIRECT_BEGIN,
  _LUAEXEC_BEGIN,
  _SPACE,
  _VERB_LINE,
  ACTIVE_CHAR,
  ALIGNMENT_TAB,
  ARARA_COMMENT,
  BIB_COMMENT,
  COMMENT,
  EOL,
  EXIT,
  L,
  MAGIC_COMMENT,
  MATH_SHIFT,
  PARAMETER_CHAR,
  R,
  SUBSCRIPT,
  SUPERSCRIPT,
  TAG_COMMENT,
  VERB_BODY,
  VERB_DELIM
};

enum Category {
  ESCAPE_CATEGORY,
  BEGIN_CATEGORY,
  END_CATEGORY,
  MATH_SHIFT_CATEGORY,
  ALIGNMENT_TAB_CATEGORY,
  EOL_CATEGORY,
  PARAMETER_CATEGORY,
  SUPERSCRIPT_CATEGORY,
  SUBSCRIPT_CATEGORY,
  IGNORED_CATEGORY,
  SPACE_CATEGORY,
  LETTER_CATEGORY,
  OTHER_CATEGORY,
  ACTIVE_CHAR_CATEGORY,
  COMMENT_CATEGORY,
  INVALID_CATEGORY
};

enum SymbolWidth {
  ZERO_WIDTH,
  SINGLE_WIDTH,
  UNLIMITED_WIDTH
};

struct CatCodeCategoryRegion {
  int32_t begin, end;
  Category category;
};

// Common catcode table with overflow and support for partial catcode tables.
class CatCodeTable {
protected:
  static const size_t TABLE_SIZE = 256;

  bool partial;
  vector<Category> table;
  map<int32_t, Category> overflow;

public:
  CatCodeTable (bool _partial = false) :
      partial(_partial),
      table(_partial ? 0 : TABLE_SIZE, OTHER_CATEGORY) {}

  CatCodeTable (bool _partial, initializer_list<CatCodeCategoryRegion> init) :
      partial(_partial),
      table(_partial ? 0 : TABLE_SIZE, OTHER_CATEGORY) {
    for (auto it = init.begin(); it != init.end(); it++) {
      for (int32_t ch = it->begin; ch <= it->end; ch++) {
        set_catcode(ch, it->category);
      }
    }
  }

  void reset() {
    // Partial tables will only use overflow.
    table.assign(partial ? 0 : TABLE_SIZE, OTHER_CATEGORY);
    overflow.clear();
  }

  void set_catcode(const int32_t key, Category cat) {
    if (static_cast<size_t>(key) < table.size()) {
      table[key] = cat;
    } else {
      overflow[key] = cat;
    }
  }

  Category get_catcode(const int32_t key) const {
    if (static_cast<size_t>(key) < table.size()) {
      return table[key];
    }

    auto it = overflow.find(key);

    // OTHER is the default category.
    return (it == overflow.end()) ?
      OTHER_CATEGORY :
      it->second;
  }

  inline Category operator[](const int32_t key) const {
    return get_catcode(key);
  }

  void load(const CatCodeTable& other, CatCodeTable& copy) {
    copy.partial = other.partial;

    if (other.partial) {
      copy.table.assign(other.table.size(), OTHER_CATEGORY);
      copy.overflow.clear();

      // Load the values from the other table
      for (size_t ch = 0; ch < other.table.size(); ch++) {
        // Save the current value
        copy.table[ch] = get_catcode(ch);
        // Set the new value
        set_catcode(ch, other.table[ch]);
      }

      // Load the values from the other overflow
      for (auto it = other.overflow.begin(); it != other.overflow.end(); it++) {
        // Save the current value
        copy.overflow[it->first] = get_catcode(it->first);
        // Set the new value
        set_catcode(it->first, it->second);
      }
    } else {
      // Save the current table
      copy.table = table;
      copy.overflow = overflow;
      // Load the new table
      table = other.table;
      overflow = other.overflow;
    }
  }

  unsigned serialize(char *buffer) const {
    unsigned length = 0, num_serialized = table.size();

    // Save the partial flag
    buffer[length++] = static_cast<char>(partial);

    // Save the table
    memcpy(&buffer[length], &num_serialized, sizeof(num_serialized));
    length += sizeof(num_serialized);

    for (auto it = table.begin(); it != table.end(); it++) {
      buffer[length++] = static_cast<char>(*it);
    }

    // Save the overflow
    num_serialized = overflow.size();
    memcpy(&buffer[length], &num_serialized, sizeof(num_serialized));
    length += sizeof(num_serialized);

    for (auto it = overflow.cbegin(); it != overflow.cend(); it++) {
      memcpy(&buffer[length], &it->first, sizeof(int32_t)); // character
      length += sizeof(int32_t);
      buffer[length++] = static_cast<char>(it->second); // catcode
    }

    return length;
  }

  unsigned deserialize(const char *buffer, unsigned length) {
    // If there is no data available then just reset the table.
    if (length == 0) {
      reset();
      return 0;
    }

    table.clear();
    overflow.clear();

    unsigned pos = 0;

    // Read the partial flag
    partial = static_cast<bool>(buffer[pos++]);

    // read the table
    unsigned num_serialized;
    memcpy(&num_serialized, &buffer[pos], sizeof(num_serialized));
    pos += sizeof(num_serialized);

    for (unsigned i = 0; i < num_serialized; i++) {
      table.push_back(static_cast<Category>(buffer[pos++]));
    }

    // Read the overflow
    memcpy(&num_serialized, &buffer[pos], sizeof(num_serialized));
    pos += sizeof(num_serialized);

    for (unsigned i = 0; i < num_serialized; i++) {
      int32_t character;
      memcpy(&character, &buffer[pos], sizeof(int32_t));
      pos += sizeof(int32_t);
      overflow[character] = static_cast<Category>(buffer[pos++]);
    }

    return pos;
  }
};

// CatCode operations.
// WRITE overwrites the current table with this table (partial or complete)
// SAVE_AND_WRITE overwrites and saves the values (or the whole table if partial is not set) that it overwrites into POP command
// WRITE_ONCE overwrites and removes command from future executions.
enum CatCodeOperation {
  OP_WRITE,
  OP_SAVE_AND_WRITE,
  OP_WRITE_ONCE
};

// a bulk catcode table command
struct CatCodeCommand {
  SymbolType trigger;
  SymbolType save_trigger;
  CatCodeOperation operation;
  CatCodeTable table;

  unsigned serialize(char *buffer) const {
    unsigned length = 0;

    buffer[length++] = static_cast<char>(trigger);
    buffer[length++] = static_cast<char>(save_trigger);
    buffer[length++] = static_cast<char>(operation);

    return length + table.serialize(&buffer[length]);
  }

  unsigned deserialize(const char *buffer, unsigned length) {
    unsigned pos = 0;

    trigger = static_cast<SymbolType>(buffer[pos++]);
    save_trigger = static_cast<SymbolType>(buffer[pos++]);
    operation = static_cast<CatCodeOperation>(buffer[pos++]);

    return pos + table.deserialize(&buffer[pos], length - pos);
  }
};

enum ScannerMode {
  CS_MODE,
  ESCAPED_MODE,
  NORMAL_MODE,
  VERB_MODE
};

struct Scanner {
  static const unsigned int ESCAPE_FLAG = 1 << ESCAPE_CATEGORY;
  static const unsigned int BEGIN_FLAG = 1 << BEGIN_CATEGORY;
  static const unsigned int END_FLAG = 1 << END_CATEGORY;
  static const unsigned int MATH_SHIFT_FLAG = 1 << MATH_SHIFT_CATEGORY;
  static const unsigned int ALIGNMENT_TAB_FLAG = 1 << ALIGNMENT_TAB_CATEGORY;
  static const unsigned int EOL_FLAG = 1 << EOL_CATEGORY;
  static const unsigned int PARAMETER_FLAG = 1 << PARAMETER_CATEGORY;
  static const unsigned int SUPERSCRIPT_FLAG = 1 << SUPERSCRIPT_CATEGORY;
  static const unsigned int SUBSCRIPT_FLAG = 1 << SUBSCRIPT_CATEGORY;
  static const unsigned int IGNORED_FLAG = 1 << IGNORED_CATEGORY;
  static const unsigned int SPACE_FLAG = 1 << SPACE_CATEGORY;
  static const unsigned int LETTER_FLAG = 1 << LETTER_CATEGORY;
  static const unsigned int OTHER_FLAG = 1 << OTHER_CATEGORY;
  static const unsigned int ACTIVE_CHAR_FLAG = 1 << ACTIVE_CHAR_CATEGORY;
  static const unsigned int COMMENT_FLAG = 1 << COMMENT_CATEGORY;
  static const unsigned int INVALID_FLAG = 1 << INVALID_CATEGORY;

  list<CatCodeCommand> catcode_commands = {
    {
      _DEFAULT_CATCODES,
      _DEFAULT_CATCODES,
      OP_WRITE,
      {
        false,
        {
          {'\\',   '\\',   ESCAPE_CATEGORY},
          {'{',    '{',    BEGIN_CATEGORY},
          {'}',    '}',    END_CATEGORY},
          {'$',    '$',    MATH_SHIFT_CATEGORY},
          {'&',    '&',    ALIGNMENT_TAB_CATEGORY},
          {'\n',   '\n',   EOL_CATEGORY},
          {'#',    '#',    PARAMETER_CATEGORY},
          {'^',    '^',    SUPERSCRIPT_CATEGORY},
          {'_',    '_',    SUBSCRIPT_CATEGORY},
          {'\0',   '\0',   IGNORED_CATEGORY},
          {' ',    ' ',    SPACE_CATEGORY},
          {'\t',   '\t',   SPACE_CATEGORY},
          {'A',    'Z',    LETTER_CATEGORY},
          {'a',    'z',    LETTER_CATEGORY},
          {'~',    '~',    ACTIVE_CHAR_CATEGORY},
          {'%',    '%',    COMMENT_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}
        }
      }
    },
    {
      _AT_LETTER,
      _AT_LETTER,
      OP_WRITE,
      {
        true,
        {
          {'@', '@', LETTER_CATEGORY}
        }
      }
    },
    {
      _AT_OTHER,
      _AT_OTHER,
      OP_WRITE,
      {
        true,
        {
          {'@', '@', OTHER_CATEGORY}
        }
      }
    },
    {
      _EXPL_BEGIN,
      _EXPL_END,
      OP_SAVE_AND_WRITE,
      {
        true,
        {
          {'\t', '\t', IGNORED_CATEGORY},
          {' ',  ' ',  IGNORED_CATEGORY},
          {' ',  ' ',  OTHER_CATEGORY},
          {'&',  '&',  ALIGNMENT_TAB_CATEGORY},
          {':',  ':',  LETTER_CATEGORY},
          {'^',  '^',  SUPERSCRIPT_CATEGORY},
          {'_',  '_',  LETTER_CATEGORY},
          {'|',  '|',  OTHER_CATEGORY},
          {'~',  '~',  SPACE_CATEGORY}
        }
      }
    },
    { // This the default action for \ExplSyntaxOff. It will be overridden by the call to \ExplSyntaxOn.
      _EXPL_END,
      _EXPL_END,
      OP_WRITE,
      {
        true,
        {
          {'\t', '\t', SPACE_CATEGORY},
          {' ',  ' ',  SPACE_CATEGORY},
          {'"',  '"',  OTHER_CATEGORY},
          {'&',  '&',  ALIGNMENT_TAB_CATEGORY},
          {':',  ':',  OTHER_CATEGORY},
          {'^',  '^',  SUPERSCRIPT_CATEGORY},
          {'_',  '_',  SUBSCRIPT_CATEGORY},
          {'|',  '|',  OTHER_CATEGORY},
          {'~',  '~',  ACTIVE_CHAR_CATEGORY}
        }
      }
    },
    { // \luadirect catcode table
      _LUADIRECT_BEGIN,
      _LUA_END,
      OP_SAVE_AND_WRITE,
      {
        false,
        {
          {'\\', '\\', ESCAPE_CATEGORY},
          {'{',  '{',  BEGIN_CATEGORY},
          {'}',  '}',  END_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {'A',  'Z',  LETTER_CATEGORY},
          {'a',  'z',  LETTER_CATEGORY},
          {'~',  '~',  ACTIVE_CHAR_CATEGORY},
          {'%',  '%',  COMMENT_CATEGORY}
        }
      }
    },
    { // luaexec catcode table
      _LUAEXEC_BEGIN,
      _LUA_END,
      OP_SAVE_AND_WRITE,
      {
        false,
        {
          {'\\', '\\', ESCAPE_CATEGORY},
          {'{',  '{',  BEGIN_CATEGORY},
          {'}',  '}',  END_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {'A',  'Z',  LETTER_CATEGORY},
          {'a',  'z',  LETTER_CATEGORY},
          {'%',  '%',  COMMENT_CATEGORY}
        }
      }
    },
    { // luacode catcode table
      _LUACODE_BEGIN,
      _LUA_END,
      OP_SAVE_AND_WRITE,
      {
        false,
        {
          {'{',  '{',  BEGIN_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {'}',  '}',  END_CATEGORY},
          {'A',  'Z',  LETTER_CATEGORY},
          {'a',  'z',  LETTER_CATEGORY}
        }
      }
    }
  };

  ScannerMode mode = NORMAL_MODE;
  int32_t start_delim = 0;
  CatCodeTable catcode_table;

  Scanner() {}

  void reset () {
    start_delim = 0;
    catcode_table.reset();
    catcode_commands.remove_if([](CatCodeCommand b){ return b.operation == OP_WRITE_ONCE; });
  }

  void initialize() {
    reset();
    // This is a hack. I'd like to have grammer.js load this via _DEFAULT_CATCODES.
    CatCodeTable copy;
    catcode_table.load(catcode_commands.front().table, copy);
  }

  unsigned serialize(char *buffer) const {
    const size_t ch_size = sizeof(int32_t);
    unsigned length = 0;

    // Save the mode
    buffer[length++] = static_cast<char>(mode);

    // Save the verbatim delimiter
    memcpy(&buffer[length], &start_delim, ch_size);
    length += ch_size;

    // Save the catcode table.
    length += catcode_table.serialize(&buffer[length]);

    unsigned num_serialized = 0;
    unsigned count_pos = length;

    length += sizeof(num_serialized);

    // Save the WRITE_ONCE catcode commands.
    for (auto it = catcode_commands.cbegin(); it != catcode_commands.cend(); it++) {
      if (it->operation == OP_WRITE_ONCE) {
        length += it->serialize(&buffer[length]);
        num_serialized++;
      }
    }

    memcpy(&buffer[count_pos], &num_serialized, sizeof(num_serialized));

    return length;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      initialize();
      return;
    }

    reset();

    const size_t ch_size = sizeof(int32_t);
    unsigned pos = 0;

    // Load the mode
    mode = static_cast<ScannerMode>(buffer[pos++]);

    // Retrieve the verbatim start delimiter
    memcpy(&start_delim, &buffer[pos], ch_size);
    pos += sizeof(start_delim);

    // Read the catcode table.
    pos += catcode_table.deserialize(&buffer[pos], length - pos);

    // Retrieve the catcode commands
    unsigned num_serialized;
    memcpy(&num_serialized, &buffer[pos], sizeof(num_serialized));
    pos += sizeof(num_serialized);

    for (unsigned i = 0; i < num_serialized; i++) {
      CatCodeCommand c;
      pos += c.deserialize(&buffer[pos], length - pos);
      catcode_commands.push_front(c);
    }
  }

  bool scan_start_verb_delim(TSLexer *lexer) {
    // NOTE: ' ' (space) is a perfectly valid delim, as is %
    // Also: The first * (if present) is gobbled by the main grammar, but the second is a valid delim
    if (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      mode = VERB_MODE;
      start_delim = lexer->lookahead;
      lexer->advance(lexer, false);
      lexer->result_symbol = VERB_DELIM;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_end_verb_delim(TSLexer *lexer) {
    if (lexer->lookahead == start_delim) {
      mode = NORMAL_MODE;
      lexer->advance(lexer, false);
      lexer->result_symbol = VERB_DELIM;
      lexer->mark_end(lexer);
      return true;
    }

    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      mode = NORMAL_MODE;
      lexer->result_symbol = VERB_DELIM; // don't eat the newline (for consistency)
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = VERB_BODY;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_verb_line(TSLexer *lexer) {
    while (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = _VERB_LINE;
    lexer->mark_end(lexer);

    return true;
  }

  int match_length(TSLexer *lexer, string value, bitset<16> terminator = ~0) {
    size_t length = 0;

    for (char ch: value) {
      if (std::tolower(lexer->lookahead) == ch) {
        length++;
        lexer->advance(lexer, false);
      } else {
        return length;
      }
    }

    return (terminator[catcode_table[lexer->lookahead]]) ? -1 : length;
  }

  bool scan_comment(TSLexer *lexer) {
    bitset<16> comment_categories = ~(EOL_FLAG | IGNORED_FLAG);
    string comment_type;

    // Skip the comment char
    lexer->advance(lexer, false);
    lexer->result_symbol = COMMENT;

    if (match_length(lexer, ":") == -1) {
      lexer->advance(lexer, false);
      lexer->result_symbol = TAG_COMMENT;
    } else {
      // Skip any leading spaces
      while (catcode_table[lexer->lookahead] == SPACE_CATEGORY) {
        lexer->advance(lexer, false);
      }

      int len = match_length(lexer, "arara:");

      if (len == -1) {
        lexer->result_symbol = ARARA_COMMENT;
      } else if (len == 0) {
        len = match_length(lexer, "!tex", EOL_FLAG | SPACE_FLAG | IGNORED_FLAG);
        if (len == -1) {
          lexer->result_symbol = MAGIC_COMMENT;
        } else if (len == 1 && match_length(lexer, "bib", EOL_FLAG | SPACE_FLAG | IGNORED_FLAG) == -1) {
          lexer->result_symbol = BIB_COMMENT;
        }
      }
    }

    // Gobble the reset of the comment
    while (comment_categories[catcode_table[lexer->lookahead]]) {
      lexer->advance(lexer, false);
    }

    // Eat any EOL
    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);

    return true;
  }

  bool scan_catcode_commands(TSLexer *lexer, const bool *valid_symbols) {
    // Loop through the command list.
    for (auto it = catcode_commands.begin(); it != catcode_commands.end(); it++) {
      if (valid_symbols[it->trigger]) {
        lexer->result_symbol = it->trigger;
        lexer->mark_end(lexer);

        CatCodeCommand previous;

        // Load the catcode table and save the previous.
        catcode_table.load(it->table, previous.table);

        switch (it->operation) {
          case OP_SAVE_AND_WRITE:
            // Save the previous contents as a WRITE_ONCE command. Push the
            // result to the front of the list so it has a higher priority.
            previous.trigger = it->save_trigger;
            previous.save_trigger = it->save_trigger;
            previous.operation = OP_WRITE_ONCE;
            catcode_commands.push_front(previous);
            break;
          case OP_WRITE_ONCE:
            catcode_commands.erase(it);
            break;
          default:
            break;
        }

        return true;
      }
    }

    return false;
  }

  bool scan_cs_mode(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[_CS_END] && catcode_table[lexer->lookahead] != LETTER_CATEGORY) {
      mode = NORMAL_MODE;
      lexer->result_symbol = _CS_END;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_escaped_mode(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[_ESCAPED_END]) {
      mode = NORMAL_MODE;
      lexer->result_symbol = _ESCAPED_END;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_escape(TSLexer *lexer) {
    lexer->advance(lexer, false);

    if (catcode_table[lexer->lookahead] == LETTER_CATEGORY) {
      mode = CS_MODE;
      lexer->result_symbol = _CS_BEGIN;
    } else {
      mode = ESCAPED_MODE;
      lexer->result_symbol = _ESCAPED_BEGIN;
    }
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_verb_mode(TSLexer *lexer, const bool *valid_symbols) {
    // Look for an inline verbatim delimiter and end the verbatim.
    if (valid_symbols[VERB_DELIM]) {
      return scan_end_verb_delim(lexer);
    }

    // Scan an inline verbatim body.
    if (valid_symbols[VERB_BODY]) {
      return scan_verb_body(lexer);
    }

    return false;
  }

  inline bool scan_empty_symbol(TSLexer *lexer, SymbolType symbol) {
    lexer->result_symbol = symbol;
    lexer->mark_end(lexer);

    return true;
  }

  inline bool scan_single_char_symbol(TSLexer *lexer, SymbolType symbol) {
    lexer->advance(lexer, false);

    lexer->result_symbol = symbol;
    lexer->mark_end(lexer);

    return true;
  }

  inline bool scan_multi_char_symbol(TSLexer *lexer, SymbolType symbol, Category code) {
    do {
      lexer->advance(lexer, false);
    } while (catcode_table[lexer->lookahead] == code);

    lexer->result_symbol = symbol;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_normal_mode(TSLexer *lexer, const bool *valid_symbols) {
    Category code = catcode_table[lexer->lookahead];

    // Look for an inline verbatim delimiter and start VERB_MODE.
    if (valid_symbols[VERB_DELIM]) {
      return scan_start_verb_delim(lexer);
    }

    switch (code) {
      case ESCAPE_CATEGORY:
        if (valid_symbols[_CS_BEGIN] || valid_symbols[_ESCAPED_BEGIN]) {
          return scan_escape(lexer);
        }
        break;
      case BEGIN_CATEGORY:
        if (valid_symbols[L]) {
          return scan_single_char_symbol(lexer, L);
        }
        break;
      case END_CATEGORY:
        if (valid_symbols[EXIT]) {
          return scan_empty_symbol(lexer, EXIT);
        } else if (valid_symbols[R]) {
          return scan_single_char_symbol(lexer, R);
        }
        break;
      case MATH_SHIFT_CATEGORY:
        if (valid_symbols[MATH_SHIFT]) {
          return scan_single_char_symbol(lexer, MATH_SHIFT);
        }
        break;
      case ALIGNMENT_TAB_CATEGORY:
        if (valid_symbols[ALIGNMENT_TAB]) {
          return scan_single_char_symbol(lexer, ALIGNMENT_TAB);
        }
        break;
      case EOL_CATEGORY:
        if (valid_symbols[EOL]) {
          return scan_single_char_symbol(lexer, EOL);
        }
        break;
      case PARAMETER_CATEGORY:
        if (valid_symbols[PARAMETER_CHAR]) {
          return scan_multi_char_symbol(lexer, PARAMETER_CHAR, PARAMETER_CATEGORY);
        }
        break;
      case SUPERSCRIPT_CATEGORY:
        if (valid_symbols[SUPERSCRIPT]) {
          return scan_single_char_symbol(lexer, SUPERSCRIPT);
        }
        break;
      case SUBSCRIPT_CATEGORY:
        if (valid_symbols[SUBSCRIPT]) {
          return scan_single_char_symbol(lexer, SUBSCRIPT);
        }
        break;
      case SPACE_CATEGORY:
        if (valid_symbols[_SPACE]) {
          return scan_multi_char_symbol(lexer, _SPACE, SPACE_CATEGORY);
        }
        break;
      case ACTIVE_CHAR_CATEGORY:
        if (valid_symbols[SUBSCRIPT]) {
          return scan_single_char_symbol(lexer, ACTIVE_CHAR);
        }
        break;
      case COMMENT_CATEGORY:
        if (valid_symbols[COMMENT]) {
          return scan_comment(lexer);
        }
        break;
      default:
        break;
    }

    // Scan a single line in a verbatim environment.
    // NOTE: This is a kludge. Verbatim environments actually detect the corrent \end
    if (valid_symbols[_VERB_LINE] && code != ESCAPE_CATEGORY) {
      return scan_verb_line(lexer);
    }

    // Look for catcode commands.
    return scan_catcode_commands(lexer, valid_symbols);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    switch (mode) {
      case CS_MODE:
        return scan_cs_mode(lexer, valid_symbols);
      case ESCAPED_MODE:
        return scan_escaped_mode(lexer, valid_symbols);
      case VERB_MODE:
        return scan_verb_mode(lexer, valid_symbols);
      default:
        return scan_normal_mode(lexer, valid_symbols);
    }
  }

};

}


// Source for required functions:
// https://github.com/tree-sitter/tree-sitter/blob/78b54810a62580537b0a2df7eb781e03667d63ba/src/compiler/generate_code/c_code.cc#L546-L552

extern "C" {

void *tree_sitter_latex_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_latex_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_latex_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_latex_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
