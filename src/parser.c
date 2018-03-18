#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 248
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_align = 5,
  anon_sym_align_STAR = 6,
  anon_sym_alignat = 7,
  anon_sym_alignat_STAR = 8,
  anon_sym_eqnarray = 9,
  anon_sym_eqnarray_STAR = 10,
  anon_sym_equation = 11,
  anon_sym_equation_STAR = 12,
  anon_sym_flalign = 13,
  anon_sym_flalign_STAR = 14,
  anon_sym_gather = 15,
  anon_sym_gather_STAR = 16,
  anon_sym_multline = 17,
  anon_sym_multline_STAR = 18,
  anon_sym_split = 19,
  anon_sym_split_STAR = 20,
  anon_sym_math = 21,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 22,
  anon_sym_begin = 23,
  anon_sym_end = 24,
  anon_sym_documentclass = 25,
  anon_sym_usepackage = 26,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 27,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 28,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 29,
  anon_sym_EQ = 30,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 31,
  sym_escape = 32,
  sym_begin_group = 33,
  sym_end_group = 34,
  sym_math_shift = 35,
  sym_alignment_tab = 36,
  sym_parameter_char = 37,
  sym_superscript = 38,
  sym_subscript = 39,
  sym_name = 40,
  sym_active_char = 41,
  sym_comment_char = 42,
  sym_text = 43,
  sym_number = 44,
  sym_magic = 45,
  sym_comment_text = 46,
  sym_program = 47,
  sym_text_mode = 48,
  sym_math_mode = 49,
  sym_parameter = 50,
  sym_text_environment = 51,
  sym_math_environment = 52,
  sym_display_math = 53,
  sym_inline_math = 54,
  sym_begin_align = 55,
  sym_end_align = 56,
  sym_begin_align_star = 57,
  sym_end_align_star = 58,
  sym_begin_alignat = 59,
  sym_end_alignat = 60,
  sym_begin_alignat_star = 61,
  sym_end_alignat_star = 62,
  sym_begin_eqnarray = 63,
  sym_end_eqnarray = 64,
  sym_begin_eqnarray_star = 65,
  sym_end_eqnarray_star = 66,
  sym_begin_equation = 67,
  sym_end_equation = 68,
  sym_begin_equation_star = 69,
  sym_end_equation_star = 70,
  sym_begin_flalign = 71,
  sym_end_flalign = 72,
  sym_begin_flalign_star = 73,
  sym_end_flalign_star = 74,
  sym_begin_gather = 75,
  sym_end_gather = 76,
  sym_begin_gather_star = 77,
  sym_end_gather_star = 78,
  sym_begin_multline = 79,
  sym_end_multline = 80,
  sym_begin_multline_star = 81,
  sym_end_multline_star = 82,
  sym_begin_split = 83,
  sym_end_split = 84,
  sym_begin_split_star = 85,
  sym_end_split_star = 86,
  sym_begin_math = 87,
  sym_end_math = 88,
  sym_escaped = 89,
  sym_command = 90,
  sym_begin = 91,
  sym_begin_token = 92,
  sym_end = 93,
  sym_end_token = 94,
  sym_documentclass = 95,
  sym_documentclass_token = 96,
  sym_usepackage = 97,
  sym_usepackage_token = 98,
  sym_include = 99,
  sym_include_token = 100,
  sym_section = 101,
  sym_section_token = 102,
  sym_storage = 103,
  sym_storage_token = 104,
  sym_catcode = 105,
  sym_catcode_token = 106,
  sym_text_group = 107,
  sym_opt_text_group = 108,
  sym_math_group = 109,
  sym_opt_math_group = 110,
  sym_token = 111,
  sym_comment = 112,
  sym_begin_opt = 113,
  sym_end_opt = 114,
  aux_sym_program_repeat1 = 115,
  aux_sym_math_environment_repeat1 = 116,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_align] = "align",
  [anon_sym_align_STAR] = "align*",
  [anon_sym_alignat] = "alignat",
  [anon_sym_alignat_STAR] = "alignat*",
  [anon_sym_eqnarray] = "eqnarray",
  [anon_sym_eqnarray_STAR] = "eqnarray*",
  [anon_sym_equation] = "equation",
  [anon_sym_equation_STAR] = "equation*",
  [anon_sym_flalign] = "flalign",
  [anon_sym_flalign_STAR] = "flalign*",
  [anon_sym_gather] = "gather",
  [anon_sym_gather_STAR] = "gather*",
  [anon_sym_multline] = "multline",
  [anon_sym_multline_STAR] = "multline*",
  [anon_sym_split] = "split",
  [anon_sym_split_STAR] = "split*",
  [anon_sym_math] = "math",
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = "/[^()\\[\\]]/",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [sym_escape] = "escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_name] = "name",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_program] = "program",
  [sym_text_mode] = "text_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_text_environment] = "text_environment",
  [sym_math_environment] = "math_environment",
  [sym_display_math] = "display_math",
  [sym_inline_math] = "inline_math",
  [sym_begin_align] = "begin_align",
  [sym_end_align] = "end_align",
  [sym_begin_align_star] = "begin_align_star",
  [sym_end_align_star] = "end_align_star",
  [sym_begin_alignat] = "begin_alignat",
  [sym_end_alignat] = "end_alignat",
  [sym_begin_alignat_star] = "begin_alignat_star",
  [sym_end_alignat_star] = "end_alignat_star",
  [sym_begin_eqnarray] = "begin_eqnarray",
  [sym_end_eqnarray] = "end_eqnarray",
  [sym_begin_eqnarray_star] = "begin_eqnarray_star",
  [sym_end_eqnarray_star] = "end_eqnarray_star",
  [sym_begin_equation] = "begin_equation",
  [sym_end_equation] = "end_equation",
  [sym_begin_equation_star] = "begin_equation_star",
  [sym_end_equation_star] = "end_equation_star",
  [sym_begin_flalign] = "begin_flalign",
  [sym_end_flalign] = "end_flalign",
  [sym_begin_flalign_star] = "begin_flalign_star",
  [sym_end_flalign_star] = "end_flalign_star",
  [sym_begin_gather] = "begin_gather",
  [sym_end_gather] = "end_gather",
  [sym_begin_gather_star] = "begin_gather_star",
  [sym_end_gather_star] = "end_gather_star",
  [sym_begin_multline] = "begin_multline",
  [sym_end_multline] = "end_multline",
  [sym_begin_multline_star] = "begin_multline_star",
  [sym_end_multline_star] = "end_multline_star",
  [sym_begin_split] = "begin_split",
  [sym_end_split] = "end_split",
  [sym_begin_split_star] = "begin_split_star",
  [sym_end_split_star] = "end_split_star",
  [sym_begin_math] = "begin_math",
  [sym_end_math] = "end_math",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_begin] = "begin",
  [sym_begin_token] = "begin_token",
  [sym_end] = "end",
  [sym_end_token] = "end_token",
  [sym_documentclass] = "documentclass",
  [sym_documentclass_token] = "documentclass_token",
  [sym_usepackage] = "usepackage",
  [sym_usepackage_token] = "usepackage_token",
  [sym_include] = "include",
  [sym_include_token] = "include_token",
  [sym_section] = "section",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_text_group] = "text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
  [sym_token] = "token",
  [sym_comment] = "comment",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_math_environment_repeat1] = "math_environment_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignat_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqnarray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqnarray_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equation_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flalign_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gather] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gather_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multline_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_math] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_documentclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usepackage] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_group] = {
    .visible = true,
    .named = true,
  },
  [sym_end_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_char] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_char] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_magic] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_text_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_math_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_text_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_math_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_align] = {
    .visible = true,
    .named = true,
  },
  [sym_end_align] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_align_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_align_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_alignat] = {
    .visible = true,
    .named = true,
  },
  [sym_end_alignat] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_alignat_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_alignat_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_eqnarray] = {
    .visible = true,
    .named = true,
  },
  [sym_end_eqnarray] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_eqnarray_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_eqnarray_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_end_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_equation_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_equation_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_flalign] = {
    .visible = true,
    .named = true,
  },
  [sym_end_flalign] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_flalign_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_flalign_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_gather] = {
    .visible = true,
    .named = true,
  },
  [sym_end_gather] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_gather_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_gather_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_multline] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multline] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_multline_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multline_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_split] = {
    .visible = true,
    .named = true,
  },
  [sym_end_split] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_split_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_split_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_math] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_token] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_end_token] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass_token] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_token] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_end_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(6);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(37);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'k')
        ADVANCE(65);
      if (lookahead == 'm')
        ADVANCE(67);
      if (lookahead == 'p')
        ADVANCE(71);
      if (lookahead == 's')
        ADVANCE(79);
      if (lookahead == 'u')
        ADVANCE(94);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(9);
      if (lookahead == 'p')
        ADVANCE(14);
      if (lookahead == 's')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '`')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'p')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'u')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'u')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(111);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == '^')
        ADVANCE(112);
      if (lookahead == '_')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '}')
        ADVANCE(115);
      if (lookahead == '~')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(117);
      ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 'b')
        ADVANCE(121);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 'k')
        ADVANCE(125);
      if (lookahead == 'm')
        ADVANCE(126);
      if (lookahead == 'p')
        ADVANCE(127);
      if (lookahead == 's')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(129);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'u')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(135);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(145);
      if (lookahead != 0)
        ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(135);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(145);
      if (lookahead != 0)
        ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0)
        ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(140);
      if (lookahead != 0)
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0)
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(135);
      if (lookahead == '!')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(145);
      if (lookahead != 0)
        ADVANCE(144);
      END_STATE();
    case 146:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 'b')
        ADVANCE(121);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 'k')
        ADVANCE(125);
      if (lookahead == 'm')
        ADVANCE(126);
      if (lookahead == 'p')
        ADVANCE(127);
      if (lookahead == 's')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(129);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(131);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 148:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(111);
      if (lookahead == '^')
        ADVANCE(112);
      if (lookahead == '_')
        ADVANCE(113);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'e')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(174);
      if (lookahead == 'g')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 's')
        ADVANCE(201);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '}')
        ADVANCE(115);
      if (lookahead == '~')
        ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(118);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(154);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'e')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(174);
      if (lookahead == 'g')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 's')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(131);
      END_STATE();
    case 209:
      if (lookahead == '=')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(236);
      if (lookahead == 'g')
        ADVANCE(244);
      if (lookahead == 'm')
        ADVANCE(251);
      if (lookahead == 's')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 211:
      if (lookahead == 'l')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'i')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'g')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'n')
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == 'a')
        ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 217:
      if (lookahead == 't')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 220:
      if (lookahead == 'q')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'u')
        ADVANCE(229);
      END_STATE();
    case 222:
      if (lookahead == 'a')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'r')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'r')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'y')
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 't')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'i')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'o')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'n')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 236:
      if (lookahead == 'l')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'a')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'i')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'g')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'n')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 244:
      if (lookahead == 'a')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'h')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'r')
        ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 't')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'h')
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 255:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'l')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'i')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'n')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 263:
      if (lookahead == 'p')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'l')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 't')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 119},
  [4] = {.lex_state = 106},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 106},
  [7] = {.lex_state = 133},
  [8] = {.lex_state = 134},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 106},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 106},
  [19] = {.lex_state = 106},
  [20] = {.lex_state = 106},
  [21] = {.lex_state = 106},
  [22] = {.lex_state = 106},
  [23] = {.lex_state = 106},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 106},
  [26] = {.lex_state = 106},
  [27] = {.lex_state = 106},
  [28] = {.lex_state = 106},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 106},
  [31] = {.lex_state = 106},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 106},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 106},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 106},
  [42] = {.lex_state = 106},
  [43] = {.lex_state = 106},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 119},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 106},
  [62] = {.lex_state = 106},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 106},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 106},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 106},
  [72] = {.lex_state = 106},
  [73] = {.lex_state = 106},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 106},
  [78] = {.lex_state = 106},
  [79] = {.lex_state = 106},
  [80] = {.lex_state = 106},
  [81] = {.lex_state = 106},
  [82] = {.lex_state = 106},
  [83] = {.lex_state = 106},
  [84] = {.lex_state = 106},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 106},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 106},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 146},
  [101] = {.lex_state = 106},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 106},
  [104] = {.lex_state = 148},
  [105] = {.lex_state = 106},
  [106] = {.lex_state = 106},
  [107] = {.lex_state = 106},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 106},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 106},
  [113] = {.lex_state = 208},
  [114] = {.lex_state = 209},
  [115] = {.lex_state = 106},
  [116] = {.lex_state = 106},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 119},
  [120] = {.lex_state = 106},
  [121] = {.lex_state = 119},
  [122] = {.lex_state = 106},
  [123] = {.lex_state = 106},
  [124] = {.lex_state = 106},
  [125] = {.lex_state = 106},
  [126] = {.lex_state = 106},
  [127] = {.lex_state = 106},
  [128] = {.lex_state = 106},
  [129] = {.lex_state = 106},
  [130] = {.lex_state = 106},
  [131] = {.lex_state = 106},
  [132] = {.lex_state = 106},
  [133] = {.lex_state = 106},
  [134] = {.lex_state = 106},
  [135] = {.lex_state = 106},
  [136] = {.lex_state = 209},
  [137] = {.lex_state = 106},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 209},
  [140] = {.lex_state = 209},
  [141] = {.lex_state = 209},
  [142] = {.lex_state = 209},
  [143] = {.lex_state = 209},
  [144] = {.lex_state = 209},
  [145] = {.lex_state = 209},
  [146] = {.lex_state = 209},
  [147] = {.lex_state = 209},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 209},
  [150] = {.lex_state = 209},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 209},
  [153] = {.lex_state = 209},
  [154] = {.lex_state = 209},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 106},
  [157] = {.lex_state = 106},
  [158] = {.lex_state = 106},
  [159] = {.lex_state = 106},
  [160] = {.lex_state = 106},
  [161] = {.lex_state = 106},
  [162] = {.lex_state = 106},
  [163] = {.lex_state = 106},
  [164] = {.lex_state = 106},
  [165] = {.lex_state = 106},
  [166] = {.lex_state = 106},
  [167] = {.lex_state = 106},
  [168] = {.lex_state = 106},
  [169] = {.lex_state = 106},
  [170] = {.lex_state = 106},
  [171] = {.lex_state = 106},
  [172] = {.lex_state = 106},
  [173] = {.lex_state = 106},
  [174] = {.lex_state = 106},
  [175] = {.lex_state = 106},
  [176] = {.lex_state = 106},
  [177] = {.lex_state = 106},
  [178] = {.lex_state = 209},
  [179] = {.lex_state = 133},
  [180] = {.lex_state = 106},
  [181] = {.lex_state = 106},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 119},
  [184] = {.lex_state = 106},
  [185] = {.lex_state = 119},
  [186] = {.lex_state = 106},
  [187] = {.lex_state = 106},
  [188] = {.lex_state = 106},
  [189] = {.lex_state = 106},
  [190] = {.lex_state = 106},
  [191] = {.lex_state = 106},
  [192] = {.lex_state = 106},
  [193] = {.lex_state = 106},
  [194] = {.lex_state = 106},
  [195] = {.lex_state = 106},
  [196] = {.lex_state = 106},
  [197] = {.lex_state = 106},
  [198] = {.lex_state = 106},
  [199] = {.lex_state = 106},
  [200] = {.lex_state = 106},
  [201] = {.lex_state = 106},
  [202] = {.lex_state = 106},
  [203] = {.lex_state = 106},
  [204] = {.lex_state = 106},
  [205] = {.lex_state = 106},
  [206] = {.lex_state = 106},
  [207] = {.lex_state = 106},
  [208] = {.lex_state = 106},
  [209] = {.lex_state = 106},
  [210] = {.lex_state = 106},
  [211] = {.lex_state = 106},
  [212] = {.lex_state = 106},
  [213] = {.lex_state = 106},
  [214] = {.lex_state = 106},
  [215] = {.lex_state = 106},
  [216] = {.lex_state = 106},
  [217] = {.lex_state = 106},
  [218] = {.lex_state = 106},
  [219] = {.lex_state = 106},
  [220] = {.lex_state = 106},
  [221] = {.lex_state = 106},
  [222] = {.lex_state = 106},
  [223] = {.lex_state = 106},
  [224] = {.lex_state = 106},
  [225] = {.lex_state = 106},
  [226] = {.lex_state = 106},
  [227] = {.lex_state = 106},
  [228] = {.lex_state = 106},
  [229] = {.lex_state = 106},
  [230] = {.lex_state = 106},
  [231] = {.lex_state = 106},
  [232] = {.lex_state = 106},
  [233] = {.lex_state = 106},
  [234] = {.lex_state = 106},
  [235] = {.lex_state = 106},
  [236] = {.lex_state = 106},
  [237] = {.lex_state = 106},
  [238] = {.lex_state = 106},
  [239] = {.lex_state = 106},
  [240] = {.lex_state = 106},
  [241] = {.lex_state = 106},
  [242] = {.lex_state = 106},
  [243] = {.lex_state = 106},
  [244] = {.lex_state = 106},
  [245] = {.lex_state = 106},
  [246] = {.lex_state = 106},
  [247] = {.lex_state = 106},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_documentclass] = ACTIONS(3),
    [anon_sym_usepackage] = ACTIONS(3),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(3),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(3),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(1),
    [sym_name] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(9),
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_escape] = ACTIONS(25),
    [sym_begin_group] = ACTIONS(25),
    [sym_math_shift] = ACTIONS(25),
    [sym_alignment_tab] = ACTIONS(25),
    [sym_parameter_char] = ACTIONS(25),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(25),
    [sym_comment_char] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
  },
  [3] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [4] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [5] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(63),
    [sym_end_group] = ACTIONS(63),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(63),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_comment_char] = ACTIONS(63),
    [sym_text] = ACTIONS(65),
  },
  [7] = {
    [sym_number] = ACTIONS(67),
  },
  [8] = {
    [sym_magic] = ACTIONS(69),
    [sym_comment_text] = ACTIONS(71),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(75),
    [sym_end_group] = ACTIONS(75),
    [sym_math_shift] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(75),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(75),
    [sym_text] = ACTIONS(77),
  },
  [11] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_align] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [12] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_align_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(67),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [13] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_alignat] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(69),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [14] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_alignat_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(71),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [15] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_eqnarray] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [16] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_eqnarray_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(75),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [17] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_equation] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [18] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_equation_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(79),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(80),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [19] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_flalign] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(81),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(82),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [20] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_flalign_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [21] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_gather] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(85),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [22] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_gather_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(87),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [23] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_multline] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(89),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [24] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_multline_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(91),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(92),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [25] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_split] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(93),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [26] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_split_star] = STATE(64),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(95),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [27] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_math] = STATE(97),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [28] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_end] = STATE(101),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [29] = {
    [sym_text_group] = STATE(105),
    [sym_begin_group] = ACTIONS(83),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(85),
    [sym_end_group] = ACTIONS(85),
    [sym_math_shift] = ACTIONS(85),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(85),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_comment_char] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
  },
  [31] = {
    [sym_text_group] = STATE(106),
    [sym_opt_text_group] = STATE(107),
    [sym_begin_opt] = STATE(37),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [32] = {
    [sym_text_group] = STATE(108),
    [sym_opt_text_group] = STATE(109),
    [sym_begin_opt] = STATE(37),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [33] = {
    [sym_text_group] = STATE(110),
    [sym_begin_group] = ACTIONS(91),
  },
  [34] = {
    [sym_text_group] = STATE(111),
    [sym_opt_text_group] = STATE(112),
    [sym_begin_opt] = STATE(37),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(93),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_comment_char] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
  },
  [36] = {
    [sym_escaped] = STATE(114),
    [sym_escape] = ACTIONS(97),
  },
  [37] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [sym_end_opt] = STATE(116),
    [aux_sym_program_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [38] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [39] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [40] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(122),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(107),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(107),
    [sym_comment_char] = ACTIONS(107),
    [sym_text] = ACTIONS(109),
  },
  [42] = {
    [sym_begin_group] = ACTIONS(111),
  },
  [43] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(113),
  },
  [44] = {
    [anon_sym_LBRACK] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(115),
  },
  [45] = {
    [sym_begin_group] = ACTIONS(117),
  },
  [46] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_end_group] = ACTIONS(121),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_comment_char] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
  },
  [48] = {
    [sym_escape] = ACTIONS(125),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(127),
    [sym_text] = ACTIONS(129),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(131),
    [sym_text] = ACTIONS(133),
  },
  [51] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [52] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [53] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [54] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [55] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
    [sym_end_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(141),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(141),
    [sym_active_char] = ACTIONS(141),
    [sym_comment_char] = ACTIONS(141),
    [sym_text] = ACTIONS(143),
  },
  [56] = {
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [sym_escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(145),
    [sym_end_group] = ACTIONS(145),
    [sym_math_shift] = ACTIONS(145),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(145),
    [sym_superscript] = ACTIONS(145),
    [sym_subscript] = ACTIONS(145),
    [sym_active_char] = ACTIONS(145),
    [sym_comment_char] = ACTIONS(145),
    [sym_text] = ACTIONS(147),
  },
  [57] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end] = STATE(129),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [58] = {
    [sym_text_group] = STATE(105),
    [sym_begin_group] = ACTIONS(91),
  },
  [59] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(131),
    [aux_sym_math_environment_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [60] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_comment_char] = ACTIONS(151),
    [sym_text] = ACTIONS(153),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [sym_escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_end_group] = ACTIONS(155),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_comment_char] = ACTIONS(155),
    [sym_text] = ACTIONS(157),
  },
  [63] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(161),
    [sym_text] = ACTIONS(163),
  },
  [65] = {
    [sym_begin_group] = ACTIONS(165),
  },
  [66] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_align] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [67] = {
    [sym_begin_group] = ACTIONS(167),
  },
  [68] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_align_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(67),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [69] = {
    [sym_begin_group] = ACTIONS(169),
  },
  [70] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_alignat] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(69),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [71] = {
    [sym_begin_group] = ACTIONS(171),
  },
  [72] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_alignat_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(71),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [73] = {
    [sym_begin_group] = ACTIONS(173),
  },
  [74] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_eqnarray] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [75] = {
    [sym_begin_group] = ACTIONS(175),
  },
  [76] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_eqnarray_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(75),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [77] = {
    [sym_begin_group] = ACTIONS(177),
  },
  [78] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_equation] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [79] = {
    [sym_begin_group] = ACTIONS(179),
  },
  [80] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_equation_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(79),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [81] = {
    [sym_begin_group] = ACTIONS(181),
  },
  [82] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_flalign] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(81),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [83] = {
    [sym_begin_group] = ACTIONS(183),
  },
  [84] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_flalign_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [85] = {
    [sym_begin_group] = ACTIONS(185),
  },
  [86] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_gather] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(85),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [87] = {
    [sym_begin_group] = ACTIONS(187),
  },
  [88] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_gather_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(87),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [89] = {
    [sym_begin_group] = ACTIONS(189),
  },
  [90] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_multline] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(89),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [91] = {
    [sym_begin_group] = ACTIONS(191),
  },
  [92] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_multline_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(91),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [93] = {
    [sym_begin_group] = ACTIONS(193),
  },
  [94] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_split] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(93),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [95] = {
    [sym_begin_group] = ACTIONS(195),
  },
  [96] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_split_star] = STATE(137),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(95),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(197),
    [sym_end_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(197),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_comment_char] = ACTIONS(197),
    [sym_text] = ACTIONS(199),
  },
  [98] = {
    [sym_begin_group] = ACTIONS(201),
  },
  [99] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_end_math] = STATE(133),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [100] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym_escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_end_group] = ACTIONS(203),
    [sym_math_shift] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_comment_char] = ACTIONS(203),
    [sym_text] = ACTIONS(205),
  },
  [102] = {
    [sym_text_group] = STATE(155),
    [sym_begin_group] = ACTIONS(91),
  },
  [103] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_end] = STATE(156),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [104] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(207),
    [anon_sym_align_STAR] = ACTIONS(209),
    [anon_sym_alignat] = ACTIONS(211),
    [anon_sym_alignat_STAR] = ACTIONS(213),
    [anon_sym_eqnarray] = ACTIONS(215),
    [anon_sym_eqnarray_STAR] = ACTIONS(217),
    [anon_sym_equation] = ACTIONS(219),
    [anon_sym_equation_STAR] = ACTIONS(221),
    [anon_sym_flalign] = ACTIONS(223),
    [anon_sym_flalign_STAR] = ACTIONS(225),
    [anon_sym_gather] = ACTIONS(227),
    [anon_sym_gather_STAR] = ACTIONS(229),
    [anon_sym_multline] = ACTIONS(231),
    [anon_sym_multline_STAR] = ACTIONS(233),
    [anon_sym_split] = ACTIONS(235),
    [anon_sym_split_STAR] = ACTIONS(237),
    [anon_sym_math] = ACTIONS(239),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(17),
  },
  [105] = {
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(241),
    [sym_text] = ACTIONS(243),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_end_group] = ACTIONS(245),
    [sym_math_shift] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_comment_char] = ACTIONS(245),
    [sym_text] = ACTIONS(247),
  },
  [107] = {
    [sym_text_group] = STATE(175),
    [sym_begin_group] = ACTIONS(91),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(249),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(249),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_comment_char] = ACTIONS(249),
    [sym_text] = ACTIONS(251),
  },
  [109] = {
    [sym_text_group] = STATE(176),
    [sym_begin_group] = ACTIONS(91),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(253),
    [sym_end_group] = ACTIONS(253),
    [sym_math_shift] = ACTIONS(253),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(253),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(253),
    [sym_active_char] = ACTIONS(253),
    [sym_comment_char] = ACTIONS(253),
    [sym_text] = ACTIONS(255),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [sym_escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(257),
    [sym_end_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(257),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(257),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [sym_active_char] = ACTIONS(257),
    [sym_comment_char] = ACTIONS(257),
    [sym_text] = ACTIONS(259),
  },
  [112] = {
    [sym_text_group] = STATE(177),
    [sym_begin_group] = ACTIONS(91),
  },
  [113] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(261),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(263),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(265),
    [sym_end_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_comment_char] = ACTIONS(265),
    [sym_text] = ACTIONS(267),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_comment_char] = ACTIONS(269),
    [sym_text] = ACTIONS(271),
  },
  [117] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [sym_end_opt] = STATE(180),
    [aux_sym_program_repeat1] = STATE(181),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [118] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(296),
  },
  [119] = {
    [anon_sym_RBRACK] = ACTIONS(299),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [120] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [122] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(307),
    [sym_end_group] = ACTIONS(307),
    [sym_math_shift] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(307),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_comment_char] = ACTIONS(307),
    [sym_text] = ACTIONS(309),
  },
  [124] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(296),
  },
  [125] = {
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(311),
    [sym_end_group] = ACTIONS(311),
    [sym_math_shift] = ACTIONS(311),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_active_char] = ACTIONS(311),
    [sym_comment_char] = ACTIONS(311),
    [sym_text] = ACTIONS(313),
  },
  [126] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(187),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [127] = {
    [sym_math_shift] = ACTIONS(317),
  },
  [128] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(321),
    [sym_end_group] = ACTIONS(321),
    [sym_math_shift] = ACTIONS(321),
    [sym_alignment_tab] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(321),
    [sym_superscript] = ACTIONS(321),
    [sym_subscript] = ACTIONS(321),
    [sym_active_char] = ACTIONS(321),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(323),
  },
  [130] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_end] = STATE(189),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(325),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(325),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(325),
    [sym_text] = ACTIONS(327),
  },
  [132] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(190),
    [aux_sym_math_environment_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(329),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_comment_char] = ACTIONS(329),
    [sym_text] = ACTIONS(331),
  },
  [134] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(333),
    [sym_escape] = ACTIONS(336),
    [sym_begin_group] = ACTIONS(339),
    [sym_math_shift] = ACTIONS(342),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_comment_char] = ACTIONS(350),
    [sym_text] = ACTIONS(353),
  },
  [135] = {
    [sym_begin_group] = ACTIONS(356),
  },
  [136] = {
    [anon_sym_align] = ACTIONS(358),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(360),
    [sym_escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(360),
    [sym_end_group] = ACTIONS(360),
    [sym_math_shift] = ACTIONS(360),
    [sym_alignment_tab] = ACTIONS(360),
    [sym_parameter_char] = ACTIONS(360),
    [sym_superscript] = ACTIONS(360),
    [sym_subscript] = ACTIONS(360),
    [sym_active_char] = ACTIONS(360),
    [sym_comment_char] = ACTIONS(360),
    [sym_text] = ACTIONS(362),
  },
  [138] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(333),
    [sym_escape] = ACTIONS(336),
    [sym_begin_group] = ACTIONS(339),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_comment_char] = ACTIONS(350),
    [sym_text] = ACTIONS(353),
  },
  [139] = {
    [anon_sym_align_STAR] = ACTIONS(364),
  },
  [140] = {
    [anon_sym_alignat] = ACTIONS(366),
  },
  [141] = {
    [anon_sym_alignat_STAR] = ACTIONS(368),
  },
  [142] = {
    [anon_sym_eqnarray] = ACTIONS(370),
  },
  [143] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(372),
  },
  [144] = {
    [anon_sym_equation] = ACTIONS(374),
  },
  [145] = {
    [anon_sym_equation_STAR] = ACTIONS(376),
  },
  [146] = {
    [anon_sym_flalign] = ACTIONS(378),
  },
  [147] = {
    [anon_sym_flalign_STAR] = ACTIONS(380),
  },
  [148] = {
    [anon_sym_gather] = ACTIONS(382),
  },
  [149] = {
    [anon_sym_gather_STAR] = ACTIONS(384),
  },
  [150] = {
    [anon_sym_multline] = ACTIONS(386),
  },
  [151] = {
    [anon_sym_multline_STAR] = ACTIONS(388),
  },
  [152] = {
    [anon_sym_split] = ACTIONS(390),
  },
  [153] = {
    [anon_sym_split_STAR] = ACTIONS(392),
  },
  [154] = {
    [anon_sym_math] = ACTIONS(394),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [sym_escape] = ACTIONS(396),
    [sym_begin_group] = ACTIONS(396),
    [sym_end_group] = ACTIONS(396),
    [sym_math_shift] = ACTIONS(396),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(396),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(398),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [sym_escape] = ACTIONS(400),
    [sym_begin_group] = ACTIONS(400),
    [sym_end_group] = ACTIONS(400),
    [sym_math_shift] = ACTIONS(400),
    [sym_alignment_tab] = ACTIONS(400),
    [sym_parameter_char] = ACTIONS(400),
    [sym_superscript] = ACTIONS(400),
    [sym_subscript] = ACTIONS(400),
    [sym_active_char] = ACTIONS(400),
    [sym_comment_char] = ACTIONS(400),
    [sym_text] = ACTIONS(402),
  },
  [157] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(296),
  },
  [158] = {
    [sym_end_group] = ACTIONS(404),
  },
  [159] = {
    [sym_end_group] = ACTIONS(406),
  },
  [160] = {
    [sym_end_group] = ACTIONS(408),
  },
  [161] = {
    [sym_end_group] = ACTIONS(410),
  },
  [162] = {
    [sym_end_group] = ACTIONS(412),
  },
  [163] = {
    [sym_end_group] = ACTIONS(414),
  },
  [164] = {
    [sym_end_group] = ACTIONS(416),
  },
  [165] = {
    [sym_end_group] = ACTIONS(418),
  },
  [166] = {
    [sym_end_group] = ACTIONS(420),
  },
  [167] = {
    [sym_end_group] = ACTIONS(422),
  },
  [168] = {
    [sym_end_group] = ACTIONS(424),
  },
  [169] = {
    [sym_end_group] = ACTIONS(426),
  },
  [170] = {
    [sym_end_group] = ACTIONS(428),
  },
  [171] = {
    [sym_end_group] = ACTIONS(430),
  },
  [172] = {
    [sym_end_group] = ACTIONS(432),
  },
  [173] = {
    [sym_end_group] = ACTIONS(434),
  },
  [174] = {
    [sym_end_group] = ACTIONS(436),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [sym_escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(438),
    [sym_end_group] = ACTIONS(438),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(438),
    [sym_superscript] = ACTIONS(438),
    [sym_subscript] = ACTIONS(438),
    [sym_active_char] = ACTIONS(438),
    [sym_comment_char] = ACTIONS(438),
    [sym_text] = ACTIONS(440),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [sym_escape] = ACTIONS(442),
    [sym_begin_group] = ACTIONS(442),
    [sym_end_group] = ACTIONS(442),
    [sym_math_shift] = ACTIONS(442),
    [sym_alignment_tab] = ACTIONS(442),
    [sym_parameter_char] = ACTIONS(442),
    [sym_superscript] = ACTIONS(442),
    [sym_subscript] = ACTIONS(442),
    [sym_active_char] = ACTIONS(442),
    [sym_comment_char] = ACTIONS(442),
    [sym_text] = ACTIONS(444),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_escape] = ACTIONS(446),
    [sym_begin_group] = ACTIONS(446),
    [sym_end_group] = ACTIONS(446),
    [sym_math_shift] = ACTIONS(446),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_comment_char] = ACTIONS(446),
    [sym_text] = ACTIONS(448),
  },
  [178] = {
    [anon_sym_EQ] = ACTIONS(450),
  },
  [179] = {
    [sym_number] = ACTIONS(452),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym_escape] = ACTIONS(454),
    [sym_begin_group] = ACTIONS(454),
    [sym_end_group] = ACTIONS(454),
    [sym_math_shift] = ACTIONS(454),
    [sym_alignment_tab] = ACTIONS(454),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(454),
    [sym_subscript] = ACTIONS(454),
    [sym_active_char] = ACTIONS(454),
    [sym_comment_char] = ACTIONS(454),
    [sym_text] = ACTIONS(456),
  },
  [181] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(28),
    [sym_begin_token] = STATE(29),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(37),
    [aux_sym_program_repeat1] = STATE(181),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(296),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_escape] = ACTIONS(458),
    [sym_begin_group] = ACTIONS(458),
    [sym_end_group] = ACTIONS(458),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(458),
    [sym_parameter_char] = ACTIONS(458),
    [sym_superscript] = ACTIONS(458),
    [sym_subscript] = ACTIONS(458),
    [sym_active_char] = ACTIONS(458),
    [sym_comment_char] = ACTIONS(458),
    [sym_text] = ACTIONS(460),
  },
  [183] = {
    [anon_sym_RBRACK] = ACTIONS(462),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym_escape] = ACTIONS(464),
    [sym_begin_group] = ACTIONS(464),
    [sym_end_group] = ACTIONS(464),
    [sym_math_shift] = ACTIONS(464),
    [sym_alignment_tab] = ACTIONS(464),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(464),
    [sym_active_char] = ACTIONS(464),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(466),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(468),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [sym_escape] = ACTIONS(470),
    [sym_begin_group] = ACTIONS(470),
    [sym_end_group] = ACTIONS(470),
    [sym_math_shift] = ACTIONS(470),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(470),
    [sym_subscript] = ACTIONS(470),
    [sym_active_char] = ACTIONS(470),
    [sym_comment_char] = ACTIONS(470),
    [sym_text] = ACTIONS(472),
  },
  [187] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(187),
    [anon_sym_LBRACK] = ACTIONS(333),
    [sym_escape] = ACTIONS(336),
    [sym_begin_group] = ACTIONS(339),
    [sym_end_group] = ACTIONS(342),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_comment_char] = ACTIONS(350),
    [sym_text] = ACTIONS(353),
  },
  [188] = {
    [sym_math_shift] = ACTIONS(474),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [sym_escape] = ACTIONS(476),
    [sym_begin_group] = ACTIONS(476),
    [sym_end_group] = ACTIONS(476),
    [sym_math_shift] = ACTIONS(476),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(476),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_comment_char] = ACTIONS(476),
    [sym_text] = ACTIONS(478),
  },
  [190] = {
    [anon_sym_LBRACK] = ACTIONS(480),
    [anon_sym_RBRACK] = ACTIONS(480),
    [sym_escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(480),
    [sym_end_group] = ACTIONS(480),
    [sym_math_shift] = ACTIONS(480),
    [sym_alignment_tab] = ACTIONS(480),
    [sym_parameter_char] = ACTIONS(480),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [sym_active_char] = ACTIONS(480),
    [sym_comment_char] = ACTIONS(480),
    [sym_text] = ACTIONS(482),
  },
  [191] = {
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(57),
    [sym_begin_token] = STATE(58),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(31),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(32),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(33),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(34),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(35),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(36),
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(30),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(59),
    [aux_sym_math_environment_repeat1] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_escape] = ACTIONS(336),
    [sym_begin_group] = ACTIONS(339),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_comment_char] = ACTIONS(350),
    [sym_text] = ACTIONS(353),
  },
  [192] = {
    [sym_end_group] = ACTIONS(484),
  },
  [193] = {
    [sym_end_group] = ACTIONS(486),
  },
  [194] = {
    [sym_end_group] = ACTIONS(488),
  },
  [195] = {
    [sym_end_group] = ACTIONS(490),
  },
  [196] = {
    [sym_end_group] = ACTIONS(492),
  },
  [197] = {
    [sym_end_group] = ACTIONS(494),
  },
  [198] = {
    [sym_end_group] = ACTIONS(496),
  },
  [199] = {
    [sym_end_group] = ACTIONS(498),
  },
  [200] = {
    [sym_end_group] = ACTIONS(500),
  },
  [201] = {
    [sym_end_group] = ACTIONS(502),
  },
  [202] = {
    [sym_end_group] = ACTIONS(504),
  },
  [203] = {
    [sym_end_group] = ACTIONS(506),
  },
  [204] = {
    [sym_end_group] = ACTIONS(508),
  },
  [205] = {
    [sym_end_group] = ACTIONS(510),
  },
  [206] = {
    [sym_end_group] = ACTIONS(512),
  },
  [207] = {
    [sym_end_group] = ACTIONS(514),
  },
  [208] = {
    [sym_end_group] = ACTIONS(516),
  },
  [209] = {
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_escape] = ACTIONS(518),
    [sym_begin_group] = ACTIONS(518),
    [sym_alignment_tab] = ACTIONS(518),
    [sym_parameter_char] = ACTIONS(518),
    [sym_superscript] = ACTIONS(518),
    [sym_subscript] = ACTIONS(518),
    [sym_active_char] = ACTIONS(518),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(520),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(522),
    [sym_escape] = ACTIONS(522),
    [sym_begin_group] = ACTIONS(522),
    [sym_alignment_tab] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(522),
    [sym_superscript] = ACTIONS(522),
    [sym_subscript] = ACTIONS(522),
    [sym_active_char] = ACTIONS(522),
    [sym_comment_char] = ACTIONS(522),
    [sym_text] = ACTIONS(524),
  },
  [211] = {
    [sym_text_group] = STATE(246),
    [sym_begin_group] = ACTIONS(91),
  },
  [212] = {
    [sym_text_group] = STATE(247),
    [sym_begin_group] = ACTIONS(91),
  },
  [213] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_comment_char] = ACTIONS(526),
    [sym_text] = ACTIONS(528),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(530),
    [sym_escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_comment_char] = ACTIONS(530),
    [sym_text] = ACTIONS(532),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_escape] = ACTIONS(534),
    [sym_begin_group] = ACTIONS(534),
    [sym_alignment_tab] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(534),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_comment_char] = ACTIONS(534),
    [sym_text] = ACTIONS(536),
  },
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(538),
    [sym_escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_comment_char] = ACTIONS(538),
    [sym_text] = ACTIONS(540),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym_escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(542),
    [sym_alignment_tab] = ACTIONS(542),
    [sym_parameter_char] = ACTIONS(542),
    [sym_superscript] = ACTIONS(542),
    [sym_subscript] = ACTIONS(542),
    [sym_active_char] = ACTIONS(542),
    [sym_comment_char] = ACTIONS(542),
    [sym_text] = ACTIONS(544),
  },
  [218] = {
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym_escape] = ACTIONS(546),
    [sym_begin_group] = ACTIONS(546),
    [sym_alignment_tab] = ACTIONS(546),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(546),
    [sym_active_char] = ACTIONS(546),
    [sym_comment_char] = ACTIONS(546),
    [sym_text] = ACTIONS(548),
  },
  [219] = {
    [anon_sym_LBRACK] = ACTIONS(550),
    [sym_escape] = ACTIONS(550),
    [sym_begin_group] = ACTIONS(550),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(550),
    [sym_superscript] = ACTIONS(550),
    [sym_subscript] = ACTIONS(550),
    [sym_active_char] = ACTIONS(550),
    [sym_comment_char] = ACTIONS(550),
    [sym_text] = ACTIONS(552),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [sym_escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_comment_char] = ACTIONS(554),
    [sym_text] = ACTIONS(556),
  },
  [221] = {
    [anon_sym_LBRACK] = ACTIONS(558),
    [sym_escape] = ACTIONS(558),
    [sym_begin_group] = ACTIONS(558),
    [sym_alignment_tab] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(558),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_comment_char] = ACTIONS(558),
    [sym_text] = ACTIONS(560),
  },
  [222] = {
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(562),
    [sym_active_char] = ACTIONS(562),
    [sym_comment_char] = ACTIONS(562),
    [sym_text] = ACTIONS(564),
  },
  [223] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_comment_char] = ACTIONS(566),
    [sym_text] = ACTIONS(568),
  },
  [224] = {
    [anon_sym_LBRACK] = ACTIONS(570),
    [sym_escape] = ACTIONS(570),
    [sym_begin_group] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(570),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_comment_char] = ACTIONS(570),
    [sym_text] = ACTIONS(572),
  },
  [225] = {
    [anon_sym_LBRACK] = ACTIONS(574),
    [sym_escape] = ACTIONS(574),
    [sym_begin_group] = ACTIONS(574),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(574),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_comment_char] = ACTIONS(574),
    [sym_text] = ACTIONS(576),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [sym_escape] = ACTIONS(578),
    [sym_begin_group] = ACTIONS(578),
    [sym_end_group] = ACTIONS(578),
    [sym_math_shift] = ACTIONS(578),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(578),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_comment_char] = ACTIONS(578),
    [sym_text] = ACTIONS(580),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [sym_escape] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_end_group] = ACTIONS(582),
    [sym_math_shift] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_active_char] = ACTIONS(582),
    [sym_comment_char] = ACTIONS(582),
    [sym_text] = ACTIONS(584),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_RBRACK] = ACTIONS(586),
    [sym_escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_end_group] = ACTIONS(586),
    [sym_math_shift] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_comment_char] = ACTIONS(586),
    [sym_text] = ACTIONS(588),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(590),
    [anon_sym_RBRACK] = ACTIONS(590),
    [sym_escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(590),
    [sym_end_group] = ACTIONS(590),
    [sym_math_shift] = ACTIONS(590),
    [sym_alignment_tab] = ACTIONS(590),
    [sym_parameter_char] = ACTIONS(590),
    [sym_superscript] = ACTIONS(590),
    [sym_subscript] = ACTIONS(590),
    [sym_active_char] = ACTIONS(590),
    [sym_comment_char] = ACTIONS(590),
    [sym_text] = ACTIONS(592),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [sym_escape] = ACTIONS(594),
    [sym_begin_group] = ACTIONS(594),
    [sym_end_group] = ACTIONS(594),
    [sym_math_shift] = ACTIONS(594),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(594),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_comment_char] = ACTIONS(594),
    [sym_text] = ACTIONS(596),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [sym_escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_end_group] = ACTIONS(598),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_comment_char] = ACTIONS(598),
    [sym_text] = ACTIONS(600),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [sym_escape] = ACTIONS(602),
    [sym_begin_group] = ACTIONS(602),
    [sym_end_group] = ACTIONS(602),
    [sym_math_shift] = ACTIONS(602),
    [sym_alignment_tab] = ACTIONS(602),
    [sym_parameter_char] = ACTIONS(602),
    [sym_superscript] = ACTIONS(602),
    [sym_subscript] = ACTIONS(602),
    [sym_active_char] = ACTIONS(602),
    [sym_comment_char] = ACTIONS(602),
    [sym_text] = ACTIONS(604),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(606),
    [anon_sym_RBRACK] = ACTIONS(606),
    [sym_escape] = ACTIONS(606),
    [sym_begin_group] = ACTIONS(606),
    [sym_end_group] = ACTIONS(606),
    [sym_math_shift] = ACTIONS(606),
    [sym_alignment_tab] = ACTIONS(606),
    [sym_parameter_char] = ACTIONS(606),
    [sym_superscript] = ACTIONS(606),
    [sym_subscript] = ACTIONS(606),
    [sym_active_char] = ACTIONS(606),
    [sym_comment_char] = ACTIONS(606),
    [sym_text] = ACTIONS(608),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [sym_escape] = ACTIONS(610),
    [sym_begin_group] = ACTIONS(610),
    [sym_end_group] = ACTIONS(610),
    [sym_math_shift] = ACTIONS(610),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(610),
    [sym_superscript] = ACTIONS(610),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [sym_comment_char] = ACTIONS(610),
    [sym_text] = ACTIONS(612),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [sym_escape] = ACTIONS(614),
    [sym_begin_group] = ACTIONS(614),
    [sym_end_group] = ACTIONS(614),
    [sym_math_shift] = ACTIONS(614),
    [sym_alignment_tab] = ACTIONS(614),
    [sym_parameter_char] = ACTIONS(614),
    [sym_superscript] = ACTIONS(614),
    [sym_subscript] = ACTIONS(614),
    [sym_active_char] = ACTIONS(614),
    [sym_comment_char] = ACTIONS(614),
    [sym_text] = ACTIONS(616),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [sym_escape] = ACTIONS(618),
    [sym_begin_group] = ACTIONS(618),
    [sym_end_group] = ACTIONS(618),
    [sym_math_shift] = ACTIONS(618),
    [sym_alignment_tab] = ACTIONS(618),
    [sym_parameter_char] = ACTIONS(618),
    [sym_superscript] = ACTIONS(618),
    [sym_subscript] = ACTIONS(618),
    [sym_active_char] = ACTIONS(618),
    [sym_comment_char] = ACTIONS(618),
    [sym_text] = ACTIONS(620),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [sym_escape] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_end_group] = ACTIONS(622),
    [sym_math_shift] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(622),
    [sym_superscript] = ACTIONS(622),
    [sym_subscript] = ACTIONS(622),
    [sym_active_char] = ACTIONS(622),
    [sym_comment_char] = ACTIONS(622),
    [sym_text] = ACTIONS(624),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [sym_escape] = ACTIONS(626),
    [sym_begin_group] = ACTIONS(626),
    [sym_end_group] = ACTIONS(626),
    [sym_math_shift] = ACTIONS(626),
    [sym_alignment_tab] = ACTIONS(626),
    [sym_parameter_char] = ACTIONS(626),
    [sym_superscript] = ACTIONS(626),
    [sym_subscript] = ACTIONS(626),
    [sym_active_char] = ACTIONS(626),
    [sym_comment_char] = ACTIONS(626),
    [sym_text] = ACTIONS(628),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_escape] = ACTIONS(630),
    [sym_begin_group] = ACTIONS(630),
    [sym_end_group] = ACTIONS(630),
    [sym_math_shift] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(630),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(630),
    [sym_active_char] = ACTIONS(630),
    [sym_comment_char] = ACTIONS(630),
    [sym_text] = ACTIONS(632),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_RBRACK] = ACTIONS(634),
    [sym_escape] = ACTIONS(634),
    [sym_begin_group] = ACTIONS(634),
    [sym_end_group] = ACTIONS(634),
    [sym_math_shift] = ACTIONS(634),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(634),
    [sym_superscript] = ACTIONS(634),
    [sym_subscript] = ACTIONS(634),
    [sym_active_char] = ACTIONS(634),
    [sym_comment_char] = ACTIONS(634),
    [sym_text] = ACTIONS(636),
  },
  [241] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [sym_escape] = ACTIONS(638),
    [sym_begin_group] = ACTIONS(638),
    [sym_end_group] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(638),
    [sym_alignment_tab] = ACTIONS(638),
    [sym_parameter_char] = ACTIONS(638),
    [sym_superscript] = ACTIONS(638),
    [sym_subscript] = ACTIONS(638),
    [sym_active_char] = ACTIONS(638),
    [sym_comment_char] = ACTIONS(638),
    [sym_text] = ACTIONS(640),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_escape] = ACTIONS(642),
    [sym_begin_group] = ACTIONS(642),
    [sym_end_group] = ACTIONS(642),
    [sym_math_shift] = ACTIONS(642),
    [sym_alignment_tab] = ACTIONS(642),
    [sym_parameter_char] = ACTIONS(642),
    [sym_superscript] = ACTIONS(642),
    [sym_subscript] = ACTIONS(642),
    [sym_active_char] = ACTIONS(642),
    [sym_comment_char] = ACTIONS(642),
    [sym_text] = ACTIONS(644),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [sym_escape] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_end_group] = ACTIONS(646),
    [sym_math_shift] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_active_char] = ACTIONS(646),
    [sym_comment_char] = ACTIONS(646),
    [sym_text] = ACTIONS(648),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(650),
    [anon_sym_RBRACK] = ACTIONS(650),
    [sym_escape] = ACTIONS(650),
    [sym_begin_group] = ACTIONS(650),
    [sym_end_group] = ACTIONS(650),
    [sym_math_shift] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(650),
    [sym_parameter_char] = ACTIONS(650),
    [sym_superscript] = ACTIONS(650),
    [sym_subscript] = ACTIONS(650),
    [sym_active_char] = ACTIONS(650),
    [sym_comment_char] = ACTIONS(650),
    [sym_text] = ACTIONS(652),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [sym_escape] = ACTIONS(654),
    [sym_begin_group] = ACTIONS(654),
    [sym_end_group] = ACTIONS(654),
    [sym_math_shift] = ACTIONS(654),
    [sym_alignment_tab] = ACTIONS(654),
    [sym_parameter_char] = ACTIONS(654),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(654),
    [sym_comment_char] = ACTIONS(654),
    [sym_text] = ACTIONS(656),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(658),
    [sym_escape] = ACTIONS(658),
    [sym_begin_group] = ACTIONS(658),
    [sym_alignment_tab] = ACTIONS(658),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(658),
    [sym_subscript] = ACTIONS(658),
    [sym_active_char] = ACTIONS(658),
    [sym_comment_char] = ACTIONS(658),
    [sym_text] = ACTIONS(660),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(662),
    [sym_escape] = ACTIONS(662),
    [sym_begin_group] = ACTIONS(662),
    [sym_alignment_tab] = ACTIONS(662),
    [sym_parameter_char] = ACTIONS(662),
    [sym_superscript] = ACTIONS(662),
    [sym_subscript] = ACTIONS(662),
    [sym_active_char] = ACTIONS(662),
    [sym_comment_char] = ACTIONS(662),
    [sym_text] = ACTIONS(664),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 1),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage, 1),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage, 1),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_begin_token, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_documentclass_token, 2),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_usepackage_token, 2),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_token, 2),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_section_token, 2),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage_token, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage_token, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catcode_token, 2),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_token, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_token, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 2),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 2),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 2),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 2),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 2),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 2),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 2),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 2),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [275] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [278] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [281] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [284] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [287] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [290] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [293] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [296] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 2),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [333] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [336] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(52),
  [339] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(53),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [344] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(55),
  [347] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [353] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(55),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_end_token, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 2),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 3),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 3),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 3),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 3),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 4),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 4),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 4),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 4),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 4),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 4),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 4),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 4),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 4),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 4),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 4),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 4),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 4),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 4),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 4),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 4),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 4),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 4),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 4),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 4),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 4),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 4),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 4),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 4),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 4),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 4),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 4),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 4),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 4),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 4),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 4),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 4),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 4),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 4),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 4),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 4),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 4),
  [610] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 4),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 4),
  [614] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 4),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 4),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 4),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 4),
  [622] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 4),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 4),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 4),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 4),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 4),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 4),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 4),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 4),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 4),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 4),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 4),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 4),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 4),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 4),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 4),
  [654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 4),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 4),
  [658] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 5),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 5),
  [662] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 5),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
