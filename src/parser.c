#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 388
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 4
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  sym__control_symbol_body = 3,
  aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH = 4,
  sym__whitespace = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_display_math_env_name = 10,
  sym_inline_math_env_name = 11,
  anon_sym_tag = 12,
  aux_sym_SLASH_DOT_SLASH = 13,
  sym_verbatim_env_name = 14,
  anon_sym_begin = 15,
  anon_sym_end = 16,
  anon_sym_documentclass = 17,
  anon_sym_usepackage = 18,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 19,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 20,
  anon_sym_STAR = 21,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 22,
  anon_sym_EQ = 23,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 24,
  anon_sym_emph = 25,
  anon_sym_footnote = 26,
  anon_sym_textbf = 27,
  anon_sym_textit = 28,
  anon_sym_texttt = 29,
  anon_sym_makeatletter = 30,
  anon_sym_makeatother = 31,
  sym_double_circumflex = 32,
  sym_magic_comment = 33,
  sym_comment = 34,
  sym__escape = 35,
  sym_begin_group = 36,
  sym_end_group = 37,
  sym_math_shift = 38,
  sym_alignment_tab = 39,
  sym__end_of_line = 40,
  sym_parameter_char = 41,
  sym_superscript = 42,
  sym_subscript = 43,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH = 44,
  sym__name_at = 45,
  sym_active_char = 46,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH = 47,
  aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH = 48,
  sym_number = 49,
  sym_document = 50,
  sym__common = 51,
  sym__text_mode_common = 52,
  sym_inline_verbatim = 53,
  sym_verb_token = 54,
  sym__text_mode = 55,
  sym_text_mode = 56,
  sym__text_mode_at = 57,
  sym_text_mode_at = 58,
  sym_text_mode_at_region = 59,
  sym__math_mode_common = 60,
  sym__math_mode = 61,
  sym_math_mode = 62,
  sym__math_mode_at = 63,
  sym_math_mode_at = 64,
  sym_parameter = 65,
  sym_text_env = 66,
  sym_text_env_at = 67,
  sym_math_env = 68,
  sym_math_env_at = 69,
  sym__display_math = 70,
  sym__display_math_at = 71,
  sym_tex_display_math = 72,
  sym_tex_display_math_at = 73,
  sym_latex_display_math = 74,
  sym_latex_display_math_at = 75,
  sym_begin_display_math = 76,
  sym_end_display_math = 77,
  sym_begin_inline_math = 78,
  sym_end_inline_math = 79,
  sym_display_math_env = 80,
  sym_display_math_env_at = 81,
  sym_display_math_begin = 82,
  sym_display_math_begin_at = 83,
  sym_display_math_end = 84,
  sym_display_math_env_group = 85,
  sym__inline_math = 86,
  sym__inline_math_at = 87,
  sym_tex_inline_math = 88,
  sym_tex_inline_math_at = 89,
  sym_latex_inline_math = 90,
  sym_latex_inline_math_at = 91,
  sym_inline_math_env = 92,
  sym_inline_math_env_at = 93,
  sym_inline_math_begin = 94,
  sym_inline_math_end = 95,
  sym_inline_math_env_group = 96,
  sym_tag = 97,
  sym_tag_at = 98,
  sym_tag_token = 99,
  sym_verbatim_env = 100,
  sym_verbatim_begin = 101,
  sym_verbatim_end = 102,
  sym_verbatim_text = 103,
  sym_verbatim_env_group = 104,
  sym_escaped = 105,
  sym_begin = 106,
  sym_begin_token = 107,
  sym_end = 108,
  sym_end_token = 109,
  sym_documentclass = 110,
  sym_documentclass_token = 111,
  sym_usepackage = 112,
  sym_usepackage_token = 113,
  sym_include = 114,
  sym_include_at = 115,
  sym_include_token = 116,
  sym_section = 117,
  sym_section_at = 118,
  sym_section_token = 119,
  sym_storage = 120,
  sym_storage_token = 121,
  sym_catcode = 122,
  sym_catcode_token = 123,
  sym_emph = 124,
  sym_emph_at = 125,
  sym_emph_token = 126,
  sym_footnote = 127,
  sym_footnote_at = 128,
  sym_footnote_token = 129,
  sym_textbf = 130,
  sym_textbf_at = 131,
  sym_textbf_token = 132,
  sym_textit = 133,
  sym_textit_at = 134,
  sym_textit_token = 135,
  sym_texttt = 136,
  sym_texttt_at = 137,
  sym_texttt_token = 138,
  sym_makeatletter = 139,
  sym_makeatletter_token = 140,
  sym_makeatother = 141,
  sym_makeatother_token = 142,
  sym_text_group = 143,
  sym_text_group_at = 144,
  sym_simple_text_group = 145,
  sym_opt_text_group = 146,
  sym_opt_text_group_at = 147,
  sym_math_group = 148,
  sym_math_group_at = 149,
  sym_opt_math_group = 150,
  sym_opt_math_group_at = 151,
  sym_math_text_group = 152,
  sym_math_text_group_at = 153,
  sym_token = 154,
  sym_token_at = 155,
  sym_begin_opt = 156,
  sym_end_opt = 157,
  sym__name = 158,
  sym_text = 159,
  aux_sym_text_mode_repeat1 = 160,
  aux_sym_text_mode_at_repeat1 = 161,
  aux_sym_math_mode_repeat1 = 162,
  aux_sym_math_mode_at_repeat1 = 163,
  aux_sym_parameter_repeat1 = 164,
  aux_sym_verbatim_text_repeat1 = 165,
  aux_sym_verbatim_text_repeat2 = 166,
  aux_sym__name_repeat1 = 167,
  aux_sym_text_repeat1 = 168,
  anon_alias_sym_class_name = 169,
  anon_alias_sym_env_name = 170,
  anon_alias_sym_package_name = 171,
  anon_alias_sym_text = 172,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [sym__control_symbol_body] = "_control_symbol_body",
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = "/verb\\*?/",
  [sym__whitespace] = "_whitespace",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_display_math_env_name] = "display_math_env_name",
  [sym_inline_math_env_name] = "inline_math_env_name",
  [anon_sym_tag] = "tag",
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [sym_verbatim_env_name] = "verbatim_env_name",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [anon_sym_STAR] = "*",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_emph] = "emph",
  [anon_sym_footnote] = "footnote",
  [anon_sym_textbf] = "textbf",
  [anon_sym_textit] = "textit",
  [anon_sym_texttt] = "texttt",
  [anon_sym_makeatletter] = "makeatletter",
  [anon_sym_makeatother] = "makeatother",
  [sym_double_circumflex] = "double_circumflex",
  [sym_magic_comment] = "magic_comment",
  [sym_comment] = "comment",
  [sym__escape] = "_escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym__end_of_line] = "_end_of_line",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = "/[a-zA-Z]+/",
  [sym__name_at] = "_name_at",
  [sym_active_char] = "active_char",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = "/[^\\\\{}$&#^_~%\\[\\]]+/",
  [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = "/\\^\\^([0-9a-f][0-9a-f]|.)/",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__common] = "_common",
  [sym__text_mode_common] = "_text_mode_common",
  [sym_inline_verbatim] = "inline_verbatim",
  [sym_verb_token] = "verb_token",
  [sym__text_mode] = "_text_mode",
  [sym_text_mode] = "text_mode",
  [sym__text_mode_at] = "_text_mode_at",
  [sym_text_mode_at] = "text_mode_at",
  [sym_text_mode_at_region] = "text_mode_at_region",
  [sym__math_mode_common] = "_math_mode_common",
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym__math_mode_at] = "_math_mode_at",
  [sym_math_mode_at] = "math_mode_at",
  [sym_parameter] = "parameter",
  [sym_text_env] = "text_env",
  [sym_text_env_at] = "text_env_at",
  [sym_math_env] = "math_env",
  [sym_math_env_at] = "math_env_at",
  [sym__display_math] = "_display_math",
  [sym__display_math_at] = "_display_math_at",
  [sym_tex_display_math] = "tex_display_math",
  [sym_tex_display_math_at] = "tex_display_math_at",
  [sym_latex_display_math] = "latex_display_math",
  [sym_latex_display_math_at] = "latex_display_math_at",
  [sym_begin_display_math] = "begin_display_math",
  [sym_end_display_math] = "end_display_math",
  [sym_begin_inline_math] = "begin_inline_math",
  [sym_end_inline_math] = "end_inline_math",
  [sym_display_math_env] = "display_math_env",
  [sym_display_math_env_at] = "display_math_env_at",
  [sym_display_math_begin] = "display_math_begin",
  [sym_display_math_begin_at] = "display_math_begin",
  [sym_display_math_end] = "display_math_end",
  [sym_display_math_env_group] = "display_math_env_group",
  [sym__inline_math] = "_inline_math",
  [sym__inline_math_at] = "_inline_math_at",
  [sym_tex_inline_math] = "tex_inline_math",
  [sym_tex_inline_math_at] = "tex_inline_math_at",
  [sym_latex_inline_math] = "latex_inline_math",
  [sym_latex_inline_math_at] = "latex_inline_math_at",
  [sym_inline_math_env] = "inline_math_env",
  [sym_inline_math_env_at] = "inline_math_env_at",
  [sym_inline_math_begin] = "inline_math_begin",
  [sym_inline_math_end] = "inline_math_end",
  [sym_inline_math_env_group] = "inline_math_env_group",
  [sym_tag] = "tag",
  [sym_tag_at] = "tag_at",
  [sym_tag_token] = "tag_token",
  [sym_verbatim_env] = "verbatim_env",
  [sym_verbatim_begin] = "verbatim_begin",
  [sym_verbatim_end] = "verbatim_end",
  [sym_verbatim_text] = "verbatim_text",
  [sym_verbatim_env_group] = "verbatim_env_group",
  [sym_escaped] = "escaped",
  [sym_begin] = "begin",
  [sym_begin_token] = "begin_token",
  [sym_end] = "end",
  [sym_end_token] = "end_token",
  [sym_documentclass] = "documentclass",
  [sym_documentclass_token] = "documentclass_token",
  [sym_usepackage] = "usepackage",
  [sym_usepackage_token] = "usepackage_token",
  [sym_include] = "include",
  [sym_include_at] = "include_at",
  [sym_include_token] = "include_token",
  [sym_section] = "section",
  [sym_section_at] = "section_at",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_emph] = "emph",
  [sym_emph_at] = "emph_at",
  [sym_emph_token] = "emph_token",
  [sym_footnote] = "footnote",
  [sym_footnote_at] = "footnote_at",
  [sym_footnote_token] = "footnote_token",
  [sym_textbf] = "textbf",
  [sym_textbf_at] = "textbf_at",
  [sym_textbf_token] = "textbf_token",
  [sym_textit] = "textit",
  [sym_textit_at] = "textit_at",
  [sym_textit_token] = "textit_token",
  [sym_texttt] = "texttt",
  [sym_texttt_at] = "texttt_at",
  [sym_texttt_token] = "texttt_token",
  [sym_makeatletter] = "makeatletter",
  [sym_makeatletter_token] = "makeatletter_token",
  [sym_makeatother] = "makeatother",
  [sym_makeatother_token] = "makeatother_token",
  [sym_text_group] = "text_group",
  [sym_text_group_at] = "text_group_at",
  [sym_simple_text_group] = "simple_text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_opt_text_group_at] = "opt_text_group_at",
  [sym_math_group] = "math_group",
  [sym_math_group_at] = "math_group_at",
  [sym_opt_math_group] = "opt_math_group",
  [sym_opt_math_group_at] = "opt_math_group_at",
  [sym_math_text_group] = "math_text_group",
  [sym_math_text_group_at] = "math_text_group_at",
  [sym_token] = "token",
  [sym_token_at] = "token_at",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [sym__name] = "_name",
  [sym_text] = "text",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_text_mode_at_repeat1] = "text_mode_at_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_math_mode_at_repeat1] = "math_mode_at_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_verbatim_text_repeat2] = "verbatim_text_repeat2",
  [aux_sym__name_repeat1] = "_name_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [anon_alias_sym_class_name] = "class_name",
  [anon_alias_sym_env_name] = "env_name",
  [anon_alias_sym_package_name] = "package_name",
  [anon_alias_sym_text] = "text",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_verb_body] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_delim] = {
    .visible = true,
    .named = true,
  },
  [sym__control_symbol_body] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
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
  [sym_display_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_verbatim_env_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
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
  [anon_sym_emph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texttt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatother] = {
    .visible = true,
    .named = false,
  },
  [sym_double_circumflex] = {
    .visible = true,
    .named = true,
  },
  [sym_magic_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
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
  [sym__end_of_line] = {
    .visible = false,
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
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__name_at] = {
    .visible = false,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__common] = {
    .visible = false,
    .named = true,
  },
  [sym__text_mode_common] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_token] = {
    .visible = true,
    .named = true,
  },
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_text_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__text_mode_at] = {
    .visible = false,
    .named = true,
  },
  [sym_text_mode_at] = {
    .visible = true,
    .named = true,
  },
  [sym_text_mode_at_region] = {
    .visible = true,
    .named = true,
  },
  [sym__math_mode_common] = {
    .visible = false,
    .named = true,
  },
  [sym__math_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_math_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__math_mode_at] = {
    .visible = false,
    .named = true,
  },
  [sym_math_mode_at] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_text_env] = {
    .visible = true,
    .named = true,
  },
  [sym_text_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym__display_math] = {
    .visible = false,
    .named = true,
  },
  [sym__display_math_at] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_tex_display_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_begin_at] = {
    .visible = true,
    .named = false,
  },
  [sym_display_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_math] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_math_at] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_tex_inline_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math_at] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_at] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_at] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_token] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_env] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_end] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
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
  [sym_include_at] = {
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
  [sym_section_at] = {
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
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym_emph_at] = {
    .visible = true,
    .named = true,
  },
  [sym_emph_token] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote_at] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf_at] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textit] = {
    .visible = true,
    .named = true,
  },
  [sym_textit_at] = {
    .visible = true,
    .named = true,
  },
  [sym_textit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt_at] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatletter] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatletter_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text_group_at] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_token_at] = {
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
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_mode_at_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_at_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_text_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_class_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_env_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_package_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_text,
  },
  [2] = {
    [1] = anon_alias_sym_env_name,
  },
  [3] = {
    [1] = anon_alias_sym_class_name,
  },
  [4] = {
    [1] = anon_alias_sym_package_name,
  },
  [5] = {
    [2] = anon_alias_sym_class_name,
  },
  [6] = {
    [2] = anon_alias_sym_package_name,
  },
  [7] = {
    [3] = anon_alias_sym_class_name,
  },
  [8] = {
    [3] = anon_alias_sym_package_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(34);
      ADVANCE(35);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '!')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '!')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'T')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'X')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '!')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'c')
        ADVANCE(66);
      if (lookahead == 'd')
        ADVANCE(79);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(107);
      if (lookahead == 'k')
        ADVANCE(116);
      if (lookahead == 'm')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(133);
      if (lookahead == 's')
        ADVANCE(141);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'u')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(176);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == '^')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_double_circumflex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_double_circumflex);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'p')
        ADVANCE(56);
      if (lookahead == 's')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'h')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == '`')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == 'o')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == 'm')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(109);
      if (lookahead == 'p')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(119);
      if (lookahead == 'i')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(136);
      if (lookahead == 't')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'u')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(149);
      if (lookahead == 's')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'u')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'x')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 182:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(41);
      END_STATE();
    case 183:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      ADVANCE(41);
      END_STATE();
    case 184:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 185:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      ADVANCE(41);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 190:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(34);
      END_STATE();
    case 191:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(192);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if ((lookahead < 'A' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(47);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_double_circumflex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(47);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < 'A' || lookahead > '_') &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 196:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(107);
      if (lookahead == 'k')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 200:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(48);
      if (lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'c')
        ADVANCE(66);
      if (lookahead == 'd')
        ADVANCE(79);
      if (lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'i')
        ADVANCE(107);
      if (lookahead == 'k')
        ADVANCE(116);
      if (lookahead == 'm')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(133);
      if (lookahead == 's')
        ADVANCE(141);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == 'u')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(176);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == 'm')
        ADVANCE(96);
      if (lookahead == 'n')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 204:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 205:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(206);
      if (lookahead == '^')
        ADVANCE(215);
      if (lookahead == 'a')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'f')
        ADVANCE(260);
      if (lookahead == 'g')
        ADVANCE(265);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(294);
      if (lookahead == 'v')
        ADVANCE(297);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 215:
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead == 'a')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(231);
      if (lookahead == 'i')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'y')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'y')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'q')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(254);
      if (lookahead == 'u')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead == 'i')
        ADVANCE(283);
      if (lookahead == 'u')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'V')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 305:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(34);
      END_STATE();
    case 306:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 307:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(321);
      if (lookahead == 'c')
        ADVANCE(326);
      if (lookahead == 'd')
        ADVANCE(338);
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'f')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'k')
        ADVANCE(375);
      if (lookahead == 'm')
        ADVANCE(377);
      if (lookahead == 'p')
        ADVANCE(391);
      if (lookahead == 's')
        ADVANCE(399);
      if (lookahead == 't')
        ADVANCE(414);
      if (lookahead == 'u')
        ADVANCE(424);
      if (lookahead == 'v')
        ADVANCE(434);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 'h')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(73);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(339);
      if (lookahead == 'o')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(354);
      if (lookahead == 'm')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(378);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(400);
      if (lookahead == 'u')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(407);
      if (lookahead == 's')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(400);
      if (lookahead == 'u')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(418);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 't')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(437);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(180);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 439:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(192);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < 'A' || lookahead > '_'))
        ADVANCE(41);
      END_STATE();
    case 440:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(61);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == 'e')
        ADVANCE(441);
      if (lookahead == 'i')
        ADVANCE(107);
      if (lookahead == 'k')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 443:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(321);
      if (lookahead == 'c')
        ADVANCE(326);
      if (lookahead == 'd')
        ADVANCE(338);
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'f')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'k')
        ADVANCE(375);
      if (lookahead == 'm')
        ADVANCE(444);
      if (lookahead == 'p')
        ADVANCE(391);
      if (lookahead == 's')
        ADVANCE(399);
      if (lookahead == 't')
        ADVANCE(414);
      if (lookahead == 'u')
        ADVANCE(424);
      if (lookahead == 'v')
        ADVANCE(434);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 445:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(321);
      if (lookahead == 'c')
        ADVANCE(376);
      if (lookahead == 'd')
        ADVANCE(354);
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'k')
        ADVANCE(375);
      if (lookahead == 't')
        ADVANCE(446);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(447);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(448);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 449:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'a')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'k')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'a')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'o')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 't')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'h')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'r')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 461:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(321);
      if (lookahead == 'c')
        ADVANCE(326);
      if (lookahead == 'd')
        ADVANCE(338);
      if (lookahead == 'e')
        ADVANCE(462);
      if (lookahead == 'f')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'k')
        ADVANCE(375);
      if (lookahead == 'm')
        ADVANCE(444);
      if (lookahead == 'p')
        ADVANCE(391);
      if (lookahead == 's')
        ADVANCE(399);
      if (lookahead == 't')
        ADVANCE(414);
      if (lookahead == 'u')
        ADVANCE(424);
      if (lookahead == 'v')
        ADVANCE(434);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(354);
      if (lookahead == 'm')
        ADVANCE(355);
      if (lookahead == 'n')
        ADVANCE(463);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(464);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 465:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(192);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 466:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(321);
      if (lookahead == 'c')
        ADVANCE(376);
      if (lookahead == 'd')
        ADVANCE(354);
      if (lookahead == 'e')
        ADVANCE(467);
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'k')
        ADVANCE(375);
      if (lookahead == 't')
        ADVANCE(446);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(354);
      if (lookahead == 'n')
        ADVANCE(463);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(315);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 43, .external_lex_state = 2},
  [4] = {.lex_state = 182},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 183},
  [7] = {.lex_state = 184},
  [8] = {.lex_state = 36, .external_lex_state = 3},
  [9] = {.lex_state = 184},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 185},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 183},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 186},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 183},
  [35] = {.lex_state = 36, .external_lex_state = 3},
  [36] = {.lex_state = 188},
  [37] = {.lex_state = 188},
  [38] = {.lex_state = 190},
  [39] = {.lex_state = 190},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 190},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 188},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 190},
  [46] = {.lex_state = 190},
  [47] = {.lex_state = 190},
  [48] = {.lex_state = 190},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 188},
  [51] = {.lex_state = 188},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 43, .external_lex_state = 2},
  [54] = {.lex_state = 183},
  [55] = {.lex_state = 182},
  [56] = {.lex_state = 182},
  [57] = {.lex_state = 196, .external_lex_state = 2},
  [58] = {.lex_state = 182},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 184, .external_lex_state = 4},
  [68] = {.lex_state = 196, .external_lex_state = 2},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 200},
  [76] = {.lex_state = 183},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 204},
  [80] = {.lex_state = 185},
  [81] = {.lex_state = 200, .external_lex_state = 2},
  [82] = {.lex_state = 183},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 205},
  [86] = {.lex_state = 305},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 305},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 183},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 183},
  [95] = {.lex_state = 190},
  [96] = {.lex_state = 183},
  [97] = {.lex_state = 183},
  [98] = {.lex_state = 190},
  [99] = {.lex_state = 184, .external_lex_state = 2},
  [100] = {.lex_state = 306},
  [101] = {.lex_state = 183},
  [102] = {.lex_state = 183},
  [103] = {.lex_state = 190},
  [104] = {.lex_state = 183},
  [105] = {.lex_state = 183},
  [106] = {.lex_state = 183},
  [107] = {.lex_state = 307, .external_lex_state = 2},
  [108] = {.lex_state = 182},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 183},
  [125] = {.lex_state = 183},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 183},
  [129] = {.lex_state = 43, .external_lex_state = 2},
  [130] = {.lex_state = 183},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 183},
  [135] = {.lex_state = 186},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 190},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 183},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 183},
  [153] = {.lex_state = 191},
  [154] = {.lex_state = 439},
  [155] = {.lex_state = 183},
  [156] = {.lex_state = 182},
  [157] = {.lex_state = 182},
  [158] = {.lex_state = 190},
  [159] = {.lex_state = 191},
  [160] = {.lex_state = 196, .external_lex_state = 2},
  [161] = {.lex_state = 183},
  [162] = {.lex_state = 182},
  [163] = {.lex_state = 182},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 183},
  [166] = {.lex_state = 182},
  [167] = {.lex_state = 183},
  [168] = {.lex_state = 440, .external_lex_state = 2},
  [169] = {.lex_state = 183},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 196, .external_lex_state = 2},
  [172] = {.lex_state = 183},
  [173] = {.lex_state = 42},
  [174] = {.lex_state = 42},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 36, .external_lex_state = 3},
  [178] = {.lex_state = 191},
  [179] = {.lex_state = 42},
  [180] = {.lex_state = 183},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 442},
  [184] = {.lex_state = 183},
  [185] = {.lex_state = 183},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 183},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 190},
  [190] = {.lex_state = 183},
  [191] = {.lex_state = 205},
  [192] = {.lex_state = 183},
  [193] = {.lex_state = 185},
  [194] = {.lex_state = 204},
  [195] = {.lex_state = 185},
  [196] = {.lex_state = 183},
  [197] = {.lex_state = 183},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 182},
  [200] = {.lex_state = 182},
  [201] = {.lex_state = 182},
  [202] = {.lex_state = 182},
  [203] = {.lex_state = 182},
  [204] = {.lex_state = 182},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 305},
  [207] = {.lex_state = 305},
  [208] = {.lex_state = 185},
  [209] = {.lex_state = 305},
  [210] = {.lex_state = 305},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 183},
  [213] = {.lex_state = 305},
  [214] = {.lex_state = 305},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 183},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 183},
  [220] = {.lex_state = 306},
  [221] = {.lex_state = 186},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 183},
  [224] = {.lex_state = 188},
  [225] = {.lex_state = 188},
  [226] = {.lex_state = 443, .external_lex_state = 2},
  [227] = {.lex_state = 183},
  [228] = {.lex_state = 182},
  [229] = {.lex_state = 445, .external_lex_state = 2},
  [230] = {.lex_state = 182},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 42},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 449},
  [238] = {.lex_state = 183},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 461, .external_lex_state = 2},
  [245] = {.lex_state = 183},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 305},
  [248] = {.lex_state = 183},
  [249] = {.lex_state = 183},
  [250] = {.lex_state = 190},
  [251] = {.lex_state = 42},
  [252] = {.lex_state = 183},
  [253] = {.lex_state = 183},
  [254] = {.lex_state = 190},
  [255] = {.lex_state = 183},
  [256] = {.lex_state = 183},
  [257] = {.lex_state = 183},
  [258] = {.lex_state = 183},
  [259] = {.lex_state = 42},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 465},
  [262] = {.lex_state = 183},
  [263] = {.lex_state = 42},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 190},
  [267] = {.lex_state = 439},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 191},
  [270] = {.lex_state = 439},
  [271] = {.lex_state = 183},
  [272] = {.lex_state = 182},
  [273] = {.lex_state = 182},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 183},
  [276] = {.lex_state = 182},
  [277] = {.lex_state = 182},
  [278] = {.lex_state = 183},
  [279] = {.lex_state = 465},
  [280] = {.lex_state = 183},
  [281] = {.lex_state = 42},
  [282] = {.lex_state = 42},
  [283] = {.lex_state = 183},
  [284] = {.lex_state = 191},
  [285] = {.lex_state = 188},
  [286] = {.lex_state = 188},
  [287] = {.lex_state = 205},
  [288] = {.lex_state = 183},
  [289] = {.lex_state = 205},
  [290] = {.lex_state = 183},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 182},
  [293] = {.lex_state = 43, .external_lex_state = 2},
  [294] = {.lex_state = 305},
  [295] = {.lex_state = 183},
  [296] = {.lex_state = 305},
  [297] = {.lex_state = 183},
  [298] = {.lex_state = 182},
  [299] = {.lex_state = 305},
  [300] = {.lex_state = 182},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 305},
  [303] = {.lex_state = 305},
  [304] = {.lex_state = 185},
  [305] = {.lex_state = 305},
  [306] = {.lex_state = 305},
  [307] = {.lex_state = 183},
  [308] = {.lex_state = 305},
  [309] = {.lex_state = 183},
  [310] = {.lex_state = 183},
  [311] = {.lex_state = 183},
  [312] = {.lex_state = 183},
  [313] = {.lex_state = 183},
  [314] = {.lex_state = 183},
  [315] = {.lex_state = 183},
  [316] = {.lex_state = 182},
  [317] = {.lex_state = 183},
  [318] = {.lex_state = 182},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 183},
  [321] = {.lex_state = 182},
  [322] = {.lex_state = 183},
  [323] = {.lex_state = 466, .external_lex_state = 2},
  [324] = {.lex_state = 183},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 183},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 183},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 183},
  [332] = {.lex_state = 183},
  [333] = {.lex_state = 183},
  [334] = {.lex_state = 183},
  [335] = {.lex_state = 182},
  [336] = {.lex_state = 36},
  [337] = {.lex_state = 305},
  [338] = {.lex_state = 305},
  [339] = {.lex_state = 36},
  [340] = {.lex_state = 183},
  [341] = {.lex_state = 305},
  [342] = {.lex_state = 42},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 183},
  [345] = {.lex_state = 183},
  [346] = {.lex_state = 42},
  [347] = {.lex_state = 465},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 439},
  [350] = {.lex_state = 183},
  [351] = {.lex_state = 183},
  [352] = {.lex_state = 465},
  [353] = {.lex_state = 183},
  [354] = {.lex_state = 183},
  [355] = {.lex_state = 182},
  [356] = {.lex_state = 183},
  [357] = {.lex_state = 305},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 305},
  [360] = {.lex_state = 185},
  [361] = {.lex_state = 305},
  [362] = {.lex_state = 183},
  [363] = {.lex_state = 182},
  [364] = {.lex_state = 36},
  [365] = {.lex_state = 183},
  [366] = {.lex_state = 182},
  [367] = {.lex_state = 182},
  [368] = {.lex_state = 183},
  [369] = {.lex_state = 183},
  [370] = {.lex_state = 42},
  [371] = {.lex_state = 305},
  [372] = {.lex_state = 182},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 305},
  [375] = {.lex_state = 305},
  [376] = {.lex_state = 183},
  [377] = {.lex_state = 305},
  [378] = {.lex_state = 183},
  [379] = {.lex_state = 183},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 185},
  [382] = {.lex_state = 183},
  [383] = {.lex_state = 183},
  [384] = {.lex_state = 305},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 305},
  [387] = {.lex_state = 36},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
  ts_external_token__control_symbol_body,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
  [ts_external_token__control_symbol_body] = sym__control_symbol_body,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
    [ts_external_token__control_symbol_body] = true,
  },
  [2] = {
    [ts_external_token__control_symbol_body] = true,
  },
  [3] = {
    [ts_external_token_verb_delim] = true,
  },
  [4] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [sym__control_symbol_body] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_magic_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(7),
    [sym__common] = STATE(31),
    [sym__text_mode_common] = STATE(31),
    [sym_inline_verbatim] = STATE(31),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(31),
    [sym_text_mode] = STATE(9),
    [sym_text_mode_at_region] = STATE(31),
    [sym_parameter] = STATE(31),
    [sym_text_env] = STATE(31),
    [sym__display_math] = STATE(31),
    [sym_tex_display_math] = STATE(31),
    [sym_latex_display_math] = STATE(31),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(31),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(31),
    [sym_tex_inline_math] = STATE(31),
    [sym_latex_inline_math] = STATE(31),
    [sym_inline_math_env] = STATE(31),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(31),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(31),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(31),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(31),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(31),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(31),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(31),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(31),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(31),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(31),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(31),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(31),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(31),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(31),
    [sym_opt_text_group] = STATE(31),
    [sym_token] = STATE(31),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(31),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(19),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(27),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(29),
    [sym_math_shift] = ACTIONS(29),
    [sym_alignment_tab] = ACTIONS(29),
    [sym_parameter_char] = ACTIONS(29),
    [sym_superscript] = ACTIONS(31),
    [sym_subscript] = ACTIONS(29),
    [sym_active_char] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(29),
  },
  [3] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(52),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatletter] = ACTIONS(65),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(69),
  },
  [4] = {
    [sym__common] = STATE(55),
    [sym__text_mode_common] = STATE(55),
    [sym_inline_verbatim] = STATE(55),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(55),
    [sym_text_mode_at_region] = STATE(55),
    [sym_parameter] = STATE(55),
    [sym_text_env] = STATE(55),
    [sym__display_math] = STATE(55),
    [sym_tex_display_math] = STATE(55),
    [sym_latex_display_math] = STATE(55),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(55),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(55),
    [sym_tex_inline_math] = STATE(55),
    [sym_latex_inline_math] = STATE(55),
    [sym_inline_math_env] = STATE(55),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(55),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(55),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(55),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(55),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(55),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(55),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(55),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(55),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(55),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(55),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(55),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(55),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(55),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(55),
    [sym_opt_text_group] = STATE(55),
    [sym_token] = STATE(55),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(55),
    [aux_sym_text_mode_repeat1] = STATE(55),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [5] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(60),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(65),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(91),
    [sym_end_group] = ACTIONS(91),
    [sym_math_shift] = ACTIONS(91),
    [sym_alignment_tab] = ACTIONS(91),
    [sym_parameter_char] = ACTIONS(91),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(91),
    [sym_active_char] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(91),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(70),
    [sym__math_mode_common] = STATE(70),
    [sym__math_mode] = STATE(70),
    [sym_math_mode] = STATE(69),
    [sym_parameter] = STATE(70),
    [sym_math_env] = STATE(70),
    [sym_tag] = STATE(70),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(70),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(70),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(70),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(70),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(70),
    [sym_opt_math_group] = STATE(70),
    [sym_token] = STATE(70),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(70),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [11] = {
    [sym__common] = STATE(70),
    [sym__math_mode_common] = STATE(70),
    [sym__math_mode] = STATE(70),
    [sym_math_mode] = STATE(72),
    [sym_parameter] = STATE(70),
    [sym_math_env] = STATE(70),
    [sym_tag] = STATE(70),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(70),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(70),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(70),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(70),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(70),
    [sym_opt_math_group] = STATE(70),
    [sym_token] = STATE(70),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(70),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [12] = {
    [sym__common] = STATE(70),
    [sym__math_mode_common] = STATE(70),
    [sym__math_mode] = STATE(70),
    [sym_math_mode] = STATE(73),
    [sym_parameter] = STATE(70),
    [sym_math_env] = STATE(70),
    [sym_tag] = STATE(70),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(70),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(70),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(70),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(70),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(70),
    [sym_opt_math_group] = STATE(70),
    [sym_token] = STATE(70),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(70),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [13] = {
    [sym__common] = STATE(70),
    [sym__math_mode_common] = STATE(70),
    [sym__math_mode] = STATE(70),
    [sym_math_mode] = STATE(74),
    [sym_parameter] = STATE(70),
    [sym_math_env] = STATE(70),
    [sym_tag] = STATE(70),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(70),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(70),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(70),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(70),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(70),
    [sym_opt_math_group] = STATE(70),
    [sym_token] = STATE(70),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(70),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [14] = {
    [sym_verbatim_end] = STATE(76),
    [sym_verbatim_text] = STATE(77),
    [sym_end_token] = STATE(78),
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(80),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
    [sym__end_of_line] = ACTIONS(113),
  },
  [15] = {
    [sym__common] = STATE(84),
    [sym__text_mode_common] = STATE(84),
    [sym_inline_verbatim] = STATE(84),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(84),
    [sym_text_mode_at_region] = STATE(84),
    [sym_parameter] = STATE(84),
    [sym_text_env] = STATE(84),
    [sym__display_math] = STATE(84),
    [sym_tex_display_math] = STATE(84),
    [sym_latex_display_math] = STATE(84),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(84),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(84),
    [sym_tex_inline_math] = STATE(84),
    [sym_latex_inline_math] = STATE(84),
    [sym_inline_math_env] = STATE(84),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(84),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(84),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(82),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(84),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(84),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(84),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(84),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(84),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(84),
    [sym_opt_text_group] = STATE(84),
    [sym_token] = STATE(84),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(84),
    [aux_sym_text_mode_repeat1] = STATE(84),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(86),
    [sym_inline_math_env_group] = STATE(87),
    [sym_verbatim_env_group] = STATE(88),
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(119),
  },
  [17] = {
    [sym_simple_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(92),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [18] = {
    [sym_simple_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(95),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [19] = {
    [sym_text_group] = STATE(96),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(97),
    [sym_opt_text_group] = STATE(98),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
    [sym_end_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(123),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(123),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(123),
  },
  [22] = {
    [sym_escaped] = STATE(100),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(127),
  },
  [23] = {
    [sym_text_group] = STATE(101),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(102),
    [sym_opt_text_group] = STATE(103),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(104),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(105),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(106),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [28] = {
    [sym__common] = STATE(127),
    [sym__text_mode_common] = STATE(127),
    [sym_inline_verbatim] = STATE(127),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(127),
    [sym_text_mode_at] = STATE(110),
    [sym_parameter] = STATE(127),
    [sym_text_env_at] = STATE(127),
    [sym__display_math_at] = STATE(127),
    [sym_tex_display_math_at] = STATE(127),
    [sym_latex_display_math_at] = STATE(127),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(127),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(127),
    [sym_tex_inline_math_at] = STATE(127),
    [sym_latex_inline_math_at] = STATE(127),
    [sym_inline_math_env_at] = STATE(127),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(127),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(127),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(127),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(127),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(127),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(127),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(127),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(127),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(127),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(127),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(127),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(127),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(127),
    [sym_texttt_token] = STATE(123),
    [sym_makeatother] = STATE(124),
    [sym_makeatother_token] = STATE(125),
    [sym_text_group_at] = STATE(127),
    [sym_opt_text_group_at] = STATE(127),
    [sym_token_at] = STATE(127),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(127),
    [aux_sym_text_mode_at_repeat1] = STATE(127),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(135),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(137),
  },
  [30] = {
    [sym__common] = STATE(131),
    [sym__text_mode_common] = STATE(131),
    [sym_inline_verbatim] = STATE(131),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(131),
    [sym_text_mode_at_region] = STATE(131),
    [sym_parameter] = STATE(131),
    [sym_text_env] = STATE(131),
    [sym__display_math] = STATE(131),
    [sym_tex_display_math] = STATE(131),
    [sym_latex_display_math] = STATE(131),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(131),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(131),
    [sym_tex_inline_math] = STATE(131),
    [sym_latex_inline_math] = STATE(131),
    [sym_inline_math_env] = STATE(131),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(131),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(131),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(131),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(131),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(131),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(131),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(131),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(131),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(131),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(131),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(131),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(131),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(131),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(131),
    [sym_opt_text_group] = STATE(131),
    [sym_token] = STATE(131),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(130),
    [sym_text] = STATE(131),
    [aux_sym_text_mode_repeat1] = STATE(131),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [31] = {
    [sym__common] = STATE(133),
    [sym__text_mode_common] = STATE(133),
    [sym_inline_verbatim] = STATE(133),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(133),
    [sym_text_mode_at_region] = STATE(133),
    [sym_parameter] = STATE(133),
    [sym_text_env] = STATE(133),
    [sym__display_math] = STATE(133),
    [sym_tex_display_math] = STATE(133),
    [sym_latex_display_math] = STATE(133),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(133),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(133),
    [sym_tex_inline_math] = STATE(133),
    [sym_latex_inline_math] = STATE(133),
    [sym_inline_math_env] = STATE(133),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(133),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(133),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(133),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(133),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(133),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(133),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(133),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(133),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(133),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(133),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(133),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(133),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(133),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(133),
    [sym_token] = STATE(133),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(133),
    [aux_sym_text_mode_repeat1] = STATE(133),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(27),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
  },
  [33] = {
    [aux_sym_text_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(161),
  },
  [35] = {
    [sym_verb_delim] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [36] = {
    [sym__whitespace] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(169),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(175),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(181),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(185),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(189),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(193),
  },
  [42] = {
    [sym__whitespace] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(197),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym__whitespace] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(201),
    [sym_end_group] = ACTIONS(201),
    [sym_math_shift] = ACTIONS(201),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(201),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(201),
    [sym_active_char] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(201),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(207),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(215),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(223),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(227),
  },
  [50] = {
    [sym__whitespace] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(231),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym__whitespace] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(235),
    [sym_begin_group] = ACTIONS(235),
    [sym_end_group] = ACTIONS(235),
    [sym_math_shift] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(235),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(235),
  },
  [52] = {
    [aux_sym__name_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(247),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [53] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(154),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatletter] = ACTIONS(65),
    [sym_double_circumflex] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(251),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(253),
    [sym_end_group] = ACTIONS(253),
    [sym_math_shift] = ACTIONS(253),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(253),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(253),
    [sym_active_char] = ACTIONS(253),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(253),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(253),
  },
  [55] = {
    [sym__common] = STATE(156),
    [sym__text_mode_common] = STATE(156),
    [sym_inline_verbatim] = STATE(156),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(156),
    [sym_text_mode_at_region] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_text_env] = STATE(156),
    [sym__display_math] = STATE(156),
    [sym_tex_display_math] = STATE(156),
    [sym_latex_display_math] = STATE(156),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(156),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(156),
    [sym_tex_inline_math] = STATE(156),
    [sym_latex_inline_math] = STATE(156),
    [sym_inline_math_env] = STATE(156),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(156),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(156),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(156),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(156),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(156),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(156),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(156),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(156),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(156),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(156),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(156),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(156),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(156),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(156),
    [sym_opt_text_group] = STATE(156),
    [sym_token] = STATE(156),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(156),
    [aux_sym_text_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [56] = {
    [aux_sym_text_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [57] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(159),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(265),
  },
  [58] = {
    [sym__common] = STATE(162),
    [sym__math_mode_common] = STATE(162),
    [sym__math_mode] = STATE(162),
    [sym_parameter] = STATE(162),
    [sym_math_env] = STATE(162),
    [sym_tag] = STATE(162),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(162),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(162),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(162),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(162),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(162),
    [sym_opt_math_group] = STATE(162),
    [sym_token] = STATE(162),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(162),
    [aux_sym_math_mode_repeat1] = STATE(162),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(81),
    [sym_end_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(275),
  },
  [59] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(164),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(65),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [60] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(277),
  },
  [61] = {
    [sym_math_text_group] = STATE(167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(279),
  },
  [62] = {
    [sym__common] = STATE(170),
    [sym__math_mode_common] = STATE(170),
    [sym__math_mode] = STATE(170),
    [sym_parameter] = STATE(170),
    [sym_math_env] = STATE(170),
    [sym_tag] = STATE(170),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(170),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(169),
    [sym_end_token] = STATE(83),
    [sym_include] = STATE(170),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(170),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(170),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(170),
    [sym_opt_math_group] = STATE(170),
    [sym_token] = STATE(170),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(170),
    [aux_sym_math_mode_repeat1] = STATE(170),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(281),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(283),
    [sym_active_char] = ACTIONS(283),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [63] = {
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [64] = {
    [sym__common] = STATE(173),
    [sym__math_mode_common] = STATE(173),
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_env] = STATE(173),
    [sym_tag] = STATE(173),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(173),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(173),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(173),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(172),
    [sym_text] = STATE(173),
    [aux_sym_math_mode_repeat1] = STATE(173),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(293),
  },
  [65] = {
    [sym__common] = STATE(175),
    [sym__math_mode_common] = STATE(175),
    [sym__math_mode] = STATE(175),
    [sym_parameter] = STATE(175),
    [sym_math_env] = STATE(175),
    [sym_tag] = STATE(175),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(175),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(175),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(175),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(175),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(175),
    [sym_opt_math_group] = STATE(175),
    [sym_token] = STATE(175),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(175),
    [aux_sym_math_mode_repeat1] = STATE(175),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(295),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(299),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [66] = {
    [aux_sym_text_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [67] = {
    [sym_verb_body] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [68] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(178),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(305),
  },
  [69] = {
    [sym_end_display_math] = STATE(180),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
  },
  [70] = {
    [sym__common] = STATE(181),
    [sym__math_mode_common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(181),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(181),
    [sym_opt_math_group] = STATE(181),
    [sym_token] = STATE(181),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(295),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [71] = {
    [aux_sym_text_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [72] = {
    [sym_end_inline_math] = STATE(184),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
  },
  [73] = {
    [sym_display_math_end] = STATE(185),
    [sym_end_token] = STATE(186),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
  },
  [74] = {
    [sym_inline_math_end] = STATE(187),
    [sym_end_token] = STATE(188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
  },
  [75] = {
    [anon_sym_end] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(317),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(317),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(317),
    [sym_active_char] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(317),
  },
  [77] = {
    [sym_verbatim_end] = STATE(190),
    [sym_end_token] = STATE(78),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
  },
  [78] = {
    [sym_verbatim_env_group] = STATE(192),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(321),
  },
  [79] = {
    [aux_sym_verbatim_text_repeat1] = STATE(194),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(325),
  },
  [80] = {
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(195),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym__end_of_line] = ACTIONS(329),
  },
  [81] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(159),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(331),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatletter] = ACTIONS(65),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(265),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(333),
    [sym_end_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(333),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(333),
    [sym_superscript] = ACTIONS(335),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(333),
  },
  [83] = {
    [sym_simple_text_group] = STATE(196),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [84] = {
    [sym__common] = STATE(198),
    [sym__text_mode_common] = STATE(198),
    [sym_inline_verbatim] = STATE(198),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(198),
    [sym_text_mode_at_region] = STATE(198),
    [sym_parameter] = STATE(198),
    [sym_text_env] = STATE(198),
    [sym__display_math] = STATE(198),
    [sym_tex_display_math] = STATE(198),
    [sym_latex_display_math] = STATE(198),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(198),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(198),
    [sym_tex_inline_math] = STATE(198),
    [sym_latex_inline_math] = STATE(198),
    [sym_inline_math_env] = STATE(198),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(198),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(198),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(197),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(198),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(198),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(198),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(198),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(198),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(198),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(198),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(198),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(198),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(198),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(198),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(198),
    [sym_opt_text_group] = STATE(198),
    [sym_token] = STATE(198),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(198),
    [aux_sym_text_mode_repeat1] = STATE(198),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [85] = {
    [sym_text] = STATE(202),
    [aux_sym_text_repeat1] = STATE(203),
    [sym_display_math_env_name] = ACTIONS(339),
    [sym_inline_math_env_name] = ACTIONS(341),
    [sym_verbatim_env_name] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(347),
  },
  [86] = {
    [sym_text_group] = STATE(206),
    [sym_opt_text_group] = STATE(207),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(351),
  },
  [87] = {
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(353),
    [sym_begin_group] = ACTIONS(353),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(353),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(353),
    [sym_active_char] = ACTIONS(353),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(353),
  },
  [88] = {
    [sym_text_group] = STATE(209),
    [sym_opt_text_group] = STATE(210),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(357),
  },
  [89] = {
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(359),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(359),
  },
  [90] = {
    [sym_text] = STATE(202),
    [aux_sym_text_repeat1] = STATE(203),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(347),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(363),
  },
  [92] = {
    [sym_simple_text_group] = STATE(212),
    [sym__whitespace] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [93] = {
    [sym__common] = STATE(215),
    [sym__text_mode_common] = STATE(215),
    [sym_inline_verbatim] = STATE(215),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(215),
    [sym_text_mode_at_region] = STATE(215),
    [sym_parameter] = STATE(215),
    [sym_text_env] = STATE(215),
    [sym__display_math] = STATE(215),
    [sym_tex_display_math] = STATE(215),
    [sym_latex_display_math] = STATE(215),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(215),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(215),
    [sym_tex_inline_math] = STATE(215),
    [sym_latex_inline_math] = STATE(215),
    [sym_inline_math_env] = STATE(215),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(215),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(215),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(215),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(215),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(215),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(215),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(215),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(215),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(215),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(215),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(215),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(215),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(215),
    [sym_opt_text_group] = STATE(215),
    [sym_token] = STATE(215),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(214),
    [sym_text] = STATE(215),
    [aux_sym_text_mode_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_end_group] = ACTIONS(373),
    [sym_math_shift] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(373),
  },
  [95] = {
    [sym_simple_text_group] = STATE(217),
    [sym__whitespace] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(379),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_end_group] = ACTIONS(383),
    [sym_math_shift] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(385),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(383),
  },
  [98] = {
    [sym_text_group] = STATE(219),
    [sym__whitespace] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [99] = {
    [sym__control_symbol_body] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(393),
    [sym_begin_group] = ACTIONS(393),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(393),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(393),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(393),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_end_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(397),
    [sym_active_char] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(397),
  },
  [103] = {
    [sym_text_group] = STATE(223),
    [sym__whitespace] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(403),
    [sym_begin_group] = ACTIONS(403),
    [sym_end_group] = ACTIONS(403),
    [sym_math_shift] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(403),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(403),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(407),
    [sym_end_group] = ACTIONS(407),
    [sym_math_shift] = ACTIONS(407),
    [sym_alignment_tab] = ACTIONS(407),
    [sym_parameter_char] = ACTIONS(407),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(407),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(411),
    [sym_end_group] = ACTIONS(411),
    [sym_math_shift] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(411),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(411),
  },
  [107] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatother] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(417),
  },
  [108] = {
    [sym__common] = STATE(228),
    [sym__text_mode_common] = STATE(228),
    [sym_inline_verbatim] = STATE(228),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(228),
    [sym_parameter] = STATE(228),
    [sym_text_env_at] = STATE(228),
    [sym__display_math_at] = STATE(228),
    [sym_tex_display_math_at] = STATE(228),
    [sym_latex_display_math_at] = STATE(228),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(228),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(228),
    [sym_tex_inline_math_at] = STATE(228),
    [sym_latex_inline_math_at] = STATE(228),
    [sym_inline_math_env_at] = STATE(228),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(228),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(228),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(228),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(228),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(228),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(228),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(228),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(228),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(228),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(228),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(228),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(228),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(228),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(228),
    [sym_opt_text_group_at] = STATE(228),
    [sym_token_at] = STATE(228),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(228),
    [aux_sym_text_mode_at_repeat1] = STATE(228),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(421),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(423),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(423),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [109] = {
    [sym__common] = STATE(236),
    [sym__math_mode_common] = STATE(236),
    [sym__math_mode_at] = STATE(236),
    [sym_math_mode_at] = STATE(232),
    [sym_parameter] = STATE(236),
    [sym_math_env_at] = STATE(236),
    [sym_tag_at] = STATE(236),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(236),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(236),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(236),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(236),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(236),
    [sym_opt_math_group_at] = STATE(236),
    [sym_token_at] = STATE(236),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(236),
    [aux_sym_math_mode_at_repeat1] = STATE(236),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(429),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [110] = {
    [sym_makeatother] = STATE(238),
    [sym_makeatother_token] = STATE(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
  },
  [111] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode_at] = STATE(240),
    [sym_math_mode_at] = STATE(239),
    [sym_parameter] = STATE(240),
    [sym_math_env_at] = STATE(240),
    [sym_tag_at] = STATE(240),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(240),
    [sym_opt_math_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(240),
    [aux_sym_math_mode_at_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [112] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode_at] = STATE(240),
    [sym_math_mode_at] = STATE(241),
    [sym_parameter] = STATE(240),
    [sym_math_env_at] = STATE(240),
    [sym_tag_at] = STATE(240),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(240),
    [sym_opt_math_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(240),
    [aux_sym_math_mode_at_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [113] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode_at] = STATE(240),
    [sym_math_mode_at] = STATE(242),
    [sym_parameter] = STATE(240),
    [sym_math_env_at] = STATE(240),
    [sym_tag_at] = STATE(240),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(240),
    [sym_opt_math_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(240),
    [aux_sym_math_mode_at_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [114] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode_at] = STATE(240),
    [sym_math_mode_at] = STATE(243),
    [sym_parameter] = STATE(240),
    [sym_math_env_at] = STATE(240),
    [sym_tag_at] = STATE(240),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(240),
    [sym_opt_math_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(240),
    [aux_sym_math_mode_at_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [115] = {
    [sym__common] = STATE(246),
    [sym__text_mode_common] = STATE(246),
    [sym_inline_verbatim] = STATE(246),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_text_env_at] = STATE(246),
    [sym__display_math_at] = STATE(246),
    [sym_tex_display_math_at] = STATE(246),
    [sym_latex_display_math_at] = STATE(246),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(246),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(246),
    [sym_tex_inline_math_at] = STATE(246),
    [sym_latex_inline_math_at] = STATE(246),
    [sym_inline_math_env_at] = STATE(246),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(246),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_end] = STATE(245),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(246),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(246),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(246),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(246),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(246),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(246),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(246),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(246),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(246),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(246),
    [sym_opt_text_group_at] = STATE(246),
    [sym_token_at] = STATE(246),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(246),
    [aux_sym_text_mode_at_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(443),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [116] = {
    [sym_display_math_env_group] = STATE(247),
    [sym_inline_math_env_group] = STATE(87),
    [sym_verbatim_env_group] = STATE(88),
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(119),
  },
  [117] = {
    [sym_text_group_at] = STATE(248),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [118] = {
    [sym_text_group_at] = STATE(249),
    [sym_opt_text_group_at] = STATE(250),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [119] = {
    [sym_text_group_at] = STATE(252),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [120] = {
    [sym_text_group_at] = STATE(253),
    [sym_opt_text_group_at] = STATE(254),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [121] = {
    [sym_text_group_at] = STATE(255),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [122] = {
    [sym_text_group_at] = STATE(256),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [123] = {
    [sym_text_group_at] = STATE(257),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_end_group] = ACTIONS(445),
    [sym_math_shift] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(445),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(449),
    [sym_end_group] = ACTIONS(449),
    [sym_math_shift] = ACTIONS(449),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(449),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(449),
  },
  [126] = {
    [sym__common] = STATE(259),
    [sym__text_mode_common] = STATE(259),
    [sym_inline_verbatim] = STATE(259),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(259),
    [sym_parameter] = STATE(259),
    [sym_text_env_at] = STATE(259),
    [sym__display_math_at] = STATE(259),
    [sym_tex_display_math_at] = STATE(259),
    [sym_latex_display_math_at] = STATE(259),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(259),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(259),
    [sym_tex_inline_math_at] = STATE(259),
    [sym_latex_inline_math_at] = STATE(259),
    [sym_inline_math_env_at] = STATE(259),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(259),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(259),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(259),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(259),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(259),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(259),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(259),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(259),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(259),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(259),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(259),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(259),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(259),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(259),
    [sym_opt_text_group_at] = STATE(259),
    [sym_token_at] = STATE(259),
    [sym_begin_opt] = STATE(126),
    [sym_end_opt] = STATE(258),
    [sym_text] = STATE(259),
    [aux_sym_text_mode_at_repeat1] = STATE(259),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(453),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [127] = {
    [sym__common] = STATE(260),
    [sym__text_mode_common] = STATE(260),
    [sym_inline_verbatim] = STATE(260),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_text_env_at] = STATE(260),
    [sym__display_math_at] = STATE(260),
    [sym_tex_display_math_at] = STATE(260),
    [sym_latex_display_math_at] = STATE(260),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(260),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(260),
    [sym_tex_inline_math_at] = STATE(260),
    [sym_latex_inline_math_at] = STATE(260),
    [sym_inline_math_env_at] = STATE(260),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(260),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(260),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(260),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(260),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(260),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(260),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(260),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(260),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(260),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(260),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(260),
    [sym_opt_text_group_at] = STATE(260),
    [sym_token_at] = STATE(260),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(260),
    [aux_sym_text_mode_at_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(457),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(459),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(459),
    [sym_end_group] = ACTIONS(459),
    [sym_math_shift] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(459),
    [sym_parameter_char] = ACTIONS(459),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(459),
    [sym_active_char] = ACTIONS(459),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(459),
  },
  [129] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(261),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatletter] = ACTIONS(65),
    [sym_double_circumflex] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(465),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(467),
    [sym_begin_group] = ACTIONS(467),
    [sym_end_group] = ACTIONS(467),
    [sym_math_shift] = ACTIONS(467),
    [sym_alignment_tab] = ACTIONS(467),
    [sym_parameter_char] = ACTIONS(467),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(467),
  },
  [131] = {
    [sym__common] = STATE(263),
    [sym__text_mode_common] = STATE(263),
    [sym_inline_verbatim] = STATE(263),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(263),
    [sym_text_mode_at_region] = STATE(263),
    [sym_parameter] = STATE(263),
    [sym_text_env] = STATE(263),
    [sym__display_math] = STATE(263),
    [sym_tex_display_math] = STATE(263),
    [sym_latex_display_math] = STATE(263),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(263),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(263),
    [sym_tex_inline_math] = STATE(263),
    [sym_latex_inline_math] = STATE(263),
    [sym_inline_math_env] = STATE(263),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(263),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(263),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(263),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(263),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(263),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(263),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(263),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(263),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(263),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(263),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(263),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(263),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(263),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(263),
    [sym_opt_text_group] = STATE(263),
    [sym_token] = STATE(263),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(262),
    [sym_text] = STATE(263),
    [aux_sym_text_mode_repeat1] = STATE(263),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(471),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [132] = {
    [aux_sym_text_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [133] = {
    [sym__common] = STATE(133),
    [sym__text_mode_common] = STATE(133),
    [sym_inline_verbatim] = STATE(133),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(133),
    [sym_text_mode_at_region] = STATE(133),
    [sym_parameter] = STATE(133),
    [sym_text_env] = STATE(133),
    [sym__display_math] = STATE(133),
    [sym_tex_display_math] = STATE(133),
    [sym_latex_display_math] = STATE(133),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(133),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(133),
    [sym_tex_inline_math] = STATE(133),
    [sym_latex_inline_math] = STATE(133),
    [sym_inline_math_env] = STATE(133),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(133),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(133),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(133),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(133),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(133),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(133),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(133),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(133),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(133),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(133),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(133),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(133),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(133),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(133),
    [sym_token] = STATE(133),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(133),
    [aux_sym_text_mode_repeat1] = STATE(133),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(478),
    [sym_begin_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(487),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(487),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(499),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(502),
    [sym_begin_group] = ACTIONS(502),
    [sym_end_group] = ACTIONS(502),
    [sym_math_shift] = ACTIONS(502),
    [sym_alignment_tab] = ACTIONS(502),
    [sym_parameter_char] = ACTIONS(502),
    [sym_superscript] = ACTIONS(504),
    [sym_subscript] = ACTIONS(502),
    [sym_active_char] = ACTIONS(502),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(502),
  },
  [135] = {
    [aux_sym_parameter_repeat1] = STATE(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(506),
    [sym_number] = ACTIONS(509),
  },
  [136] = {
    [aux_sym_text_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(515),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(518),
    [sym_begin_group] = ACTIONS(518),
    [sym_alignment_tab] = ACTIONS(518),
    [sym_parameter_char] = ACTIONS(518),
    [sym_superscript] = ACTIONS(520),
    [sym_subscript] = ACTIONS(518),
    [sym_active_char] = ACTIONS(518),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(518),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(522),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(522),
    [sym_begin_group] = ACTIONS(522),
    [sym_alignment_tab] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(522),
    [sym_superscript] = ACTIONS(524),
    [sym_subscript] = ACTIONS(522),
    [sym_active_char] = ACTIONS(522),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(522),
  },
  [139] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(526),
  },
  [140] = {
    [anon_sym_LBRACK] = ACTIONS(528),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(528),
  },
  [141] = {
    [anon_sym_LBRACK] = ACTIONS(530),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(530),
  },
  [142] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(532),
  },
  [143] = {
    [sym__whitespace] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_STAR] = ACTIONS(538),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(536),
  },
  [144] = {
    [sym__whitespace] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(536),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(540),
    [sym_begin_group] = ACTIONS(540),
    [sym_end_group] = ACTIONS(540),
    [sym_math_shift] = ACTIONS(540),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(540),
    [sym_superscript] = ACTIONS(542),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(540),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(540),
  },
  [146] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(544),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(546),
  },
  [148] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(548),
  },
  [149] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(550),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(552),
  },
  [151] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_math_shift] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(556),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(554),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(558),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(558),
    [sym_begin_group] = ACTIONS(558),
    [sym_end_group] = ACTIONS(558),
    [sym_math_shift] = ACTIONS(558),
    [sym_alignment_tab] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(558),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(558),
  },
  [153] = {
    [aux_sym__name_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(562),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(569),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [154] = {
    [aux_sym__name_repeat1] = STATE(267),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(574),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [anon_sym_RBRACK] = ACTIONS(576),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(576),
    [sym_begin_group] = ACTIONS(576),
    [sym_end_group] = ACTIONS(576),
    [sym_math_shift] = ACTIONS(576),
    [sym_alignment_tab] = ACTIONS(576),
    [sym_parameter_char] = ACTIONS(576),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(576),
    [sym_active_char] = ACTIONS(576),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(576),
  },
  [156] = {
    [sym__common] = STATE(156),
    [sym__text_mode_common] = STATE(156),
    [sym_inline_verbatim] = STATE(156),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(156),
    [sym_text_mode_at_region] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_text_env] = STATE(156),
    [sym__display_math] = STATE(156),
    [sym_tex_display_math] = STATE(156),
    [sym_latex_display_math] = STATE(156),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(156),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(156),
    [sym_tex_inline_math] = STATE(156),
    [sym_latex_inline_math] = STATE(156),
    [sym_inline_math_env] = STATE(156),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(156),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(156),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(156),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(156),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(156),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(156),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(156),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(156),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(156),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(156),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(156),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(156),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(156),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(156),
    [sym_opt_text_group] = STATE(156),
    [sym_token] = STATE(156),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(156),
    [aux_sym_text_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(481),
    [sym_end_group] = ACTIONS(473),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(583),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(586),
  },
  [157] = {
    [aux_sym_text_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_end_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(589),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(589),
  },
  [158] = {
    [sym__whitespace] = ACTIONS(592),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(594),
  },
  [159] = {
    [aux_sym__name_repeat1] = STATE(269),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(596),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(598),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [160] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(270),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(602),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(604),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(604),
    [sym_begin_group] = ACTIONS(604),
    [sym_end_group] = ACTIONS(604),
    [sym_math_shift] = ACTIONS(604),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(606),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(604),
  },
  [162] = {
    [sym__common] = STATE(272),
    [sym__math_mode_common] = STATE(272),
    [sym__math_mode] = STATE(272),
    [sym_parameter] = STATE(272),
    [sym_math_env] = STATE(272),
    [sym_tag] = STATE(272),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(272),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(272),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(272),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(272),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(272),
    [sym_opt_math_group] = STATE(272),
    [sym_token] = STATE(272),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(272),
    [aux_sym_math_mode_repeat1] = STATE(272),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(81),
    [sym_end_group] = ACTIONS(608),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(612),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(275),
  },
  [163] = {
    [aux_sym_text_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(614),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(616),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(616),
    [sym_begin_group] = ACTIONS(616),
    [sym_end_group] = ACTIONS(616),
    [sym_math_shift] = ACTIONS(616),
    [sym_alignment_tab] = ACTIONS(616),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(618),
    [sym_subscript] = ACTIONS(616),
    [sym_active_char] = ACTIONS(616),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(616),
  },
  [166] = {
    [sym__common] = STATE(277),
    [sym__text_mode_common] = STATE(277),
    [sym_inline_verbatim] = STATE(277),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(277),
    [sym_text_mode] = STATE(276),
    [sym_text_mode_at_region] = STATE(277),
    [sym_parameter] = STATE(277),
    [sym_text_env] = STATE(277),
    [sym__display_math] = STATE(277),
    [sym_tex_display_math] = STATE(277),
    [sym_latex_display_math] = STATE(277),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(277),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(277),
    [sym_tex_inline_math] = STATE(277),
    [sym_latex_inline_math] = STATE(277),
    [sym_inline_math_env] = STATE(277),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(277),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(277),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(277),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(277),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(277),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(277),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(277),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(277),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(277),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(277),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(277),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(277),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(277),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(277),
    [sym_opt_text_group] = STATE(277),
    [sym_token] = STATE(277),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(277),
    [aux_sym_text_mode_repeat1] = STATE(277),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(620),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(622),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [167] = {
    [anon_sym_LBRACK] = ACTIONS(624),
    [anon_sym_RBRACK] = ACTIONS(624),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(624),
    [sym_end_group] = ACTIONS(624),
    [sym_math_shift] = ACTIONS(624),
    [sym_alignment_tab] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(624),
    [sym_superscript] = ACTIONS(626),
    [sym_subscript] = ACTIONS(624),
    [sym_active_char] = ACTIONS(624),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(624),
  },
  [168] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(178),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(331),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(305),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_RBRACK] = ACTIONS(628),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(628),
    [sym_begin_group] = ACTIONS(628),
    [sym_end_group] = ACTIONS(628),
    [sym_math_shift] = ACTIONS(628),
    [sym_alignment_tab] = ACTIONS(628),
    [sym_parameter_char] = ACTIONS(628),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(628),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(628),
  },
  [170] = {
    [sym__common] = STATE(181),
    [sym__math_mode_common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(181),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(278),
    [sym_end_token] = STATE(83),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(181),
    [sym_opt_math_group] = STATE(181),
    [sym_token] = STATE(181),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(281),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [171] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(279),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(632),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(634),
  },
  [172] = {
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_end_group] = ACTIONS(636),
    [sym_math_shift] = ACTIONS(636),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_superscript] = ACTIONS(638),
    [sym_subscript] = ACTIONS(636),
    [sym_active_char] = ACTIONS(636),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(636),
  },
  [173] = {
    [sym__common] = STATE(281),
    [sym__math_mode_common] = STATE(281),
    [sym__math_mode] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_math_env] = STATE(281),
    [sym_tag] = STATE(281),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(281),
    [sym_opt_math_group] = STATE(281),
    [sym_token] = STATE(281),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(280),
    [sym_text] = STATE(281),
    [aux_sym_math_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(642),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(293),
  },
  [174] = {
    [aux_sym_text_repeat1] = STATE(282),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(157),
  },
  [175] = {
    [sym__common] = STATE(175),
    [sym__math_mode_common] = STATE(175),
    [sym__math_mode] = STATE(175),
    [sym_parameter] = STATE(175),
    [sym_math_env] = STATE(175),
    [sym_tag] = STATE(175),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(175),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(175),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(175),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(175),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(175),
    [sym_opt_math_group] = STATE(175),
    [sym_token] = STATE(175),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(175),
    [aux_sym_math_mode_repeat1] = STATE(175),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(644),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(647),
    [sym_begin_group] = ACTIONS(650),
    [sym_math_shift] = ACTIONS(653),
    [sym_alignment_tab] = ACTIONS(655),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(661),
    [sym_subscript] = ACTIONS(655),
    [sym_active_char] = ACTIONS(655),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(664),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(664),
  },
  [176] = {
    [aux_sym_text_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(667),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(667),
  },
  [177] = {
    [sym_verb_delim] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [178] = {
    [aux_sym__name_repeat1] = STATE(284),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(674),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(678),
    [sym_begin_group] = ACTIONS(678),
    [sym_end_group] = ACTIONS(678),
    [sym_math_shift] = ACTIONS(678),
    [sym_alignment_tab] = ACTIONS(678),
    [sym_parameter_char] = ACTIONS(678),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(678),
    [sym_active_char] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(678),
  },
  [181] = {
    [sym__common] = STATE(181),
    [sym__math_mode_common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(181),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(181),
    [sym_opt_math_group] = STATE(181),
    [sym_token] = STATE(181),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(644),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(688),
    [sym_subscript] = ACTIONS(685),
    [sym_active_char] = ACTIONS(685),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(691),
  },
  [182] = {
    [aux_sym_text_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(694),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(697),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(699),
    [anon_sym_RBRACK] = ACTIONS(699),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(699),
    [sym_begin_group] = ACTIONS(699),
    [sym_end_group] = ACTIONS(699),
    [sym_math_shift] = ACTIONS(699),
    [sym_alignment_tab] = ACTIONS(699),
    [sym_parameter_char] = ACTIONS(699),
    [sym_superscript] = ACTIONS(701),
    [sym_subscript] = ACTIONS(699),
    [sym_active_char] = ACTIONS(699),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(699),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_end_group] = ACTIONS(703),
    [sym_math_shift] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(703),
    [sym_active_char] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(703),
  },
  [186] = {
    [sym_display_math_env_group] = STATE(288),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(707),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(709),
    [sym_begin_group] = ACTIONS(709),
    [sym_end_group] = ACTIONS(709),
    [sym_math_shift] = ACTIONS(709),
    [sym_alignment_tab] = ACTIONS(709),
    [sym_parameter_char] = ACTIONS(709),
    [sym_superscript] = ACTIONS(711),
    [sym_subscript] = ACTIONS(709),
    [sym_active_char] = ACTIONS(709),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(709),
  },
  [188] = {
    [sym_inline_math_env_group] = STATE(290),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(713),
  },
  [189] = {
    [sym__whitespace] = ACTIONS(715),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(717),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_end_group] = ACTIONS(719),
    [sym_math_shift] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_parameter_char] = ACTIONS(719),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(719),
    [sym_active_char] = ACTIONS(719),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(719),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(719),
  },
  [191] = {
    [sym_verbatim_env_name] = ACTIONS(723),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(725),
    [sym_end_group] = ACTIONS(725),
    [sym_math_shift] = ACTIONS(725),
    [sym_alignment_tab] = ACTIONS(725),
    [sym_parameter_char] = ACTIONS(725),
    [sym_superscript] = ACTIONS(727),
    [sym_subscript] = ACTIONS(725),
    [sym_active_char] = ACTIONS(725),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(725),
  },
  [193] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(729),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(731),
    [sym__end_of_line] = ACTIONS(731),
  },
  [194] = {
    [aux_sym_verbatim_text_repeat1] = STATE(194),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(733),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(736),
  },
  [195] = {
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(195),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(731),
    [sym__end_of_line] = ACTIONS(741),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_RBRACK] = ACTIONS(744),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(744),
    [sym_end_group] = ACTIONS(744),
    [sym_math_shift] = ACTIONS(744),
    [sym_alignment_tab] = ACTIONS(744),
    [sym_parameter_char] = ACTIONS(744),
    [sym_superscript] = ACTIONS(746),
    [sym_subscript] = ACTIONS(744),
    [sym_active_char] = ACTIONS(744),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(744),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(744),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(748),
    [sym_end_group] = ACTIONS(748),
    [sym_math_shift] = ACTIONS(748),
    [sym_alignment_tab] = ACTIONS(748),
    [sym_parameter_char] = ACTIONS(748),
    [sym_superscript] = ACTIONS(750),
    [sym_subscript] = ACTIONS(748),
    [sym_active_char] = ACTIONS(748),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(748),
  },
  [198] = {
    [sym__common] = STATE(198),
    [sym__text_mode_common] = STATE(198),
    [sym_inline_verbatim] = STATE(198),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(198),
    [sym_text_mode_at_region] = STATE(198),
    [sym_parameter] = STATE(198),
    [sym_text_env] = STATE(198),
    [sym__display_math] = STATE(198),
    [sym_tex_display_math] = STATE(198),
    [sym_latex_display_math] = STATE(198),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(198),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(198),
    [sym_tex_inline_math] = STATE(198),
    [sym_latex_inline_math] = STATE(198),
    [sym_inline_math_env] = STATE(198),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(198),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(198),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(198),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(198),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(198),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(198),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(198),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(198),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(198),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(198),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(198),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(198),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(198),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(198),
    [sym_opt_text_group] = STATE(198),
    [sym_token] = STATE(198),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(198),
    [aux_sym_text_mode_repeat1] = STATE(198),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(752),
    [sym_begin_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(755),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(755),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(758),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(761),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(763),
  },
  [201] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(765),
  },
  [202] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(767),
  },
  [203] = {
    [aux_sym_text_repeat1] = STATE(298),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(769),
  },
  [204] = {
    [sym__common] = STATE(300),
    [sym__text_mode_common] = STATE(300),
    [sym_inline_verbatim] = STATE(300),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(300),
    [sym_text_mode_at_region] = STATE(300),
    [sym_parameter] = STATE(300),
    [sym_text_env] = STATE(300),
    [sym__display_math] = STATE(300),
    [sym_tex_display_math] = STATE(300),
    [sym_latex_display_math] = STATE(300),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(300),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(300),
    [sym_tex_inline_math] = STATE(300),
    [sym_latex_inline_math] = STATE(300),
    [sym_inline_math_env] = STATE(300),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(300),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(300),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(300),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(300),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(300),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(300),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(300),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(300),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(300),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(300),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(300),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(300),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(300),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(300),
    [sym_opt_text_group] = STATE(300),
    [sym_token] = STATE(300),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(300),
    [aux_sym_text_mode_repeat1] = STATE(300),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(771),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(773),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(773),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(775),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(775),
    [sym_begin_group] = ACTIONS(775),
    [sym_alignment_tab] = ACTIONS(775),
    [sym_parameter_char] = ACTIONS(775),
    [sym_superscript] = ACTIONS(777),
    [sym_subscript] = ACTIONS(775),
    [sym_active_char] = ACTIONS(775),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(775),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(775),
  },
  [206] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(779),
  },
  [207] = {
    [sym_text_group] = STATE(303),
    [sym__whitespace] = ACTIONS(781),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(779),
  },
  [208] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(783),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(785),
    [sym__end_of_line] = ACTIONS(785),
  },
  [209] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(787),
  },
  [210] = {
    [sym_text_group] = STATE(306),
    [sym__whitespace] = ACTIONS(789),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(787),
  },
  [211] = {
    [sym_simple_text_group] = STATE(307),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(791),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(791),
    [sym_begin_group] = ACTIONS(791),
    [sym_end_group] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(791),
    [sym_alignment_tab] = ACTIONS(791),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(791),
    [sym_active_char] = ACTIONS(791),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(791),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(791),
  },
  [213] = {
    [sym__whitespace] = ACTIONS(459),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(459),
    [sym__end_of_line] = ACTIONS(459),
  },
  [214] = {
    [sym__whitespace] = ACTIONS(467),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(467),
    [sym__end_of_line] = ACTIONS(467),
  },
  [215] = {
    [sym__common] = STATE(263),
    [sym__text_mode_common] = STATE(263),
    [sym_inline_verbatim] = STATE(263),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(263),
    [sym_text_mode_at_region] = STATE(263),
    [sym_parameter] = STATE(263),
    [sym_text_env] = STATE(263),
    [sym__display_math] = STATE(263),
    [sym_tex_display_math] = STATE(263),
    [sym_latex_display_math] = STATE(263),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(263),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(263),
    [sym_tex_inline_math] = STATE(263),
    [sym_latex_inline_math] = STATE(263),
    [sym_inline_math_env] = STATE(263),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(263),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(263),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(263),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(263),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(263),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(263),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(263),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(263),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(263),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(263),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(263),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(263),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(263),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(263),
    [sym_opt_text_group] = STATE(263),
    [sym_token] = STATE(263),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(308),
    [sym_text] = STATE(263),
    [aux_sym_text_mode_repeat1] = STATE(263),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(471),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [216] = {
    [sym_simple_text_group] = STATE(309),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(795),
    [anon_sym_LBRACK] = ACTIONS(795),
    [anon_sym_RBRACK] = ACTIONS(795),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(795),
    [sym_begin_group] = ACTIONS(795),
    [sym_end_group] = ACTIONS(795),
    [sym_math_shift] = ACTIONS(795),
    [sym_alignment_tab] = ACTIONS(795),
    [sym_parameter_char] = ACTIONS(795),
    [sym_superscript] = ACTIONS(797),
    [sym_subscript] = ACTIONS(795),
    [sym_active_char] = ACTIONS(795),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(795),
  },
  [218] = {
    [sym_text_group] = STATE(310),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(799),
    [anon_sym_LBRACK] = ACTIONS(799),
    [anon_sym_RBRACK] = ACTIONS(799),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(799),
    [sym_begin_group] = ACTIONS(799),
    [sym_end_group] = ACTIONS(799),
    [sym_math_shift] = ACTIONS(799),
    [sym_alignment_tab] = ACTIONS(799),
    [sym_parameter_char] = ACTIONS(799),
    [sym_superscript] = ACTIONS(801),
    [sym_subscript] = ACTIONS(799),
    [sym_active_char] = ACTIONS(799),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(799),
  },
  [220] = {
    [anon_sym_EQ] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [221] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(803),
  },
  [222] = {
    [sym_text_group] = STATE(312),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(805),
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_RBRACK] = ACTIONS(805),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(805),
    [sym_begin_group] = ACTIONS(805),
    [sym_end_group] = ACTIONS(805),
    [sym_math_shift] = ACTIONS(805),
    [sym_alignment_tab] = ACTIONS(805),
    [sym_parameter_char] = ACTIONS(805),
    [sym_superscript] = ACTIONS(807),
    [sym_subscript] = ACTIONS(805),
    [sym_active_char] = ACTIONS(805),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(805),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(805),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(809),
    [sym__whitespace] = ACTIONS(811),
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_end_group] = ACTIONS(809),
    [sym_math_shift] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(813),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(813),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(809),
  },
  [225] = {
    [sym__whitespace] = ACTIONS(815),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_RBRACK] = ACTIONS(817),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(817),
    [sym_begin_group] = ACTIONS(817),
    [sym_end_group] = ACTIONS(817),
    [sym_math_shift] = ACTIONS(817),
    [sym_alignment_tab] = ACTIONS(817),
    [sym_parameter_char] = ACTIONS(817),
    [sym_superscript] = ACTIONS(819),
    [sym_subscript] = ACTIONS(817),
    [sym_active_char] = ACTIONS(817),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(819),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(817),
  },
  [226] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(417),
  },
  [227] = {
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_RBRACK] = ACTIONS(821),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(821),
    [sym_begin_group] = ACTIONS(821),
    [sym_end_group] = ACTIONS(821),
    [sym_math_shift] = ACTIONS(821),
    [sym_alignment_tab] = ACTIONS(821),
    [sym_parameter_char] = ACTIONS(821),
    [sym_superscript] = ACTIONS(823),
    [sym_subscript] = ACTIONS(821),
    [sym_active_char] = ACTIONS(821),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(821),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(821),
  },
  [228] = {
    [sym__common] = STATE(316),
    [sym__text_mode_common] = STATE(316),
    [sym_inline_verbatim] = STATE(316),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_text_env_at] = STATE(316),
    [sym__display_math_at] = STATE(316),
    [sym_tex_display_math_at] = STATE(316),
    [sym_latex_display_math_at] = STATE(316),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(316),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(316),
    [sym_tex_inline_math_at] = STATE(316),
    [sym_latex_inline_math_at] = STATE(316),
    [sym_inline_math_env_at] = STATE(316),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(316),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(316),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(316),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(316),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(316),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(316),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(316),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(316),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(316),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(316),
    [sym_opt_text_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(316),
    [aux_sym_text_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(825),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [229] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(417),
  },
  [230] = {
    [sym__common] = STATE(318),
    [sym__math_mode_common] = STATE(318),
    [sym__math_mode_at] = STATE(318),
    [sym_parameter] = STATE(318),
    [sym_math_env_at] = STATE(318),
    [sym_tag_at] = STATE(318),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(318),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(318),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(318),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(318),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(318),
    [sym_opt_math_group_at] = STATE(318),
    [sym_token_at] = STATE(318),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(318),
    [aux_sym_math_mode_at_repeat1] = STATE(318),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(829),
    [sym_alignment_tab] = ACTIONS(831),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(833),
    [sym_subscript] = ACTIONS(831),
    [sym_active_char] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(275),
  },
  [231] = {
    [sym__common] = STATE(236),
    [sym__math_mode_common] = STATE(236),
    [sym__math_mode_at] = STATE(236),
    [sym_math_mode_at] = STATE(319),
    [sym_parameter] = STATE(236),
    [sym_math_env_at] = STATE(236),
    [sym_tag_at] = STATE(236),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(236),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(236),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(236),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(236),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(236),
    [sym_opt_math_group_at] = STATE(236),
    [sym_token_at] = STATE(236),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(236),
    [aux_sym_math_mode_at_repeat1] = STATE(236),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [232] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(835),
  },
  [233] = {
    [sym_math_text_group_at] = STATE(322),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(837),
  },
  [234] = {
    [sym__common] = STATE(325),
    [sym__math_mode_common] = STATE(325),
    [sym__math_mode_at] = STATE(325),
    [sym_parameter] = STATE(325),
    [sym_math_env_at] = STATE(325),
    [sym_tag_at] = STATE(325),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(325),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(324),
    [sym_end_token] = STATE(83),
    [sym_include_at] = STATE(325),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(325),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(325),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(325),
    [sym_opt_math_group_at] = STATE(325),
    [sym_token_at] = STATE(325),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(325),
    [aux_sym_math_mode_at_repeat1] = STATE(325),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(839),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(841),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(841),
    [sym_active_char] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [235] = {
    [sym__common] = STATE(327),
    [sym__math_mode_common] = STATE(327),
    [sym__math_mode_at] = STATE(327),
    [sym_parameter] = STATE(327),
    [sym_math_env_at] = STATE(327),
    [sym_tag_at] = STATE(327),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(327),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(327),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(327),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(327),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(327),
    [sym_opt_math_group_at] = STATE(327),
    [sym_token_at] = STATE(327),
    [sym_begin_opt] = STATE(235),
    [sym_end_opt] = STATE(326),
    [sym_text] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(327),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(847),
    [sym_subscript] = ACTIONS(845),
    [sym_active_char] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(293),
  },
  [236] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(328),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(851),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(853),
    [sym_subscript] = ACTIONS(851),
    [sym_active_char] = ACTIONS(851),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [237] = {
    [anon_sym_makeatother] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(857),
    [sym_begin_group] = ACTIONS(857),
    [sym_end_group] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(857),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(857),
    [sym_superscript] = ACTIONS(859),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(857),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(857),
  },
  [239] = {
    [sym_end_display_math] = STATE(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
  },
  [240] = {
    [sym__common] = STATE(330),
    [sym__math_mode_common] = STATE(330),
    [sym__math_mode_at] = STATE(330),
    [sym_parameter] = STATE(330),
    [sym_math_env_at] = STATE(330),
    [sym_tag_at] = STATE(330),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(330),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(330),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(330),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(330),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(330),
    [sym_opt_math_group_at] = STATE(330),
    [sym_token_at] = STATE(330),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(330),
    [aux_sym_math_mode_at_repeat1] = STATE(330),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [241] = {
    [sym_end_inline_math] = STATE(331),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
  },
  [242] = {
    [sym_display_math_end] = STATE(332),
    [sym_end_token] = STATE(186),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
  },
  [243] = {
    [sym_inline_math_end] = STATE(333),
    [sym_end_token] = STATE(188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
  },
  [244] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(331),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(417),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_RBRACK] = ACTIONS(865),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(865),
    [sym_begin_group] = ACTIONS(865),
    [sym_end_group] = ACTIONS(865),
    [sym_math_shift] = ACTIONS(865),
    [sym_alignment_tab] = ACTIONS(865),
    [sym_parameter_char] = ACTIONS(865),
    [sym_superscript] = ACTIONS(867),
    [sym_subscript] = ACTIONS(865),
    [sym_active_char] = ACTIONS(865),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(865),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(865),
  },
  [246] = {
    [sym__common] = STATE(260),
    [sym__text_mode_common] = STATE(260),
    [sym_inline_verbatim] = STATE(260),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_text_env_at] = STATE(260),
    [sym__display_math_at] = STATE(260),
    [sym_tex_display_math_at] = STATE(260),
    [sym_latex_display_math_at] = STATE(260),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(260),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(260),
    [sym_tex_inline_math_at] = STATE(260),
    [sym_latex_inline_math_at] = STATE(260),
    [sym_inline_math_env_at] = STATE(260),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(260),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_end] = STATE(334),
    [sym_end_token] = STATE(83),
    [sym_documentclass] = STATE(260),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(260),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(260),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(260),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(260),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(260),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(260),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(260),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(260),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(260),
    [sym_opt_text_group_at] = STATE(260),
    [sym_token_at] = STATE(260),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(260),
    [aux_sym_text_mode_at_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(457),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(89),
  },
  [247] = {
    [sym_text_group_at] = STATE(337),
    [sym_opt_text_group_at] = STATE(338),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(869),
    [sym__end_of_line] = ACTIONS(871),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_RBRACK] = ACTIONS(873),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(873),
    [sym_begin_group] = ACTIONS(873),
    [sym_end_group] = ACTIONS(873),
    [sym_math_shift] = ACTIONS(873),
    [sym_alignment_tab] = ACTIONS(873),
    [sym_parameter_char] = ACTIONS(873),
    [sym_superscript] = ACTIONS(875),
    [sym_subscript] = ACTIONS(873),
    [sym_active_char] = ACTIONS(873),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(873),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(873),
  },
  [249] = {
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(877),
    [sym_begin_group] = ACTIONS(877),
    [sym_end_group] = ACTIONS(877),
    [sym_math_shift] = ACTIONS(877),
    [sym_alignment_tab] = ACTIONS(877),
    [sym_parameter_char] = ACTIONS(877),
    [sym_superscript] = ACTIONS(879),
    [sym_subscript] = ACTIONS(877),
    [sym_active_char] = ACTIONS(877),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(877),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(877),
  },
  [250] = {
    [sym_text_group_at] = STATE(340),
    [sym__whitespace] = ACTIONS(881),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [251] = {
    [sym__common] = STATE(342),
    [sym__text_mode_common] = STATE(342),
    [sym_inline_verbatim] = STATE(342),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(342),
    [sym_parameter] = STATE(342),
    [sym_text_env_at] = STATE(342),
    [sym__display_math_at] = STATE(342),
    [sym_tex_display_math_at] = STATE(342),
    [sym_latex_display_math_at] = STATE(342),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(342),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(342),
    [sym_tex_inline_math_at] = STATE(342),
    [sym_latex_inline_math_at] = STATE(342),
    [sym_inline_math_env_at] = STATE(342),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(342),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(342),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(342),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(342),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(342),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(342),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(342),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(342),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(342),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(342),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(342),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(342),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(342),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(342),
    [sym_opt_text_group_at] = STATE(342),
    [sym_token_at] = STATE(342),
    [sym_begin_opt] = STATE(126),
    [sym_end_opt] = STATE(341),
    [sym_text] = STATE(342),
    [aux_sym_text_mode_at_repeat1] = STATE(342),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(883),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [252] = {
    [anon_sym_LBRACK] = ACTIONS(885),
    [anon_sym_RBRACK] = ACTIONS(885),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(885),
    [sym_begin_group] = ACTIONS(885),
    [sym_end_group] = ACTIONS(885),
    [sym_math_shift] = ACTIONS(885),
    [sym_alignment_tab] = ACTIONS(885),
    [sym_parameter_char] = ACTIONS(885),
    [sym_superscript] = ACTIONS(887),
    [sym_subscript] = ACTIONS(885),
    [sym_active_char] = ACTIONS(885),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(885),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(885),
  },
  [253] = {
    [anon_sym_LBRACK] = ACTIONS(889),
    [anon_sym_RBRACK] = ACTIONS(889),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(889),
    [sym_begin_group] = ACTIONS(889),
    [sym_end_group] = ACTIONS(889),
    [sym_math_shift] = ACTIONS(889),
    [sym_alignment_tab] = ACTIONS(889),
    [sym_parameter_char] = ACTIONS(889),
    [sym_superscript] = ACTIONS(891),
    [sym_subscript] = ACTIONS(889),
    [sym_active_char] = ACTIONS(889),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(889),
  },
  [254] = {
    [sym_text_group_at] = STATE(344),
    [sym__whitespace] = ACTIONS(893),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(895),
    [sym_begin_group] = ACTIONS(895),
    [sym_end_group] = ACTIONS(895),
    [sym_math_shift] = ACTIONS(895),
    [sym_alignment_tab] = ACTIONS(895),
    [sym_parameter_char] = ACTIONS(895),
    [sym_superscript] = ACTIONS(897),
    [sym_subscript] = ACTIONS(895),
    [sym_active_char] = ACTIONS(895),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(895),
  },
  [256] = {
    [anon_sym_LBRACK] = ACTIONS(899),
    [anon_sym_RBRACK] = ACTIONS(899),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(899),
    [sym_begin_group] = ACTIONS(899),
    [sym_end_group] = ACTIONS(899),
    [sym_math_shift] = ACTIONS(899),
    [sym_alignment_tab] = ACTIONS(899),
    [sym_parameter_char] = ACTIONS(899),
    [sym_superscript] = ACTIONS(901),
    [sym_subscript] = ACTIONS(899),
    [sym_active_char] = ACTIONS(899),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(899),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(899),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(903),
    [anon_sym_RBRACK] = ACTIONS(903),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(903),
    [sym_begin_group] = ACTIONS(903),
    [sym_end_group] = ACTIONS(903),
    [sym_math_shift] = ACTIONS(903),
    [sym_alignment_tab] = ACTIONS(903),
    [sym_parameter_char] = ACTIONS(903),
    [sym_superscript] = ACTIONS(905),
    [sym_subscript] = ACTIONS(903),
    [sym_active_char] = ACTIONS(903),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(903),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(903),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(907),
    [anon_sym_RBRACK] = ACTIONS(907),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(907),
    [sym_begin_group] = ACTIONS(907),
    [sym_end_group] = ACTIONS(907),
    [sym_math_shift] = ACTIONS(907),
    [sym_alignment_tab] = ACTIONS(907),
    [sym_parameter_char] = ACTIONS(907),
    [sym_superscript] = ACTIONS(909),
    [sym_subscript] = ACTIONS(907),
    [sym_active_char] = ACTIONS(907),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(907),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(907),
  },
  [259] = {
    [sym__common] = STATE(346),
    [sym__text_mode_common] = STATE(346),
    [sym_inline_verbatim] = STATE(346),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(346),
    [sym_parameter] = STATE(346),
    [sym_text_env_at] = STATE(346),
    [sym__display_math_at] = STATE(346),
    [sym_tex_display_math_at] = STATE(346),
    [sym_latex_display_math_at] = STATE(346),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(346),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(346),
    [sym_tex_inline_math_at] = STATE(346),
    [sym_latex_inline_math_at] = STATE(346),
    [sym_inline_math_env_at] = STATE(346),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(346),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(346),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(346),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(346),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(346),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(346),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(346),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(346),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(346),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(346),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(346),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(346),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(346),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(346),
    [sym_opt_text_group_at] = STATE(346),
    [sym_token_at] = STATE(346),
    [sym_begin_opt] = STATE(126),
    [sym_end_opt] = STATE(345),
    [sym_text] = STATE(346),
    [aux_sym_text_mode_at_repeat1] = STATE(346),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(911),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(911),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [260] = {
    [sym__common] = STATE(260),
    [sym__text_mode_common] = STATE(260),
    [sym_inline_verbatim] = STATE(260),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_text_env_at] = STATE(260),
    [sym__display_math_at] = STATE(260),
    [sym_tex_display_math_at] = STATE(260),
    [sym_latex_display_math_at] = STATE(260),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(260),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(260),
    [sym_tex_inline_math_at] = STATE(260),
    [sym_latex_inline_math_at] = STATE(260),
    [sym_inline_math_env_at] = STATE(260),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(260),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(260),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(260),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(260),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(260),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(260),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(260),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(260),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(260),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(260),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(260),
    [sym_opt_text_group_at] = STATE(260),
    [sym_token_at] = STATE(260),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(260),
    [aux_sym_text_mode_at_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(913),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(916),
    [sym_begin_group] = ACTIONS(919),
    [sym_math_shift] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(925),
    [sym_parameter_char] = ACTIONS(928),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(925),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(937),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(937),
  },
  [261] = {
    [aux_sym__name_repeat1] = STATE(347),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(940),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(942),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_RBRACK] = ACTIONS(944),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(944),
    [sym_begin_group] = ACTIONS(944),
    [sym_end_group] = ACTIONS(944),
    [sym_math_shift] = ACTIONS(944),
    [sym_alignment_tab] = ACTIONS(944),
    [sym_parameter_char] = ACTIONS(944),
    [sym_superscript] = ACTIONS(946),
    [sym_subscript] = ACTIONS(944),
    [sym_active_char] = ACTIONS(944),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(944),
  },
  [263] = {
    [sym__common] = STATE(263),
    [sym__text_mode_common] = STATE(263),
    [sym_inline_verbatim] = STATE(263),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(263),
    [sym_text_mode_at_region] = STATE(263),
    [sym_parameter] = STATE(263),
    [sym_text_env] = STATE(263),
    [sym__display_math] = STATE(263),
    [sym_tex_display_math] = STATE(263),
    [sym_latex_display_math] = STATE(263),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(263),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(263),
    [sym_tex_inline_math] = STATE(263),
    [sym_latex_inline_math] = STATE(263),
    [sym_inline_math_env] = STATE(263),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(263),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(263),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(263),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(263),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(263),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(263),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(263),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(263),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(263),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(263),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(263),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(263),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(263),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(263),
    [sym_opt_text_group] = STATE(263),
    [sym_token] = STATE(263),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(263),
    [aux_sym_text_mode_repeat1] = STATE(263),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(473),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(948),
    [sym_begin_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(951),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(951),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(954),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(954),
  },
  [264] = {
    [aux_sym_text_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(957),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(957),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(960),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(960),
  },
  [266] = {
    [sym__whitespace] = ACTIONS(962),
    [anon_sym_LBRACK] = ACTIONS(960),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(960),
  },
  [267] = {
    [aux_sym__name_repeat1] = STATE(267),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_end_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(967),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [268] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(970),
  },
  [269] = {
    [aux_sym__name_repeat1] = STATE(269),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(972),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(975),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [270] = {
    [aux_sym__name_repeat1] = STATE(349),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(978),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(980),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [271] = {
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(982),
    [sym_begin_group] = ACTIONS(982),
    [sym_end_group] = ACTIONS(982),
    [sym_math_shift] = ACTIONS(982),
    [sym_alignment_tab] = ACTIONS(982),
    [sym_parameter_char] = ACTIONS(982),
    [sym_superscript] = ACTIONS(984),
    [sym_subscript] = ACTIONS(982),
    [sym_active_char] = ACTIONS(982),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(982),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(982),
  },
  [272] = {
    [sym__common] = STATE(272),
    [sym__math_mode_common] = STATE(272),
    [sym__math_mode] = STATE(272),
    [sym_parameter] = STATE(272),
    [sym_math_env] = STATE(272),
    [sym_tag] = STATE(272),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(272),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(272),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(272),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(272),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(272),
    [sym_opt_math_group] = STATE(272),
    [sym_token] = STATE(272),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(272),
    [aux_sym_math_mode_repeat1] = STATE(272),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(644),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(986),
    [sym_begin_group] = ACTIONS(650),
    [sym_end_group] = ACTIONS(653),
    [sym_alignment_tab] = ACTIONS(989),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(992),
    [sym_subscript] = ACTIONS(989),
    [sym_active_char] = ACTIONS(989),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(995),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(995),
  },
  [273] = {
    [aux_sym_text_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_end_group] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(998),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(998),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1001),
  },
  [275] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_end_group] = ACTIONS(1003),
    [sym_math_shift] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1003),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1003),
  },
  [276] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1007),
  },
  [277] = {
    [sym__common] = STATE(156),
    [sym__text_mode_common] = STATE(156),
    [sym_inline_verbatim] = STATE(156),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(156),
    [sym_text_mode_at_region] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_text_env] = STATE(156),
    [sym__display_math] = STATE(156),
    [sym_tex_display_math] = STATE(156),
    [sym_latex_display_math] = STATE(156),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(156),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(156),
    [sym_tex_inline_math] = STATE(156),
    [sym_latex_inline_math] = STATE(156),
    [sym_inline_math_env] = STATE(156),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(156),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(156),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(156),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(156),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(156),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(156),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(156),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(156),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(156),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(156),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(156),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(156),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(156),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(156),
    [sym_opt_text_group] = STATE(156),
    [sym_token] = STATE(156),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(156),
    [aux_sym_text_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [278] = {
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_RBRACK] = ACTIONS(1009),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1009),
    [sym_begin_group] = ACTIONS(1009),
    [sym_end_group] = ACTIONS(1009),
    [sym_math_shift] = ACTIONS(1009),
    [sym_alignment_tab] = ACTIONS(1009),
    [sym_parameter_char] = ACTIONS(1009),
    [sym_superscript] = ACTIONS(1011),
    [sym_subscript] = ACTIONS(1009),
    [sym_active_char] = ACTIONS(1009),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1009),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1009),
  },
  [279] = {
    [aux_sym__name_repeat1] = STATE(352),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(1013),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(243),
  },
  [280] = {
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(1017),
    [sym_math_shift] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1019),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1017),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1017),
  },
  [281] = {
    [sym__common] = STATE(281),
    [sym__math_mode_common] = STATE(281),
    [sym__math_mode] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_math_env] = STATE(281),
    [sym_tag] = STATE(281),
    [sym_tag_token] = STATE(61),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(281),
    [sym_opt_math_group] = STATE(281),
    [sym_token] = STATE(281),
    [sym_begin_opt] = STATE(64),
    [sym_text] = STATE(281),
    [aux_sym_math_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1021),
    [sym_begin_group] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(1024),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(1027),
    [sym_subscript] = ACTIONS(1024),
    [sym_active_char] = ACTIONS(1024),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1030),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1030),
  },
  [282] = {
    [aux_sym_text_repeat1] = STATE(282),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1033),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1033),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(1036),
    [anon_sym_LBRACK] = ACTIONS(1036),
    [anon_sym_RBRACK] = ACTIONS(1036),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1036),
    [sym_begin_group] = ACTIONS(1036),
    [sym_end_group] = ACTIONS(1036),
    [sym_math_shift] = ACTIONS(1036),
    [sym_alignment_tab] = ACTIONS(1036),
    [sym_parameter_char] = ACTIONS(1036),
    [sym_superscript] = ACTIONS(1038),
    [sym_subscript] = ACTIONS(1036),
    [sym_active_char] = ACTIONS(1036),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1036),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1036),
  },
  [284] = {
    [aux_sym__name_repeat1] = STATE(284),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(1040),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(1046),
    [sym__whitespace] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_RBRACK] = ACTIONS(1046),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1046),
    [sym_begin_group] = ACTIONS(1046),
    [sym_end_group] = ACTIONS(1046),
    [sym_math_shift] = ACTIONS(1046),
    [sym_alignment_tab] = ACTIONS(1046),
    [sym_parameter_char] = ACTIONS(1046),
    [sym_superscript] = ACTIONS(1050),
    [sym_subscript] = ACTIONS(1046),
    [sym_active_char] = ACTIONS(1046),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1050),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1046),
  },
  [286] = {
    [ts_builtin_sym_end] = ACTIONS(1052),
    [sym__whitespace] = ACTIONS(1054),
    [anon_sym_LBRACK] = ACTIONS(1052),
    [anon_sym_RBRACK] = ACTIONS(1052),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1052),
    [sym_begin_group] = ACTIONS(1052),
    [sym_end_group] = ACTIONS(1052),
    [sym_math_shift] = ACTIONS(1052),
    [sym_alignment_tab] = ACTIONS(1052),
    [sym_parameter_char] = ACTIONS(1052),
    [sym_superscript] = ACTIONS(1056),
    [sym_subscript] = ACTIONS(1052),
    [sym_active_char] = ACTIONS(1052),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1056),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1052),
  },
  [287] = {
    [sym_display_math_env_name] = ACTIONS(1058),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(1060),
    [anon_sym_LBRACK] = ACTIONS(1060),
    [anon_sym_RBRACK] = ACTIONS(1060),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1060),
    [sym_begin_group] = ACTIONS(1060),
    [sym_end_group] = ACTIONS(1060),
    [sym_math_shift] = ACTIONS(1060),
    [sym_alignment_tab] = ACTIONS(1060),
    [sym_parameter_char] = ACTIONS(1060),
    [sym_superscript] = ACTIONS(1062),
    [sym_subscript] = ACTIONS(1060),
    [sym_active_char] = ACTIONS(1060),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1060),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1060),
  },
  [289] = {
    [sym_inline_math_env_name] = ACTIONS(1064),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(1066),
    [anon_sym_LBRACK] = ACTIONS(1066),
    [anon_sym_RBRACK] = ACTIONS(1066),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1066),
    [sym_begin_group] = ACTIONS(1066),
    [sym_end_group] = ACTIONS(1066),
    [sym_math_shift] = ACTIONS(1066),
    [sym_alignment_tab] = ACTIONS(1066),
    [sym_parameter_char] = ACTIONS(1066),
    [sym_superscript] = ACTIONS(1068),
    [sym_subscript] = ACTIONS(1066),
    [sym_active_char] = ACTIONS(1066),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1066),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1066),
  },
  [291] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1070),
  },
  [292] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1072),
  },
  [293] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(159),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_documentclass] = ACTIONS(43),
    [anon_sym_usepackage] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_emph] = ACTIONS(55),
    [anon_sym_footnote] = ACTIONS(57),
    [anon_sym_textbf] = ACTIONS(59),
    [anon_sym_textit] = ACTIONS(61),
    [anon_sym_texttt] = ACTIONS(63),
    [anon_sym_makeatletter] = ACTIONS(65),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(265),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(1074),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1074),
    [sym__end_of_line] = ACTIONS(1074),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(1076),
    [anon_sym_LBRACK] = ACTIONS(1076),
    [anon_sym_RBRACK] = ACTIONS(1076),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1076),
    [sym_begin_group] = ACTIONS(1076),
    [sym_end_group] = ACTIONS(1076),
    [sym_math_shift] = ACTIONS(1076),
    [sym_alignment_tab] = ACTIONS(1076),
    [sym_parameter_char] = ACTIONS(1076),
    [sym_superscript] = ACTIONS(1078),
    [sym_subscript] = ACTIONS(1076),
    [sym_active_char] = ACTIONS(1076),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1076),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1076),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(1080),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1080),
    [sym__end_of_line] = ACTIONS(1080),
  },
  [297] = {
    [ts_builtin_sym_end] = ACTIONS(1082),
    [anon_sym_LBRACK] = ACTIONS(1082),
    [anon_sym_RBRACK] = ACTIONS(1082),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1082),
    [sym_begin_group] = ACTIONS(1082),
    [sym_end_group] = ACTIONS(1082),
    [sym_math_shift] = ACTIONS(1082),
    [sym_alignment_tab] = ACTIONS(1082),
    [sym_parameter_char] = ACTIONS(1082),
    [sym_superscript] = ACTIONS(1084),
    [sym_subscript] = ACTIONS(1082),
    [sym_active_char] = ACTIONS(1082),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1082),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1082),
  },
  [298] = {
    [aux_sym_text_repeat1] = STATE(298),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(511),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1086),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1086),
  },
  [299] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(253),
  },
  [300] = {
    [sym__common] = STATE(156),
    [sym__text_mode_common] = STATE(156),
    [sym_inline_verbatim] = STATE(156),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(156),
    [sym_text_mode_at_region] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_text_env] = STATE(156),
    [sym__display_math] = STATE(156),
    [sym_tex_display_math] = STATE(156),
    [sym_latex_display_math] = STATE(156),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(156),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(156),
    [sym_tex_inline_math] = STATE(156),
    [sym_latex_inline_math] = STATE(156),
    [sym_inline_math_env] = STATE(156),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(156),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(156),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(156),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(156),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(156),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(156),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(156),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(156),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(156),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(156),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(156),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(156),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(156),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(156),
    [sym_opt_text_group] = STATE(156),
    [sym_token] = STATE(156),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(156),
    [aux_sym_text_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1089),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(1091),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1091),
    [sym_begin_group] = ACTIONS(1091),
    [sym_alignment_tab] = ACTIONS(1091),
    [sym_parameter_char] = ACTIONS(1091),
    [sym_superscript] = ACTIONS(1093),
    [sym_subscript] = ACTIONS(1091),
    [sym_active_char] = ACTIONS(1091),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1091),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1091),
  },
  [302] = {
    [sym_text_group] = STATE(359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(1095),
  },
  [303] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1095),
  },
  [304] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1097),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1099),
    [sym__end_of_line] = ACTIONS(1099),
  },
  [305] = {
    [sym_text_group] = STATE(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(1101),
  },
  [306] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1101),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_RBRACK] = ACTIONS(1103),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1103),
    [sym_begin_group] = ACTIONS(1103),
    [sym_end_group] = ACTIONS(1103),
    [sym_math_shift] = ACTIONS(1103),
    [sym_alignment_tab] = ACTIONS(1103),
    [sym_parameter_char] = ACTIONS(1103),
    [sym_superscript] = ACTIONS(1105),
    [sym_subscript] = ACTIONS(1103),
    [sym_active_char] = ACTIONS(1103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1103),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1103),
  },
  [308] = {
    [sym__whitespace] = ACTIONS(944),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(944),
    [sym__end_of_line] = ACTIONS(944),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(1107),
    [anon_sym_LBRACK] = ACTIONS(1107),
    [anon_sym_RBRACK] = ACTIONS(1107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1107),
    [sym_begin_group] = ACTIONS(1107),
    [sym_end_group] = ACTIONS(1107),
    [sym_math_shift] = ACTIONS(1107),
    [sym_alignment_tab] = ACTIONS(1107),
    [sym_parameter_char] = ACTIONS(1107),
    [sym_superscript] = ACTIONS(1109),
    [sym_subscript] = ACTIONS(1107),
    [sym_active_char] = ACTIONS(1107),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1107),
  },
  [310] = {
    [ts_builtin_sym_end] = ACTIONS(1111),
    [anon_sym_LBRACK] = ACTIONS(1111),
    [anon_sym_RBRACK] = ACTIONS(1111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1111),
    [sym_begin_group] = ACTIONS(1111),
    [sym_end_group] = ACTIONS(1111),
    [sym_math_shift] = ACTIONS(1111),
    [sym_alignment_tab] = ACTIONS(1111),
    [sym_parameter_char] = ACTIONS(1111),
    [sym_superscript] = ACTIONS(1113),
    [sym_subscript] = ACTIONS(1111),
    [sym_active_char] = ACTIONS(1111),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1111),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1111),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(1115),
    [anon_sym_LBRACK] = ACTIONS(1115),
    [anon_sym_RBRACK] = ACTIONS(1115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1115),
    [sym_begin_group] = ACTIONS(1115),
    [sym_end_group] = ACTIONS(1115),
    [sym_math_shift] = ACTIONS(1115),
    [sym_alignment_tab] = ACTIONS(1115),
    [sym_parameter_char] = ACTIONS(1115),
    [sym_superscript] = ACTIONS(1117),
    [sym_subscript] = ACTIONS(1115),
    [sym_active_char] = ACTIONS(1115),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1115),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1115),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(1119),
    [anon_sym_LBRACK] = ACTIONS(1119),
    [anon_sym_RBRACK] = ACTIONS(1119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1119),
    [sym_begin_group] = ACTIONS(1119),
    [sym_end_group] = ACTIONS(1119),
    [sym_math_shift] = ACTIONS(1119),
    [sym_alignment_tab] = ACTIONS(1119),
    [sym_parameter_char] = ACTIONS(1119),
    [sym_superscript] = ACTIONS(1121),
    [sym_subscript] = ACTIONS(1119),
    [sym_active_char] = ACTIONS(1119),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1119),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1119),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(1123),
    [anon_sym_LBRACK] = ACTIONS(1123),
    [anon_sym_RBRACK] = ACTIONS(1123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1123),
    [sym_begin_group] = ACTIONS(1123),
    [sym_end_group] = ACTIONS(1123),
    [sym_math_shift] = ACTIONS(1123),
    [sym_alignment_tab] = ACTIONS(1123),
    [sym_parameter_char] = ACTIONS(1123),
    [sym_superscript] = ACTIONS(1125),
    [sym_subscript] = ACTIONS(1123),
    [sym_active_char] = ACTIONS(1123),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1123),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1123),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(1127),
    [anon_sym_RBRACK] = ACTIONS(1127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1127),
    [sym_begin_group] = ACTIONS(1127),
    [sym_end_group] = ACTIONS(1127),
    [sym_math_shift] = ACTIONS(1127),
    [sym_alignment_tab] = ACTIONS(1127),
    [sym_parameter_char] = ACTIONS(1127),
    [sym_superscript] = ACTIONS(1129),
    [sym_subscript] = ACTIONS(1127),
    [sym_active_char] = ACTIONS(1127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1127),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1127),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(1131),
    [anon_sym_RBRACK] = ACTIONS(1131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1131),
    [sym_begin_group] = ACTIONS(1131),
    [sym_end_group] = ACTIONS(1131),
    [sym_math_shift] = ACTIONS(1131),
    [sym_alignment_tab] = ACTIONS(1131),
    [sym_parameter_char] = ACTIONS(1131),
    [sym_superscript] = ACTIONS(1133),
    [sym_subscript] = ACTIONS(1131),
    [sym_active_char] = ACTIONS(1131),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1131),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1131),
  },
  [316] = {
    [sym__common] = STATE(316),
    [sym__text_mode_common] = STATE(316),
    [sym_inline_verbatim] = STATE(316),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_text_env_at] = STATE(316),
    [sym__display_math_at] = STATE(316),
    [sym_tex_display_math_at] = STATE(316),
    [sym_latex_display_math_at] = STATE(316),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(316),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(316),
    [sym_tex_inline_math_at] = STATE(316),
    [sym_latex_inline_math_at] = STATE(316),
    [sym_inline_math_env_at] = STATE(316),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(316),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(316),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(316),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(316),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(316),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(316),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(316),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(316),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(316),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(316),
    [sym_opt_text_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(316),
    [aux_sym_text_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(913),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(916),
    [sym_begin_group] = ACTIONS(919),
    [sym_end_group] = ACTIONS(1135),
    [sym_math_shift] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_parameter_char] = ACTIONS(928),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(1137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1140),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1140),
  },
  [317] = {
    [anon_sym_LBRACK] = ACTIONS(1143),
    [anon_sym_RBRACK] = ACTIONS(1143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1143),
    [sym_begin_group] = ACTIONS(1143),
    [sym_end_group] = ACTIONS(1143),
    [sym_math_shift] = ACTIONS(1143),
    [sym_alignment_tab] = ACTIONS(1143),
    [sym_parameter_char] = ACTIONS(1143),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1143),
    [sym_active_char] = ACTIONS(1143),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1143),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1143),
  },
  [318] = {
    [sym__common] = STATE(363),
    [sym__math_mode_common] = STATE(363),
    [sym__math_mode_at] = STATE(363),
    [sym_parameter] = STATE(363),
    [sym_math_env_at] = STATE(363),
    [sym_tag_at] = STATE(363),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(363),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(363),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(363),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(363),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(363),
    [sym_opt_math_group_at] = STATE(363),
    [sym_token_at] = STATE(363),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(363),
    [aux_sym_math_mode_at_repeat1] = STATE(363),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1147),
    [sym_alignment_tab] = ACTIONS(1149),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1151),
    [sym_subscript] = ACTIONS(1149),
    [sym_active_char] = ACTIONS(1149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(275),
  },
  [319] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1153),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(1155),
    [anon_sym_RBRACK] = ACTIONS(1155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1155),
    [sym_begin_group] = ACTIONS(1155),
    [sym_end_group] = ACTIONS(1155),
    [sym_math_shift] = ACTIONS(1155),
    [sym_alignment_tab] = ACTIONS(1155),
    [sym_parameter_char] = ACTIONS(1155),
    [sym_superscript] = ACTIONS(1157),
    [sym_subscript] = ACTIONS(1155),
    [sym_active_char] = ACTIONS(1155),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1155),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1155),
  },
  [321] = {
    [sym__common] = STATE(367),
    [sym__text_mode_common] = STATE(367),
    [sym_inline_verbatim] = STATE(367),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(367),
    [sym_text_mode_at] = STATE(366),
    [sym_parameter] = STATE(367),
    [sym_text_env_at] = STATE(367),
    [sym__display_math_at] = STATE(367),
    [sym_tex_display_math_at] = STATE(367),
    [sym_latex_display_math_at] = STATE(367),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(367),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(367),
    [sym_tex_inline_math_at] = STATE(367),
    [sym_latex_inline_math_at] = STATE(367),
    [sym_inline_math_env_at] = STATE(367),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(367),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(367),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(367),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(367),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(367),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(367),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(367),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(367),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(367),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(367),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(367),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(367),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(367),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(367),
    [sym_opt_text_group_at] = STATE(367),
    [sym_token_at] = STATE(367),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(367),
    [aux_sym_text_mode_at_repeat1] = STATE(367),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1159),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(1161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [322] = {
    [anon_sym_LBRACK] = ACTIONS(1163),
    [anon_sym_RBRACK] = ACTIONS(1163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1163),
    [sym_begin_group] = ACTIONS(1163),
    [sym_end_group] = ACTIONS(1163),
    [sym_math_shift] = ACTIONS(1163),
    [sym_alignment_tab] = ACTIONS(1163),
    [sym_parameter_char] = ACTIONS(1163),
    [sym_superscript] = ACTIONS(1165),
    [sym_subscript] = ACTIONS(1163),
    [sym_active_char] = ACTIONS(1163),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1163),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1163),
  },
  [323] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(261),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(331),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(417),
  },
  [324] = {
    [anon_sym_LBRACK] = ACTIONS(1167),
    [anon_sym_RBRACK] = ACTIONS(1167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1167),
    [sym_begin_group] = ACTIONS(1167),
    [sym_end_group] = ACTIONS(1167),
    [sym_math_shift] = ACTIONS(1167),
    [sym_alignment_tab] = ACTIONS(1167),
    [sym_parameter_char] = ACTIONS(1167),
    [sym_superscript] = ACTIONS(1169),
    [sym_subscript] = ACTIONS(1167),
    [sym_active_char] = ACTIONS(1167),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1167),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1167),
  },
  [325] = {
    [sym__common] = STATE(330),
    [sym__math_mode_common] = STATE(330),
    [sym__math_mode_at] = STATE(330),
    [sym_parameter] = STATE(330),
    [sym_math_env_at] = STATE(330),
    [sym_tag_at] = STATE(330),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(330),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(368),
    [sym_end_token] = STATE(83),
    [sym_include_at] = STATE(330),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(330),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(330),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(330),
    [sym_opt_math_group_at] = STATE(330),
    [sym_token_at] = STATE(330),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(330),
    [aux_sym_math_mode_at_repeat1] = STATE(330),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(839),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(107),
  },
  [326] = {
    [anon_sym_LBRACK] = ACTIONS(1171),
    [anon_sym_RBRACK] = ACTIONS(1171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1171),
    [sym_end_group] = ACTIONS(1171),
    [sym_math_shift] = ACTIONS(1171),
    [sym_alignment_tab] = ACTIONS(1171),
    [sym_parameter_char] = ACTIONS(1171),
    [sym_superscript] = ACTIONS(1173),
    [sym_subscript] = ACTIONS(1171),
    [sym_active_char] = ACTIONS(1171),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1171),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1171),
  },
  [327] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(235),
    [sym_end_opt] = STATE(369),
    [sym_text] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(1175),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1177),
    [sym_subscript] = ACTIONS(1175),
    [sym_active_char] = ACTIONS(1175),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(293),
  },
  [328] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(328),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1182),
    [sym_begin_group] = ACTIONS(1185),
    [sym_math_shift] = ACTIONS(1188),
    [sym_alignment_tab] = ACTIONS(1190),
    [sym_parameter_char] = ACTIONS(1193),
    [sym_superscript] = ACTIONS(1196),
    [sym_subscript] = ACTIONS(1190),
    [sym_active_char] = ACTIONS(1190),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1199),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1199),
  },
  [329] = {
    [anon_sym_LBRACK] = ACTIONS(1202),
    [anon_sym_RBRACK] = ACTIONS(1202),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1202),
    [sym_begin_group] = ACTIONS(1202),
    [sym_end_group] = ACTIONS(1202),
    [sym_math_shift] = ACTIONS(1202),
    [sym_alignment_tab] = ACTIONS(1202),
    [sym_parameter_char] = ACTIONS(1202),
    [sym_superscript] = ACTIONS(1204),
    [sym_subscript] = ACTIONS(1202),
    [sym_active_char] = ACTIONS(1202),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1202),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1202),
  },
  [330] = {
    [sym__common] = STATE(330),
    [sym__math_mode_common] = STATE(330),
    [sym__math_mode_at] = STATE(330),
    [sym_parameter] = STATE(330),
    [sym_math_env_at] = STATE(330),
    [sym_tag_at] = STATE(330),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(330),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(330),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(330),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(330),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(330),
    [sym_opt_math_group_at] = STATE(330),
    [sym_token_at] = STATE(330),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(330),
    [aux_sym_math_mode_at_repeat1] = STATE(330),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1182),
    [sym_begin_group] = ACTIONS(1185),
    [sym_alignment_tab] = ACTIONS(1206),
    [sym_parameter_char] = ACTIONS(1193),
    [sym_superscript] = ACTIONS(1209),
    [sym_subscript] = ACTIONS(1206),
    [sym_active_char] = ACTIONS(1206),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1212),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1212),
  },
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(1215),
    [anon_sym_RBRACK] = ACTIONS(1215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1215),
    [sym_begin_group] = ACTIONS(1215),
    [sym_end_group] = ACTIONS(1215),
    [sym_math_shift] = ACTIONS(1215),
    [sym_alignment_tab] = ACTIONS(1215),
    [sym_parameter_char] = ACTIONS(1215),
    [sym_superscript] = ACTIONS(1217),
    [sym_subscript] = ACTIONS(1215),
    [sym_active_char] = ACTIONS(1215),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1215),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1215),
  },
  [332] = {
    [anon_sym_LBRACK] = ACTIONS(1219),
    [anon_sym_RBRACK] = ACTIONS(1219),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1219),
    [sym_begin_group] = ACTIONS(1219),
    [sym_end_group] = ACTIONS(1219),
    [sym_math_shift] = ACTIONS(1219),
    [sym_alignment_tab] = ACTIONS(1219),
    [sym_parameter_char] = ACTIONS(1219),
    [sym_superscript] = ACTIONS(1221),
    [sym_subscript] = ACTIONS(1219),
    [sym_active_char] = ACTIONS(1219),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1219),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1219),
  },
  [333] = {
    [anon_sym_LBRACK] = ACTIONS(1223),
    [anon_sym_RBRACK] = ACTIONS(1223),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1223),
    [sym_begin_group] = ACTIONS(1223),
    [sym_end_group] = ACTIONS(1223),
    [sym_math_shift] = ACTIONS(1223),
    [sym_alignment_tab] = ACTIONS(1223),
    [sym_parameter_char] = ACTIONS(1223),
    [sym_superscript] = ACTIONS(1225),
    [sym_subscript] = ACTIONS(1223),
    [sym_active_char] = ACTIONS(1223),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1223),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1223),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(1227),
    [anon_sym_RBRACK] = ACTIONS(1227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1227),
    [sym_begin_group] = ACTIONS(1227),
    [sym_end_group] = ACTIONS(1227),
    [sym_math_shift] = ACTIONS(1227),
    [sym_alignment_tab] = ACTIONS(1227),
    [sym_parameter_char] = ACTIONS(1227),
    [sym_superscript] = ACTIONS(1229),
    [sym_subscript] = ACTIONS(1227),
    [sym_active_char] = ACTIONS(1227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1227),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1227),
  },
  [335] = {
    [sym__common] = STATE(372),
    [sym__text_mode_common] = STATE(372),
    [sym_inline_verbatim] = STATE(372),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(372),
    [sym_parameter] = STATE(372),
    [sym_text_env_at] = STATE(372),
    [sym__display_math_at] = STATE(372),
    [sym_tex_display_math_at] = STATE(372),
    [sym_latex_display_math_at] = STATE(372),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(372),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(372),
    [sym_tex_inline_math_at] = STATE(372),
    [sym_latex_inline_math_at] = STATE(372),
    [sym_inline_math_env_at] = STATE(372),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(372),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(372),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(372),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(372),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(372),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(372),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(372),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(372),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(372),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(372),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(372),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(372),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(372),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(372),
    [sym_opt_text_group_at] = STATE(372),
    [sym_token_at] = STATE(372),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(372),
    [aux_sym_text_mode_at_repeat1] = STATE(372),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1231),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(1233),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(1233),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [336] = {
    [anon_sym_LBRACK] = ACTIONS(1235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1235),
    [sym_begin_group] = ACTIONS(1235),
    [sym_alignment_tab] = ACTIONS(1235),
    [sym_parameter_char] = ACTIONS(1235),
    [sym_superscript] = ACTIONS(1237),
    [sym_subscript] = ACTIONS(1235),
    [sym_active_char] = ACTIONS(1235),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1235),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1235),
  },
  [337] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1239),
  },
  [338] = {
    [sym_text_group_at] = STATE(375),
    [sym__whitespace] = ACTIONS(1241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(869),
    [sym__end_of_line] = ACTIONS(1239),
  },
  [339] = {
    [sym_text_group_at] = STATE(376),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [340] = {
    [anon_sym_LBRACK] = ACTIONS(1243),
    [anon_sym_RBRACK] = ACTIONS(1243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1243),
    [sym_begin_group] = ACTIONS(1243),
    [sym_end_group] = ACTIONS(1243),
    [sym_math_shift] = ACTIONS(1243),
    [sym_alignment_tab] = ACTIONS(1243),
    [sym_parameter_char] = ACTIONS(1243),
    [sym_superscript] = ACTIONS(1245),
    [sym_subscript] = ACTIONS(1243),
    [sym_active_char] = ACTIONS(1243),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1243),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1243),
  },
  [341] = {
    [sym__whitespace] = ACTIONS(907),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(907),
    [sym__end_of_line] = ACTIONS(907),
  },
  [342] = {
    [sym__common] = STATE(346),
    [sym__text_mode_common] = STATE(346),
    [sym_inline_verbatim] = STATE(346),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(346),
    [sym_parameter] = STATE(346),
    [sym_text_env_at] = STATE(346),
    [sym__display_math_at] = STATE(346),
    [sym_tex_display_math_at] = STATE(346),
    [sym_latex_display_math_at] = STATE(346),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(346),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(346),
    [sym_tex_inline_math_at] = STATE(346),
    [sym_latex_inline_math_at] = STATE(346),
    [sym_inline_math_env_at] = STATE(346),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(346),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(346),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(346),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(346),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(346),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(346),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(346),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(346),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(346),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(346),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(346),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(346),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(346),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(346),
    [sym_opt_text_group_at] = STATE(346),
    [sym_token_at] = STATE(346),
    [sym_begin_opt] = STATE(126),
    [sym_end_opt] = STATE(377),
    [sym_text] = STATE(346),
    [aux_sym_text_mode_at_repeat1] = STATE(346),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(911),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(911),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(147),
  },
  [343] = {
    [sym_text_group_at] = STATE(378),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [344] = {
    [anon_sym_LBRACK] = ACTIONS(1247),
    [anon_sym_RBRACK] = ACTIONS(1247),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1247),
    [sym_begin_group] = ACTIONS(1247),
    [sym_end_group] = ACTIONS(1247),
    [sym_math_shift] = ACTIONS(1247),
    [sym_alignment_tab] = ACTIONS(1247),
    [sym_parameter_char] = ACTIONS(1247),
    [sym_superscript] = ACTIONS(1249),
    [sym_subscript] = ACTIONS(1247),
    [sym_active_char] = ACTIONS(1247),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1247),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1247),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(1251),
    [anon_sym_RBRACK] = ACTIONS(1251),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1251),
    [sym_begin_group] = ACTIONS(1251),
    [sym_end_group] = ACTIONS(1251),
    [sym_math_shift] = ACTIONS(1251),
    [sym_alignment_tab] = ACTIONS(1251),
    [sym_parameter_char] = ACTIONS(1251),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1251),
    [sym_active_char] = ACTIONS(1251),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1251),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1251),
  },
  [346] = {
    [sym__common] = STATE(346),
    [sym__text_mode_common] = STATE(346),
    [sym_inline_verbatim] = STATE(346),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(346),
    [sym_parameter] = STATE(346),
    [sym_text_env_at] = STATE(346),
    [sym__display_math_at] = STATE(346),
    [sym_tex_display_math_at] = STATE(346),
    [sym_latex_display_math_at] = STATE(346),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(346),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(346),
    [sym_tex_inline_math_at] = STATE(346),
    [sym_latex_inline_math_at] = STATE(346),
    [sym_inline_math_env_at] = STATE(346),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(346),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(346),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(346),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(346),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(346),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(346),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(346),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(346),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(346),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(346),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(346),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(346),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(346),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(346),
    [sym_opt_text_group_at] = STATE(346),
    [sym_token_at] = STATE(346),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(346),
    [aux_sym_text_mode_at_repeat1] = STATE(346),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(913),
    [anon_sym_RBRACK] = ACTIONS(1135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(916),
    [sym_begin_group] = ACTIONS(919),
    [sym_math_shift] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(1255),
    [sym_parameter_char] = ACTIONS(928),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(1255),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1258),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1258),
  },
  [347] = {
    [aux_sym__name_repeat1] = STATE(347),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(1261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1264),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(1267),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1267),
  },
  [349] = {
    [aux_sym__name_repeat1] = STATE(349),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(1269),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_end_group] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1272),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(1275),
    [anon_sym_LBRACK] = ACTIONS(1275),
    [anon_sym_RBRACK] = ACTIONS(1275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1275),
    [sym_begin_group] = ACTIONS(1275),
    [sym_end_group] = ACTIONS(1275),
    [sym_math_shift] = ACTIONS(1275),
    [sym_alignment_tab] = ACTIONS(1275),
    [sym_parameter_char] = ACTIONS(1275),
    [sym_superscript] = ACTIONS(1277),
    [sym_subscript] = ACTIONS(1275),
    [sym_active_char] = ACTIONS(1275),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1275),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1275),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(1279),
    [anon_sym_RBRACK] = ACTIONS(1279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1279),
    [sym_begin_group] = ACTIONS(1279),
    [sym_end_group] = ACTIONS(1279),
    [sym_math_shift] = ACTIONS(1279),
    [sym_alignment_tab] = ACTIONS(1279),
    [sym_parameter_char] = ACTIONS(1279),
    [sym_superscript] = ACTIONS(1281),
    [sym_subscript] = ACTIONS(1279),
    [sym_active_char] = ACTIONS(1279),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1279),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1279),
  },
  [352] = {
    [aux_sym__name_repeat1] = STATE(352),
    [sym__whitespace] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_double_circumflex] = ACTIONS(1283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1286),
    [sym_active_char] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(564),
  },
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(1289),
    [anon_sym_LBRACK] = ACTIONS(1289),
    [anon_sym_RBRACK] = ACTIONS(1289),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1289),
    [sym_begin_group] = ACTIONS(1289),
    [sym_end_group] = ACTIONS(1289),
    [sym_math_shift] = ACTIONS(1289),
    [sym_alignment_tab] = ACTIONS(1289),
    [sym_parameter_char] = ACTIONS(1289),
    [sym_superscript] = ACTIONS(1291),
    [sym_subscript] = ACTIONS(1289),
    [sym_active_char] = ACTIONS(1289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1289),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1289),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(1293),
    [anon_sym_LBRACK] = ACTIONS(1293),
    [anon_sym_RBRACK] = ACTIONS(1293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1293),
    [sym_begin_group] = ACTIONS(1293),
    [sym_end_group] = ACTIONS(1293),
    [sym_math_shift] = ACTIONS(1293),
    [sym_alignment_tab] = ACTIONS(1293),
    [sym_parameter_char] = ACTIONS(1293),
    [sym_superscript] = ACTIONS(1295),
    [sym_subscript] = ACTIONS(1293),
    [sym_active_char] = ACTIONS(1293),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1293),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1293),
  },
  [355] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1297),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(1080),
    [anon_sym_LBRACK] = ACTIONS(1080),
    [anon_sym_RBRACK] = ACTIONS(1080),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1080),
    [sym_begin_group] = ACTIONS(1080),
    [sym_end_group] = ACTIONS(1080),
    [sym_math_shift] = ACTIONS(1080),
    [sym_alignment_tab] = ACTIONS(1080),
    [sym_parameter_char] = ACTIONS(1080),
    [sym_superscript] = ACTIONS(1299),
    [sym_subscript] = ACTIONS(1080),
    [sym_active_char] = ACTIONS(1080),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1080),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1080),
  },
  [357] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(576),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(1301),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1301),
    [sym_begin_group] = ACTIONS(1301),
    [sym_alignment_tab] = ACTIONS(1301),
    [sym_parameter_char] = ACTIONS(1301),
    [sym_superscript] = ACTIONS(1303),
    [sym_subscript] = ACTIONS(1301),
    [sym_active_char] = ACTIONS(1301),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1301),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1301),
  },
  [359] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1305),
  },
  [360] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1307),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1309),
    [sym__end_of_line] = ACTIONS(1309),
  },
  [361] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1311),
  },
  [362] = {
    [anon_sym_LBRACK] = ACTIONS(1313),
    [anon_sym_RBRACK] = ACTIONS(1313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1313),
    [sym_begin_group] = ACTIONS(1313),
    [sym_end_group] = ACTIONS(1313),
    [sym_math_shift] = ACTIONS(1313),
    [sym_alignment_tab] = ACTIONS(1313),
    [sym_parameter_char] = ACTIONS(1313),
    [sym_superscript] = ACTIONS(1315),
    [sym_subscript] = ACTIONS(1313),
    [sym_active_char] = ACTIONS(1313),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1313),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1313),
  },
  [363] = {
    [sym__common] = STATE(363),
    [sym__math_mode_common] = STATE(363),
    [sym__math_mode_at] = STATE(363),
    [sym_parameter] = STATE(363),
    [sym_math_env_at] = STATE(363),
    [sym_tag_at] = STATE(363),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(363),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(363),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(363),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(363),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(363),
    [sym_opt_math_group_at] = STATE(363),
    [sym_token_at] = STATE(363),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(363),
    [aux_sym_math_mode_at_repeat1] = STATE(363),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1182),
    [sym_begin_group] = ACTIONS(1185),
    [sym_end_group] = ACTIONS(1188),
    [sym_alignment_tab] = ACTIONS(1317),
    [sym_parameter_char] = ACTIONS(1193),
    [sym_superscript] = ACTIONS(1320),
    [sym_subscript] = ACTIONS(1317),
    [sym_active_char] = ACTIONS(1317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1323),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1323),
  },
  [364] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1326),
  },
  [365] = {
    [anon_sym_LBRACK] = ACTIONS(1328),
    [anon_sym_RBRACK] = ACTIONS(1328),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1328),
    [sym_begin_group] = ACTIONS(1328),
    [sym_end_group] = ACTIONS(1328),
    [sym_math_shift] = ACTIONS(1328),
    [sym_alignment_tab] = ACTIONS(1328),
    [sym_parameter_char] = ACTIONS(1328),
    [sym_superscript] = ACTIONS(1330),
    [sym_subscript] = ACTIONS(1328),
    [sym_active_char] = ACTIONS(1328),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1328),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1328),
  },
  [366] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1332),
  },
  [367] = {
    [sym__common] = STATE(316),
    [sym__text_mode_common] = STATE(316),
    [sym_inline_verbatim] = STATE(316),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_text_env_at] = STATE(316),
    [sym__display_math_at] = STATE(316),
    [sym_tex_display_math_at] = STATE(316),
    [sym_latex_display_math_at] = STATE(316),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(316),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(316),
    [sym_tex_inline_math_at] = STATE(316),
    [sym_latex_inline_math_at] = STATE(316),
    [sym_inline_math_env_at] = STATE(316),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(316),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(316),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(316),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(316),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(316),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(316),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(316),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(316),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(316),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(316),
    [sym_opt_text_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(316),
    [aux_sym_text_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(455),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [368] = {
    [anon_sym_LBRACK] = ACTIONS(1334),
    [anon_sym_RBRACK] = ACTIONS(1334),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1334),
    [sym_begin_group] = ACTIONS(1334),
    [sym_end_group] = ACTIONS(1334),
    [sym_math_shift] = ACTIONS(1334),
    [sym_alignment_tab] = ACTIONS(1334),
    [sym_parameter_char] = ACTIONS(1334),
    [sym_superscript] = ACTIONS(1336),
    [sym_subscript] = ACTIONS(1334),
    [sym_active_char] = ACTIONS(1334),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1334),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1334),
  },
  [369] = {
    [anon_sym_LBRACK] = ACTIONS(1338),
    [anon_sym_RBRACK] = ACTIONS(1338),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1338),
    [sym_begin_group] = ACTIONS(1338),
    [sym_end_group] = ACTIONS(1338),
    [sym_math_shift] = ACTIONS(1338),
    [sym_alignment_tab] = ACTIONS(1338),
    [sym_parameter_char] = ACTIONS(1338),
    [sym_superscript] = ACTIONS(1340),
    [sym_subscript] = ACTIONS(1338),
    [sym_active_char] = ACTIONS(1338),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1338),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1338),
  },
  [370] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(233),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(234),
    [sym_begin_token] = STATE(63),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(117),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(235),
    [sym_text] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [anon_sym_RBRACK] = ACTIONS(1188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1182),
    [sym_begin_group] = ACTIONS(1185),
    [sym_alignment_tab] = ACTIONS(1342),
    [sym_parameter_char] = ACTIONS(1193),
    [sym_superscript] = ACTIONS(1345),
    [sym_subscript] = ACTIONS(1342),
    [sym_active_char] = ACTIONS(1342),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1348),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1348),
  },
  [371] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(821),
  },
  [372] = {
    [sym__common] = STATE(316),
    [sym__text_mode_common] = STATE(316),
    [sym_inline_verbatim] = STATE(316),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_text_env_at] = STATE(316),
    [sym__display_math_at] = STATE(316),
    [sym_tex_display_math_at] = STATE(316),
    [sym_latex_display_math_at] = STATE(316),
    [sym_begin_display_math] = STATE(111),
    [sym_begin_inline_math] = STATE(112),
    [sym_display_math_env_at] = STATE(316),
    [sym_display_math_begin_at] = STATE(113),
    [sym__inline_math_at] = STATE(316),
    [sym_tex_inline_math_at] = STATE(316),
    [sym_latex_inline_math_at] = STATE(316),
    [sym_inline_math_env_at] = STATE(316),
    [sym_inline_math_begin] = STATE(114),
    [sym_verbatim_env] = STATE(316),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(316),
    [sym_begin] = STATE(115),
    [sym_begin_token] = STATE(116),
    [sym_documentclass] = STATE(316),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(316),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(316),
    [sym_include_token] = STATE(117),
    [sym_section_at] = STATE(316),
    [sym_section_token] = STATE(118),
    [sym_storage] = STATE(316),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(316),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(316),
    [sym_emph_token] = STATE(119),
    [sym_footnote_at] = STATE(316),
    [sym_footnote_token] = STATE(120),
    [sym_textbf_at] = STATE(316),
    [sym_textbf_token] = STATE(121),
    [sym_textit_at] = STATE(316),
    [sym_textit_token] = STATE(122),
    [sym_texttt_at] = STATE(316),
    [sym_texttt_token] = STATE(123),
    [sym_text_group_at] = STATE(316),
    [sym_opt_text_group_at] = STATE(316),
    [sym_token_at] = STATE(316),
    [sym_begin_opt] = STATE(126),
    [sym_text] = STATE(316),
    [aux_sym_text_mode_at_repeat1] = STATE(316),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1351),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(77),
  },
  [373] = {
    [anon_sym_LBRACK] = ACTIONS(1353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1353),
    [sym_begin_group] = ACTIONS(1353),
    [sym_alignment_tab] = ACTIONS(1353),
    [sym_parameter_char] = ACTIONS(1353),
    [sym_superscript] = ACTIONS(1355),
    [sym_subscript] = ACTIONS(1353),
    [sym_active_char] = ACTIONS(1353),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1353),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1353),
  },
  [374] = {
    [sym_text_group_at] = STATE(386),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(869),
    [sym__end_of_line] = ACTIONS(1357),
  },
  [375] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1357),
  },
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(1359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1359),
    [sym_begin_group] = ACTIONS(1359),
    [sym_end_group] = ACTIONS(1359),
    [sym_math_shift] = ACTIONS(1359),
    [sym_alignment_tab] = ACTIONS(1359),
    [sym_parameter_char] = ACTIONS(1359),
    [sym_superscript] = ACTIONS(1361),
    [sym_subscript] = ACTIONS(1359),
    [sym_active_char] = ACTIONS(1359),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1359),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1359),
  },
  [377] = {
    [sym__whitespace] = ACTIONS(1251),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1251),
    [sym__end_of_line] = ACTIONS(1251),
  },
  [378] = {
    [anon_sym_LBRACK] = ACTIONS(1363),
    [anon_sym_RBRACK] = ACTIONS(1363),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1363),
    [sym_begin_group] = ACTIONS(1363),
    [sym_end_group] = ACTIONS(1363),
    [sym_math_shift] = ACTIONS(1363),
    [sym_alignment_tab] = ACTIONS(1363),
    [sym_parameter_char] = ACTIONS(1363),
    [sym_superscript] = ACTIONS(1365),
    [sym_subscript] = ACTIONS(1363),
    [sym_active_char] = ACTIONS(1363),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1363),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1363),
  },
  [379] = {
    [ts_builtin_sym_end] = ACTIONS(1074),
    [anon_sym_LBRACK] = ACTIONS(1074),
    [anon_sym_RBRACK] = ACTIONS(1074),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1074),
    [sym_begin_group] = ACTIONS(1074),
    [sym_end_group] = ACTIONS(1074),
    [sym_math_shift] = ACTIONS(1074),
    [sym_alignment_tab] = ACTIONS(1074),
    [sym_parameter_char] = ACTIONS(1074),
    [sym_superscript] = ACTIONS(1367),
    [sym_subscript] = ACTIONS(1074),
    [sym_active_char] = ACTIONS(1074),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1074),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1074),
  },
  [380] = {
    [anon_sym_LBRACK] = ACTIONS(1369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1369),
    [sym_begin_group] = ACTIONS(1369),
    [sym_alignment_tab] = ACTIONS(1369),
    [sym_parameter_char] = ACTIONS(1369),
    [sym_superscript] = ACTIONS(1371),
    [sym_subscript] = ACTIONS(1369),
    [sym_active_char] = ACTIONS(1369),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1369),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1369),
  },
  [381] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1373),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1375),
    [sym__end_of_line] = ACTIONS(1375),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(1377),
    [anon_sym_RBRACK] = ACTIONS(1377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1377),
    [sym_begin_group] = ACTIONS(1377),
    [sym_end_group] = ACTIONS(1377),
    [sym_math_shift] = ACTIONS(1377),
    [sym_alignment_tab] = ACTIONS(1377),
    [sym_parameter_char] = ACTIONS(1377),
    [sym_superscript] = ACTIONS(1379),
    [sym_subscript] = ACTIONS(1377),
    [sym_active_char] = ACTIONS(1377),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1377),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1377),
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_RBRACK] = ACTIONS(1381),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1381),
    [sym_begin_group] = ACTIONS(1381),
    [sym_end_group] = ACTIONS(1381),
    [sym_math_shift] = ACTIONS(1381),
    [sym_alignment_tab] = ACTIONS(1381),
    [sym_parameter_char] = ACTIONS(1381),
    [sym_superscript] = ACTIONS(1383),
    [sym_subscript] = ACTIONS(1381),
    [sym_active_char] = ACTIONS(1381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1381),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1381),
  },
  [384] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1131),
  },
  [385] = {
    [anon_sym_LBRACK] = ACTIONS(1385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1385),
    [sym_begin_group] = ACTIONS(1385),
    [sym_alignment_tab] = ACTIONS(1385),
    [sym_parameter_char] = ACTIONS(1385),
    [sym_superscript] = ACTIONS(1387),
    [sym_subscript] = ACTIONS(1385),
    [sym_active_char] = ACTIONS(1385),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1385),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1385),
  },
  [386] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1389),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(1391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1391),
    [sym_begin_group] = ACTIONS(1391),
    [sym_alignment_tab] = ACTIONS(1391),
    [sym_parameter_char] = ACTIONS(1391),
    [sym_superscript] = ACTIONS(1393),
    [sym_subscript] = ACTIONS(1391),
    [sym_active_char] = ACTIONS(1391),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1391),
    [aux_sym_SLASH_BSLASH_CARET_BSLASH_CARET_LPAREN_LBRACK0_DASH9a_DASHf_RBRACK_LBRACK0_DASH9a_DASHf_RBRACK_PIPE_DOT_RPAREN_SLASH] = ACTIONS(1391),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(31),
  [21] = {.count = 1, .reusable = true}, SHIFT(32),
  [23] = {.count = 1, .reusable = false}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, SHIFT(6),
  [27] = {.count = 1, .reusable = true}, SHIFT(33),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(34),
  [35] = {.count = 1, .reusable = false}, SHIFT(35),
  [37] = {.count = 1, .reusable = true}, SHIFT(36),
  [39] = {.count = 1, .reusable = true}, SHIFT(37),
  [41] = {.count = 1, .reusable = false}, SHIFT(38),
  [43] = {.count = 1, .reusable = false}, SHIFT(39),
  [45] = {.count = 1, .reusable = false}, SHIFT(40),
  [47] = {.count = 1, .reusable = false}, SHIFT(41),
  [49] = {.count = 1, .reusable = false}, SHIFT(42),
  [51] = {.count = 1, .reusable = false}, SHIFT(43),
  [53] = {.count = 1, .reusable = true}, SHIFT(44),
  [55] = {.count = 1, .reusable = false}, SHIFT(45),
  [57] = {.count = 1, .reusable = false}, SHIFT(46),
  [59] = {.count = 1, .reusable = false}, SHIFT(47),
  [61] = {.count = 1, .reusable = false}, SHIFT(48),
  [63] = {.count = 1, .reusable = false}, SHIFT(49),
  [65] = {.count = 1, .reusable = false}, SHIFT(50),
  [67] = {.count = 1, .reusable = true}, SHIFT(52),
  [69] = {.count = 1, .reusable = false}, SHIFT(52),
  [71] = {.count = 1, .reusable = true}, SHIFT(53),
  [73] = {.count = 1, .reusable = true}, SHIFT(54),
  [75] = {.count = 1, .reusable = true}, SHIFT(55),
  [77] = {.count = 1, .reusable = true}, SHIFT(56),
  [79] = {.count = 1, .reusable = true}, SHIFT(57),
  [81] = {.count = 1, .reusable = true}, SHIFT(58),
  [83] = {.count = 1, .reusable = true}, SHIFT(59),
  [85] = {.count = 1, .reusable = true}, SHIFT(65),
  [87] = {.count = 1, .reusable = false}, SHIFT(65),
  [89] = {.count = 1, .reusable = true}, SHIFT(66),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [95] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [97] = {.count = 1, .reusable = true}, SHIFT(67),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(68),
  [103] = {.count = 1, .reusable = true}, SHIFT(70),
  [105] = {.count = 1, .reusable = false}, SHIFT(70),
  [107] = {.count = 1, .reusable = true}, SHIFT(71),
  [109] = {.count = 1, .reusable = false}, SHIFT(79),
  [111] = {.count = 1, .reusable = true}, SHIFT(75),
  [113] = {.count = 1, .reusable = true}, SHIFT(80),
  [115] = {.count = 1, .reusable = true}, SHIFT(81),
  [117] = {.count = 1, .reusable = true}, SHIFT(84),
  [119] = {.count = 1, .reusable = true}, SHIFT(85),
  [121] = {.count = 1, .reusable = true}, SHIFT(90),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(99),
  [129] = {.count = 1, .reusable = true}, SHIFT(107),
  [131] = {.count = 1, .reusable = true}, SHIFT(108),
  [133] = {.count = 1, .reusable = true}, SHIFT(109),
  [135] = {.count = 1, .reusable = true}, SHIFT(127),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(128),
  [143] = {.count = 1, .reusable = true}, SHIFT(129),
  [145] = {.count = 1, .reusable = true}, SHIFT(131),
  [147] = {.count = 1, .reusable = true}, SHIFT(132),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [151] = {.count = 1, .reusable = true}, SHIFT(133),
  [153] = {.count = 1, .reusable = true}, SHIFT(135),
  [155] = {.count = 1, .reusable = true}, SHIFT(134),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [167] = {.count = 1, .reusable = false}, SHIFT(137),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [173] = {.count = 1, .reusable = false}, SHIFT(138),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(139),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(140),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(141),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(142),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(143),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(144),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [203] = {.count = 1, .reusable = false}, SHIFT(145),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(146),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(147),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(148),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(149),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(150),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [229] = {.count = 1, .reusable = false}, SHIFT(151),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [237] = {.count = 1, .reusable = false}, SHIFT(152),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__name, 1),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__name, 1),
  [245] = {.count = 1, .reusable = true}, SHIFT(153),
  [247] = {.count = 1, .reusable = false}, SHIFT(153),
  [249] = {.count = 1, .reusable = true}, SHIFT(154),
  [251] = {.count = 1, .reusable = false}, SHIFT(154),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(155),
  [259] = {.count = 1, .reusable = true}, SHIFT(156),
  [261] = {.count = 1, .reusable = false}, SHIFT(158),
  [263] = {.count = 1, .reusable = true}, SHIFT(159),
  [265] = {.count = 1, .reusable = false}, SHIFT(159),
  [267] = {.count = 1, .reusable = true}, SHIFT(160),
  [269] = {.count = 1, .reusable = true}, SHIFT(161),
  [271] = {.count = 1, .reusable = true}, SHIFT(162),
  [273] = {.count = 1, .reusable = false}, SHIFT(162),
  [275] = {.count = 1, .reusable = true}, SHIFT(163),
  [277] = {.count = 1, .reusable = true}, SHIFT(165),
  [279] = {.count = 1, .reusable = true}, SHIFT(166),
  [281] = {.count = 1, .reusable = true}, SHIFT(168),
  [283] = {.count = 1, .reusable = true}, SHIFT(170),
  [285] = {.count = 1, .reusable = false}, SHIFT(170),
  [287] = {.count = 1, .reusable = true}, SHIFT(171),
  [289] = {.count = 1, .reusable = true}, SHIFT(173),
  [291] = {.count = 1, .reusable = false}, SHIFT(173),
  [293] = {.count = 1, .reusable = true}, SHIFT(174),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [297] = {.count = 1, .reusable = true}, SHIFT(175),
  [299] = {.count = 1, .reusable = false}, SHIFT(175),
  [301] = {.count = 1, .reusable = true}, SHIFT(177),
  [303] = {.count = 1, .reusable = true}, SHIFT(178),
  [305] = {.count = 1, .reusable = false}, SHIFT(178),
  [307] = {.count = 1, .reusable = true}, SHIFT(179),
  [309] = {.count = 1, .reusable = true}, SHIFT(181),
  [311] = {.count = 1, .reusable = false}, SHIFT(181),
  [313] = {.count = 1, .reusable = true}, SHIFT(183),
  [315] = {.count = 1, .reusable = true}, SHIFT(189),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(191),
  [323] = {.count = 1, .reusable = false}, SHIFT(194),
  [325] = {.count = 1, .reusable = true}, SHIFT(193),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(195),
  [331] = {.count = 1, .reusable = false}, SHIFT(189),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(198),
  [339] = {.count = 1, .reusable = false}, SHIFT(199),
  [341] = {.count = 1, .reusable = false}, SHIFT(200),
  [343] = {.count = 1, .reusable = false}, SHIFT(201),
  [345] = {.count = 1, .reusable = false}, SHIFT(203),
  [347] = {.count = 1, .reusable = true}, SHIFT(203),
  [349] = {.count = 1, .reusable = true}, SHIFT(204),
  [351] = {.count = 1, .reusable = true}, SHIFT(205),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_begin, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(208),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [367] = {.count = 1, .reusable = true}, SHIFT(211),
  [369] = {.count = 1, .reusable = true}, SHIFT(213),
  [371] = {.count = 1, .reusable = true}, SHIFT(215),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [377] = {.count = 1, .reusable = true}, SHIFT(216),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [387] = {.count = 1, .reusable = true}, SHIFT(218),
  [389] = {.count = 1, .reusable = true}, SHIFT(220),
  [391] = {.count = 1, .reusable = true}, SHIFT(221),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_emph, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 2),
  [401] = {.count = 1, .reusable = true}, SHIFT(222),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_textbf, 2),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_textit, 2),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_texttt, 2),
  [415] = {.count = 1, .reusable = false}, SHIFT(224),
  [417] = {.count = 1, .reusable = false}, SHIFT(225),
  [419] = {.count = 1, .reusable = true}, SHIFT(226),
  [421] = {.count = 1, .reusable = true}, SHIFT(227),
  [423] = {.count = 1, .reusable = true}, SHIFT(228),
  [425] = {.count = 1, .reusable = true}, SHIFT(229),
  [427] = {.count = 1, .reusable = true}, SHIFT(230),
  [429] = {.count = 1, .reusable = true}, SHIFT(231),
  [431] = {.count = 1, .reusable = true}, SHIFT(236),
  [433] = {.count = 1, .reusable = false}, SHIFT(236),
  [435] = {.count = 1, .reusable = true}, SHIFT(237),
  [437] = {.count = 1, .reusable = true}, SHIFT(240),
  [439] = {.count = 1, .reusable = false}, SHIFT(240),
  [441] = {.count = 1, .reusable = true}, SHIFT(244),
  [443] = {.count = 1, .reusable = true}, SHIFT(246),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [453] = {.count = 1, .reusable = true}, SHIFT(259),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [457] = {.count = 1, .reusable = true}, SHIFT(260),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [463] = {.count = 1, .reusable = true}, SHIFT(261),
  [465] = {.count = 1, .reusable = false}, SHIFT(261),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [471] = {.count = 1, .reusable = true}, SHIFT(263),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [487] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(133),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(33),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(135),
  [509] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [511] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [513] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(136),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [534] = {.count = 1, .reusable = true}, SHIFT(265),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [538] = {.count = 1, .reusable = true}, SHIFT(266),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 3),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_token, 3),
  [562] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2),
  [564] = {.count = 1, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(153),
  [569] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(153),
  [572] = {.count = 1, .reusable = true}, SHIFT(267),
  [574] = {.count = 1, .reusable = false}, SHIFT(267),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [580] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(53),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(156),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(56),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(157),
  [592] = {.count = 1, .reusable = true}, SHIFT(268),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [596] = {.count = 1, .reusable = true}, SHIFT(269),
  [598] = {.count = 1, .reusable = false}, SHIFT(269),
  [600] = {.count = 1, .reusable = true}, SHIFT(270),
  [602] = {.count = 1, .reusable = false}, SHIFT(270),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [608] = {.count = 1, .reusable = true}, SHIFT(271),
  [610] = {.count = 1, .reusable = true}, SHIFT(272),
  [612] = {.count = 1, .reusable = false}, SHIFT(272),
  [614] = {.count = 1, .reusable = true}, SHIFT(274),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [620] = {.count = 1, .reusable = true}, SHIFT(275),
  [622] = {.count = 1, .reusable = true}, SHIFT(277),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 2),
  [632] = {.count = 1, .reusable = true}, SHIFT(279),
  [634] = {.count = 1, .reusable = false}, SHIFT(279),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [640] = {.count = 1, .reusable = true}, SHIFT(281),
  [642] = {.count = 1, .reusable = false}, SHIFT(281),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(57),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(58),
  [653] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(175),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(175),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(66),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(176),
  [670] = {.count = 1, .reusable = true}, SHIFT(283),
  [672] = {.count = 1, .reusable = true}, SHIFT(284),
  [674] = {.count = 1, .reusable = false}, SHIFT(284),
  [676] = {.count = 1, .reusable = true}, SHIFT(285),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(68),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(181),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(181),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(71),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(182),
  [697] = {.count = 1, .reusable = true}, SHIFT(286),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [707] = {.count = 1, .reusable = true}, SHIFT(287),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [711] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [713] = {.count = 1, .reusable = true}, SHIFT(289),
  [715] = {.count = 1, .reusable = true}, SHIFT(291),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 3),
  [723] = {.count = 1, .reusable = true}, SHIFT(292),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_end, 2),
  [729] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [731] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [733] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(194),
  [736] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [738] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(79),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(195),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 3),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(293),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(198),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(66),
  [761] = {.count = 1, .reusable = true}, SHIFT(294),
  [763] = {.count = 1, .reusable = true}, SHIFT(295),
  [765] = {.count = 1, .reusable = true}, SHIFT(296),
  [767] = {.count = 1, .reusable = true}, SHIFT(297),
  [769] = {.count = 1, .reusable = true}, SHIFT(298),
  [771] = {.count = 1, .reusable = true}, SHIFT(299),
  [773] = {.count = 1, .reusable = true}, SHIFT(300),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 3),
  [779] = {.count = 1, .reusable = true}, SHIFT(301),
  [781] = {.count = 1, .reusable = true}, SHIFT(302),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [787] = {.count = 1, .reusable = true}, SHIFT(304),
  [789] = {.count = 1, .reusable = true}, SHIFT(305),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [797] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [803] = {.count = 1, .reusable = true}, SHIFT(311),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [807] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 3),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [811] = {.count = 1, .reusable = false}, SHIFT(313),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [815] = {.count = 1, .reusable = false}, SHIFT(314),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 2),
  [825] = {.count = 1, .reusable = true}, SHIFT(315),
  [827] = {.count = 1, .reusable = true}, SHIFT(316),
  [829] = {.count = 1, .reusable = true}, SHIFT(317),
  [831] = {.count = 1, .reusable = true}, SHIFT(318),
  [833] = {.count = 1, .reusable = false}, SHIFT(318),
  [835] = {.count = 1, .reusable = true}, SHIFT(320),
  [837] = {.count = 1, .reusable = true}, SHIFT(321),
  [839] = {.count = 1, .reusable = true}, SHIFT(323),
  [841] = {.count = 1, .reusable = true}, SHIFT(325),
  [843] = {.count = 1, .reusable = false}, SHIFT(325),
  [845] = {.count = 1, .reusable = true}, SHIFT(327),
  [847] = {.count = 1, .reusable = false}, SHIFT(327),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [851] = {.count = 1, .reusable = true}, SHIFT(328),
  [853] = {.count = 1, .reusable = false}, SHIFT(328),
  [855] = {.count = 1, .reusable = true}, SHIFT(224),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 3),
  [861] = {.count = 1, .reusable = true}, SHIFT(330),
  [863] = {.count = 1, .reusable = false}, SHIFT(330),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 2),
  [869] = {.count = 1, .reusable = true}, SHIFT(335),
  [871] = {.count = 1, .reusable = true}, SHIFT(336),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_include_at, 2),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 2),
  [881] = {.count = 1, .reusable = true}, SHIFT(339),
  [883] = {.count = 1, .reusable = true}, SHIFT(342),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_emph_at, 2),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 2),
  [893] = {.count = 1, .reusable = true}, SHIFT(343),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_textbf_at, 2),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_textit_at, 2),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [905] = {.count = 1, .reusable = false}, REDUCE(sym_texttt_at, 2),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 2),
  [911] = {.count = 1, .reusable = true}, SHIFT(346),
  [913] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [916] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(226),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(108),
  [922] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(109),
  [925] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(260),
  [928] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [931] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [934] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(66),
  [940] = {.count = 1, .reusable = true}, SHIFT(347),
  [942] = {.count = 1, .reusable = false}, SHIFT(347),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [946] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [948] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(129),
  [951] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(263),
  [954] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(132),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(264),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [962] = {.count = 1, .reusable = true}, SHIFT(348),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(267),
  [967] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(267),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [972] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(269),
  [975] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(269),
  [978] = {.count = 1, .reusable = true}, SHIFT(349),
  [980] = {.count = 1, .reusable = false}, SHIFT(349),
  [982] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [984] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [986] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(160),
  [989] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(272),
  [992] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(272),
  [995] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(163),
  [998] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(273),
  [1001] = {.count = 1, .reusable = true}, SHIFT(350),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [1005] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [1007] = {.count = 1, .reusable = true}, SHIFT(351),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [1011] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 3),
  [1013] = {.count = 1, .reusable = true}, SHIFT(352),
  [1015] = {.count = 1, .reusable = false}, SHIFT(352),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [1019] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [1021] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(171),
  [1024] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(281),
  [1027] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(281),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(174),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(282),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [1038] = {.count = 1, .reusable = false}, REDUCE(sym_inline_verbatim, 4),
  [1040] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(284),
  [1043] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(284),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [1048] = {.count = 1, .reusable = false}, SHIFT(353),
  [1050] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [1054] = {.count = 1, .reusable = false}, SHIFT(354),
  [1056] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [1058] = {.count = 1, .reusable = true}, SHIFT(355),
  [1060] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [1062] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [1064] = {.count = 1, .reusable = true}, SHIFT(200),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [1068] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [1070] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [1072] = {.count = 1, .reusable = true}, SHIFT(356),
  [1074] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [1078] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [1080] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [1082] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [1084] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [1086] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(298),
  [1089] = {.count = 1, .reusable = true}, SHIFT(357),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [1093] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 4),
  [1095] = {.count = 1, .reusable = true}, SHIFT(358),
  [1097] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [1099] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [1101] = {.count = 1, .reusable = true}, SHIFT(360),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1105] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1107] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1109] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1113] = {.count = 1, .reusable = false}, REDUCE(sym_section, 4),
  [1115] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1117] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [1121] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 4),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1125] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 3),
  [1127] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1129] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 3),
  [1131] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1133] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 3),
  [1135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(316),
  [1140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(56),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1145] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 2),
  [1147] = {.count = 1, .reusable = true}, SHIFT(362),
  [1149] = {.count = 1, .reusable = true}, SHIFT(363),
  [1151] = {.count = 1, .reusable = false}, SHIFT(363),
  [1153] = {.count = 1, .reusable = true}, SHIFT(364),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1157] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math_at, 3),
  [1159] = {.count = 1, .reusable = true}, SHIFT(365),
  [1161] = {.count = 1, .reusable = true}, SHIFT(367),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1165] = {.count = 1, .reusable = false}, REDUCE(sym_tag_at, 2),
  [1167] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1169] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 2),
  [1171] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1173] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 2),
  [1175] = {.count = 1, .reusable = true}, SHIFT(370),
  [1177] = {.count = 1, .reusable = false}, SHIFT(370),
  [1179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [1182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(229),
  [1185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(230),
  [1188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [1193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [1196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [1199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(66),
  [1202] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1204] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math_at, 3),
  [1206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(330),
  [1209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(330),
  [1212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(71),
  [1215] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1217] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math_at, 3),
  [1219] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1221] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_at, 3),
  [1223] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1225] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_at, 3),
  [1227] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1229] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 3),
  [1231] = {.count = 1, .reusable = true}, SHIFT(371),
  [1233] = {.count = 1, .reusable = true}, SHIFT(372),
  [1235] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1237] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 3),
  [1239] = {.count = 1, .reusable = true}, SHIFT(373),
  [1241] = {.count = 1, .reusable = true}, SHIFT(374),
  [1243] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1245] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 3),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1249] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 3),
  [1251] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1253] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 3),
  [1255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(346),
  [1258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(132),
  [1261] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(347),
  [1264] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(347),
  [1267] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1269] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(349),
  [1272] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(349),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1277] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1281] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [1283] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(352),
  [1286] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(352),
  [1289] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1291] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 3),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1295] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 3),
  [1297] = {.count = 1, .reusable = true}, SHIFT(379),
  [1299] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env_group, 3),
  [1301] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1303] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 5),
  [1305] = {.count = 1, .reusable = true}, SHIFT(380),
  [1307] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1309] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1311] = {.count = 1, .reusable = true}, SHIFT(381),
  [1313] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1315] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 3),
  [1317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(363),
  [1320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(363),
  [1323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(163),
  [1326] = {.count = 1, .reusable = true}, SHIFT(382),
  [1328] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1330] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 2),
  [1332] = {.count = 1, .reusable = true}, SHIFT(383),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1336] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 3),
  [1338] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1340] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 3),
  [1342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(370),
  [1345] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(370),
  [1348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(174),
  [1351] = {.count = 1, .reusable = true}, SHIFT(384),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1355] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 4),
  [1357] = {.count = 1, .reusable = true}, SHIFT(385),
  [1359] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1361] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 4),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1365] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 4),
  [1367] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [1369] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1371] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 6),
  [1373] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1375] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1377] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1379] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math_at, 5),
  [1381] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1383] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 3),
  [1385] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1387] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 5),
  [1389] = {.count = 1, .reusable = true}, SHIFT(387),
  [1391] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
  [1393] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 6),
};

void *tree_sitter_latex_external_scanner_create();
void tree_sitter_latex_external_scanner_destroy(void *);
bool tree_sitter_latex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_latex_external_scanner_serialize(void *, char *);
void tree_sitter_latex_external_scanner_deserialize(void *, const char *, unsigned);

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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_latex_external_scanner_create,
      tree_sitter_latex_external_scanner_destroy,
      tree_sitter_latex_external_scanner_scan,
      tree_sitter_latex_external_scanner_serialize,
      tree_sitter_latex_external_scanner_deserialize,
    },
  };
  return &language;
}
