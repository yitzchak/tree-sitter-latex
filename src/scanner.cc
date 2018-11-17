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
  MAKEATLETTER_TOKEN,
  MAKEATOTHER_TOKEN,
  MATH_SHIFT,
  PARAMETER_CHAR,
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
    {MATH_SHIFT_CATEGORY, MATH_SHIFT, false},
    {SPACE_CATEGORY, _SPACE, true},
    {SUBSCRIPT_CATEGORY, SUBSCRIPT, false},
    {SUPERSCRIPT_CATEGORY, SUPERSCRIPT, false}
  };

  map<string, TokenType> tokens = {
    {"(", BEGIN_INLINE_MATH},
    {")", END_INLINE_MATH},
    {"[", BEGIN_DISPLAY_MATH},
    {"]", END_DISPLAY_MATH},
    {"begin", BEGIN_TOKEN},
    {"catcode", CATCODE_TOKEN},
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
    {"section", SECTION_TOKEN},
    {"subsection", SECTION_TOKEN},
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
        set_catcode('_', SUBSCRIPT_CATEGORY);
        set_catcode(':', OTHER_CATEGORY);
        break;
      case EXPLSYNTAXON_TOKEN:
        set_catcode('_', LETTER_CATEGORY);
        set_catcode(':', LETTER_CATEGORY);
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

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    for (auto it = category_descriptions.begin(); it != category_descriptions.end(); it++) {
      if (valid_symbols[it->type] && get_catcode(lexer->lookahead) == it->category) {
        return scan_category(lexer, *it);
      }
    }

    if (valid_symbols[TOKEN] && get_catcode(lexer->lookahead) == ESCAPE_CATEGORY) {
      return scan_token_or_escaped(lexer);
    }

    if (valid_symbols[VERB_DELIM]) {
      return (start_delim) ?
        scan_end_verb_delim(lexer) :
        scan_start_verb_delim(lexer);
    }

    if (start_delim && valid_symbols[VERB_BODY]) {
      return scan_verb_body(lexer);
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
