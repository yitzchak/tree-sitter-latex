#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 368
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 4
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH = 3,
  sym__whitespace = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_display_math_env_name = 9,
  sym_inline_math_env_name = 10,
  anon_sym_tag = 11,
  aux_sym_SLASH_DOT_SLASH = 12,
  sym_verbatim_env_name = 13,
  aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH = 14,
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
  sym__name = 44,
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
  sym__control_symbol_body = 105,
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
  sym_text = 158,
  aux_sym_text_mode_repeat1 = 159,
  aux_sym_text_mode_at_repeat1 = 160,
  aux_sym_math_mode_repeat1 = 161,
  aux_sym_math_mode_at_repeat1 = 162,
  aux_sym_parameter_repeat1 = 163,
  aux_sym_verbatim_text_repeat1 = 164,
  aux_sym_verbatim_text_repeat2 = 165,
  aux_sym_text_repeat1 = 166,
  anon_alias_sym_class_name = 167,
  anon_alias_sym_env_name = 168,
  anon_alias_sym_package_name = 169,
  anon_alias_sym_text = 170,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
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
  [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = "/[^a-zA-Z]/",
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
  [sym__name] = "_name",
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
  [sym__control_symbol_body] = "_control_symbol_body",
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
  [sym_text] = "text",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_text_mode_at_repeat1] = "text_mode_at_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_math_mode_at_repeat1] = "math_mode_at_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_verbatim_text_repeat2] = "verbatim_text_repeat2",
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
  [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = {
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
  [sym__name] = {
    .visible = false,
    .named = true,
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
  [sym__control_symbol_body] = {
    .visible = false,
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
        ADVANCE(44);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == 'f')
        ADVANCE(97);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'k')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(116);
      if (lookahead == 'p')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'u')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(174);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH);
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
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH);
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(49);
      if (lookahead == 'p')
        ADVANCE(54);
      if (lookahead == 's')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'h')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'm')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(107);
      if (lookahead == 'p')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH);
      END_STATE();
    case 181:
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
    case 182:
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
    case 183:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 185:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(186);
      END_STATE();
    case 187:
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
        ADVANCE(188);
      ADVANCE(41);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 189:
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
    case 190:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(115);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'k')
        ADVANCE(114);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 194:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'd')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_end);
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
        ADVANCE(44);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'd')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(97);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'k')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(116);
      if (lookahead == 'p')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'u')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(174);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'm')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 203:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(204);
      if (lookahead == '^')
        ADVANCE(213);
      if (lookahead == 'a')
        ADVANCE(214);
      if (lookahead == 'd')
        ADVANCE(224);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead == 'f')
        ADVANCE(258);
      if (lookahead == 'g')
        ADVANCE(263);
      if (lookahead == 'l')
        ADVANCE(268);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(292);
      if (lookahead == 'v')
        ADVANCE(295);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(302);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 213:
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'l')
        ADVANCE(215);
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
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(219);
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
    case 219:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(219);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 't')
        ADVANCE(212);
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
      if (lookahead == 'a')
        ADVANCE(225);
      if (lookahead == 'g')
        ADVANCE(229);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 'm')
        ADVANCE(242);
      if (lookahead == 's')
        ADVANCE(245);
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
      if (lookahead == 'r')
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
      if (lookahead == 'r')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
        ADVANCE(221);
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
      if (lookahead == 'r')
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(221);
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
      if (lookahead == 's')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(219);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
    case 245:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(247);
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(221);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(253);
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
      if (lookahead == 'a')
        ADVANCE(225);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(221);
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(257);
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
      if (lookahead == 'a')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH);
      if (lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'i')
        ADVANCE(281);
      if (lookahead == 'u')
        ADVANCE(285);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(212);
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
        ADVANCE(287);
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(221);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(220);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(297);
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
        ADVANCE(212);
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
      if (lookahead == 'V')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 303:
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
    case 304:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 305:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(306);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(320);
      if (lookahead == 'c')
        ADVANCE(325);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead == 'e')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(357);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'k')
        ADVANCE(374);
      if (lookahead == 'm')
        ADVANCE(376);
      if (lookahead == 'p')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(413);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'v')
        ADVANCE(433);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(315);
      if (lookahead == 's')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(326);
      if (lookahead == 'h')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(71);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(353);
      if (lookahead == 'm')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(367);
      if (lookahead == 'p')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(377);
      if (lookahead == 'i')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(393);
      if (lookahead == 't')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(399);
      if (lookahead == 'u')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(406);
      if (lookahead == 's')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(399);
      if (lookahead == 'u')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(417);
      if (lookahead == 'i')
        ADVANCE(419);
      if (lookahead == 't')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(178);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 438:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'c')
        ADVANCE(115);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'e')
        ADVANCE(439);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'k')
        ADVANCE(114);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 440:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 441:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(306);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(320);
      if (lookahead == 'c')
        ADVANCE(325);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead == 'e')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(357);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'k')
        ADVANCE(374);
      if (lookahead == 'm')
        ADVANCE(442);
      if (lookahead == 'p')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(413);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'v')
        ADVANCE(433);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 443:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '@')
        ADVANCE(306);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(320);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'k')
        ADVANCE(374);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(445);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 447:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'a')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'k')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'e')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'a')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 't')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'o')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'h')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'e')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'r')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 459:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(306);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(308);
      if (lookahead == 'b')
        ADVANCE(320);
      if (lookahead == 'c')
        ADVANCE(325);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'f')
        ADVANCE(357);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'k')
        ADVANCE(374);
      if (lookahead == 'm')
        ADVANCE(442);
      if (lookahead == 'p')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(413);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'v')
        ADVANCE(433);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(353);
      if (lookahead == 'm')
        ADVANCE(354);
      if (lookahead == 'n')
        ADVANCE(461);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 463:
      if (lookahead == '%')
        ADVANCE(44);
      if (lookahead == '@')
        ADVANCE(306);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == 'b')
        ADVANCE(320);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(353);
      if (lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 'k')
        ADVANCE(374);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(180);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(353);
      if (lookahead == 'n')
        ADVANCE(461);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 181},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 183},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 183},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 184},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 182},
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
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 187},
  [36] = {.lex_state = 187},
  [37] = {.lex_state = 189},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 189},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 187},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 189},
  [45] = {.lex_state = 189},
  [46] = {.lex_state = 189},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 187},
  [50] = {.lex_state = 187},
  [51] = {.lex_state = 182},
  [52] = {.lex_state = 182},
  [53] = {.lex_state = 181},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 183, .external_lex_state = 3},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 182},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 198},
  [77] = {.lex_state = 184},
  [78] = {.lex_state = 199},
  [79] = {.lex_state = 182},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 203},
  [83] = {.lex_state = 303},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 303},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 182},
  [89] = {.lex_state = 189},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 182},
  [92] = {.lex_state = 189},
  [93] = {.lex_state = 182},
  [94] = {.lex_state = 182},
  [95] = {.lex_state = 189},
  [96] = {.lex_state = 190},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 182},
  [99] = {.lex_state = 182},
  [100] = {.lex_state = 189},
  [101] = {.lex_state = 182},
  [102] = {.lex_state = 182},
  [103] = {.lex_state = 182},
  [104] = {.lex_state = 305},
  [105] = {.lex_state = 181},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 36},
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
  [121] = {.lex_state = 182},
  [122] = {.lex_state = 182},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 182},
  [126] = {.lex_state = 182},
  [127] = {.lex_state = 42},
  [128] = {.lex_state = 42},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 182},
  [131] = {.lex_state = 185},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 189},
  [140] = {.lex_state = 189},
  [141] = {.lex_state = 182},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 182},
  [149] = {.lex_state = 182},
  [150] = {.lex_state = 181},
  [151] = {.lex_state = 181},
  [152] = {.lex_state = 189},
  [153] = {.lex_state = 182},
  [154] = {.lex_state = 181},
  [155] = {.lex_state = 181},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 182},
  [158] = {.lex_state = 181},
  [159] = {.lex_state = 182},
  [160] = {.lex_state = 438},
  [161] = {.lex_state = 182},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 182},
  [164] = {.lex_state = 42},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36, .external_lex_state = 2},
  [169] = {.lex_state = 42},
  [170] = {.lex_state = 182},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 440},
  [174] = {.lex_state = 182},
  [175] = {.lex_state = 182},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 182},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 189},
  [180] = {.lex_state = 182},
  [181] = {.lex_state = 203},
  [182] = {.lex_state = 182},
  [183] = {.lex_state = 184},
  [184] = {.lex_state = 198},
  [185] = {.lex_state = 184},
  [186] = {.lex_state = 182},
  [187] = {.lex_state = 182},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 181},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 181},
  [194] = {.lex_state = 181},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 303},
  [197] = {.lex_state = 303},
  [198] = {.lex_state = 184},
  [199] = {.lex_state = 303},
  [200] = {.lex_state = 303},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 182},
  [203] = {.lex_state = 303},
  [204] = {.lex_state = 303},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 182},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 182},
  [210] = {.lex_state = 304},
  [211] = {.lex_state = 185},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 182},
  [214] = {.lex_state = 187},
  [215] = {.lex_state = 187},
  [216] = {.lex_state = 441},
  [217] = {.lex_state = 182},
  [218] = {.lex_state = 181},
  [219] = {.lex_state = 443},
  [220] = {.lex_state = 181},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 42},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 447},
  [228] = {.lex_state = 182},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 459},
  [235] = {.lex_state = 182},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 303},
  [238] = {.lex_state = 182},
  [239] = {.lex_state = 182},
  [240] = {.lex_state = 189},
  [241] = {.lex_state = 42},
  [242] = {.lex_state = 182},
  [243] = {.lex_state = 182},
  [244] = {.lex_state = 189},
  [245] = {.lex_state = 182},
  [246] = {.lex_state = 182},
  [247] = {.lex_state = 182},
  [248] = {.lex_state = 182},
  [249] = {.lex_state = 42},
  [250] = {.lex_state = 36},
  [251] = {.lex_state = 182},
  [252] = {.lex_state = 42},
  [253] = {.lex_state = 42},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 189},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 182},
  [258] = {.lex_state = 181},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 182},
  [262] = {.lex_state = 181},
  [263] = {.lex_state = 181},
  [264] = {.lex_state = 182},
  [265] = {.lex_state = 182},
  [266] = {.lex_state = 42},
  [267] = {.lex_state = 42},
  [268] = {.lex_state = 182},
  [269] = {.lex_state = 187},
  [270] = {.lex_state = 187},
  [271] = {.lex_state = 203},
  [272] = {.lex_state = 182},
  [273] = {.lex_state = 203},
  [274] = {.lex_state = 182},
  [275] = {.lex_state = 36},
  [276] = {.lex_state = 181},
  [277] = {.lex_state = 303},
  [278] = {.lex_state = 182},
  [279] = {.lex_state = 303},
  [280] = {.lex_state = 182},
  [281] = {.lex_state = 181},
  [282] = {.lex_state = 303},
  [283] = {.lex_state = 181},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 303},
  [286] = {.lex_state = 303},
  [287] = {.lex_state = 184},
  [288] = {.lex_state = 303},
  [289] = {.lex_state = 303},
  [290] = {.lex_state = 182},
  [291] = {.lex_state = 303},
  [292] = {.lex_state = 182},
  [293] = {.lex_state = 182},
  [294] = {.lex_state = 182},
  [295] = {.lex_state = 182},
  [296] = {.lex_state = 182},
  [297] = {.lex_state = 182},
  [298] = {.lex_state = 182},
  [299] = {.lex_state = 181},
  [300] = {.lex_state = 182},
  [301] = {.lex_state = 181},
  [302] = {.lex_state = 36},
  [303] = {.lex_state = 182},
  [304] = {.lex_state = 181},
  [305] = {.lex_state = 182},
  [306] = {.lex_state = 463},
  [307] = {.lex_state = 182},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 182},
  [310] = {.lex_state = 42},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 182},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 182},
  [315] = {.lex_state = 182},
  [316] = {.lex_state = 182},
  [317] = {.lex_state = 182},
  [318] = {.lex_state = 181},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 303},
  [321] = {.lex_state = 303},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 182},
  [324] = {.lex_state = 303},
  [325] = {.lex_state = 42},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 182},
  [328] = {.lex_state = 182},
  [329] = {.lex_state = 42},
  [330] = {.lex_state = 36},
  [331] = {.lex_state = 182},
  [332] = {.lex_state = 182},
  [333] = {.lex_state = 182},
  [334] = {.lex_state = 182},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 182},
  [337] = {.lex_state = 303},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 303},
  [340] = {.lex_state = 184},
  [341] = {.lex_state = 303},
  [342] = {.lex_state = 182},
  [343] = {.lex_state = 181},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 182},
  [346] = {.lex_state = 181},
  [347] = {.lex_state = 181},
  [348] = {.lex_state = 182},
  [349] = {.lex_state = 182},
  [350] = {.lex_state = 42},
  [351] = {.lex_state = 303},
  [352] = {.lex_state = 181},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 303},
  [355] = {.lex_state = 303},
  [356] = {.lex_state = 182},
  [357] = {.lex_state = 303},
  [358] = {.lex_state = 182},
  [359] = {.lex_state = 182},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 184},
  [362] = {.lex_state = 182},
  [363] = {.lex_state = 182},
  [364] = {.lex_state = 303},
  [365] = {.lex_state = 36},
  [366] = {.lex_state = 303},
  [367] = {.lex_state = 36},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
  },
  [2] = {
    [ts_external_token_verb_delim] = true,
  },
  [3] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(3),
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
    [sym__control_symbol_body] = STATE(51),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
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
    [sym__name] = ACTIONS(69),
  },
  [4] = {
    [sym__common] = STATE(53),
    [sym__text_mode_common] = STATE(53),
    [sym_inline_verbatim] = STATE(53),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(53),
    [sym_text_mode_at_region] = STATE(53),
    [sym_parameter] = STATE(53),
    [sym_text_env] = STATE(53),
    [sym__display_math] = STATE(53),
    [sym_tex_display_math] = STATE(53),
    [sym_latex_display_math] = STATE(53),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(53),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(53),
    [sym_tex_inline_math] = STATE(53),
    [sym_latex_inline_math] = STATE(53),
    [sym_inline_math_env] = STATE(53),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(53),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(53),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(53),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(53),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(53),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(53),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(53),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(53),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(53),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(53),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(53),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(53),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(53),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(53),
    [sym_opt_text_group] = STATE(53),
    [sym_token] = STATE(53),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(53),
    [aux_sym_text_mode_repeat1] = STATE(53),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [5] = {
    [sym__common] = STATE(63),
    [sym__math_mode_common] = STATE(63),
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(58),
    [sym_parameter] = STATE(63),
    [sym_math_env] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(63),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(63),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(63),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(63),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(63),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(63),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_double_circumflex] = ACTIONS(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(89),
    [sym_end_group] = ACTIONS(89),
    [sym_math_shift] = ACTIONS(89),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(89),
    [sym_superscript] = ACTIONS(91),
    [sym_subscript] = ACTIONS(89),
    [sym_active_char] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(89),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym__common] = STATE(67),
    [sym__math_mode_common] = STATE(67),
    [sym__math_mode] = STATE(67),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(67),
    [sym_math_env] = STATE(67),
    [sym_tag] = STATE(67),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(67),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(67),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(67),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(67),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(67),
    [sym_opt_math_group] = STATE(67),
    [sym_token] = STATE(67),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(67),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [11] = {
    [sym__common] = STATE(67),
    [sym__math_mode_common] = STATE(67),
    [sym__math_mode] = STATE(67),
    [sym_math_mode] = STATE(69),
    [sym_parameter] = STATE(67),
    [sym_math_env] = STATE(67),
    [sym_tag] = STATE(67),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(67),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(67),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(67),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(67),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(67),
    [sym_opt_math_group] = STATE(67),
    [sym_token] = STATE(67),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(67),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [12] = {
    [sym__common] = STATE(67),
    [sym__math_mode_common] = STATE(67),
    [sym__math_mode] = STATE(67),
    [sym_math_mode] = STATE(70),
    [sym_parameter] = STATE(67),
    [sym_math_env] = STATE(67),
    [sym_tag] = STATE(67),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(67),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(67),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(67),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(67),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(67),
    [sym_opt_math_group] = STATE(67),
    [sym_token] = STATE(67),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(67),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [13] = {
    [sym__common] = STATE(67),
    [sym__math_mode_common] = STATE(67),
    [sym__math_mode] = STATE(67),
    [sym_math_mode] = STATE(71),
    [sym_parameter] = STATE(67),
    [sym_math_env] = STATE(67),
    [sym_tag] = STATE(67),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(67),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(67),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(67),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(67),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(67),
    [sym_opt_math_group] = STATE(67),
    [sym_token] = STATE(67),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(67),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [14] = {
    [sym_verbatim_end] = STATE(73),
    [sym_verbatim_text] = STATE(74),
    [sym_end_token] = STATE(75),
    [aux_sym_verbatim_text_repeat1] = STATE(76),
    [aux_sym_verbatim_text_repeat2] = STATE(77),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(105),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
    [sym__end_of_line] = ACTIONS(109),
  },
  [15] = {
    [sym__common] = STATE(81),
    [sym__text_mode_common] = STATE(81),
    [sym_inline_verbatim] = STATE(81),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(81),
    [sym_text_mode_at_region] = STATE(81),
    [sym_parameter] = STATE(81),
    [sym_text_env] = STATE(81),
    [sym__display_math] = STATE(81),
    [sym_tex_display_math] = STATE(81),
    [sym_latex_display_math] = STATE(81),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(81),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(81),
    [sym_tex_inline_math] = STATE(81),
    [sym_latex_inline_math] = STATE(81),
    [sym_inline_math_env] = STATE(81),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(81),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(81),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(79),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(81),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(81),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(81),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(81),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(81),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(81),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(81),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(81),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(81),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(81),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(81),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(81),
    [sym_opt_text_group] = STATE(81),
    [sym_token] = STATE(81),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(81),
    [aux_sym_text_mode_repeat1] = STATE(81),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(83),
    [sym_inline_math_env_group] = STATE(84),
    [sym_verbatim_env_group] = STATE(85),
    [sym_simple_text_group] = STATE(86),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [17] = {
    [sym_simple_text_group] = STATE(88),
    [sym_opt_text_group] = STATE(89),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [18] = {
    [sym_simple_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(92),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [19] = {
    [sym_text_group] = STATE(93),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [20] = {
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(95),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_double_circumflex] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(119),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(119),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(119),
  },
  [22] = {
    [sym_escaped] = STATE(97),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(123),
  },
  [23] = {
    [sym_text_group] = STATE(98),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [24] = {
    [sym_text_group] = STATE(99),
    [sym_opt_text_group] = STATE(100),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [25] = {
    [sym_text_group] = STATE(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [26] = {
    [sym_text_group] = STATE(102),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [27] = {
    [sym_text_group] = STATE(103),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [28] = {
    [sym__common] = STATE(124),
    [sym__text_mode_common] = STATE(124),
    [sym_inline_verbatim] = STATE(124),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(124),
    [sym_text_mode_at] = STATE(107),
    [sym_parameter] = STATE(124),
    [sym_text_env_at] = STATE(124),
    [sym__display_math_at] = STATE(124),
    [sym_tex_display_math_at] = STATE(124),
    [sym_latex_display_math_at] = STATE(124),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(124),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(124),
    [sym_tex_inline_math_at] = STATE(124),
    [sym_latex_inline_math_at] = STATE(124),
    [sym_inline_math_env_at] = STATE(124),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(124),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(124),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(124),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(124),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(124),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(124),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(124),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(124),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(124),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(124),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(124),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(124),
    [sym_texttt_token] = STATE(120),
    [sym_makeatother] = STATE(121),
    [sym_makeatother_token] = STATE(122),
    [sym_text_group_at] = STATE(124),
    [sym_opt_text_group_at] = STATE(124),
    [sym_token_at] = STATE(124),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(131),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_double_circumflex] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(133),
  },
  [30] = {
    [sym__common] = STATE(127),
    [sym__text_mode_common] = STATE(127),
    [sym_inline_verbatim] = STATE(127),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(127),
    [sym_text_mode_at_region] = STATE(127),
    [sym_parameter] = STATE(127),
    [sym_text_env] = STATE(127),
    [sym__display_math] = STATE(127),
    [sym_tex_display_math] = STATE(127),
    [sym_latex_display_math] = STATE(127),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(127),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(127),
    [sym_tex_inline_math] = STATE(127),
    [sym_latex_inline_math] = STATE(127),
    [sym_inline_math_env] = STATE(127),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(127),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(127),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(127),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(127),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(127),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(127),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(127),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(127),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(127),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(127),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(127),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(127),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(127),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(127),
    [sym_opt_text_group] = STATE(127),
    [sym_token] = STATE(127),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(126),
    [sym_text] = STATE(127),
    [aux_sym_text_mode_repeat1] = STATE(127),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(141),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [31] = {
    [sym__common] = STATE(129),
    [sym__text_mode_common] = STATE(129),
    [sym_inline_verbatim] = STATE(129),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(129),
    [sym_text_mode_at_region] = STATE(129),
    [sym_parameter] = STATE(129),
    [sym_text_env] = STATE(129),
    [sym__display_math] = STATE(129),
    [sym_tex_display_math] = STATE(129),
    [sym_latex_display_math] = STATE(129),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(129),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(129),
    [sym_tex_inline_math] = STATE(129),
    [sym_latex_inline_math] = STATE(129),
    [sym_inline_math_env] = STATE(129),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(129),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(129),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(129),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(129),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(129),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(129),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(129),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(129),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(129),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(129),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(129),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(129),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(129),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(129),
    [sym_opt_text_group] = STATE(129),
    [sym_token] = STATE(129),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(129),
    [aux_sym_text_mode_repeat1] = STATE(129),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(9),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(147),
    [sym_number] = ACTIONS(149),
  },
  [33] = {
    [aux_sym_text_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [34] = {
    [sym_verb_delim] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_double_circumflex] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(161),
  },
  [36] = {
    [sym__whitespace] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [sym_double_circumflex] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(167),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(171),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(175),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(179),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(183),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(187),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym__whitespace] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [sym_double_circumflex] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(191),
    [sym_begin_group] = ACTIONS(191),
    [sym_end_group] = ACTIONS(191),
    [sym_math_shift] = ACTIONS(191),
    [sym_alignment_tab] = ACTIONS(191),
    [sym_parameter_char] = ACTIONS(191),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(191),
    [sym_active_char] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(195),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(197),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(201),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(205),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(209),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(211),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(213),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(217),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [sym_double_circumflex] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(221),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(221),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(223),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym__whitespace] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_double_circumflex] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(229),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym_double_circumflex] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_end_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(231),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(235),
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
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(235),
  },
  [53] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
    [sym_inline_verbatim] = STATE(150),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(150),
    [sym_text_mode_at_region] = STATE(150),
    [sym_parameter] = STATE(150),
    [sym_text_env] = STATE(150),
    [sym__display_math] = STATE(150),
    [sym_tex_display_math] = STATE(150),
    [sym_latex_display_math] = STATE(150),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(150),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(150),
    [sym_tex_inline_math] = STATE(150),
    [sym_latex_inline_math] = STATE(150),
    [sym_inline_math_env] = STATE(150),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(150),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(150),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(150),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(150),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(150),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(150),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(150),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(150),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(150),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(150),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(150),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [54] = {
    [aux_sym_text_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [55] = {
    [sym__control_symbol_body] = STATE(51),
    [anon_sym_tag] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(69),
  },
  [56] = {
    [sym__common] = STATE(154),
    [sym__math_mode_common] = STATE(154),
    [sym__math_mode] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_math_env] = STATE(154),
    [sym_tag] = STATE(154),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(154),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(154),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(154),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(154),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(154),
    [sym_opt_math_group] = STATE(154),
    [sym_token] = STATE(154),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(154),
    [aux_sym_math_mode_repeat1] = STATE(154),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_end_group] = ACTIONS(247),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(245),
  },
  [57] = {
    [sym__common] = STATE(63),
    [sym__math_mode_common] = STATE(63),
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(156),
    [sym_parameter] = STATE(63),
    [sym_math_env] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(63),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(63),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(63),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(63),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(63),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(63),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [58] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(253),
  },
  [59] = {
    [sym_math_text_group] = STATE(159),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(255),
  },
  [60] = {
    [sym__common] = STATE(162),
    [sym__math_mode_common] = STATE(162),
    [sym__math_mode] = STATE(162),
    [sym_parameter] = STATE(162),
    [sym_math_env] = STATE(162),
    [sym_tag] = STATE(162),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(162),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_end] = STATE(161),
    [sym_end_token] = STATE(80),
    [sym_include] = STATE(162),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(162),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(162),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(162),
    [sym_opt_math_group] = STATE(162),
    [sym_token] = STATE(162),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(162),
    [aux_sym_math_mode_repeat1] = STATE(162),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [61] = {
    [sym_simple_text_group] = STATE(86),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [62] = {
    [sym__common] = STATE(164),
    [sym__math_mode_common] = STATE(164),
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_env] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(164),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(164),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(164),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(164),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(164),
    [sym_begin_opt] = STATE(62),
    [sym_end_opt] = STATE(163),
    [sym_text] = STATE(164),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [63] = {
    [sym__common] = STATE(166),
    [sym__math_mode_common] = STATE(166),
    [sym__math_mode] = STATE(166),
    [sym_parameter] = STATE(166),
    [sym_math_env] = STATE(166),
    [sym_tag] = STATE(166),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(166),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(166),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(166),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(166),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(166),
    [sym_opt_math_group] = STATE(166),
    [sym_token] = STATE(166),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(166),
    [aux_sym_math_mode_repeat1] = STATE(166),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [64] = {
    [aux_sym_text_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [65] = {
    [sym_verb_body] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [66] = {
    [sym_end_display_math] = STATE(170),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(277),
  },
  [67] = {
    [sym__common] = STATE(171),
    [sym__math_mode_common] = STATE(171),
    [sym__math_mode] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_math_env] = STATE(171),
    [sym_tag] = STATE(171),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(171),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(171),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(171),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(171),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(171),
    [sym_opt_math_group] = STATE(171),
    [sym_token] = STATE(171),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(171),
    [aux_sym_math_mode_repeat1] = STATE(171),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [68] = {
    [aux_sym_text_repeat1] = STATE(172),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [69] = {
    [sym_end_inline_math] = STATE(174),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(283),
  },
  [70] = {
    [sym_display_math_end] = STATE(175),
    [sym_end_token] = STATE(176),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
  },
  [71] = {
    [sym_inline_math_end] = STATE(177),
    [sym_end_token] = STATE(178),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
  },
  [72] = {
    [anon_sym_end] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_double_circumflex] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(287),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(287),
  },
  [74] = {
    [sym_verbatim_end] = STATE(180),
    [sym_end_token] = STATE(75),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
  },
  [75] = {
    [sym_verbatim_env_group] = STATE(182),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(291),
  },
  [76] = {
    [aux_sym_verbatim_text_repeat1] = STATE(184),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(295),
  },
  [77] = {
    [aux_sym_verbatim_text_repeat1] = STATE(76),
    [aux_sym_verbatim_text_repeat2] = STATE(185),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(105),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(297),
    [sym__end_of_line] = ACTIONS(299),
  },
  [78] = {
    [sym__control_symbol_body] = STATE(51),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(301),
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
    [sym__name] = ACTIONS(69),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_double_circumflex] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(303),
  },
  [80] = {
    [sym_simple_text_group] = STATE(186),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [81] = {
    [sym__common] = STATE(188),
    [sym__text_mode_common] = STATE(188),
    [sym_inline_verbatim] = STATE(188),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(188),
    [sym_text_mode_at_region] = STATE(188),
    [sym_parameter] = STATE(188),
    [sym_text_env] = STATE(188),
    [sym__display_math] = STATE(188),
    [sym_tex_display_math] = STATE(188),
    [sym_latex_display_math] = STATE(188),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(188),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(188),
    [sym_tex_inline_math] = STATE(188),
    [sym_latex_inline_math] = STATE(188),
    [sym_inline_math_env] = STATE(188),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(188),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(188),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(187),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(188),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(188),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(188),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(188),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(188),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(188),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(188),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(188),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(188),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(188),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(188),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(188),
    [sym_opt_text_group] = STATE(188),
    [sym_token] = STATE(188),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(188),
    [aux_sym_text_mode_repeat1] = STATE(188),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [82] = {
    [sym_text] = STATE(192),
    [aux_sym_text_repeat1] = STATE(193),
    [sym_display_math_env_name] = ACTIONS(309),
    [sym_inline_math_env_name] = ACTIONS(311),
    [sym_verbatim_env_name] = ACTIONS(313),
    [sym_double_circumflex] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(317),
  },
  [83] = {
    [sym_text_group] = STATE(196),
    [sym_opt_text_group] = STATE(197),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(321),
  },
  [84] = {
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_double_circumflex] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(323),
  },
  [85] = {
    [sym_text_group] = STATE(199),
    [sym_opt_text_group] = STATE(200),
    [sym_begin_opt] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(327),
  },
  [86] = {
    [anon_sym_LBRACK] = ACTIONS(329),
    [sym_double_circumflex] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(329),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(329),
  },
  [87] = {
    [sym_text] = STATE(192),
    [aux_sym_text_repeat1] = STATE(193),
    [sym_double_circumflex] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(315),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_double_circumflex] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [89] = {
    [sym_simple_text_group] = STATE(202),
    [sym__whitespace] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [90] = {
    [sym__common] = STATE(205),
    [sym__text_mode_common] = STATE(205),
    [sym_inline_verbatim] = STATE(205),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(205),
    [sym_text_mode_at_region] = STATE(205),
    [sym_parameter] = STATE(205),
    [sym_text_env] = STATE(205),
    [sym__display_math] = STATE(205),
    [sym_tex_display_math] = STATE(205),
    [sym_latex_display_math] = STATE(205),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(205),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(205),
    [sym_tex_inline_math] = STATE(205),
    [sym_latex_inline_math] = STATE(205),
    [sym_inline_math_env] = STATE(205),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(205),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(205),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(205),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(205),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(205),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(205),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(205),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(205),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(205),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(205),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(205),
    [sym_opt_text_group] = STATE(205),
    [sym_token] = STATE(205),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(204),
    [sym_text] = STATE(205),
    [aux_sym_text_mode_repeat1] = STATE(205),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(341),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym_double_circumflex] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(343),
  },
  [92] = {
    [sym_simple_text_group] = STATE(207),
    [sym__whitespace] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_double_circumflex] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_end_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(349),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_double_circumflex] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(353),
    [sym_begin_group] = ACTIONS(353),
    [sym_end_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(353),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(353),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(353),
    [sym_active_char] = ACTIONS(353),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(353),
  },
  [95] = {
    [sym_text_group] = STATE(209),
    [sym__whitespace] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [96] = {
    [sym__control_symbol_body] = STATE(210),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(359),
    [sym_double_circumflex] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [97] = {
    [anon_sym_EQ] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_double_circumflex] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_end_group] = ACTIONS(365),
    [sym_math_shift] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(365),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_double_circumflex] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(369),
    [sym_begin_group] = ACTIONS(369),
    [sym_end_group] = ACTIONS(369),
    [sym_math_shift] = ACTIONS(369),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(371),
    [sym_subscript] = ACTIONS(369),
    [sym_active_char] = ACTIONS(369),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(369),
  },
  [100] = {
    [sym_text_group] = STATE(213),
    [sym__whitespace] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_double_circumflex] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_end_group] = ACTIONS(375),
    [sym_math_shift] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(377),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(375),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_double_circumflex] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_double_circumflex] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [104] = {
    [sym__control_symbol_body] = STATE(51),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
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
    [anon_sym_makeatother] = ACTIONS(387),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(389),
  },
  [105] = {
    [sym__common] = STATE(218),
    [sym__text_mode_common] = STATE(218),
    [sym_inline_verbatim] = STATE(218),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(218),
    [sym_parameter] = STATE(218),
    [sym_text_env_at] = STATE(218),
    [sym__display_math_at] = STATE(218),
    [sym_tex_display_math_at] = STATE(218),
    [sym_latex_display_math_at] = STATE(218),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(218),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(218),
    [sym_tex_inline_math_at] = STATE(218),
    [sym_latex_inline_math_at] = STATE(218),
    [sym_inline_math_env_at] = STATE(218),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(218),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(218),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(218),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(218),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(218),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(218),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(218),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(218),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(218),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(218),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(218),
    [sym_opt_text_group_at] = STATE(218),
    [sym_token_at] = STATE(218),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(218),
    [aux_sym_text_mode_at_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(395),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [106] = {
    [sym__common] = STATE(226),
    [sym__math_mode_common] = STATE(226),
    [sym__math_mode_at] = STATE(226),
    [sym_math_mode_at] = STATE(222),
    [sym_parameter] = STATE(226),
    [sym_math_env_at] = STATE(226),
    [sym_tag_at] = STATE(226),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(226),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(226),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(226),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(226),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(226),
    [sym_opt_math_group_at] = STATE(226),
    [sym_token_at] = STATE(226),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(226),
    [aux_sym_math_mode_at_repeat1] = STATE(226),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [107] = {
    [sym_makeatother] = STATE(228),
    [sym_makeatother_token] = STATE(122),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(407),
  },
  [108] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode_at] = STATE(230),
    [sym_math_mode_at] = STATE(229),
    [sym_parameter] = STATE(230),
    [sym_math_env_at] = STATE(230),
    [sym_tag_at] = STATE(230),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(230),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(230),
    [sym_opt_math_group_at] = STATE(230),
    [sym_token_at] = STATE(230),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [109] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode_at] = STATE(230),
    [sym_math_mode_at] = STATE(231),
    [sym_parameter] = STATE(230),
    [sym_math_env_at] = STATE(230),
    [sym_tag_at] = STATE(230),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(230),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(230),
    [sym_opt_math_group_at] = STATE(230),
    [sym_token_at] = STATE(230),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [110] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode_at] = STATE(230),
    [sym_math_mode_at] = STATE(232),
    [sym_parameter] = STATE(230),
    [sym_math_env_at] = STATE(230),
    [sym_tag_at] = STATE(230),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(230),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(230),
    [sym_opt_math_group_at] = STATE(230),
    [sym_token_at] = STATE(230),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [111] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode_at] = STATE(230),
    [sym_math_mode_at] = STATE(233),
    [sym_parameter] = STATE(230),
    [sym_math_env_at] = STATE(230),
    [sym_tag_at] = STATE(230),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(230),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(230),
    [sym_opt_math_group_at] = STATE(230),
    [sym_token_at] = STATE(230),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [112] = {
    [sym__common] = STATE(236),
    [sym__text_mode_common] = STATE(236),
    [sym_inline_verbatim] = STATE(236),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(236),
    [sym_parameter] = STATE(236),
    [sym_text_env_at] = STATE(236),
    [sym__display_math_at] = STATE(236),
    [sym_tex_display_math_at] = STATE(236),
    [sym_latex_display_math_at] = STATE(236),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(236),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(236),
    [sym_tex_inline_math_at] = STATE(236),
    [sym_latex_inline_math_at] = STATE(236),
    [sym_inline_math_env_at] = STATE(236),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(236),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(236),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_end] = STATE(235),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(236),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(236),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(236),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(236),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(236),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(236),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(236),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(236),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(236),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(236),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(236),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(236),
    [sym_opt_text_group_at] = STATE(236),
    [sym_token_at] = STATE(236),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(236),
    [aux_sym_text_mode_at_repeat1] = STATE(236),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(415),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [113] = {
    [sym_display_math_env_group] = STATE(237),
    [sym_inline_math_env_group] = STATE(84),
    [sym_verbatim_env_group] = STATE(85),
    [sym_simple_text_group] = STATE(86),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [114] = {
    [sym_text_group_at] = STATE(238),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [115] = {
    [sym_text_group_at] = STATE(239),
    [sym_opt_text_group_at] = STATE(240),
    [sym_begin_opt] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [116] = {
    [sym_text_group_at] = STATE(242),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [117] = {
    [sym_text_group_at] = STATE(243),
    [sym_opt_text_group_at] = STATE(244),
    [sym_begin_opt] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [118] = {
    [sym_text_group_at] = STATE(245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [119] = {
    [sym_text_group_at] = STATE(246),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [120] = {
    [sym_text_group_at] = STATE(247),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_double_circumflex] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(417),
    [sym_end_group] = ACTIONS(417),
    [sym_math_shift] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(417),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(417),
    [sym_active_char] = ACTIONS(417),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(417),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_double_circumflex] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_end_group] = ACTIONS(421),
    [sym_math_shift] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(423),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(421),
  },
  [123] = {
    [sym__common] = STATE(249),
    [sym__text_mode_common] = STATE(249),
    [sym_inline_verbatim] = STATE(249),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(249),
    [sym_parameter] = STATE(249),
    [sym_text_env_at] = STATE(249),
    [sym__display_math_at] = STATE(249),
    [sym_tex_display_math_at] = STATE(249),
    [sym_latex_display_math_at] = STATE(249),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(249),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(249),
    [sym_tex_inline_math_at] = STATE(249),
    [sym_latex_inline_math_at] = STATE(249),
    [sym_inline_math_env_at] = STATE(249),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(249),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(249),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(249),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(249),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(249),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(249),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(249),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(249),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(249),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(249),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(249),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(249),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(249),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(249),
    [sym_opt_text_group_at] = STATE(249),
    [sym_token_at] = STATE(249),
    [sym_begin_opt] = STATE(123),
    [sym_end_opt] = STATE(248),
    [sym_text] = STATE(249),
    [aux_sym_text_mode_at_repeat1] = STATE(249),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(425),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [124] = {
    [sym__common] = STATE(250),
    [sym__text_mode_common] = STATE(250),
    [sym_inline_verbatim] = STATE(250),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_env_at] = STATE(250),
    [sym__display_math_at] = STATE(250),
    [sym_tex_display_math_at] = STATE(250),
    [sym_latex_display_math_at] = STATE(250),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(250),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(250),
    [sym_tex_inline_math_at] = STATE(250),
    [sym_latex_inline_math_at] = STATE(250),
    [sym_inline_math_env_at] = STATE(250),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(250),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(250),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(250),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(250),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(250),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(250),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(250),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(250),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(250),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(250),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(250),
    [sym_opt_text_group_at] = STATE(250),
    [sym_token_at] = STATE(250),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(250),
    [aux_sym_text_mode_at_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_double_circumflex] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_end_group] = ACTIONS(431),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(431),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_double_circumflex] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(435),
    [sym_end_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(435),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(435),
  },
  [127] = {
    [sym__common] = STATE(252),
    [sym__text_mode_common] = STATE(252),
    [sym_inline_verbatim] = STATE(252),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(252),
    [sym_text_mode_at_region] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_env] = STATE(252),
    [sym__display_math] = STATE(252),
    [sym_tex_display_math] = STATE(252),
    [sym_latex_display_math] = STATE(252),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(252),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(252),
    [sym_tex_inline_math] = STATE(252),
    [sym_latex_inline_math] = STATE(252),
    [sym_inline_math_env] = STATE(252),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(252),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(252),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(252),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(252),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(252),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(252),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(252),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(252),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(252),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(252),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(252),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(251),
    [sym_text] = STATE(252),
    [aux_sym_text_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(439),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [128] = {
    [aux_sym_text_repeat1] = STATE(253),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [129] = {
    [sym__common] = STATE(129),
    [sym__text_mode_common] = STATE(129),
    [sym_inline_verbatim] = STATE(129),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(129),
    [sym_text_mode_at_region] = STATE(129),
    [sym_parameter] = STATE(129),
    [sym_text_env] = STATE(129),
    [sym__display_math] = STATE(129),
    [sym_tex_display_math] = STATE(129),
    [sym_latex_display_math] = STATE(129),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(129),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(129),
    [sym_tex_inline_math] = STATE(129),
    [sym_latex_inline_math] = STATE(129),
    [sym_inline_math_env] = STATE(129),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(129),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(129),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(129),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(129),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(129),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(129),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(129),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(129),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(129),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(129),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(129),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(129),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(129),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(129),
    [sym_opt_text_group] = STATE(129),
    [sym_token] = STATE(129),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(129),
    [aux_sym_text_mode_repeat1] = STATE(129),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_double_circumflex] = ACTIONS(446),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(452),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(458),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(458),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(446),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [sym_double_circumflex] = ACTIONS(470),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(470),
    [sym_begin_group] = ACTIONS(470),
    [sym_end_group] = ACTIONS(470),
    [sym_math_shift] = ACTIONS(470),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(472),
    [sym_subscript] = ACTIONS(470),
    [sym_active_char] = ACTIONS(470),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(470),
  },
  [131] = {
    [aux_sym_parameter_repeat1] = STATE(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(474),
    [sym_number] = ACTIONS(477),
  },
  [132] = {
    [aux_sym_text_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(481),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(486),
    [sym_double_circumflex] = ACTIONS(486),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(486),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(486),
    [sym_superscript] = ACTIONS(488),
    [sym_subscript] = ACTIONS(486),
    [sym_active_char] = ACTIONS(486),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(486),
  },
  [134] = {
    [anon_sym_LBRACK] = ACTIONS(490),
    [sym_double_circumflex] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(490),
    [sym_begin_group] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(492),
    [sym_subscript] = ACTIONS(490),
    [sym_active_char] = ACTIONS(490),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(490),
  },
  [135] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(494),
  },
  [136] = {
    [anon_sym_LBRACK] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(496),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(498),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(498),
  },
  [138] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(500),
  },
  [139] = {
    [sym__whitespace] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(506),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(504),
  },
  [140] = {
    [sym__whitespace] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(504),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(504),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym_double_circumflex] = ACTIONS(508),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(508),
    [sym_begin_group] = ACTIONS(508),
    [sym_end_group] = ACTIONS(508),
    [sym_math_shift] = ACTIONS(508),
    [sym_alignment_tab] = ACTIONS(508),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(510),
    [sym_subscript] = ACTIONS(508),
    [sym_active_char] = ACTIONS(508),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(508),
  },
  [142] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(512),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(514),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(514),
  },
  [144] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(516),
  },
  [145] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(518),
  },
  [146] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(520),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(522),
    [sym_double_circumflex] = ACTIONS(522),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(522),
    [sym_begin_group] = ACTIONS(522),
    [sym_math_shift] = ACTIONS(522),
    [sym_alignment_tab] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(522),
    [sym_superscript] = ACTIONS(524),
    [sym_subscript] = ACTIONS(522),
    [sym_active_char] = ACTIONS(522),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(522),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym_double_circumflex] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_end_group] = ACTIONS(526),
    [sym_math_shift] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(526),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(530),
    [sym_double_circumflex] = ACTIONS(530),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_end_group] = ACTIONS(530),
    [sym_math_shift] = ACTIONS(530),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(530),
  },
  [150] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
    [sym_inline_verbatim] = STATE(150),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(150),
    [sym_text_mode_at_region] = STATE(150),
    [sym_parameter] = STATE(150),
    [sym_text_env] = STATE(150),
    [sym__display_math] = STATE(150),
    [sym_tex_display_math] = STATE(150),
    [sym_latex_display_math] = STATE(150),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(150),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(150),
    [sym_tex_inline_math] = STATE(150),
    [sym_latex_inline_math] = STATE(150),
    [sym_inline_math_env] = STATE(150),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(150),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(150),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(150),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(150),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(150),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(150),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(150),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(150),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(150),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(150),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(150),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_double_circumflex] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(452),
    [sym_end_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(537),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(537),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(534),
  },
  [151] = {
    [aux_sym_text_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(540),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_end_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(540),
  },
  [152] = {
    [sym__whitespace] = ACTIONS(543),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(545),
  },
  [153] = {
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [sym_double_circumflex] = ACTIONS(547),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(547),
    [sym_begin_group] = ACTIONS(547),
    [sym_end_group] = ACTIONS(547),
    [sym_math_shift] = ACTIONS(547),
    [sym_alignment_tab] = ACTIONS(547),
    [sym_parameter_char] = ACTIONS(547),
    [sym_superscript] = ACTIONS(549),
    [sym_subscript] = ACTIONS(547),
    [sym_active_char] = ACTIONS(547),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(547),
  },
  [154] = {
    [sym__common] = STATE(258),
    [sym__math_mode_common] = STATE(258),
    [sym__math_mode] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_env] = STATE(258),
    [sym_tag] = STATE(258),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(258),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(258),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(258),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(258),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(258),
    [sym_opt_math_group] = STATE(258),
    [sym_token] = STATE(258),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(258),
    [aux_sym_math_mode_repeat1] = STATE(258),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_end_group] = ACTIONS(551),
    [sym_alignment_tab] = ACTIONS(553),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(555),
    [sym_subscript] = ACTIONS(553),
    [sym_active_char] = ACTIONS(553),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(245),
  },
  [155] = {
    [aux_sym_text_repeat1] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [156] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(557),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [sym_double_circumflex] = ACTIONS(559),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(559),
    [sym_begin_group] = ACTIONS(559),
    [sym_end_group] = ACTIONS(559),
    [sym_math_shift] = ACTIONS(559),
    [sym_alignment_tab] = ACTIONS(559),
    [sym_parameter_char] = ACTIONS(559),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(559),
    [sym_active_char] = ACTIONS(559),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(559),
  },
  [158] = {
    [sym__common] = STATE(263),
    [sym__text_mode_common] = STATE(263),
    [sym_inline_verbatim] = STATE(263),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(263),
    [sym_text_mode] = STATE(262),
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
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(563),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(565),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(565),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [159] = {
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [sym_double_circumflex] = ACTIONS(567),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(567),
    [sym_begin_group] = ACTIONS(567),
    [sym_end_group] = ACTIONS(567),
    [sym_math_shift] = ACTIONS(567),
    [sym_alignment_tab] = ACTIONS(567),
    [sym_parameter_char] = ACTIONS(567),
    [sym_superscript] = ACTIONS(569),
    [sym_subscript] = ACTIONS(567),
    [sym_active_char] = ACTIONS(567),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(567),
  },
  [160] = {
    [sym__control_symbol_body] = STATE(51),
    [anon_sym_tag] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(301),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(69),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_double_circumflex] = ACTIONS(571),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(571),
    [sym_begin_group] = ACTIONS(571),
    [sym_end_group] = ACTIONS(571),
    [sym_math_shift] = ACTIONS(571),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(571),
    [sym_superscript] = ACTIONS(573),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(571),
  },
  [162] = {
    [sym__common] = STATE(171),
    [sym__math_mode_common] = STATE(171),
    [sym__math_mode] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_math_env] = STATE(171),
    [sym_tag] = STATE(171),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(171),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_end] = STATE(264),
    [sym_end_token] = STATE(80),
    [sym_include] = STATE(171),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(171),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(171),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(171),
    [sym_opt_math_group] = STATE(171),
    [sym_token] = STATE(171),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(171),
    [aux_sym_math_mode_repeat1] = STATE(171),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [163] = {
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [sym_double_circumflex] = ACTIONS(575),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(575),
    [sym_end_group] = ACTIONS(575),
    [sym_math_shift] = ACTIONS(575),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(575),
    [sym_superscript] = ACTIONS(577),
    [sym_subscript] = ACTIONS(575),
    [sym_active_char] = ACTIONS(575),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(575),
  },
  [164] = {
    [sym__common] = STATE(266),
    [sym__math_mode_common] = STATE(266),
    [sym__math_mode] = STATE(266),
    [sym_parameter] = STATE(266),
    [sym_math_env] = STATE(266),
    [sym_tag] = STATE(266),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(266),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(266),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(266),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(266),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(266),
    [sym_opt_math_group] = STATE(266),
    [sym_token] = STATE(266),
    [sym_begin_opt] = STATE(62),
    [sym_end_opt] = STATE(265),
    [sym_text] = STATE(266),
    [aux_sym_math_mode_repeat1] = STATE(266),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(579),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(579),
    [sym_active_char] = ACTIONS(579),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [165] = {
    [aux_sym_text_repeat1] = STATE(267),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_double_circumflex] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [166] = {
    [sym__common] = STATE(166),
    [sym__math_mode_common] = STATE(166),
    [sym__math_mode] = STATE(166),
    [sym_parameter] = STATE(166),
    [sym_math_env] = STATE(166),
    [sym_tag] = STATE(166),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(166),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(166),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(166),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(166),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(166),
    [sym_opt_math_group] = STATE(166),
    [sym_token] = STATE(166),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(166),
    [aux_sym_math_mode_repeat1] = STATE(166),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_double_circumflex] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(592),
    [sym_math_shift] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(597),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(597),
    [sym_active_char] = ACTIONS(597),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(586),
  },
  [167] = {
    [aux_sym_text_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(606),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(606),
  },
  [168] = {
    [sym_verb_delim] = ACTIONS(609),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [169] = {
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_RBRACK] = ACTIONS(613),
    [sym_double_circumflex] = ACTIONS(613),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(613),
    [sym_end_group] = ACTIONS(613),
    [sym_math_shift] = ACTIONS(613),
    [sym_alignment_tab] = ACTIONS(613),
    [sym_parameter_char] = ACTIONS(613),
    [sym_superscript] = ACTIONS(615),
    [sym_subscript] = ACTIONS(613),
    [sym_active_char] = ACTIONS(613),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(613),
  },
  [171] = {
    [sym__common] = STATE(171),
    [sym__math_mode_common] = STATE(171),
    [sym__math_mode] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_math_env] = STATE(171),
    [sym_tag] = STATE(171),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(171),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(171),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(171),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(171),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(171),
    [sym_opt_math_group] = STATE(171),
    [sym_token] = STATE(171),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(171),
    [aux_sym_math_mode_repeat1] = STATE(171),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_double_circumflex] = ACTIONS(617),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(592),
    [sym_alignment_tab] = ACTIONS(620),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(623),
    [sym_subscript] = ACTIONS(620),
    [sym_active_char] = ACTIONS(620),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(617),
  },
  [172] = {
    [aux_sym_text_repeat1] = STATE(172),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(626),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(629),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_double_circumflex] = ACTIONS(631),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(631),
    [sym_begin_group] = ACTIONS(631),
    [sym_end_group] = ACTIONS(631),
    [sym_math_shift] = ACTIONS(631),
    [sym_alignment_tab] = ACTIONS(631),
    [sym_parameter_char] = ACTIONS(631),
    [sym_superscript] = ACTIONS(633),
    [sym_subscript] = ACTIONS(631),
    [sym_active_char] = ACTIONS(631),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(631),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
    [sym_double_circumflex] = ACTIONS(635),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(635),
    [sym_begin_group] = ACTIONS(635),
    [sym_end_group] = ACTIONS(635),
    [sym_math_shift] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(635),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(637),
    [sym_subscript] = ACTIONS(635),
    [sym_active_char] = ACTIONS(635),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(635),
  },
  [176] = {
    [sym_display_math_env_group] = STATE(272),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(639),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym_double_circumflex] = ACTIONS(641),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(641),
    [sym_end_group] = ACTIONS(641),
    [sym_math_shift] = ACTIONS(641),
    [sym_alignment_tab] = ACTIONS(641),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(641),
    [sym_active_char] = ACTIONS(641),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(641),
  },
  [178] = {
    [sym_inline_math_env_group] = STATE(274),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(645),
  },
  [179] = {
    [sym__whitespace] = ACTIONS(647),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(649),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_double_circumflex] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_end_group] = ACTIONS(651),
    [sym_math_shift] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(653),
    [sym_subscript] = ACTIONS(651),
    [sym_active_char] = ACTIONS(651),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(651),
  },
  [181] = {
    [sym_verbatim_env_name] = ACTIONS(655),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_double_circumflex] = ACTIONS(657),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(657),
    [sym_begin_group] = ACTIONS(657),
    [sym_end_group] = ACTIONS(657),
    [sym_math_shift] = ACTIONS(657),
    [sym_alignment_tab] = ACTIONS(657),
    [sym_parameter_char] = ACTIONS(657),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(657),
    [sym_active_char] = ACTIONS(657),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(657),
  },
  [183] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(661),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(663),
    [sym__end_of_line] = ACTIONS(663),
  },
  [184] = {
    [aux_sym_verbatim_text_repeat1] = STATE(184),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(665),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(668),
  },
  [185] = {
    [aux_sym_verbatim_text_repeat1] = STATE(76),
    [aux_sym_verbatim_text_repeat2] = STATE(185),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(663),
    [sym__end_of_line] = ACTIONS(673),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_double_circumflex] = ACTIONS(676),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(676),
    [sym_begin_group] = ACTIONS(676),
    [sym_end_group] = ACTIONS(676),
    [sym_math_shift] = ACTIONS(676),
    [sym_alignment_tab] = ACTIONS(676),
    [sym_parameter_char] = ACTIONS(676),
    [sym_superscript] = ACTIONS(678),
    [sym_subscript] = ACTIONS(676),
    [sym_active_char] = ACTIONS(676),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(676),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_double_circumflex] = ACTIONS(680),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(682),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(680),
  },
  [188] = {
    [sym__common] = STATE(188),
    [sym__text_mode_common] = STATE(188),
    [sym_inline_verbatim] = STATE(188),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(188),
    [sym_text_mode_at_region] = STATE(188),
    [sym_parameter] = STATE(188),
    [sym_text_env] = STATE(188),
    [sym__display_math] = STATE(188),
    [sym_tex_display_math] = STATE(188),
    [sym_latex_display_math] = STATE(188),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(188),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(188),
    [sym_tex_inline_math] = STATE(188),
    [sym_latex_inline_math] = STATE(188),
    [sym_inline_math_env] = STATE(188),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(188),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(188),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(188),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(188),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(188),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(188),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(188),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(188),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(188),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(188),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(188),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(188),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(188),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(188),
    [sym_opt_text_group] = STATE(188),
    [sym_token] = STATE(188),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(188),
    [aux_sym_text_mode_repeat1] = STATE(188),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_double_circumflex] = ACTIONS(684),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(452),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(687),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(684),
  },
  [189] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(690),
  },
  [190] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(692),
  },
  [191] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(694),
  },
  [192] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(696),
  },
  [193] = {
    [aux_sym_text_repeat1] = STATE(281),
    [sym_double_circumflex] = ACTIONS(698),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(151),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(698),
  },
  [194] = {
    [sym__common] = STATE(283),
    [sym__text_mode_common] = STATE(283),
    [sym_inline_verbatim] = STATE(283),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(283),
    [sym_text_mode_at_region] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_text_env] = STATE(283),
    [sym__display_math] = STATE(283),
    [sym_tex_display_math] = STATE(283),
    [sym_latex_display_math] = STATE(283),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(283),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(283),
    [sym_tex_inline_math] = STATE(283),
    [sym_latex_inline_math] = STATE(283),
    [sym_inline_math_env] = STATE(283),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(283),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(283),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(283),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(283),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(283),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(283),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(283),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(283),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(283),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(283),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(283),
    [sym_opt_text_group] = STATE(283),
    [sym_token] = STATE(283),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(283),
    [aux_sym_text_mode_repeat1] = STATE(283),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(700),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(702),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [195] = {
    [anon_sym_LBRACK] = ACTIONS(704),
    [sym_double_circumflex] = ACTIONS(704),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(704),
    [sym_begin_group] = ACTIONS(704),
    [sym_alignment_tab] = ACTIONS(704),
    [sym_parameter_char] = ACTIONS(704),
    [sym_superscript] = ACTIONS(706),
    [sym_subscript] = ACTIONS(704),
    [sym_active_char] = ACTIONS(704),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(704),
  },
  [196] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(708),
  },
  [197] = {
    [sym_text_group] = STATE(286),
    [sym__whitespace] = ACTIONS(710),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(708),
  },
  [198] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(714),
    [sym__end_of_line] = ACTIONS(714),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(716),
  },
  [200] = {
    [sym_text_group] = STATE(289),
    [sym__whitespace] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(716),
  },
  [201] = {
    [sym_simple_text_group] = STATE(290),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(720),
    [sym_double_circumflex] = ACTIONS(720),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(720),
    [sym_begin_group] = ACTIONS(720),
    [sym_end_group] = ACTIONS(720),
    [sym_math_shift] = ACTIONS(720),
    [sym_alignment_tab] = ACTIONS(720),
    [sym_parameter_char] = ACTIONS(720),
    [sym_superscript] = ACTIONS(722),
    [sym_subscript] = ACTIONS(720),
    [sym_active_char] = ACTIONS(720),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(720),
  },
  [203] = {
    [sym__whitespace] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(431),
    [sym__end_of_line] = ACTIONS(431),
  },
  [204] = {
    [sym__whitespace] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(435),
    [sym__end_of_line] = ACTIONS(435),
  },
  [205] = {
    [sym__common] = STATE(252),
    [sym__text_mode_common] = STATE(252),
    [sym_inline_verbatim] = STATE(252),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(252),
    [sym_text_mode_at_region] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_env] = STATE(252),
    [sym__display_math] = STATE(252),
    [sym_tex_display_math] = STATE(252),
    [sym_latex_display_math] = STATE(252),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(252),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(252),
    [sym_tex_inline_math] = STATE(252),
    [sym_latex_inline_math] = STATE(252),
    [sym_inline_math_env] = STATE(252),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(252),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(252),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(252),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(252),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(252),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(252),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(252),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(252),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(252),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(252),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(252),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(291),
    [sym_text] = STATE(252),
    [aux_sym_text_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(439),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [206] = {
    [sym_simple_text_group] = STATE(292),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(117),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym_double_circumflex] = ACTIONS(724),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_end_group] = ACTIONS(724),
    [sym_math_shift] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(724),
  },
  [208] = {
    [sym_text_group] = STATE(293),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym_double_circumflex] = ACTIONS(728),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(728),
    [sym_begin_group] = ACTIONS(728),
    [sym_end_group] = ACTIONS(728),
    [sym_math_shift] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(728),
    [sym_parameter_char] = ACTIONS(728),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(728),
    [sym_active_char] = ACTIONS(728),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(728),
  },
  [210] = {
    [anon_sym_EQ] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [211] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(732),
  },
  [212] = {
    [sym_text_group] = STATE(295),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym_double_circumflex] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(734),
    [sym_math_shift] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(736),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(734),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(738),
    [sym__whitespace] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_RBRACK] = ACTIONS(738),
    [sym_double_circumflex] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(738),
    [sym_begin_group] = ACTIONS(738),
    [sym_end_group] = ACTIONS(738),
    [sym_math_shift] = ACTIONS(738),
    [sym_alignment_tab] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(738),
    [sym_superscript] = ACTIONS(742),
    [sym_subscript] = ACTIONS(738),
    [sym_active_char] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(742),
  },
  [215] = {
    [sym__whitespace] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [sym_double_circumflex] = ACTIONS(746),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_end_group] = ACTIONS(746),
    [sym_math_shift] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(746),
    [sym_superscript] = ACTIONS(748),
    [sym_subscript] = ACTIONS(746),
    [sym_active_char] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(748),
  },
  [216] = {
    [sym__control_symbol_body] = STATE(51),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
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
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(389),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym_double_circumflex] = ACTIONS(750),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(750),
    [sym_math_shift] = ACTIONS(750),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(750),
    [sym_superscript] = ACTIONS(752),
    [sym_subscript] = ACTIONS(750),
    [sym_active_char] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(750),
  },
  [218] = {
    [sym__common] = STATE(299),
    [sym__text_mode_common] = STATE(299),
    [sym_inline_verbatim] = STATE(299),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_text_env_at] = STATE(299),
    [sym__display_math_at] = STATE(299),
    [sym_tex_display_math_at] = STATE(299),
    [sym_latex_display_math_at] = STATE(299),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(299),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(299),
    [sym_tex_inline_math_at] = STATE(299),
    [sym_latex_inline_math_at] = STATE(299),
    [sym_inline_math_env_at] = STATE(299),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(299),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(299),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(299),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(299),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(299),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(299),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(299),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(299),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(299),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(299),
    [sym_opt_text_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(299),
    [aux_sym_text_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(754),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [219] = {
    [sym__control_symbol_body] = STATE(51),
    [anon_sym_tag] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(389),
  },
  [220] = {
    [sym__common] = STATE(301),
    [sym__math_mode_common] = STATE(301),
    [sym__math_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_math_env_at] = STATE(301),
    [sym_tag_at] = STATE(301),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(301),
    [sym_opt_math_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(301),
    [aux_sym_math_mode_at_repeat1] = STATE(301),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_end_group] = ACTIONS(758),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(762),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(245),
  },
  [221] = {
    [sym__common] = STATE(226),
    [sym__math_mode_common] = STATE(226),
    [sym__math_mode_at] = STATE(226),
    [sym_math_mode_at] = STATE(302),
    [sym_parameter] = STATE(226),
    [sym_math_env_at] = STATE(226),
    [sym_tag_at] = STATE(226),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(226),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(226),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(226),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(226),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(226),
    [sym_opt_math_group_at] = STATE(226),
    [sym_token_at] = STATE(226),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(226),
    [aux_sym_math_mode_at_repeat1] = STATE(226),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [222] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(764),
  },
  [223] = {
    [sym_math_text_group_at] = STATE(305),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(766),
  },
  [224] = {
    [sym__common] = STATE(308),
    [sym__math_mode_common] = STATE(308),
    [sym__math_mode_at] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_math_env_at] = STATE(308),
    [sym_tag_at] = STATE(308),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_end] = STATE(307),
    [sym_end_token] = STATE(80),
    [sym_include_at] = STATE(308),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(308),
    [sym_opt_math_group_at] = STATE(308),
    [sym_token_at] = STATE(308),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(308),
    [aux_sym_math_mode_at_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(770),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(772),
    [sym_subscript] = ACTIONS(770),
    [sym_active_char] = ACTIONS(770),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [225] = {
    [sym__common] = STATE(310),
    [sym__math_mode_common] = STATE(310),
    [sym__math_mode_at] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_math_env_at] = STATE(310),
    [sym_tag_at] = STATE(310),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(310),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(310),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(310),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(310),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(310),
    [sym_opt_math_group_at] = STATE(310),
    [sym_token_at] = STATE(310),
    [sym_begin_opt] = STATE(225),
    [sym_end_opt] = STATE(309),
    [sym_text] = STATE(310),
    [aux_sym_math_mode_at_repeat1] = STATE(310),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [226] = {
    [sym__common] = STATE(311),
    [sym__math_mode_common] = STATE(311),
    [sym__math_mode_at] = STATE(311),
    [sym_parameter] = STATE(311),
    [sym_math_env_at] = STATE(311),
    [sym_tag_at] = STATE(311),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(311),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(311),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(311),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(311),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(311),
    [sym_opt_math_group_at] = STATE(311),
    [sym_token_at] = STATE(311),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(311),
    [aux_sym_math_mode_at_repeat1] = STATE(311),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(778),
    [sym_alignment_tab] = ACTIONS(780),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(782),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [227] = {
    [anon_sym_makeatother] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_double_circumflex] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_end_group] = ACTIONS(786),
    [sym_math_shift] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(786),
  },
  [229] = {
    [sym_end_display_math] = STATE(312),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(277),
  },
  [230] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(313),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(778),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(790),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(790),
    [sym_active_char] = ACTIONS(790),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [231] = {
    [sym_end_inline_math] = STATE(314),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(283),
  },
  [232] = {
    [sym_display_math_end] = STATE(315),
    [sym_end_token] = STATE(176),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
  },
  [233] = {
    [sym_inline_math_end] = STATE(316),
    [sym_end_token] = STATE(178),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(107),
  },
  [234] = {
    [sym__control_symbol_body] = STATE(51),
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(301),
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
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(389),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(794),
    [anon_sym_RBRACK] = ACTIONS(794),
    [sym_double_circumflex] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(794),
    [sym_begin_group] = ACTIONS(794),
    [sym_end_group] = ACTIONS(794),
    [sym_math_shift] = ACTIONS(794),
    [sym_alignment_tab] = ACTIONS(794),
    [sym_parameter_char] = ACTIONS(794),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(794),
    [sym_active_char] = ACTIONS(794),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(794),
  },
  [236] = {
    [sym__common] = STATE(250),
    [sym__text_mode_common] = STATE(250),
    [sym_inline_verbatim] = STATE(250),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_env_at] = STATE(250),
    [sym__display_math_at] = STATE(250),
    [sym_tex_display_math_at] = STATE(250),
    [sym_latex_display_math_at] = STATE(250),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(250),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(250),
    [sym_tex_inline_math_at] = STATE(250),
    [sym_latex_inline_math_at] = STATE(250),
    [sym_inline_math_env_at] = STATE(250),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(250),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_end] = STATE(317),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(250),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(250),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(250),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(250),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(250),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(250),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(250),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(250),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(250),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(250),
    [sym_opt_text_group_at] = STATE(250),
    [sym_token_at] = STATE(250),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(250),
    [aux_sym_text_mode_at_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(77),
  },
  [237] = {
    [sym_text_group_at] = STATE(320),
    [sym_opt_text_group_at] = STATE(321),
    [sym_begin_opt] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
    [sym__end_of_line] = ACTIONS(800),
  },
  [238] = {
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_double_circumflex] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_end_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(804),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(802),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(806),
    [anon_sym_RBRACK] = ACTIONS(806),
    [sym_double_circumflex] = ACTIONS(806),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(806),
    [sym_begin_group] = ACTIONS(806),
    [sym_end_group] = ACTIONS(806),
    [sym_math_shift] = ACTIONS(806),
    [sym_alignment_tab] = ACTIONS(806),
    [sym_parameter_char] = ACTIONS(806),
    [sym_superscript] = ACTIONS(808),
    [sym_subscript] = ACTIONS(806),
    [sym_active_char] = ACTIONS(806),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(806),
  },
  [240] = {
    [sym_text_group_at] = STATE(323),
    [sym__whitespace] = ACTIONS(810),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [241] = {
    [sym__common] = STATE(325),
    [sym__text_mode_common] = STATE(325),
    [sym_inline_verbatim] = STATE(325),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(325),
    [sym_parameter] = STATE(325),
    [sym_text_env_at] = STATE(325),
    [sym__display_math_at] = STATE(325),
    [sym_tex_display_math_at] = STATE(325),
    [sym_latex_display_math_at] = STATE(325),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(325),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(325),
    [sym_tex_inline_math_at] = STATE(325),
    [sym_latex_inline_math_at] = STATE(325),
    [sym_inline_math_env_at] = STATE(325),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(325),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(325),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(325),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(325),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(325),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(325),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(325),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(325),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(325),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(325),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(325),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(325),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(325),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(325),
    [sym_opt_text_group_at] = STATE(325),
    [sym_token_at] = STATE(325),
    [sym_begin_opt] = STATE(123),
    [sym_end_opt] = STATE(324),
    [sym_text] = STATE(325),
    [aux_sym_text_mode_at_repeat1] = STATE(325),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(812),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(812),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_RBRACK] = ACTIONS(814),
    [sym_double_circumflex] = ACTIONS(814),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(814),
    [sym_begin_group] = ACTIONS(814),
    [sym_end_group] = ACTIONS(814),
    [sym_math_shift] = ACTIONS(814),
    [sym_alignment_tab] = ACTIONS(814),
    [sym_parameter_char] = ACTIONS(814),
    [sym_superscript] = ACTIONS(816),
    [sym_subscript] = ACTIONS(814),
    [sym_active_char] = ACTIONS(814),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(814),
  },
  [243] = {
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(818),
    [sym_double_circumflex] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(818),
    [sym_begin_group] = ACTIONS(818),
    [sym_end_group] = ACTIONS(818),
    [sym_math_shift] = ACTIONS(818),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(818),
    [sym_superscript] = ACTIONS(820),
    [sym_subscript] = ACTIONS(818),
    [sym_active_char] = ACTIONS(818),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(818),
  },
  [244] = {
    [sym_text_group_at] = STATE(327),
    [sym__whitespace] = ACTIONS(822),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
    [sym_double_circumflex] = ACTIONS(824),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(824),
    [sym_begin_group] = ACTIONS(824),
    [sym_end_group] = ACTIONS(824),
    [sym_math_shift] = ACTIONS(824),
    [sym_alignment_tab] = ACTIONS(824),
    [sym_parameter_char] = ACTIONS(824),
    [sym_superscript] = ACTIONS(826),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(824),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(824),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_RBRACK] = ACTIONS(828),
    [sym_double_circumflex] = ACTIONS(828),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(828),
    [sym_end_group] = ACTIONS(828),
    [sym_math_shift] = ACTIONS(828),
    [sym_alignment_tab] = ACTIONS(828),
    [sym_parameter_char] = ACTIONS(828),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(828),
    [sym_active_char] = ACTIONS(828),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(828),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_RBRACK] = ACTIONS(832),
    [sym_double_circumflex] = ACTIONS(832),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(832),
    [sym_begin_group] = ACTIONS(832),
    [sym_end_group] = ACTIONS(832),
    [sym_math_shift] = ACTIONS(832),
    [sym_alignment_tab] = ACTIONS(832),
    [sym_parameter_char] = ACTIONS(832),
    [sym_superscript] = ACTIONS(834),
    [sym_subscript] = ACTIONS(832),
    [sym_active_char] = ACTIONS(832),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(832),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_RBRACK] = ACTIONS(836),
    [sym_double_circumflex] = ACTIONS(836),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(836),
    [sym_begin_group] = ACTIONS(836),
    [sym_end_group] = ACTIONS(836),
    [sym_math_shift] = ACTIONS(836),
    [sym_alignment_tab] = ACTIONS(836),
    [sym_parameter_char] = ACTIONS(836),
    [sym_superscript] = ACTIONS(838),
    [sym_subscript] = ACTIONS(836),
    [sym_active_char] = ACTIONS(836),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(836),
  },
  [249] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env_at] = STATE(329),
    [sym__display_math_at] = STATE(329),
    [sym_tex_display_math_at] = STATE(329),
    [sym_latex_display_math_at] = STATE(329),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(329),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(329),
    [sym_tex_inline_math_at] = STATE(329),
    [sym_latex_inline_math_at] = STATE(329),
    [sym_inline_math_env_at] = STATE(329),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(329),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(329),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(329),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(329),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(329),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(329),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(329),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(329),
    [sym_opt_text_group_at] = STATE(329),
    [sym_token_at] = STATE(329),
    [sym_begin_opt] = STATE(123),
    [sym_end_opt] = STATE(328),
    [sym_text] = STATE(329),
    [aux_sym_text_mode_at_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(840),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [250] = {
    [sym__common] = STATE(250),
    [sym__text_mode_common] = STATE(250),
    [sym_inline_verbatim] = STATE(250),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_env_at] = STATE(250),
    [sym__display_math_at] = STATE(250),
    [sym_tex_display_math_at] = STATE(250),
    [sym_latex_display_math_at] = STATE(250),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(250),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(250),
    [sym_tex_inline_math_at] = STATE(250),
    [sym_latex_inline_math_at] = STATE(250),
    [sym_inline_math_env_at] = STATE(250),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(250),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(250),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(250),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(250),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(250),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(250),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(250),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(250),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(250),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(250),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(250),
    [sym_opt_text_group_at] = STATE(250),
    [sym_token_at] = STATE(250),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(250),
    [aux_sym_text_mode_at_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(842),
    [sym_double_circumflex] = ACTIONS(845),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(848),
    [sym_begin_group] = ACTIONS(851),
    [sym_math_shift] = ACTIONS(854),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(845),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(869),
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
  [252] = {
    [sym__common] = STATE(252),
    [sym__text_mode_common] = STATE(252),
    [sym_inline_verbatim] = STATE(252),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(252),
    [sym_text_mode_at_region] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_env] = STATE(252),
    [sym__display_math] = STATE(252),
    [sym_tex_display_math] = STATE(252),
    [sym_latex_display_math] = STATE(252),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(252),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(252),
    [sym_tex_inline_math] = STATE(252),
    [sym_latex_inline_math] = STATE(252),
    [sym_inline_math_env] = STATE(252),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(252),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(252),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(252),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(252),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(252),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(252),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(252),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(252),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(252),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(252),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(252),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(252),
    [aux_sym_text_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_double_circumflex] = ACTIONS(873),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(452),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(876),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(876),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(873),
  },
  [253] = {
    [aux_sym_text_repeat1] = STATE(253),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(879),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(879),
  },
  [254] = {
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(882),
  },
  [255] = {
    [sym__whitespace] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(882),
  },
  [256] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(886),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(888),
    [anon_sym_RBRACK] = ACTIONS(888),
    [sym_double_circumflex] = ACTIONS(888),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(888),
    [sym_begin_group] = ACTIONS(888),
    [sym_end_group] = ACTIONS(888),
    [sym_math_shift] = ACTIONS(888),
    [sym_alignment_tab] = ACTIONS(888),
    [sym_parameter_char] = ACTIONS(888),
    [sym_superscript] = ACTIONS(890),
    [sym_subscript] = ACTIONS(888),
    [sym_active_char] = ACTIONS(888),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(888),
  },
  [258] = {
    [sym__common] = STATE(258),
    [sym__math_mode_common] = STATE(258),
    [sym__math_mode] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_env] = STATE(258),
    [sym_tag] = STATE(258),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(258),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(258),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(258),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(258),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(258),
    [sym_opt_math_group] = STATE(258),
    [sym_token] = STATE(258),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(258),
    [aux_sym_math_mode_repeat1] = STATE(258),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_double_circumflex] = ACTIONS(892),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(592),
    [sym_end_group] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(895),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(895),
    [sym_active_char] = ACTIONS(895),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(892),
  },
  [259] = {
    [aux_sym_text_repeat1] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(901),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_end_group] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(901),
  },
  [260] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(904),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym_double_circumflex] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_end_group] = ACTIONS(906),
    [sym_math_shift] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(908),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(906),
  },
  [262] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(910),
  },
  [263] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
    [sym_inline_verbatim] = STATE(150),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(150),
    [sym_text_mode_at_region] = STATE(150),
    [sym_parameter] = STATE(150),
    [sym_text_env] = STATE(150),
    [sym__display_math] = STATE(150),
    [sym_tex_display_math] = STATE(150),
    [sym_latex_display_math] = STATE(150),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(150),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(150),
    [sym_tex_inline_math] = STATE(150),
    [sym_latex_inline_math] = STATE(150),
    [sym_inline_math_env] = STATE(150),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(150),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(150),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(150),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(150),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(150),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(150),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(150),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(150),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(150),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(150),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(150),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(143),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [264] = {
    [anon_sym_LBRACK] = ACTIONS(912),
    [anon_sym_RBRACK] = ACTIONS(912),
    [sym_double_circumflex] = ACTIONS(912),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(912),
    [sym_begin_group] = ACTIONS(912),
    [sym_end_group] = ACTIONS(912),
    [sym_math_shift] = ACTIONS(912),
    [sym_alignment_tab] = ACTIONS(912),
    [sym_parameter_char] = ACTIONS(912),
    [sym_superscript] = ACTIONS(914),
    [sym_subscript] = ACTIONS(912),
    [sym_active_char] = ACTIONS(912),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(912),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(916),
    [anon_sym_RBRACK] = ACTIONS(916),
    [sym_double_circumflex] = ACTIONS(916),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(916),
    [sym_begin_group] = ACTIONS(916),
    [sym_end_group] = ACTIONS(916),
    [sym_math_shift] = ACTIONS(916),
    [sym_alignment_tab] = ACTIONS(916),
    [sym_parameter_char] = ACTIONS(916),
    [sym_superscript] = ACTIONS(918),
    [sym_subscript] = ACTIONS(916),
    [sym_active_char] = ACTIONS(916),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(916),
  },
  [266] = {
    [sym__common] = STATE(266),
    [sym__math_mode_common] = STATE(266),
    [sym__math_mode] = STATE(266),
    [sym_parameter] = STATE(266),
    [sym_math_env] = STATE(266),
    [sym_tag] = STATE(266),
    [sym_tag_token] = STATE(59),
    [sym_escaped] = STATE(266),
    [sym_begin] = STATE(60),
    [sym_begin_token] = STATE(61),
    [sym_include] = STATE(266),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(266),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(266),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(266),
    [sym_opt_math_group] = STATE(266),
    [sym_token] = STATE(266),
    [sym_begin_opt] = STATE(62),
    [sym_text] = STATE(266),
    [aux_sym_math_mode_repeat1] = STATE(266),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_double_circumflex] = ACTIONS(920),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(592),
    [sym_alignment_tab] = ACTIONS(923),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(926),
    [sym_subscript] = ACTIONS(923),
    [sym_active_char] = ACTIONS(923),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(920),
  },
  [267] = {
    [aux_sym_text_repeat1] = STATE(267),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_double_circumflex] = ACTIONS(929),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(929),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(932),
    [anon_sym_RBRACK] = ACTIONS(932),
    [sym_double_circumflex] = ACTIONS(932),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(932),
    [sym_begin_group] = ACTIONS(932),
    [sym_end_group] = ACTIONS(932),
    [sym_math_shift] = ACTIONS(932),
    [sym_alignment_tab] = ACTIONS(932),
    [sym_parameter_char] = ACTIONS(932),
    [sym_superscript] = ACTIONS(934),
    [sym_subscript] = ACTIONS(932),
    [sym_active_char] = ACTIONS(932),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(932),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(936),
    [sym__whitespace] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(936),
    [anon_sym_RBRACK] = ACTIONS(936),
    [sym_double_circumflex] = ACTIONS(936),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(936),
    [sym_begin_group] = ACTIONS(936),
    [sym_end_group] = ACTIONS(936),
    [sym_math_shift] = ACTIONS(936),
    [sym_alignment_tab] = ACTIONS(936),
    [sym_parameter_char] = ACTIONS(936),
    [sym_superscript] = ACTIONS(940),
    [sym_subscript] = ACTIONS(936),
    [sym_active_char] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(940),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(942),
    [sym__whitespace] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(942),
    [sym_double_circumflex] = ACTIONS(942),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(942),
    [sym_begin_group] = ACTIONS(942),
    [sym_end_group] = ACTIONS(942),
    [sym_math_shift] = ACTIONS(942),
    [sym_alignment_tab] = ACTIONS(942),
    [sym_parameter_char] = ACTIONS(942),
    [sym_superscript] = ACTIONS(946),
    [sym_subscript] = ACTIONS(942),
    [sym_active_char] = ACTIONS(942),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(946),
  },
  [271] = {
    [sym_display_math_env_name] = ACTIONS(948),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [sym_double_circumflex] = ACTIONS(950),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(950),
    [sym_begin_group] = ACTIONS(950),
    [sym_end_group] = ACTIONS(950),
    [sym_math_shift] = ACTIONS(950),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(950),
    [sym_superscript] = ACTIONS(952),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(950),
  },
  [273] = {
    [sym_inline_math_env_name] = ACTIONS(954),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(956),
    [anon_sym_LBRACK] = ACTIONS(956),
    [anon_sym_RBRACK] = ACTIONS(956),
    [sym_double_circumflex] = ACTIONS(956),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(956),
    [sym_begin_group] = ACTIONS(956),
    [sym_end_group] = ACTIONS(956),
    [sym_math_shift] = ACTIONS(956),
    [sym_alignment_tab] = ACTIONS(956),
    [sym_parameter_char] = ACTIONS(956),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(956),
    [sym_active_char] = ACTIONS(956),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(956),
  },
  [275] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(960),
  },
  [276] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(962),
  },
  [277] = {
    [anon_sym_LBRACK] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(964),
    [sym__end_of_line] = ACTIONS(964),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym_double_circumflex] = ACTIONS(966),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(966),
    [sym_begin_group] = ACTIONS(966),
    [sym_end_group] = ACTIONS(966),
    [sym_math_shift] = ACTIONS(966),
    [sym_alignment_tab] = ACTIONS(966),
    [sym_parameter_char] = ACTIONS(966),
    [sym_superscript] = ACTIONS(968),
    [sym_subscript] = ACTIONS(966),
    [sym_active_char] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(966),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(970),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(970),
    [sym__end_of_line] = ACTIONS(970),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(972),
    [anon_sym_LBRACK] = ACTIONS(972),
    [anon_sym_RBRACK] = ACTIONS(972),
    [sym_double_circumflex] = ACTIONS(972),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(972),
    [sym_begin_group] = ACTIONS(972),
    [sym_end_group] = ACTIONS(972),
    [sym_math_shift] = ACTIONS(972),
    [sym_alignment_tab] = ACTIONS(972),
    [sym_parameter_char] = ACTIONS(972),
    [sym_superscript] = ACTIONS(974),
    [sym_subscript] = ACTIONS(972),
    [sym_active_char] = ACTIONS(972),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(972),
  },
  [281] = {
    [aux_sym_text_repeat1] = STATE(281),
    [sym_double_circumflex] = ACTIONS(976),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(976),
  },
  [282] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(235),
  },
  [283] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
    [sym_inline_verbatim] = STATE(150),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(150),
    [sym_text_mode_at_region] = STATE(150),
    [sym_parameter] = STATE(150),
    [sym_text_env] = STATE(150),
    [sym__display_math] = STATE(150),
    [sym_tex_display_math] = STATE(150),
    [sym_latex_display_math] = STATE(150),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(150),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(150),
    [sym_tex_inline_math] = STATE(150),
    [sym_latex_inline_math] = STATE(150),
    [sym_inline_math_env] = STATE(150),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(150),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(150),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(150),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(150),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(150),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(150),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(150),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(150),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(150),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(150),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(30),
    [sym_text] = STATE(150),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(979),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(981),
    [sym_double_circumflex] = ACTIONS(981),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(981),
    [sym_begin_group] = ACTIONS(981),
    [sym_alignment_tab] = ACTIONS(981),
    [sym_parameter_char] = ACTIONS(981),
    [sym_superscript] = ACTIONS(983),
    [sym_subscript] = ACTIONS(981),
    [sym_active_char] = ACTIONS(981),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(981),
  },
  [285] = {
    [sym_text_group] = STATE(339),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(985),
  },
  [286] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(985),
  },
  [287] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(987),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(989),
    [sym__end_of_line] = ACTIONS(989),
  },
  [288] = {
    [sym_text_group] = STATE(341),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(319),
    [sym__end_of_line] = ACTIONS(991),
  },
  [289] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(991),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_RBRACK] = ACTIONS(993),
    [sym_double_circumflex] = ACTIONS(993),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(993),
    [sym_begin_group] = ACTIONS(993),
    [sym_end_group] = ACTIONS(993),
    [sym_math_shift] = ACTIONS(993),
    [sym_alignment_tab] = ACTIONS(993),
    [sym_parameter_char] = ACTIONS(993),
    [sym_superscript] = ACTIONS(995),
    [sym_subscript] = ACTIONS(993),
    [sym_active_char] = ACTIONS(993),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(993),
  },
  [291] = {
    [sym__whitespace] = ACTIONS(869),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(869),
    [sym__end_of_line] = ACTIONS(869),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(997),
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
  [293] = {
    [ts_builtin_sym_end] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1001),
    [anon_sym_RBRACK] = ACTIONS(1001),
    [sym_double_circumflex] = ACTIONS(1001),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1001),
    [sym_begin_group] = ACTIONS(1001),
    [sym_end_group] = ACTIONS(1001),
    [sym_math_shift] = ACTIONS(1001),
    [sym_alignment_tab] = ACTIONS(1001),
    [sym_parameter_char] = ACTIONS(1001),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1001),
    [sym_active_char] = ACTIONS(1001),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1001),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(1005),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_RBRACK] = ACTIONS(1005),
    [sym_double_circumflex] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1007),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1005),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_RBRACK] = ACTIONS(1009),
    [sym_double_circumflex] = ACTIONS(1009),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [sym_double_circumflex] = ACTIONS(1013),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1013),
    [sym_begin_group] = ACTIONS(1013),
    [sym_end_group] = ACTIONS(1013),
    [sym_math_shift] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(1013),
    [sym_parameter_char] = ACTIONS(1013),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1013),
    [sym_active_char] = ACTIONS(1013),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1013),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym_double_circumflex] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(1021),
    [anon_sym_RBRACK] = ACTIONS(1021),
    [sym_double_circumflex] = ACTIONS(1021),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1021),
    [sym_begin_group] = ACTIONS(1021),
    [sym_end_group] = ACTIONS(1021),
    [sym_math_shift] = ACTIONS(1021),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(1021),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1021),
    [sym_active_char] = ACTIONS(1021),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1021),
  },
  [299] = {
    [sym__common] = STATE(299),
    [sym__text_mode_common] = STATE(299),
    [sym_inline_verbatim] = STATE(299),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_text_env_at] = STATE(299),
    [sym__display_math_at] = STATE(299),
    [sym_tex_display_math_at] = STATE(299),
    [sym_latex_display_math_at] = STATE(299),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(299),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(299),
    [sym_tex_inline_math_at] = STATE(299),
    [sym_latex_inline_math_at] = STATE(299),
    [sym_inline_math_env_at] = STATE(299),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(299),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(299),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(299),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(299),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(299),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(299),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(299),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(299),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(299),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(299),
    [sym_opt_text_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(299),
    [aux_sym_text_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(842),
    [sym_double_circumflex] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(848),
    [sym_begin_group] = ACTIONS(851),
    [sym_end_group] = ACTIONS(1028),
    [sym_math_shift] = ACTIONS(854),
    [sym_alignment_tab] = ACTIONS(1030),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(1030),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1025),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(1033),
    [anon_sym_RBRACK] = ACTIONS(1033),
    [sym_double_circumflex] = ACTIONS(1033),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1033),
    [sym_begin_group] = ACTIONS(1033),
    [sym_end_group] = ACTIONS(1033),
    [sym_math_shift] = ACTIONS(1033),
    [sym_alignment_tab] = ACTIONS(1033),
    [sym_parameter_char] = ACTIONS(1033),
    [sym_superscript] = ACTIONS(1035),
    [sym_subscript] = ACTIONS(1033),
    [sym_active_char] = ACTIONS(1033),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1033),
  },
  [301] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(343),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_end_group] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(245),
  },
  [302] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(1043),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(1045),
    [anon_sym_RBRACK] = ACTIONS(1045),
    [sym_double_circumflex] = ACTIONS(1045),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1045),
    [sym_begin_group] = ACTIONS(1045),
    [sym_end_group] = ACTIONS(1045),
    [sym_math_shift] = ACTIONS(1045),
    [sym_alignment_tab] = ACTIONS(1045),
    [sym_parameter_char] = ACTIONS(1045),
    [sym_superscript] = ACTIONS(1047),
    [sym_subscript] = ACTIONS(1045),
    [sym_active_char] = ACTIONS(1045),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1045),
  },
  [304] = {
    [sym__common] = STATE(347),
    [sym__text_mode_common] = STATE(347),
    [sym_inline_verbatim] = STATE(347),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(347),
    [sym_text_mode_at] = STATE(346),
    [sym_parameter] = STATE(347),
    [sym_text_env_at] = STATE(347),
    [sym__display_math_at] = STATE(347),
    [sym_tex_display_math_at] = STATE(347),
    [sym_latex_display_math_at] = STATE(347),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(347),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(347),
    [sym_tex_inline_math_at] = STATE(347),
    [sym_latex_inline_math_at] = STATE(347),
    [sym_inline_math_env_at] = STATE(347),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(347),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(347),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(347),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(347),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(347),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(347),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(347),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(347),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(347),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(347),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(347),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(347),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(347),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(347),
    [sym_opt_text_group_at] = STATE(347),
    [sym_token_at] = STATE(347),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(347),
    [aux_sym_text_mode_at_repeat1] = STATE(347),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(1049),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(1051),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(1051),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(1053),
    [anon_sym_RBRACK] = ACTIONS(1053),
    [sym_double_circumflex] = ACTIONS(1053),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1053),
    [sym_begin_group] = ACTIONS(1053),
    [sym_end_group] = ACTIONS(1053),
    [sym_math_shift] = ACTIONS(1053),
    [sym_alignment_tab] = ACTIONS(1053),
    [sym_parameter_char] = ACTIONS(1053),
    [sym_superscript] = ACTIONS(1055),
    [sym_subscript] = ACTIONS(1053),
    [sym_active_char] = ACTIONS(1053),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1053),
  },
  [306] = {
    [sym__control_symbol_body] = STATE(51),
    [anon_sym_tag] = ACTIONS(243),
    [aux_sym_SLASH_LBRACK_CARETa_DASHzA_DASHZ_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym_begin] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(301),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(51),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(53),
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(389),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [sym_double_circumflex] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_end_group] = ACTIONS(1057),
    [sym_math_shift] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1059),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1057),
  },
  [308] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_end] = STATE(348),
    [sym_end_token] = STATE(80),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(313),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(790),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(790),
    [sym_active_char] = ACTIONS(790),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(99),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym_double_circumflex] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_end_group] = ACTIONS(1061),
    [sym_math_shift] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1063),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1061),
  },
  [310] = {
    [sym__common] = STATE(350),
    [sym__math_mode_common] = STATE(350),
    [sym__math_mode_at] = STATE(350),
    [sym_parameter] = STATE(350),
    [sym_math_env_at] = STATE(350),
    [sym_tag_at] = STATE(350),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(350),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(350),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(350),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(350),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(350),
    [sym_opt_math_group_at] = STATE(350),
    [sym_token_at] = STATE(350),
    [sym_begin_opt] = STATE(225),
    [sym_end_opt] = STATE(349),
    [sym_text] = STATE(350),
    [aux_sym_math_mode_at_repeat1] = STATE(350),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_double_circumflex] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(1065),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1065),
    [sym_active_char] = ACTIONS(1065),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(263),
  },
  [311] = {
    [sym__common] = STATE(311),
    [sym__math_mode_common] = STATE(311),
    [sym__math_mode_at] = STATE(311),
    [sym_parameter] = STATE(311),
    [sym_math_env_at] = STATE(311),
    [sym_tag_at] = STATE(311),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(311),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(311),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(311),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(311),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(311),
    [sym_opt_math_group_at] = STATE(311),
    [sym_token_at] = STATE(311),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(311),
    [aux_sym_math_mode_at_repeat1] = STATE(311),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(1069),
    [sym_double_circumflex] = ACTIONS(1072),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1075),
    [sym_begin_group] = ACTIONS(1078),
    [sym_math_shift] = ACTIONS(1081),
    [sym_alignment_tab] = ACTIONS(1083),
    [sym_parameter_char] = ACTIONS(1086),
    [sym_superscript] = ACTIONS(1089),
    [sym_subscript] = ACTIONS(1083),
    [sym_active_char] = ACTIONS(1083),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1072),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(1092),
    [anon_sym_RBRACK] = ACTIONS(1092),
    [sym_double_circumflex] = ACTIONS(1092),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1092),
    [sym_begin_group] = ACTIONS(1092),
    [sym_end_group] = ACTIONS(1092),
    [sym_math_shift] = ACTIONS(1092),
    [sym_alignment_tab] = ACTIONS(1092),
    [sym_parameter_char] = ACTIONS(1092),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1092),
    [sym_active_char] = ACTIONS(1092),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1092),
  },
  [313] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(313),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(1069),
    [sym_double_circumflex] = ACTIONS(1096),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1075),
    [sym_begin_group] = ACTIONS(1078),
    [sym_alignment_tab] = ACTIONS(1099),
    [sym_parameter_char] = ACTIONS(1086),
    [sym_superscript] = ACTIONS(1102),
    [sym_subscript] = ACTIONS(1099),
    [sym_active_char] = ACTIONS(1099),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1096),
  },
  [314] = {
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
  [315] = {
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
  [316] = {
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
  [317] = {
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
  [318] = {
    [sym__common] = STATE(352),
    [sym__text_mode_common] = STATE(352),
    [sym_inline_verbatim] = STATE(352),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(352),
    [sym_parameter] = STATE(352),
    [sym_text_env_at] = STATE(352),
    [sym__display_math_at] = STATE(352),
    [sym_tex_display_math_at] = STATE(352),
    [sym_latex_display_math_at] = STATE(352),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(352),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(352),
    [sym_tex_inline_math_at] = STATE(352),
    [sym_latex_inline_math_at] = STATE(352),
    [sym_inline_math_env_at] = STATE(352),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(352),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(352),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(352),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(352),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(352),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(352),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(352),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(352),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(352),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(352),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(352),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(352),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(352),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(352),
    [sym_opt_text_group_at] = STATE(352),
    [sym_token_at] = STATE(352),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(352),
    [aux_sym_text_mode_at_repeat1] = STATE(352),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(1121),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(1123),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(1123),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [319] = {
    [anon_sym_LBRACK] = ACTIONS(1125),
    [sym_double_circumflex] = ACTIONS(1125),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1125),
    [sym_begin_group] = ACTIONS(1125),
    [sym_alignment_tab] = ACTIONS(1125),
    [sym_parameter_char] = ACTIONS(1125),
    [sym_superscript] = ACTIONS(1127),
    [sym_subscript] = ACTIONS(1125),
    [sym_active_char] = ACTIONS(1125),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1125),
  },
  [320] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1129),
  },
  [321] = {
    [sym_text_group_at] = STATE(355),
    [sym__whitespace] = ACTIONS(1131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
    [sym__end_of_line] = ACTIONS(1129),
  },
  [322] = {
    [sym_text_group_at] = STATE(356),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [323] = {
    [anon_sym_LBRACK] = ACTIONS(1133),
    [anon_sym_RBRACK] = ACTIONS(1133),
    [sym_double_circumflex] = ACTIONS(1133),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1133),
    [sym_begin_group] = ACTIONS(1133),
    [sym_end_group] = ACTIONS(1133),
    [sym_math_shift] = ACTIONS(1133),
    [sym_alignment_tab] = ACTIONS(1133),
    [sym_parameter_char] = ACTIONS(1133),
    [sym_superscript] = ACTIONS(1135),
    [sym_subscript] = ACTIONS(1133),
    [sym_active_char] = ACTIONS(1133),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1133),
  },
  [324] = {
    [sym__whitespace] = ACTIONS(836),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(836),
    [sym__end_of_line] = ACTIONS(836),
  },
  [325] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env_at] = STATE(329),
    [sym__display_math_at] = STATE(329),
    [sym_tex_display_math_at] = STATE(329),
    [sym_latex_display_math_at] = STATE(329),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(329),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(329),
    [sym_tex_inline_math_at] = STATE(329),
    [sym_latex_inline_math_at] = STATE(329),
    [sym_inline_math_env_at] = STATE(329),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(329),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(329),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(329),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(329),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(329),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(329),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(329),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(329),
    [sym_opt_text_group_at] = STATE(329),
    [sym_token_at] = STATE(329),
    [sym_begin_opt] = STATE(123),
    [sym_end_opt] = STATE(357),
    [sym_text] = STATE(329),
    [aux_sym_text_mode_at_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_double_circumflex] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(840),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(139),
  },
  [326] = {
    [sym_text_group_at] = STATE(358),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(127),
  },
  [327] = {
    [anon_sym_LBRACK] = ACTIONS(1137),
    [anon_sym_RBRACK] = ACTIONS(1137),
    [sym_double_circumflex] = ACTIONS(1137),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1137),
    [sym_begin_group] = ACTIONS(1137),
    [sym_end_group] = ACTIONS(1137),
    [sym_math_shift] = ACTIONS(1137),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_parameter_char] = ACTIONS(1137),
    [sym_superscript] = ACTIONS(1139),
    [sym_subscript] = ACTIONS(1137),
    [sym_active_char] = ACTIONS(1137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1137),
  },
  [328] = {
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
  [329] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env_at] = STATE(329),
    [sym__display_math_at] = STATE(329),
    [sym_tex_display_math_at] = STATE(329),
    [sym_latex_display_math_at] = STATE(329),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(329),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(329),
    [sym_tex_inline_math_at] = STATE(329),
    [sym_latex_inline_math_at] = STATE(329),
    [sym_inline_math_env_at] = STATE(329),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(329),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(329),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(329),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(329),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(329),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(329),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(329),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(329),
    [sym_opt_text_group_at] = STATE(329),
    [sym_token_at] = STATE(329),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(329),
    [aux_sym_text_mode_at_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(1028),
    [sym_double_circumflex] = ACTIONS(1145),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(848),
    [sym_begin_group] = ACTIONS(851),
    [sym_math_shift] = ACTIONS(854),
    [sym_alignment_tab] = ACTIONS(1148),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(1148),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1145),
  },
  [330] = {
    [anon_sym_LBRACK] = ACTIONS(1151),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1151),
  },
  [331] = {
    [ts_builtin_sym_end] = ACTIONS(1153),
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
  [332] = {
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
  [333] = {
    [ts_builtin_sym_end] = ACTIONS(1161),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_RBRACK] = ACTIONS(1161),
    [sym_double_circumflex] = ACTIONS(1161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1161),
    [sym_begin_group] = ACTIONS(1161),
    [sym_end_group] = ACTIONS(1161),
    [sym_math_shift] = ACTIONS(1161),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1163),
    [sym_subscript] = ACTIONS(1161),
    [sym_active_char] = ACTIONS(1161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1161),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(1165),
    [anon_sym_LBRACK] = ACTIONS(1165),
    [anon_sym_RBRACK] = ACTIONS(1165),
    [sym_double_circumflex] = ACTIONS(1165),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1165),
    [sym_begin_group] = ACTIONS(1165),
    [sym_end_group] = ACTIONS(1165),
    [sym_math_shift] = ACTIONS(1165),
    [sym_alignment_tab] = ACTIONS(1165),
    [sym_parameter_char] = ACTIONS(1165),
    [sym_superscript] = ACTIONS(1167),
    [sym_subscript] = ACTIONS(1165),
    [sym_active_char] = ACTIONS(1165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1165),
  },
  [335] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1169),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(970),
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
    [sym_superscript] = ACTIONS(1171),
    [sym_subscript] = ACTIONS(970),
    [sym_active_char] = ACTIONS(970),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(970),
  },
  [337] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(530),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(1173),
    [sym_double_circumflex] = ACTIONS(1173),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1173),
    [sym_begin_group] = ACTIONS(1173),
    [sym_alignment_tab] = ACTIONS(1173),
    [sym_parameter_char] = ACTIONS(1173),
    [sym_superscript] = ACTIONS(1175),
    [sym_subscript] = ACTIONS(1173),
    [sym_active_char] = ACTIONS(1173),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1173),
  },
  [339] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1177),
  },
  [340] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1181),
    [sym__end_of_line] = ACTIONS(1181),
  },
  [341] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1183),
  },
  [342] = {
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_RBRACK] = ACTIONS(1185),
    [sym_double_circumflex] = ACTIONS(1185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1185),
    [sym_begin_group] = ACTIONS(1185),
    [sym_end_group] = ACTIONS(1185),
    [sym_math_shift] = ACTIONS(1185),
    [sym_alignment_tab] = ACTIONS(1185),
    [sym_parameter_char] = ACTIONS(1185),
    [sym_superscript] = ACTIONS(1187),
    [sym_subscript] = ACTIONS(1185),
    [sym_active_char] = ACTIONS(1185),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1185),
  },
  [343] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(343),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(1069),
    [sym_double_circumflex] = ACTIONS(1189),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1075),
    [sym_begin_group] = ACTIONS(1078),
    [sym_end_group] = ACTIONS(1081),
    [sym_alignment_tab] = ACTIONS(1192),
    [sym_parameter_char] = ACTIONS(1086),
    [sym_superscript] = ACTIONS(1195),
    [sym_subscript] = ACTIONS(1192),
    [sym_active_char] = ACTIONS(1192),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1189),
  },
  [344] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(1198),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(1200),
    [anon_sym_RBRACK] = ACTIONS(1200),
    [sym_double_circumflex] = ACTIONS(1200),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1200),
    [sym_begin_group] = ACTIONS(1200),
    [sym_end_group] = ACTIONS(1200),
    [sym_math_shift] = ACTIONS(1200),
    [sym_alignment_tab] = ACTIONS(1200),
    [sym_parameter_char] = ACTIONS(1200),
    [sym_superscript] = ACTIONS(1202),
    [sym_subscript] = ACTIONS(1200),
    [sym_active_char] = ACTIONS(1200),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1200),
  },
  [346] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1204),
  },
  [347] = {
    [sym__common] = STATE(299),
    [sym__text_mode_common] = STATE(299),
    [sym_inline_verbatim] = STATE(299),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_text_env_at] = STATE(299),
    [sym__display_math_at] = STATE(299),
    [sym_tex_display_math_at] = STATE(299),
    [sym_latex_display_math_at] = STATE(299),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(299),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(299),
    [sym_tex_inline_math_at] = STATE(299),
    [sym_latex_inline_math_at] = STATE(299),
    [sym_inline_math_env_at] = STATE(299),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(299),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(299),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(299),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(299),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(299),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(299),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(299),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(299),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(299),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(299),
    [sym_opt_text_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(299),
    [aux_sym_text_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(1206),
    [anon_sym_RBRACK] = ACTIONS(1206),
    [sym_double_circumflex] = ACTIONS(1206),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1206),
    [sym_begin_group] = ACTIONS(1206),
    [sym_end_group] = ACTIONS(1206),
    [sym_math_shift] = ACTIONS(1206),
    [sym_alignment_tab] = ACTIONS(1206),
    [sym_parameter_char] = ACTIONS(1206),
    [sym_superscript] = ACTIONS(1208),
    [sym_subscript] = ACTIONS(1206),
    [sym_active_char] = ACTIONS(1206),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1206),
  },
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(1210),
    [anon_sym_RBRACK] = ACTIONS(1210),
    [sym_double_circumflex] = ACTIONS(1210),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1210),
    [sym_begin_group] = ACTIONS(1210),
    [sym_end_group] = ACTIONS(1210),
    [sym_math_shift] = ACTIONS(1210),
    [sym_alignment_tab] = ACTIONS(1210),
    [sym_parameter_char] = ACTIONS(1210),
    [sym_superscript] = ACTIONS(1212),
    [sym_subscript] = ACTIONS(1210),
    [sym_active_char] = ACTIONS(1210),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1210),
  },
  [350] = {
    [sym__common] = STATE(350),
    [sym__math_mode_common] = STATE(350),
    [sym__math_mode_at] = STATE(350),
    [sym_parameter] = STATE(350),
    [sym_math_env_at] = STATE(350),
    [sym_tag_at] = STATE(350),
    [sym_tag_token] = STATE(223),
    [sym_escaped] = STATE(350),
    [sym_begin] = STATE(224),
    [sym_begin_token] = STATE(61),
    [sym_include_at] = STATE(350),
    [sym_include_token] = STATE(114),
    [sym_storage] = STATE(350),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(350),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(350),
    [sym_opt_math_group_at] = STATE(350),
    [sym_token_at] = STATE(350),
    [sym_begin_opt] = STATE(225),
    [sym_text] = STATE(350),
    [aux_sym_math_mode_at_repeat1] = STATE(350),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(1069),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [sym_double_circumflex] = ACTIONS(1214),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1075),
    [sym_begin_group] = ACTIONS(1078),
    [sym_alignment_tab] = ACTIONS(1217),
    [sym_parameter_char] = ACTIONS(1086),
    [sym_superscript] = ACTIONS(1220),
    [sym_subscript] = ACTIONS(1217),
    [sym_active_char] = ACTIONS(1217),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1214),
  },
  [351] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(750),
  },
  [352] = {
    [sym__common] = STATE(299),
    [sym__text_mode_common] = STATE(299),
    [sym_inline_verbatim] = STATE(299),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_text_env_at] = STATE(299),
    [sym__display_math_at] = STATE(299),
    [sym_tex_display_math_at] = STATE(299),
    [sym_latex_display_math_at] = STATE(299),
    [sym_begin_display_math] = STATE(108),
    [sym_begin_inline_math] = STATE(109),
    [sym_display_math_env_at] = STATE(299),
    [sym_display_math_begin_at] = STATE(110),
    [sym__inline_math_at] = STATE(299),
    [sym_tex_inline_math_at] = STATE(299),
    [sym_latex_inline_math_at] = STATE(299),
    [sym_inline_math_env_at] = STATE(299),
    [sym_inline_math_begin] = STATE(111),
    [sym_verbatim_env] = STATE(299),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(112),
    [sym_begin_token] = STATE(113),
    [sym_documentclass] = STATE(299),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(299),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(114),
    [sym_section_at] = STATE(299),
    [sym_section_token] = STATE(115),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(299),
    [sym_emph_token] = STATE(116),
    [sym_footnote_at] = STATE(299),
    [sym_footnote_token] = STATE(117),
    [sym_textbf_at] = STATE(299),
    [sym_textbf_token] = STATE(118),
    [sym_textit_at] = STATE(299),
    [sym_textit_token] = STATE(119),
    [sym_texttt_at] = STATE(299),
    [sym_texttt_token] = STATE(120),
    [sym_text_group_at] = STATE(299),
    [sym_opt_text_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(123),
    [sym_text] = STATE(299),
    [aux_sym_text_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [aux_sym_text_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(1223),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [353] = {
    [anon_sym_LBRACK] = ACTIONS(1225),
    [sym_double_circumflex] = ACTIONS(1225),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1225),
    [sym_begin_group] = ACTIONS(1225),
    [sym_alignment_tab] = ACTIONS(1225),
    [sym_parameter_char] = ACTIONS(1225),
    [sym_superscript] = ACTIONS(1227),
    [sym_subscript] = ACTIONS(1225),
    [sym_active_char] = ACTIONS(1225),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1225),
  },
  [354] = {
    [sym_text_group_at] = STATE(366),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
    [sym__end_of_line] = ACTIONS(1229),
  },
  [355] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1229),
  },
  [356] = {
    [anon_sym_LBRACK] = ACTIONS(1231),
    [anon_sym_RBRACK] = ACTIONS(1231),
    [sym_double_circumflex] = ACTIONS(1231),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1231),
    [sym_begin_group] = ACTIONS(1231),
    [sym_end_group] = ACTIONS(1231),
    [sym_math_shift] = ACTIONS(1231),
    [sym_alignment_tab] = ACTIONS(1231),
    [sym_parameter_char] = ACTIONS(1231),
    [sym_superscript] = ACTIONS(1233),
    [sym_subscript] = ACTIONS(1231),
    [sym_active_char] = ACTIONS(1231),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1231),
  },
  [357] = {
    [sym__whitespace] = ACTIONS(1141),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1141),
    [sym__end_of_line] = ACTIONS(1141),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(1235),
    [anon_sym_RBRACK] = ACTIONS(1235),
    [sym_double_circumflex] = ACTIONS(1235),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1235),
    [sym_begin_group] = ACTIONS(1235),
    [sym_end_group] = ACTIONS(1235),
    [sym_math_shift] = ACTIONS(1235),
    [sym_alignment_tab] = ACTIONS(1235),
    [sym_parameter_char] = ACTIONS(1235),
    [sym_superscript] = ACTIONS(1237),
    [sym_subscript] = ACTIONS(1235),
    [sym_active_char] = ACTIONS(1235),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1235),
  },
  [359] = {
    [ts_builtin_sym_end] = ACTIONS(964),
    [anon_sym_LBRACK] = ACTIONS(964),
    [anon_sym_RBRACK] = ACTIONS(964),
    [sym_double_circumflex] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(964),
    [sym_begin_group] = ACTIONS(964),
    [sym_end_group] = ACTIONS(964),
    [sym_math_shift] = ACTIONS(964),
    [sym_alignment_tab] = ACTIONS(964),
    [sym_parameter_char] = ACTIONS(964),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(964),
    [sym_active_char] = ACTIONS(964),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(964),
  },
  [360] = {
    [anon_sym_LBRACK] = ACTIONS(1241),
    [sym_double_circumflex] = ACTIONS(1241),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1241),
    [sym_begin_group] = ACTIONS(1241),
    [sym_alignment_tab] = ACTIONS(1241),
    [sym_parameter_char] = ACTIONS(1241),
    [sym_superscript] = ACTIONS(1243),
    [sym_subscript] = ACTIONS(1241),
    [sym_active_char] = ACTIONS(1241),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1241),
  },
  [361] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1245),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1247),
    [sym__end_of_line] = ACTIONS(1247),
  },
  [362] = {
    [anon_sym_LBRACK] = ACTIONS(1249),
    [anon_sym_RBRACK] = ACTIONS(1249),
    [sym_double_circumflex] = ACTIONS(1249),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1249),
    [sym_begin_group] = ACTIONS(1249),
    [sym_end_group] = ACTIONS(1249),
    [sym_math_shift] = ACTIONS(1249),
    [sym_alignment_tab] = ACTIONS(1249),
    [sym_parameter_char] = ACTIONS(1249),
    [sym_superscript] = ACTIONS(1251),
    [sym_subscript] = ACTIONS(1249),
    [sym_active_char] = ACTIONS(1249),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1249),
  },
  [363] = {
    [anon_sym_LBRACK] = ACTIONS(1253),
    [anon_sym_RBRACK] = ACTIONS(1253),
    [sym_double_circumflex] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_end_group] = ACTIONS(1253),
    [sym_math_shift] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1255),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1253),
  },
  [364] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1021),
  },
  [365] = {
    [anon_sym_LBRACK] = ACTIONS(1257),
    [sym_double_circumflex] = ACTIONS(1257),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1257),
    [sym_begin_group] = ACTIONS(1257),
    [sym_alignment_tab] = ACTIONS(1257),
    [sym_parameter_char] = ACTIONS(1257),
    [sym_superscript] = ACTIONS(1259),
    [sym_subscript] = ACTIONS(1257),
    [sym_active_char] = ACTIONS(1257),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1257),
  },
  [366] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1261),
  },
  [367] = {
    [anon_sym_LBRACK] = ACTIONS(1263),
    [sym_double_circumflex] = ACTIONS(1263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1263),
    [sym_begin_group] = ACTIONS(1263),
    [sym_alignment_tab] = ACTIONS(1263),
    [sym_parameter_char] = ACTIONS(1263),
    [sym_superscript] = ACTIONS(1265),
    [sym_subscript] = ACTIONS(1263),
    [sym_active_char] = ACTIONS(1263),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_LBRACE_RBRACE_DOLLAR_AMP_POUND_CARET_TILDE_PERCENT_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_PLUS_SLASH] = ACTIONS(1263),
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
  [33] = {.count = 1, .reusable = false}, SHIFT(34),
  [35] = {.count = 1, .reusable = true}, SHIFT(35),
  [37] = {.count = 1, .reusable = true}, SHIFT(36),
  [39] = {.count = 1, .reusable = false}, SHIFT(51),
  [41] = {.count = 1, .reusable = false}, SHIFT(37),
  [43] = {.count = 1, .reusable = false}, SHIFT(38),
  [45] = {.count = 1, .reusable = false}, SHIFT(39),
  [47] = {.count = 1, .reusable = false}, SHIFT(40),
  [49] = {.count = 1, .reusable = false}, SHIFT(41),
  [51] = {.count = 1, .reusable = false}, SHIFT(42),
  [53] = {.count = 1, .reusable = true}, SHIFT(43),
  [55] = {.count = 1, .reusable = false}, SHIFT(44),
  [57] = {.count = 1, .reusable = false}, SHIFT(45),
  [59] = {.count = 1, .reusable = false}, SHIFT(46),
  [61] = {.count = 1, .reusable = false}, SHIFT(47),
  [63] = {.count = 1, .reusable = false}, SHIFT(48),
  [65] = {.count = 1, .reusable = false}, SHIFT(49),
  [67] = {.count = 1, .reusable = true}, SHIFT(51),
  [69] = {.count = 1, .reusable = false}, SHIFT(50),
  [71] = {.count = 1, .reusable = true}, SHIFT(54),
  [73] = {.count = 1, .reusable = true}, SHIFT(52),
  [75] = {.count = 1, .reusable = true}, SHIFT(53),
  [77] = {.count = 1, .reusable = true}, SHIFT(64),
  [79] = {.count = 1, .reusable = true}, SHIFT(55),
  [81] = {.count = 1, .reusable = true}, SHIFT(56),
  [83] = {.count = 1, .reusable = true}, SHIFT(57),
  [85] = {.count = 1, .reusable = true}, SHIFT(63),
  [87] = {.count = 1, .reusable = false}, SHIFT(63),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [93] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [95] = {.count = 1, .reusable = true}, SHIFT(65),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(68),
  [101] = {.count = 1, .reusable = true}, SHIFT(67),
  [103] = {.count = 1, .reusable = false}, SHIFT(67),
  [105] = {.count = 1, .reusable = false}, SHIFT(76),
  [107] = {.count = 1, .reusable = true}, SHIFT(72),
  [109] = {.count = 1, .reusable = true}, SHIFT(77),
  [111] = {.count = 1, .reusable = true}, SHIFT(78),
  [113] = {.count = 1, .reusable = true}, SHIFT(81),
  [115] = {.count = 1, .reusable = true}, SHIFT(82),
  [117] = {.count = 1, .reusable = true}, SHIFT(87),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(96),
  [125] = {.count = 1, .reusable = true}, SHIFT(104),
  [127] = {.count = 1, .reusable = true}, SHIFT(105),
  [129] = {.count = 1, .reusable = true}, SHIFT(106),
  [131] = {.count = 1, .reusable = true}, SHIFT(124),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(125),
  [139] = {.count = 1, .reusable = true}, SHIFT(128),
  [141] = {.count = 1, .reusable = true}, SHIFT(127),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(129),
  [147] = {.count = 1, .reusable = true}, SHIFT(131),
  [149] = {.count = 1, .reusable = true}, SHIFT(130),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [157] = {.count = 1, .reusable = false}, SHIFT(133),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [163] = {.count = 1, .reusable = false}, SHIFT(134),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(135),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(136),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(137),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(138),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(139),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(140),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [193] = {.count = 1, .reusable = false}, SHIFT(141),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(142),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(143),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(144),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(145),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(146),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [219] = {.count = 1, .reusable = false}, SHIFT(147),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [227] = {.count = 1, .reusable = false}, SHIFT(148),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [239] = {.count = 1, .reusable = true}, SHIFT(149),
  [241] = {.count = 1, .reusable = true}, SHIFT(150),
  [243] = {.count = 1, .reusable = false}, SHIFT(152),
  [245] = {.count = 1, .reusable = true}, SHIFT(155),
  [247] = {.count = 1, .reusable = true}, SHIFT(153),
  [249] = {.count = 1, .reusable = true}, SHIFT(154),
  [251] = {.count = 1, .reusable = false}, SHIFT(154),
  [253] = {.count = 1, .reusable = true}, SHIFT(157),
  [255] = {.count = 1, .reusable = true}, SHIFT(158),
  [257] = {.count = 1, .reusable = true}, SHIFT(160),
  [259] = {.count = 1, .reusable = true}, SHIFT(162),
  [261] = {.count = 1, .reusable = false}, SHIFT(162),
  [263] = {.count = 1, .reusable = true}, SHIFT(165),
  [265] = {.count = 1, .reusable = true}, SHIFT(164),
  [267] = {.count = 1, .reusable = false}, SHIFT(164),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [271] = {.count = 1, .reusable = true}, SHIFT(166),
  [273] = {.count = 1, .reusable = false}, SHIFT(166),
  [275] = {.count = 1, .reusable = true}, SHIFT(168),
  [277] = {.count = 1, .reusable = true}, SHIFT(169),
  [279] = {.count = 1, .reusable = true}, SHIFT(171),
  [281] = {.count = 1, .reusable = false}, SHIFT(171),
  [283] = {.count = 1, .reusable = true}, SHIFT(173),
  [285] = {.count = 1, .reusable = true}, SHIFT(179),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(181),
  [293] = {.count = 1, .reusable = false}, SHIFT(184),
  [295] = {.count = 1, .reusable = true}, SHIFT(183),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(185),
  [301] = {.count = 1, .reusable = false}, SHIFT(179),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 2),
  [307] = {.count = 1, .reusable = true}, SHIFT(188),
  [309] = {.count = 1, .reusable = false}, SHIFT(189),
  [311] = {.count = 1, .reusable = false}, SHIFT(190),
  [313] = {.count = 1, .reusable = false}, SHIFT(191),
  [315] = {.count = 1, .reusable = true}, SHIFT(193),
  [317] = {.count = 1, .reusable = false}, SHIFT(193),
  [319] = {.count = 1, .reusable = true}, SHIFT(194),
  [321] = {.count = 1, .reusable = true}, SHIFT(195),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_begin, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(198),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [337] = {.count = 1, .reusable = true}, SHIFT(201),
  [339] = {.count = 1, .reusable = true}, SHIFT(203),
  [341] = {.count = 1, .reusable = true}, SHIFT(205),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [347] = {.count = 1, .reusable = true}, SHIFT(206),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(208),
  [359] = {.count = 1, .reusable = false}, SHIFT(210),
  [361] = {.count = 1, .reusable = true}, SHIFT(210),
  [363] = {.count = 1, .reusable = true}, SHIFT(211),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_emph, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 2),
  [373] = {.count = 1, .reusable = true}, SHIFT(212),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_textbf, 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_textit, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_texttt, 2),
  [387] = {.count = 1, .reusable = false}, SHIFT(214),
  [389] = {.count = 1, .reusable = false}, SHIFT(215),
  [391] = {.count = 1, .reusable = true}, SHIFT(216),
  [393] = {.count = 1, .reusable = true}, SHIFT(217),
  [395] = {.count = 1, .reusable = true}, SHIFT(218),
  [397] = {.count = 1, .reusable = true}, SHIFT(219),
  [399] = {.count = 1, .reusable = true}, SHIFT(220),
  [401] = {.count = 1, .reusable = true}, SHIFT(221),
  [403] = {.count = 1, .reusable = true}, SHIFT(226),
  [405] = {.count = 1, .reusable = false}, SHIFT(226),
  [407] = {.count = 1, .reusable = true}, SHIFT(227),
  [409] = {.count = 1, .reusable = true}, SHIFT(230),
  [411] = {.count = 1, .reusable = false}, SHIFT(230),
  [413] = {.count = 1, .reusable = true}, SHIFT(234),
  [415] = {.count = 1, .reusable = true}, SHIFT(236),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [425] = {.count = 1, .reusable = true}, SHIFT(249),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [429] = {.count = 1, .reusable = true}, SHIFT(250),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [439] = {.count = 1, .reusable = true}, SHIFT(252),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(33),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(129),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(131),
  [477] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [479] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(132),
  [484] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 3),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 3),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [502] = {.count = 1, .reusable = true}, SHIFT(254),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [506] = {.count = 1, .reusable = true}, SHIFT(255),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_token, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(54),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(150),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(151),
  [543] = {.count = 1, .reusable = true}, SHIFT(256),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [551] = {.count = 1, .reusable = true}, SHIFT(257),
  [553] = {.count = 1, .reusable = true}, SHIFT(258),
  [555] = {.count = 1, .reusable = false}, SHIFT(258),
  [557] = {.count = 1, .reusable = true}, SHIFT(260),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [563] = {.count = 1, .reusable = true}, SHIFT(261),
  [565] = {.count = 1, .reusable = true}, SHIFT(263),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [579] = {.count = 1, .reusable = true}, SHIFT(266),
  [581] = {.count = 1, .reusable = false}, SHIFT(266),
  [583] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(64),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(55),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(56),
  [595] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(166),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [603] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(166),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(167),
  [609] = {.count = 1, .reusable = true}, SHIFT(268),
  [611] = {.count = 1, .reusable = true}, SHIFT(269),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(68),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(171),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(171),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(172),
  [629] = {.count = 1, .reusable = true}, SHIFT(270),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [639] = {.count = 1, .reusable = true}, SHIFT(271),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [645] = {.count = 1, .reusable = true}, SHIFT(273),
  [647] = {.count = 1, .reusable = true}, SHIFT(275),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 3),
  [655] = {.count = 1, .reusable = true}, SHIFT(276),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_end, 2),
  [661] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(184),
  [668] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [670] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(76),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(185),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 3),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(64),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(188),
  [690] = {.count = 1, .reusable = true}, SHIFT(277),
  [692] = {.count = 1, .reusable = true}, SHIFT(278),
  [694] = {.count = 1, .reusable = true}, SHIFT(279),
  [696] = {.count = 1, .reusable = true}, SHIFT(280),
  [698] = {.count = 1, .reusable = true}, SHIFT(281),
  [700] = {.count = 1, .reusable = true}, SHIFT(282),
  [702] = {.count = 1, .reusable = true}, SHIFT(283),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 3),
  [708] = {.count = 1, .reusable = true}, SHIFT(284),
  [710] = {.count = 1, .reusable = true}, SHIFT(285),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [716] = {.count = 1, .reusable = true}, SHIFT(287),
  [718] = {.count = 1, .reusable = true}, SHIFT(288),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [732] = {.count = 1, .reusable = true}, SHIFT(294),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 3),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [740] = {.count = 1, .reusable = false}, SHIFT(296),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [744] = {.count = 1, .reusable = false}, SHIFT(297),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [748] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [752] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 2),
  [754] = {.count = 1, .reusable = true}, SHIFT(298),
  [756] = {.count = 1, .reusable = true}, SHIFT(299),
  [758] = {.count = 1, .reusable = true}, SHIFT(300),
  [760] = {.count = 1, .reusable = true}, SHIFT(301),
  [762] = {.count = 1, .reusable = false}, SHIFT(301),
  [764] = {.count = 1, .reusable = true}, SHIFT(303),
  [766] = {.count = 1, .reusable = true}, SHIFT(304),
  [768] = {.count = 1, .reusable = true}, SHIFT(306),
  [770] = {.count = 1, .reusable = true}, SHIFT(308),
  [772] = {.count = 1, .reusable = false}, SHIFT(308),
  [774] = {.count = 1, .reusable = true}, SHIFT(310),
  [776] = {.count = 1, .reusable = false}, SHIFT(310),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [780] = {.count = 1, .reusable = true}, SHIFT(311),
  [782] = {.count = 1, .reusable = false}, SHIFT(311),
  [784] = {.count = 1, .reusable = true}, SHIFT(214),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [788] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 3),
  [790] = {.count = 1, .reusable = true}, SHIFT(313),
  [792] = {.count = 1, .reusable = false}, SHIFT(313),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [796] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 2),
  [798] = {.count = 1, .reusable = true}, SHIFT(318),
  [800] = {.count = 1, .reusable = true}, SHIFT(319),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym_include_at, 2),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [808] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 2),
  [810] = {.count = 1, .reusable = true}, SHIFT(322),
  [812] = {.count = 1, .reusable = true}, SHIFT(325),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [816] = {.count = 1, .reusable = false}, REDUCE(sym_emph_at, 2),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [820] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 2),
  [822] = {.count = 1, .reusable = true}, SHIFT(326),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_textbf_at, 2),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_textit_at, 2),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym_texttt_at, 2),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 2),
  [840] = {.count = 1, .reusable = true}, SHIFT(329),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(64),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(216),
  [851] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(105),
  [854] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(106),
  [857] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(250),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [863] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [866] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(128),
  [876] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(252),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(253),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [884] = {.count = 1, .reusable = true}, SHIFT(330),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [892] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(155),
  [895] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(258),
  [898] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(258),
  [901] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(259),
  [904] = {.count = 1, .reusable = true}, SHIFT(331),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [910] = {.count = 1, .reusable = true}, SHIFT(332),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym_math_env, 3),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [918] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [920] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(165),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(266),
  [926] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(266),
  [929] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(267),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [934] = {.count = 1, .reusable = false}, REDUCE(sym_inline_verbatim, 4),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [938] = {.count = 1, .reusable = false}, SHIFT(333),
  [940] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [944] = {.count = 1, .reusable = false}, SHIFT(334),
  [946] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [948] = {.count = 1, .reusable = true}, SHIFT(335),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [954] = {.count = 1, .reusable = true}, SHIFT(190),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [958] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [962] = {.count = 1, .reusable = true}, SHIFT(336),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [968] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [974] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [976] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(281),
  [979] = {.count = 1, .reusable = true}, SHIFT(337),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [983] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 4),
  [985] = {.count = 1, .reusable = true}, SHIFT(338),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [991] = {.count = 1, .reusable = true}, SHIFT(340),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [995] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [999] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1001] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1003] = {.count = 1, .reusable = false}, REDUCE(sym_section, 4),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1007] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [1011] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 4),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1015] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 3),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1019] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 3),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1023] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 3),
  [1025] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(54),
  [1028] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(299),
  [1033] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1035] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 2),
  [1037] = {.count = 1, .reusable = true}, SHIFT(342),
  [1039] = {.count = 1, .reusable = true}, SHIFT(343),
  [1041] = {.count = 1, .reusable = false}, SHIFT(343),
  [1043] = {.count = 1, .reusable = true}, SHIFT(344),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1047] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math_at, 3),
  [1049] = {.count = 1, .reusable = true}, SHIFT(345),
  [1051] = {.count = 1, .reusable = true}, SHIFT(347),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1055] = {.count = 1, .reusable = false}, REDUCE(sym_tag_at, 2),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1059] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 2),
  [1061] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1063] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 2),
  [1065] = {.count = 1, .reusable = true}, SHIFT(350),
  [1067] = {.count = 1, .reusable = false}, SHIFT(350),
  [1069] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [1072] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(64),
  [1075] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(219),
  [1078] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(220),
  [1081] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1083] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(311),
  [1086] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [1089] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(311),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1094] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math_at, 3),
  [1096] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(68),
  [1099] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(313),
  [1102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(313),
  [1105] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1107] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math_at, 3),
  [1109] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1111] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_at, 3),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_at, 3),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 3),
  [1121] = {.count = 1, .reusable = true}, SHIFT(351),
  [1123] = {.count = 1, .reusable = true}, SHIFT(352),
  [1125] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1127] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 3),
  [1129] = {.count = 1, .reusable = true}, SHIFT(353),
  [1131] = {.count = 1, .reusable = true}, SHIFT(354),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1135] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 3),
  [1137] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1139] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 3),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1143] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 3),
  [1145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(128),
  [1148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(329),
  [1151] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1155] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1159] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1163] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 3),
  [1165] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1167] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 3),
  [1169] = {.count = 1, .reusable = true}, SHIFT(359),
  [1171] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env_group, 3),
  [1173] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1175] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 5),
  [1177] = {.count = 1, .reusable = true}, SHIFT(360),
  [1179] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1181] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1183] = {.count = 1, .reusable = true}, SHIFT(361),
  [1185] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1187] = {.count = 1, .reusable = false}, REDUCE(sym_math_group_at, 3),
  [1189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(155),
  [1192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(343),
  [1195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(343),
  [1198] = {.count = 1, .reusable = true}, SHIFT(362),
  [1200] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1202] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 2),
  [1204] = {.count = 1, .reusable = true}, SHIFT(363),
  [1206] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1208] = {.count = 1, .reusable = false}, REDUCE(sym_math_env_at, 3),
  [1210] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1212] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group_at, 3),
  [1214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(165),
  [1217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(350),
  [1220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(350),
  [1223] = {.count = 1, .reusable = true}, SHIFT(364),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1227] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 4),
  [1229] = {.count = 1, .reusable = true}, SHIFT(365),
  [1231] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1233] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 4),
  [1235] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1237] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 4),
  [1239] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1243] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 6),
  [1245] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1249] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1251] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math_at, 5),
  [1253] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1255] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group_at, 3),
  [1257] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1259] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 5),
  [1261] = {.count = 1, .reusable = true}, SHIFT(367),
  [1263] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
  [1265] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin_at, 6),
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
