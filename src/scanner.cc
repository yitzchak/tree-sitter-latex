#include <algorithm>
#include <bitset>
#include <cstring>
#include <cwctype>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>

#include "tree_sitter/parser.h"


namespace {

using std::any_of;
using std::bitset;
using std::initializer_list;
using std::map;
using std::memcpy;
using std::pair;
using std::string;
using std::unordered_map;
using std::vector;

enum SymbolType {
  _AT_LETTER,
  _AT_OTHER,
  _CS_BEGIN,
  _CS_END,
  _ESCAPED_BEGIN,
  _ESCAPED_END,
  _EXPL_BEGIN,
  _EXPL_END,
  _LUA_END,
  _LUACODE_BEGIN,
  _LUADIRECT_BEGIN,
  _LUAEXEC_BEGIN,
  _SCOPE_BEGIN,
  _SCOPE_END,
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

enum Category: uint8_t {
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


struct SerializationBuffer {
  char* buffer;
  unsigned length = 0;

  SerializationBuffer(char* b) {
    buffer = b;
  }

  template<class T> SerializationBuffer& operator <<(const T& value) {
    memcpy(buffer, &value, sizeof(T));

    buffer += sizeof(T);
    length += sizeof(T);

    return *this;
  }
};

struct DeserializationBuffer {
  const char* buffer;
  unsigned length;

  DeserializationBuffer(const char* b, unsigned l) {
    buffer = b;
    length = l;
  }

  template<class T> DeserializationBuffer& operator >>(T& value) {
    memcpy(&value, buffer, sizeof(T));

    buffer += sizeof(T);
    length -= sizeof(T);

    return *this;
  }
};

enum SymbolWidth: uint8_t {
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
  unordered_map<int32_t, map<uint8_t, Category>> codes;

public:
  CatCodeTable () {}

  CatCodeTable (initializer_list<CatCodeCategoryRegion> init) {
    load(init);
  }

  void reset() {
    for (auto it = codes.begin(), it_end = codes.end(); it != it_end;) {
      for (auto lit = it->second.begin(), lit_end = it->second.end(); lit != lit_end;) {
        if (lit->first != 0) {
          lit = it->second.erase(lit);
        } else {
          lit++;
        }
      }

      if (it->second.empty()) {
        it = codes.erase(it);
      } else {
        it++;
      }
    }
  }

  void load(const vector<CatCodeCategoryRegion>& init, uint8_t level = 0) {
    for (auto it = init.cbegin(); it != init.cend(); it++) {
      for (int32_t ch = it->begin; ch <= it->end; ch++) {
        set_catcode(ch, it->category, level);
      }
    }
  }

  void set_catcode(const int32_t key, Category cat, uint8_t level = 0) {
    if (cat == OTHER_CATEGORY && level == 0) {
      codes.erase(key);
      return;
    }

    codes[key][level] = cat;

    // if (all_of(codes[key].begin(), codes[key].end(), [](pair<uint8_t, Category> p){ return p.second == OTHER_CATEGORY; })) {
    //   codes.erase(key);
    // }
  }

  Category get_catcode(const int32_t key) const {
    auto it = codes.find(key);

    // OTHER is the default category.
    return (it == codes.cend() || it->second.empty()) ?
      OTHER_CATEGORY :
      it->second.crbegin()->second;
  }

  inline Category operator[](const int32_t key) const {
    return get_catcode(key);
  }

  void pop(uint8_t level) {
    for (auto it = codes.begin(); it != codes.end(); it++) {
      it->second.erase(level);
      if (it->second.empty()) {
        codes.erase(it);
      }
    }
  }

  friend SerializationBuffer& operator <<(SerializationBuffer& buffer, const CatCodeTable& table) {
    // Count the characters that have non-zero level.
    unsigned ch_count = count_if(table.codes.cbegin(), table.codes.cend(),
      [](pair<int32_t, map<uint8_t, Category>> p) {
        return any_of(p.second.cbegin(), p.second.cend(), [](pair<uint8_t, Category> p2) { return p2.first != 0; });
      });

    buffer << ch_count;

    for (auto it = table.codes.cbegin(); it != table.codes.cend(); it++) {
      uint8_t level_count = count_if(it->second.cbegin(), it->second.cend(), [](const pair<uint8_t, Category>& p){ return p.first != 0; });

      if (level_count > 0) {
        buffer << it->first << level_count;

        for (auto lit = it->second.cbegin(); lit != it->second.cend(); lit++) {
          if (lit->first != 0) {
            buffer << lit->first << lit->second;
          }
        }
      }
    }

    return buffer;
  }

  friend DeserializationBuffer& operator >>(DeserializationBuffer& buffer, CatCodeTable& table)  {
    table.reset();

    if (buffer.length != 0) {
      int32_t ch;
      unsigned ch_count;
      uint8_t level, level_count;
      Category cat;

      buffer >> ch_count;

      for (; ch_count > 0; ch_count--) {
        buffer >> ch >> level_count;
        for (; level_count > 0; level_count--) {
          buffer >> level >> cat;
          table.codes[ch][level] = cat;
        }
      }
    }

    return buffer;
  }
};

// a bulk catcode table command
struct CatCodeCommand {
  SymbolType trigger;
  vector<CatCodeCategoryRegion> table;
};

enum ScannerMode: uint8_t {
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

  vector<CatCodeCommand> catcode_commands = {
    {
      _AT_LETTER,
      {
        {
          {'@', '@', LETTER_CATEGORY}
        }
      }
    },
    {
      _AT_OTHER,
      {
        {
          {'@', '@', OTHER_CATEGORY}
        }
      }
    },
    {
      _EXPL_BEGIN,
      {
        {
          {'\t', '\t', IGNORED_CATEGORY},
          {' ',  ' ',  IGNORED_CATEGORY},
          {'"',  '"',  OTHER_CATEGORY},
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
      {
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
      {
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
      {
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
      {
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
  uint8_t level = 1;
  CatCodeTable catcode_table = {
    {'\\',   '\\',   ESCAPE_CATEGORY},
    {'{',    '{',    BEGIN_CATEGORY},
    {'}',    '}',    END_CATEGORY},
    {'$',    '$',    MATH_SHIFT_CATEGORY},
    {'&',    '&',    ALIGNMENT_TAB_CATEGORY},
    {'\n',   '\n',   EOL_CATEGORY},
    {'#',    '#',    PARAMETER_CATEGORY},
    {'^',    '^',    SUPERSCRIPT_CATEGORY},
    {'_',    '_',    SUBSCRIPT_CATEGORY},
    // NUL is technically ignored, but tree sitter seems to use it to indicate
    // EOF.
    // {'\0',   '\0',   IGNORED_CATEGORY},
    {' ',    ' ',    SPACE_CATEGORY},
    {'\t',   '\t',   SPACE_CATEGORY},
    {'A',    'Z',    LETTER_CATEGORY},
    {'a',    'z',    LETTER_CATEGORY},
    {'~',    '~',    ACTIVE_CHAR_CATEGORY},
    {'%',    '%',    COMMENT_CATEGORY},
    {'\x7f', '\x7f', INVALID_CATEGORY}
  };

  Scanner() {}

  void reset () {
    mode = NORMAL_MODE;
    start_delim = 0;
    level = 1;
    catcode_table.reset();
  }

  unsigned serialize(char *buffer) const {
    SerializationBuffer sb(buffer);

    sb << mode << level << start_delim << catcode_table;

    return sb.length;
  }

  void deserialize(const char *buffer, unsigned length) {
    reset();

    if (length == 0) {
      return;
    }

    DeserializationBuffer sb(buffer, length);

    sb >> mode >> level >> start_delim >> catcode_table;
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

        catcode_table.load(it->table, level);

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

  bool scan_space(TSLexer *lexer) {
    Category code = catcode_table[lexer->lookahead];
    bool eol = false;

    do {
      if (code == EOL_CATEGORY) {
        // If we are ready have an EOL then do not scan as space since this is
        // a paragraph break.
        if (eol) {
          return false;
        }
        eol = true;
      }

      lexer->advance(lexer, false);
      code = catcode_table[lexer->lookahead];
    } while (code == SPACE_CATEGORY || code == EOL_CATEGORY);

    lexer->result_symbol = _SPACE;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_normal_mode(TSLexer *lexer, const bool *valid_symbols) {
    Category code = catcode_table[lexer->lookahead];

    bool r = scan_catcode_commands(lexer, valid_symbols);
    if (r) return true;

    // Look for an inline verbatim delimiter and start VERB_MODE.
    if (valid_symbols[VERB_DELIM]) {
      return scan_start_verb_delim(lexer);
    }

    if (valid_symbols[_SCOPE_BEGIN]) {
      level++;
      lexer->mark_end(lexer);
      lexer->result_symbol = _SCOPE_BEGIN;
      return true;
    }

    if (valid_symbols[_SCOPE_END]) {
      if (level > 1) catcode_table.pop(level--);
      lexer->mark_end(lexer);
      lexer->result_symbol = _SCOPE_END;
      return true;
    }

    switch (code) {
      case ESCAPE_CATEGORY:
        if (valid_symbols[_CS_BEGIN] || valid_symbols[_ESCAPED_BEGIN]) {
          return scan_escape(lexer);
        }
        break;
      case BEGIN_CATEGORY:
        if (valid_symbols[L]) {
          level++;
          return scan_single_char_symbol(lexer, L);
        }
        break;
      case END_CATEGORY:
        if (valid_symbols[EXIT]) {
          return scan_empty_symbol(lexer, EXIT);
        } else if (valid_symbols[R]) {
          if (level > 1) catcode_table.pop(level--);
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
        if (valid_symbols[_SPACE]) {
          return scan_space(lexer);
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
      // case IGNORED_CATEGORY:
      //   do {
      //     lexer->advance(lexer, true);
      //   } while (lexer->lookahead && catcode_table[lexer->lookahead] == IGNORED_CATEGORY);
      //   return false;
      case SPACE_CATEGORY:
        if (valid_symbols[_SPACE]) {
          return scan_space(lexer);
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
    return false;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
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
