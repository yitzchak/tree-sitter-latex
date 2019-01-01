#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "tree_sitter/parser.h"

#include "catcode.hh"
#include "serialization.hh"

namespace LaTeX {

using std::any_of;
using std::string;
using std::unordered_map;
using std::vector;

enum SymbolType {
  _cmd_apply,
  _env_begin,
  _env_end,
  _scope_begin,
  _scope_end,
  _space,
  active_char,
  alignment_tab,
  comment_arara,
  comment_bib,
  comment_tag,
  comment_tex,
  comment,
  cs_begin,
  cs_begingroup,
  cs_bgroup,
  cs_def,
  cs_delete_verb_delim,
  cs_DeleteShortVerb,
  cs_display_math_begin,
  cs_display_math_end,
  cs_egroup,
  cs_end,
  cs_endgroup,
  cs_ensuremath,
  cs_inline_math_begin,
  cs_inline_math_end,
  cs_lstinline,
  cs_lua,
  cs_luacode,
  cs_make_verb_delim,
  cs_MakeShortVerb,
  cs_mint,
  cs_mintinline,
  cs_tag,
  cs_use_209,
  cs_use,
  cs_verb,
  cs,
  display_math_shift_end,
  display_math_shift,
  env_name_alignat,
  env_name_comment,
  env_name_display_math,
  env_name_dmath,
  env_name_dseries,
  env_name_filecontents,
  env_name_inline_math,
  env_name_lstlisting,
  env_name_luacode,
  env_name_luacodestar,
  env_name_math,
  env_name_minted,
  env_name_text,
  env_name_verbatim,
  env_name_Verbatim,
  env_name,
  eol,
  exit,
  ignored_line,
  ignored,
  invalid,
  l,
  math_shift_end,
  math_shift,
  name,
  parameter_char,
  r,
  short_verb_delim,
  subscript,
  superscript,
  verb_body,
  verb_delim_no_lbrack,
  verb_delim,
  verb_end_delim,
  verbatim_text,
};

struct CatCodeCommand {
  SymbolType symbol;
  bool global;
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

struct Environment {
  SymbolType symbol;
  vector<CatCodeInterval> intervals;
};

struct Scanner {
  string cs_name, e_name, u_name;
  int32_t start_delim = 0;
  CatCodeTable catcode_table = {
      {' ', ' ', SPACE_CATEGORY},
      {'_', '_', SUBSCRIPT_CATEGORY},
      {'{', '{', BEGIN_CATEGORY},
      {'}', '}', END_CATEGORY},
      {'\\', '\\', ESCAPE_CATEGORY},
      // NUL is technically ignored, but tree sitter seems to use it to indicate
      // EOF.
      // {'\0',   '\0',   IGNORED_CATEGORY},
      // SOH is subscript in plain.tex but not in latex.ltx
      // {'\1', '\1', SUBSCRIPT_CATEGORY},
      // FF is active character for \par in latex.ltx
      {'\f', '\f', ACTIVE_CHAR_CATEGORY},
      {'\n', '\n', EOL_CATEGORY},
      {'\t', '\t', SPACE_CATEGORY},
      // VT superscript in plain.tex but not in latex.ltx
      // {'\v', '\v', SUPERSCRIPT_CATEGORY},
      {'\x7f', '\x7f', INVALID_CATEGORY},
      {'&', '&', ALIGNMENT_TAB_CATEGORY},
      {'#', '#', PARAMETER_CATEGORY},
      {'%', '%', COMMENT_CATEGORY},
      {'^', '^', SUPERSCRIPT_CATEGORY},
      {'~', '~', ACTIVE_CHAR_CATEGORY},
      {'$', '$', MATH_SHIFT_CATEGORY},
      {'a', 'z', LETTER_CATEGORY},
      {'A', 'Z', LETTER_CATEGORY},
  };

  unordered_map<string, CatCodeCommand> control_sequences = {
      {"(", {cs_inline_math_begin, false, {}}},
      {")", {cs_inline_math_end, false, {}}},
      {"[", {cs_display_math_begin, false, {}}},
      {"]", {cs_display_math_end, false, {}}},
      {"begin", {cs_begin, false, {}}},
      {"begingroup", {cs_begingroup, false, {}}},
      {"bgroup", {cs_bgroup, false, {}}},
      {"def", {cs_def, false, {}}},
      {"DefineShortVerb", {cs_MakeShortVerb, false, {}}},
      {"DeleteShortVerb", {cs_DeleteShortVerb, false, {}}},
      {"directlua",
       {cs_lua,
        false,
        {{{1, 9, EOL_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {11, '$', OTHER_CATEGORY},
          {'%', '%', COMMENT_CATEGORY},
          {'&', '@', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'[', '[', OTHER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {']', '`', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', ACTIVE_CHAR_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}}}}},
      {"documentclass", {cs_use, false, {}}},
      {"documentstyle", {cs_use_209, false, {}}},
      {"edef", {cs_def, false, {}}},
      {"egroup", {cs_egroup, false, {}}},
      {"end", {cs_end, false, {}}},
      {"endgroup", {cs_endgroup, false, {}}},
      {"ensuremath", {cs_ensuremath, false, {}}},
      {"ExplSyntaxOff",
       {cs,
        false,
        {{{'\t', '\t', SPACE_CATEGORY},
          {' ', ' ', SPACE_CATEGORY},
          {'"', '"', OTHER_CATEGORY},
          {'&', '&', ALIGNMENT_TAB_CATEGORY},
          {':', ':', OTHER_CATEGORY},
          {'^', '^', SUPERSCRIPT_CATEGORY},
          {'_', '_', SUBSCRIPT_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'~', '~', ACTIVE_CHAR_CATEGORY}}}}},
      {"ExplSyntaxOn",
       {cs,
        false,
        {{{'\t', '\t', IGNORED_CATEGORY},
          {' ', ' ', IGNORED_CATEGORY},
          {'"', '"', OTHER_CATEGORY},
          {'&', '&', ALIGNMENT_TAB_CATEGORY},
          {':', ':', LETTER_CATEGORY},
          {'^', '^', SUPERSCRIPT_CATEGORY},
          {'_', '_', LETTER_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'~', '~', SPACE_CATEGORY}}}}},
      {"gdef", {cs_def, false, {}}},
      {"latelua",
       {cs_lua,
        false,
        {{{1, 9, EOL_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {11, '$', OTHER_CATEGORY},
          {'%', '%', COMMENT_CATEGORY},
          {'&', '@', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'[', '[', OTHER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {']', '`', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', ACTIVE_CHAR_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}}}}},
      {"LoadClass", {cs_use, false, {}}},
      {"LoadClassWithOptions", {cs_use, false, {}}},
      {"lstinline", {cs_lstinline, false, {}}},
      {"luadirect",
       {cs_luacode,
        false,
        {{{1, 9, EOL_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {11, '$', OTHER_CATEGORY},
          {'%', '%', COMMENT_CATEGORY},
          {'&', '@', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'[', '[', OTHER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {']', '`', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', ACTIVE_CHAR_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}}}}},
      {"luaexec",
       {cs_luacode,
        false,
        {{{1, 9, EOL_CATEGORY},
          {'\n', '\n', EOL_CATEGORY},
          {11, '$', OTHER_CATEGORY},
          {'%', '%', COMMENT_CATEGORY},
          {'&', '@', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'[', '[', OTHER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {']', '`', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', OTHER_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}}}}},
      {"makeatletter", {cs, false, {{{'@', '@', LETTER_CATEGORY}}}}},
      {"makeatother", {cs, false, {{{'@', '@', OTHER_CATEGORY}}}}},
      {"MakeShortVerb", {cs_MakeShortVerb, false, {}}},
      {"mint", {cs_mint, false, {}}},
      {"mintinline", {cs_mintinline, false, {}}},
      {"ProvidesClass", {cs, false, {{{'@', '@', LETTER_CATEGORY}}}}},
      {"ProvidesExplClass",
       {cs,
        false,
        {{{'\t', '\t', IGNORED_CATEGORY},
          {' ', ' ', IGNORED_CATEGORY},
          {'"', '"', OTHER_CATEGORY},
          {'&', '&', ALIGNMENT_TAB_CATEGORY},
          {':', ':', LETTER_CATEGORY},
          {'^', '^', SUPERSCRIPT_CATEGORY},
          {'_', '_', LETTER_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'~', '~', SPACE_CATEGORY}}}}},
      {"ProvidesExplFile",
       {cs,
        false,
        {{{'\t', '\t', IGNORED_CATEGORY},
          {' ', ' ', IGNORED_CATEGORY},
          {'"', '"', OTHER_CATEGORY},
          {'&', '&', ALIGNMENT_TAB_CATEGORY},
          {':', ':', LETTER_CATEGORY},
          {'^', '^', SUPERSCRIPT_CATEGORY},
          {'_', '_', LETTER_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'~', '~', SPACE_CATEGORY}}}}},
      {"ProvidesExplPackage",
       {cs,
        false,
        {{{'\t', '\t', IGNORED_CATEGORY},
          {' ', ' ', IGNORED_CATEGORY},
          {'"', '"', OTHER_CATEGORY},
          {'&', '&', ALIGNMENT_TAB_CATEGORY},
          {':', ':', LETTER_CATEGORY},
          {'^', '^', SUPERSCRIPT_CATEGORY},
          {'_', '_', LETTER_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'~', '~', SPACE_CATEGORY}}}}},
      {"ProvidesFile", {cs, false, {{{'@', '@', LETTER_CATEGORY}}}}},
      {"ProvidesPackage", {cs, false, {{{'@', '@', LETTER_CATEGORY}}}}},
      {"RequirePackage", {cs_use, false, {}}},
      {"RequirePackageWithOptions", {cs_use, false, {}}},
      {"tag", {cs_tag, false, {}}},
      {"UndefineShortVerb", {cs_DeleteShortVerb, false, {}}},
      {"usepackage", {cs_use, false, {}}},
      {"verb", {cs_verb, false, {}}},
      {"xdef", {cs_def, false, {}}},
  };

  unordered_map<string, CatCodeCommand> names = {
      {
          "l3doc",
          {name,
           true,
           {{{'"', '"', VERB_DELIM_EXT_CATEGORY},
             {'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
      },
      {
          "l3doc-TUB",
          {name,
           true,
           {{{'"', '"', VERB_DELIM_EXT_CATEGORY},
             {'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
      },
      {"ltxdoc", {name, true, {{{'|', '|', VERB_DELIM_EXT_CATEGORY}}}}},
      {"ltxguide", {name, true, {{{'|', '|', VERB_DELIM_EXT_CATEGORY}}}}},
      {"nlctdoc", {name, true, {{{'|', '|', VERB_DELIM_EXT_CATEGORY}}}}},
      {"plnews", {name, true, {{{'|', '|', VERB_DELIM_EXT_CATEGORY}}}}},
  };

  unordered_map<string, Environment> environments = {
      {"align", {env_name_display_math, {}}},
      {"align*", {env_name_display_math, {}}},
      {"alignat", {env_name_alignat, {}}},
      {"alignat*", {env_name_alignat, {}}},
      {"alltt",
       {env_name,
        {{{'\t', '\t', OTHER_CATEGORY},
          {' ', ' ', OTHER_CATEGORY},
          {'#', '#', OTHER_CATEGORY},
          {'$', '$', OTHER_CATEGORY},
          {'%', '%', OTHER_CATEGORY},
          {'&', '&', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {'^', '^', OTHER_CATEGORY},
          {'_', '_', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', OTHER_CATEGORY}}}}},
      {"BVerbatim", {env_name_Verbatim, {}}},
      {"BVerbatim*", {env_name_Verbatim, {}}},
      {"comment", {env_name_comment, {}}},
      {"darray", {env_name_dmath, {}}},
      {"darray*", {env_name_dmath, {}}},
      {"dgroup", {env_name_dmath, {}}},
      {"dgroup*", {env_name_dmath, {}}},
      {"displaymath", {env_name_display_math, {}}},
      {"dmath", {env_name_dmath, {}}},
      {"dmath*", {env_name_dmath, {}}},
      {"dseries", {env_name_dseries, {}}},
      {"dseries*", {env_name_dseries, {}}},
      {"eqnarray", {env_name_display_math, {}}},
      {"eqnarray*", {env_name_display_math, {}}},
      {"equation", {env_name_display_math, {}}},
      {"equation*", {env_name_display_math, {}}},
      {"filecontents", {env_name_filecontents, {}}},
      {"filecontents*", {env_name_filecontents, {}}},
      {"flalign", {env_name_display_math, {}}},
      {"flalign*", {env_name_display_math, {}}},
      {"gather", {env_name_display_math, {}}},
      {"gather*", {env_name_display_math, {}}},
      {"lstlisting", {env_name_lstlisting, {}}},
      {"luacode",
       {env_name_luacode,
        {{{1, '@', OTHER_CATEGORY},
          {'A', 'Z', LETTER_CATEGORY},
          {'[', '[', OTHER_CATEGORY},
          {'\\', '\\', ESCAPE_CATEGORY},
          {']', '`', OTHER_CATEGORY},
          {'a', 'z', LETTER_CATEGORY},
          {'{', '{', BEGIN_CATEGORY},
          {'|', '|', OTHER_CATEGORY},
          {'}', '}', END_CATEGORY},
          {'~', '~', OTHER_CATEGORY},
          {'\x7f', '\x7f', INVALID_CATEGORY}}}}},
      {"luacode*", {env_name_luacodestar, {}}},
      {"LVerbatim", {env_name_Verbatim, {}}},
      {"LVerbatim*", {env_name_Verbatim, {}}},
      {"math", {env_name_inline_math, {}}},
      {"minted", {env_name_minted, {}}},
      {"multiline", {env_name_display_math, {}}},
      {"multiline*", {env_name_display_math, {}}},
      {"split", {env_name_display_math, {}}},
      {"split*", {env_name_display_math, {}}},
      {"verbatim", {env_name_verbatim, {}}},
      {"Verbatim", {env_name_Verbatim, {}}},
      {"verbatim*", {env_name_verbatim, {}}},
      {"Verbatim*", {env_name_Verbatim, {}}},
  };

  Scanner() {}

  void reset() {
    start_delim = 0;
    cs_name.clear();
    e_name.clear();
    u_name.clear();
    catcode_table.reset();
  }

  unsigned serialize(char *buffer) const {
    SerializationBuffer buf(buffer);

    buf << start_delim << cs_name << e_name << u_name << catcode_table;

    return buf.length;
  }

  void deserialize(const char *buffer, unsigned length) {
    reset();

    if (length == 0) {
      return;
    }

    DeserializationBuffer buf(buffer, length);

    buf >> start_delim >> cs_name >> e_name >> u_name >> catcode_table;
  }

  bool scan_verb_start_delim(TSLexer *lexer, SymbolType symbol) {
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

  bool scan_verb_end_delim(TSLexer *lexer) {
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

  bool scan_verb_body(TSLexer *lexer) {
    while (lexer->lookahead && lexer->lookahead != start_delim &&
           catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = verb_body;
    lexer->mark_end(lexer);

    return true;
  }

  int match_length(TSLexer *lexer, string value,
                   CategoryFlags terminator = ~0) {
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

  bool match_or_advance(TSLexer *lexer, string value) {
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

  bool scan_verbatim_text(TSLexer *lexer) {
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

  bool scan_comment(TSLexer *lexer) {
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
    while (lexer->lookahead &&
           catcode_table[lexer->lookahead] != EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    // Eat any EOL
    if (catcode_table[lexer->lookahead] == EOL_CATEGORY) {
      lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);

    return true;
  }

  bool scan_cs(TSLexer *lexer, const bool *valid_symbols) {
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

  inline bool scan_multi_char_symbol(TSLexer *lexer, SymbolType symbol,
                                     Category code) {
    do {
      lexer->advance(lexer, false);
    } while (lexer->lookahead && catcode_table[lexer->lookahead] == code);

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
    } while (lexer->lookahead &&
             (code == SPACE_CATEGORY || code == EOL_CATEGORY));

    lexer->result_symbol = _space;
    lexer->mark_end(lexer);

    return true;
  }

  bool scan_env_name(TSLexer *lexer) {
    e_name.clear();

    while (lexer->lookahead &&
           catcode_table[lexer->lookahead] != END_CATEGORY) {
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

  bool scan_name(TSLexer *lexer) {
    u_name.clear();

    while (lexer->lookahead &&
           catcode_table[lexer->lookahead] != END_CATEGORY) {
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

  bool scan_math_delim(TSLexer *lexer, const bool *valid_symbols) {
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

  bool scan_ignored_line(TSLexer *lexer) {
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

  bool valid_symbol_in_range(const bool *valid_symbols, SymbolType first,
                             SymbolType last) {
    return any_of(valid_symbols + first, valid_symbols + last + 1,
                  [](auto valid_symbol) { return valid_symbol; });
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    Category code = catcode_table[lexer->lookahead];

    if (valid_symbol_in_range(valid_symbols, env_name_alignat, env_name)) {
      return scan_env_name(lexer);
    }

    if (valid_symbols[name]) {
      return scan_name(lexer);
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

    if (lexer->lookahead == 0 && valid_symbols[exit]) {
      return scan_empty_symbol(lexer, exit);
    }

    if (valid_symbols[ignored_line]) {
      return scan_ignored_line(lexer);
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
      } else if (valid_symbols[r]) {
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
        return scan_space(lexer);
      }
      break;
    case PARAMETER_CATEGORY:
      if (valid_symbols[parameter_char]) {
        return scan_multi_char_symbol(lexer, parameter_char,
                                      PARAMETER_CATEGORY);
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
    case VERB_DELIM_EXT_CATEGORY:
      if (valid_symbols[short_verb_delim]) {
        return scan_verb_start_delim(lexer, short_verb_delim);
      }
      break;
    default:
      break;
    }

    return false;
  }
};

} // namespace LaTeX

// Source for required functions:
// https://github.com/tree-sitter/tree-sitter/blob/78b54810a62580537b0a2df7eb781e03667d63ba/src/compiler/generate_code/c_code.cc#L546-L552

extern "C" {

void *tree_sitter_latex_external_scanner_create() {
  return new LaTeX::Scanner();
}

bool tree_sitter_latex_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  LaTeX::Scanner *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  LaTeX::Scanner *scanner = static_cast<LaTeX::Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_latex_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
  LaTeX::Scanner *scanner = static_cast<LaTeX::Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_latex_external_scanner_destroy(void *payload) {
  LaTeX::Scanner *scanner = static_cast<LaTeX::Scanner *>(payload);
  delete scanner;
}
}
