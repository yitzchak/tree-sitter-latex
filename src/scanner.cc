#include <algorithm>
// #include <iostream>

#include "scanner.hh"
#include "serialization.hh"

namespace LaTeX {

using std::any_of;
using std::string;

void Scanner::reset() {
  start_delim = 0;
  cs_name.clear();
  e_name.clear();
  u_name.clear();
  catcode_table.reset();
}

unsigned Scanner::serialize(char *buffer) const {
  SerializationBuffer buf(buffer);

  buf << start_delim << cs_name << e_name << u_name << catcode_table;

  return buf.length;
}

void Scanner::deserialize(const char *buffer, unsigned length) {
  reset();

  if (length == 0) {
    return;
  }

  DeserializationBuffer buf(buffer, length);

  buf >> start_delim >> cs_name >> e_name >> u_name >> catcode_table;
}

bool Scanner::scan_verb_start_delim(TSLexer *lexer, SymbolType symbol) {
  // NOTE: ' ' (space) is a perfectly valid delim, as is %
  // Also: The first * (if present) is gobbled by the main grammar, but the
  // second is a valid delim
  if (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
    start_delim = lexer->lookahead;
    lexer->advance(lexer, false);
    lexer->result_symbol = symbol;
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

bool Scanner::scan_verb_end_delim(TSLexer *lexer) {
  if (lexer->lookahead == start_delim) {
    lexer->advance(lexer, false);
    lexer->result_symbol = verb_end_delim;
    lexer->mark_end(lexer);
    return true;
  }

  if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
    lexer->result_symbol =
        verb_end_delim; // don't eat the newline (for consistency)
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

bool Scanner::scan_verb_body(TSLexer *lexer) {
  while (lexer->lookahead && lexer->lookahead != start_delim &&
         catcode_table[lexer->lookahead] != EOL_CATEGORY) {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = verb_body;
  lexer->mark_end(lexer);

  return true;
}

int Scanner::match_length(TSLexer *lexer, string value,
                          CategoryFlags terminator) {
  size_t length = 0;

  for (char ch : value) {
    if (std::tolower(lexer->lookahead) == ch) {
      length++;
      lexer->advance(lexer, false);
    } else {
      return length;
    }
  }

  return (terminator[catcode_table[lexer->lookahead]]) ? -1 : length;
}

bool Scanner::match_or_advance(TSLexer *lexer, string value) {
  bool advanced = false;

  for (char ch : value) {
    switch (ch) {
    case '\\':
      if (catcode_table[lexer->lookahead] != ESCAPE_CATEGORY) {
        if (!advanced) {
          lexer->advance(lexer, false);
        }
        return false;
      }
      advanced = true;
      lexer->advance(lexer, false);
      break;
    case '{':
      if (catcode_table[lexer->lookahead] != BEGIN_CATEGORY) {
        if (!advanced) {
          lexer->advance(lexer, false);
        }
        return false;
      }
      advanced = true;
      lexer->advance(lexer, false);
      break;
    case '}':
      if (catcode_table[lexer->lookahead] != END_CATEGORY) {
        if (!advanced) {
          lexer->advance(lexer, false);
        }
        return false;
      }
      advanced = true;
      lexer->advance(lexer, false);
      break;
    case ' ':
      while (lexer->lookahead &&
             catcode_table[lexer->lookahead] == SPACE_CATEGORY) {
        advanced = true;
        lexer->advance(lexer, false);
      }
      break;
    default:
      if (lexer->lookahead != ch) {
        if (!advanced) {
          lexer->advance(lexer, false);
        }
        return false;
      }
      advanced = true;
      lexer->advance(lexer, false);
      break;
    }
  }

  return true;
}

bool Scanner::scan_verbatim_text(TSLexer *lexer) {
  string terminator = "\\end {" + e_name + "}";
  lexer->mark_end(lexer);
  lexer->result_symbol = verbatim_text;

  do {
    if (match_or_advance(lexer, terminator)) {
      return true;
    }

    lexer->mark_end(lexer);
  } while (lexer->lookahead);

  return true;
}

bool Scanner::scan_comment(TSLexer *lexer) {
  string comment_type;

  // Skip the comment char
  lexer->advance(lexer, false);
  lexer->result_symbol = comment;

  if (match_length(lexer, ":") == -1) {
    lexer->advance(lexer, false);
    lexer->result_symbol = comment_tag;
  } else {
    // Skip any leading spaces
    while (lexer->lookahead &&
           catcode_table[lexer->lookahead] == SPACE_CATEGORY) {
      lexer->advance(lexer, false);
    }

    int len = match_length(lexer, "arara:");

    if (len == -1) {
      lexer->result_symbol = comment_arara;
    } else if (len == 0) {
      len = match_length(lexer, "!tex", EOL_FLAG | SPACE_FLAG | IGNORED_FLAG);
      if (len == -1) {
        lexer->result_symbol = comment_tex;
      } else if (len == 1 &&
                 match_length(lexer, "bib",
                              EOL_FLAG | SPACE_FLAG | IGNORED_FLAG) == -1) {
        lexer->result_symbol = comment_bib;
      }
    }
  }

  // Gobble the reset of the comment
  while (lexer->lookahead && catcode_table[lexer->lookahead] != EOL_CATEGORY) {
    lexer->advance(lexer, false);
  }

  // Eat any EOL
  if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
    lexer->advance(lexer, false);
  }

  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_cs(TSLexer *lexer, const bool *valid_symbols) {
  cs_name.clear();
  lexer->advance(lexer, false);

  if (catcode_table[lexer->lookahead] == LETTER_CATEGORY) {
    do {
      cs_name += lexer->lookahead;
      lexer->advance(lexer, false);
    } while (lexer->lookahead &&
             catcode_table[lexer->lookahead] == LETTER_CATEGORY);
  } else if (valid_symbols[cs_make_verb_delim]) {
    catcode_table.assign(lexer->lookahead, VERB_DELIM_EXT_CATEGORY, true);
    lexer->advance(lexer, false);

    lexer->result_symbol = cs_make_verb_delim;
    lexer->mark_end(lexer);

    return true;
  } else if (valid_symbols[cs_delete_verb_delim]) {
    catcode_table.erase(lexer->lookahead, true);
    lexer->advance(lexer, false);

    lexer->result_symbol = cs_delete_verb_delim;
    lexer->mark_end(lexer);

    return true;
  } else {
    cs_name += lexer->lookahead;
    lexer->advance(lexer, false);
  }

  lexer->mark_end(lexer);

  auto it = control_sequences.find(cs_name);
  lexer->result_symbol =
      (it != control_sequences.end() && valid_symbols[it->second.symbol])
          ? it->second.symbol
          : cs;

  return true;
}

inline bool Scanner::scan_empty_symbol(TSLexer *lexer, SymbolType symbol) {
  lexer->result_symbol = symbol;
  lexer->mark_end(lexer);

  return true;
}

inline bool Scanner::scan_single_char_symbol(TSLexer *lexer,
                                             SymbolType symbol) {
  lexer->advance(lexer, false);

  lexer->result_symbol = symbol;
  lexer->mark_end(lexer);

  return true;
}

inline bool Scanner::scan_multi_char_symbol(TSLexer *lexer, SymbolType symbol,
                                            Category code) {
  do {
    lexer->advance(lexer, false);
  } while (lexer->lookahead && catcode_table[lexer->lookahead] == code);

  lexer->result_symbol = symbol;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_space(TSLexer *lexer, const bool *valid_symbols) {
  Category code = catcode_table[lexer->lookahead];
  int eol = 0;

  do {
    if (code == EOL_CATEGORY)
      eol++;
    lexer->advance(lexer, false);
    code = catcode_table[lexer->lookahead];
  } while (lexer->lookahead &&
           (code == SPACE_CATEGORY || code == EOL_CATEGORY));

  if (eol > 1 && !valid_symbols[par]) {
    return scan_text(lexer, valid_symbols);
  }

  lexer->result_symbol = (eol > 1) ? par : _space;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_env_name(TSLexer *lexer) {
  if (!lexer->lookahead)
    return false;

  CategoryFlags flags = LETTER_FLAG | OTHER_FLAG;

  e_name.clear();

  while (lexer->lookahead && flags[catcode_table[lexer->lookahead]]) {
    e_name += lexer->lookahead;
    lexer->advance(lexer, false);
  }

  auto it = environments.find(e_name);

  if (it == environments.end()) {
    lexer->result_symbol = env_name;
  } else {
    lexer->result_symbol = it->second.symbol;
  }

  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_name(TSLexer *lexer) {
  CategoryFlags flags = LETTER_FLAG | OTHER_FLAG;

  u_name.clear();

  while (lexer->lookahead && lexer->lookahead != ',' &&
         flags[catcode_table[lexer->lookahead]]) {
    u_name += lexer->lookahead;
    lexer->advance(lexer, false);
  }

  auto it = names.find(u_name);

  if (it == names.end()) {
    lexer->result_symbol = name;
  } else {
    lexer->result_symbol = it->second.symbol;
    catcode_table.assign(it->second.intervals, it->second.global);
  }

  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_math_delim(TSLexer *lexer, const bool *valid_symbols) {
  lexer->advance(lexer, false);

  if (valid_symbols[math_shift_end]) {
    lexer->result_symbol = math_shift_end;
  } else if (catcode_table[lexer->lookahead] == MATH_SHIFT_CATEGORY) {
    lexer->advance(lexer, false);
    lexer->result_symbol = valid_symbols[display_math_shift_end]
                               ? display_math_shift_end
                               : display_math_shift;
  } else {
    lexer->result_symbol = math_shift;
  }

  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_ignored_line(TSLexer *lexer) {
  if (!lexer->lookahead) {
    return false;
  }

  while (lexer->lookahead) {
    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      lexer->advance(lexer, false);
      break;
    }

    lexer->advance(lexer, false);
  };

  lexer->result_symbol = ignored_line;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_ignored_rest(TSLexer *lexer) {
  if (!lexer->lookahead) {
    return false;
  }

  while (lexer->lookahead) {
    lexer->advance(lexer, false);
  };

  lexer->result_symbol = ignored_rest;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::valid_symbol_in_range(const bool *valid_symbols, SymbolType first,
                                    SymbolType last) {
  return any_of(valid_symbols + first, valid_symbols + last + 1,
                [](bool valid_symbol) { return valid_symbol; });
}

bool Scanner::scan_octal(TSLexer *lexer) {
  lexer->advance(lexer, false);

  while (lexer->lookahead >= '0' && lexer->lookahead <= '7') {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = octal;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_decimal(TSLexer *lexer) {
  while (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = decimal;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_parameter_ref(TSLexer *lexer) {
  do {
    lexer->advance(lexer, false);
  } while (lexer->lookahead &&
           catcode_table[lexer->lookahead] == PARAMETER_CATEGORY);

  if (lexer->lookahead >= '1' && lexer->lookahead <= '9') {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = parameter_ref;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_hexadecimal(TSLexer *lexer) {
  lexer->advance(lexer, false);

  while ((lexer->lookahead >= '0' && lexer->lookahead <= '9') ||
         (lexer->lookahead >= 'a' && lexer->lookahead <= 'f') ||
         (lexer->lookahead >= 'A' && lexer->lookahead <= 'F')) {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = hexadecimal;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_fixed(TSLexer *lexer) {
  if (lexer->lookahead == '+' || lexer->lookahead == '-') {
    lexer->advance(lexer, false);
  }

  while (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
    lexer->advance(lexer, false);
  }

  if (lexer->lookahead == '.') {
    lexer->advance(lexer, false);
  }

  while (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = fixed;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan_text(TSLexer *lexer, const bool *valid_symbols) {
  switch (lexer->lookahead) {
  case '\'':
    if (valid_symbols[octal]) {
      return scan_octal(lexer);
    }
    break;
  case '"':
    if (valid_symbols[hexadecimal]) {
      return scan_hexadecimal(lexer);
    }
    break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    if (valid_symbols[decimal]) {
      return scan_decimal(lexer);
    }
  case '+':
  case '-':
  case '.':
    if (valid_symbols[fixed]) {
      return scan_fixed(lexer);
    }
    break;
  }

  string keyword;

  if (catcode_table[lexer->lookahead] == LETTER_CATEGORY) {
    keyword += lexer->lookahead;
    lexer->advance(lexer, false);

    // Mark the end in case we have to bail out for text_single
    lexer->mark_end(lexer);

    while (lexer->lookahead &&
           catcode_table[lexer->lookahead] == LETTER_CATEGORY) {
      keyword += lexer->lookahead;
      lexer->advance(lexer, false);
    }
  } else {
    keyword += lexer->lookahead;
    lexer->advance(lexer, false);

    // Mark the end in case we have to bail out for text_single
    lexer->mark_end(lexer);
  }

  auto it = keywords.find(keyword);

  if (it != keywords.end() && valid_symbols[it->second]) {
    lexer->result_symbol = it->second;
    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[text_single]) {
    lexer->result_symbol = text_single;
    return true;
  }

  CategoryFlags flags = LETTER_FLAG | OTHER_FLAG | SPACE_FLAG | EOL_FLAG;

  while (lexer->lookahead &&
         (lexer->lookahead != ']' || !valid_symbols[rbrack]) &&
         (lexer->lookahead != ')' || !valid_symbols[rparen]) &&
         flags[catcode_table[lexer->lookahead]]) {
    lexer->advance(lexer, false);
  }

  lexer->result_symbol = text;
  lexer->mark_end(lexer);

  return true;
}

bool Scanner::scan(TSLexer *lexer, const bool *valid_symbols) {
  Category code = catcode_table[lexer->lookahead];

  if (valid_symbols[_cmd_apply]) {
    auto it = control_sequences.find(cs_name);
    if (it != control_sequences.end()) {
      catcode_table.assign(it->second.intervals);
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = _cmd_apply;
    return true;
  }

  if (valid_symbols[_env_begin]) {
    catcode_table.push();
    auto it = environments.find(e_name);
    if (it != environments.end()) {
      catcode_table.assign(it->second.intervals);
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = _env_begin;
    return true;
  }

  if (valid_symbols[_env_end]) {
    catcode_table.pop();
    lexer->mark_end(lexer);
    lexer->result_symbol = _env_end;
    return true;
  }

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

  if (!lexer->lookahead) {
    return valid_symbols[exit] ? scan_empty_symbol(lexer, exit) : false;
  }

  // Look for an inline verbatim.
  if (valid_symbols[verb_delim_no_lbrack] && lexer->lookahead != '[') {
    return scan_verb_start_delim(lexer, verb_delim_no_lbrack);
  }

  if (valid_symbols[verb_delim]) {
    return scan_verb_start_delim(lexer, verb_delim);
  }

  // Look for an inline verbatim delimiter and end the verbatim.
  if (valid_symbols[verb_end_delim]) {
    return scan_verb_end_delim(lexer);
  }

  // Scan an inline verbatim body.
  if (valid_symbols[verb_body]) {
    return scan_verb_body(lexer);
  }

  if (valid_symbols[verbatim_text]) {
    return scan_verbatim_text(lexer);
  }

  if (valid_symbols[ignored_line]) {
    return scan_ignored_line(lexer);
  }

  if (valid_symbols[ignored_rest]) {
    return scan_ignored_rest(lexer);
  }

  switch (code) {
  case ESCAPE_CATEGORY:
    if (valid_symbol_in_range(valid_symbols, cs_begin, cs)) {
      return scan_cs(lexer, valid_symbols);
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
    }
    if (valid_symbols[r]) {
      return scan_single_char_symbol(lexer, r);
    }
    break;
  case MATH_SHIFT_CATEGORY:
    if (valid_symbols[display_math_shift] || valid_symbols[math_shift] ||
        valid_symbols[display_math_shift_end] ||
        valid_symbols[math_shift_end]) {
      return scan_math_delim(lexer, valid_symbols);
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
      return scan_space(lexer, valid_symbols);
    }
    break;
  case PARAMETER_CATEGORY:
    if (valid_symbols[parameter_ref]) {
      return scan_parameter_ref(lexer);
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
  case IGNORED_CATEGORY:
    if (valid_symbols[ignored]) {
      return scan_multi_char_symbol(lexer, ignored, IGNORED_CATEGORY);
    }
    break;
  case SPACE_CATEGORY:
    if (valid_symbols[_space]) {
      return scan_space(lexer, valid_symbols);
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
  case VERB_DELIM_EXT_CATEGORY:
    if (valid_symbols[short_verb_delim]) {
      return scan_verb_start_delim(lexer, short_verb_delim);
    }
    break;
  default:
    if (valid_symbol_in_range(valid_symbols, env_name_alignat, env_name)) {
      return scan_env_name(lexer);
    }
    if (valid_symbols[name]) {
      return scan_name(lexer);
    }
    return scan_text(lexer, valid_symbols);
  }

  return false;
}

} // namespace LaTeX

// Source for required functions:
// https://github.com/tree-sitter/tree-sitter/blob/78b54810a62580537b0a2df7eb781e03667d63ba/src/compiler/generate_code/c_code.cc#L546-L552

extern "C" {

void *tree_sitter_latex_external_scanner_create() {
  return new LaTeX::Scanner();
}

bool tree_sitter_latex_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_latex_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_latex_external_scanner_destroy(void *payload) {
  auto *scanner = static_cast<LaTeX::Scanner *>(payload);
  delete scanner;
}
}
