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
  INLINE_MATH_SHIFT,
  MAKEATLETTER_TOKEN,
  MAKEATOTHER_TOKEN,
  PARAMETER_CHAR,
  PROVIDESEXPLCLASS_TOKEN,
  PROVIDESEXPLFILE_TOKEN,
  PROVIDESEXPLPACKAGE_TOKEN,
  SECTION_TOKEN,
  STORAGE_TOKEN,
  SUBSCRIPT,
  SUPERSCRIPT,
  TAG_TOKEN,
  TEXTBF_TOKEN,
  TEXTIT_TOKEN,
  TEXTTT_TOKEN,
  TOKEN,
  USEPACKAGE_TOKEN,
  VERB_BODY,
  VERB_DELIM,
  VERB_LINE,
  VERB_TOKEN
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
  char start_delim = 0;

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

  map<char, Category> catcodes = {
    {'\\',   ESCAPE_CATEGORY},
    {'{',    BEGIN_CATEGORY},
    {'}',    END_CATEGORY},
    {'$',    MATH_SHIFT_CATEGORY},
    {'&',    ALIGNMENT_TAB_CATEGORY},
    {'\n',   EOL_CATEGORY},
    {'#',    PARAMETER_CATEGORY},
    {'^',    SUPERSCRIPT_CATEGORY},
    {'_',    SUBSCRIPT_CATEGORY},
    {'\0',   IGNORED_CATEGORY},
    {' ',    SPACE_CATEGORY},
    {'\t',   SPACE_CATEGORY},
    {'A',    LETTER_CATEGORY},
    {'B',    LETTER_CATEGORY},
    {'C',    LETTER_CATEGORY},
    {'D',    LETTER_CATEGORY},
    {'E',    LETTER_CATEGORY},
    {'F',    LETTER_CATEGORY},
    {'G',    LETTER_CATEGORY},
    {'H',    LETTER_CATEGORY},
    {'I',    LETTER_CATEGORY},
    {'J',    LETTER_CATEGORY},
    {'K',    LETTER_CATEGORY},
    {'L',    LETTER_CATEGORY},
    {'M',    LETTER_CATEGORY},
    {'N',    LETTER_CATEGORY},
    {'O',    LETTER_CATEGORY},
    {'P',    LETTER_CATEGORY},
    {'Q',    LETTER_CATEGORY},
    {'R',    LETTER_CATEGORY},
    {'S',    LETTER_CATEGORY},
    {'T',    LETTER_CATEGORY},
    {'U',    LETTER_CATEGORY},
    {'V',    LETTER_CATEGORY},
    {'W',    LETTER_CATEGORY},
    {'X',    LETTER_CATEGORY},
    {'Y',    LETTER_CATEGORY},
    {'Z',    LETTER_CATEGORY},
    {'a',    LETTER_CATEGORY},
    {'b',    LETTER_CATEGORY},
    {'c',    LETTER_CATEGORY},
    {'d',    LETTER_CATEGORY},
    {'e',    LETTER_CATEGORY},
    {'f',    LETTER_CATEGORY},
    {'g',    LETTER_CATEGORY},
    {'h',    LETTER_CATEGORY},
    {'i',    LETTER_CATEGORY},
    {'j',    LETTER_CATEGORY},
    {'k',    LETTER_CATEGORY},
    {'l',    LETTER_CATEGORY},
    {'m',    LETTER_CATEGORY},
    {'n',    LETTER_CATEGORY},
    {'o',    LETTER_CATEGORY},
    {'p',    LETTER_CATEGORY},
    {'q',    LETTER_CATEGORY},
    {'r',    LETTER_CATEGORY},
    {'s',    LETTER_CATEGORY},
    {'t',    LETTER_CATEGORY},
    {'u',    LETTER_CATEGORY},
    {'v',    LETTER_CATEGORY},
    {'w',    LETTER_CATEGORY},
    {'x',    LETTER_CATEGORY},
    {'y',    LETTER_CATEGORY},
    {'z',    LETTER_CATEGORY},
    {'~',    ACTIVE_CHAR_CATEGORY},
    {'%',    COMMENT_CATEGORY},
    {'\x7f', INVALID_CATEGORY}
  };

  map<char, Category> saved_catcodes;

  Scanner() {}

  Category get_catcode(char key) {
    auto it = catcodes.find(key);

    return (it == catcodes.end()) ?
      OTHER_CATEGORY :
      it->second;
  }

  void set_catcode(char key, Category code) {
    if (code == OTHER_CATEGORY) {
      catcodes.erase(key);
    } else {
      catcodes[key] = code;
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
    buffer[0] = start_delim;
    return 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      start_delim = 0;
      return;
    };

    start_delim = buffer[0];
  }

  bool scan_start_verb_delim(TSLexer *lexer) {
    // NOTE: ' ' (space) is a perfectly valid delim, as is %
    // Also: The first * (if present) is gobbled by the main grammar, but the second is a valid delim
    if (lexer->lookahead && lexer->lookahead != '\n') {
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

    if (lexer->lookahead == '\n') {
      lexer->mark_end(lexer);
      lexer->result_symbol = VERB_DELIM; // don't eat the newline (for consistency)
      start_delim = 0;
      return true;
    }

    return false;
  }

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim && lexer->lookahead != '\n') {
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
