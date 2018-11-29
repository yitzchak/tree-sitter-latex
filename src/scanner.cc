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

enum BlockOperation {
  BLOCK_SET,
  BLOCK_PUSH,
  BLOCK_POP
};

struct CatCodeBlock {
  SymbolType begin;
  SymbolType end;
  bool reset;
  BlockOperation operation;
  map<int32_t, Category> catcodes;
};

struct Scanner {
  static const size_t MIN_CATCODE_TABLE_SIZE = 128;
  static const size_t MAX_CATCODE_TABLE_SIZE = 256;

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
    {~LETTER_FLAG,                _CS_END,           ZERO_WIDTH},
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

  list<CatCodeBlock> catcode_blocks = {
    {
      _AT_LETTER,
      _AT_LETTER,
      false,
      BLOCK_SET,
      {
        {'@', LETTER_CATEGORY}
      }
    },
    {
      _AT_OTHER,
      _AT_OTHER,
      false,
      BLOCK_SET,
      {
        {'@', OTHER_CATEGORY}
      }
    },
    {
      _EXPL_BEGIN,
      _EXPL_END,
      false,
      BLOCK_PUSH,
      {
        {'\t', IGNORED_CATEGORY},
        {' ',  IGNORED_CATEGORY},
        {'"',  OTHER_CATEGORY},
        {'&',  ALIGNMENT_TAB_CATEGORY},
        {':',  LETTER_CATEGORY},
        {'^',  SUPERSCRIPT_CATEGORY},
        {'_',  LETTER_CATEGORY},
        {'|',  OTHER_CATEGORY},
        {'~',  SPACE_CATEGORY}
      }
    },
    { // This the default action for \ExplSyntaxOff. It will be overridden by the call to \ExplSyntaxOn.
      _EXPL_END,
      _EXPL_END,
      false,
      BLOCK_SET,
      {
        {'\t', SPACE_CATEGORY},
        {' ',  SPACE_CATEGORY},
        {'"',  OTHER_CATEGORY},
        {'&',  ALIGNMENT_TAB_CATEGORY},
        {':',  OTHER_CATEGORY},
        {'^',  SUPERSCRIPT_CATEGORY},
        {'_',  SUBSCRIPT_CATEGORY},
        {'|',  OTHER_CATEGORY},
        {'~',  ACTIVE_CHAR_CATEGORY}
      }
    },
    { // \luadirect catcode table
      _LUADIRECT_BEGIN,
      _LUA_END,
      true,
      BLOCK_PUSH,
      {
        {'\\', ESCAPE_CATEGORY},
        {'{', BEGIN_CATEGORY},
        {'}', END_CATEGORY},
        // {'#', PARAMETER_CATEGORY},
        {'\n', EOL_CATEGORY},
        {'A', LETTER_CATEGORY},
        {'B', LETTER_CATEGORY},
        {'C', LETTER_CATEGORY},
        {'D', LETTER_CATEGORY},
        {'E', LETTER_CATEGORY},
        {'F', LETTER_CATEGORY},
        {'G', LETTER_CATEGORY},
        {'H', LETTER_CATEGORY},
        {'I', LETTER_CATEGORY},
        {'J', LETTER_CATEGORY},
        {'K', LETTER_CATEGORY},
        {'L', LETTER_CATEGORY},
        {'M', LETTER_CATEGORY},
        {'N', LETTER_CATEGORY},
        {'O', LETTER_CATEGORY},
        {'P', LETTER_CATEGORY},
        {'Q', LETTER_CATEGORY},
        {'R', LETTER_CATEGORY},
        {'S', LETTER_CATEGORY},
        {'T', LETTER_CATEGORY},
        {'U', LETTER_CATEGORY},
        {'V', LETTER_CATEGORY},
        {'W', LETTER_CATEGORY},
        {'X', LETTER_CATEGORY},
        {'Y', LETTER_CATEGORY},
        {'Z', LETTER_CATEGORY},
        {'a', LETTER_CATEGORY},
        {'b', LETTER_CATEGORY},
        {'c', LETTER_CATEGORY},
        {'d', LETTER_CATEGORY},
        {'e', LETTER_CATEGORY},
        {'f', LETTER_CATEGORY},
        {'g', LETTER_CATEGORY},
        {'h', LETTER_CATEGORY},
        {'i', LETTER_CATEGORY},
        {'j', LETTER_CATEGORY},
        {'k', LETTER_CATEGORY},
        {'l', LETTER_CATEGORY},
        {'m', LETTER_CATEGORY},
        {'n', LETTER_CATEGORY},
        {'o', LETTER_CATEGORY},
        {'p', LETTER_CATEGORY},
        {'q', LETTER_CATEGORY},
        {'r', LETTER_CATEGORY},
        {'s', LETTER_CATEGORY},
        {'t', LETTER_CATEGORY},
        {'u', LETTER_CATEGORY},
        {'v', LETTER_CATEGORY},
        {'w', LETTER_CATEGORY},
        {'x', LETTER_CATEGORY},
        {'y', LETTER_CATEGORY},
        {'z', LETTER_CATEGORY},
        {'~', ACTIVE_CHAR_CATEGORY},
        {'%', COMMENT_CATEGORY}
      }
    },
    { // luaexec catcode table
      _LUAEXEC_BEGIN,
      _LUA_END,
      true,
      BLOCK_PUSH,
      {
        {'\\', ESCAPE_CATEGORY},
        {'{', BEGIN_CATEGORY},
        {'}', END_CATEGORY},
        {'\n', EOL_CATEGORY},
        {'A', LETTER_CATEGORY},
        {'B', LETTER_CATEGORY},
        {'C', LETTER_CATEGORY},
        {'D', LETTER_CATEGORY},
        {'E', LETTER_CATEGORY},
        {'F', LETTER_CATEGORY},
        {'G', LETTER_CATEGORY},
        {'H', LETTER_CATEGORY},
        {'I', LETTER_CATEGORY},
        {'J', LETTER_CATEGORY},
        {'K', LETTER_CATEGORY},
        {'L', LETTER_CATEGORY},
        {'M', LETTER_CATEGORY},
        {'N', LETTER_CATEGORY},
        {'O', LETTER_CATEGORY},
        {'P', LETTER_CATEGORY},
        {'Q', LETTER_CATEGORY},
        {'R', LETTER_CATEGORY},
        {'S', LETTER_CATEGORY},
        {'T', LETTER_CATEGORY},
        {'U', LETTER_CATEGORY},
        {'V', LETTER_CATEGORY},
        {'W', LETTER_CATEGORY},
        {'X', LETTER_CATEGORY},
        {'Y', LETTER_CATEGORY},
        {'Z', LETTER_CATEGORY},
        {'a', LETTER_CATEGORY},
        {'b', LETTER_CATEGORY},
        {'c', LETTER_CATEGORY},
        {'d', LETTER_CATEGORY},
        {'e', LETTER_CATEGORY},
        {'f', LETTER_CATEGORY},
        {'g', LETTER_CATEGORY},
        {'h', LETTER_CATEGORY},
        {'i', LETTER_CATEGORY},
        {'j', LETTER_CATEGORY},
        {'k', LETTER_CATEGORY},
        {'l', LETTER_CATEGORY},
        {'m', LETTER_CATEGORY},
        {'n', LETTER_CATEGORY},
        {'o', LETTER_CATEGORY},
        {'p', LETTER_CATEGORY},
        {'q', LETTER_CATEGORY},
        {'r', LETTER_CATEGORY},
        {'s', LETTER_CATEGORY},
        {'t', LETTER_CATEGORY},
        {'u', LETTER_CATEGORY},
        {'v', LETTER_CATEGORY},
        {'w', LETTER_CATEGORY},
        {'x', LETTER_CATEGORY},
        {'y', LETTER_CATEGORY},
        {'z', LETTER_CATEGORY},
        {'%', COMMENT_CATEGORY}
      }
    },
    { // luacode catcode table
      _LUACODE_BEGIN,
      _LUA_END,
      true,
      BLOCK_PUSH,
      {
        {'\\', ESCAPE_CATEGORY},
        {'{', BEGIN_CATEGORY},
        {'}', END_CATEGORY},
        {'A', LETTER_CATEGORY},
        {'B', LETTER_CATEGORY},
        {'C', LETTER_CATEGORY},
        {'D', LETTER_CATEGORY},
        {'E', LETTER_CATEGORY},
        {'F', LETTER_CATEGORY},
        {'G', LETTER_CATEGORY},
        {'H', LETTER_CATEGORY},
        {'I', LETTER_CATEGORY},
        {'J', LETTER_CATEGORY},
        {'K', LETTER_CATEGORY},
        {'L', LETTER_CATEGORY},
        {'M', LETTER_CATEGORY},
        {'N', LETTER_CATEGORY},
        {'O', LETTER_CATEGORY},
        {'P', LETTER_CATEGORY},
        {'Q', LETTER_CATEGORY},
        {'R', LETTER_CATEGORY},
        {'S', LETTER_CATEGORY},
        {'T', LETTER_CATEGORY},
        {'U', LETTER_CATEGORY},
        {'V', LETTER_CATEGORY},
        {'W', LETTER_CATEGORY},
        {'X', LETTER_CATEGORY},
        {'Y', LETTER_CATEGORY},
        {'Z', LETTER_CATEGORY},
        {'a', LETTER_CATEGORY},
        {'b', LETTER_CATEGORY},
        {'c', LETTER_CATEGORY},
        {'d', LETTER_CATEGORY},
        {'e', LETTER_CATEGORY},
        {'f', LETTER_CATEGORY},
        {'g', LETTER_CATEGORY},
        {'h', LETTER_CATEGORY},
        {'i', LETTER_CATEGORY},
        {'j', LETTER_CATEGORY},
        {'k', LETTER_CATEGORY},
        {'l', LETTER_CATEGORY},
        {'m', LETTER_CATEGORY},
        {'n', LETTER_CATEGORY},
        {'o', LETTER_CATEGORY},
        {'p', LETTER_CATEGORY},
        {'q', LETTER_CATEGORY},
        {'r', LETTER_CATEGORY},
        {'s', LETTER_CATEGORY},
        {'t', LETTER_CATEGORY},
        {'u', LETTER_CATEGORY},
        {'v', LETTER_CATEGORY},
        {'w', LETTER_CATEGORY},
        {'x', LETTER_CATEGORY},
        {'y', LETTER_CATEGORY},
        {'z', LETTER_CATEGORY},
      }
    }
  };

  int32_t start_delim = 0;
  vector<Category> catcode_table;
  map<int32_t, Category> overflow_catcodes;
  map<int32_t, Category> saved_catcodes;
  map<SymbolType, map<int32_t, Category>> s_catcodes;

  Scanner() {}

  void reset () {
    start_delim = 0;
    catcode_table.assign(MIN_CATCODE_TABLE_SIZE, OTHER_CATEGORY);
    overflow_catcodes.clear();
    saved_catcodes.clear();
  }

  void initialize() {
    reset();

    set_catcode('\\', ESCAPE_CATEGORY);
    set_catcode('{', BEGIN_CATEGORY);
    set_catcode('}', END_CATEGORY);
    set_catcode('$', MATH_SHIFT_CATEGORY);
    set_catcode('&', ALIGNMENT_TAB_CATEGORY);
    set_catcode('\n', EOL_CATEGORY);
    set_catcode('#', PARAMETER_CATEGORY);
    set_catcode('^', SUPERSCRIPT_CATEGORY);
    set_catcode('_', SUBSCRIPT_CATEGORY);
    set_catcode('\0', IGNORED_CATEGORY);
    set_catcode(' ', SPACE_CATEGORY);
    set_catcode('\t', SPACE_CATEGORY);
    set_catcode('A', LETTER_CATEGORY);
    set_catcode('B', LETTER_CATEGORY);
    set_catcode('C', LETTER_CATEGORY);
    set_catcode('D', LETTER_CATEGORY);
    set_catcode('E', LETTER_CATEGORY);
    set_catcode('F', LETTER_CATEGORY);
    set_catcode('G', LETTER_CATEGORY);
    set_catcode('H', LETTER_CATEGORY);
    set_catcode('I', LETTER_CATEGORY);
    set_catcode('J', LETTER_CATEGORY);
    set_catcode('K', LETTER_CATEGORY);
    set_catcode('L', LETTER_CATEGORY);
    set_catcode('M', LETTER_CATEGORY);
    set_catcode('N', LETTER_CATEGORY);
    set_catcode('O', LETTER_CATEGORY);
    set_catcode('P', LETTER_CATEGORY);
    set_catcode('Q', LETTER_CATEGORY);
    set_catcode('R', LETTER_CATEGORY);
    set_catcode('S', LETTER_CATEGORY);
    set_catcode('T', LETTER_CATEGORY);
    set_catcode('U', LETTER_CATEGORY);
    set_catcode('V', LETTER_CATEGORY);
    set_catcode('W', LETTER_CATEGORY);
    set_catcode('X', LETTER_CATEGORY);
    set_catcode('Y', LETTER_CATEGORY);
    set_catcode('Z', LETTER_CATEGORY);
    set_catcode('a', LETTER_CATEGORY);
    set_catcode('b', LETTER_CATEGORY);
    set_catcode('c', LETTER_CATEGORY);
    set_catcode('d', LETTER_CATEGORY);
    set_catcode('e', LETTER_CATEGORY);
    set_catcode('f', LETTER_CATEGORY);
    set_catcode('g', LETTER_CATEGORY);
    set_catcode('h', LETTER_CATEGORY);
    set_catcode('i', LETTER_CATEGORY);
    set_catcode('j', LETTER_CATEGORY);
    set_catcode('k', LETTER_CATEGORY);
    set_catcode('l', LETTER_CATEGORY);
    set_catcode('m', LETTER_CATEGORY);
    set_catcode('n', LETTER_CATEGORY);
    set_catcode('o', LETTER_CATEGORY);
    set_catcode('p', LETTER_CATEGORY);
    set_catcode('q', LETTER_CATEGORY);
    set_catcode('r', LETTER_CATEGORY);
    set_catcode('s', LETTER_CATEGORY);
    set_catcode('t', LETTER_CATEGORY);
    set_catcode('u', LETTER_CATEGORY);
    set_catcode('v', LETTER_CATEGORY);
    set_catcode('w', LETTER_CATEGORY);
    set_catcode('x', LETTER_CATEGORY);
    set_catcode('y', LETTER_CATEGORY);
    set_catcode('z', LETTER_CATEGORY);
    set_catcode('~', ACTIVE_CHAR_CATEGORY);
    set_catcode('%', COMMENT_CATEGORY);
    set_catcode('\x7f', INVALID_CATEGORY);
  }

  Category get_catcode(int32_t key) {
    if (key > -1 && key < catcode_table.size()) {
      return catcode_table[key];
    }

    auto it = overflow_catcodes.find(key);

    return (it == overflow_catcodes.end()) ?
      OTHER_CATEGORY :
      it->second;
  }

  void set_catcode(int32_t key, Category code) {
    if (key > -1 && key < catcode_table.size()) {
      catcode_table[key] = code;
    } else if (key < MAX_CATCODE_TABLE_SIZE) {
      catcode_table.resize(key + 1, OTHER_CATEGORY);
      catcode_table[key] = code;
    } else if (code == OTHER_CATEGORY) {
      overflow_catcodes.erase(key);
    } else {
      overflow_catcodes[key] = code;
    }
  }

  void push_catcode(int32_t key, Category code) {
    saved_catcodes[key] = get_catcode(key);
    set_catcode(key, code);
  }

  void pop_catcode(int32_t key) {
    auto it = saved_catcodes.find(key);

    if (it != saved_catcodes.end()) {
      set_catcode(key, it->second);
      saved_catcodes.erase(key);
    }
  }

  CatCodeBlock load_catcode_block(CatCodeBlock block) {
    CatCodeBlock previous;

    previous.begin = block.end;
    previous.end = block.end;
    previous.reset = block.reset;
    previous.operation = (block.operation == BLOCK_PUSH) ? BLOCK_POP : BLOCK_SET;

    if (block.reset) {
      previous.catcodes = overflow_catcodes;

      for (int32_t ch = 0; ch < catcode_table.size(); ch++) {
        if (catcode_table[ch] != OTHER_CATEGORY) {
          previous.catcodes[ch] = catcode_table[ch];
        }
      }

      catcode_table.assign(MIN_CATCODE_TABLE_SIZE, OTHER_CATEGORY);
      overflow_catcodes.clear();
    }

    for (auto it = block.catcodes.cbegin(); it != block.catcodes.cend(); it++) {
      if (!block.reset) {
        previous.catcodes[it->first] = get_catcode(it->first);
      }

      set_catcode(it->first, it->second);
    }

    return previous;
  }

  unsigned serialize(char *buffer) {
    const size_t ch_size = sizeof(int32_t);

    // First save the verbatim delimiter
    memcpy(&buffer[0], &start_delim, ch_size);

    // Next store the catcodes map as [char, char] pairs
    unsigned num_serialized = 0;
    unsigned length = sizeof(start_delim) + sizeof(num_serialized);

    // TODO: Check for overflow (probably never going to happen though)

    for (int32_t ch = 0; ch < catcode_table.size(); ch++) {
      if (catcode_table[ch] != OTHER_CATEGORY) {
        memcpy(&buffer[length], &ch, ch_size); // character
        length += ch_size;
        buffer[length++] = static_cast<char>(catcode_table[ch]); // catcode
        num_serialized++;
      }
    }

    for (auto it = overflow_catcodes.begin(); it != overflow_catcodes.end(); ++it) {
      memcpy(&buffer[length], &it->first, ch_size); // character
      length += ch_size;
      buffer[length++] = static_cast<char>(it->second); // catcode
      num_serialized++;
    }

    memcpy(&buffer[sizeof(start_delim)], &num_serialized, sizeof(num_serialized));

    // Next store the saved_catcodes map as [char, char] pairs
    unsigned saved_cat_count_pos = length;
    length += sizeof(saved_cat_count_pos);

    num_serialized = 0;

    for (auto it = saved_catcodes.begin(); it != saved_catcodes.end(); ++it) {
      memcpy(&buffer[length], &it->first, ch_size); // character
      length += ch_size;
      buffer[length++] = static_cast<char>(it->second);
      num_serialized++;
    }

    num_serialized = saved_catcodes.size();
    memcpy(&buffer[saved_cat_count_pos], &num_serialized, sizeof(num_serialized));

    return length;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      // Initialize the scanner with a the default catcode table, start_delim, etc.
      initialize();
      return;
    };

    const size_t ch_size = sizeof(int32_t);

    // Reset the scanner
    reset();

    // Retrieve the verbatim start delimiter
    memcpy(&start_delim, &buffer[0], ch_size);

    // Retrieve the catcode pairs
    unsigned num_serialized;
    memcpy(&num_serialized, &buffer[sizeof(start_delim)], sizeof(num_serialized));

    unsigned i = sizeof(start_delim) + sizeof(num_serialized);
    unsigned set = 0;
    while (set < num_serialized) {
      int32_t character;
      memcpy(&character, &buffer[i], ch_size);
      i += ch_size;
      Category cat = static_cast<Category>(buffer[i++]);
      set_catcode(character, cat);
      set += 1;
    }

    // Retrieve the saved_catcode pairs
    saved_catcodes.clear();

    memcpy(&num_serialized, &buffer[i], sizeof(num_serialized));

    i += sizeof(num_serialized);
    set = 0;
    while (set < num_serialized) {
      int32_t character;
      memcpy(&character, &buffer[i], ch_size);
      i += ch_size;
      Category cat = static_cast<Category>(buffer[i++]);
      saved_catcodes[character] = cat;
      set += 1;
    }
  }

  bool scan_start_verb_delim(TSLexer *lexer) {
    // NOTE: ' ' (space) is a perfectly valid delim, as is %
    // Also: The first * (if present) is gobbled by the main grammar, but the second is a valid delim
    if (lexer->lookahead && get_catcode(lexer->lookahead) != EOL_CATEGORY) {
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

    if (get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->result_symbol = VERB_DELIM; // don't eat the newline (for consistency)
      lexer->mark_end(lexer);
      start_delim = 0;
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = VERB_BODY;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_verb_line(TSLexer *lexer) {
    while (lexer->lookahead && get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    if (get_catcode(lexer->lookahead) == EOL_CATEGORY) {
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
        while (desc.categories[get_catcode(lexer->lookahead)]) {
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
      while (get_catcode(lexer->lookahead) == SPACE_CATEGORY) {
        lexer->advance(lexer, false);
      }

      // Try to capture a tag
      while (comment_type_categories[get_catcode(lexer->lookahead)]) {
        comment_type += lexer->lookahead;
        lexer->advance(lexer, false);
      }

      // Look for a valid comment tag
      auto it = comment_types.find(comment_type);

      lexer->result_symbol = (it == comment_types.end()) ? COMMENT : it->second;
    }

    // Gobble the reset of the comment
    while (comment_categories[get_catcode(lexer->lookahead)]) {
      lexer->advance(lexer, false);
    }

    // Eat any EOL
    if (get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);

    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    Category code = get_catcode(lexer->lookahead);

    for (auto it = catcode_blocks.begin(); it != catcode_blocks.end(); it++) {
      if (valid_symbols[it->begin]) {
        lexer->result_symbol = it->begin;
        lexer->mark_end(lexer);

        CatCodeBlock previous = load_catcode_block(*it);

        switch (it->operation) {
          case BLOCK_PUSH:
            catcode_blocks.push_front(previous);
            break;
          case BLOCK_POP:
            catcode_blocks.erase(it);
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
