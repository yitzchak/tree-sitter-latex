#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 244
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  sym_storage = 29,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 30,
  anon_sym_EQ = 31,
  sym_escape = 32,
  sym_begin_group = 33,
  sym_end_group = 34,
  sym_math_shift = 35,
  sym_parameter_char = 36,
  sym_superscript = 37,
  sym_subscript = 38,
  sym_keyword = 39,
  sym_active_char = 40,
  sym_comment_char = 41,
  sym_text = 42,
  sym_number = 43,
  sym_magic = 44,
  sym_comment_text = 45,
  sym_tex = 46,
  sym_text_mode = 47,
  sym_math_mode = 48,
  sym_parameter = 49,
  sym_display_math = 50,
  sym_inline_math = 51,
  sym_begin_align = 52,
  sym_end_align = 53,
  sym_begin_align_star = 54,
  sym_end_align_star = 55,
  sym_begin_alignat = 56,
  sym_end_alignat = 57,
  sym_begin_alignat_star = 58,
  sym_end_alignat_star = 59,
  sym_begin_eqnarray = 60,
  sym_end_eqnarray = 61,
  sym_begin_eqnarray_star = 62,
  sym_end_eqnarray_star = 63,
  sym_begin_equation = 64,
  sym_end_equation = 65,
  sym_begin_equation_star = 66,
  sym_end_equation_star = 67,
  sym_begin_flalign = 68,
  sym_end_flalign = 69,
  sym_begin_flalign_star = 70,
  sym_end_flalign_star = 71,
  sym_begin_gather = 72,
  sym_end_gather = 73,
  sym_begin_gather_star = 74,
  sym_end_gather_star = 75,
  sym_begin_multline = 76,
  sym_end_multline = 77,
  sym_begin_multline_star = 78,
  sym_end_multline_star = 79,
  sym_begin_split = 80,
  sym_end_split = 81,
  sym_begin_split_star = 82,
  sym_end_split_star = 83,
  sym_begin_math = 84,
  sym_end_math = 85,
  sym_escaped = 86,
  sym_command = 87,
  sym_begin = 88,
  sym_end = 89,
  sym_documentclass = 90,
  sym_usepackage = 91,
  sym_include = 92,
  sym_section = 93,
  sym_catcode = 94,
  sym_text_group = 95,
  sym_opt_text_group = 96,
  sym_math_group = 97,
  sym_opt_math_group = 98,
  sym_comment = 99,
  sym_begin_opt = 100,
  sym_end_opt = 101,
  aux_sym_tex_repeat1 = 102,
  aux_sym_display_math_repeat1 = 103,
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
  [sym_storage] = "storage",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_EQ] = "=",
  [sym_escape] = "escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_keyword] = "keyword",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_tex] = "tex",
  [sym_text_mode] = "text_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
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
  [sym_catcode] = "catcode",
  [sym_text_group] = "text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
  [sym_comment] = "comment",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_tex_repeat1] = "tex_repeat1",
  [aux_sym_display_math_repeat1] = "display_math_repeat1",
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
  [sym_storage] = {
    .visible = true,
    .named = true,
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
  [sym_keyword] = {
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
  [sym_tex] = {
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
  [aux_sym_tex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_math_repeat1] = {
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'h')
        ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'r')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'g')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'o')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'p')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'r')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'f')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_storage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'u')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'm')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'l')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'p')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'u')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'u')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'n')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'i')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 's')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'r')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'g')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'p')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'h')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'u')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'i')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'o')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'n')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'b')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'p')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'r')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'u')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'b')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 's')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 's')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'k')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'g')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_keyword);
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
      ACCEPT_TOKEN(sym_keyword);
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
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if ((lookahead < '#' || lookahead > '&'))
        ADVANCE(117);
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
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(119);
      if (lookahead == 'b')
        ADVANCE(120);
      if (lookahead == 'c')
        ADVANCE(121);
      if (lookahead == 'd')
        ADVANCE(122);
      if (lookahead == 'e')
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
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'h')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(54);
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
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(147);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(172);
      if (lookahead == 'g')
        ADVANCE(180);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 's')
        ADVANCE(199);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(152);
      if (lookahead == 'a')
        ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
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
        ADVANCE(117);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'u')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
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
        ADVANCE(117);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(147);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(172);
      if (lookahead == 'g')
        ADVANCE(180);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 's')
        ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 206:
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
    case 207:
      if (lookahead == '=')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 209:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 216:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(217);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 232:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 251:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(252);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 261:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(262);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 271:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 281:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(282);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 290:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(291);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f')
        ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 299:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'g')
        ADVANCE(300);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 307:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'g')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 315:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(316);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 325:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 335:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(336);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 342:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 349:
      if (lookahead == '#')
        ADVANCE(107);
      if (lookahead == '$')
        ADVANCE(108);
      if (lookahead == '%')
        ADVANCE(109);
      if (lookahead == '[')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(110);
      if (lookahead == '^')
        ADVANCE(111);
      if (lookahead == '_')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(350);
      if (lookahead == '{')
        ADVANCE(113);
      if (lookahead == '}')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(117);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 106},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 133},
  [7] = {.lex_state = 106},
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
  [43] = {.lex_state = 118},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 118},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 118},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 118},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 106},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 118},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 118},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 118},
  [72] = {.lex_state = 106},
  [73] = {.lex_state = 118},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 118},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 118},
  [78] = {.lex_state = 106},
  [79] = {.lex_state = 118},
  [80] = {.lex_state = 106},
  [81] = {.lex_state = 118},
  [82] = {.lex_state = 106},
  [83] = {.lex_state = 118},
  [84] = {.lex_state = 106},
  [85] = {.lex_state = 118},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 106},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 118},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 146},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 106},
  [99] = {.lex_state = 106},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 106},
  [102] = {.lex_state = 106},
  [103] = {.lex_state = 106},
  [104] = {.lex_state = 106},
  [105] = {.lex_state = 106},
  [106] = {.lex_state = 206},
  [107] = {.lex_state = 207},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 106},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 106},
  [113] = {.lex_state = 106},
  [114] = {.lex_state = 106},
  [115] = {.lex_state = 106},
  [116] = {.lex_state = 106},
  [117] = {.lex_state = 106},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 106},
  [120] = {.lex_state = 106},
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
  [141] = {.lex_state = 118},
  [142] = {.lex_state = 106},
  [143] = {.lex_state = 118},
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
  [154] = {.lex_state = 106},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 106},
  [157] = {.lex_state = 106},
  [158] = {.lex_state = 106},
  [159] = {.lex_state = 106},
  [160] = {.lex_state = 106},
  [161] = {.lex_state = 106},
  [162] = {.lex_state = 106},
  [163] = {.lex_state = 106},
  [164] = {.lex_state = 207},
  [165] = {.lex_state = 133},
  [166] = {.lex_state = 106},
  [167] = {.lex_state = 106},
  [168] = {.lex_state = 106},
  [169] = {.lex_state = 106},
  [170] = {.lex_state = 106},
  [171] = {.lex_state = 209},
  [172] = {.lex_state = 216},
  [173] = {.lex_state = 223},
  [174] = {.lex_state = 232},
  [175] = {.lex_state = 241},
  [176] = {.lex_state = 251},
  [177] = {.lex_state = 261},
  [178] = {.lex_state = 271},
  [179] = {.lex_state = 281},
  [180] = {.lex_state = 290},
  [181] = {.lex_state = 299},
  [182] = {.lex_state = 307},
  [183] = {.lex_state = 315},
  [184] = {.lex_state = 325},
  [185] = {.lex_state = 335},
  [186] = {.lex_state = 342},
  [187] = {.lex_state = 349},
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
    [sym_storage] = ACTIONS(3),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(1),
    [sym_keyword] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
  },
  [1] = {
    [sym_tex] = STATE(9),
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_escape] = ACTIONS(25),
    [sym_begin_group] = ACTIONS(25),
    [sym_math_shift] = ACTIONS(25),
    [sym_parameter_char] = ACTIONS(25),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(25),
    [sym_comment_char] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
  },
  [3] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [4] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [5] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [6] = {
    [sym_number] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym_escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(65),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(65),
    [sym_text] = ACTIONS(67),
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
    [sym_parameter_char] = ACTIONS(75),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(75),
    [sym_text] = ACTIONS(77),
  },
  [11] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_align] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [12] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_align_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [13] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_alignat] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [14] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_alignat_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [15] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_eqnarray] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(62),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [16] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_eqnarray_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [17] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_equation] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [18] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_equation_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [19] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_flalign] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [20] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_flalign_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [21] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_gather] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [22] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_gather_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [23] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_multline] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(78),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [24] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_multline_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(80),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [25] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_split] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(82),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [26] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_split_star] = STATE(53),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [27] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_math] = STATE(86),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [28] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(89),
    [aux_sym_tex_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [29] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [30] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [31] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [32] = {
    [sym_text_group] = STATE(97),
    [sym_begin_group] = ACTIONS(121),
  },
  [33] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(123),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [sym_escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(125),
    [sym_end_group] = ACTIONS(125),
    [sym_math_shift] = ACTIONS(125),
    [sym_parameter_char] = ACTIONS(125),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(125),
    [sym_active_char] = ACTIONS(125),
    [sym_comment_char] = ACTIONS(125),
    [sym_text] = ACTIONS(127),
  },
  [35] = {
    [sym_text_group] = STATE(99),
    [sym_opt_text_group] = STATE(100),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(123),
  },
  [36] = {
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(102),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(123),
  },
  [37] = {
    [sym_text_group] = STATE(103),
    [sym_begin_group] = ACTIONS(123),
  },
  [38] = {
    [sym_text_group] = STATE(104),
    [sym_opt_text_group] = STATE(105),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(123),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(131),
    [sym_text] = ACTIONS(133),
  },
  [40] = {
    [sym_escaped] = STATE(107),
    [sym_escape] = ACTIONS(135),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_end_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
  },
  [42] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [43] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [44] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [45] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [46] = {
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_comment_char] = ACTIONS(149),
    [sym_text] = ACTIONS(151),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_comment_char] = ACTIONS(153),
    [sym_text] = ACTIONS(155),
  },
  [48] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [sym_end_opt] = STATE(115),
    [aux_sym_display_math_repeat1] = STATE(116),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [49] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_comment_char] = ACTIONS(159),
    [sym_text] = ACTIONS(161),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym_escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_end_group] = ACTIONS(163),
    [sym_math_shift] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_comment_char] = ACTIONS(163),
    [sym_text] = ACTIONS(165),
  },
  [52] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_end_group] = ACTIONS(169),
    [sym_math_shift] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_comment_char] = ACTIONS(169),
    [sym_text] = ACTIONS(171),
  },
  [54] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_align] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [55] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [56] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_align_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [57] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [58] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_alignat] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [59] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [60] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_alignat_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [61] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(179),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [62] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_eqnarray] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [63] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [64] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_eqnarray_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [65] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [66] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_equation] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [67] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [68] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_equation_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [69] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [70] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_flalign] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [71] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [72] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_flalign_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [73] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [74] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_gather] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [75] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(193),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [76] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_gather_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [77] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [78] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_multline] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [79] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [80] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_multline_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [81] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(199),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [82] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_split] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [83] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [84] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_split_star] = STATE(120),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [85] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_escape] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_end_group] = ACTIONS(205),
    [sym_math_shift] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_comment_char] = ACTIONS(205),
    [sym_text] = ACTIONS(207),
  },
  [87] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_end_math] = STATE(117),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_comment_char] = ACTIONS(209),
    [sym_text] = ACTIONS(211),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym_escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_end_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_comment_char] = ACTIONS(213),
    [sym_text] = ACTIONS(215),
  },
  [90] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(138),
    [aux_sym_tex_repeat1] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [91] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_escape] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(228),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(234),
    [sym_active_char] = ACTIONS(234),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(240),
  },
  [92] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [93] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [94] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [95] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [96] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(251),
    [anon_sym_align_STAR] = ACTIONS(253),
    [anon_sym_alignat] = ACTIONS(255),
    [anon_sym_alignat_STAR] = ACTIONS(257),
    [anon_sym_eqnarray] = ACTIONS(259),
    [anon_sym_eqnarray_STAR] = ACTIONS(261),
    [anon_sym_equation] = ACTIONS(263),
    [anon_sym_equation_STAR] = ACTIONS(265),
    [anon_sym_flalign] = ACTIONS(267),
    [anon_sym_flalign_STAR] = ACTIONS(269),
    [anon_sym_gather] = ACTIONS(271),
    [anon_sym_gather_STAR] = ACTIONS(273),
    [anon_sym_multline] = ACTIONS(275),
    [anon_sym_multline_STAR] = ACTIONS(277),
    [anon_sym_split] = ACTIONS(279),
    [anon_sym_split_STAR] = ACTIONS(281),
    [anon_sym_math] = ACTIONS(283),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(285),
    [sym_end_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(285),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(285),
    [sym_active_char] = ACTIONS(285),
    [sym_comment_char] = ACTIONS(285),
    [sym_text] = ACTIONS(287),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_escape] = ACTIONS(289),
    [sym_begin_group] = ACTIONS(289),
    [sym_end_group] = ACTIONS(289),
    [sym_math_shift] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(289),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [sym_comment_char] = ACTIONS(289),
    [sym_text] = ACTIONS(291),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_escape] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_end_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(293),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(295),
  },
  [100] = {
    [sym_text_group] = STATE(161),
    [sym_begin_group] = ACTIONS(123),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_end_group] = ACTIONS(297),
    [sym_math_shift] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_comment_char] = ACTIONS(297),
    [sym_text] = ACTIONS(299),
  },
  [102] = {
    [sym_text_group] = STATE(162),
    [sym_begin_group] = ACTIONS(123),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [sym_active_char] = ACTIONS(301),
    [sym_comment_char] = ACTIONS(301),
    [sym_text] = ACTIONS(303),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [sym_escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(305),
    [sym_end_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(305),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_comment_char] = ACTIONS(305),
    [sym_text] = ACTIONS(307),
  },
  [105] = {
    [sym_text_group] = STATE(163),
    [sym_begin_group] = ACTIONS(123),
  },
  [106] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(309),
  },
  [107] = {
    [anon_sym_EQ] = ACTIONS(311),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_end_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_comment_char] = ACTIONS(313),
    [sym_text] = ACTIONS(315),
  },
  [109] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_escape] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(228),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(234),
    [sym_active_char] = ACTIONS(234),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(240),
  },
  [110] = {
    [sym_text_group] = STATE(97),
    [sym_begin_group] = ACTIONS(123),
  },
  [111] = {
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(317),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(317),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(317),
    [sym_active_char] = ACTIONS(317),
    [sym_comment_char] = ACTIONS(317),
    [sym_text] = ACTIONS(319),
  },
  [112] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [113] = {
    [sym_math_shift] = ACTIONS(323),
  },
  [114] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_end_group] = ACTIONS(327),
    [sym_math_shift] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_comment_char] = ACTIONS(327),
    [sym_text] = ACTIONS(329),
  },
  [116] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [sym_end_opt] = STATE(169),
    [aux_sym_display_math_repeat1] = STATE(170),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(333),
  },
  [118] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(341),
    [sym_math_shift] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(346),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(352),
    [sym_text] = ACTIONS(355),
  },
  [119] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(358),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(360),
    [sym_escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(360),
    [sym_end_group] = ACTIONS(360),
    [sym_math_shift] = ACTIONS(360),
    [sym_parameter_char] = ACTIONS(360),
    [sym_superscript] = ACTIONS(360),
    [sym_subscript] = ACTIONS(360),
    [sym_active_char] = ACTIONS(360),
    [sym_comment_char] = ACTIONS(360),
    [sym_text] = ACTIONS(362),
  },
  [121] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(346),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(352),
    [sym_text] = ACTIONS(355),
  },
  [122] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(364),
  },
  [123] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(366),
  },
  [124] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(368),
  },
  [125] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(370),
  },
  [126] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(372),
  },
  [127] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(374),
  },
  [128] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(376),
  },
  [129] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(378),
  },
  [130] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(380),
  },
  [131] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(382),
  },
  [132] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(384),
  },
  [133] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(386),
  },
  [134] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(388),
  },
  [135] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(390),
  },
  [136] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(392),
  },
  [137] = {
    [sym_text_group] = STATE(98),
    [sym_begin_group] = ACTIONS(394),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [sym_escape] = ACTIONS(396),
    [sym_begin_group] = ACTIONS(396),
    [sym_end_group] = ACTIONS(396),
    [sym_math_shift] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(396),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(398),
  },
  [139] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_escape] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(228),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(234),
    [sym_active_char] = ACTIONS(234),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(240),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [sym_escape] = ACTIONS(400),
    [sym_begin_group] = ACTIONS(400),
    [sym_end_group] = ACTIONS(400),
    [sym_math_shift] = ACTIONS(400),
    [sym_parameter_char] = ACTIONS(400),
    [sym_superscript] = ACTIONS(400),
    [sym_subscript] = ACTIONS(400),
    [sym_active_char] = ACTIONS(400),
    [sym_comment_char] = ACTIONS(400),
    [sym_text] = ACTIONS(402),
  },
  [141] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
    [sym_escape] = ACTIONS(406),
    [sym_begin_group] = ACTIONS(406),
    [sym_end_group] = ACTIONS(406),
    [sym_math_shift] = ACTIONS(406),
    [sym_parameter_char] = ACTIONS(406),
    [sym_superscript] = ACTIONS(406),
    [sym_subscript] = ACTIONS(406),
    [sym_active_char] = ACTIONS(406),
    [sym_comment_char] = ACTIONS(406),
    [sym_text] = ACTIONS(408),
  },
  [143] = {
    [sym_begin] = STATE(39),
    [sym_end] = STATE(39),
    [sym_documentclass] = STATE(39),
    [sym_usepackage] = STATE(39),
    [sym_include] = STATE(39),
    [sym_section] = STATE(39),
    [sym_catcode] = STATE(39),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_begin] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_documentclass] = ACTIONS(39),
    [anon_sym_usepackage] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(43),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(45),
    [sym_storage] = ACTIONS(47),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(49),
    [sym_keyword] = ACTIONS(47),
  },
  [144] = {
    [sym_end_group] = ACTIONS(412),
  },
  [145] = {
    [sym_end_group] = ACTIONS(414),
  },
  [146] = {
    [sym_end_group] = ACTIONS(416),
  },
  [147] = {
    [sym_end_group] = ACTIONS(418),
  },
  [148] = {
    [sym_end_group] = ACTIONS(420),
  },
  [149] = {
    [sym_end_group] = ACTIONS(422),
  },
  [150] = {
    [sym_end_group] = ACTIONS(424),
  },
  [151] = {
    [sym_end_group] = ACTIONS(426),
  },
  [152] = {
    [sym_end_group] = ACTIONS(428),
  },
  [153] = {
    [sym_end_group] = ACTIONS(430),
  },
  [154] = {
    [sym_end_group] = ACTIONS(432),
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
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_escape] = ACTIONS(446),
    [sym_begin_group] = ACTIONS(446),
    [sym_end_group] = ACTIONS(446),
    [sym_math_shift] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_comment_char] = ACTIONS(446),
    [sym_text] = ACTIONS(448),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(450),
    [sym_end_group] = ACTIONS(450),
    [sym_math_shift] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_comment_char] = ACTIONS(450),
    [sym_text] = ACTIONS(452),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym_escape] = ACTIONS(454),
    [sym_begin_group] = ACTIONS(454),
    [sym_end_group] = ACTIONS(454),
    [sym_math_shift] = ACTIONS(454),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(454),
    [sym_subscript] = ACTIONS(454),
    [sym_active_char] = ACTIONS(454),
    [sym_comment_char] = ACTIONS(454),
    [sym_text] = ACTIONS(456),
  },
  [164] = {
    [anon_sym_EQ] = ACTIONS(458),
  },
  [165] = {
    [sym_number] = ACTIONS(460),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [sym_escape] = ACTIONS(462),
    [sym_begin_group] = ACTIONS(462),
    [sym_end_group] = ACTIONS(462),
    [sym_math_shift] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(462),
    [sym_subscript] = ACTIONS(462),
    [sym_active_char] = ACTIONS(462),
    [sym_comment_char] = ACTIONS(462),
    [sym_text] = ACTIONS(464),
  },
  [167] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(335),
    [sym_escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(341),
    [sym_end_group] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(346),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(352),
    [sym_text] = ACTIONS(355),
  },
  [168] = {
    [sym_math_shift] = ACTIONS(466),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [sym_escape] = ACTIONS(468),
    [sym_begin_group] = ACTIONS(468),
    [sym_end_group] = ACTIONS(468),
    [sym_math_shift] = ACTIONS(468),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(468),
    [sym_subscript] = ACTIONS(468),
    [sym_active_char] = ACTIONS(468),
    [sym_comment_char] = ACTIONS(468),
    [sym_text] = ACTIONS(470),
  },
  [170] = {
    [sym_math_mode] = STATE(47),
    [sym_parameter] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(48),
    [aux_sym_display_math_repeat1] = STATE(170),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(346),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(352),
    [sym_text] = ACTIONS(355),
  },
  [171] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(472),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [172] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_align_STAR] = ACTIONS(474),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [173] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_alignat] = ACTIONS(476),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [174] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_alignat_STAR] = ACTIONS(478),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [175] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_eqnarray] = ACTIONS(480),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [176] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_eqnarray_STAR] = ACTIONS(482),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [177] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_equation] = ACTIONS(484),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [178] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_equation_STAR] = ACTIONS(486),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [179] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_flalign] = ACTIONS(488),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [180] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_flalign_STAR] = ACTIONS(490),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [181] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_gather] = ACTIONS(492),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [182] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_gather_STAR] = ACTIONS(494),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [183] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_multline] = ACTIONS(496),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [184] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_multline_STAR] = ACTIONS(498),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [185] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_split] = ACTIONS(500),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [186] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_split_STAR] = ACTIONS(502),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [187] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(7),
    [sym_display_math] = STATE(7),
    [sym_inline_math] = STATE(7),
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
    [sym_escaped] = STATE(7),
    [sym_command] = STATE(7),
    [sym_text_group] = STATE(7),
    [sym_opt_text_group] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_begin_opt] = STATE(28),
    [aux_sym_tex_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_math] = ACTIONS(504),
    [sym_escape] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(13),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(19),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(19),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(19),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [sym_escape] = ACTIONS(506),
    [sym_begin_group] = ACTIONS(506),
    [sym_end_group] = ACTIONS(506),
    [sym_math_shift] = ACTIONS(506),
    [sym_parameter_char] = ACTIONS(506),
    [sym_superscript] = ACTIONS(506),
    [sym_subscript] = ACTIONS(506),
    [sym_active_char] = ACTIONS(506),
    [sym_comment_char] = ACTIONS(506),
    [sym_text] = ACTIONS(508),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym_escape] = ACTIONS(510),
    [sym_begin_group] = ACTIONS(510),
    [sym_end_group] = ACTIONS(510),
    [sym_math_shift] = ACTIONS(510),
    [sym_parameter_char] = ACTIONS(510),
    [sym_superscript] = ACTIONS(510),
    [sym_subscript] = ACTIONS(510),
    [sym_active_char] = ACTIONS(510),
    [sym_comment_char] = ACTIONS(510),
    [sym_text] = ACTIONS(512),
  },
  [190] = {
    [anon_sym_LBRACK] = ACTIONS(514),
    [sym_escape] = ACTIONS(514),
    [sym_begin_group] = ACTIONS(514),
    [sym_parameter_char] = ACTIONS(514),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(514),
    [sym_active_char] = ACTIONS(514),
    [sym_comment_char] = ACTIONS(514),
    [sym_text] = ACTIONS(516),
  },
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_escape] = ACTIONS(518),
    [sym_begin_group] = ACTIONS(518),
    [sym_parameter_char] = ACTIONS(518),
    [sym_superscript] = ACTIONS(518),
    [sym_subscript] = ACTIONS(518),
    [sym_active_char] = ACTIONS(518),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(520),
  },
  [192] = {
    [sym_text_group] = STATE(225),
    [sym_begin_group] = ACTIONS(123),
  },
  [193] = {
    [sym_text_group] = STATE(226),
    [sym_begin_group] = ACTIONS(123),
  },
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(522),
    [sym_escape] = ACTIONS(522),
    [sym_begin_group] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(522),
    [sym_superscript] = ACTIONS(522),
    [sym_subscript] = ACTIONS(522),
    [sym_active_char] = ACTIONS(522),
    [sym_comment_char] = ACTIONS(522),
    [sym_text] = ACTIONS(524),
  },
  [195] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_comment_char] = ACTIONS(526),
    [sym_text] = ACTIONS(528),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(530),
    [sym_escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_comment_char] = ACTIONS(530),
    [sym_text] = ACTIONS(532),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_escape] = ACTIONS(534),
    [sym_begin_group] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(534),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_comment_char] = ACTIONS(534),
    [sym_text] = ACTIONS(536),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(538),
    [sym_escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_comment_char] = ACTIONS(538),
    [sym_text] = ACTIONS(540),
  },
  [199] = {
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym_escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(542),
    [sym_parameter_char] = ACTIONS(542),
    [sym_superscript] = ACTIONS(542),
    [sym_subscript] = ACTIONS(542),
    [sym_active_char] = ACTIONS(542),
    [sym_comment_char] = ACTIONS(542),
    [sym_text] = ACTIONS(544),
  },
  [200] = {
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym_escape] = ACTIONS(546),
    [sym_begin_group] = ACTIONS(546),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(546),
    [sym_active_char] = ACTIONS(546),
    [sym_comment_char] = ACTIONS(546),
    [sym_text] = ACTIONS(548),
  },
  [201] = {
    [anon_sym_LBRACK] = ACTIONS(550),
    [sym_escape] = ACTIONS(550),
    [sym_begin_group] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(550),
    [sym_superscript] = ACTIONS(550),
    [sym_subscript] = ACTIONS(550),
    [sym_active_char] = ACTIONS(550),
    [sym_comment_char] = ACTIONS(550),
    [sym_text] = ACTIONS(552),
  },
  [202] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [sym_escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_comment_char] = ACTIONS(554),
    [sym_text] = ACTIONS(556),
  },
  [203] = {
    [anon_sym_LBRACK] = ACTIONS(558),
    [sym_escape] = ACTIONS(558),
    [sym_begin_group] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(558),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_comment_char] = ACTIONS(558),
    [sym_text] = ACTIONS(560),
  },
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(562),
    [sym_active_char] = ACTIONS(562),
    [sym_comment_char] = ACTIONS(562),
    [sym_text] = ACTIONS(564),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_comment_char] = ACTIONS(566),
    [sym_text] = ACTIONS(568),
  },
  [206] = {
    [anon_sym_LBRACK] = ACTIONS(570),
    [sym_escape] = ACTIONS(570),
    [sym_begin_group] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(570),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_comment_char] = ACTIONS(570),
    [sym_text] = ACTIONS(572),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_escape] = ACTIONS(574),
    [sym_begin_group] = ACTIONS(574),
    [sym_end_group] = ACTIONS(574),
    [sym_math_shift] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(574),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_comment_char] = ACTIONS(574),
    [sym_text] = ACTIONS(576),
  },
  [208] = {
    [sym_end_group] = ACTIONS(578),
  },
  [209] = {
    [sym_end_group] = ACTIONS(580),
  },
  [210] = {
    [sym_end_group] = ACTIONS(582),
  },
  [211] = {
    [sym_end_group] = ACTIONS(584),
  },
  [212] = {
    [sym_end_group] = ACTIONS(586),
  },
  [213] = {
    [sym_end_group] = ACTIONS(588),
  },
  [214] = {
    [sym_end_group] = ACTIONS(590),
  },
  [215] = {
    [sym_end_group] = ACTIONS(592),
  },
  [216] = {
    [sym_end_group] = ACTIONS(594),
  },
  [217] = {
    [sym_end_group] = ACTIONS(596),
  },
  [218] = {
    [sym_end_group] = ACTIONS(598),
  },
  [219] = {
    [sym_end_group] = ACTIONS(600),
  },
  [220] = {
    [sym_end_group] = ACTIONS(602),
  },
  [221] = {
    [sym_end_group] = ACTIONS(604),
  },
  [222] = {
    [sym_end_group] = ACTIONS(606),
  },
  [223] = {
    [sym_end_group] = ACTIONS(608),
  },
  [224] = {
    [sym_end_group] = ACTIONS(610),
  },
  [225] = {
    [anon_sym_LBRACK] = ACTIONS(612),
    [sym_escape] = ACTIONS(612),
    [sym_begin_group] = ACTIONS(612),
    [sym_parameter_char] = ACTIONS(612),
    [sym_superscript] = ACTIONS(612),
    [sym_subscript] = ACTIONS(612),
    [sym_active_char] = ACTIONS(612),
    [sym_comment_char] = ACTIONS(612),
    [sym_text] = ACTIONS(614),
  },
  [226] = {
    [anon_sym_LBRACK] = ACTIONS(616),
    [sym_escape] = ACTIONS(616),
    [sym_begin_group] = ACTIONS(616),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(616),
    [sym_subscript] = ACTIONS(616),
    [sym_active_char] = ACTIONS(616),
    [sym_comment_char] = ACTIONS(616),
    [sym_text] = ACTIONS(618),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(620),
    [sym_escape] = ACTIONS(620),
    [sym_begin_group] = ACTIONS(620),
    [sym_end_group] = ACTIONS(620),
    [sym_math_shift] = ACTIONS(620),
    [sym_parameter_char] = ACTIONS(620),
    [sym_superscript] = ACTIONS(620),
    [sym_subscript] = ACTIONS(620),
    [sym_active_char] = ACTIONS(620),
    [sym_comment_char] = ACTIONS(620),
    [sym_text] = ACTIONS(622),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(624),
    [anon_sym_LBRACK] = ACTIONS(624),
    [anon_sym_RBRACK] = ACTIONS(624),
    [sym_escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(624),
    [sym_end_group] = ACTIONS(624),
    [sym_math_shift] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(624),
    [sym_superscript] = ACTIONS(624),
    [sym_subscript] = ACTIONS(624),
    [sym_active_char] = ACTIONS(624),
    [sym_comment_char] = ACTIONS(624),
    [sym_text] = ACTIONS(626),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_RBRACK] = ACTIONS(628),
    [sym_escape] = ACTIONS(628),
    [sym_begin_group] = ACTIONS(628),
    [sym_end_group] = ACTIONS(628),
    [sym_math_shift] = ACTIONS(628),
    [sym_parameter_char] = ACTIONS(628),
    [sym_superscript] = ACTIONS(628),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(628),
    [sym_comment_char] = ACTIONS(628),
    [sym_text] = ACTIONS(630),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym_escape] = ACTIONS(632),
    [sym_begin_group] = ACTIONS(632),
    [sym_end_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(632),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_comment_char] = ACTIONS(632),
    [sym_text] = ACTIONS(634),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [sym_escape] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_end_group] = ACTIONS(636),
    [sym_math_shift] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_superscript] = ACTIONS(636),
    [sym_subscript] = ACTIONS(636),
    [sym_active_char] = ACTIONS(636),
    [sym_comment_char] = ACTIONS(636),
    [sym_text] = ACTIONS(638),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(640),
    [sym_escape] = ACTIONS(640),
    [sym_begin_group] = ACTIONS(640),
    [sym_end_group] = ACTIONS(640),
    [sym_math_shift] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(640),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [sym_comment_char] = ACTIONS(640),
    [sym_text] = ACTIONS(642),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_RBRACK] = ACTIONS(644),
    [sym_escape] = ACTIONS(644),
    [sym_begin_group] = ACTIONS(644),
    [sym_end_group] = ACTIONS(644),
    [sym_math_shift] = ACTIONS(644),
    [sym_parameter_char] = ACTIONS(644),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(644),
    [sym_comment_char] = ACTIONS(644),
    [sym_text] = ACTIONS(646),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_RBRACK] = ACTIONS(648),
    [sym_escape] = ACTIONS(648),
    [sym_begin_group] = ACTIONS(648),
    [sym_end_group] = ACTIONS(648),
    [sym_math_shift] = ACTIONS(648),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(648),
    [sym_subscript] = ACTIONS(648),
    [sym_active_char] = ACTIONS(648),
    [sym_comment_char] = ACTIONS(648),
    [sym_text] = ACTIONS(650),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(652),
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym_escape] = ACTIONS(652),
    [sym_begin_group] = ACTIONS(652),
    [sym_end_group] = ACTIONS(652),
    [sym_math_shift] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(652),
    [sym_superscript] = ACTIONS(652),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [sym_comment_char] = ACTIONS(652),
    [sym_text] = ACTIONS(654),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_end_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_comment_char] = ACTIONS(656),
    [sym_text] = ACTIONS(658),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_RBRACK] = ACTIONS(660),
    [sym_escape] = ACTIONS(660),
    [sym_begin_group] = ACTIONS(660),
    [sym_end_group] = ACTIONS(660),
    [sym_math_shift] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(660),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_comment_char] = ACTIONS(660),
    [sym_text] = ACTIONS(662),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_RBRACK] = ACTIONS(664),
    [sym_escape] = ACTIONS(664),
    [sym_begin_group] = ACTIONS(664),
    [sym_end_group] = ACTIONS(664),
    [sym_math_shift] = ACTIONS(664),
    [sym_parameter_char] = ACTIONS(664),
    [sym_superscript] = ACTIONS(664),
    [sym_subscript] = ACTIONS(664),
    [sym_active_char] = ACTIONS(664),
    [sym_comment_char] = ACTIONS(664),
    [sym_text] = ACTIONS(666),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_end_group] = ACTIONS(668),
    [sym_math_shift] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_comment_char] = ACTIONS(668),
    [sym_text] = ACTIONS(670),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_end_group] = ACTIONS(672),
    [sym_math_shift] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_comment_char] = ACTIONS(672),
    [sym_text] = ACTIONS(674),
  },
  [241] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_escape] = ACTIONS(676),
    [sym_begin_group] = ACTIONS(676),
    [sym_end_group] = ACTIONS(676),
    [sym_math_shift] = ACTIONS(676),
    [sym_parameter_char] = ACTIONS(676),
    [sym_superscript] = ACTIONS(676),
    [sym_subscript] = ACTIONS(676),
    [sym_active_char] = ACTIONS(676),
    [sym_comment_char] = ACTIONS(676),
    [sym_text] = ACTIONS(678),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [sym_comment_char] = ACTIONS(680),
    [sym_text] = ACTIONS(682),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym_escape] = ACTIONS(684),
    [sym_begin_group] = ACTIONS(684),
    [sym_end_group] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(684),
    [sym_parameter_char] = ACTIONS(684),
    [sym_superscript] = ACTIONS(684),
    [sym_subscript] = ACTIONS(684),
    [sym_active_char] = ACTIONS(684),
    [sym_comment_char] = ACTIONS(684),
    [sym_text] = ACTIONS(686),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tex, 0),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tex_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tex, 1),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_display_math_repeat1, 1),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2),
  [219] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(2),
  [222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(3),
  [225] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(4),
  [228] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(5),
  [231] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(6),
  [234] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(7),
  [237] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(8),
  [240] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tex_repeat1, 2), SHIFT_REPEAT(7),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 2),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 2),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 2),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 2),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 2),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 2),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 2),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 2),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 2),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [335] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(2),
  [338] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(43),
  [341] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(44),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2),
  [346] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(6),
  [349] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(46),
  [352] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(8),
  [355] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_display_math_repeat1, 2), SHIFT_REPEAT(46),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 5),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 5),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 5),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 5),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 5),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 5),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 5),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 5),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 5),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 5),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 5),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 5),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 5),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 5),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 5),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 5),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 5),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 5),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 5),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 5),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 5),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 5),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 5),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 5),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 5),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 5),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 5),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 5),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 5),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 6),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 6),
  [616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 6),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 6),
  [620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 5),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 5),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 5),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 5),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 5),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 5),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 5),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 5),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 5),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 5),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 5),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 5),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 5),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 5),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 5),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 5),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 5),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 5),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 5),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 5),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 5),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 5),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 5),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 5),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 5),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 5),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 5),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 5),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 5),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 5),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 5),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 5),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 5),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 5),
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
