#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

#include "tree_sitter/parser.h"


namespace {

using std::vector;
using std::string;

enum TokenType {
  VERB_BODY,
  VERB_DELIM
};

struct Scanner {
  char start_delim = 0;

  Scanner() {}

  unsigned serialize(char *buffer) {
    buffer[0] = start_delim;
    return 0;
  }

  void deserialize(const char *buffer, unsigned length) {
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


  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
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
