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
  SPACE,
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
  ESCAPE,
  BEGIN,
  END,
  SHIFT,
  ALIGNMENT,
  EOL_CAT,
  PARAMETER,
  SUPERSCRIPT_CAT,
  SUBSCRIPT_CAT,
  IGNORED,
  SPACE_CAT,
  LETTER,
  OTHER,
  ACTIVE,
  COMMENT,
  INVALID
};

struct Scanner {
  char start_delim = 0;
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
    {"tag", TAG_TOKEN},
    {"textbf", TEXTBF_TOKEN},
    {"textit", TEXTIT_TOKEN},
    {"texttt", TEXTTT_TOKEN},
    {"usepackage", USEPACKAGE_TOKEN},
    {"verb", VERB_TOKEN}
  };
  map<char, Category> catcodes = {
    {'\\',   ESCAPE},
    {'{',    BEGIN},
    {'}',    END},
    {'$',    SHIFT},
    {'&',    ALIGNMENT},
    {'\n',   EOL_CAT},
    {'#',    PARAMETER},
    {'^',    SUPERSCRIPT_CAT},
    {'_',    SUBSCRIPT_CAT},
    {'\0',   IGNORED},
    {' ',    SPACE_CAT},
    {'\t',   SPACE_CAT},
    {'A',    LETTER},
    {'B',    LETTER},
    {'C',    LETTER},
    {'D',    LETTER},
    {'E',    LETTER},
    {'F',    LETTER},
    {'G',    LETTER},
    {'H',    LETTER},
    {'I',    LETTER},
    {'J',    LETTER},
    {'K',    LETTER},
    {'L',    LETTER},
    {'M',    LETTER},
    {'N',    LETTER},
    {'O',    LETTER},
    {'P',    LETTER},
    {'Q',    LETTER},
    {'R',    LETTER},
    {'S',    LETTER},
    {'T',    LETTER},
    {'U',    LETTER},
    {'V',    LETTER},
    {'W',    LETTER},
    {'X',    LETTER},
    {'Y',    LETTER},
    {'Z',    LETTER},
    {'a',    LETTER},
    {'b',    LETTER},
    {'c',    LETTER},
    {'d',    LETTER},
    {'e',    LETTER},
    {'f',    LETTER},
    {'g',    LETTER},
    {'h',    LETTER},
    {'i',    LETTER},
    {'j',    LETTER},
    {'k',    LETTER},
    {'l',    LETTER},
    {'m',    LETTER},
    {'n',    LETTER},
    {'o',    LETTER},
    {'p',    LETTER},
    {'q',    LETTER},
    {'r',    LETTER},
    {'s',    LETTER},
    {'t',    LETTER},
    {'u',    LETTER},
    {'v',    LETTER},
    {'w',    LETTER},
    {'x',    LETTER},
    {'y',    LETTER},
    {'z',    LETTER},
    {'~',    ACTIVE},
    {'%',    COMMENT},
    {'\x7f', INVALID}
  };

  Scanner() {}

  Category get_catcode(char key) {
    auto it = catcodes.find(key);

    return (it == catcodes.end()) ?
      OTHER :
      it->second;
  }

  void set_catcode(char key, Category code) {
    if (code == OTHER) {
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

  bool scan_parameter_char(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = PARAMETER_CHAR;
    return true;
  }

  bool scan_subscript(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = SUBSCRIPT;
    return true;
  }

  bool scan_superscript(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = SUPERSCRIPT;
    return true;
  }

  bool scan_math_shift(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = MATH_SHIFT;
    return true;
  }

  bool scan_alignment_tab(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = ALIGNMENT_TAB;
    return true;
  }

  bool scan_space(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = SPACE;
    return true;
  }

  bool scan_begin_group(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = BEGIN_GROUP;
    return true;
  }

  bool scan_end_group(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = END_GROUP;
    return true;
  }

  bool scan_comment_char(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = COMMENT_CHAR;
    return true;
  }

  bool scan_eol(TSLexer *lexer) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    lexer->result_symbol = EOL;
    return true;
  }

  bool scan_token_or_escaped(TSLexer *lexer) {
    string name;

    lexer->advance(lexer, false);

    switch (get_catcode(lexer->lookahead)) {
      case IGNORED:
        return false;
      case LETTER:
        while (get_catcode(lexer->lookahead) == LETTER) {
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
        set_catcode('_', OTHER);
        set_catcode(':', OTHER);
        break;
      case EXPLSYNTAXON_TOKEN:
        set_catcode('_', LETTER);
        set_catcode(':', LETTER);
        break;
      case MAKEATOTHER_TOKEN:
        set_catcode('@', OTHER);
        break;
      case MAKEATLETTER_TOKEN:
        set_catcode('@', LETTER);
        break;
    }

    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    if (valid_symbols[PARAMETER_CHAR] && get_catcode(lexer->lookahead) == PARAMETER) {
      return scan_parameter_char(lexer);
    }

    if (valid_symbols[COMMENT_CHAR] && get_catcode(lexer->lookahead) == COMMENT) {
      return scan_comment_char(lexer);
    }

    if (valid_symbols[MATH_SHIFT] && get_catcode(lexer->lookahead) == SHIFT) {
      return scan_math_shift(lexer);
    }

    if (valid_symbols[ALIGNMENT_TAB] && get_catcode(lexer->lookahead) == ALIGNMENT) {
      return scan_alignment_tab(lexer);
    }

    if (valid_symbols[SPACE] && get_catcode(lexer->lookahead) == SPACE_CAT) {
      return scan_space(lexer);
    }

    if (valid_symbols[SUBSCRIPT] && get_catcode(lexer->lookahead) == SUBSCRIPT_CAT) {
      return scan_subscript(lexer);
    }

    if (valid_symbols[SUPERSCRIPT] && get_catcode(lexer->lookahead) == SUPERSCRIPT_CAT) {
      return scan_subscript(lexer);
    }

    if (valid_symbols[TOKEN] && get_catcode(lexer->lookahead) == ESCAPE) {
      return scan_token_or_escaped(lexer);
    }

    if (valid_symbols[BEGIN_GROUP] && get_catcode(lexer->lookahead) == BEGIN) {
      return scan_begin_group(lexer);
    }

    if (valid_symbols[END_GROUP] && get_catcode(lexer->lookahead) == END) {
      return scan_end_group(lexer);
    }

    if (valid_symbols[EOL] && get_catcode(lexer->lookahead) == EOL_CAT) {
      return scan_eol(lexer);
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
