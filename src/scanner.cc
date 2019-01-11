#include <algorithm>
#include <iostream>

#include "scanner.hh"
#include "serialization.hh"

namespace LaTeX {

using std::any_of;
using std::string;

inline bool isHexDigit(int32_t ch) {
  return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f');
}

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

bool Scanner::read_char(TSLexer *lexer, bool mark) {
  lookahead = 0;

  if (mark) {
    lexer->mark_end(lexer);
  }

  if (!lexer->lookahead)
    return false;

  lookahead = lexer->lookahead;
  lexer->advance(lexer, false);

  if (catcode_table[lookahead] != SUPERSCRIPT_CATEGORY) {
    return true;
  }

  int count = 1;

  while (count < 6 && lexer->lookahead == lookahead) {
    lexer->advance(lexer, false);
    count++;
  }

  switch (count) {
  case 1:
    return true;
  case 3:
    lookahead = lookahead + ((lookahead < 64) ? 64 : -64);
    break;
  case 2:
  case 4:
  case 6:
    lookahead = 0;
    for (int digit = 0; digit < count; digit++) {
      int32_t current = lexer->lookahead;

      lexer->advance(lexer, false);

      if (isHexDigit(current) &&
          (digit != 0 || count != 2 || isHexDigit(lexer->lookahead))) {
        lookahead = (lookahead << 4) |
                    ((current <= '9') ? (current - '0') : (current - 'a' + 10));
      } else if (count == 2) {
        lookahead = current + ((current < 64) ? 64 : -64);
        break;
      } else {
        return false;
      }
    }
    break;
  default:
    return false;
  }

  return true;
}

void Scanner::skip_chars(TSLexer *lexer, const CategoryFlags &flags,
                         const std::wstring &chars, bool exclude) {
  while (flags[catcode_table[lookahead]] &&
         exclude == (chars.find(lookahead) == std::wstring::npos)) {
    if (!read_char(lexer))
      break;
  }
}

string Scanner::read_string(TSLexer *lexer, Category catcode) {
  if (catcode_table[lookahead] == catcode) {
    return read_string(lexer, 1 << catcode);
  }

  string result(convert.to_bytes(lookahead));

  read_char(lexer);

  return result;
}

string Scanner::read_string(TSLexer *lexer, const CategoryFlags &flags,
                            const std::wstring &chars, bool exclude) {
  string result;

  while (flags[catcode_table[lookahead]] &&
         exclude == (chars.find(lookahead) == std::wstring::npos)) {
    result.append(convert.to_bytes(lookahead));
    if (!read_char(lexer))
      break;
  }

  return result;
}

bool Scanner::scan_verb_start_delim(TSLexer *lexer, const bool *valid_symbols,
                                    SymbolType symbol) {
  // NOTE: ' ' (space) is a perfectly valid delim, as is %
  // Also: The first * (if present) is gobbled by the main grammar, but the
  // second is a valid delim
  if (lookahead == '*' && valid_symbols[star]) {
    return scan_single_char_symbol(lexer, star);
  }

  if (lookahead) {
    start_delim = lookahead;
    return scan_single_char_symbol(lexer, symbol);
  }

  return false;
}

bool Scanner::scan_verb_end_delim(TSLexer *lexer) {
  if (lexer->lookahead == start_delim) {
    lexer->advance(lexer, false);
    return scan_single_char_symbol(lexer, verb_end_delim);
  }

  // EOL is not allowed in inline verbatim
  if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
    return scan_empty_symbol(lexer, exit);
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

bool Scanner::match_or_advance(TSLexer *lexer, string value) {
  bool advanced = false;

  for (wchar_t ch : convert.from_bytes(value)) {
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

  lexer->result_symbol = comment;

  // Skip the comment char
  if (read_char(lexer)) {
    if (lookahead == ':') {
      lexer->result_symbol = comment_tag;
    } else {
      skip_chars(lexer, SPACE_FLAG);

      if (lookahead == 'a') {
        if (read_char(lexer) && lookahead == 'r' && read_char(lexer) &&
            lookahead == 'a' && read_char(lexer) && lookahead == 'r' &&
            read_char(lexer) && lookahead == 'a' && read_char(lexer) &&
            lookahead == ':') {
          lexer->result_symbol = comment_arara;
        }
      } else if (lookahead == '!' && read_char(lexer)) {
        if (lookahead == 'T' && read_char(lexer) &&
            (lookahead == 'e' || lookahead == 'E') && read_char(lexer) &&
            lookahead == 'X' && read_char(lexer) &&
            catcode_table[lookahead] == SPACE_CATEGORY) {
          lexer->result_symbol = comment_tex;
        } else if (lookahead == 'B' && read_char(lexer) &&
                   (lookahead == 'i' || lookahead == 'I') && read_char(lexer) &&
                   lookahead == 'b' && read_char(lexer) &&
                   catcode_table[lookahead] == SPACE_CATEGORY) {
          lexer->result_symbol = comment_bib;
        }
      }
    }

    // Gobble the reset of the comment
    skip_chars(lexer, ~EOL_FLAG);

    // Eat any EOL
    if (catcode_table[lookahead] == EOL_CATEGORY) {
      read_char(lexer);
    }
  }

  return true;
}

bool Scanner::scan_cs(TSLexer *lexer, const bool *valid_symbols) {
  read_char(lexer);

  if (catcode_table[lookahead] != LETTER_CATEGORY) {
    if (valid_symbols[cs_make_verb_delim]) {
      catcode_table.assign(lookahead, VERB_DELIM_EXT_CATEGORY, true);

      lexer->result_symbol = cs_make_verb_delim;
      lexer->mark_end(lexer);

      return true;
    }

    if (valid_symbols[cs_delete_verb_delim]) {
      catcode_table.erase(lookahead, true);

      lexer->result_symbol = cs_delete_verb_delim;
      lexer->mark_end(lexer);

      return true;
    }
  }

  cs_name = read_string(lexer, LETTER_CATEGORY);

  auto it = control_sequences.find(cs_name);
  lexer->result_symbol =
      (it != control_sequences.end() && valid_symbols[it->second.symbol])
          ? it->second.symbol
          : cs;

  return true;
}

inline bool Scanner::scan_empty_symbol(TSLexer *lexer, SymbolType symbol) {
  lexer->result_symbol = symbol;

  return true;
}

inline bool Scanner::scan_single_char_symbol(TSLexer *lexer,
                                             SymbolType symbol) {
  lexer->result_symbol = symbol;
  lexer->mark_end(lexer);

  return true;
}

inline bool Scanner::scan_multi_char_symbol(TSLexer *lexer, SymbolType symbol,
                                            Category code) {
  skip_chars(lexer, 1 << code);
  lexer->result_symbol = symbol;

  return true;
}

bool Scanner::scan_space(TSLexer *lexer, const bool *valid_symbols) {
  int eol = 0;

  do {
    if (catcode_table[lookahead] == EOL_CATEGORY)
      eol++;
  } while (read_char(lexer) && (catcode_table[lookahead] == SPACE_CATEGORY ||
                                catcode_table[lookahead] == EOL_CATEGORY));

  if (eol > 1 && !valid_symbols[par]) {
    return scan_text(lexer, valid_symbols);
  }

  lexer->result_symbol = (eol > 1) ? par : _space;

  return true;
}

bool Scanner::scan_env_name(TSLexer *lexer) {
  e_name = read_string(lexer, LETTER_FLAG | OTHER_FLAG);

  auto it = environments.find(e_name);

  if (it == environments.end()) {
    lexer->result_symbol = env_name;
  } else {
    lexer->result_symbol = it->second.symbol;
  }

  return true;
}

bool Scanner::scan_name(TSLexer *lexer) {
  u_name = read_string(lexer, LETTER_FLAG | OTHER_FLAG, L",");

  auto it = names.find(u_name);

  if (it == names.end()) {
    lexer->result_symbol = name;
  } else {
    lexer->result_symbol = it->second.symbol;
    catcode_table.assign(it->second.intervals, it->second.global);
  }

  return true;
}

bool Scanner::scan_math_delim(TSLexer *lexer, const bool *valid_symbols) {
  read_char(lexer);

  if (valid_symbols[math_shift_end]) {
    lexer->result_symbol = math_shift_end;
  } else if (catcode_table[lookahead] == MATH_SHIFT_CATEGORY) {
    lexer->mark_end(lexer);
    lexer->result_symbol = valid_symbols[display_math_shift_end]
                               ? display_math_shift_end
                               : display_math_shift;
  } else {
    lexer->result_symbol = math_shift;
  }

  return true;
}

bool Scanner::scan_ignored_line(TSLexer *lexer) {
  skip_chars(lexer, ~EOL_FLAG);

  if (catcode_table[lookahead] == EOL_CATEGORY) {
    lexer->mark_end(lexer);
  }

  lexer->result_symbol = ignored_line;

  return true;
}

bool Scanner::scan_ignored_rest(TSLexer *lexer) {
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
  // Skip the octal quote
  read_char(lexer);
  skip_chars(lexer, ~0, octal_digits, false);
  lexer->result_symbol = octal;

  return true;
}

bool Scanner::scan_decimal(TSLexer *lexer) {
  skip_chars(lexer, ~0, decimal_digits, false);

  lexer->result_symbol = decimal;

  return true;
}

bool Scanner::scan_parameter_ref(TSLexer *lexer) {
  skip_chars(lexer, PARAMETER_FLAG);

  if (lookahead >= '1' && lookahead <= '9') {
    lexer->mark_end(lexer);
  }

  lexer->result_symbol = parameter_ref;

  return true;
}

bool Scanner::scan_hexadecimal(TSLexer *lexer) {
  // Skip the hexadecimal quote
  read_char(lexer);
  skip_chars(lexer, ~0, hexadecimal_digits, false);
  lexer->result_symbol = hexadecimal;

  return true;
}

bool Scanner::scan_fixed(TSLexer *lexer) {
  if (lookahead == '+' || lookahead == '-') {
    read_char(lexer);
  }

  if (lookahead != '.') {
    skip_chars(lexer, ~0, decimal_digits, false);
  }

  if (lookahead == '.') {
    read_char(lexer);
    skip_chars(lexer, ~0, decimal_digits, false);
  }

  lexer->result_symbol = fixed;

  return true;
}

bool Scanner::scan_text(TSLexer *lexer, const bool *valid_symbols) {
  switch (lookahead) {
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

  string keyword = read_string(lexer, LETTER_CATEGORY);

  auto it = keywords.find(keyword);

  if (it != keywords.end() && valid_symbols[it->second]) {
    lexer->result_symbol = it->second;
    return true;
  }

  if (valid_symbols[text_single]) {
    lexer->result_symbol = text_single;
    return true;
  }

  std::wstring excluded;

  if (valid_symbols[rbrack]) {
    excluded.push_back(L']');
  }

  if (valid_symbols[rparen]) {
    excluded.push_back(L')');
  }

  skip_chars(lexer, LETTER_FLAG | OTHER_FLAG | SPACE_FLAG | EOL_FLAG, excluded);

  lexer->result_symbol = text;

  return true;
}

bool Scanner::scan_cmd_apply(TSLexer *lexer) {
  auto it = control_sequences.find(cs_name);
  if (it != control_sequences.end()) {
    catcode_table.assign(it->second.intervals);
  }

  return scan_empty_symbol(lexer, _cmd_apply);
}

bool Scanner::scan_env_begin(TSLexer *lexer) {
  catcode_table.push();
  auto it = environments.find(e_name);
  if (it != environments.end()) {
    catcode_table.assign(it->second.intervals);
  }

  return scan_empty_symbol(lexer, _env_begin);
}

bool Scanner::scan_env_end(TSLexer *lexer) {
  catcode_table.pop();

  return scan_empty_symbol(lexer, _env_end);
}

bool Scanner::scan_scope_begin(TSLexer *lexer) {
  catcode_table.push();

  return scan_empty_symbol(lexer, _scope_begin);
}

bool Scanner::scan_scope_end(TSLexer *lexer) {
  catcode_table.pop();

  return scan_empty_symbol(lexer, _scope_end);
}

bool Scanner::scan(TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[_cmd_apply]) {
    return scan_cmd_apply(lexer);
  }

  if (valid_symbols[_env_begin]) {
    return scan_env_begin(lexer);
  }

  if (valid_symbols[_env_end]) {
    return scan_env_end(lexer);
  }

  if (valid_symbols[_scope_begin]) {
    return scan_scope_begin(lexer);
  }

  if (valid_symbols[_scope_end]) {
    return scan_scope_end(lexer);
  }

  if (!lexer->lookahead) {
    return valid_symbols[exit] ? scan_empty_symbol(lexer, exit) : false;
  }

  // Look for an inline verbatim delimiter and end the verbatim.
  if (valid_symbols[verb_end_delim]) {
    if (scan_verb_end_delim(lexer)) {
      return true;
    }
  }

  // Scan an inline verbatim body.
  if (valid_symbols[verb_body]) {
    return scan_verb_body(lexer);
  }

  if (valid_symbols[verbatim_text]) {
    return scan_verbatim_text(lexer);
  }

  if (!read_char(lexer)) {
    lexer->result_symbol = char_ref_invalid;
    lexer->mark_end(lexer);
    return true;
  }

  // Look for an inline verbatim.
  if (valid_symbols[verb_delim_no_lbrack] && lookahead != '[') {
    return scan_verb_start_delim(lexer, valid_symbols, verb_delim_no_lbrack);
  }

  if (valid_symbols[verb_delim]) {
    return scan_verb_start_delim(lexer, valid_symbols, verb_delim);
  }

  if (valid_symbols[ignored_line]) {
    return scan_ignored_line(lexer);
  }

  if (valid_symbols[ignored_rest]) {
    return scan_ignored_rest(lexer);
  }

  Category code = catcode_table[lookahead];

  switch (code) {
  case ESCAPE_CATEGORY:
    if (valid_symbol_in_range(valid_symbols, cs_author, cs)) {
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
      return scan_verb_start_delim(lexer, valid_symbols, short_verb_delim);
    }
    break;
  default:
    if (valid_symbols[text_non_escape]) {
      break;
    }
    if (valid_symbol_in_range(valid_symbols, env_name_alignat, env_name)) {
      return scan_env_name(lexer);
    }
    if (valid_symbols[name]) {
      return scan_name(lexer);
    }
    return scan_text(lexer, valid_symbols);
  }

  if (valid_symbols[text_non_escape]) {
    return scan_single_char_symbol(lexer, text_non_escape);
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
