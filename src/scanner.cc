#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

#include "tree_sitter/parser.h"


namespace {

using std::vector;
using std::string;
using std::map;

enum TokenType {
  _SPACE,
  ACTIVE_CHAR,
  ALIGNMENT_TAB,
  BEGIN_DISPLAY_MATH,
  BEGIN_GROUP,
  BEGIN_INLINE_MATH,
  BEGIN_TOKEN,
  CATCODE_TOKEN,
  COMMENT_CHAR,
  DISPLAY_MATH_ENV_NAME,
  DISPLAY_MATH_SHIFT,
  DOCUMENTCLASS_TOKEN,
  EMPH_TOKEN,
  END_DISPLAY_MATH,
  END_GROUP,
  END_INLINE_MATH,
  END_TOKEN,
  EOL,
  ESCAPED,
  EXPLSYNTAXOFF_TOKEN,
  EXPLSYNTAXON_TOKEN,
  FOOTNOTE_TOKEN,
  INCLUDE_TOKEN,
  INLINE_MATH_ENV_NAME,
  INLINE_MATH_SHIFT,
  MAKEATLETTER_TOKEN,
  MAKEATOTHER_TOKEN,
  NAME,
  PARAMETER_CHAR,
  PROVIDESEXPLCLASS_TOKEN,
  PROVIDESEXPLFILE_TOKEN,
  PROVIDESEXPLPACKAGE_TOKEN,
  SECTION_TOKEN,
  STORAGE_TOKEN,
  SUBSCRIPT,
  SUPERSCRIPT,
  TAG_TOKEN,
  TEXT,
  TEXTBF_TOKEN,
  TEXTIT_TOKEN,
  TEXTTT_TOKEN,
  TOKEN,
  USEPACKAGE_TOKEN,
  VERB_BODY,
  VERB_DELIM,
  VERB_LINE,
  VERB_TOKEN,
  VERBATIM_ENV_NAME,
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

struct CategoryDescription {
  Category category;
  TokenType type;
  bool repeat;
};

struct Scanner {
  static const int CATCODE_TABLE_SIZE = 128;

  int32_t start_delim = 0;

  vector<CategoryDescription> category_descriptions = {
    {ACTIVE_CHAR_CATEGORY, ACTIVE_CHAR, false},
    {ALIGNMENT_TAB_CATEGORY, ALIGNMENT_TAB, false},
    {BEGIN_CATEGORY, BEGIN_GROUP, false},
    {COMMENT_CATEGORY, COMMENT_CHAR, false},
    {END_CATEGORY, END_GROUP, false},
    {EOL_CATEGORY, EOL, false},
    {PARAMETER_CATEGORY, PARAMETER_CHAR, false},
    // {MATH_SHIFT_CATEGORY, MATH_SHIFT, false},
    {SPACE_CATEGORY, _SPACE, true},
    {SUBSCRIPT_CATEGORY, SUBSCRIPT, false},
    {SUPERSCRIPT_CATEGORY, SUPERSCRIPT, false}
  };

  map<string, TokenType> names = {
    {"align", DISPLAY_MATH_ENV_NAME},
    {"align*", DISPLAY_MATH_ENV_NAME},
    {"alignat", DISPLAY_MATH_ENV_NAME},
    {"alignat*", DISPLAY_MATH_ENV_NAME},
    {"altt", VERBATIM_ENV_NAME},
    {"BVerbatim", VERBATIM_ENV_NAME},
    {"BVerbatim*", VERBATIM_ENV_NAME},
    {"darray", DISPLAY_MATH_ENV_NAME},
    {"darray*", DISPLAY_MATH_ENV_NAME},
    {"dgroup", DISPLAY_MATH_ENV_NAME},
    {"dgroup*", DISPLAY_MATH_ENV_NAME},
    {"displaymath", DISPLAY_MATH_ENV_NAME},
    {"dmath", DISPLAY_MATH_ENV_NAME},
    {"dmath*", DISPLAY_MATH_ENV_NAME},
    {"dseries", DISPLAY_MATH_ENV_NAME},
    {"dseries*", DISPLAY_MATH_ENV_NAME},
    {"eqnarray", DISPLAY_MATH_ENV_NAME},
    {"eqnarray*", DISPLAY_MATH_ENV_NAME},
    {"equation", DISPLAY_MATH_ENV_NAME},
    {"equation*", DISPLAY_MATH_ENV_NAME},
    {"flalign", DISPLAY_MATH_ENV_NAME},
    {"flalign*", DISPLAY_MATH_ENV_NAME},
    {"gather", DISPLAY_MATH_ENV_NAME},
    {"gather*", DISPLAY_MATH_ENV_NAME},
    {"lstlisting", VERBATIM_ENV_NAME},
    {"LVerbatim", VERBATIM_ENV_NAME},
    {"LVerbatim*", VERBATIM_ENV_NAME},
    {"math", INLINE_MATH_ENV_NAME},
    {"minted", VERBATIM_ENV_NAME},
    {"multiline", DISPLAY_MATH_ENV_NAME},
    {"multiline*", DISPLAY_MATH_ENV_NAME},
    {"split", DISPLAY_MATH_ENV_NAME},
    {"split*", DISPLAY_MATH_ENV_NAME},
    {"verbatim", VERBATIM_ENV_NAME},
    {"Verbatim", VERBATIM_ENV_NAME},
    {"Verbatim*", VERBATIM_ENV_NAME}
  };

  map<string, TokenType> tokens = {
    {"(", BEGIN_INLINE_MATH},
    {")", END_INLINE_MATH},
    {"[", BEGIN_DISPLAY_MATH},
    {"]", END_DISPLAY_MATH},
    {"addchap", SECTION_TOKEN},
    {"addpart", SECTION_TOKEN},
    {"addsec", SECTION_TOKEN},
    {"begin", BEGIN_TOKEN},
    {"catcode", CATCODE_TOKEN},
    {"chapter", SECTION_TOKEN},
    {"def", STORAGE_TOKEN},
    {"documentclass", DOCUMENTCLASS_TOKEN},
    {"emph", EMPH_TOKEN},
    {"end", END_TOKEN},
    {"ExplSyntaxOff", EXPLSYNTAXOFF_TOKEN},
    {"ExplSyntaxOn", EXPLSYNTAXON_TOKEN},
    {"footnote", FOOTNOTE_TOKEN},
    {"include", INCLUDE_TOKEN},
    {"input", INCLUDE_TOKEN},
    {"kcatcode", CATCODE_TOKEN},
    {"makeatletter", MAKEATLETTER_TOKEN},
    {"makeatother", MAKEATOTHER_TOKEN},
    {"minisec", SECTION_TOKEN},
    {"paragraph", SECTION_TOKEN},
    {"part", SECTION_TOKEN},
    {"ProvidesExplClass", PROVIDESEXPLCLASS_TOKEN},
    {"ProvidesExplFile", PROVIDESEXPLFILE_TOKEN},
    {"ProvidesExplPackage", PROVIDESEXPLPACKAGE_TOKEN},
    {"section", SECTION_TOKEN},
    {"subparagraph", SECTION_TOKEN},
    {"subsection", SECTION_TOKEN},
    {"subsubsection", SECTION_TOKEN},
    {"tag", TAG_TOKEN},
    {"textbf", TEXTBF_TOKEN},
    {"textit", TEXTIT_TOKEN},
    {"texttt", TEXTTT_TOKEN},
    {"usepackage", USEPACKAGE_TOKEN},
    {"verb", VERB_TOKEN}
  };

  Category catcode_table[CATCODE_TABLE_SIZE];

  map<char, Category> overflow_catcodes;

  map<char, Category> saved_catcodes;

  Scanner() {
    for (int i = 0; i < CATCODE_TABLE_SIZE; i++) {
      catcode_table[i] = OTHER_CATEGORY;
    }

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

  Category get_catcode(char key) {
    if (key < CATCODE_TABLE_SIZE) {
      return catcode_table[key];
    }

    auto it = overflow_catcodes.find(key);

    return (it == overflow_catcodes.end()) ?
      OTHER_CATEGORY :
      it->second;
  }

  void set_catcode(char key, Category code) {
    if (key < CATCODE_TABLE_SIZE) {
      catcode_table[key] = code;
    }

    if (code == OTHER_CATEGORY) {
      overflow_catcodes.erase(key);
    } else {
      overflow_catcodes[key] = code;
    }
  }

  void push_catcode(char key, Category code) {
    saved_catcodes[key] = get_catcode(key);
    set_catcode(key, code);
  }

  void pop_catcode(char key) {
    auto it = saved_catcodes.find(key);

    if (it != saved_catcodes.end()) {
      set_catcode(key, it->second);
      saved_catcodes.erase(key);
    }
  }

  unsigned serialize(char *buffer) {
    // First save the verbatim delimiter
    std::memcpy(&buffer[0], &start_delim, sizeof(start_delim));

    // Next store the catcodes map as [char, char] pairs
    unsigned num_serealized = 0;
    unsigned i = sizeof(start_delim) + sizeof(num_serealized);

    // TODO: Check for overflow (probably never going to happen though)

    for (auto it = catcodes.begin(); it != catcodes.end(); ++it) {
      buffer[i++] = it->first;  // character
      buffer[i++] = static_cast<char>(it->second); // catcode
      num_serealized++;
    }

    std::memcpy(&buffer[sizeof(start_delim)], &num_serealized, sizeof(num_serealized));

    // Next store the saved_catcodes map as [char, char] pairs
    unsigned saved_cat_count_pos = i;
    i += sizeof(saved_cat_count_pos);

    num_serealized = 0;

    for (auto it = saved_catcodes.begin(); it != saved_catcodes.end(); ++it) {
      buffer[i++] = it->first;
      buffer[i++] = static_cast<char>(it->second);
      num_serealized++;
    }

    num_serealized = saved_catcodes.size();
    std::memcpy(&buffer[saved_cat_count_pos], &num_serealized, sizeof(num_serealized));

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      start_delim = 0;
      return;
    };

    // Retrieve the verbatim start delimiter
    std::memcpy(&start_delim, &buffer[0], sizeof(start_delim));

    // Reset all current char-catcode pairs
    catcodes.clear();

    // Retrieve the catcode pairs
    unsigned num_serealized;
    std::memcpy(&num_serealized, &buffer[sizeof(start_delim)], sizeof(num_serealized));

    unsigned i = sizeof(start_delim) + sizeof(num_serealized);
    unsigned set = 0;
    while (set < num_serealized) {
      char character = buffer[i++];
      Category cat = static_cast<Category>(buffer[i++]);
      catcodes[character] = cat;
      set += 1;
    }

    // Retrieve the saved_catcode pairs
    saved_catcodes.clear();

    std::memcpy(&num_serealized, &buffer[i], sizeof(num_serealized));

    i += sizeof(num_serealized);
    set = 0;
    while (set < num_serealized) {
      char character = buffer[i++];
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
      lexer->mark_end(lexer);
      lexer->result_symbol = VERB_DELIM;
      return true;
    }

    return false;
  }

  bool scan_end_verb_delim(TSLexer *lexer) {
    if (lexer->lookahead == start_delim) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      lexer->result_symbol = VERB_DELIM;
      start_delim = 0;
      return true;
    }

    if (get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->mark_end(lexer);
      lexer->result_symbol = VERB_DELIM; // don't eat the newline (for consistency)
      start_delim = 0;
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = VERB_BODY;

    return true;
  }

  bool scan_verb_line(TSLexer *lexer) {
    while (lexer->lookahead && get_catcode(lexer->lookahead) != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    if (get_catcode(lexer->lookahead) == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = VERB_LINE;

    return true;
  }

  bool scan_token_or_escaped(TSLexer *lexer) {
    string name;

    lexer->advance(lexer, false);

    switch (get_catcode(lexer->lookahead)) {
      case IGNORED_CATEGORY:
        return false;
      case LETTER_CATEGORY:
        while (get_catcode(lexer->lookahead) == LETTER_CATEGORY) {
          name += lexer->lookahead;
          lexer->advance(lexer, false);
        }
        lexer->mark_end(lexer);
        lexer->result_symbol = TOKEN;
        break;
      default:
        name += lexer->lookahead;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = ESCAPED;
    }

    auto it = tokens.find(name);

    if (it != tokens.end()) {
      lexer->result_symbol = it->second;
    }

    switch (lexer->result_symbol) {
      case EXPLSYNTAXOFF_TOKEN:
        pop_catcode('\t');
        pop_catcode(' ');
        pop_catcode('"');
        pop_catcode('&');
        pop_catcode(':');
        pop_catcode('^');
        pop_catcode('_');
        pop_catcode('|');
        pop_catcode('~');
        // pop_catcode('\n');
        break;
      case EXPLSYNTAXON_TOKEN:
      case PROVIDESEXPLCLASS_TOKEN:
      case PROVIDESEXPLFILE_TOKEN:
      case PROVIDESEXPLPACKAGE_TOKEN:
        push_catcode('\t', IGNORED_CATEGORY);
        push_catcode(' ',  IGNORED_CATEGORY);
        push_catcode('"',  OTHER_CATEGORY);
        push_catcode('&',  ALIGNMENT_TAB_CATEGORY);
        push_catcode(':',  LETTER_CATEGORY);
        push_catcode('^',  SUPERSCRIPT_CATEGORY);
        push_catcode('_',  LETTER_CATEGORY);
        push_catcode('|',  OTHER_CATEGORY);
        push_catcode('~',  SPACE_CATEGORY);
        // set_catcode('\n', IGNORED_CATEGORY);
        break;
      case MAKEATOTHER_TOKEN:
        set_catcode('@', OTHER_CATEGORY);
        break;
      case MAKEATLETTER_TOKEN:
        set_catcode('@', LETTER_CATEGORY);
        break;
    }

    return true;
  }

  bool scan_category(TSLexer *lexer, CategoryDescription desc) {
    lexer->advance(lexer, false);

    if (desc.repeat) {
      while (get_catcode(lexer->lookahead) == desc.category) {
        lexer->advance(lexer, false);
      }
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = desc.type;

    return true;
  }

  bool scan_math_shift(TSLexer *lexer, const bool *valid_symbols) {
    lexer->advance(lexer, false);

    if (valid_symbols[DISPLAY_MATH_SHIFT] && get_catcode(lexer->lookahead) == MATH_SHIFT_CATEGORY) {
      lexer->advance(lexer, false);
      lexer->result_symbol = DISPLAY_MATH_SHIFT;
      lexer->mark_end(lexer);
      return true;
    }

    if (valid_symbols[INLINE_MATH_SHIFT]) {
      lexer->result_symbol = INLINE_MATH_SHIFT;
      lexer->mark_end(lexer);
      return true;
    }

    return false;
  }

  bool is_text(char val) {
    if (val == '[' || val == ']') return false;

    Category code = get_catcode(val);

    return code == SPACE_CATEGORY || code == EOL_CATEGORY ||
      code == LETTER_CATEGORY || code == OTHER_CATEGORY;
  }

  bool scan_text(TSLexer *lexer) {
    while (is_text(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = TEXT;
    lexer->mark_end(lexer);

    return true;
  }

  bool is_name(char val) {
    Category code = get_catcode(val);

    return code == LETTER_CATEGORY || code == OTHER_CATEGORY;
  }

  bool scan_name(TSLexer *lexer, const bool *valid_symbols) {
    string name;

    while (is_name(lexer->lookahead)) {
      name += lexer->lookahead;
      lexer->advance(lexer, false);
    }

    auto it = names.find(name);

    lexer->result_symbol = (it != names.end() && valid_symbols[it->second]) ?
      it->second : NAME;

    lexer->mark_end(lexer);

    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    Category code = get_catcode(lexer->lookahead);

    if (valid_symbols[TOKEN] && code == ESCAPE_CATEGORY) {
      return scan_token_or_escaped(lexer);
    }

    if ((valid_symbols[INLINE_MATH_SHIFT] || valid_symbols[DISPLAY_MATH_SHIFT]) && code == MATH_SHIFT_CATEGORY) {
      return scan_math_shift(lexer, valid_symbols);
    }

    for (auto it = category_descriptions.begin(); it != category_descriptions.end(); it++) {
      if (valid_symbols[it->type] && code == it->category) {
        return scan_category(lexer, *it);
      }
    }

    if (valid_symbols[NAME] && is_name(lexer->lookahead)) {
      return scan_name(lexer, valid_symbols);
    }

    if (valid_symbols[TEXT] && is_text(lexer->lookahead)) {
      return scan_text(lexer);
    }

    if (valid_symbols[VERB_DELIM]) {
      return (start_delim) ?
        scan_end_verb_delim(lexer) :
        scan_start_verb_delim(lexer);
    }

    if (start_delim && valid_symbols[VERB_BODY]) {
      return scan_verb_body(lexer);
    }

    // This is a kludge. Verbatim environments actually detect the corrent \end
    if (valid_symbols[VERB_LINE] && code != ESCAPE_CATEGORY) {
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
