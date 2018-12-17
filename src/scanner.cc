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
  _alltt_begin,
  _at_letter,
  _at_other,
  _BVerbatim_body,
  _BVerbatimstar_body,
  _cs_begin,
  _cs_end,
  _escaped_begin,
  _escaped_end,
  _expl_begin,
  _expl_end,
  _filecontents_body,
  _filecontentsstar_body,
  _lstlisting_body,
  _luacode_begin,
  _luacodestar_body,
  _luadirect_begin,
  _luaexec_begin,
  _LVerbatim_body,
  _LVerbatimstar_body,
  _minted_body,
  _scope_begin,
  _scope_end,
  _space,
  _verbatim_body,
  _Verbatim_body,
  _verbatimstar_body,
  _Verbatimstar_body,
  active_char,
  alignment_tab,
  arara_comment,
  bib_comment,
  comment,
  eol,
  exit,
  l,
  magic_comment,
  math_shift,
  parameter_char,
  r,
  subscript,
  superscript,
  tag_comment,
  verb_body,
  verb_delim
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

struct CatCodeInterval {
  int32_t begin, end;
  Category category;
};

class CatCodeTable {
protected:
  uint8_t level = 0;
  unordered_map<int32_t, map<uint8_t, Category>> codes;

  void set_catcode(const int32_t key, Category cat) {
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

public:
  CatCodeTable () {}

  CatCodeTable (initializer_list<CatCodeInterval> init) {
    set(init);
  }

  void reset() {
    level = 0;

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

  void set(const vector<CatCodeInterval>& intervals) {
    for (const CatCodeInterval& interval: intervals) {
      for (int32_t ch = interval.begin; ch <= interval.end; ch++) {
        set_catcode(ch, interval.category);
      }
    }
  }

  inline Category operator[](const int32_t key) const {
    return get_catcode(key);
  }

  void push() {
    level++;
  }

  void pop() {
    for (auto it = codes.begin(); it != codes.end();) {
      it->second.erase(level);
      if (it->second.empty()) {
        it = codes.erase(it);
      } else {
        it++;
      }
    }

    level--;
  }

  friend SerializationBuffer& operator <<(SerializationBuffer& buffer, const CatCodeTable& table) {
    // Count the characters that have non-zero level.
    unsigned ch_count = count_if(table.codes.cbegin(), table.codes.cend(),
      [](pair<int32_t, map<uint8_t, Category>> p) {
        return any_of(p.second.cbegin(), p.second.cend(), [](pair<uint8_t, Category> p2) { return p2.first != 0; });
      });

    buffer << table.level << ch_count;

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

      buffer >> table.level >> ch_count;

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
  SymbolType symbol;
  vector<CatCodeInterval> intervals;
};

struct VerbatimEnv {
  SymbolType symbol;
  string terminator;

  VerbatimEnv(SymbolType sym, string name) {
    symbol = sym;
    terminator = " \\end {" + name + "}";
  }
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
      _at_letter,
      {
        {
          {'@',   '@',   LETTER_CATEGORY}
        }
      }
    },
    {
      _at_other,
      {
        {
          {'@',   '@',   OTHER_CATEGORY}
        }
      }
    },
    {
      _expl_begin,
      {
        {
          {'\t',   '\t',   IGNORED_CATEGORY},
          {' ',    ' ',    IGNORED_CATEGORY},
          {'"',    '"',    OTHER_CATEGORY},
          {'&',    '&',    ALIGNMENT_TAB_CATEGORY},
          {':',    ':',    LETTER_CATEGORY},
          {'^',    '^',    SUPERSCRIPT_CATEGORY},
          {'_',    '_',    LETTER_CATEGORY},
          {'|',    '|',    OTHER_CATEGORY},
          {'~',    '~',    SPACE_CATEGORY}
        }
      }
    },
    { // This the default action for \ExplSyntaxOff. It will be overridden by the call to \ExplSyntaxOn.
      _expl_end,
      {
        {
          {'\t',   '\t',   SPACE_CATEGORY},
          {' ',    ' ',    SPACE_CATEGORY},
          {'"',    '"',    OTHER_CATEGORY},
          {'&',    '&',    ALIGNMENT_TAB_CATEGORY},
          {':',    ':',    OTHER_CATEGORY},
          {'^',    '^',    SUPERSCRIPT_CATEGORY},
          {'_',    '_',    SUBSCRIPT_CATEGORY},
          {'|',    '|',    OTHER_CATEGORY},
          {'~',    '~',    ACTIVE_CHAR_CATEGORY}
        }
      }
    },
    { // \luadirect catcode table
      _luadirect_begin,
      {
        {
          {1,      9,      EOL_CATEGORY},
          {'\n',   '\n',   EOL_CATEGORY},
          {11,     '$',    OTHER_CATEGORY},
          {'%',    '%',    COMMENT_CATEGORY},
          {'&',    '@',    OTHER_CATEGORY},
          {'A',    'Z',    LETTER_CATEGORY},
          {'[',    '[',    OTHER_CATEGORY},
          {'\\',   '\\',   ESCAPE_CATEGORY},
          {']',    '`',    OTHER_CATEGORY},
          {'a',    'z',    LETTER_CATEGORY},
          {'{',    '{',    BEGIN_CATEGORY},
          {'|',    '|',    OTHER_CATEGORY},
          {'}',    '}',    END_CATEGORY},
          {'~',    '~',    ACTIVE_CHAR_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}
        }
      }
    },
    { // luaexec catcode table
      _luaexec_begin,
      {
        {
          {1,      9,      EOL_CATEGORY},
          {'\n',   '\n',   EOL_CATEGORY},
          {11,     '$',    OTHER_CATEGORY},
          {'%',    '%',    COMMENT_CATEGORY},
          {'&',    '@',    OTHER_CATEGORY},
          {'A',    'Z',    LETTER_CATEGORY},
          {'[',    '[',    OTHER_CATEGORY},
          {'\\',   '\\',   ESCAPE_CATEGORY},
          {']',    '`',    OTHER_CATEGORY},
          {'a',    'z',    LETTER_CATEGORY},
          {'{',    '{',    BEGIN_CATEGORY},
          {'|',    '|',    OTHER_CATEGORY},
          {'}',    '}',    END_CATEGORY},
          {'~',    '~',    OTHER_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}
        }
      }
    },
    { // luacode catcode table
      _luacode_begin,
      {
        {
          {1,      '@',    OTHER_CATEGORY},
          {'A',    'Z',    LETTER_CATEGORY},
          {'[',    '[',    OTHER_CATEGORY},
          {'\\',   '\\',   ESCAPE_CATEGORY},
          {']',    '`',    OTHER_CATEGORY},
          {'a',    'z',    LETTER_CATEGORY},
          {'{',    '{',    BEGIN_CATEGORY},
          {'|',    '|',    OTHER_CATEGORY},
          {'}',    '}',    END_CATEGORY},
          {'~',    '~',    OTHER_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}
        }
      }
    },
    { // alltt catcode table
      _alltt_begin,
      {
        {
          {'\t',   '\t',   OTHER_CATEGORY},
          {' ',    ' ',    OTHER_CATEGORY},
          {'#',   '#',     OTHER_CATEGORY},
          {'$',   '$',     OTHER_CATEGORY},
          {'%',   '%',     OTHER_CATEGORY},
          {'&',   '&',     OTHER_CATEGORY},
          {'A',   'Z',     LETTER_CATEGORY},
          {'\\',  '\\',    ESCAPE_CATEGORY},
          {'^',   '^',     OTHER_CATEGORY},
          {'_',   '_',     OTHER_CATEGORY},
          {'a',   'z',     LETTER_CATEGORY},
          {'{',   '{',     BEGIN_CATEGORY},
          {'}',   '}',     END_CATEGORY},
          {'~',   '~',     OTHER_CATEGORY}
        }
      }
    }
  };

  ScannerMode mode = NORMAL_MODE;
  int32_t start_delim = 0;
  CatCodeTable catcode_table = {
    {' ',    ' ',    SPACE_CATEGORY},
    {'_',    '_',    SUBSCRIPT_CATEGORY},
    {'{',    '{',    BEGIN_CATEGORY},
    {'}',    '}',    END_CATEGORY},
    {'\\',   '\\',   ESCAPE_CATEGORY},
    // NUL is technically ignored, but tree sitter seems to use it to indicate
    // EOF.
    // {'\0',   '\0',   IGNORED_CATEGORY},
    {'\n',   '\n',   EOL_CATEGORY},
    {'\t',   '\t',   SPACE_CATEGORY},
    {'\x7f', '\x7f', INVALID_CATEGORY},
    {'&',    '&',    ALIGNMENT_TAB_CATEGORY},
    {'#',    '#',    PARAMETER_CATEGORY},
    {'%',    '%',    COMMENT_CATEGORY},
    {'^',    '^',    SUPERSCRIPT_CATEGORY},
    {'~',    '~',    ACTIVE_CHAR_CATEGORY},
    {'$',    '$',    MATH_SHIFT_CATEGORY},
    {'a',    'z',    LETTER_CATEGORY},
    {'A',    'Z',    LETTER_CATEGORY},
  };

  vector<VerbatimEnv> verbatims = {
    {_BVerbatim_body, "BVerbatim"},
    {_BVerbatimstar_body, "BVerbatim*"},
    {_filecontents_body, "filecontents"},
    {_filecontentsstar_body, "filecontents*"},
    {_lstlisting_body, "lstlisting"},
    {_luacodestar_body, "luacode*"},
    {_LVerbatim_body, "LVerbatim"},
    {_LVerbatimstar_body, "LVerbatim*"},
    {_minted_body, "minted"},
    {_verbatim_body, "verbatim"},
    {_Verbatim_body, "Verbatim"},
    {_verbatimstar_body, "verbatim*"},
    {_Verbatimstar_body, "Verbatim*"}
  };

  Scanner() {}

  void reset () {
    mode = NORMAL_MODE;
    start_delim = 0;
    catcode_table.reset();
    // Push the catcode table once to protect the default catcodes.
    catcode_table.push();
  }

  unsigned serialize(char *buffer) const {
    SerializationBuffer buf(buffer);

    buf << mode << start_delim << catcode_table;

    return buf.length;
  }

  void deserialize(const char *buffer, unsigned length) {
    reset();

    if (length == 0) {
      return;
    }

    DeserializationBuffer buf(buffer, length);

    buf >> mode >> start_delim >> catcode_table;
  }

  bool scan_start_verb_delim(TSLexer *lexer) {
    // NOTE: ' ' (space) is a perfectly valid delim, as is %
    // Also: The first * (if present) is gobbled by the main grammar, but the second is a valid delim
    if (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      mode = VERB_MODE;
      start_delim = lexer->lookahead;
      lexer->advance(lexer, false);
      lexer->result_symbol = verb_delim;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_end_verb_delim(TSLexer *lexer) {
    if (lexer->lookahead == start_delim) {
      mode = NORMAL_MODE;
      lexer->advance(lexer, false);
      lexer->result_symbol = verb_delim;
      lexer->mark_end(lexer);
      return true;
    }

    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      mode = NORMAL_MODE;
      lexer->result_symbol = verb_delim; // don't eat the newline (for consistency)
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = verb_body;
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

  bool matches_string(TSLexer *lexer, string value) {
    for (char ch: value) {
      switch (ch) {
        case '\\':
          if (catcode_table[lexer->lookahead] != ESCAPE_CATEGORY) {
            return false;
          }
          lexer->advance(lexer, false);
          break;
        case '{':
          if (catcode_table[lexer->lookahead] != BEGIN_CATEGORY) {
            return false;
          }
          lexer->advance(lexer, false);
          break;
        case '}':
          if (catcode_table[lexer->lookahead] != END_CATEGORY) {
            return false;
          }
          lexer->advance(lexer, false);
          break;
        case ' ':
          while (catcode_table[lexer->lookahead] == SPACE_CATEGORY) {
            lexer->advance(lexer, false);
          }
          break;
        default:
          if (lexer->lookahead != ch) {
            return false;
          }
          lexer->advance(lexer, false);
          break;
      }
    }

    return true;
  }

  bool scan_verbatim_body(TSLexer *lexer, const bool *valid_symbols) {
    for (const VerbatimEnv& env: verbatims) {
      if (valid_symbols[env.symbol]) {

        lexer->mark_end(lexer);
        lexer->result_symbol = env.symbol;

        do {
          if (matches_string(lexer, env.terminator)) {
            return true;
          }

          while (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
            lexer->advance(lexer, false);
          }

          if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
            lexer->advance(lexer, false);
          }

          lexer->mark_end(lexer);
        } while (lexer->lookahead);

        return true;
      }
    }

    return false;
  }

  bool scan_comment(TSLexer *lexer) {
    // bitset<16> comment_categories = ~(EOL_FLAG | IGNORED_FLAG);
    string comment_type;

    // Skip the comment char
    lexer->advance(lexer, false);
    lexer->result_symbol = comment;

    if (match_length(lexer, ":") == -1) {
      lexer->advance(lexer, false);
      lexer->result_symbol = tag_comment;
    } else {
      // Skip any leading spaces
      while (catcode_table[lexer->lookahead] == SPACE_CATEGORY) {
        lexer->advance(lexer, false);
      }

      int len = match_length(lexer, "arara:");

      if (len == -1) {
        lexer->result_symbol = arara_comment;
      } else if (len == 0) {
        len = match_length(lexer, "!tex", EOL_FLAG | SPACE_FLAG | IGNORED_FLAG);
        if (len == -1) {
          lexer->result_symbol = magic_comment;
        } else if (len == 1 && match_length(lexer, "bib", EOL_FLAG | SPACE_FLAG | IGNORED_FLAG) == -1) {
          lexer->result_symbol = bib_comment;
        }
      }
    }

    // Gobble the reset of the comment
    while (lexer->lookahead != 0 && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
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
    for (const CatCodeCommand& cmd: catcode_commands) {
      if (valid_symbols[cmd.symbol]) {
        lexer->result_symbol = cmd.symbol;
        lexer->mark_end(lexer);

        catcode_table.set(cmd.intervals);

        return true;
      }
    }

    return false;
  }

  bool scan_cs_mode(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[_cs_end] && catcode_table[lexer->lookahead] != LETTER_CATEGORY) {
      mode = NORMAL_MODE;
      lexer->result_symbol = _cs_end;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_escaped_mode(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[_escaped_end]) {
      mode = NORMAL_MODE;
      lexer->result_symbol = _escaped_end;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool scan_escape(TSLexer *lexer) {
    lexer->advance(lexer, false);

    if (catcode_table[lexer->lookahead] == LETTER_CATEGORY) {
      mode = CS_MODE;
      lexer->result_symbol = _cs_begin;
    } else {
      mode = ESCAPED_MODE;
      lexer->result_symbol = _escaped_begin;
    }
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_verb_mode(TSLexer *lexer, const bool *valid_symbols) {
    // Look for an inline verbatim delimiter and end the verbatim.
    if (valid_symbols[verb_delim]) {
      return scan_end_verb_delim(lexer);
    }

    // Scan an inline verbatim body.
    if (valid_symbols[verb_body]) {
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

    lexer->result_symbol = _space;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_normal_mode(TSLexer *lexer, const bool *valid_symbols) {
    Category code = catcode_table[lexer->lookahead];

    bool res = scan_catcode_commands(lexer, valid_symbols);
    if (res) return true;

    // Look for an inline verbatim delimiter and start VERB_MODE.
    if (valid_symbols[verb_delim]) {
      return scan_start_verb_delim(lexer);
    }

    res = scan_verbatim_body(lexer, valid_symbols);
    if (res) return true;

    if (valid_symbols[_scope_begin]) {
      catcode_table.push();
      lexer->mark_end(lexer);
      lexer->result_symbol = _scope_begin;
      return true;
    }

    if (valid_symbols[_scope_end]) {
      catcode_table.pop();
      lexer->mark_end(lexer);
      lexer->result_symbol = _scope_end;
      return true;
    }

    if (lexer->lookahead == 0 && valid_symbols[exit]) {
      return scan_empty_symbol(lexer, exit);
    }

    switch (code) {
      case ESCAPE_CATEGORY:
        if (valid_symbols[_cs_begin] || valid_symbols[_escaped_begin]) {
          return scan_escape(lexer);
        }
        break;
      case BEGIN_CATEGORY:
        if (valid_symbols[l]) {
          return scan_single_char_symbol(lexer, l);
        }
        break;
      case END_CATEGORY:
        if (valid_symbols[exit]) {
          return scan_empty_symbol(lexer, exit);
        } else if (valid_symbols[r]) {
          return scan_single_char_symbol(lexer, r);
        }
        break;
      case MATH_SHIFT_CATEGORY:
        if (valid_symbols[math_shift]) {
          return scan_single_char_symbol(lexer, math_shift);
        }
        break;
      case ALIGNMENT_TAB_CATEGORY:
        if (valid_symbols[alignment_tab]) {
          return scan_single_char_symbol(lexer, alignment_tab);
        }
        break;
      case EOL_CATEGORY:
        if (valid_symbols[eol]) {
          return scan_single_char_symbol(lexer, eol);
        }
        if (valid_symbols[_space]) {
          return scan_space(lexer);
        }
        break;
      case PARAMETER_CATEGORY:
        if (valid_symbols[parameter_char]) {
          return scan_multi_char_symbol(lexer, parameter_char, PARAMETER_CATEGORY);
        }
        break;
      case SUPERSCRIPT_CATEGORY:
        if (valid_symbols[superscript]) {
          return scan_single_char_symbol(lexer, superscript);
        }
        break;
      case SUBSCRIPT_CATEGORY:
        if (valid_symbols[subscript]) {
          return scan_single_char_symbol(lexer, subscript);
        }
        break;
      // case IGNORED_CATEGORY:
      //   do {
      //     lexer->advance(lexer, true);
      //   } while (lexer->lookahead && catcode_table[lexer->lookahead] == IGNORED_CATEGORY);
      //   return false;
      case SPACE_CATEGORY:
        if (valid_symbols[_space]) {
          return scan_space(lexer);
        }
        break;
      case ACTIVE_CHAR_CATEGORY:
        if (valid_symbols[active_char]) {
          return scan_single_char_symbol(lexer, active_char);
        }
        break;
      case COMMENT_CATEGORY:
        if (valid_symbols[comment]) {
          return scan_comment(lexer);
        }
        break;
      default:
        break;
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
