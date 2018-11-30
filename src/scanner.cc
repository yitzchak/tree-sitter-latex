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
  _CS_END,
  _ESCAPE,
  _EXPL_BEGIN,
  _EXPL_END,
  _LUA_END,
  _LUACODE_BEGIN,
  _LUADIRECT_BEGIN,
  _LUAEXEC_BEGIN,
  _NON_LETTER_OR_OTHER,
  _SPACE,
  _VERB_LINE,
  ACTIVE_CHAR,
  ALIGNMENT_TAB,
  ARARA_COMMENT,
  BEGIN_GROUP,
  BIB_COMMENT,
  COMMENT,
  END_GROUP,
  EOL,
  MAGIC_COMMENT,
  MATH_SHIFT,
  PARAMETER_CHAR,
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

struct SymbolDescription {
  SymbolType type;
  SymbolWidth width;
  bitset<16> categories;

  SymbolDescription(unsigned int cats, SymbolType t, SymbolWidth w): categories(cats) {
    type = t;
    width = w;
  }
};

struct CatCodeCategoryRegion {
  int32_t begin, end;
  Category category;
};

struct CatCodeTable {
  static const size_t TABLE_SIZE = 256;

  bool partial;
  vector<Category> table;
  map<int32_t, Category> overflow;

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
    table.assign(partial ? 0 : TABLE_SIZE, OTHER_CATEGORY);
    overflow.clear();
  }

  void set_catcode(const int32_t key, Category cat) {
    if (key > -1 && key < table.size()) {
      table[key] = cat;
    } else {
      overflow[key] = cat;
    }
  }

  Category get_catcode(const int32_t key) const {
    if (key > -1 && key < table.size()) {
      return table[key];
    }

    auto it = overflow.find(key);

    return (it == overflow.end()) ?
      OTHER_CATEGORY :
      it->second;
  }

  void load(const CatCodeTable& other, CatCodeTable& copy) {
    copy.partial = other.partial;

    if (other.partial) {
      copy.table.assign(other.table.size(), OTHER_CATEGORY);
      copy.overflow.clear();

      // Load the values from the other table
      for (int32_t ch = 0; ch < other.table.size(); ch++) {
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

    // for (int32_t ch = 0; ch < table.size(); ch++) {
    //   std::cout << ch << " " << table[ch] << std::endl;
    // }
    //
    // for (auto it = overflow.cbegin(); it != overflow.cend(); it++) {
    //   std::cout << it->first << " " << it->second << std::endl;
    // }
  }

  unsigned serialize(char *buffer) const {
    unsigned length = 0, num_serialized = table.size();

    buffer[length++] = static_cast<char>(partial);

    memcpy(&buffer[length], &num_serialized, sizeof(num_serialized));
    length += sizeof(num_serialized);

    for (auto it = table.begin(); it != table.end(); it++) {
      buffer[length++] = static_cast<char>(*it);
    }

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
    if (length == 0) {
      partial = false;
      table.assign(TABLE_SIZE, OTHER_CATEGORY);
      overflow.clear();
      return 0;
    }

    table.clear();
    overflow.clear();

    unsigned pos = 0;

    partial = static_cast<bool>(buffer[pos++]);

    unsigned num_serialized;
    memcpy(&num_serialized, &buffer[pos], sizeof(num_serialized));
    pos += sizeof(num_serialized);

    for (unsigned i = 0; i < num_serialized; i++) {
      table.push_back(static_cast<Category>(buffer[pos++]));
    }

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

enum CatCodeOperation {
  OP_SET,
  OP_PUSH,
  OP_POP
};

struct CatCodeCommand {
  SymbolType begin;
  SymbolType end;
  CatCodeOperation operation;
  CatCodeTable table;

  unsigned serialize(char *buffer) const {
    unsigned length = 0;

    buffer[length++] = static_cast<char>(begin);
    buffer[length++] = static_cast<char>(end);
    buffer[length++] = static_cast<char>(operation);

    return length + table.serialize(&buffer[length]);
  }

  unsigned deserialize(const char *buffer, unsigned length) {
    unsigned pos = 0;

    begin = static_cast<SymbolType>(buffer[pos++]);
    end = static_cast<SymbolType>(buffer[pos++]);
    operation = static_cast<CatCodeOperation>(buffer[pos++]);

    return pos + table.deserialize(&buffer[pos], length - pos);
  }
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

  vector<SymbolDescription> symbol_descriptions = {
    {~(LETTER_FLAG | OTHER_FLAG), _NON_LETTER_OR_OTHER, SINGLE_WIDTH},
    {~LETTER_FLAG,                _CS_END,              ZERO_WIDTH},
    {ESCAPE_FLAG,                 _ESCAPE,              SINGLE_WIDTH},
    {BEGIN_FLAG,                  BEGIN_GROUP,          SINGLE_WIDTH},
    {END_FLAG,                    END_GROUP,            SINGLE_WIDTH},
    {MATH_SHIFT_FLAG,             MATH_SHIFT,           SINGLE_WIDTH},
    {ALIGNMENT_TAB_FLAG,          ALIGNMENT_TAB,        SINGLE_WIDTH},
    {EOL_FLAG,                    EOL,                  SINGLE_WIDTH},
    {PARAMETER_FLAG,              PARAMETER_CHAR,       SINGLE_WIDTH},
    {SUPERSCRIPT_FLAG,            SUPERSCRIPT,          SINGLE_WIDTH},
    {SUBSCRIPT_FLAG,              SUBSCRIPT,            SINGLE_WIDTH},
    {SPACE_FLAG,                  _SPACE,               UNLIMITED_WIDTH},
    {ACTIVE_CHAR_FLAG,            ACTIVE_CHAR,          SINGLE_WIDTH}
  };

  map<string, SymbolType> comment_types = {
    {"arara:", ARARA_COMMENT},
    {"!Bib", BIB_COMMENT},
    {"!BIB", BIB_COMMENT},
    {"!TeX", MAGIC_COMMENT},
    {"!TEX", MAGIC_COMMENT}
  };

  list<CatCodeCommand> catcode_commands = {
    {
      _AT_LETTER,
      _AT_LETTER,
      OP_SET,
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
      OP_SET,
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
      OP_PUSH,
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
      OP_SET,
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
      OP_PUSH,
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
      OP_PUSH,
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
      OP_PUSH,
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

  int32_t start_delim = 0;
  CatCodeTable catcode_table;

  Scanner() {}

  void reset () {
    start_delim = 0;
    catcode_table.reset();
    catcode_commands.remove_if([](CatCodeCommand b){ return b.operation == OP_POP; });
  }

  void initialize() {
    reset();

    catcode_table.set_catcode('\\', ESCAPE_CATEGORY);
    catcode_table.set_catcode('{', BEGIN_CATEGORY);
    catcode_table.set_catcode('}', END_CATEGORY);
    catcode_table.set_catcode('$', MATH_SHIFT_CATEGORY);
    catcode_table.set_catcode('&', ALIGNMENT_TAB_CATEGORY);
    catcode_table.set_catcode('\n', EOL_CATEGORY);
    catcode_table.set_catcode('#', PARAMETER_CATEGORY);
    catcode_table.set_catcode('^', SUPERSCRIPT_CATEGORY);
    catcode_table.set_catcode('_', SUBSCRIPT_CATEGORY);
    catcode_table.set_catcode('\0', IGNORED_CATEGORY);
    catcode_table.set_catcode(' ', SPACE_CATEGORY);
    catcode_table.set_catcode('\t', SPACE_CATEGORY);
    catcode_table.set_catcode('A', LETTER_CATEGORY);
    catcode_table.set_catcode('B', LETTER_CATEGORY);
    catcode_table.set_catcode('C', LETTER_CATEGORY);
    catcode_table.set_catcode('D', LETTER_CATEGORY);
    catcode_table.set_catcode('E', LETTER_CATEGORY);
    catcode_table.set_catcode('F', LETTER_CATEGORY);
    catcode_table.set_catcode('G', LETTER_CATEGORY);
    catcode_table.set_catcode('H', LETTER_CATEGORY);
    catcode_table.set_catcode('I', LETTER_CATEGORY);
    catcode_table.set_catcode('J', LETTER_CATEGORY);
    catcode_table.set_catcode('K', LETTER_CATEGORY);
    catcode_table.set_catcode('L', LETTER_CATEGORY);
    catcode_table.set_catcode('M', LETTER_CATEGORY);
    catcode_table.set_catcode('N', LETTER_CATEGORY);
    catcode_table.set_catcode('O', LETTER_CATEGORY);
    catcode_table.set_catcode('P', LETTER_CATEGORY);
    catcode_table.set_catcode('Q', LETTER_CATEGORY);
    catcode_table.set_catcode('R', LETTER_CATEGORY);
    catcode_table.set_catcode('S', LETTER_CATEGORY);
    catcode_table.set_catcode('T', LETTER_CATEGORY);
    catcode_table.set_catcode('U', LETTER_CATEGORY);
    catcode_table.set_catcode('V', LETTER_CATEGORY);
    catcode_table.set_catcode('W', LETTER_CATEGORY);
    catcode_table.set_catcode('X', LETTER_CATEGORY);
    catcode_table.set_catcode('Y', LETTER_CATEGORY);
    catcode_table.set_catcode('Z', LETTER_CATEGORY);
    catcode_table.set_catcode('a', LETTER_CATEGORY);
    catcode_table.set_catcode('b', LETTER_CATEGORY);
    catcode_table.set_catcode('c', LETTER_CATEGORY);
    catcode_table.set_catcode('d', LETTER_CATEGORY);
    catcode_table.set_catcode('e', LETTER_CATEGORY);
    catcode_table.set_catcode('f', LETTER_CATEGORY);
    catcode_table.set_catcode('g', LETTER_CATEGORY);
    catcode_table.set_catcode('h', LETTER_CATEGORY);
    catcode_table.set_catcode('i', LETTER_CATEGORY);
    catcode_table.set_catcode('j', LETTER_CATEGORY);
    catcode_table.set_catcode('k', LETTER_CATEGORY);
    catcode_table.set_catcode('l', LETTER_CATEGORY);
    catcode_table.set_catcode('m', LETTER_CATEGORY);
    catcode_table.set_catcode('n', LETTER_CATEGORY);
    catcode_table.set_catcode('o', LETTER_CATEGORY);
    catcode_table.set_catcode('p', LETTER_CATEGORY);
    catcode_table.set_catcode('q', LETTER_CATEGORY);
    catcode_table.set_catcode('r', LETTER_CATEGORY);
    catcode_table.set_catcode('s', LETTER_CATEGORY);
    catcode_table.set_catcode('t', LETTER_CATEGORY);
    catcode_table.set_catcode('u', LETTER_CATEGORY);
    catcode_table.set_catcode('v', LETTER_CATEGORY);
    catcode_table.set_catcode('w', LETTER_CATEGORY);
    catcode_table.set_catcode('x', LETTER_CATEGORY);
    catcode_table.set_catcode('y', LETTER_CATEGORY);
    catcode_table.set_catcode('z', LETTER_CATEGORY);
    catcode_table.set_catcode('~', ACTIVE_CHAR_CATEGORY);
    catcode_table.set_catcode('%', COMMENT_CATEGORY);
    catcode_table.set_catcode('\x7f', INVALID_CATEGORY);
  }

  unsigned serialize(char *buffer) const {
    const size_t ch_size = sizeof(int32_t);
    unsigned length = 0;

    // First save the verbatim delimiter
    memcpy(&buffer[length], &start_delim, ch_size);
    length += ch_size;

    length += catcode_table.serialize(&buffer[length]);

    unsigned num_serialized = 0;
    unsigned count_pos = length;

    length += sizeof(num_serialized);

    for (auto it = catcode_commands.cbegin(); it != catcode_commands.cend(); it++) {
      if (it->operation == OP_POP) {
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

    // if (length == 0) return;

    const size_t ch_size = sizeof(int32_t);
    unsigned pos = 0;

    // Retrieve the verbatim start delimiter
    memcpy(&start_delim, &buffer[pos], ch_size);
    pos += sizeof(start_delim);

    pos += catcode_table.deserialize(&buffer[pos], length - pos);

    // Retrieve the catcode pairs
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
    if (lexer->lookahead && catcode_table.get_catcode(lexer->lookahead) != EOL_CATEGORY) {
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
      lexer->advance(lexer, false);
      lexer->result_symbol = VERB_DELIM;
      lexer->mark_end(lexer);
      start_delim = 0;
      return true;
    }

    if (catcode_table.get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->result_symbol = VERB_DELIM; // don't eat the newline (for consistency)
      lexer->mark_end(lexer);
      start_delim = 0;
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && catcode_table.get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = VERB_BODY;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_verb_line(TSLexer *lexer) {
    while (lexer->lookahead && catcode_table.get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    if (catcode_table.get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = _VERB_LINE;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_symbol(TSLexer *lexer, SymbolDescription desc) {
    // Accumulate characters as long as they match the catcode and are allowed
    // by the symbol width.
    switch (desc.width) {
      case SINGLE_WIDTH:
        lexer->advance(lexer, false);
        break;
      case UNLIMITED_WIDTH:
        while (desc.categories[catcode_table.get_catcode(lexer->lookahead)]) {
          lexer->advance(lexer, false);
        }
        break;
    }

    lexer->result_symbol = desc.type;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_comment(TSLexer *lexer) {
    bitset<16> comment_type_categories = ~(EOL_FLAG | SPACE_FLAG | IGNORED_FLAG),
      comment_categories = ~(EOL_FLAG | IGNORED_FLAG);
    string comment_type;

    // Skip the comment char
    lexer->advance(lexer, false);

    if (lexer->lookahead == ':') {
      lexer->advance(lexer, false);
      lexer->result_symbol = TAG_COMMENT;
    } else {
      // Skip any leading spaces
      while (catcode_table.get_catcode(lexer->lookahead) == SPACE_CATEGORY) {
        lexer->advance(lexer, false);
      }

      // Try to capture a tag
      while (comment_type_categories[catcode_table.get_catcode(lexer->lookahead)]) {
        comment_type += lexer->lookahead;
        lexer->advance(lexer, false);
      }

      // Look for a valid comment tag
      auto it = comment_types.find(comment_type);

      lexer->result_symbol = (it == comment_types.end()) ? COMMENT : it->second;
    }

    // Gobble the reset of the comment
    while (comment_categories[catcode_table.get_catcode(lexer->lookahead)]) {
      lexer->advance(lexer, false);
    }

    // Eat any EOL
    if (catcode_table.get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);

    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    Category code = catcode_table.get_catcode(lexer->lookahead);

    for (auto it = catcode_commands.begin(); it != catcode_commands.end(); it++) {
      if (valid_symbols[it->begin]) {
        lexer->result_symbol = it->begin;
        lexer->mark_end(lexer);

        CatCodeCommand previous;

        previous.begin = it->end;
        previous.end = it->end;
        previous.operation = (it->operation == OP_PUSH) ? OP_POP : OP_SET;
        catcode_table.load(it->table, previous.table);

        switch (it->operation) {
          case OP_PUSH:
            catcode_commands.push_front(previous);
            break;
          case OP_POP:
            catcode_commands.erase(it);
            break;
        }

        return true;
      }
    }

    // First look for simple symbols such as escape, comment, etc.
    for (auto it = symbol_descriptions.begin(); it != symbol_descriptions.end(); it++) {
      if (it->categories[code] && valid_symbols[it->type]) {
        return scan_symbol(lexer, *it);
      }
    }

    // Look for comments.
    if (code == COMMENT_CATEGORY && valid_symbols[COMMENT]) {
      return scan_comment(lexer);
    }

    // Look an inline verbatim delimiter and end the verbatim if one is
    // currently open. Otherwise start a new one.
    if (valid_symbols[VERB_DELIM]) {
      return (start_delim) ?
        scan_end_verb_delim(lexer) :
        scan_start_verb_delim(lexer);
    }

    // Scan an inline verbatim body.
    if (start_delim && valid_symbols[VERB_BODY]) {
      return scan_verb_body(lexer);
    }

    // Scan a single line in a verbatim environment.
    // NOTE: This is a kludge. Verbatim environments actually detect the corrent \end
    if (valid_symbols[_VERB_LINE] && code != ESCAPE_CATEGORY) {
      return scan_verb_line(lexer);
    }

    return false;
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
