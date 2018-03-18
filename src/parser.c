#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 257
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_begin = 5,
  anon_sym_align = 6,
  anon_sym_end = 7,
  anon_sym_align_STAR = 8,
  anon_sym_alignat = 9,
  anon_sym_alignat_STAR = 10,
  anon_sym_eqnarray = 11,
  anon_sym_eqnarray_STAR = 12,
  anon_sym_equation = 13,
  anon_sym_equation_STAR = 14,
  anon_sym_flalign = 15,
  anon_sym_flalign_STAR = 16,
  anon_sym_gather = 17,
  anon_sym_gather_STAR = 18,
  anon_sym_multline = 19,
  anon_sym_multline_STAR = 20,
  anon_sym_split = 21,
  anon_sym_split_STAR = 22,
  anon_sym_math = 23,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 24,
  anon_sym_documentclass = 25,
  anon_sym_usepackage = 26,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 27,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 28,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 29,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 30,
  anon_sym_EQ = 31,
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
  sym_end = 92,
  sym_documentclass = 93,
  sym_usepackage = 94,
  sym_include = 95,
  sym_section = 96,
  sym_storage = 97,
  sym_catcode = 98,
  sym_text_group = 99,
  sym_opt_text_group = 100,
  sym_math_group = 101,
  sym_opt_math_group = 102,
  sym_comment = 103,
  sym_begin_opt = 104,
  sym_end_opt = 105,
  aux_sym_program_repeat1 = 106,
  aux_sym_math_environment_repeat1 = 107,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_begin] = "begin",
  [anon_sym_align] = "align",
  [anon_sym_end] = "end",
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
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_EQ] = "=",
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
  [sym_end] = "end",
  [sym_documentclass] = "documentclass",
  [sym_usepackage] = "usepackage",
  [sym_include] = "include",
  [sym_section] = "section",
  [sym_storage] = "storage",
  [sym_catcode] = "catcode",
  [sym_text_group] = "text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
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
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
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
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode] = {
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
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 146},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 146},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 146},
  [61] = {.lex_state = 106},
  [62] = {.lex_state = 146},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 146},
  [65] = {.lex_state = 106},
  [66] = {.lex_state = 146},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 146},
  [69] = {.lex_state = 106},
  [70] = {.lex_state = 146},
  [71] = {.lex_state = 106},
  [72] = {.lex_state = 146},
  [73] = {.lex_state = 106},
  [74] = {.lex_state = 146},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 146},
  [77] = {.lex_state = 106},
  [78] = {.lex_state = 146},
  [79] = {.lex_state = 106},
  [80] = {.lex_state = 146},
  [81] = {.lex_state = 106},
  [82] = {.lex_state = 146},
  [83] = {.lex_state = 106},
  [84] = {.lex_state = 146},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 146},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 146},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 146},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 106},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 119},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 119},
  [101] = {.lex_state = 106},
  [102] = {.lex_state = 148},
  [103] = {.lex_state = 106},
  [104] = {.lex_state = 106},
  [105] = {.lex_state = 106},
  [106] = {.lex_state = 106},
  [107] = {.lex_state = 106},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 106},
  [111] = {.lex_state = 208},
  [112] = {.lex_state = 209},
  [113] = {.lex_state = 106},
  [114] = {.lex_state = 106},
  [115] = {.lex_state = 106},
  [116] = {.lex_state = 106},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 106},
  [120] = {.lex_state = 146},
  [121] = {.lex_state = 106},
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
  [136] = {.lex_state = 106},
  [137] = {.lex_state = 106},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 106},
  [140] = {.lex_state = 106},
  [141] = {.lex_state = 106},
  [142] = {.lex_state = 106},
  [143] = {.lex_state = 106},
  [144] = {.lex_state = 106},
  [145] = {.lex_state = 106},
  [146] = {.lex_state = 106},
  [147] = {.lex_state = 106},
  [148] = {.lex_state = 106},
  [149] = {.lex_state = 106},
  [150] = {.lex_state = 106},
  [151] = {.lex_state = 106},
  [152] = {.lex_state = 119},
  [153] = {.lex_state = 106},
  [154] = {.lex_state = 119},
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
  [175] = {.lex_state = 209},
  [176] = {.lex_state = 133},
  [177] = {.lex_state = 106},
  [178] = {.lex_state = 106},
  [179] = {.lex_state = 106},
  [180] = {.lex_state = 106},
  [181] = {.lex_state = 106},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 209},
  [184] = {.lex_state = 209},
  [185] = {.lex_state = 209},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 209},
  [188] = {.lex_state = 209},
  [189] = {.lex_state = 209},
  [190] = {.lex_state = 209},
  [191] = {.lex_state = 209},
  [192] = {.lex_state = 209},
  [193] = {.lex_state = 209},
  [194] = {.lex_state = 209},
  [195] = {.lex_state = 209},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 209},
  [198] = {.lex_state = 209},
  [199] = {.lex_state = 209},
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
  [248] = {.lex_state = 106},
  [249] = {.lex_state = 106},
  [250] = {.lex_state = 106},
  [251] = {.lex_state = 106},
  [252] = {.lex_state = 106},
  [253] = {.lex_state = 106},
  [254] = {.lex_state = 106},
  [255] = {.lex_state = 106},
  [256] = {.lex_state = 106},
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(31),
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
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(44),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(52),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_align] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(57),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_align_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_alignat] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(83),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_alignat_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(85),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_eqnarray] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(65),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(87),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_eqnarray_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(67),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(89),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_equation] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(69),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(91),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_equation_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(93),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_flalign] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(95),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_flalign_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(97),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_gather] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(99),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_gather_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(101),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_multline] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(81),
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
  [24] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_multline_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(83),
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
  [25] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_split] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(85),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(107),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_split_star] = STATE(56),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(109),
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
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_math] = STATE(89),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(111),
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
    [sym_end] = STATE(92),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(113),
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
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(115),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(115),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(115),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_comment_char] = ACTIONS(115),
    [sym_text] = ACTIONS(117),
  },
  [30] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(95),
    [aux_sym_program_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(119),
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
  [31] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(121),
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
  [32] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [33] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [34] = {
    [sym_text_group] = STATE(103),
    [sym_begin_group] = ACTIONS(127),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_end_group] = ACTIONS(129),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_comment_char] = ACTIONS(129),
    [sym_text] = ACTIONS(131),
  },
  [36] = {
    [sym_text_group] = STATE(104),
    [sym_opt_text_group] = STATE(105),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
  },
  [37] = {
    [sym_text_group] = STATE(106),
    [sym_opt_text_group] = STATE(107),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
  },
  [38] = {
    [sym_text_group] = STATE(108),
    [sym_begin_group] = ACTIONS(135),
  },
  [39] = {
    [sym_text_group] = STATE(109),
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_end_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
  },
  [41] = {
    [sym_escaped] = STATE(112),
    [sym_escape] = ACTIONS(141),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_end_group] = ACTIONS(143),
    [sym_math_shift] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_comment_char] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(147),
    [sym_math_shift] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_comment_char] = ACTIONS(147),
    [sym_text] = ACTIONS(149),
  },
  [44] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [45] = {
    [anon_sym_begin] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [46] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [47] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(119),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [48] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_comment_char] = ACTIONS(159),
    [sym_text] = ACTIONS(161),
  },
  [49] = {
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym_escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_end_group] = ACTIONS(163),
    [sym_math_shift] = ACTIONS(163),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_comment_char] = ACTIONS(163),
    [sym_text] = ACTIONS(165),
  },
  [50] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_end] = STATE(121),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(122),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [51] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [sym_end_opt] = STATE(123),
    [aux_sym_math_environment_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(119),
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
  [52] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [sym_escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(171),
    [sym_end_group] = ACTIONS(171),
    [sym_math_shift] = ACTIONS(171),
    [sym_alignment_tab] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(171),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(171),
    [sym_active_char] = ACTIONS(171),
    [sym_comment_char] = ACTIONS(171),
    [sym_text] = ACTIONS(173),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_end_group] = ACTIONS(175),
    [sym_math_shift] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_comment_char] = ACTIONS(175),
    [sym_text] = ACTIONS(177),
  },
  [55] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(179),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [sym_escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_end_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(181),
    [sym_text] = ACTIONS(183),
  },
  [57] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_align] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
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
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [59] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_align_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
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
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [61] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_alignat] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [62] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [63] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_alignat_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [64] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [65] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_eqnarray] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [66] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(193),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [67] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_eqnarray_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [68] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [69] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_equation] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [70] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [71] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_equation_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [72] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(199),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [73] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_flalign] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [74] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [75] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_flalign_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [76] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [77] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_gather] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [78] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [79] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_gather_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [80] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(207),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [81] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_multline] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
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
  [82] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [83] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_multline_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
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
  [84] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [85] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_split] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [86] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [87] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_split_star] = STATE(128),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [88] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(215),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_end_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_comment_char] = ACTIONS(217),
    [sym_text] = ACTIONS(219),
  },
  [90] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_end_math] = STATE(125),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(111),
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
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_end_group] = ACTIONS(223),
    [sym_math_shift] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(223),
    [sym_text] = ACTIONS(225),
  },
  [93] = {
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
    [sym_end] = STATE(147),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(113),
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
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(227),
    [sym_text] = ACTIONS(229),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym_escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_end_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_comment_char] = ACTIONS(231),
    [sym_text] = ACTIONS(233),
  },
  [96] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(149),
    [aux_sym_program_repeat1] = STATE(150),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(119),
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
  [97] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(237),
    [sym_escape] = ACTIONS(240),
    [sym_begin_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(246),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(252),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_comment_char] = ACTIONS(255),
    [sym_text] = ACTIONS(258),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [99] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(263),
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
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_begin] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [101] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [102] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(269),
    [anon_sym_align_STAR] = ACTIONS(271),
    [anon_sym_alignat] = ACTIONS(273),
    [anon_sym_alignat_STAR] = ACTIONS(275),
    [anon_sym_eqnarray] = ACTIONS(277),
    [anon_sym_eqnarray_STAR] = ACTIONS(279),
    [anon_sym_equation] = ACTIONS(281),
    [anon_sym_equation_STAR] = ACTIONS(283),
    [anon_sym_flalign] = ACTIONS(285),
    [anon_sym_flalign_STAR] = ACTIONS(287),
    [anon_sym_gather] = ACTIONS(289),
    [anon_sym_gather_STAR] = ACTIONS(291),
    [anon_sym_multline] = ACTIONS(293),
    [anon_sym_multline_STAR] = ACTIONS(295),
    [anon_sym_split] = ACTIONS(297),
    [anon_sym_split_STAR] = ACTIONS(299),
    [anon_sym_math] = ACTIONS(301),
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
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_comment_char] = ACTIONS(303),
    [sym_text] = ACTIONS(305),
  },
  [104] = {
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
  [105] = {
    [sym_text_group] = STATE(172),
    [sym_begin_group] = ACTIONS(135),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(311),
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
  [107] = {
    [sym_text_group] = STATE(173),
    [sym_begin_group] = ACTIONS(135),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(317),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym_escape] = ACTIONS(319),
    [sym_begin_group] = ACTIONS(319),
    [sym_end_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(319),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_comment_char] = ACTIONS(319),
    [sym_text] = ACTIONS(321),
  },
  [110] = {
    [sym_text_group] = STATE(174),
    [sym_begin_group] = ACTIONS(135),
  },
  [111] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(323),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(325),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_end_group] = ACTIONS(327),
    [sym_math_shift] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_comment_char] = ACTIONS(327),
    [sym_text] = ACTIONS(329),
  },
  [114] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(237),
    [sym_escape] = ACTIONS(240),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(235),
    [sym_math_shift] = ACTIONS(246),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(252),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_comment_char] = ACTIONS(255),
    [sym_text] = ACTIONS(258),
  },
  [115] = {
    [sym_text_group] = STATE(103),
    [sym_begin_group] = ACTIONS(135),
  },
  [116] = {
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(333),
  },
  [117] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(178),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(335),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [118] = {
    [sym_math_shift] = ACTIONS(337),
  },
  [119] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(339),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [120] = {
    [anon_sym_begin] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [121] = {
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_escape] = ACTIONS(341),
    [sym_begin_group] = ACTIONS(341),
    [sym_end_group] = ACTIONS(341),
    [sym_math_shift] = ACTIONS(341),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(341),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_comment_char] = ACTIONS(341),
    [sym_text] = ACTIONS(343),
  },
  [122] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_end] = STATE(180),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(167),
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
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(347),
  },
  [124] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [sym_end_opt] = STATE(181),
    [aux_sym_math_environment_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(119),
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
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_end_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(349),
    [sym_text] = ACTIONS(351),
  },
  [126] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(364),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(364),
    [sym_subscript] = ACTIONS(364),
    [sym_active_char] = ACTIONS(364),
    [sym_comment_char] = ACTIONS(370),
    [sym_text] = ACTIONS(373),
  },
  [127] = {
    [sym_begin_group] = ACTIONS(376),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(378),
    [sym_end_group] = ACTIONS(378),
    [sym_math_shift] = ACTIONS(378),
    [sym_alignment_tab] = ACTIONS(378),
    [sym_parameter_char] = ACTIONS(378),
    [sym_superscript] = ACTIONS(378),
    [sym_subscript] = ACTIONS(378),
    [sym_active_char] = ACTIONS(378),
    [sym_comment_char] = ACTIONS(378),
    [sym_text] = ACTIONS(380),
  },
  [129] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(364),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(364),
    [sym_subscript] = ACTIONS(364),
    [sym_active_char] = ACTIONS(364),
    [sym_comment_char] = ACTIONS(370),
    [sym_text] = ACTIONS(373),
  },
  [130] = {
    [sym_begin_group] = ACTIONS(382),
  },
  [131] = {
    [sym_begin_group] = ACTIONS(384),
  },
  [132] = {
    [sym_begin_group] = ACTIONS(386),
  },
  [133] = {
    [sym_begin_group] = ACTIONS(388),
  },
  [134] = {
    [sym_begin_group] = ACTIONS(390),
  },
  [135] = {
    [sym_begin_group] = ACTIONS(392),
  },
  [136] = {
    [sym_begin_group] = ACTIONS(394),
  },
  [137] = {
    [sym_begin_group] = ACTIONS(396),
  },
  [138] = {
    [sym_begin_group] = ACTIONS(398),
  },
  [139] = {
    [sym_begin_group] = ACTIONS(400),
  },
  [140] = {
    [sym_begin_group] = ACTIONS(402),
  },
  [141] = {
    [sym_begin_group] = ACTIONS(404),
  },
  [142] = {
    [sym_begin_group] = ACTIONS(406),
  },
  [143] = {
    [sym_begin_group] = ACTIONS(408),
  },
  [144] = {
    [sym_begin_group] = ACTIONS(410),
  },
  [145] = {
    [sym_begin_group] = ACTIONS(412),
  },
  [146] = {
    [sym_text_group] = STATE(200),
    [sym_begin_group] = ACTIONS(135),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym_escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(414),
    [sym_end_group] = ACTIONS(414),
    [sym_math_shift] = ACTIONS(414),
    [sym_alignment_tab] = ACTIONS(414),
    [sym_parameter_char] = ACTIONS(414),
    [sym_superscript] = ACTIONS(414),
    [sym_subscript] = ACTIONS(414),
    [sym_active_char] = ACTIONS(414),
    [sym_comment_char] = ACTIONS(414),
    [sym_text] = ACTIONS(416),
  },
  [148] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(237),
    [sym_escape] = ACTIONS(240),
    [sym_begin_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(246),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(252),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_comment_char] = ACTIONS(255),
    [sym_text] = ACTIONS(258),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_escape] = ACTIONS(418),
    [sym_begin_group] = ACTIONS(418),
    [sym_end_group] = ACTIONS(418),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(418),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(418),
    [sym_subscript] = ACTIONS(418),
    [sym_active_char] = ACTIONS(418),
    [sym_comment_char] = ACTIONS(418),
    [sym_text] = ACTIONS(420),
  },
  [150] = {
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
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(30),
    [aux_sym_program_repeat1] = STATE(150),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_escape] = ACTIONS(240),
    [sym_begin_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(246),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(252),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_comment_char] = ACTIONS(255),
    [sym_text] = ACTIONS(258),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_LBRACK] = ACTIONS(422),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_escape] = ACTIONS(422),
    [sym_begin_group] = ACTIONS(422),
    [sym_end_group] = ACTIONS(422),
    [sym_math_shift] = ACTIONS(422),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(422),
    [sym_superscript] = ACTIONS(422),
    [sym_subscript] = ACTIONS(422),
    [sym_active_char] = ACTIONS(422),
    [sym_comment_char] = ACTIONS(422),
    [sym_text] = ACTIONS(424),
  },
  [152] = {
    [anon_sym_RBRACK] = ACTIONS(426),
    [anon_sym_begin] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_escape] = ACTIONS(428),
    [sym_begin_group] = ACTIONS(428),
    [sym_end_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(428),
    [sym_alignment_tab] = ACTIONS(428),
    [sym_parameter_char] = ACTIONS(428),
    [sym_superscript] = ACTIONS(428),
    [sym_subscript] = ACTIONS(428),
    [sym_active_char] = ACTIONS(428),
    [sym_comment_char] = ACTIONS(428),
    [sym_text] = ACTIONS(430),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_begin] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [155] = {
    [sym_end_group] = ACTIONS(434),
  },
  [156] = {
    [sym_end_group] = ACTIONS(436),
  },
  [157] = {
    [sym_end_group] = ACTIONS(438),
  },
  [158] = {
    [sym_end_group] = ACTIONS(440),
  },
  [159] = {
    [sym_end_group] = ACTIONS(442),
  },
  [160] = {
    [sym_end_group] = ACTIONS(444),
  },
  [161] = {
    [sym_end_group] = ACTIONS(446),
  },
  [162] = {
    [sym_end_group] = ACTIONS(448),
  },
  [163] = {
    [sym_end_group] = ACTIONS(450),
  },
  [164] = {
    [sym_end_group] = ACTIONS(452),
  },
  [165] = {
    [sym_end_group] = ACTIONS(454),
  },
  [166] = {
    [sym_end_group] = ACTIONS(456),
  },
  [167] = {
    [sym_end_group] = ACTIONS(458),
  },
  [168] = {
    [sym_end_group] = ACTIONS(460),
  },
  [169] = {
    [sym_end_group] = ACTIONS(462),
  },
  [170] = {
    [sym_end_group] = ACTIONS(464),
  },
  [171] = {
    [sym_end_group] = ACTIONS(466),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [sym_escape] = ACTIONS(468),
    [sym_begin_group] = ACTIONS(468),
    [sym_end_group] = ACTIONS(468),
    [sym_math_shift] = ACTIONS(468),
    [sym_alignment_tab] = ACTIONS(468),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(468),
    [sym_subscript] = ACTIONS(468),
    [sym_active_char] = ACTIONS(468),
    [sym_comment_char] = ACTIONS(468),
    [sym_text] = ACTIONS(470),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [sym_escape] = ACTIONS(472),
    [sym_begin_group] = ACTIONS(472),
    [sym_end_group] = ACTIONS(472),
    [sym_math_shift] = ACTIONS(472),
    [sym_alignment_tab] = ACTIONS(472),
    [sym_parameter_char] = ACTIONS(472),
    [sym_superscript] = ACTIONS(472),
    [sym_subscript] = ACTIONS(472),
    [sym_active_char] = ACTIONS(472),
    [sym_comment_char] = ACTIONS(472),
    [sym_text] = ACTIONS(474),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(476),
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
  [175] = {
    [anon_sym_EQ] = ACTIONS(480),
  },
  [176] = {
    [sym_number] = ACTIONS(482),
  },
  [177] = {
    [anon_sym_LBRACK] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [sym_escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(484),
    [sym_end_group] = ACTIONS(484),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(484),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(484),
    [sym_active_char] = ACTIONS(484),
    [sym_comment_char] = ACTIONS(484),
    [sym_text] = ACTIONS(486),
  },
  [178] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(178),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(364),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(364),
    [sym_subscript] = ACTIONS(364),
    [sym_active_char] = ACTIONS(364),
    [sym_comment_char] = ACTIONS(370),
    [sym_text] = ACTIONS(373),
  },
  [179] = {
    [sym_math_shift] = ACTIONS(488),
  },
  [180] = {
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [sym_escape] = ACTIONS(490),
    [sym_begin_group] = ACTIONS(490),
    [sym_end_group] = ACTIONS(490),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(490),
    [sym_subscript] = ACTIONS(490),
    [sym_active_char] = ACTIONS(490),
    [sym_comment_char] = ACTIONS(490),
    [sym_text] = ACTIONS(492),
  },
  [181] = {
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym_escape] = ACTIONS(494),
    [sym_begin_group] = ACTIONS(494),
    [sym_end_group] = ACTIONS(494),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(494),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_comment_char] = ACTIONS(494),
    [sym_text] = ACTIONS(496),
  },
  [182] = {
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(48),
    [sym_math_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
    [sym_begin] = STATE(50),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(48),
    [sym_opt_math_group] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(51),
    [aux_sym_math_environment_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(362),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(364),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(364),
    [sym_subscript] = ACTIONS(364),
    [sym_active_char] = ACTIONS(364),
    [sym_comment_char] = ACTIONS(370),
    [sym_text] = ACTIONS(373),
  },
  [183] = {
    [anon_sym_align] = ACTIONS(498),
  },
  [184] = {
    [anon_sym_align_STAR] = ACTIONS(500),
  },
  [185] = {
    [anon_sym_alignat] = ACTIONS(502),
  },
  [186] = {
    [anon_sym_alignat_STAR] = ACTIONS(504),
  },
  [187] = {
    [anon_sym_eqnarray] = ACTIONS(506),
  },
  [188] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(508),
  },
  [189] = {
    [anon_sym_equation] = ACTIONS(510),
  },
  [190] = {
    [anon_sym_equation_STAR] = ACTIONS(512),
  },
  [191] = {
    [anon_sym_flalign] = ACTIONS(514),
  },
  [192] = {
    [anon_sym_flalign_STAR] = ACTIONS(516),
  },
  [193] = {
    [anon_sym_gather] = ACTIONS(518),
  },
  [194] = {
    [anon_sym_gather_STAR] = ACTIONS(520),
  },
  [195] = {
    [anon_sym_multline] = ACTIONS(522),
  },
  [196] = {
    [anon_sym_multline_STAR] = ACTIONS(524),
  },
  [197] = {
    [anon_sym_split] = ACTIONS(526),
  },
  [198] = {
    [anon_sym_split_STAR] = ACTIONS(528),
  },
  [199] = {
    [anon_sym_math] = ACTIONS(530),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
    [sym_escape] = ACTIONS(532),
    [sym_begin_group] = ACTIONS(532),
    [sym_end_group] = ACTIONS(532),
    [sym_math_shift] = ACTIONS(532),
    [sym_alignment_tab] = ACTIONS(532),
    [sym_parameter_char] = ACTIONS(532),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(532),
    [sym_comment_char] = ACTIONS(532),
    [sym_text] = ACTIONS(534),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [sym_escape] = ACTIONS(536),
    [sym_begin_group] = ACTIONS(536),
    [sym_end_group] = ACTIONS(536),
    [sym_math_shift] = ACTIONS(536),
    [sym_alignment_tab] = ACTIONS(536),
    [sym_parameter_char] = ACTIONS(536),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(536),
    [sym_comment_char] = ACTIONS(536),
    [sym_text] = ACTIONS(538),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
    [sym_escape] = ACTIONS(540),
    [sym_begin_group] = ACTIONS(540),
    [sym_end_group] = ACTIONS(540),
    [sym_math_shift] = ACTIONS(540),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(540),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_comment_char] = ACTIONS(540),
    [sym_text] = ACTIONS(542),
  },
  [203] = {
    [anon_sym_LBRACK] = ACTIONS(544),
    [sym_escape] = ACTIONS(544),
    [sym_begin_group] = ACTIONS(544),
    [sym_alignment_tab] = ACTIONS(544),
    [sym_parameter_char] = ACTIONS(544),
    [sym_superscript] = ACTIONS(544),
    [sym_subscript] = ACTIONS(544),
    [sym_active_char] = ACTIONS(544),
    [sym_comment_char] = ACTIONS(544),
    [sym_text] = ACTIONS(546),
  },
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(548),
    [sym_escape] = ACTIONS(548),
    [sym_begin_group] = ACTIONS(548),
    [sym_alignment_tab] = ACTIONS(548),
    [sym_parameter_char] = ACTIONS(548),
    [sym_superscript] = ACTIONS(548),
    [sym_subscript] = ACTIONS(548),
    [sym_active_char] = ACTIONS(548),
    [sym_comment_char] = ACTIONS(548),
    [sym_text] = ACTIONS(550),
  },
  [205] = {
    [sym_text_group] = STATE(238),
    [sym_begin_group] = ACTIONS(135),
  },
  [206] = {
    [sym_text_group] = STATE(239),
    [sym_begin_group] = ACTIONS(135),
  },
  [207] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_comment_char] = ACTIONS(552),
    [sym_text] = ACTIONS(554),
  },
  [208] = {
    [anon_sym_LBRACK] = ACTIONS(556),
    [sym_escape] = ACTIONS(556),
    [sym_begin_group] = ACTIONS(556),
    [sym_alignment_tab] = ACTIONS(556),
    [sym_parameter_char] = ACTIONS(556),
    [sym_superscript] = ACTIONS(556),
    [sym_subscript] = ACTIONS(556),
    [sym_active_char] = ACTIONS(556),
    [sym_comment_char] = ACTIONS(556),
    [sym_text] = ACTIONS(558),
  },
  [209] = {
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_comment_char] = ACTIONS(560),
    [sym_text] = ACTIONS(562),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(564),
    [sym_escape] = ACTIONS(564),
    [sym_begin_group] = ACTIONS(564),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(564),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_comment_char] = ACTIONS(564),
    [sym_text] = ACTIONS(566),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(568),
    [sym_escape] = ACTIONS(568),
    [sym_begin_group] = ACTIONS(568),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(568),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_comment_char] = ACTIONS(568),
    [sym_text] = ACTIONS(570),
  },
  [212] = {
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_escape] = ACTIONS(572),
    [sym_begin_group] = ACTIONS(572),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(572),
    [sym_superscript] = ACTIONS(572),
    [sym_subscript] = ACTIONS(572),
    [sym_active_char] = ACTIONS(572),
    [sym_comment_char] = ACTIONS(572),
    [sym_text] = ACTIONS(574),
  },
  [213] = {
    [anon_sym_LBRACK] = ACTIONS(576),
    [sym_escape] = ACTIONS(576),
    [sym_begin_group] = ACTIONS(576),
    [sym_alignment_tab] = ACTIONS(576),
    [sym_parameter_char] = ACTIONS(576),
    [sym_superscript] = ACTIONS(576),
    [sym_subscript] = ACTIONS(576),
    [sym_active_char] = ACTIONS(576),
    [sym_comment_char] = ACTIONS(576),
    [sym_text] = ACTIONS(578),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(580),
    [sym_escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(580),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(580),
    [sym_superscript] = ACTIONS(580),
    [sym_subscript] = ACTIONS(580),
    [sym_active_char] = ACTIONS(580),
    [sym_comment_char] = ACTIONS(580),
    [sym_text] = ACTIONS(582),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(584),
    [sym_escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_comment_char] = ACTIONS(584),
    [sym_text] = ACTIONS(586),
  },
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(588),
    [sym_escape] = ACTIONS(588),
    [sym_begin_group] = ACTIONS(588),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(588),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_comment_char] = ACTIONS(588),
    [sym_text] = ACTIONS(590),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(592),
    [sym_escape] = ACTIONS(592),
    [sym_begin_group] = ACTIONS(592),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(592),
    [sym_superscript] = ACTIONS(592),
    [sym_subscript] = ACTIONS(592),
    [sym_active_char] = ACTIONS(592),
    [sym_comment_char] = ACTIONS(592),
    [sym_text] = ACTIONS(594),
  },
  [218] = {
    [anon_sym_LBRACK] = ACTIONS(596),
    [sym_escape] = ACTIONS(596),
    [sym_begin_group] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(596),
    [sym_parameter_char] = ACTIONS(596),
    [sym_superscript] = ACTIONS(596),
    [sym_subscript] = ACTIONS(596),
    [sym_active_char] = ACTIONS(596),
    [sym_comment_char] = ACTIONS(596),
    [sym_text] = ACTIONS(598),
  },
  [219] = {
    [anon_sym_LBRACK] = ACTIONS(600),
    [sym_escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_comment_char] = ACTIONS(600),
    [sym_text] = ACTIONS(602),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(604),
    [sym_escape] = ACTIONS(604),
    [sym_begin_group] = ACTIONS(604),
    [sym_end_group] = ACTIONS(604),
    [sym_math_shift] = ACTIONS(604),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(604),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [sym_comment_char] = ACTIONS(604),
    [sym_text] = ACTIONS(606),
  },
  [221] = {
    [sym_end_group] = ACTIONS(608),
  },
  [222] = {
    [sym_end_group] = ACTIONS(610),
  },
  [223] = {
    [sym_end_group] = ACTIONS(612),
  },
  [224] = {
    [sym_end_group] = ACTIONS(614),
  },
  [225] = {
    [sym_end_group] = ACTIONS(616),
  },
  [226] = {
    [sym_end_group] = ACTIONS(618),
  },
  [227] = {
    [sym_end_group] = ACTIONS(620),
  },
  [228] = {
    [sym_end_group] = ACTIONS(622),
  },
  [229] = {
    [sym_end_group] = ACTIONS(624),
  },
  [230] = {
    [sym_end_group] = ACTIONS(626),
  },
  [231] = {
    [sym_end_group] = ACTIONS(628),
  },
  [232] = {
    [sym_end_group] = ACTIONS(630),
  },
  [233] = {
    [sym_end_group] = ACTIONS(632),
  },
  [234] = {
    [sym_end_group] = ACTIONS(634),
  },
  [235] = {
    [sym_end_group] = ACTIONS(636),
  },
  [236] = {
    [sym_end_group] = ACTIONS(638),
  },
  [237] = {
    [sym_end_group] = ACTIONS(640),
  },
  [238] = {
    [anon_sym_LBRACK] = ACTIONS(642),
    [sym_escape] = ACTIONS(642),
    [sym_begin_group] = ACTIONS(642),
    [sym_alignment_tab] = ACTIONS(642),
    [sym_parameter_char] = ACTIONS(642),
    [sym_superscript] = ACTIONS(642),
    [sym_subscript] = ACTIONS(642),
    [sym_active_char] = ACTIONS(642),
    [sym_comment_char] = ACTIONS(642),
    [sym_text] = ACTIONS(644),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(646),
    [sym_escape] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_active_char] = ACTIONS(646),
    [sym_comment_char] = ACTIONS(646),
    [sym_text] = ACTIONS(648),
  },
  [240] = {
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
  [241] = {
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
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_RBRACK] = ACTIONS(658),
    [sym_escape] = ACTIONS(658),
    [sym_begin_group] = ACTIONS(658),
    [sym_end_group] = ACTIONS(658),
    [sym_math_shift] = ACTIONS(658),
    [sym_alignment_tab] = ACTIONS(658),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(658),
    [sym_subscript] = ACTIONS(658),
    [sym_active_char] = ACTIONS(658),
    [sym_comment_char] = ACTIONS(658),
    [sym_text] = ACTIONS(660),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [sym_escape] = ACTIONS(662),
    [sym_begin_group] = ACTIONS(662),
    [sym_end_group] = ACTIONS(662),
    [sym_math_shift] = ACTIONS(662),
    [sym_alignment_tab] = ACTIONS(662),
    [sym_parameter_char] = ACTIONS(662),
    [sym_superscript] = ACTIONS(662),
    [sym_subscript] = ACTIONS(662),
    [sym_active_char] = ACTIONS(662),
    [sym_comment_char] = ACTIONS(662),
    [sym_text] = ACTIONS(664),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(666),
    [anon_sym_LBRACK] = ACTIONS(666),
    [anon_sym_RBRACK] = ACTIONS(666),
    [sym_escape] = ACTIONS(666),
    [sym_begin_group] = ACTIONS(666),
    [sym_end_group] = ACTIONS(666),
    [sym_math_shift] = ACTIONS(666),
    [sym_alignment_tab] = ACTIONS(666),
    [sym_parameter_char] = ACTIONS(666),
    [sym_superscript] = ACTIONS(666),
    [sym_subscript] = ACTIONS(666),
    [sym_active_char] = ACTIONS(666),
    [sym_comment_char] = ACTIONS(666),
    [sym_text] = ACTIONS(668),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_RBRACK] = ACTIONS(670),
    [sym_escape] = ACTIONS(670),
    [sym_begin_group] = ACTIONS(670),
    [sym_end_group] = ACTIONS(670),
    [sym_math_shift] = ACTIONS(670),
    [sym_alignment_tab] = ACTIONS(670),
    [sym_parameter_char] = ACTIONS(670),
    [sym_superscript] = ACTIONS(670),
    [sym_subscript] = ACTIONS(670),
    [sym_active_char] = ACTIONS(670),
    [sym_comment_char] = ACTIONS(670),
    [sym_text] = ACTIONS(672),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_escape] = ACTIONS(674),
    [sym_begin_group] = ACTIONS(674),
    [sym_end_group] = ACTIONS(674),
    [sym_math_shift] = ACTIONS(674),
    [sym_alignment_tab] = ACTIONS(674),
    [sym_parameter_char] = ACTIONS(674),
    [sym_superscript] = ACTIONS(674),
    [sym_subscript] = ACTIONS(674),
    [sym_active_char] = ACTIONS(674),
    [sym_comment_char] = ACTIONS(674),
    [sym_text] = ACTIONS(676),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [sym_escape] = ACTIONS(678),
    [sym_begin_group] = ACTIONS(678),
    [sym_end_group] = ACTIONS(678),
    [sym_math_shift] = ACTIONS(678),
    [sym_alignment_tab] = ACTIONS(678),
    [sym_parameter_char] = ACTIONS(678),
    [sym_superscript] = ACTIONS(678),
    [sym_subscript] = ACTIONS(678),
    [sym_active_char] = ACTIONS(678),
    [sym_comment_char] = ACTIONS(678),
    [sym_text] = ACTIONS(680),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(682),
    [sym_escape] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(682),
    [sym_end_group] = ACTIONS(682),
    [sym_math_shift] = ACTIONS(682),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(682),
    [sym_superscript] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_active_char] = ACTIONS(682),
    [sym_comment_char] = ACTIONS(682),
    [sym_text] = ACTIONS(684),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_escape] = ACTIONS(686),
    [sym_begin_group] = ACTIONS(686),
    [sym_end_group] = ACTIONS(686),
    [sym_math_shift] = ACTIONS(686),
    [sym_alignment_tab] = ACTIONS(686),
    [sym_parameter_char] = ACTIONS(686),
    [sym_superscript] = ACTIONS(686),
    [sym_subscript] = ACTIONS(686),
    [sym_active_char] = ACTIONS(686),
    [sym_comment_char] = ACTIONS(686),
    [sym_text] = ACTIONS(688),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_RBRACK] = ACTIONS(690),
    [sym_escape] = ACTIONS(690),
    [sym_begin_group] = ACTIONS(690),
    [sym_end_group] = ACTIONS(690),
    [sym_math_shift] = ACTIONS(690),
    [sym_alignment_tab] = ACTIONS(690),
    [sym_parameter_char] = ACTIONS(690),
    [sym_superscript] = ACTIONS(690),
    [sym_subscript] = ACTIONS(690),
    [sym_active_char] = ACTIONS(690),
    [sym_comment_char] = ACTIONS(690),
    [sym_text] = ACTIONS(692),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(694),
    [anon_sym_LBRACK] = ACTIONS(694),
    [anon_sym_RBRACK] = ACTIONS(694),
    [sym_escape] = ACTIONS(694),
    [sym_begin_group] = ACTIONS(694),
    [sym_end_group] = ACTIONS(694),
    [sym_math_shift] = ACTIONS(694),
    [sym_alignment_tab] = ACTIONS(694),
    [sym_parameter_char] = ACTIONS(694),
    [sym_superscript] = ACTIONS(694),
    [sym_subscript] = ACTIONS(694),
    [sym_active_char] = ACTIONS(694),
    [sym_comment_char] = ACTIONS(694),
    [sym_text] = ACTIONS(696),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(698),
    [anon_sym_RBRACK] = ACTIONS(698),
    [sym_escape] = ACTIONS(698),
    [sym_begin_group] = ACTIONS(698),
    [sym_end_group] = ACTIONS(698),
    [sym_math_shift] = ACTIONS(698),
    [sym_alignment_tab] = ACTIONS(698),
    [sym_parameter_char] = ACTIONS(698),
    [sym_superscript] = ACTIONS(698),
    [sym_subscript] = ACTIONS(698),
    [sym_active_char] = ACTIONS(698),
    [sym_comment_char] = ACTIONS(698),
    [sym_text] = ACTIONS(700),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [sym_escape] = ACTIONS(702),
    [sym_begin_group] = ACTIONS(702),
    [sym_end_group] = ACTIONS(702),
    [sym_math_shift] = ACTIONS(702),
    [sym_alignment_tab] = ACTIONS(702),
    [sym_parameter_char] = ACTIONS(702),
    [sym_superscript] = ACTIONS(702),
    [sym_subscript] = ACTIONS(702),
    [sym_active_char] = ACTIONS(702),
    [sym_comment_char] = ACTIONS(702),
    [sym_text] = ACTIONS(704),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(706),
    [anon_sym_RBRACK] = ACTIONS(706),
    [sym_escape] = ACTIONS(706),
    [sym_begin_group] = ACTIONS(706),
    [sym_end_group] = ACTIONS(706),
    [sym_math_shift] = ACTIONS(706),
    [sym_alignment_tab] = ACTIONS(706),
    [sym_parameter_char] = ACTIONS(706),
    [sym_superscript] = ACTIONS(706),
    [sym_subscript] = ACTIONS(706),
    [sym_active_char] = ACTIONS(706),
    [sym_comment_char] = ACTIONS(706),
    [sym_text] = ACTIONS(708),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [anon_sym_RBRACK] = ACTIONS(710),
    [sym_escape] = ACTIONS(710),
    [sym_begin_group] = ACTIONS(710),
    [sym_end_group] = ACTIONS(710),
    [sym_math_shift] = ACTIONS(710),
    [sym_alignment_tab] = ACTIONS(710),
    [sym_parameter_char] = ACTIONS(710),
    [sym_superscript] = ACTIONS(710),
    [sym_subscript] = ACTIONS(710),
    [sym_active_char] = ACTIONS(710),
    [sym_comment_char] = ACTIONS(710),
    [sym_text] = ACTIONS(712),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(714),
    [anon_sym_LBRACK] = ACTIONS(714),
    [anon_sym_RBRACK] = ACTIONS(714),
    [sym_escape] = ACTIONS(714),
    [sym_begin_group] = ACTIONS(714),
    [sym_end_group] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(714),
    [sym_alignment_tab] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(714),
    [sym_superscript] = ACTIONS(714),
    [sym_subscript] = ACTIONS(714),
    [sym_active_char] = ACTIONS(714),
    [sym_comment_char] = ACTIONS(714),
    [sym_text] = ACTIONS(716),
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
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 1),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage, 2),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 2),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 2),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [237] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [240] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [243] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [246] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [249] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [252] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [255] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [258] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 3),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 3),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 3),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 3),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 2),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 2),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [353] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [356] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(45),
  [359] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(46),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [364] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(48),
  [367] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [370] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(48),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 3),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 3),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 4),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 4),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 4),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 4),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 4),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 4),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 3),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 3),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 3),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [544] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 5),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 5),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 5),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 5),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 5),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 5),
  [556] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 5),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 5),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 5),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 5),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 5),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 5),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 5),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 5),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 5),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 5),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 5),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 5),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 5),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 5),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 5),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 5),
  [588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 5),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 5),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 5),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 5),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 5),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 5),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 5),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 5),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 5),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 5),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 6),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 6),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 6),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 6),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 5),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 5),
  [654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 5),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 5),
  [658] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 5),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 5),
  [662] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 5),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 5),
  [666] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 5),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 5),
  [670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 5),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 5),
  [674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 5),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 5),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 5),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 5),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 5),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 5),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 5),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 5),
  [690] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 5),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 5),
  [694] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 5),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 5),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 5),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 5),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 5),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 5),
  [706] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 5),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 5),
  [710] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 5),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 5),
  [714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 5),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 5),
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
