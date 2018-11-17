#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 388
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 4
#define TOKEN_COUNT 49
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
  sym_number = 48,
  sym_document = 49,
  sym__common = 50,
  sym__text_mode_common = 51,
  sym_inline_verbatim = 52,
  sym_verb_token = 53,
  sym__text_mode = 54,
  sym_text_mode = 55,
  sym__text_mode_at = 56,
  sym_text_mode_at = 57,
  sym_text_mode_at_region = 58,
  sym__math_mode_common = 59,
  sym__math_mode = 60,
  sym_math_mode = 61,
  sym__math_mode_at = 62,
  sym_math_mode_at = 63,
  sym_parameter = 64,
  sym_text_env = 65,
  sym_text_env_at = 66,
  sym_math_env = 67,
  sym_math_env_at = 68,
  sym__display_math = 69,
  sym__display_math_at = 70,
  sym_tex_display_math = 71,
  sym_tex_display_math_at = 72,
  sym_latex_display_math = 73,
  sym_latex_display_math_at = 74,
  sym_begin_display_math = 75,
  sym_end_display_math = 76,
  sym_begin_inline_math = 77,
  sym_end_inline_math = 78,
  sym_display_math_env = 79,
  sym_display_math_env_at = 80,
  sym_display_math_begin = 81,
  sym_display_math_begin_at = 82,
  sym_display_math_end = 83,
  sym_display_math_env_group = 84,
  sym__inline_math = 85,
  sym__inline_math_at = 86,
  sym_tex_inline_math = 87,
  sym_tex_inline_math_at = 88,
  sym_latex_inline_math = 89,
  sym_latex_inline_math_at = 90,
  sym_inline_math_env = 91,
  sym_inline_math_env_at = 92,
  sym_inline_math_begin = 93,
  sym_inline_math_end = 94,
  sym_inline_math_env_group = 95,
  sym_tag = 96,
  sym_tag_at = 97,
  sym_tag_token = 98,
  sym_verbatim_env = 99,
  sym_verbatim_begin = 100,
  sym_verbatim_end = 101,
  sym_verbatim_text = 102,
  sym_verbatim_env_group = 103,
  sym_escaped = 104,
  sym_begin = 105,
  sym_begin_token = 106,
  sym_end = 107,
  sym_end_token = 108,
  sym_documentclass = 109,
  sym_documentclass_token = 110,
  sym_usepackage = 111,
  sym_usepackage_token = 112,
  sym_include = 113,
  sym_include_at = 114,
  sym_include_token = 115,
  sym_section = 116,
  sym_section_at = 117,
  sym_section_token = 118,
  sym_storage = 119,
  sym_storage_token = 120,
  sym_catcode = 121,
  sym_catcode_token = 122,
  sym_emph = 123,
  sym_emph_at = 124,
  sym_emph_token = 125,
  sym_footnote = 126,
  sym_footnote_at = 127,
  sym_footnote_token = 128,
  sym_textbf = 129,
  sym_textbf_at = 130,
  sym_textbf_token = 131,
  sym_textit = 132,
  sym_textit_at = 133,
  sym_textit_token = 134,
  sym_texttt = 135,
  sym_texttt_at = 136,
  sym_texttt_token = 137,
  sym_makeatletter = 138,
  sym_makeatletter_token = 139,
  sym_makeatother = 140,
  sym_makeatother_token = 141,
  sym_text_group = 142,
  sym_text_group_at = 143,
  sym_simple_text_group = 144,
  sym_opt_text_group = 145,
  sym_opt_text_group_at = 146,
  sym_math_group = 147,
  sym_math_group_at = 148,
  sym_opt_math_group = 149,
  sym_opt_math_group_at = 150,
  sym_math_text_group = 151,
  sym_math_text_group_at = 152,
  sym_token = 153,
  sym_token_at = 154,
  sym_begin_opt = 155,
  sym_end_opt = 156,
  sym__name = 157,
  sym_text = 158,
  aux_sym_text_mode_repeat1 = 159,
  aux_sym_text_mode_at_repeat1 = 160,
  aux_sym_math_mode_repeat1 = 161,
  aux_sym_math_mode_at_repeat1 = 162,
  aux_sym_parameter_repeat1 = 163,
  aux_sym_verbatim_text_repeat1 = 164,
  aux_sym_verbatim_text_repeat2 = 165,
  aux_sym__name_repeat1 = 166,
  aux_sym_text_repeat1 = 167,
  anon_alias_sym_class_name = 168,
  anon_alias_sym_env_name = 169,
  anon_alias_sym_package_name = 170,
  anon_alias_sym_text = 171,
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
      ACCEPT_TOKEN(sym_double_circumflex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_double_circumflex);
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
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'c')
        ADVANCE(63);
      if (lookahead == 'd')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == 'f')
        ADVANCE(96);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == 'k')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(115);
      if (lookahead == 'p')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(163);
      if (lookahead == 'v')
        ADVANCE(173);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(48);
      if (lookahead == 'p')
        ADVANCE(53);
      if (lookahead == 's')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(64);
      if (lookahead == 'h')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == '`')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'm')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(92);
      if (lookahead == 'm')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'p')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'u')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'h')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'o')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'n')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'x')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(159);
      if (lookahead == 't')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'f')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'p')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'c')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'k')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 179:
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
    case 180:
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
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(184);
      END_STATE();
    case 185:
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
        ADVANCE(186);
      ADVANCE(41);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 187:
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
      if (lookahead == '^')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      if ((lookahead < 'A' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < 'A' || lookahead > '_') &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 190:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'c')
        ADVANCE(114);
      if (lookahead == 'd')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == 'k')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 194:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'c')
        ADVANCE(63);
      if (lookahead == 'd')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(195);
      if (lookahead == 'f')
        ADVANCE(96);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == 'k')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(115);
      if (lookahead == 'p')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(163);
      if (lookahead == 'v')
        ADVANCE(173);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(92);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 198:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(200);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(209);
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(245);
      if (lookahead == 'f')
        ADVANCE(253);
      if (lookahead == 'g')
        ADVANCE(258);
      if (lookahead == 'l')
        ADVANCE(263);
      if (lookahead == 'm')
        ADVANCE(272);
      if (lookahead == 's')
        ADVANCE(287);
      if (lookahead == 'v')
        ADVANCE(290);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'b')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(206);
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(211);
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
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(218);
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
      if (lookahead == 't')
        ADVANCE(208);
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
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == 'g')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(237);
      if (lookahead == 's')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'r')
        ADVANCE(222);
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
      if (lookahead == 'a')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'y')
        ADVANCE(216);
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
      if (lookahead == 'r')
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
      if (lookahead == 'o')
        ADVANCE(226);
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
      if (lookahead == 'u')
        ADVANCE(227);
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
      if (lookahead == 'p')
        ADVANCE(216);
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
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
        ADVANCE(231);
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
        ADVANCE(235);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(214);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(216);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
        ADVANCE(244);
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
      if (lookahead == 's')
        ADVANCE(216);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'u')
        ADVANCE(248);
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
      if (lookahead == 'a')
        ADVANCE(220);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
        ADVANCE(252);
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
      if (lookahead == 'n')
        ADVANCE(216);
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
      if (lookahead == 'l')
        ADVANCE(254);
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
        ADVANCE(255);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(252);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
        ADVANCE(260);
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(216);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
        ADVANCE(265);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
        ADVANCE(270);
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(208);
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
      if (lookahead == 'a')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'u')
        ADVANCE(280);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
        ADVANCE(279);
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
      if (lookahead == 'd')
        ADVANCE(208);
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'i')
        ADVANCE(283);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(216);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
        ADVANCE(215);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
        ADVANCE(294);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
        ADVANCE(208);
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
      if (lookahead == 'V')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 298:
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
    case 299:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 300:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(301);
      if (lookahead == 'b')
        ADVANCE(314);
      if (lookahead == 'c')
        ADVANCE(319);
      if (lookahead == 'd')
        ADVANCE(331);
      if (lookahead == 'e')
        ADVANCE(346);
      if (lookahead == 'f')
        ADVANCE(351);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'k')
        ADVANCE(368);
      if (lookahead == 'm')
        ADVANCE(370);
      if (lookahead == 'p')
        ADVANCE(384);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(407);
      if (lookahead == 'u')
        ADVANCE(417);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead == 'p')
        ADVANCE(309);
      if (lookahead == 's')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(320);
      if (lookahead == 'h')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(70);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(361);
      if (lookahead == 'p')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(371);
      if (lookahead == 'i')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(387);
      if (lookahead == 't')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(393);
      if (lookahead == 'u')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(400);
      if (lookahead == 's')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(393);
      if (lookahead == 'u')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(411);
      if (lookahead == 'i')
        ADVANCE(413);
      if (lookahead == 't')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(177);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 432:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < 'A' || lookahead > '_'))
        ADVANCE(41);
      END_STATE();
    case 433:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'c')
        ADVANCE(114);
      if (lookahead == 'd')
        ADVANCE(92);
      if (lookahead == 'e')
        ADVANCE(434);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == 'k')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (lookahead == 'd')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(52);
      END_STATE();
    case 435:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 436:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(301);
      if (lookahead == 'b')
        ADVANCE(314);
      if (lookahead == 'c')
        ADVANCE(319);
      if (lookahead == 'd')
        ADVANCE(331);
      if (lookahead == 'e')
        ADVANCE(346);
      if (lookahead == 'f')
        ADVANCE(351);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'k')
        ADVANCE(368);
      if (lookahead == 'm')
        ADVANCE(437);
      if (lookahead == 'p')
        ADVANCE(384);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(407);
      if (lookahead == 'u')
        ADVANCE(417);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 438:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(314);
      if (lookahead == 'c')
        ADVANCE(369);
      if (lookahead == 'd')
        ADVANCE(347);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'k')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(439);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(440);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'a')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'k')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'a')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 't')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'o')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 't')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'h')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'e')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'r')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 454:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(301);
      if (lookahead == 'b')
        ADVANCE(314);
      if (lookahead == 'c')
        ADVANCE(319);
      if (lookahead == 'd')
        ADVANCE(331);
      if (lookahead == 'e')
        ADVANCE(455);
      if (lookahead == 'f')
        ADVANCE(351);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'k')
        ADVANCE(368);
      if (lookahead == 'm')
        ADVANCE(437);
      if (lookahead == 'p')
        ADVANCE(384);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(407);
      if (lookahead == 'u')
        ADVANCE(417);
      if (lookahead == 'v')
        ADVANCE(427);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(348);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(457);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 458:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 459:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'b')
        ADVANCE(314);
      if (lookahead == 'c')
        ADVANCE(369);
      if (lookahead == 'd')
        ADVANCE(347);
      if (lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'k')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(439);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(347);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(308);
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
  [4] = {.lex_state = 179},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 180},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 36, .external_lex_state = 3},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 180},
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
  [32] = {.lex_state = 183},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 180},
  [35] = {.lex_state = 36, .external_lex_state = 3},
  [36] = {.lex_state = 185},
  [37] = {.lex_state = 185},
  [38] = {.lex_state = 187},
  [39] = {.lex_state = 187},
  [40] = {.lex_state = 187},
  [41] = {.lex_state = 187},
  [42] = {.lex_state = 187},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 187},
  [46] = {.lex_state = 187},
  [47] = {.lex_state = 187},
  [48] = {.lex_state = 187},
  [49] = {.lex_state = 187},
  [50] = {.lex_state = 185},
  [51] = {.lex_state = 185},
  [52] = {.lex_state = 188},
  [53] = {.lex_state = 43, .external_lex_state = 2},
  [54] = {.lex_state = 180},
  [55] = {.lex_state = 179},
  [56] = {.lex_state = 179},
  [57] = {.lex_state = 190, .external_lex_state = 2},
  [58] = {.lex_state = 179},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 181, .external_lex_state = 4},
  [68] = {.lex_state = 190, .external_lex_state = 2},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 194},
  [76] = {.lex_state = 180},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 198},
  [80] = {.lex_state = 182},
  [81] = {.lex_state = 194, .external_lex_state = 2},
  [82] = {.lex_state = 180},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 199},
  [86] = {.lex_state = 298},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 298},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 180},
  [92] = {.lex_state = 187},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 180},
  [95] = {.lex_state = 187},
  [96] = {.lex_state = 180},
  [97] = {.lex_state = 180},
  [98] = {.lex_state = 187},
  [99] = {.lex_state = 181, .external_lex_state = 2},
  [100] = {.lex_state = 299},
  [101] = {.lex_state = 180},
  [102] = {.lex_state = 180},
  [103] = {.lex_state = 187},
  [104] = {.lex_state = 180},
  [105] = {.lex_state = 180},
  [106] = {.lex_state = 180},
  [107] = {.lex_state = 300, .external_lex_state = 2},
  [108] = {.lex_state = 179},
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
  [124] = {.lex_state = 180},
  [125] = {.lex_state = 180},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 180},
  [129] = {.lex_state = 43, .external_lex_state = 2},
  [130] = {.lex_state = 180},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 180},
  [135] = {.lex_state = 183},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 187},
  [144] = {.lex_state = 187},
  [145] = {.lex_state = 180},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 180},
  [153] = {.lex_state = 188},
  [154] = {.lex_state = 432},
  [155] = {.lex_state = 180},
  [156] = {.lex_state = 179},
  [157] = {.lex_state = 179},
  [158] = {.lex_state = 187},
  [159] = {.lex_state = 188},
  [160] = {.lex_state = 190, .external_lex_state = 2},
  [161] = {.lex_state = 180},
  [162] = {.lex_state = 179},
  [163] = {.lex_state = 179},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 180},
  [166] = {.lex_state = 179},
  [167] = {.lex_state = 180},
  [168] = {.lex_state = 433, .external_lex_state = 2},
  [169] = {.lex_state = 180},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 190, .external_lex_state = 2},
  [172] = {.lex_state = 180},
  [173] = {.lex_state = 42},
  [174] = {.lex_state = 42},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 36, .external_lex_state = 3},
  [178] = {.lex_state = 188},
  [179] = {.lex_state = 42},
  [180] = {.lex_state = 180},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 435},
  [184] = {.lex_state = 180},
  [185] = {.lex_state = 180},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 180},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 187},
  [190] = {.lex_state = 180},
  [191] = {.lex_state = 199},
  [192] = {.lex_state = 180},
  [193] = {.lex_state = 182},
  [194] = {.lex_state = 198},
  [195] = {.lex_state = 182},
  [196] = {.lex_state = 180},
  [197] = {.lex_state = 180},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 179},
  [200] = {.lex_state = 179},
  [201] = {.lex_state = 179},
  [202] = {.lex_state = 179},
  [203] = {.lex_state = 179},
  [204] = {.lex_state = 179},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 298},
  [207] = {.lex_state = 298},
  [208] = {.lex_state = 182},
  [209] = {.lex_state = 298},
  [210] = {.lex_state = 298},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 180},
  [213] = {.lex_state = 298},
  [214] = {.lex_state = 298},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 180},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 180},
  [220] = {.lex_state = 299},
  [221] = {.lex_state = 183},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 180},
  [224] = {.lex_state = 185},
  [225] = {.lex_state = 185},
  [226] = {.lex_state = 436, .external_lex_state = 2},
  [227] = {.lex_state = 180},
  [228] = {.lex_state = 179},
  [229] = {.lex_state = 438, .external_lex_state = 2},
  [230] = {.lex_state = 179},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 42},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 442},
  [238] = {.lex_state = 180},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 454, .external_lex_state = 2},
  [245] = {.lex_state = 180},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 298},
  [248] = {.lex_state = 180},
  [249] = {.lex_state = 180},
  [250] = {.lex_state = 187},
  [251] = {.lex_state = 42},
  [252] = {.lex_state = 180},
  [253] = {.lex_state = 180},
  [254] = {.lex_state = 187},
  [255] = {.lex_state = 180},
  [256] = {.lex_state = 180},
  [257] = {.lex_state = 180},
  [258] = {.lex_state = 180},
  [259] = {.lex_state = 42},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 458},
  [262] = {.lex_state = 180},
  [263] = {.lex_state = 42},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 187},
  [267] = {.lex_state = 432},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 188},
  [270] = {.lex_state = 432},
  [271] = {.lex_state = 180},
  [272] = {.lex_state = 179},
  [273] = {.lex_state = 179},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 180},
  [276] = {.lex_state = 179},
  [277] = {.lex_state = 179},
  [278] = {.lex_state = 180},
  [279] = {.lex_state = 458},
  [280] = {.lex_state = 180},
  [281] = {.lex_state = 42},
  [282] = {.lex_state = 42},
  [283] = {.lex_state = 180},
  [284] = {.lex_state = 188},
  [285] = {.lex_state = 185},
  [286] = {.lex_state = 185},
  [287] = {.lex_state = 199},
  [288] = {.lex_state = 180},
  [289] = {.lex_state = 199},
  [290] = {.lex_state = 180},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 179},
  [293] = {.lex_state = 43, .external_lex_state = 2},
  [294] = {.lex_state = 298},
  [295] = {.lex_state = 180},
  [296] = {.lex_state = 298},
  [297] = {.lex_state = 180},
  [298] = {.lex_state = 179},
  [299] = {.lex_state = 298},
  [300] = {.lex_state = 179},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 298},
  [303] = {.lex_state = 298},
  [304] = {.lex_state = 182},
  [305] = {.lex_state = 298},
  [306] = {.lex_state = 298},
  [307] = {.lex_state = 180},
  [308] = {.lex_state = 298},
  [309] = {.lex_state = 180},
  [310] = {.lex_state = 180},
  [311] = {.lex_state = 180},
  [312] = {.lex_state = 180},
  [313] = {.lex_state = 180},
  [314] = {.lex_state = 180},
  [315] = {.lex_state = 180},
  [316] = {.lex_state = 179},
  [317] = {.lex_state = 180},
  [318] = {.lex_state = 179},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 180},
  [321] = {.lex_state = 179},
  [322] = {.lex_state = 180},
  [323] = {.lex_state = 459, .external_lex_state = 2},
  [324] = {.lex_state = 180},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 180},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 180},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 180},
  [332] = {.lex_state = 180},
  [333] = {.lex_state = 180},
  [334] = {.lex_state = 180},
  [335] = {.lex_state = 179},
  [336] = {.lex_state = 36},
  [337] = {.lex_state = 298},
  [338] = {.lex_state = 298},
  [339] = {.lex_state = 36},
  [340] = {.lex_state = 180},
  [341] = {.lex_state = 298},
  [342] = {.lex_state = 42},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 180},
  [345] = {.lex_state = 180},
  [346] = {.lex_state = 42},
  [347] = {.lex_state = 458},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 432},
  [350] = {.lex_state = 180},
  [351] = {.lex_state = 180},
  [352] = {.lex_state = 458},
  [353] = {.lex_state = 180},
  [354] = {.lex_state = 180},
  [355] = {.lex_state = 179},
  [356] = {.lex_state = 180},
  [357] = {.lex_state = 298},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 298},
  [360] = {.lex_state = 182},
  [361] = {.lex_state = 298},
  [362] = {.lex_state = 180},
  [363] = {.lex_state = 179},
  [364] = {.lex_state = 36},
  [365] = {.lex_state = 180},
  [366] = {.lex_state = 179},
  [367] = {.lex_state = 179},
  [368] = {.lex_state = 180},
  [369] = {.lex_state = 180},
  [370] = {.lex_state = 42},
  [371] = {.lex_state = 298},
  [372] = {.lex_state = 179},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 298},
  [375] = {.lex_state = 298},
  [376] = {.lex_state = 180},
  [377] = {.lex_state = 298},
  [378] = {.lex_state = 180},
  [379] = {.lex_state = 180},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 182},
  [382] = {.lex_state = 180},
  [383] = {.lex_state = 180},
  [384] = {.lex_state = 298},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 298},
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
    [sym_double_circumflex] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(21),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_double_circumflex] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(29),
    [sym_math_shift] = ACTIONS(29),
    [sym_alignment_tab] = ACTIONS(29),
    [sym_parameter_char] = ACTIONS(29),
    [sym_superscript] = ACTIONS(31),
    [sym_subscript] = ACTIONS(29),
    [sym_active_char] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(29),
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
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(75),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(83),
    [sym_math_shift] = ACTIONS(85),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_double_circumflex] = ACTIONS(91),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(105),
    [sym_active_char] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(105),
    [sym_active_char] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(105),
    [sym_active_char] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(105),
    [sym_active_char] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [14] = {
    [sym_verbatim_end] = STATE(76),
    [sym_verbatim_text] = STATE(77),
    [sym_end_token] = STATE(78),
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(80),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(86),
    [sym_inline_math_env_group] = STATE(87),
    [sym_verbatim_env_group] = STATE(88),
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [17] = {
    [sym_simple_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(92),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(121),
  },
  [18] = {
    [sym_simple_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(95),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(121),
  },
  [19] = {
    [sym_text_group] = STATE(96),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [20] = {
    [sym_text_group] = STATE(97),
    [sym_opt_text_group] = STATE(98),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_double_circumflex] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [22] = {
    [sym_escaped] = STATE(100),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(127),
  },
  [23] = {
    [sym_text_group] = STATE(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [24] = {
    [sym_text_group] = STATE(102),
    [sym_opt_text_group] = STATE(103),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [25] = {
    [sym_text_group] = STATE(104),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [26] = {
    [sym_text_group] = STATE(105),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [27] = {
    [sym_text_group] = STATE(106),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(135),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(137),
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
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(147),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
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
    [sym_double_circumflex] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(9),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(135),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
  },
  [33] = {
    [aux_sym_text_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_double_circumflex] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [35] = {
    [sym_verb_delim] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [36] = {
    [sym__whitespace] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_double_circumflex] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(171),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_double_circumflex] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(177),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(181),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(185),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(189),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(193),
  },
  [42] = {
    [sym__whitespace] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(197),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym__whitespace] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_double_circumflex] = ACTIONS(201),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(207),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(211),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(215),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(219),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(223),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(227),
  },
  [50] = {
    [sym__whitespace] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_double_circumflex] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(233),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym__whitespace] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_double_circumflex] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [52] = {
    [aux_sym__name_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(245),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
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
    [sym_double_circumflex] = ACTIONS(247),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(249),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_double_circumflex] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(251),
    [sym_begin_group] = ACTIONS(251),
    [sym_end_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(251),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(251),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(251),
    [sym_active_char] = ACTIONS(251),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(251),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [56] = {
    [aux_sym_text_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [57] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(159),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(263),
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
    [sym_double_circumflex] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(83),
    [sym_end_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(265),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [60] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(275),
  },
  [61] = {
    [sym_math_text_group] = STATE(167),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(277),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(281),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(281),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [63] = {
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(285),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(83),
    [sym_math_shift] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [66] = {
    [aux_sym_text_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
  },
  [67] = {
    [sym_verb_body] = ACTIONS(299),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [68] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(178),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(303),
  },
  [69] = {
    [sym_end_display_math] = STATE(180),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(305),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [71] = {
    [aux_sym_text_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
  },
  [72] = {
    [sym_end_inline_math] = STATE(184),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(311),
  },
  [73] = {
    [sym_display_math_end] = STATE(185),
    [sym_end_token] = STATE(186),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
  },
  [74] = {
    [sym_inline_math_end] = STATE(187),
    [sym_end_token] = STATE(188),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
  },
  [75] = {
    [anon_sym_end] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_double_circumflex] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(315),
  },
  [77] = {
    [sym_verbatim_end] = STATE(190),
    [sym_end_token] = STATE(78),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
  },
  [78] = {
    [sym_verbatim_env_group] = STATE(192),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
  },
  [79] = {
    [aux_sym_verbatim_text_repeat1] = STATE(194),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(321),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(323),
  },
  [80] = {
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(195),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(325),
    [sym__end_of_line] = ACTIONS(327),
  },
  [81] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(159),
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(329),
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
    [sym_double_circumflex] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_double_circumflex] = ACTIONS(331),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(331),
  },
  [83] = {
    [sym_simple_text_group] = STATE(196),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(335),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [85] = {
    [sym_text] = STATE(202),
    [aux_sym_text_repeat1] = STATE(203),
    [sym_display_math_env_name] = ACTIONS(337),
    [sym_inline_math_env_name] = ACTIONS(339),
    [sym_verbatim_env_name] = ACTIONS(341),
    [sym_double_circumflex] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(345),
  },
  [86] = {
    [sym_text_group] = STATE(206),
    [sym_opt_text_group] = STATE(207),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(349),
  },
  [87] = {
    [anon_sym_LBRACK] = ACTIONS(351),
    [sym_double_circumflex] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(351),
  },
  [88] = {
    [sym_text_group] = STATE(209),
    [sym_opt_text_group] = STATE(210),
    [sym_begin_opt] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(355),
  },
  [89] = {
    [anon_sym_LBRACK] = ACTIONS(357),
    [sym_double_circumflex] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(357),
    [sym_begin_group] = ACTIONS(357),
    [sym_math_shift] = ACTIONS(357),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(357),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(357),
    [sym_active_char] = ACTIONS(357),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(357),
  },
  [90] = {
    [sym_text] = STATE(202),
    [aux_sym_text_repeat1] = STATE(203),
    [sym_double_circumflex] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(343),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_double_circumflex] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(361),
    [sym_begin_group] = ACTIONS(361),
    [sym_end_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(361),
    [sym_parameter_char] = ACTIONS(361),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(361),
    [sym_active_char] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(361),
  },
  [92] = {
    [sym_simple_text_group] = STATE(212),
    [sym__whitespace] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(369),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym_double_circumflex] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(371),
    [sym_begin_group] = ACTIONS(371),
    [sym_end_group] = ACTIONS(371),
    [sym_math_shift] = ACTIONS(371),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(371),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(371),
    [sym_active_char] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(371),
  },
  [95] = {
    [sym_simple_text_group] = STATE(217),
    [sym__whitespace] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(121),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_double_circumflex] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(377),
    [sym_end_group] = ACTIONS(377),
    [sym_math_shift] = ACTIONS(377),
    [sym_alignment_tab] = ACTIONS(377),
    [sym_parameter_char] = ACTIONS(377),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(377),
    [sym_active_char] = ACTIONS(377),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(377),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_double_circumflex] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(381),
  },
  [98] = {
    [sym_text_group] = STATE(219),
    [sym__whitespace] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [99] = {
    [sym__control_symbol_body] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_double_circumflex] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(391),
    [sym_math_shift] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(391),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_double_circumflex] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_end_group] = ACTIONS(395),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(395),
  },
  [103] = {
    [sym_text_group] = STATE(223),
    [sym__whitespace] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_double_circumflex] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(403),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(401),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_double_circumflex] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(405),
    [sym_end_group] = ACTIONS(405),
    [sym_math_shift] = ACTIONS(405),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(405),
    [sym_superscript] = ACTIONS(407),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(405),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym_double_circumflex] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(409),
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
    [anon_sym_makeatother] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(415),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(421),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(429),
    [sym_active_char] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [110] = {
    [sym_makeatother] = STATE(238),
    [sym_makeatother_token] = STATE(125),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(433),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [116] = {
    [sym_display_math_env_group] = STATE(247),
    [sym_inline_math_env_group] = STATE(87),
    [sym_verbatim_env_group] = STATE(88),
    [sym_simple_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [117] = {
    [sym_text_group_at] = STATE(248),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [118] = {
    [sym_text_group_at] = STATE(249),
    [sym_opt_text_group_at] = STATE(250),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [119] = {
    [sym_text_group_at] = STATE(252),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [120] = {
    [sym_text_group_at] = STATE(253),
    [sym_opt_text_group_at] = STATE(254),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [121] = {
    [sym_text_group_at] = STATE(255),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [122] = {
    [sym_text_group_at] = STATE(256),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [123] = {
    [sym_text_group_at] = STATE(257),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_double_circumflex] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(443),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_double_circumflex] = ACTIONS(447),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(447),
    [sym_begin_group] = ACTIONS(447),
    [sym_end_group] = ACTIONS(447),
    [sym_math_shift] = ACTIONS(447),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(447),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(447),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(447),
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
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(451),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(453),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_double_circumflex] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_end_group] = ACTIONS(457),
    [sym_math_shift] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(459),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(457),
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
    [sym_double_circumflex] = ACTIONS(461),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(463),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym_double_circumflex] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(465),
    [sym_end_group] = ACTIONS(465),
    [sym_math_shift] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(465),
    [sym_superscript] = ACTIONS(467),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(465),
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
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
  },
  [132] = {
    [aux_sym_text_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
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
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(473),
    [sym_double_circumflex] = ACTIONS(476),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(476),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [sym_double_circumflex] = ACTIONS(500),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(500),
    [sym_begin_group] = ACTIONS(500),
    [sym_end_group] = ACTIONS(500),
    [sym_math_shift] = ACTIONS(500),
    [sym_alignment_tab] = ACTIONS(500),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(502),
    [sym_subscript] = ACTIONS(500),
    [sym_active_char] = ACTIONS(500),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(500),
  },
  [135] = {
    [aux_sym_parameter_repeat1] = STATE(135),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(504),
    [sym_number] = ACTIONS(507),
  },
  [136] = {
    [aux_sym_text_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_math_shift] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(511),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_double_circumflex] = ACTIONS(516),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(516),
    [sym_begin_group] = ACTIONS(516),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(516),
    [sym_superscript] = ACTIONS(518),
    [sym_subscript] = ACTIONS(516),
    [sym_active_char] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(516),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym_double_circumflex] = ACTIONS(520),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(520),
    [sym_alignment_tab] = ACTIONS(520),
    [sym_parameter_char] = ACTIONS(520),
    [sym_superscript] = ACTIONS(522),
    [sym_subscript] = ACTIONS(520),
    [sym_active_char] = ACTIONS(520),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(520),
  },
  [139] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(524),
  },
  [140] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(526),
  },
  [141] = {
    [anon_sym_LBRACK] = ACTIONS(528),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(528),
  },
  [142] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(530),
  },
  [143] = {
    [sym__whitespace] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(534),
  },
  [144] = {
    [sym__whitespace] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(534),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym_double_circumflex] = ACTIONS(538),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_end_group] = ACTIONS(538),
    [sym_math_shift] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(538),
  },
  [146] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(542),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(544),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(544),
  },
  [148] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(546),
  },
  [149] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(548),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(550),
  },
  [151] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_double_circumflex] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_math_shift] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(552),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [anon_sym_LBRACK] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym_double_circumflex] = ACTIONS(556),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(556),
    [sym_begin_group] = ACTIONS(556),
    [sym_end_group] = ACTIONS(556),
    [sym_math_shift] = ACTIONS(556),
    [sym_alignment_tab] = ACTIONS(556),
    [sym_parameter_char] = ACTIONS(556),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(556),
    [sym_active_char] = ACTIONS(556),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(556),
  },
  [153] = {
    [aux_sym__name_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(560),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(567),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [154] = {
    [aux_sym__name_repeat1] = STATE(267),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(570),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(572),
    [sym_double_circumflex] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(572),
    [sym_begin_group] = ACTIONS(572),
    [sym_end_group] = ACTIONS(572),
    [sym_math_shift] = ACTIONS(572),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(572),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(572),
    [sym_active_char] = ACTIONS(572),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(572),
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
    [anon_sym_LBRACK] = ACTIONS(473),
    [sym_double_circumflex] = ACTIONS(576),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(579),
    [sym_begin_group] = ACTIONS(482),
    [sym_end_group] = ACTIONS(471),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(582),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(576),
  },
  [157] = {
    [aux_sym_text_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_end_group] = ACTIONS(509),
    [sym_math_shift] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(585),
  },
  [158] = {
    [sym__whitespace] = ACTIONS(588),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(590),
  },
  [159] = {
    [aux_sym__name_repeat1] = STATE(269),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(592),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [160] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(270),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(596),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [sym_double_circumflex] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_end_group] = ACTIONS(598),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(598),
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
    [sym_double_circumflex] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(83),
    [sym_end_group] = ACTIONS(602),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(606),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(265),
  },
  [163] = {
    [aux_sym_text_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(608),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [sym_double_circumflex] = ACTIONS(610),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(610),
    [sym_begin_group] = ACTIONS(610),
    [sym_end_group] = ACTIONS(610),
    [sym_math_shift] = ACTIONS(610),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(610),
    [sym_superscript] = ACTIONS(612),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(610),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(614),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(616),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(616),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [167] = {
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [sym_double_circumflex] = ACTIONS(618),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(618),
    [sym_begin_group] = ACTIONS(618),
    [sym_end_group] = ACTIONS(618),
    [sym_math_shift] = ACTIONS(618),
    [sym_alignment_tab] = ACTIONS(618),
    [sym_parameter_char] = ACTIONS(618),
    [sym_superscript] = ACTIONS(620),
    [sym_subscript] = ACTIONS(618),
    [sym_active_char] = ACTIONS(618),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(618),
  },
  [168] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(178),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(329),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(303),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [sym_double_circumflex] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_end_group] = ACTIONS(622),
    [sym_math_shift] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(622),
    [sym_superscript] = ACTIONS(624),
    [sym_subscript] = ACTIONS(622),
    [sym_active_char] = ACTIONS(622),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(622),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [171] = {
    [sym__name] = STATE(51),
    [aux_sym__name_repeat1] = STATE(279),
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(628),
  },
  [172] = {
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_double_circumflex] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(630),
    [sym_begin_group] = ACTIONS(630),
    [sym_end_group] = ACTIONS(630),
    [sym_math_shift] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(630),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(630),
    [sym_active_char] = ACTIONS(630),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(630),
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
    [sym_double_circumflex] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(636),
    [sym_subscript] = ACTIONS(634),
    [sym_active_char] = ACTIONS(634),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(285),
  },
  [174] = {
    [aux_sym_text_repeat1] = STATE(282),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_double_circumflex] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(157),
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
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_double_circumflex] = ACTIONS(641),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(644),
    [sym_begin_group] = ACTIONS(647),
    [sym_math_shift] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(652),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(658),
    [sym_subscript] = ACTIONS(652),
    [sym_active_char] = ACTIONS(652),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(641),
  },
  [176] = {
    [aux_sym_text_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(661),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_math_shift] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(661),
  },
  [177] = {
    [sym_verb_delim] = ACTIONS(664),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [178] = {
    [aux_sym__name_repeat1] = STATE(284),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(666),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_RBRACK] = ACTIONS(670),
    [sym_double_circumflex] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(670),
    [sym_begin_group] = ACTIONS(670),
    [sym_end_group] = ACTIONS(670),
    [sym_math_shift] = ACTIONS(670),
    [sym_alignment_tab] = ACTIONS(670),
    [sym_parameter_char] = ACTIONS(670),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(670),
    [sym_active_char] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(670),
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
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_double_circumflex] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(674),
  },
  [182] = {
    [aux_sym_text_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(686),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(686),
  },
  [183] = {
    [anon_sym_RPAREN] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_double_circumflex] = ACTIONS(691),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_end_group] = ACTIONS(691),
    [sym_math_shift] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(691),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_double_circumflex] = ACTIONS(695),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(695),
    [sym_begin_group] = ACTIONS(695),
    [sym_end_group] = ACTIONS(695),
    [sym_math_shift] = ACTIONS(695),
    [sym_alignment_tab] = ACTIONS(695),
    [sym_parameter_char] = ACTIONS(695),
    [sym_superscript] = ACTIONS(697),
    [sym_subscript] = ACTIONS(695),
    [sym_active_char] = ACTIONS(695),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(695),
  },
  [186] = {
    [sym_display_math_env_group] = STATE(288),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(699),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_RBRACK] = ACTIONS(701),
    [sym_double_circumflex] = ACTIONS(701),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(701),
    [sym_begin_group] = ACTIONS(701),
    [sym_end_group] = ACTIONS(701),
    [sym_math_shift] = ACTIONS(701),
    [sym_alignment_tab] = ACTIONS(701),
    [sym_parameter_char] = ACTIONS(701),
    [sym_superscript] = ACTIONS(703),
    [sym_subscript] = ACTIONS(701),
    [sym_active_char] = ACTIONS(701),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(701),
  },
  [188] = {
    [sym_inline_math_env_group] = STATE(290),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(705),
  },
  [189] = {
    [sym__whitespace] = ACTIONS(707),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(709),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(711),
    [anon_sym_LBRACK] = ACTIONS(711),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_double_circumflex] = ACTIONS(711),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(711),
    [sym_begin_group] = ACTIONS(711),
    [sym_end_group] = ACTIONS(711),
    [sym_math_shift] = ACTIONS(711),
    [sym_alignment_tab] = ACTIONS(711),
    [sym_parameter_char] = ACTIONS(711),
    [sym_superscript] = ACTIONS(713),
    [sym_subscript] = ACTIONS(711),
    [sym_active_char] = ACTIONS(711),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(711),
  },
  [191] = {
    [sym_verbatim_env_name] = ACTIONS(715),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_double_circumflex] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_math_shift] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(719),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(717),
  },
  [193] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(721),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(723),
    [sym__end_of_line] = ACTIONS(723),
  },
  [194] = {
    [aux_sym_verbatim_text_repeat1] = STATE(194),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(725),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(728),
  },
  [195] = {
    [aux_sym_verbatim_text_repeat1] = STATE(79),
    [aux_sym_verbatim_text_repeat2] = STATE(195),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(723),
    [sym__end_of_line] = ACTIONS(733),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_double_circumflex] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_end_group] = ACTIONS(736),
    [sym_math_shift] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(738),
    [sym_subscript] = ACTIONS(736),
    [sym_active_char] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(736),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_double_circumflex] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(740),
    [sym_begin_group] = ACTIONS(740),
    [sym_end_group] = ACTIONS(740),
    [sym_math_shift] = ACTIONS(740),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(740),
    [sym_superscript] = ACTIONS(742),
    [sym_subscript] = ACTIONS(740),
    [sym_active_char] = ACTIONS(740),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(740),
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
    [anon_sym_LBRACK] = ACTIONS(473),
    [sym_double_circumflex] = ACTIONS(744),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(747),
    [sym_begin_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(744),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(753),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(755),
  },
  [201] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(757),
  },
  [202] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(759),
  },
  [203] = {
    [aux_sym_text_repeat1] = STATE(298),
    [sym_double_circumflex] = ACTIONS(761),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(761),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(763),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(765),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(767),
    [sym_double_circumflex] = ACTIONS(767),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(767),
    [sym_begin_group] = ACTIONS(767),
    [sym_alignment_tab] = ACTIONS(767),
    [sym_parameter_char] = ACTIONS(767),
    [sym_superscript] = ACTIONS(769),
    [sym_subscript] = ACTIONS(767),
    [sym_active_char] = ACTIONS(767),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(767),
  },
  [206] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(771),
  },
  [207] = {
    [sym_text_group] = STATE(303),
    [sym__whitespace] = ACTIONS(773),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(771),
  },
  [208] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(775),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(777),
    [sym__end_of_line] = ACTIONS(777),
  },
  [209] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(779),
  },
  [210] = {
    [sym_text_group] = STATE(306),
    [sym__whitespace] = ACTIONS(781),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(779),
  },
  [211] = {
    [sym_simple_text_group] = STATE(307),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(121),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_RBRACK] = ACTIONS(783),
    [sym_double_circumflex] = ACTIONS(783),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(783),
    [sym_begin_group] = ACTIONS(783),
    [sym_end_group] = ACTIONS(783),
    [sym_math_shift] = ACTIONS(783),
    [sym_alignment_tab] = ACTIONS(783),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(783),
    [sym_active_char] = ACTIONS(783),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(783),
  },
  [213] = {
    [sym__whitespace] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(457),
    [sym__end_of_line] = ACTIONS(457),
  },
  [214] = {
    [sym__whitespace] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(465),
    [sym__end_of_line] = ACTIONS(465),
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
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
  },
  [216] = {
    [sym_simple_text_group] = STATE(309),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(121),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(787),
    [sym_double_circumflex] = ACTIONS(787),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(787),
    [sym_begin_group] = ACTIONS(787),
    [sym_end_group] = ACTIONS(787),
    [sym_math_shift] = ACTIONS(787),
    [sym_alignment_tab] = ACTIONS(787),
    [sym_parameter_char] = ACTIONS(787),
    [sym_superscript] = ACTIONS(789),
    [sym_subscript] = ACTIONS(787),
    [sym_active_char] = ACTIONS(787),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(787),
  },
  [218] = {
    [sym_text_group] = STATE(310),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(791),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym_double_circumflex] = ACTIONS(791),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [220] = {
    [anon_sym_EQ] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [221] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(795),
  },
  [222] = {
    [sym_text_group] = STATE(312),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(797),
    [anon_sym_LBRACK] = ACTIONS(797),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_double_circumflex] = ACTIONS(797),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(797),
    [sym_begin_group] = ACTIONS(797),
    [sym_end_group] = ACTIONS(797),
    [sym_math_shift] = ACTIONS(797),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_parameter_char] = ACTIONS(797),
    [sym_superscript] = ACTIONS(799),
    [sym_subscript] = ACTIONS(797),
    [sym_active_char] = ACTIONS(797),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(797),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [sym__whitespace] = ACTIONS(803),
    [anon_sym_LBRACK] = ACTIONS(801),
    [anon_sym_RBRACK] = ACTIONS(801),
    [sym_double_circumflex] = ACTIONS(801),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(801),
    [sym_begin_group] = ACTIONS(801),
    [sym_end_group] = ACTIONS(801),
    [sym_math_shift] = ACTIONS(801),
    [sym_alignment_tab] = ACTIONS(801),
    [sym_parameter_char] = ACTIONS(801),
    [sym_superscript] = ACTIONS(805),
    [sym_subscript] = ACTIONS(801),
    [sym_active_char] = ACTIONS(801),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(805),
  },
  [225] = {
    [sym__whitespace] = ACTIONS(807),
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_double_circumflex] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_end_group] = ACTIONS(809),
    [sym_math_shift] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(811),
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
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(415),
  },
  [227] = {
    [anon_sym_LBRACK] = ACTIONS(813),
    [anon_sym_RBRACK] = ACTIONS(813),
    [sym_double_circumflex] = ACTIONS(813),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(813),
    [sym_begin_group] = ACTIONS(813),
    [sym_end_group] = ACTIONS(813),
    [sym_math_shift] = ACTIONS(813),
    [sym_alignment_tab] = ACTIONS(813),
    [sym_parameter_char] = ACTIONS(813),
    [sym_superscript] = ACTIONS(815),
    [sym_subscript] = ACTIONS(813),
    [sym_active_char] = ACTIONS(813),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(813),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(817),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(819),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [229] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(415),
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
    [sym_double_circumflex] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(821),
    [sym_alignment_tab] = ACTIONS(823),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(825),
    [sym_subscript] = ACTIONS(823),
    [sym_active_char] = ACTIONS(823),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(265),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(429),
    [sym_active_char] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [232] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(827),
  },
  [233] = {
    [sym_math_text_group_at] = STATE(322),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(829),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(831),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(833),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(835),
    [sym_subscript] = ACTIONS(833),
    [sym_active_char] = ACTIONS(833),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
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
    [sym_double_circumflex] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(839),
    [sym_subscript] = ACTIONS(837),
    [sym_active_char] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(285),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_math_shift] = ACTIONS(841),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(845),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [237] = {
    [anon_sym_makeatother] = ACTIONS(847),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(849),
    [anon_sym_RBRACK] = ACTIONS(849),
    [sym_double_circumflex] = ACTIONS(849),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(849),
    [sym_end_group] = ACTIONS(849),
    [sym_math_shift] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(851),
    [sym_subscript] = ACTIONS(849),
    [sym_active_char] = ACTIONS(849),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(849),
  },
  [239] = {
    [sym_end_display_math] = STATE(329),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(305),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(841),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [241] = {
    [sym_end_inline_math] = STATE(331),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(311),
  },
  [242] = {
    [sym_display_math_end] = STATE(332),
    [sym_end_token] = STATE(186),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
  },
  [243] = {
    [sym_inline_math_end] = STATE(333),
    [sym_end_token] = STATE(188),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
  },
  [244] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(329),
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
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(415),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_double_circumflex] = ACTIONS(857),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(455),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [247] = {
    [sym_text_group_at] = STATE(337),
    [sym_opt_text_group_at] = STATE(338),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(861),
    [sym__end_of_line] = ACTIONS(863),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_RBRACK] = ACTIONS(865),
    [sym_double_circumflex] = ACTIONS(865),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [249] = {
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(869),
    [sym_double_circumflex] = ACTIONS(869),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(869),
    [sym_begin_group] = ACTIONS(869),
    [sym_end_group] = ACTIONS(869),
    [sym_math_shift] = ACTIONS(869),
    [sym_alignment_tab] = ACTIONS(869),
    [sym_parameter_char] = ACTIONS(869),
    [sym_superscript] = ACTIONS(871),
    [sym_subscript] = ACTIONS(869),
    [sym_active_char] = ACTIONS(869),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(869),
  },
  [250] = {
    [sym_text_group_at] = STATE(340),
    [sym__whitespace] = ACTIONS(873),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(875),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(875),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
  },
  [252] = {
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [sym_double_circumflex] = ACTIONS(877),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [253] = {
    [anon_sym_LBRACK] = ACTIONS(881),
    [anon_sym_RBRACK] = ACTIONS(881),
    [sym_double_circumflex] = ACTIONS(881),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(881),
    [sym_begin_group] = ACTIONS(881),
    [sym_end_group] = ACTIONS(881),
    [sym_math_shift] = ACTIONS(881),
    [sym_alignment_tab] = ACTIONS(881),
    [sym_parameter_char] = ACTIONS(881),
    [sym_superscript] = ACTIONS(883),
    [sym_subscript] = ACTIONS(881),
    [sym_active_char] = ACTIONS(881),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(881),
  },
  [254] = {
    [sym_text_group_at] = STATE(344),
    [sym__whitespace] = ACTIONS(885),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(887),
    [anon_sym_RBRACK] = ACTIONS(887),
    [sym_double_circumflex] = ACTIONS(887),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(887),
    [sym_begin_group] = ACTIONS(887),
    [sym_end_group] = ACTIONS(887),
    [sym_math_shift] = ACTIONS(887),
    [sym_alignment_tab] = ACTIONS(887),
    [sym_parameter_char] = ACTIONS(887),
    [sym_superscript] = ACTIONS(889),
    [sym_subscript] = ACTIONS(887),
    [sym_active_char] = ACTIONS(887),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(887),
  },
  [256] = {
    [anon_sym_LBRACK] = ACTIONS(891),
    [anon_sym_RBRACK] = ACTIONS(891),
    [sym_double_circumflex] = ACTIONS(891),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(891),
    [sym_begin_group] = ACTIONS(891),
    [sym_end_group] = ACTIONS(891),
    [sym_math_shift] = ACTIONS(891),
    [sym_alignment_tab] = ACTIONS(891),
    [sym_parameter_char] = ACTIONS(891),
    [sym_superscript] = ACTIONS(893),
    [sym_subscript] = ACTIONS(891),
    [sym_active_char] = ACTIONS(891),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(891),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [sym_double_circumflex] = ACTIONS(895),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(899),
    [anon_sym_RBRACK] = ACTIONS(899),
    [sym_double_circumflex] = ACTIONS(899),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(903),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(903),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
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
    [anon_sym_LBRACK] = ACTIONS(905),
    [sym_double_circumflex] = ACTIONS(908),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(911),
    [sym_begin_group] = ACTIONS(914),
    [sym_math_shift] = ACTIONS(917),
    [sym_alignment_tab] = ACTIONS(920),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(926),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(920),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(908),
  },
  [261] = {
    [aux_sym__name_repeat1] = STATE(347),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(932),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_RBRACK] = ACTIONS(934),
    [sym_double_circumflex] = ACTIONS(934),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(934),
    [sym_begin_group] = ACTIONS(934),
    [sym_end_group] = ACTIONS(934),
    [sym_math_shift] = ACTIONS(934),
    [sym_alignment_tab] = ACTIONS(934),
    [sym_parameter_char] = ACTIONS(934),
    [sym_superscript] = ACTIONS(936),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(934),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(934),
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
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym_double_circumflex] = ACTIONS(938),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(941),
    [sym_begin_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(944),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(944),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(938),
  },
  [264] = {
    [aux_sym_text_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(947),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_math_shift] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(947),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(950),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(950),
  },
  [266] = {
    [sym__whitespace] = ACTIONS(952),
    [anon_sym_LBRACK] = ACTIONS(950),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(950),
  },
  [267] = {
    [aux_sym__name_repeat1] = STATE(267),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(954),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_end_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(957),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [268] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(960),
  },
  [269] = {
    [aux_sym__name_repeat1] = STATE(269),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(962),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(965),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [270] = {
    [aux_sym__name_repeat1] = STATE(349),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(968),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [271] = {
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_RBRACK] = ACTIONS(970),
    [sym_double_circumflex] = ACTIONS(970),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(970),
    [sym_begin_group] = ACTIONS(970),
    [sym_end_group] = ACTIONS(970),
    [sym_math_shift] = ACTIONS(970),
    [sym_alignment_tab] = ACTIONS(970),
    [sym_parameter_char] = ACTIONS(970),
    [sym_superscript] = ACTIONS(972),
    [sym_subscript] = ACTIONS(970),
    [sym_active_char] = ACTIONS(970),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(970),
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
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym_double_circumflex] = ACTIONS(974),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(977),
    [sym_begin_group] = ACTIONS(647),
    [sym_end_group] = ACTIONS(650),
    [sym_alignment_tab] = ACTIONS(980),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(983),
    [sym_subscript] = ACTIONS(980),
    [sym_active_char] = ACTIONS(980),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(974),
  },
  [273] = {
    [aux_sym_text_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(986),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_end_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(986),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(989),
  },
  [275] = {
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(991),
    [sym_double_circumflex] = ACTIONS(991),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_end_group] = ACTIONS(991),
    [sym_math_shift] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(993),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(991),
  },
  [276] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(995),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [278] = {
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_RBRACK] = ACTIONS(997),
    [sym_double_circumflex] = ACTIONS(997),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(997),
    [sym_begin_group] = ACTIONS(997),
    [sym_end_group] = ACTIONS(997),
    [sym_math_shift] = ACTIONS(997),
    [sym_alignment_tab] = ACTIONS(997),
    [sym_parameter_char] = ACTIONS(997),
    [sym_superscript] = ACTIONS(999),
    [sym_subscript] = ACTIONS(997),
    [sym_active_char] = ACTIONS(997),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(997),
  },
  [279] = {
    [aux_sym__name_repeat1] = STATE(352),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_double_circumflex] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1001),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [280] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_double_circumflex] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(650),
    [sym_double_circumflex] = ACTIONS(1007),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1010),
    [sym_begin_group] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(1013),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(1016),
    [sym_subscript] = ACTIONS(1013),
    [sym_active_char] = ACTIONS(1013),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1007),
  },
  [282] = {
    [aux_sym_text_repeat1] = STATE(282),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_double_circumflex] = ACTIONS(1019),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1019),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(1022),
    [anon_sym_LBRACK] = ACTIONS(1022),
    [anon_sym_RBRACK] = ACTIONS(1022),
    [sym_double_circumflex] = ACTIONS(1022),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1022),
    [sym_begin_group] = ACTIONS(1022),
    [sym_end_group] = ACTIONS(1022),
    [sym_math_shift] = ACTIONS(1022),
    [sym_alignment_tab] = ACTIONS(1022),
    [sym_parameter_char] = ACTIONS(1022),
    [sym_superscript] = ACTIONS(1024),
    [sym_subscript] = ACTIONS(1022),
    [sym_active_char] = ACTIONS(1022),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1022),
  },
  [284] = {
    [aux_sym__name_repeat1] = STATE(284),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(1026),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(1032),
    [sym__whitespace] = ACTIONS(1034),
    [anon_sym_LBRACK] = ACTIONS(1032),
    [anon_sym_RBRACK] = ACTIONS(1032),
    [sym_double_circumflex] = ACTIONS(1032),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1032),
    [sym_begin_group] = ACTIONS(1032),
    [sym_end_group] = ACTIONS(1032),
    [sym_math_shift] = ACTIONS(1032),
    [sym_alignment_tab] = ACTIONS(1032),
    [sym_parameter_char] = ACTIONS(1032),
    [sym_superscript] = ACTIONS(1036),
    [sym_subscript] = ACTIONS(1032),
    [sym_active_char] = ACTIONS(1032),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1036),
  },
  [286] = {
    [ts_builtin_sym_end] = ACTIONS(1038),
    [sym__whitespace] = ACTIONS(1040),
    [anon_sym_LBRACK] = ACTIONS(1038),
    [anon_sym_RBRACK] = ACTIONS(1038),
    [sym_double_circumflex] = ACTIONS(1038),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1038),
    [sym_begin_group] = ACTIONS(1038),
    [sym_end_group] = ACTIONS(1038),
    [sym_math_shift] = ACTIONS(1038),
    [sym_alignment_tab] = ACTIONS(1038),
    [sym_parameter_char] = ACTIONS(1038),
    [sym_superscript] = ACTIONS(1042),
    [sym_subscript] = ACTIONS(1038),
    [sym_active_char] = ACTIONS(1038),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1042),
  },
  [287] = {
    [sym_display_math_env_name] = ACTIONS(1044),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(1046),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_RBRACK] = ACTIONS(1046),
    [sym_double_circumflex] = ACTIONS(1046),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1046),
    [sym_begin_group] = ACTIONS(1046),
    [sym_end_group] = ACTIONS(1046),
    [sym_math_shift] = ACTIONS(1046),
    [sym_alignment_tab] = ACTIONS(1046),
    [sym_parameter_char] = ACTIONS(1046),
    [sym_superscript] = ACTIONS(1048),
    [sym_subscript] = ACTIONS(1046),
    [sym_active_char] = ACTIONS(1046),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1046),
  },
  [289] = {
    [sym_inline_math_env_name] = ACTIONS(1050),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(1052),
    [anon_sym_LBRACK] = ACTIONS(1052),
    [anon_sym_RBRACK] = ACTIONS(1052),
    [sym_double_circumflex] = ACTIONS(1052),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1052),
    [sym_begin_group] = ACTIONS(1052),
    [sym_end_group] = ACTIONS(1052),
    [sym_math_shift] = ACTIONS(1052),
    [sym_alignment_tab] = ACTIONS(1052),
    [sym_parameter_char] = ACTIONS(1052),
    [sym_superscript] = ACTIONS(1054),
    [sym_subscript] = ACTIONS(1052),
    [sym_active_char] = ACTIONS(1052),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1052),
  },
  [291] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1056),
  },
  [292] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1058),
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
    [sym_double_circumflex] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(1060),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1060),
    [sym__end_of_line] = ACTIONS(1060),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(1062),
    [anon_sym_LBRACK] = ACTIONS(1062),
    [anon_sym_RBRACK] = ACTIONS(1062),
    [sym_double_circumflex] = ACTIONS(1062),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1062),
    [sym_begin_group] = ACTIONS(1062),
    [sym_end_group] = ACTIONS(1062),
    [sym_math_shift] = ACTIONS(1062),
    [sym_alignment_tab] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(1062),
    [sym_superscript] = ACTIONS(1064),
    [sym_subscript] = ACTIONS(1062),
    [sym_active_char] = ACTIONS(1062),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1062),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(1066),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1066),
    [sym__end_of_line] = ACTIONS(1066),
  },
  [297] = {
    [ts_builtin_sym_end] = ACTIONS(1068),
    [anon_sym_LBRACK] = ACTIONS(1068),
    [anon_sym_RBRACK] = ACTIONS(1068),
    [sym_double_circumflex] = ACTIONS(1068),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1068),
    [sym_begin_group] = ACTIONS(1068),
    [sym_end_group] = ACTIONS(1068),
    [sym_math_shift] = ACTIONS(1068),
    [sym_alignment_tab] = ACTIONS(1068),
    [sym_parameter_char] = ACTIONS(1068),
    [sym_superscript] = ACTIONS(1070),
    [sym_subscript] = ACTIONS(1068),
    [sym_active_char] = ACTIONS(1068),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1068),
  },
  [298] = {
    [aux_sym_text_repeat1] = STATE(298),
    [sym_double_circumflex] = ACTIONS(1072),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1072),
  },
  [299] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(251),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(1075),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(1077),
    [sym_double_circumflex] = ACTIONS(1077),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1077),
    [sym_begin_group] = ACTIONS(1077),
    [sym_alignment_tab] = ACTIONS(1077),
    [sym_parameter_char] = ACTIONS(1077),
    [sym_superscript] = ACTIONS(1079),
    [sym_subscript] = ACTIONS(1077),
    [sym_active_char] = ACTIONS(1077),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1077),
  },
  [302] = {
    [sym_text_group] = STATE(359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(1081),
  },
  [303] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1081),
  },
  [304] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1083),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1085),
    [sym__end_of_line] = ACTIONS(1085),
  },
  [305] = {
    [sym_text_group] = STATE(361),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(1087),
  },
  [306] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1087),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(1089),
    [anon_sym_LBRACK] = ACTIONS(1089),
    [anon_sym_RBRACK] = ACTIONS(1089),
    [sym_double_circumflex] = ACTIONS(1089),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1089),
    [sym_begin_group] = ACTIONS(1089),
    [sym_end_group] = ACTIONS(1089),
    [sym_math_shift] = ACTIONS(1089),
    [sym_alignment_tab] = ACTIONS(1089),
    [sym_parameter_char] = ACTIONS(1089),
    [sym_superscript] = ACTIONS(1091),
    [sym_subscript] = ACTIONS(1089),
    [sym_active_char] = ACTIONS(1089),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1089),
  },
  [308] = {
    [sym__whitespace] = ACTIONS(934),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(934),
    [sym__end_of_line] = ACTIONS(934),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(1093),
    [anon_sym_RBRACK] = ACTIONS(1093),
    [sym_double_circumflex] = ACTIONS(1093),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1093),
    [sym_begin_group] = ACTIONS(1093),
    [sym_end_group] = ACTIONS(1093),
    [sym_math_shift] = ACTIONS(1093),
    [sym_alignment_tab] = ACTIONS(1093),
    [sym_parameter_char] = ACTIONS(1093),
    [sym_superscript] = ACTIONS(1095),
    [sym_subscript] = ACTIONS(1093),
    [sym_active_char] = ACTIONS(1093),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1093),
  },
  [310] = {
    [ts_builtin_sym_end] = ACTIONS(1097),
    [anon_sym_LBRACK] = ACTIONS(1097),
    [anon_sym_RBRACK] = ACTIONS(1097),
    [sym_double_circumflex] = ACTIONS(1097),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1097),
    [sym_begin_group] = ACTIONS(1097),
    [sym_end_group] = ACTIONS(1097),
    [sym_math_shift] = ACTIONS(1097),
    [sym_alignment_tab] = ACTIONS(1097),
    [sym_parameter_char] = ACTIONS(1097),
    [sym_superscript] = ACTIONS(1099),
    [sym_subscript] = ACTIONS(1097),
    [sym_active_char] = ACTIONS(1097),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1097),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(1101),
    [anon_sym_LBRACK] = ACTIONS(1101),
    [anon_sym_RBRACK] = ACTIONS(1101),
    [sym_double_circumflex] = ACTIONS(1101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1101),
    [sym_begin_group] = ACTIONS(1101),
    [sym_end_group] = ACTIONS(1101),
    [sym_math_shift] = ACTIONS(1101),
    [sym_alignment_tab] = ACTIONS(1101),
    [sym_parameter_char] = ACTIONS(1101),
    [sym_superscript] = ACTIONS(1103),
    [sym_subscript] = ACTIONS(1101),
    [sym_active_char] = ACTIONS(1101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1101),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(1105),
    [anon_sym_LBRACK] = ACTIONS(1105),
    [anon_sym_RBRACK] = ACTIONS(1105),
    [sym_double_circumflex] = ACTIONS(1105),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1105),
    [sym_begin_group] = ACTIONS(1105),
    [sym_end_group] = ACTIONS(1105),
    [sym_math_shift] = ACTIONS(1105),
    [sym_alignment_tab] = ACTIONS(1105),
    [sym_parameter_char] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1107),
    [sym_subscript] = ACTIONS(1105),
    [sym_active_char] = ACTIONS(1105),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1105),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(1109),
    [anon_sym_LBRACK] = ACTIONS(1109),
    [anon_sym_RBRACK] = ACTIONS(1109),
    [sym_double_circumflex] = ACTIONS(1109),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1109),
    [sym_begin_group] = ACTIONS(1109),
    [sym_end_group] = ACTIONS(1109),
    [sym_math_shift] = ACTIONS(1109),
    [sym_alignment_tab] = ACTIONS(1109),
    [sym_parameter_char] = ACTIONS(1109),
    [sym_superscript] = ACTIONS(1111),
    [sym_subscript] = ACTIONS(1109),
    [sym_active_char] = ACTIONS(1109),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1109),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(1113),
    [anon_sym_RBRACK] = ACTIONS(1113),
    [sym_double_circumflex] = ACTIONS(1113),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1113),
    [sym_begin_group] = ACTIONS(1113),
    [sym_end_group] = ACTIONS(1113),
    [sym_math_shift] = ACTIONS(1113),
    [sym_alignment_tab] = ACTIONS(1113),
    [sym_parameter_char] = ACTIONS(1113),
    [sym_superscript] = ACTIONS(1115),
    [sym_subscript] = ACTIONS(1113),
    [sym_active_char] = ACTIONS(1113),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1113),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(1117),
    [anon_sym_RBRACK] = ACTIONS(1117),
    [sym_double_circumflex] = ACTIONS(1117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1117),
    [sym_begin_group] = ACTIONS(1117),
    [sym_end_group] = ACTIONS(1117),
    [sym_math_shift] = ACTIONS(1117),
    [sym_alignment_tab] = ACTIONS(1117),
    [sym_parameter_char] = ACTIONS(1117),
    [sym_superscript] = ACTIONS(1119),
    [sym_subscript] = ACTIONS(1117),
    [sym_active_char] = ACTIONS(1117),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1117),
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
    [anon_sym_LBRACK] = ACTIONS(905),
    [sym_double_circumflex] = ACTIONS(1121),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(911),
    [sym_begin_group] = ACTIONS(914),
    [sym_end_group] = ACTIONS(1124),
    [sym_math_shift] = ACTIONS(917),
    [sym_alignment_tab] = ACTIONS(1126),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(926),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(1126),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1121),
  },
  [317] = {
    [anon_sym_LBRACK] = ACTIONS(1129),
    [anon_sym_RBRACK] = ACTIONS(1129),
    [sym_double_circumflex] = ACTIONS(1129),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1129),
    [sym_begin_group] = ACTIONS(1129),
    [sym_end_group] = ACTIONS(1129),
    [sym_math_shift] = ACTIONS(1129),
    [sym_alignment_tab] = ACTIONS(1129),
    [sym_parameter_char] = ACTIONS(1129),
    [sym_superscript] = ACTIONS(1131),
    [sym_subscript] = ACTIONS(1129),
    [sym_active_char] = ACTIONS(1129),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1129),
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
    [sym_double_circumflex] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(1133),
    [sym_alignment_tab] = ACTIONS(1135),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(1137),
    [sym_subscript] = ACTIONS(1135),
    [sym_active_char] = ACTIONS(1135),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(265),
  },
  [319] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(1139),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(1141),
    [anon_sym_RBRACK] = ACTIONS(1141),
    [sym_double_circumflex] = ACTIONS(1141),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1141),
    [sym_begin_group] = ACTIONS(1141),
    [sym_end_group] = ACTIONS(1141),
    [sym_math_shift] = ACTIONS(1141),
    [sym_alignment_tab] = ACTIONS(1141),
    [sym_parameter_char] = ACTIONS(1141),
    [sym_superscript] = ACTIONS(1143),
    [sym_subscript] = ACTIONS(1141),
    [sym_active_char] = ACTIONS(1141),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1141),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1145),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(1147),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(1147),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [322] = {
    [anon_sym_LBRACK] = ACTIONS(1149),
    [anon_sym_RBRACK] = ACTIONS(1149),
    [sym_double_circumflex] = ACTIONS(1149),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1149),
    [sym_begin_group] = ACTIONS(1149),
    [sym_end_group] = ACTIONS(1149),
    [sym_math_shift] = ACTIONS(1149),
    [sym_alignment_tab] = ACTIONS(1149),
    [sym_parameter_char] = ACTIONS(1149),
    [sym_superscript] = ACTIONS(1151),
    [sym_subscript] = ACTIONS(1149),
    [sym_active_char] = ACTIONS(1149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1149),
  },
  [323] = {
    [sym__control_symbol_body] = ACTIONS(33),
    [anon_sym_tag] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(329),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(415),
  },
  [324] = {
    [anon_sym_LBRACK] = ACTIONS(1153),
    [anon_sym_RBRACK] = ACTIONS(1153),
    [sym_double_circumflex] = ACTIONS(1153),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1153),
    [sym_begin_group] = ACTIONS(1153),
    [sym_end_group] = ACTIONS(1153),
    [sym_math_shift] = ACTIONS(1153),
    [sym_alignment_tab] = ACTIONS(1153),
    [sym_parameter_char] = ACTIONS(1153),
    [sym_superscript] = ACTIONS(1155),
    [sym_subscript] = ACTIONS(1153),
    [sym_active_char] = ACTIONS(1153),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1153),
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
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(831),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [326] = {
    [anon_sym_LBRACK] = ACTIONS(1157),
    [anon_sym_RBRACK] = ACTIONS(1157),
    [sym_double_circumflex] = ACTIONS(1157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1157),
    [sym_begin_group] = ACTIONS(1157),
    [sym_end_group] = ACTIONS(1157),
    [sym_math_shift] = ACTIONS(1157),
    [sym_alignment_tab] = ACTIONS(1157),
    [sym_parameter_char] = ACTIONS(1157),
    [sym_superscript] = ACTIONS(1159),
    [sym_subscript] = ACTIONS(1157),
    [sym_active_char] = ACTIONS(1157),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1157),
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
    [sym_double_circumflex] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(1163),
    [sym_subscript] = ACTIONS(1161),
    [sym_active_char] = ACTIONS(1161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(285),
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
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_double_circumflex] = ACTIONS(1168),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1174),
    [sym_math_shift] = ACTIONS(1177),
    [sym_alignment_tab] = ACTIONS(1179),
    [sym_parameter_char] = ACTIONS(1182),
    [sym_superscript] = ACTIONS(1185),
    [sym_subscript] = ACTIONS(1179),
    [sym_active_char] = ACTIONS(1179),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1168),
  },
  [329] = {
    [anon_sym_LBRACK] = ACTIONS(1188),
    [anon_sym_RBRACK] = ACTIONS(1188),
    [sym_double_circumflex] = ACTIONS(1188),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1188),
    [sym_begin_group] = ACTIONS(1188),
    [sym_end_group] = ACTIONS(1188),
    [sym_math_shift] = ACTIONS(1188),
    [sym_alignment_tab] = ACTIONS(1188),
    [sym_parameter_char] = ACTIONS(1188),
    [sym_superscript] = ACTIONS(1190),
    [sym_subscript] = ACTIONS(1188),
    [sym_active_char] = ACTIONS(1188),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1188),
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
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_double_circumflex] = ACTIONS(1192),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1174),
    [sym_alignment_tab] = ACTIONS(1195),
    [sym_parameter_char] = ACTIONS(1182),
    [sym_superscript] = ACTIONS(1198),
    [sym_subscript] = ACTIONS(1195),
    [sym_active_char] = ACTIONS(1195),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1192),
  },
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(1201),
    [anon_sym_RBRACK] = ACTIONS(1201),
    [sym_double_circumflex] = ACTIONS(1201),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1201),
    [sym_begin_group] = ACTIONS(1201),
    [sym_end_group] = ACTIONS(1201),
    [sym_math_shift] = ACTIONS(1201),
    [sym_alignment_tab] = ACTIONS(1201),
    [sym_parameter_char] = ACTIONS(1201),
    [sym_superscript] = ACTIONS(1203),
    [sym_subscript] = ACTIONS(1201),
    [sym_active_char] = ACTIONS(1201),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1201),
  },
  [332] = {
    [anon_sym_LBRACK] = ACTIONS(1205),
    [anon_sym_RBRACK] = ACTIONS(1205),
    [sym_double_circumflex] = ACTIONS(1205),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1205),
    [sym_begin_group] = ACTIONS(1205),
    [sym_end_group] = ACTIONS(1205),
    [sym_math_shift] = ACTIONS(1205),
    [sym_alignment_tab] = ACTIONS(1205),
    [sym_parameter_char] = ACTIONS(1205),
    [sym_superscript] = ACTIONS(1207),
    [sym_subscript] = ACTIONS(1205),
    [sym_active_char] = ACTIONS(1205),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1205),
  },
  [333] = {
    [anon_sym_LBRACK] = ACTIONS(1209),
    [anon_sym_RBRACK] = ACTIONS(1209),
    [sym_double_circumflex] = ACTIONS(1209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1209),
    [sym_begin_group] = ACTIONS(1209),
    [sym_end_group] = ACTIONS(1209),
    [sym_math_shift] = ACTIONS(1209),
    [sym_alignment_tab] = ACTIONS(1209),
    [sym_parameter_char] = ACTIONS(1209),
    [sym_superscript] = ACTIONS(1211),
    [sym_subscript] = ACTIONS(1209),
    [sym_active_char] = ACTIONS(1209),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1209),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(1213),
    [anon_sym_RBRACK] = ACTIONS(1213),
    [sym_double_circumflex] = ACTIONS(1213),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1213),
    [sym_begin_group] = ACTIONS(1213),
    [sym_end_group] = ACTIONS(1213),
    [sym_math_shift] = ACTIONS(1213),
    [sym_alignment_tab] = ACTIONS(1213),
    [sym_parameter_char] = ACTIONS(1213),
    [sym_superscript] = ACTIONS(1215),
    [sym_subscript] = ACTIONS(1213),
    [sym_active_char] = ACTIONS(1213),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1213),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1217),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(1219),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(1219),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [336] = {
    [anon_sym_LBRACK] = ACTIONS(1221),
    [sym_double_circumflex] = ACTIONS(1221),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1221),
    [sym_begin_group] = ACTIONS(1221),
    [sym_alignment_tab] = ACTIONS(1221),
    [sym_parameter_char] = ACTIONS(1221),
    [sym_superscript] = ACTIONS(1223),
    [sym_subscript] = ACTIONS(1221),
    [sym_active_char] = ACTIONS(1221),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1221),
  },
  [337] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1225),
  },
  [338] = {
    [sym_text_group_at] = STATE(375),
    [sym__whitespace] = ACTIONS(1227),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(861),
    [sym__end_of_line] = ACTIONS(1225),
  },
  [339] = {
    [sym_text_group_at] = STATE(376),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [340] = {
    [anon_sym_LBRACK] = ACTIONS(1229),
    [anon_sym_RBRACK] = ACTIONS(1229),
    [sym_double_circumflex] = ACTIONS(1229),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1229),
    [sym_begin_group] = ACTIONS(1229),
    [sym_end_group] = ACTIONS(1229),
    [sym_math_shift] = ACTIONS(1229),
    [sym_alignment_tab] = ACTIONS(1229),
    [sym_parameter_char] = ACTIONS(1229),
    [sym_superscript] = ACTIONS(1231),
    [sym_subscript] = ACTIONS(1229),
    [sym_active_char] = ACTIONS(1229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1229),
  },
  [341] = {
    [sym__whitespace] = ACTIONS(899),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(899),
    [sym__end_of_line] = ACTIONS(899),
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
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_double_circumflex] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(903),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(903),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(143),
  },
  [343] = {
    [sym_text_group_at] = STATE(378),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(131),
  },
  [344] = {
    [anon_sym_LBRACK] = ACTIONS(1233),
    [anon_sym_RBRACK] = ACTIONS(1233),
    [sym_double_circumflex] = ACTIONS(1233),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1233),
    [sym_begin_group] = ACTIONS(1233),
    [sym_end_group] = ACTIONS(1233),
    [sym_math_shift] = ACTIONS(1233),
    [sym_alignment_tab] = ACTIONS(1233),
    [sym_parameter_char] = ACTIONS(1233),
    [sym_superscript] = ACTIONS(1235),
    [sym_subscript] = ACTIONS(1233),
    [sym_active_char] = ACTIONS(1233),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1233),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(1237),
    [anon_sym_RBRACK] = ACTIONS(1237),
    [sym_double_circumflex] = ACTIONS(1237),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1237),
    [sym_begin_group] = ACTIONS(1237),
    [sym_end_group] = ACTIONS(1237),
    [sym_math_shift] = ACTIONS(1237),
    [sym_alignment_tab] = ACTIONS(1237),
    [sym_parameter_char] = ACTIONS(1237),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1237),
    [sym_active_char] = ACTIONS(1237),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1237),
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
    [anon_sym_LBRACK] = ACTIONS(905),
    [anon_sym_RBRACK] = ACTIONS(1124),
    [sym_double_circumflex] = ACTIONS(1241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(911),
    [sym_begin_group] = ACTIONS(914),
    [sym_math_shift] = ACTIONS(917),
    [sym_alignment_tab] = ACTIONS(1244),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(926),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(1244),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1241),
  },
  [347] = {
    [aux_sym__name_repeat1] = STATE(347),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(1247),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1250),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1253),
  },
  [349] = {
    [aux_sym__name_repeat1] = STATE(349),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(1255),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_end_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1258),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(1261),
    [anon_sym_LBRACK] = ACTIONS(1261),
    [anon_sym_RBRACK] = ACTIONS(1261),
    [sym_double_circumflex] = ACTIONS(1261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1261),
    [sym_begin_group] = ACTIONS(1261),
    [sym_end_group] = ACTIONS(1261),
    [sym_math_shift] = ACTIONS(1261),
    [sym_alignment_tab] = ACTIONS(1261),
    [sym_parameter_char] = ACTIONS(1261),
    [sym_superscript] = ACTIONS(1263),
    [sym_subscript] = ACTIONS(1261),
    [sym_active_char] = ACTIONS(1261),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1261),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(1265),
    [anon_sym_RBRACK] = ACTIONS(1265),
    [sym_double_circumflex] = ACTIONS(1265),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1265),
    [sym_begin_group] = ACTIONS(1265),
    [sym_end_group] = ACTIONS(1265),
    [sym_math_shift] = ACTIONS(1265),
    [sym_alignment_tab] = ACTIONS(1265),
    [sym_parameter_char] = ACTIONS(1265),
    [sym_superscript] = ACTIONS(1267),
    [sym_subscript] = ACTIONS(1265),
    [sym_active_char] = ACTIONS(1265),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1265),
  },
  [352] = {
    [aux_sym__name_repeat1] = STATE(352),
    [sym__whitespace] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(1269),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1272),
    [sym_active_char] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(562),
  },
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(1275),
    [anon_sym_LBRACK] = ACTIONS(1275),
    [anon_sym_RBRACK] = ACTIONS(1275),
    [sym_double_circumflex] = ACTIONS(1275),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(1279),
    [anon_sym_LBRACK] = ACTIONS(1279),
    [anon_sym_RBRACK] = ACTIONS(1279),
    [sym_double_circumflex] = ACTIONS(1279),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [355] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1283),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(1066),
    [anon_sym_LBRACK] = ACTIONS(1066),
    [anon_sym_RBRACK] = ACTIONS(1066),
    [sym_double_circumflex] = ACTIONS(1066),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1066),
    [sym_begin_group] = ACTIONS(1066),
    [sym_end_group] = ACTIONS(1066),
    [sym_math_shift] = ACTIONS(1066),
    [sym_alignment_tab] = ACTIONS(1066),
    [sym_parameter_char] = ACTIONS(1066),
    [sym_superscript] = ACTIONS(1285),
    [sym_subscript] = ACTIONS(1066),
    [sym_active_char] = ACTIONS(1066),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1066),
  },
  [357] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(572),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(1287),
    [sym_double_circumflex] = ACTIONS(1287),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1287),
    [sym_begin_group] = ACTIONS(1287),
    [sym_alignment_tab] = ACTIONS(1287),
    [sym_parameter_char] = ACTIONS(1287),
    [sym_superscript] = ACTIONS(1289),
    [sym_subscript] = ACTIONS(1287),
    [sym_active_char] = ACTIONS(1287),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1287),
  },
  [359] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1291),
  },
  [360] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1293),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1295),
    [sym__end_of_line] = ACTIONS(1295),
  },
  [361] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1297),
  },
  [362] = {
    [anon_sym_LBRACK] = ACTIONS(1299),
    [anon_sym_RBRACK] = ACTIONS(1299),
    [sym_double_circumflex] = ACTIONS(1299),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1299),
    [sym_begin_group] = ACTIONS(1299),
    [sym_end_group] = ACTIONS(1299),
    [sym_math_shift] = ACTIONS(1299),
    [sym_alignment_tab] = ACTIONS(1299),
    [sym_parameter_char] = ACTIONS(1299),
    [sym_superscript] = ACTIONS(1301),
    [sym_subscript] = ACTIONS(1299),
    [sym_active_char] = ACTIONS(1299),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1299),
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
    [anon_sym_LBRACK] = ACTIONS(1165),
    [sym_double_circumflex] = ACTIONS(1303),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1174),
    [sym_end_group] = ACTIONS(1177),
    [sym_alignment_tab] = ACTIONS(1306),
    [sym_parameter_char] = ACTIONS(1182),
    [sym_superscript] = ACTIONS(1309),
    [sym_subscript] = ACTIONS(1306),
    [sym_active_char] = ACTIONS(1306),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1303),
  },
  [364] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(1312),
  },
  [365] = {
    [anon_sym_LBRACK] = ACTIONS(1314),
    [anon_sym_RBRACK] = ACTIONS(1314),
    [sym_double_circumflex] = ACTIONS(1314),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1314),
    [sym_begin_group] = ACTIONS(1314),
    [sym_end_group] = ACTIONS(1314),
    [sym_math_shift] = ACTIONS(1314),
    [sym_alignment_tab] = ACTIONS(1314),
    [sym_parameter_char] = ACTIONS(1314),
    [sym_superscript] = ACTIONS(1316),
    [sym_subscript] = ACTIONS(1314),
    [sym_active_char] = ACTIONS(1314),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1314),
  },
  [366] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1318),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(453),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(819),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [368] = {
    [anon_sym_LBRACK] = ACTIONS(1320),
    [anon_sym_RBRACK] = ACTIONS(1320),
    [sym_double_circumflex] = ACTIONS(1320),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1320),
    [sym_begin_group] = ACTIONS(1320),
    [sym_end_group] = ACTIONS(1320),
    [sym_math_shift] = ACTIONS(1320),
    [sym_alignment_tab] = ACTIONS(1320),
    [sym_parameter_char] = ACTIONS(1320),
    [sym_superscript] = ACTIONS(1322),
    [sym_subscript] = ACTIONS(1320),
    [sym_active_char] = ACTIONS(1320),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1320),
  },
  [369] = {
    [anon_sym_LBRACK] = ACTIONS(1324),
    [anon_sym_RBRACK] = ACTIONS(1324),
    [sym_double_circumflex] = ACTIONS(1324),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1324),
    [sym_begin_group] = ACTIONS(1324),
    [sym_end_group] = ACTIONS(1324),
    [sym_math_shift] = ACTIONS(1324),
    [sym_alignment_tab] = ACTIONS(1324),
    [sym_parameter_char] = ACTIONS(1324),
    [sym_superscript] = ACTIONS(1326),
    [sym_subscript] = ACTIONS(1324),
    [sym_active_char] = ACTIONS(1324),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1324),
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
    [anon_sym_LBRACK] = ACTIONS(1165),
    [anon_sym_RBRACK] = ACTIONS(1177),
    [sym_double_circumflex] = ACTIONS(1328),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1174),
    [sym_alignment_tab] = ACTIONS(1331),
    [sym_parameter_char] = ACTIONS(1182),
    [sym_superscript] = ACTIONS(1334),
    [sym_subscript] = ACTIONS(1331),
    [sym_active_char] = ACTIONS(1331),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1328),
  },
  [371] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(813),
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
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(1337),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(819),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [373] = {
    [anon_sym_LBRACK] = ACTIONS(1339),
    [sym_double_circumflex] = ACTIONS(1339),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1339),
    [sym_begin_group] = ACTIONS(1339),
    [sym_alignment_tab] = ACTIONS(1339),
    [sym_parameter_char] = ACTIONS(1339),
    [sym_superscript] = ACTIONS(1341),
    [sym_subscript] = ACTIONS(1339),
    [sym_active_char] = ACTIONS(1339),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1339),
  },
  [374] = {
    [sym_text_group_at] = STATE(386),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(861),
    [sym__end_of_line] = ACTIONS(1343),
  },
  [375] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1343),
  },
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(1345),
    [anon_sym_RBRACK] = ACTIONS(1345),
    [sym_double_circumflex] = ACTIONS(1345),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1345),
    [sym_begin_group] = ACTIONS(1345),
    [sym_end_group] = ACTIONS(1345),
    [sym_math_shift] = ACTIONS(1345),
    [sym_alignment_tab] = ACTIONS(1345),
    [sym_parameter_char] = ACTIONS(1345),
    [sym_superscript] = ACTIONS(1347),
    [sym_subscript] = ACTIONS(1345),
    [sym_active_char] = ACTIONS(1345),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1345),
  },
  [377] = {
    [sym__whitespace] = ACTIONS(1237),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1237),
    [sym__end_of_line] = ACTIONS(1237),
  },
  [378] = {
    [anon_sym_LBRACK] = ACTIONS(1349),
    [anon_sym_RBRACK] = ACTIONS(1349),
    [sym_double_circumflex] = ACTIONS(1349),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1349),
    [sym_begin_group] = ACTIONS(1349),
    [sym_end_group] = ACTIONS(1349),
    [sym_math_shift] = ACTIONS(1349),
    [sym_alignment_tab] = ACTIONS(1349),
    [sym_parameter_char] = ACTIONS(1349),
    [sym_superscript] = ACTIONS(1351),
    [sym_subscript] = ACTIONS(1349),
    [sym_active_char] = ACTIONS(1349),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1349),
  },
  [379] = {
    [ts_builtin_sym_end] = ACTIONS(1060),
    [anon_sym_LBRACK] = ACTIONS(1060),
    [anon_sym_RBRACK] = ACTIONS(1060),
    [sym_double_circumflex] = ACTIONS(1060),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1060),
    [sym_begin_group] = ACTIONS(1060),
    [sym_end_group] = ACTIONS(1060),
    [sym_math_shift] = ACTIONS(1060),
    [sym_alignment_tab] = ACTIONS(1060),
    [sym_parameter_char] = ACTIONS(1060),
    [sym_superscript] = ACTIONS(1353),
    [sym_subscript] = ACTIONS(1060),
    [sym_active_char] = ACTIONS(1060),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1060),
  },
  [380] = {
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym_double_circumflex] = ACTIONS(1355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1355),
    [sym_begin_group] = ACTIONS(1355),
    [sym_alignment_tab] = ACTIONS(1355),
    [sym_parameter_char] = ACTIONS(1355),
    [sym_superscript] = ACTIONS(1357),
    [sym_subscript] = ACTIONS(1355),
    [sym_active_char] = ACTIONS(1355),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1355),
  },
  [381] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1361),
    [sym__end_of_line] = ACTIONS(1361),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(1363),
    [anon_sym_RBRACK] = ACTIONS(1363),
    [sym_double_circumflex] = ACTIONS(1363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_RBRACK] = ACTIONS(1367),
    [sym_double_circumflex] = ACTIONS(1367),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1367),
    [sym_begin_group] = ACTIONS(1367),
    [sym_end_group] = ACTIONS(1367),
    [sym_math_shift] = ACTIONS(1367),
    [sym_alignment_tab] = ACTIONS(1367),
    [sym_parameter_char] = ACTIONS(1367),
    [sym_superscript] = ACTIONS(1369),
    [sym_subscript] = ACTIONS(1367),
    [sym_active_char] = ACTIONS(1367),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1367),
  },
  [384] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1117),
  },
  [385] = {
    [anon_sym_LBRACK] = ACTIONS(1371),
    [sym_double_circumflex] = ACTIONS(1371),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1371),
    [sym_begin_group] = ACTIONS(1371),
    [sym_alignment_tab] = ACTIONS(1371),
    [sym_parameter_char] = ACTIONS(1371),
    [sym_superscript] = ACTIONS(1373),
    [sym_subscript] = ACTIONS(1371),
    [sym_active_char] = ACTIONS(1371),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1371),
  },
  [386] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1375),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(1377),
    [sym_double_circumflex] = ACTIONS(1377),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1377),
    [sym_begin_group] = ACTIONS(1377),
    [sym_alignment_tab] = ACTIONS(1377),
    [sym_parameter_char] = ACTIONS(1377),
    [sym_superscript] = ACTIONS(1379),
    [sym_subscript] = ACTIONS(1377),
    [sym_active_char] = ACTIONS(1377),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1377),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(33),
  [11] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(31),
  [23] = {.count = 1, .reusable = true}, SHIFT(32),
  [25] = {.count = 1, .reusable = false}, SHIFT(6),
  [27] = {.count = 1, .reusable = true}, SHIFT(6),
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
  [71] = {.count = 1, .reusable = true}, SHIFT(56),
  [73] = {.count = 1, .reusable = true}, SHIFT(53),
  [75] = {.count = 1, .reusable = true}, SHIFT(54),
  [77] = {.count = 1, .reusable = true}, SHIFT(55),
  [79] = {.count = 1, .reusable = true}, SHIFT(66),
  [81] = {.count = 1, .reusable = true}, SHIFT(57),
  [83] = {.count = 1, .reusable = true}, SHIFT(58),
  [85] = {.count = 1, .reusable = true}, SHIFT(59),
  [87] = {.count = 1, .reusable = true}, SHIFT(65),
  [89] = {.count = 1, .reusable = false}, SHIFT(65),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [95] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [97] = {.count = 1, .reusable = true}, SHIFT(67),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(71),
  [103] = {.count = 1, .reusable = true}, SHIFT(68),
  [105] = {.count = 1, .reusable = true}, SHIFT(70),
  [107] = {.count = 1, .reusable = false}, SHIFT(70),
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
  [143] = {.count = 1, .reusable = true}, SHIFT(132),
  [145] = {.count = 1, .reusable = true}, SHIFT(129),
  [147] = {.count = 1, .reusable = true}, SHIFT(131),
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
  [245] = {.count = 1, .reusable = false}, SHIFT(153),
  [247] = {.count = 1, .reusable = true}, SHIFT(154),
  [249] = {.count = 1, .reusable = false}, SHIFT(154),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(155),
  [257] = {.count = 1, .reusable = true}, SHIFT(156),
  [259] = {.count = 1, .reusable = false}, SHIFT(158),
  [261] = {.count = 1, .reusable = true}, SHIFT(159),
  [263] = {.count = 1, .reusable = false}, SHIFT(159),
  [265] = {.count = 1, .reusable = true}, SHIFT(163),
  [267] = {.count = 1, .reusable = true}, SHIFT(160),
  [269] = {.count = 1, .reusable = true}, SHIFT(161),
  [271] = {.count = 1, .reusable = true}, SHIFT(162),
  [273] = {.count = 1, .reusable = false}, SHIFT(162),
  [275] = {.count = 1, .reusable = true}, SHIFT(165),
  [277] = {.count = 1, .reusable = true}, SHIFT(166),
  [279] = {.count = 1, .reusable = true}, SHIFT(168),
  [281] = {.count = 1, .reusable = true}, SHIFT(170),
  [283] = {.count = 1, .reusable = false}, SHIFT(170),
  [285] = {.count = 1, .reusable = true}, SHIFT(174),
  [287] = {.count = 1, .reusable = true}, SHIFT(171),
  [289] = {.count = 1, .reusable = true}, SHIFT(173),
  [291] = {.count = 1, .reusable = false}, SHIFT(173),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [295] = {.count = 1, .reusable = true}, SHIFT(175),
  [297] = {.count = 1, .reusable = false}, SHIFT(175),
  [299] = {.count = 1, .reusable = true}, SHIFT(177),
  [301] = {.count = 1, .reusable = true}, SHIFT(178),
  [303] = {.count = 1, .reusable = false}, SHIFT(178),
  [305] = {.count = 1, .reusable = true}, SHIFT(179),
  [307] = {.count = 1, .reusable = true}, SHIFT(181),
  [309] = {.count = 1, .reusable = false}, SHIFT(181),
  [311] = {.count = 1, .reusable = true}, SHIFT(183),
  [313] = {.count = 1, .reusable = true}, SHIFT(189),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(191),
  [321] = {.count = 1, .reusable = false}, SHIFT(194),
  [323] = {.count = 1, .reusable = true}, SHIFT(193),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [327] = {.count = 1, .reusable = true}, SHIFT(195),
  [329] = {.count = 1, .reusable = false}, SHIFT(189),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(198),
  [337] = {.count = 1, .reusable = false}, SHIFT(199),
  [339] = {.count = 1, .reusable = false}, SHIFT(200),
  [341] = {.count = 1, .reusable = false}, SHIFT(201),
  [343] = {.count = 1, .reusable = true}, SHIFT(203),
  [345] = {.count = 1, .reusable = false}, SHIFT(203),
  [347] = {.count = 1, .reusable = true}, SHIFT(204),
  [349] = {.count = 1, .reusable = true}, SHIFT(205),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_begin, 2),
  [355] = {.count = 1, .reusable = true}, SHIFT(208),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [365] = {.count = 1, .reusable = true}, SHIFT(211),
  [367] = {.count = 1, .reusable = true}, SHIFT(213),
  [369] = {.count = 1, .reusable = true}, SHIFT(215),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [375] = {.count = 1, .reusable = true}, SHIFT(216),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(218),
  [387] = {.count = 1, .reusable = true}, SHIFT(220),
  [389] = {.count = 1, .reusable = true}, SHIFT(221),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_emph, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 2),
  [399] = {.count = 1, .reusable = true}, SHIFT(222),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_textbf, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_textit, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_texttt, 2),
  [413] = {.count = 1, .reusable = false}, SHIFT(224),
  [415] = {.count = 1, .reusable = false}, SHIFT(225),
  [417] = {.count = 1, .reusable = true}, SHIFT(226),
  [419] = {.count = 1, .reusable = true}, SHIFT(227),
  [421] = {.count = 1, .reusable = true}, SHIFT(228),
  [423] = {.count = 1, .reusable = true}, SHIFT(229),
  [425] = {.count = 1, .reusable = true}, SHIFT(230),
  [427] = {.count = 1, .reusable = true}, SHIFT(231),
  [429] = {.count = 1, .reusable = true}, SHIFT(236),
  [431] = {.count = 1, .reusable = false}, SHIFT(236),
  [433] = {.count = 1, .reusable = true}, SHIFT(237),
  [435] = {.count = 1, .reusable = true}, SHIFT(240),
  [437] = {.count = 1, .reusable = false}, SHIFT(240),
  [439] = {.count = 1, .reusable = true}, SHIFT(244),
  [441] = {.count = 1, .reusable = true}, SHIFT(246),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 2),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [451] = {.count = 1, .reusable = true}, SHIFT(259),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [455] = {.count = 1, .reusable = true}, SHIFT(260),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [461] = {.count = 1, .reusable = true}, SHIFT(261),
  [463] = {.count = 1, .reusable = false}, SHIFT(261),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [469] = {.count = 1, .reusable = true}, SHIFT(263),
  [471] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [473] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [476] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(33),
  [479] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(133),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(135),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [509] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(136),
  [514] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 3),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [532] = {.count = 1, .reusable = true}, SHIFT(265),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [536] = {.count = 1, .reusable = true}, SHIFT(266),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_token, 3),
  [560] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2),
  [562] = {.count = 1, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(153),
  [567] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(153),
  [570] = {.count = 1, .reusable = false}, SHIFT(267),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(56),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(53),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(156),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(157),
  [588] = {.count = 1, .reusable = true}, SHIFT(268),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [592] = {.count = 1, .reusable = false}, SHIFT(269),
  [594] = {.count = 1, .reusable = true}, SHIFT(270),
  [596] = {.count = 1, .reusable = false}, SHIFT(270),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [602] = {.count = 1, .reusable = true}, SHIFT(271),
  [604] = {.count = 1, .reusable = true}, SHIFT(272),
  [606] = {.count = 1, .reusable = false}, SHIFT(272),
  [608] = {.count = 1, .reusable = true}, SHIFT(274),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [614] = {.count = 1, .reusable = true}, SHIFT(275),
  [616] = {.count = 1, .reusable = true}, SHIFT(277),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 2),
  [626] = {.count = 1, .reusable = true}, SHIFT(279),
  [628] = {.count = 1, .reusable = false}, SHIFT(279),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [634] = {.count = 1, .reusable = true}, SHIFT(281),
  [636] = {.count = 1, .reusable = false}, SHIFT(281),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(66),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(57),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(58),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(175),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(175),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(176),
  [664] = {.count = 1, .reusable = true}, SHIFT(283),
  [666] = {.count = 1, .reusable = false}, SHIFT(284),
  [668] = {.count = 1, .reusable = true}, SHIFT(285),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(71),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(68),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(181),
  [683] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(181),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(182),
  [689] = {.count = 1, .reusable = true}, SHIFT(286),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [699] = {.count = 1, .reusable = true}, SHIFT(287),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [705] = {.count = 1, .reusable = true}, SHIFT(289),
  [707] = {.count = 1, .reusable = true}, SHIFT(291),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 3),
  [715] = {.count = 1, .reusable = true}, SHIFT(292),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [719] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_end, 2),
  [721] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [723] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [725] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(194),
  [728] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [730] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(79),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(195),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 3),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(66),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(293),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(198),
  [753] = {.count = 1, .reusable = true}, SHIFT(294),
  [755] = {.count = 1, .reusable = true}, SHIFT(295),
  [757] = {.count = 1, .reusable = true}, SHIFT(296),
  [759] = {.count = 1, .reusable = true}, SHIFT(297),
  [761] = {.count = 1, .reusable = true}, SHIFT(298),
  [763] = {.count = 1, .reusable = true}, SHIFT(299),
  [765] = {.count = 1, .reusable = true}, SHIFT(300),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 3),
  [771] = {.count = 1, .reusable = true}, SHIFT(301),
  [773] = {.count = 1, .reusable = true}, SHIFT(302),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [779] = {.count = 1, .reusable = true}, SHIFT(304),
  [781] = {.count = 1, .reusable = true}, SHIFT(305),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [795] = {.count = 1, .reusable = true}, SHIFT(311),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [799] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 3),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [803] = {.count = 1, .reusable = false}, SHIFT(313),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [807] = {.count = 1, .reusable = false}, SHIFT(314),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 2),
  [817] = {.count = 1, .reusable = true}, SHIFT(315),
  [819] = {.count = 1, .reusable = true}, SHIFT(316),
  [821] = {.count = 1, .reusable = true}, SHIFT(317),
  [823] = {.count = 1, .reusable = true}, SHIFT(318),
  [825] = {.count = 1, .reusable = false}, SHIFT(318),
  [827] = {.count = 1, .reusable = true}, SHIFT(320),
  [829] = {.count = 1, .reusable = true}, SHIFT(321),
  [831] = {.count = 1, .reusable = true}, SHIFT(323),
  [833] = {.count = 1, .reusable = true}, SHIFT(325),
  [835] = {.count = 1, .reusable = false}, SHIFT(325),
  [837] = {.count = 1, .reusable = true}, SHIFT(327),
  [839] = {.count = 1, .reusable = false}, SHIFT(327),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [843] = {.count = 1, .reusable = true}, SHIFT(328),
  [845] = {.count = 1, .reusable = false}, SHIFT(328),
  [847] = {.count = 1, .reusable = true}, SHIFT(224),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 3),
  [853] = {.count = 1, .reusable = true}, SHIFT(330),
  [855] = {.count = 1, .reusable = false}, SHIFT(330),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 2),
  [861] = {.count = 1, .reusable = true}, SHIFT(335),
  [863] = {.count = 1, .reusable = true}, SHIFT(336),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym_include_at, 2),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 2),
  [873] = {.count = 1, .reusable = true}, SHIFT(339),
  [875] = {.count = 1, .reusable = true}, SHIFT(342),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_emph_at, 2),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 2),
  [885] = {.count = 1, .reusable = true}, SHIFT(343),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [889] = {.count = 1, .reusable = false}, REDUCE(sym_textbf_at, 2),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [893] = {.count = 1, .reusable = false}, REDUCE(sym_textit_at, 2),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_texttt_at, 2),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 2),
  [903] = {.count = 1, .reusable = true}, SHIFT(346),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [908] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(66),
  [911] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(226),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(108),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(109),
  [920] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(260),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [926] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [929] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [932] = {.count = 1, .reusable = false}, SHIFT(347),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [936] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [938] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(132),
  [941] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(129),
  [944] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(263),
  [947] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(264),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [952] = {.count = 1, .reusable = true}, SHIFT(348),
  [954] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(267),
  [957] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(267),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [962] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(269),
  [965] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(269),
  [968] = {.count = 1, .reusable = false}, SHIFT(349),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [972] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [974] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(163),
  [977] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(160),
  [980] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(272),
  [983] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(272),
  [986] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(273),
  [989] = {.count = 1, .reusable = true}, SHIFT(350),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [993] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [995] = {.count = 1, .reusable = true}, SHIFT(351),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [999] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 3),
  [1001] = {.count = 1, .reusable = false}, SHIFT(352),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [1005] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [1007] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(174),
  [1010] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(171),
  [1013] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(281),
  [1016] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(281),
  [1019] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(282),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [1024] = {.count = 1, .reusable = false}, REDUCE(sym_inline_verbatim, 4),
  [1026] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(284),
  [1029] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(284),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [1034] = {.count = 1, .reusable = false}, SHIFT(353),
  [1036] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [1038] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [1040] = {.count = 1, .reusable = false}, SHIFT(354),
  [1042] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [1044] = {.count = 1, .reusable = true}, SHIFT(355),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [1048] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [1050] = {.count = 1, .reusable = true}, SHIFT(200),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [1054] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [1058] = {.count = 1, .reusable = true}, SHIFT(356),
  [1060] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [1062] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [1064] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [1068] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [1070] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [1072] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(298),
  [1075] = {.count = 1, .reusable = true}, SHIFT(357),
  [1077] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [1079] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 4),
  [1081] = {.count = 1, .reusable = true}, SHIFT(358),
  [1083] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [1087] = {.count = 1, .reusable = true}, SHIFT(360),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1091] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1095] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1097] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1099] = {.count = 1, .reusable = false}, REDUCE(sym_section, 4),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1103] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [1105] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [1107] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 4),
  [1109] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1111] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 3),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 3),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 3),
  [1121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(56),
  [1124] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(316),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1131] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 2),
  [1133] = {.count = 1, .reusable = true}, SHIFT(362),
  [1135] = {.count = 1, .reusable = true}, SHIFT(363),
  [1137] = {.count = 1, .reusable = false}, SHIFT(363),
  [1139] = {.count = 1, .reusable = true}, SHIFT(364),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1143] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math_at, 3),
  [1145] = {.count = 1, .reusable = true}, SHIFT(365),
  [1147] = {.count = 1, .reusable = true}, SHIFT(367),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1151] = {.count = 1, .reusable = false}, REDUCE(sym_tag_at, 2),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1155] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 2),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1159] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 2),
  [1161] = {.count = 1, .reusable = true}, SHIFT(370),
  [1163] = {.count = 1, .reusable = false}, SHIFT(370),
  [1165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [1168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(66),
  [1171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(229),
  [1174] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(230),
  [1177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [1182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [1185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [1188] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1190] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math_at, 3),
  [1192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(71),
  [1195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(330),
  [1198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(330),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1203] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math_at, 3),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1207] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_at, 3),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1211] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_at, 3),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1215] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 3),
  [1217] = {.count = 1, .reusable = true}, SHIFT(371),
  [1219] = {.count = 1, .reusable = true}, SHIFT(372),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1223] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 3),
  [1225] = {.count = 1, .reusable = true}, SHIFT(373),
  [1227] = {.count = 1, .reusable = true}, SHIFT(374),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1231] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 3),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1235] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 3),
  [1237] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1239] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 3),
  [1241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(132),
  [1244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(346),
  [1247] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(347),
  [1250] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(347),
  [1253] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1255] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(349),
  [1258] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(349),
  [1261] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1263] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [1265] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1267] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [1269] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(352),
  [1272] = {.count = 2, .reusable = false}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(352),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1277] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 3),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1281] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 3),
  [1283] = {.count = 1, .reusable = true}, SHIFT(379),
  [1285] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env_group, 3),
  [1287] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1289] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 5),
  [1291] = {.count = 1, .reusable = true}, SHIFT(380),
  [1293] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1297] = {.count = 1, .reusable = true}, SHIFT(381),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1301] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 3),
  [1303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(163),
  [1306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(363),
  [1309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(363),
  [1312] = {.count = 1, .reusable = true}, SHIFT(382),
  [1314] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1316] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 2),
  [1318] = {.count = 1, .reusable = true}, SHIFT(383),
  [1320] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1322] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 3),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1326] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 3),
  [1328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(174),
  [1331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(370),
  [1334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(370),
  [1337] = {.count = 1, .reusable = true}, SHIFT(384),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1341] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 4),
  [1343] = {.count = 1, .reusable = true}, SHIFT(385),
  [1345] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1347] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 4),
  [1349] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1351] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 4),
  [1353] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [1355] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1357] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 6),
  [1359] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1361] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1365] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math_at, 5),
  [1367] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1369] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 3),
  [1371] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1373] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 5),
  [1375] = {.count = 1, .reusable = true}, SHIFT(387),
  [1377] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
  [1379] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 6),
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
