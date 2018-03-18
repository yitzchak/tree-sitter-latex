#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 258
#define SYMBOL_COUNT 109
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
  sym_section_token = 97,
  sym_storage = 98,
  sym_catcode = 99,
  sym_text_group = 100,
  sym_opt_text_group = 101,
  sym_math_group = 102,
  sym_opt_math_group = 103,
  sym_comment = 104,
  sym_begin_opt = 105,
  sym_end_opt = 106,
  aux_sym_program_repeat1 = 107,
  aux_sym_math_environment_repeat1 = 108,
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
  [sym_section_token] = "section_token",
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
  [sym_section_token] = {
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
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 119},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 146},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 146},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 146},
  [62] = {.lex_state = 106},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 146},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 146},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 146},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 146},
  [72] = {.lex_state = 106},
  [73] = {.lex_state = 146},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 146},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 146},
  [78] = {.lex_state = 106},
  [79] = {.lex_state = 146},
  [80] = {.lex_state = 106},
  [81] = {.lex_state = 146},
  [82] = {.lex_state = 106},
  [83] = {.lex_state = 146},
  [84] = {.lex_state = 106},
  [85] = {.lex_state = 146},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 146},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 146},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 146},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 106},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 106},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 119},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 119},
  [104] = {.lex_state = 106},
  [105] = {.lex_state = 148},
  [106] = {.lex_state = 106},
  [107] = {.lex_state = 106},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 106},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 208},
  [113] = {.lex_state = 209},
  [114] = {.lex_state = 106},
  [115] = {.lex_state = 106},
  [116] = {.lex_state = 106},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 106},
  [120] = {.lex_state = 106},
  [121] = {.lex_state = 146},
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
  [152] = {.lex_state = 106},
  [153] = {.lex_state = 106},
  [154] = {.lex_state = 119},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 119},
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
  [176] = {.lex_state = 209},
  [177] = {.lex_state = 133},
  [178] = {.lex_state = 106},
  [179] = {.lex_state = 106},
  [180] = {.lex_state = 106},
  [181] = {.lex_state = 106},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 106},
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
  [200] = {.lex_state = 209},
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
  [257] = {.lex_state = 106},
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(32),
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(45),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(53),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_align] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(58),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_align_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(60),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_alignat] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(62),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_alignat_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(64),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_eqnarray] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(66),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_eqnarray_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(68),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_equation] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(70),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_equation_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(72),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_flalign] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(74),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_flalign_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(76),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_gather] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(78),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_gather_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(80),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_multline] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(82),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_multline_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(84),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_split] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(86),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_split_star] = STATE(57),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(88),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_math] = STATE(90),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(91),
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
    [sym_end] = STATE(93),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(94),
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
    [sym_text_group] = STATE(95),
    [sym_opt_text_group] = STATE(96),
    [sym_begin_opt] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(121),
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(98),
    [aux_sym_program_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(123),
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(125),
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
  [33] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(127),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [35] = {
    [sym_text_group] = STATE(106),
    [sym_begin_group] = ACTIONS(131),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_comment_char] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
  },
  [37] = {
    [sym_text_group] = STATE(107),
    [sym_opt_text_group] = STATE(108),
    [sym_begin_opt] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(121),
  },
  [38] = {
    [sym_text_group] = STATE(109),
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(121),
  },
  [39] = {
    [sym_text_group] = STATE(111),
    [sym_begin_group] = ACTIONS(121),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [sym_escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_end_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(139),
    [sym_text] = ACTIONS(141),
  },
  [42] = {
    [sym_escaped] = STATE(113),
    [sym_escape] = ACTIONS(143),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(145),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_comment_char] = ACTIONS(149),
    [sym_text] = ACTIONS(151),
  },
  [45] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(15),
    [sym_alignment_tab] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(17),
    [sym_subscript] = ACTIONS(17),
    [sym_active_char] = ACTIONS(17),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [46] = {
    [anon_sym_begin] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [47] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [48] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [49] = {
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
  [50] = {
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_end_group] = ACTIONS(165),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(165),
    [sym_text] = ACTIONS(167),
  },
  [51] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_end] = STATE(122),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(169),
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
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [sym_end_opt] = STATE(124),
    [aux_sym_math_environment_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(123),
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
  [53] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(171),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [sym_escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(173),
    [sym_math_shift] = ACTIONS(173),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_comment_char] = ACTIONS(173),
    [sym_text] = ACTIONS(175),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [sym_escape] = ACTIONS(177),
    [sym_begin_group] = ACTIONS(177),
    [sym_end_group] = ACTIONS(177),
    [sym_math_shift] = ACTIONS(177),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(177),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_comment_char] = ACTIONS(177),
    [sym_text] = ACTIONS(179),
  },
  [56] = {
    [anon_sym_begin] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_escape] = ACTIONS(183),
    [sym_begin_group] = ACTIONS(183),
    [sym_end_group] = ACTIONS(183),
    [sym_math_shift] = ACTIONS(183),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(183),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(183),
    [sym_text] = ACTIONS(185),
  },
  [58] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_align] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
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
  [59] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [60] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_align_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [61] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [62] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_alignat] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [63] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [64] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_alignat_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [65] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [66] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_eqnarray] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [67] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [68] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_eqnarray_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [69] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [70] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_equation] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [71] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [72] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_equation_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [73] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [74] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_flalign] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [75] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [76] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_flalign_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [77] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [78] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_gather] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [79] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [80] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_gather_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [81] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [82] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_multline] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [83] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [84] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_multline_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [85] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [86] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_split] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [87] = {
    [anon_sym_begin] = ACTIONS(155),
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
  [88] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_split_star] = STATE(129),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [89] = {
    [anon_sym_begin] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_end_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_comment_char] = ACTIONS(219),
    [sym_text] = ACTIONS(221),
  },
  [91] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_end_math] = STATE(126),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
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
  [92] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(223),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_comment_char] = ACTIONS(225),
    [sym_text] = ACTIONS(227),
  },
  [94] = {
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
    [sym_end] = STATE(148),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(149),
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
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(229),
    [sym_end_group] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_comment_char] = ACTIONS(229),
    [sym_text] = ACTIONS(231),
  },
  [96] = {
    [sym_text_group] = STATE(150),
    [sym_begin_group] = ACTIONS(121),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym_escape] = ACTIONS(233),
    [sym_begin_group] = ACTIONS(233),
    [sym_end_group] = ACTIONS(233),
    [sym_math_shift] = ACTIONS(233),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_comment_char] = ACTIONS(233),
    [sym_text] = ACTIONS(235),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_end_group] = ACTIONS(237),
    [sym_math_shift] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(239),
  },
  [99] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(151),
    [aux_sym_program_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(123),
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
  [100] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_escape] = ACTIONS(246),
    [sym_begin_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(252),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(258),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(261),
    [sym_text] = ACTIONS(264),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_begin] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [102] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_begin] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [104] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [105] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(275),
    [anon_sym_align_STAR] = ACTIONS(277),
    [anon_sym_alignat] = ACTIONS(279),
    [anon_sym_alignat_STAR] = ACTIONS(281),
    [anon_sym_eqnarray] = ACTIONS(283),
    [anon_sym_eqnarray_STAR] = ACTIONS(285),
    [anon_sym_equation] = ACTIONS(287),
    [anon_sym_equation_STAR] = ACTIONS(289),
    [anon_sym_flalign] = ACTIONS(291),
    [anon_sym_flalign_STAR] = ACTIONS(293),
    [anon_sym_gather] = ACTIONS(295),
    [anon_sym_gather_STAR] = ACTIONS(297),
    [anon_sym_multline] = ACTIONS(299),
    [anon_sym_multline_STAR] = ACTIONS(301),
    [anon_sym_split] = ACTIONS(303),
    [anon_sym_split_STAR] = ACTIONS(305),
    [anon_sym_math] = ACTIONS(307),
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
  [106] = {
    [anon_sym_LBRACK] = ACTIONS(309),
    [sym_escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_comment_char] = ACTIONS(309),
    [sym_text] = ACTIONS(311),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_end_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_comment_char] = ACTIONS(313),
    [sym_text] = ACTIONS(315),
  },
  [108] = {
    [sym_text_group] = STATE(174),
    [sym_begin_group] = ACTIONS(121),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(317),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(317),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(317),
    [sym_active_char] = ACTIONS(317),
    [sym_comment_char] = ACTIONS(317),
    [sym_text] = ACTIONS(319),
  },
  [110] = {
    [sym_text_group] = STATE(175),
    [sym_begin_group] = ACTIONS(121),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(321),
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
  [112] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(325),
  },
  [113] = {
    [anon_sym_EQ] = ACTIONS(327),
  },
  [114] = {
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
  [115] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_escape] = ACTIONS(246),
    [sym_begin_group] = ACTIONS(249),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(252),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(258),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(261),
    [sym_text] = ACTIONS(264),
  },
  [116] = {
    [sym_text_group] = STATE(106),
    [sym_begin_group] = ACTIONS(121),
  },
  [117] = {
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(333),
    [sym_end_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(333),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(333),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_comment_char] = ACTIONS(333),
    [sym_text] = ACTIONS(335),
  },
  [118] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(337),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [119] = {
    [sym_math_shift] = ACTIONS(339),
  },
  [120] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(341),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [121] = {
    [anon_sym_begin] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(223),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [122] = {
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym_escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_comment_char] = ACTIONS(343),
    [sym_text] = ACTIONS(345),
  },
  [123] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_end] = STATE(181),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [124] = {
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym_escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_end_group] = ACTIONS(347),
    [sym_math_shift] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_comment_char] = ACTIONS(347),
    [sym_text] = ACTIONS(349),
  },
  [125] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [sym_end_opt] = STATE(182),
    [aux_sym_math_environment_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(123),
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
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_end_group] = ACTIONS(351),
    [sym_math_shift] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_comment_char] = ACTIONS(351),
    [sym_text] = ACTIONS(353),
  },
  [127] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(366),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(366),
    [sym_subscript] = ACTIONS(366),
    [sym_active_char] = ACTIONS(366),
    [sym_comment_char] = ACTIONS(372),
    [sym_text] = ACTIONS(375),
  },
  [128] = {
    [sym_begin_group] = ACTIONS(378),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym_escape] = ACTIONS(380),
    [sym_begin_group] = ACTIONS(380),
    [sym_end_group] = ACTIONS(380),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(380),
    [sym_parameter_char] = ACTIONS(380),
    [sym_superscript] = ACTIONS(380),
    [sym_subscript] = ACTIONS(380),
    [sym_active_char] = ACTIONS(380),
    [sym_comment_char] = ACTIONS(380),
    [sym_text] = ACTIONS(382),
  },
  [130] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(366),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(366),
    [sym_subscript] = ACTIONS(366),
    [sym_active_char] = ACTIONS(366),
    [sym_comment_char] = ACTIONS(372),
    [sym_text] = ACTIONS(375),
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
    [sym_begin_group] = ACTIONS(414),
  },
  [147] = {
    [sym_text_group] = STATE(201),
    [sym_begin_group] = ACTIONS(121),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym_escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(416),
    [sym_end_group] = ACTIONS(416),
    [sym_math_shift] = ACTIONS(416),
    [sym_alignment_tab] = ACTIONS(416),
    [sym_parameter_char] = ACTIONS(416),
    [sym_superscript] = ACTIONS(416),
    [sym_subscript] = ACTIONS(416),
    [sym_active_char] = ACTIONS(416),
    [sym_comment_char] = ACTIONS(416),
    [sym_text] = ACTIONS(418),
  },
  [149] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_escape] = ACTIONS(246),
    [sym_begin_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(252),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(258),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(261),
    [sym_text] = ACTIONS(264),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [sym_escape] = ACTIONS(420),
    [sym_begin_group] = ACTIONS(420),
    [sym_end_group] = ACTIONS(420),
    [sym_math_shift] = ACTIONS(420),
    [sym_alignment_tab] = ACTIONS(420),
    [sym_parameter_char] = ACTIONS(420),
    [sym_superscript] = ACTIONS(420),
    [sym_subscript] = ACTIONS(420),
    [sym_active_char] = ACTIONS(420),
    [sym_comment_char] = ACTIONS(420),
    [sym_text] = ACTIONS(422),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [sym_escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(424),
    [sym_end_group] = ACTIONS(424),
    [sym_math_shift] = ACTIONS(424),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(424),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_comment_char] = ACTIONS(424),
    [sym_text] = ACTIONS(426),
  },
  [152] = {
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
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(31),
    [aux_sym_program_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_escape] = ACTIONS(246),
    [sym_begin_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(252),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(258),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(261),
    [sym_text] = ACTIONS(264),
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
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_begin] = ACTIONS(155),
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
    [ts_builtin_sym_end] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_escape] = ACTIONS(434),
    [sym_begin_group] = ACTIONS(434),
    [sym_end_group] = ACTIONS(434),
    [sym_math_shift] = ACTIONS(434),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_comment_char] = ACTIONS(434),
    [sym_text] = ACTIONS(436),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_begin] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
  },
  [157] = {
    [sym_end_group] = ACTIONS(440),
  },
  [158] = {
    [sym_end_group] = ACTIONS(442),
  },
  [159] = {
    [sym_end_group] = ACTIONS(444),
  },
  [160] = {
    [sym_end_group] = ACTIONS(446),
  },
  [161] = {
    [sym_end_group] = ACTIONS(448),
  },
  [162] = {
    [sym_end_group] = ACTIONS(450),
  },
  [163] = {
    [sym_end_group] = ACTIONS(452),
  },
  [164] = {
    [sym_end_group] = ACTIONS(454),
  },
  [165] = {
    [sym_end_group] = ACTIONS(456),
  },
  [166] = {
    [sym_end_group] = ACTIONS(458),
  },
  [167] = {
    [sym_end_group] = ACTIONS(460),
  },
  [168] = {
    [sym_end_group] = ACTIONS(462),
  },
  [169] = {
    [sym_end_group] = ACTIONS(464),
  },
  [170] = {
    [sym_end_group] = ACTIONS(466),
  },
  [171] = {
    [sym_end_group] = ACTIONS(468),
  },
  [172] = {
    [sym_end_group] = ACTIONS(470),
  },
  [173] = {
    [sym_end_group] = ACTIONS(472),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym_escape] = ACTIONS(474),
    [sym_begin_group] = ACTIONS(474),
    [sym_end_group] = ACTIONS(474),
    [sym_math_shift] = ACTIONS(474),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(474),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(476),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [sym_escape] = ACTIONS(478),
    [sym_begin_group] = ACTIONS(478),
    [sym_end_group] = ACTIONS(478),
    [sym_math_shift] = ACTIONS(478),
    [sym_alignment_tab] = ACTIONS(478),
    [sym_parameter_char] = ACTIONS(478),
    [sym_superscript] = ACTIONS(478),
    [sym_subscript] = ACTIONS(478),
    [sym_active_char] = ACTIONS(478),
    [sym_comment_char] = ACTIONS(478),
    [sym_text] = ACTIONS(480),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(482),
  },
  [177] = {
    [sym_number] = ACTIONS(484),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [sym_escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(486),
    [sym_end_group] = ACTIONS(486),
    [sym_math_shift] = ACTIONS(486),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(486),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(486),
    [sym_active_char] = ACTIONS(486),
    [sym_comment_char] = ACTIONS(486),
    [sym_text] = ACTIONS(488),
  },
  [179] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(179),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_end_group] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(366),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(366),
    [sym_subscript] = ACTIONS(366),
    [sym_active_char] = ACTIONS(366),
    [sym_comment_char] = ACTIONS(372),
    [sym_text] = ACTIONS(375),
  },
  [180] = {
    [sym_math_shift] = ACTIONS(490),
  },
  [181] = {
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [sym_escape] = ACTIONS(492),
    [sym_begin_group] = ACTIONS(492),
    [sym_end_group] = ACTIONS(492),
    [sym_math_shift] = ACTIONS(492),
    [sym_alignment_tab] = ACTIONS(492),
    [sym_parameter_char] = ACTIONS(492),
    [sym_superscript] = ACTIONS(492),
    [sym_subscript] = ACTIONS(492),
    [sym_active_char] = ACTIONS(492),
    [sym_comment_char] = ACTIONS(492),
    [sym_text] = ACTIONS(494),
  },
  [182] = {
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_RBRACK] = ACTIONS(496),
    [sym_escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(496),
    [sym_end_group] = ACTIONS(496),
    [sym_math_shift] = ACTIONS(496),
    [sym_alignment_tab] = ACTIONS(496),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(496),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(496),
    [sym_comment_char] = ACTIONS(496),
    [sym_text] = ACTIONS(498),
  },
  [183] = {
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(49),
    [sym_math_environment] = STATE(49),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(51),
    [sym_documentclass] = STATE(29),
    [sym_usepackage] = STATE(29),
    [sym_include] = STATE(29),
    [sym_section] = STATE(29),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(29),
    [sym_catcode] = STATE(29),
    [sym_math_group] = STATE(49),
    [sym_opt_math_group] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_environment_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(366),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(366),
    [sym_subscript] = ACTIONS(366),
    [sym_active_char] = ACTIONS(366),
    [sym_comment_char] = ACTIONS(372),
    [sym_text] = ACTIONS(375),
  },
  [184] = {
    [anon_sym_align] = ACTIONS(500),
  },
  [185] = {
    [anon_sym_align_STAR] = ACTIONS(502),
  },
  [186] = {
    [anon_sym_alignat] = ACTIONS(504),
  },
  [187] = {
    [anon_sym_alignat_STAR] = ACTIONS(506),
  },
  [188] = {
    [anon_sym_eqnarray] = ACTIONS(508),
  },
  [189] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(510),
  },
  [190] = {
    [anon_sym_equation] = ACTIONS(512),
  },
  [191] = {
    [anon_sym_equation_STAR] = ACTIONS(514),
  },
  [192] = {
    [anon_sym_flalign] = ACTIONS(516),
  },
  [193] = {
    [anon_sym_flalign_STAR] = ACTIONS(518),
  },
  [194] = {
    [anon_sym_gather] = ACTIONS(520),
  },
  [195] = {
    [anon_sym_gather_STAR] = ACTIONS(522),
  },
  [196] = {
    [anon_sym_multline] = ACTIONS(524),
  },
  [197] = {
    [anon_sym_multline_STAR] = ACTIONS(526),
  },
  [198] = {
    [anon_sym_split] = ACTIONS(528),
  },
  [199] = {
    [anon_sym_split_STAR] = ACTIONS(530),
  },
  [200] = {
    [anon_sym_math] = ACTIONS(532),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_escape] = ACTIONS(534),
    [sym_begin_group] = ACTIONS(534),
    [sym_end_group] = ACTIONS(534),
    [sym_math_shift] = ACTIONS(534),
    [sym_alignment_tab] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(534),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_comment_char] = ACTIONS(534),
    [sym_text] = ACTIONS(536),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym_escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_end_group] = ACTIONS(538),
    [sym_math_shift] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_comment_char] = ACTIONS(538),
    [sym_text] = ACTIONS(540),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(542),
    [sym_escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(542),
    [sym_end_group] = ACTIONS(542),
    [sym_math_shift] = ACTIONS(542),
    [sym_alignment_tab] = ACTIONS(542),
    [sym_parameter_char] = ACTIONS(542),
    [sym_superscript] = ACTIONS(542),
    [sym_subscript] = ACTIONS(542),
    [sym_active_char] = ACTIONS(542),
    [sym_comment_char] = ACTIONS(542),
    [sym_text] = ACTIONS(544),
  },
  [204] = {
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
  [205] = {
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
  [206] = {
    [sym_text_group] = STATE(239),
    [sym_begin_group] = ACTIONS(121),
  },
  [207] = {
    [sym_text_group] = STATE(240),
    [sym_begin_group] = ACTIONS(121),
  },
  [208] = {
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
  [209] = {
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
  [210] = {
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
  [211] = {
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
  [212] = {
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
  [213] = {
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
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(578),
    [sym_escape] = ACTIONS(578),
    [sym_begin_group] = ACTIONS(578),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(578),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_comment_char] = ACTIONS(578),
    [sym_text] = ACTIONS(580),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(582),
    [sym_escape] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_active_char] = ACTIONS(582),
    [sym_comment_char] = ACTIONS(582),
    [sym_text] = ACTIONS(584),
  },
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym_escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_comment_char] = ACTIONS(586),
    [sym_text] = ACTIONS(588),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(590),
    [sym_alignment_tab] = ACTIONS(590),
    [sym_parameter_char] = ACTIONS(590),
    [sym_superscript] = ACTIONS(590),
    [sym_subscript] = ACTIONS(590),
    [sym_active_char] = ACTIONS(590),
    [sym_comment_char] = ACTIONS(590),
    [sym_text] = ACTIONS(592),
  },
  [218] = {
    [anon_sym_LBRACK] = ACTIONS(594),
    [sym_escape] = ACTIONS(594),
    [sym_begin_group] = ACTIONS(594),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(594),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_comment_char] = ACTIONS(594),
    [sym_text] = ACTIONS(596),
  },
  [219] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [sym_escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_comment_char] = ACTIONS(598),
    [sym_text] = ACTIONS(600),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_escape] = ACTIONS(602),
    [sym_begin_group] = ACTIONS(602),
    [sym_alignment_tab] = ACTIONS(602),
    [sym_parameter_char] = ACTIONS(602),
    [sym_superscript] = ACTIONS(602),
    [sym_subscript] = ACTIONS(602),
    [sym_active_char] = ACTIONS(602),
    [sym_comment_char] = ACTIONS(602),
    [sym_text] = ACTIONS(604),
  },
  [221] = {
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
    [sym_end_group] = ACTIONS(642),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(644),
    [sym_escape] = ACTIONS(644),
    [sym_begin_group] = ACTIONS(644),
    [sym_alignment_tab] = ACTIONS(644),
    [sym_parameter_char] = ACTIONS(644),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(644),
    [sym_comment_char] = ACTIONS(644),
    [sym_text] = ACTIONS(646),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(648),
    [sym_escape] = ACTIONS(648),
    [sym_begin_group] = ACTIONS(648),
    [sym_alignment_tab] = ACTIONS(648),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(648),
    [sym_subscript] = ACTIONS(648),
    [sym_active_char] = ACTIONS(648),
    [sym_comment_char] = ACTIONS(648),
    [sym_text] = ACTIONS(650),
  },
  [241] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym_escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_end_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_comment_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_end_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_comment_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_RBRACK] = ACTIONS(660),
    [sym_escape] = ACTIONS(660),
    [sym_begin_group] = ACTIONS(660),
    [sym_end_group] = ACTIONS(660),
    [sym_math_shift] = ACTIONS(660),
    [sym_alignment_tab] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(660),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_comment_char] = ACTIONS(660),
    [sym_text] = ACTIONS(662),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_RBRACK] = ACTIONS(664),
    [sym_escape] = ACTIONS(664),
    [sym_begin_group] = ACTIONS(664),
    [sym_end_group] = ACTIONS(664),
    [sym_math_shift] = ACTIONS(664),
    [sym_alignment_tab] = ACTIONS(664),
    [sym_parameter_char] = ACTIONS(664),
    [sym_superscript] = ACTIONS(664),
    [sym_subscript] = ACTIONS(664),
    [sym_active_char] = ACTIONS(664),
    [sym_comment_char] = ACTIONS(664),
    [sym_text] = ACTIONS(666),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_end_group] = ACTIONS(668),
    [sym_math_shift] = ACTIONS(668),
    [sym_alignment_tab] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_comment_char] = ACTIONS(668),
    [sym_text] = ACTIONS(670),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_end_group] = ACTIONS(672),
    [sym_math_shift] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_comment_char] = ACTIONS(672),
    [sym_text] = ACTIONS(674),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_escape] = ACTIONS(676),
    [sym_begin_group] = ACTIONS(676),
    [sym_end_group] = ACTIONS(676),
    [sym_math_shift] = ACTIONS(676),
    [sym_alignment_tab] = ACTIONS(676),
    [sym_parameter_char] = ACTIONS(676),
    [sym_superscript] = ACTIONS(676),
    [sym_subscript] = ACTIONS(676),
    [sym_active_char] = ACTIONS(676),
    [sym_comment_char] = ACTIONS(676),
    [sym_text] = ACTIONS(678),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [sym_comment_char] = ACTIONS(680),
    [sym_text] = ACTIONS(682),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym_escape] = ACTIONS(684),
    [sym_begin_group] = ACTIONS(684),
    [sym_end_group] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(684),
    [sym_alignment_tab] = ACTIONS(684),
    [sym_parameter_char] = ACTIONS(684),
    [sym_superscript] = ACTIONS(684),
    [sym_subscript] = ACTIONS(684),
    [sym_active_char] = ACTIONS(684),
    [sym_comment_char] = ACTIONS(684),
    [sym_text] = ACTIONS(686),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_RBRACK] = ACTIONS(688),
    [sym_escape] = ACTIONS(688),
    [sym_begin_group] = ACTIONS(688),
    [sym_end_group] = ACTIONS(688),
    [sym_math_shift] = ACTIONS(688),
    [sym_alignment_tab] = ACTIONS(688),
    [sym_parameter_char] = ACTIONS(688),
    [sym_superscript] = ACTIONS(688),
    [sym_subscript] = ACTIONS(688),
    [sym_active_char] = ACTIONS(688),
    [sym_comment_char] = ACTIONS(688),
    [sym_text] = ACTIONS(690),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(692),
    [sym_escape] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_end_group] = ACTIONS(692),
    [sym_math_shift] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_active_char] = ACTIONS(692),
    [sym_comment_char] = ACTIONS(692),
    [sym_text] = ACTIONS(694),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_RBRACK] = ACTIONS(696),
    [sym_escape] = ACTIONS(696),
    [sym_begin_group] = ACTIONS(696),
    [sym_end_group] = ACTIONS(696),
    [sym_math_shift] = ACTIONS(696),
    [sym_alignment_tab] = ACTIONS(696),
    [sym_parameter_char] = ACTIONS(696),
    [sym_superscript] = ACTIONS(696),
    [sym_subscript] = ACTIONS(696),
    [sym_active_char] = ACTIONS(696),
    [sym_comment_char] = ACTIONS(696),
    [sym_text] = ACTIONS(698),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym_escape] = ACTIONS(700),
    [sym_begin_group] = ACTIONS(700),
    [sym_end_group] = ACTIONS(700),
    [sym_math_shift] = ACTIONS(700),
    [sym_alignment_tab] = ACTIONS(700),
    [sym_parameter_char] = ACTIONS(700),
    [sym_superscript] = ACTIONS(700),
    [sym_subscript] = ACTIONS(700),
    [sym_active_char] = ACTIONS(700),
    [sym_comment_char] = ACTIONS(700),
    [sym_text] = ACTIONS(702),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(704),
    [anon_sym_RBRACK] = ACTIONS(704),
    [sym_escape] = ACTIONS(704),
    [sym_begin_group] = ACTIONS(704),
    [sym_end_group] = ACTIONS(704),
    [sym_math_shift] = ACTIONS(704),
    [sym_alignment_tab] = ACTIONS(704),
    [sym_parameter_char] = ACTIONS(704),
    [sym_superscript] = ACTIONS(704),
    [sym_subscript] = ACTIONS(704),
    [sym_active_char] = ACTIONS(704),
    [sym_comment_char] = ACTIONS(704),
    [sym_text] = ACTIONS(706),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(708),
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_RBRACK] = ACTIONS(708),
    [sym_escape] = ACTIONS(708),
    [sym_begin_group] = ACTIONS(708),
    [sym_end_group] = ACTIONS(708),
    [sym_math_shift] = ACTIONS(708),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(708),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_comment_char] = ACTIONS(708),
    [sym_text] = ACTIONS(710),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [sym_escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_end_group] = ACTIONS(712),
    [sym_math_shift] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_active_char] = ACTIONS(712),
    [sym_comment_char] = ACTIONS(712),
    [sym_text] = ACTIONS(714),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_RBRACK] = ACTIONS(716),
    [sym_escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_end_group] = ACTIONS(716),
    [sym_math_shift] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_comment_char] = ACTIONS(716),
    [sym_text] = ACTIONS(718),
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
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 1),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_section_token, 2),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage, 2),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
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
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 2),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 2),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 2),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [243] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [246] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [249] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [252] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [255] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [258] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [261] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [264] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 3),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 3),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 3),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 3),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 2),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 2),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [355] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [358] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(46),
  [361] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(47),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [366] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(49),
  [369] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [372] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [375] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(49),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
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
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 3),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 4),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 4),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 4),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 4),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 3),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
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
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 3),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 5),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 5),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 5),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 5),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 5),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 5),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 5),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 5),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 5),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 5),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 5),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 5),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 5),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 5),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 5),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 5),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 5),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 5),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 5),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 5),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 5),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 5),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 5),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 5),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 5),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 5),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 5),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 5),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 5),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 5),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 5),
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
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 6),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 6),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 6),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 6),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 5),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 5),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 5),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 5),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 5),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 5),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 5),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 5),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 5),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 5),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 5),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 5),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 5),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 5),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 5),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 5),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 5),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 5),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 5),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 5),
  [692] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 5),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 5),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 5),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 5),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 5),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 5),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 5),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 5),
  [708] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 5),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 5),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 5),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 5),
  [716] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 5),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 5),
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
