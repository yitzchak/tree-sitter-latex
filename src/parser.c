#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 300
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 4
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_verb = 3,
  aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_display_math_env_name = 9,
  sym_inline_math_env_name = 10,
  anon_sym_tag = 11,
  aux_sym_SLASH_DOT_SLASH = 12,
  sym_verbatim_env_name = 13,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 14,
  anon_sym_begin = 15,
  anon_sym_end = 16,
  anon_sym_documentclass = 17,
  anon_sym_usepackage = 18,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 19,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 20,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 21,
  anon_sym_EQ = 22,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 23,
  anon_sym_emph = 24,
  anon_sym_textbf = 25,
  anon_sym_textit = 26,
  anon_sym_texttt = 27,
  anon_sym_makeatletter = 28,
  anon_sym_makeatother = 29,
  sym_magic_comment = 30,
  sym_comment = 31,
  sym__escape = 32,
  sym_begin_group = 33,
  sym_end_group = 34,
  sym_math_shift = 35,
  sym_alignment_tab = 36,
  sym__end_of_line = 37,
  sym_parameter_char = 38,
  sym_superscript = 39,
  sym_subscript = 40,
  sym__name = 41,
  sym__name_at = 42,
  sym_active_char = 43,
  sym_text = 44,
  sym_number = 45,
  sym_document = 46,
  sym__common = 47,
  sym__text_mode_common = 48,
  sym_inline_verbatim = 49,
  sym_verb_token = 50,
  sym__whitespace = 51,
  sym__text_mode = 52,
  sym_text_mode = 53,
  sym__text_mode_at = 54,
  sym_text_mode_at = 55,
  sym_text_mode_at_region = 56,
  sym__math_mode_common = 57,
  sym__math_mode = 58,
  sym_math_mode = 59,
  sym__math_mode_at = 60,
  sym_math_mode_at = 61,
  sym_parameter = 62,
  sym_text_env = 63,
  sym_text_env_at = 64,
  sym_math_env = 65,
  sym_math_env_at = 66,
  sym__display_math = 67,
  sym__display_math_at = 68,
  sym_tex_display_math = 69,
  sym_tex_display_math_at = 70,
  sym_latex_display_math = 71,
  sym_latex_display_math_at = 72,
  sym_begin_display_math = 73,
  sym_end_display_math = 74,
  sym_begin_inline_math = 75,
  sym_end_inline_math = 76,
  sym_display_math_env = 77,
  sym_display_math_env_at = 78,
  sym_display_math_begin = 79,
  sym_display_math_begin_at = 80,
  sym_display_math_end = 81,
  sym_display_math_env_group = 82,
  sym__inline_math = 83,
  sym__inline_math_at = 84,
  sym_tex_inline_math = 85,
  sym_tex_inline_math_at = 86,
  sym_latex_inline_math = 87,
  sym_latex_inline_math_at = 88,
  sym_inline_math_env = 89,
  sym_inline_math_env_at = 90,
  sym_inline_math_begin = 91,
  sym_inline_math_end = 92,
  sym_inline_math_env_group = 93,
  sym_tag = 94,
  sym_tag_at = 95,
  sym_tag_token = 96,
  sym_verbatim_env = 97,
  sym_verbatim_begin = 98,
  sym_verbatim_end = 99,
  sym_verbatim_text = 100,
  sym_verbatim_env_group = 101,
  sym_escaped = 102,
  sym_begin = 103,
  sym_begin_token = 104,
  sym_end = 105,
  sym_end_token = 106,
  sym_documentclass = 107,
  sym_documentclass_token = 108,
  sym_usepackage = 109,
  sym_usepackage_token = 110,
  sym_include = 111,
  sym_include_at = 112,
  sym_include_token = 113,
  sym_section = 114,
  sym_section_at = 115,
  sym_section_token = 116,
  sym_storage = 117,
  sym_storage_token = 118,
  sym_catcode = 119,
  sym_catcode_token = 120,
  sym_emph = 121,
  sym_emph_at = 122,
  sym_emph_token = 123,
  sym_textbf = 124,
  sym_textbf_at = 125,
  sym_textbf_token = 126,
  sym_textit = 127,
  sym_textit_at = 128,
  sym_textit_token = 129,
  sym_texttt = 130,
  sym_texttt_at = 131,
  sym_texttt_token = 132,
  sym_makeatletter = 133,
  sym_makeatletter_token = 134,
  sym_makeatother = 135,
  sym_makeatother_token = 136,
  sym_text_group = 137,
  sym_text_group_at = 138,
  sym_simple_text_group = 139,
  sym_opt_text_group = 140,
  sym_opt_text_group_at = 141,
  sym_math_group = 142,
  sym_math_group_at = 143,
  sym_opt_math_group = 144,
  sym_opt_math_group_at = 145,
  sym_math_text_group = 146,
  sym_math_text_group_at = 147,
  sym_token = 148,
  sym_token_at = 149,
  sym_begin_opt = 150,
  sym_end_opt = 151,
  aux_sym__whitespace_repeat1 = 152,
  aux_sym_text_mode_repeat1 = 153,
  aux_sym_text_mode_at_repeat1 = 154,
  aux_sym_math_mode_repeat1 = 155,
  aux_sym_math_mode_at_repeat1 = 156,
  aux_sym_parameter_repeat1 = 157,
  aux_sym_verbatim_text_repeat1 = 158,
  aux_sym_verbatim_text_repeat2 = 159,
  anon_alias_sym_class_name = 160,
  anon_alias_sym_env_name = 161,
  anon_alias_sym_package_name = 162,
  anon_alias_sym_text = 163,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [ts_builtin_sym_end] = "END",
  [anon_sym_verb] = "verb",
  [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = "/[\\s\\t]/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_display_math_env_name] = "display_math_env_name",
  [sym_inline_math_env_name] = "inline_math_env_name",
  [anon_sym_tag] = "tag",
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [sym_verbatim_env_name] = "verbatim_env_name",
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
  [anon_sym_emph] = "emph",
  [anon_sym_textbf] = "textbf",
  [anon_sym_textit] = "textit",
  [anon_sym_texttt] = "texttt",
  [anon_sym_makeatletter] = "makeatletter",
  [anon_sym_makeatother] = "makeatother",
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
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__common] = "_common",
  [sym__text_mode_common] = "_text_mode_common",
  [sym_inline_verbatim] = "inline_verbatim",
  [sym_verb_token] = "verb_token",
  [sym__whitespace] = "_whitespace",
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
  [aux_sym__whitespace_repeat1] = "_whitespace_repeat1",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_text_mode_at_repeat1] = "text_mode_at_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_math_mode_at_repeat1] = "math_mode_at_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_verbatim_text_repeat2] = "verbatim_text_repeat2",
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
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
  [anon_sym_emph] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym__whitespace] = {
    .visible = false,
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
  [aux_sym__whitespace_repeat1] = {
    .visible = false,
    .named = false,
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '=')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      ADVANCE(34);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 35:
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
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(32);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'd')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(86);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 'k')
        ADVANCE(100);
      if (lookahead == 'm')
        ADVANCE(102);
      if (lookahead == 'p')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(125);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(160);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
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
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(43);
      if (lookahead == 'p')
        ADVANCE(48);
      if (lookahead == 's')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(59);
      if (lookahead == 'h')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'm')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(93);
      if (lookahead == 'p')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(103);
      if (lookahead == 'i')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == 'u')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(133);
      if (lookahead == 's')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(144);
      if (lookahead == 'i')
        ADVANCE(146);
      if (lookahead == 't')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 167:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(36);
      END_STATE();
    case 168:
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
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(32);
      ADVANCE(36);
      END_STATE();
    case 169:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 171:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 174:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(175);
      if (lookahead == 'd')
        ADVANCE(176);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 'k')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 180:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'd')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 185:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(58);
      if (lookahead == 'd')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 'k')
        ADVANCE(100);
      if (lookahead == 'm')
        ADVANCE(102);
      if (lookahead == 'p')
        ADVANCE(117);
      if (lookahead == 's')
        ADVANCE(125);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(160);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'm')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 189:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(190);
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead == 'd')
        ADVANCE(207);
      if (lookahead == 'e')
        ADVANCE(233);
      if (lookahead == 'f')
        ADVANCE(241);
      if (lookahead == 'g')
        ADVANCE(246);
      if (lookahead == 'l')
        ADVANCE(251);
      if (lookahead == 'm')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(275);
      if (lookahead == 'v')
        ADVANCE(278);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead == 'g')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'u')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 286:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 287:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 288:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 289:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(290);
      if (lookahead == 'b')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(320);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'k')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(351);
      if (lookahead == 'p')
        ADVANCE(365);
      if (lookahead == 's')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(388);
      if (lookahead == 'u')
        ADVANCE(398);
      if (lookahead == 'v')
        ADVANCE(408);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(291);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(292);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(293);
      if (lookahead == 'p')
        ADVANCE(298);
      if (lookahead == 's')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(295);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(65);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(321);
      if (lookahead == 'o')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'p')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead == 'u')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(381);
      if (lookahead == 's')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead == 'u')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 414:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(175);
      if (lookahead == 'd')
        ADVANCE(176);
      if (lookahead == 'e')
        ADVANCE(415);
      if (lookahead == 'i')
        ADVANCE(91);
      if (lookahead == 'k')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(177);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 416:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 417:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(290);
      if (lookahead == 'b')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(320);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'k')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead == 'p')
        ADVANCE(365);
      if (lookahead == 's')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(388);
      if (lookahead == 'u')
        ADVANCE(398);
      if (lookahead == 'v')
        ADVANCE(408);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 419:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(420);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'k')
        ADVANCE(349);
      if (lookahead == 't')
        ADVANCE(422);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 425:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'a')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'k')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'e')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'a')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 't')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'o')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 't')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'h')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'e')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'r')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 437:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(290);
      if (lookahead == 'b')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(320);
      if (lookahead == 'e')
        ADVANCE(438);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'k')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead == 'p')
        ADVANCE(365);
      if (lookahead == 's')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(388);
      if (lookahead == 'u')
        ADVANCE(398);
      if (lookahead == 'v')
        ADVANCE(408);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'n')
        ADVANCE(439);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(440);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    case 441:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(420);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'k')
        ADVANCE(349);
      if (lookahead == 't')
        ADVANCE(422);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(166);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'n')
        ADVANCE(439);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 167},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 168},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 169, .external_lex_state = 2},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 170},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 168},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 173, .external_lex_state = 2},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 168},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 168},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 168},
  [49] = {.lex_state = 168},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 174},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 169, .external_lex_state = 3},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 180},
  [67] = {.lex_state = 168},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 184},
  [71] = {.lex_state = 170},
  [72] = {.lex_state = 185},
  [73] = {.lex_state = 168},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 189},
  [77] = {.lex_state = 286},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 286},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 168},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 168},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 168},
  [87] = {.lex_state = 168},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 287},
  [90] = {.lex_state = 288},
  [91] = {.lex_state = 168},
  [92] = {.lex_state = 168},
  [93] = {.lex_state = 168},
  [94] = {.lex_state = 168},
  [95] = {.lex_state = 289},
  [96] = {.lex_state = 167},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 168},
  [112] = {.lex_state = 168},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 168},
  [116] = {.lex_state = 168},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 168},
  [120] = {.lex_state = 171},
  [121] = {.lex_state = 169, .external_lex_state = 2},
  [122] = {.lex_state = 173, .external_lex_state = 2},
  [123] = {.lex_state = 168},
  [124] = {.lex_state = 167},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 168},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 168},
  [130] = {.lex_state = 167},
  [131] = {.lex_state = 168},
  [132] = {.lex_state = 414},
  [133] = {.lex_state = 168},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 168},
  [136] = {.lex_state = 37},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 169, .external_lex_state = 2},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 168},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 416},
  [143] = {.lex_state = 168},
  [144] = {.lex_state = 168},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 168},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 168},
  [150] = {.lex_state = 189},
  [151] = {.lex_state = 168},
  [152] = {.lex_state = 170},
  [153] = {.lex_state = 184},
  [154] = {.lex_state = 170},
  [155] = {.lex_state = 168},
  [156] = {.lex_state = 168},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 167},
  [159] = {.lex_state = 167},
  [160] = {.lex_state = 167},
  [161] = {.lex_state = 167},
  [162] = {.lex_state = 167},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 286},
  [165] = {.lex_state = 286},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 170},
  [168] = {.lex_state = 286},
  [169] = {.lex_state = 286},
  [170] = {.lex_state = 168},
  [171] = {.lex_state = 168},
  [172] = {.lex_state = 168},
  [173] = {.lex_state = 288},
  [174] = {.lex_state = 171},
  [175] = {.lex_state = 168},
  [176] = {.lex_state = 168},
  [177] = {.lex_state = 417},
  [178] = {.lex_state = 168},
  [179] = {.lex_state = 167},
  [180] = {.lex_state = 419},
  [181] = {.lex_state = 167},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 35},
  [184] = {.lex_state = 35},
  [185] = {.lex_state = 35},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 35},
  [188] = {.lex_state = 425},
  [189] = {.lex_state = 168},
  [190] = {.lex_state = 35},
  [191] = {.lex_state = 35},
  [192] = {.lex_state = 35},
  [193] = {.lex_state = 35},
  [194] = {.lex_state = 35},
  [195] = {.lex_state = 437},
  [196] = {.lex_state = 168},
  [197] = {.lex_state = 35},
  [198] = {.lex_state = 286},
  [199] = {.lex_state = 168},
  [200] = {.lex_state = 168},
  [201] = {.lex_state = 35},
  [202] = {.lex_state = 168},
  [203] = {.lex_state = 168},
  [204] = {.lex_state = 168},
  [205] = {.lex_state = 168},
  [206] = {.lex_state = 168},
  [207] = {.lex_state = 37},
  [208] = {.lex_state = 35},
  [209] = {.lex_state = 168},
  [210] = {.lex_state = 37},
  [211] = {.lex_state = 173, .external_lex_state = 2},
  [212] = {.lex_state = 168},
  [213] = {.lex_state = 167},
  [214] = {.lex_state = 35},
  [215] = {.lex_state = 168},
  [216] = {.lex_state = 167},
  [217] = {.lex_state = 167},
  [218] = {.lex_state = 168},
  [219] = {.lex_state = 168},
  [220] = {.lex_state = 37},
  [221] = {.lex_state = 168},
  [222] = {.lex_state = 168},
  [223] = {.lex_state = 168},
  [224] = {.lex_state = 189},
  [225] = {.lex_state = 168},
  [226] = {.lex_state = 189},
  [227] = {.lex_state = 168},
  [228] = {.lex_state = 167},
  [229] = {.lex_state = 286},
  [230] = {.lex_state = 168},
  [231] = {.lex_state = 286},
  [232] = {.lex_state = 168},
  [233] = {.lex_state = 286},
  [234] = {.lex_state = 167},
  [235] = {.lex_state = 35},
  [236] = {.lex_state = 286},
  [237] = {.lex_state = 286},
  [238] = {.lex_state = 286},
  [239] = {.lex_state = 37},
  [240] = {.lex_state = 170},
  [241] = {.lex_state = 286},
  [242] = {.lex_state = 168},
  [243] = {.lex_state = 168},
  [244] = {.lex_state = 167},
  [245] = {.lex_state = 168},
  [246] = {.lex_state = 167},
  [247] = {.lex_state = 35},
  [248] = {.lex_state = 168},
  [249] = {.lex_state = 167},
  [250] = {.lex_state = 168},
  [251] = {.lex_state = 441},
  [252] = {.lex_state = 168},
  [253] = {.lex_state = 35},
  [254] = {.lex_state = 168},
  [255] = {.lex_state = 37},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 168},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 168},
  [260] = {.lex_state = 168},
  [261] = {.lex_state = 168},
  [262] = {.lex_state = 168},
  [263] = {.lex_state = 167},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 286},
  [266] = {.lex_state = 286},
  [267] = {.lex_state = 37},
  [268] = {.lex_state = 168},
  [269] = {.lex_state = 168},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 168},
  [272] = {.lex_state = 168},
  [273] = {.lex_state = 167},
  [274] = {.lex_state = 168},
  [275] = {.lex_state = 286},
  [276] = {.lex_state = 35},
  [277] = {.lex_state = 286},
  [278] = {.lex_state = 170},
  [279] = {.lex_state = 168},
  [280] = {.lex_state = 167},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 168},
  [283] = {.lex_state = 167},
  [284] = {.lex_state = 167},
  [285] = {.lex_state = 168},
  [286] = {.lex_state = 168},
  [287] = {.lex_state = 37},
  [288] = {.lex_state = 286},
  [289] = {.lex_state = 167},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 286},
  [292] = {.lex_state = 286},
  [293] = {.lex_state = 37},
  [294] = {.lex_state = 168},
  [295] = {.lex_state = 168},
  [296] = {.lex_state = 168},
  [297] = {.lex_state = 286},
  [298] = {.lex_state = 35},
  [299] = {.lex_state = 286},
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
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(3),
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
    [sym__common] = STATE(30),
    [sym__text_mode_common] = STATE(30),
    [sym_inline_verbatim] = STATE(30),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(30),
    [sym_text_mode] = STATE(9),
    [sym_text_mode_at_region] = STATE(30),
    [sym_parameter] = STATE(30),
    [sym_text_env] = STATE(30),
    [sym__display_math] = STATE(30),
    [sym_tex_display_math] = STATE(30),
    [sym_latex_display_math] = STATE(30),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(30),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(30),
    [sym_tex_inline_math] = STATE(30),
    [sym_latex_inline_math] = STATE(30),
    [sym_inline_math_env] = STATE(30),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(30),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(30),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(30),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(30),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(30),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(30),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(30),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(30),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(30),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(30),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(30),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(30),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(30),
    [sym_opt_text_group] = STATE(30),
    [sym_token] = STATE(30),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(30),
    [aux_sym_parameter_repeat1] = STATE(31),
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
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(19),
    [sym_text] = ACTIONS(19),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(25),
    [sym_begin_group] = ACTIONS(25),
    [sym_math_shift] = ACTIONS(25),
    [sym_alignment_tab] = ACTIONS(25),
    [sym_parameter_char] = ACTIONS(25),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(25),
    [sym_text] = ACTIONS(25),
  },
  [3] = {
    [anon_sym_verb] = ACTIONS(27),
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
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [anon_sym_makeatletter] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [4] = {
    [sym__common] = STATE(50),
    [sym__text_mode_common] = STATE(50),
    [sym_inline_verbatim] = STATE(50),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(50),
    [sym_text_mode_at_region] = STATE(50),
    [sym_parameter] = STATE(50),
    [sym_text_env] = STATE(50),
    [sym__display_math] = STATE(50),
    [sym_tex_display_math] = STATE(50),
    [sym_latex_display_math] = STATE(50),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(50),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(50),
    [sym_tex_inline_math] = STATE(50),
    [sym_latex_inline_math] = STATE(50),
    [sym_inline_math_env] = STATE(50),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(50),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(50),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(50),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(50),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(50),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(50),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(50),
    [sym_opt_text_group] = STATE(50),
    [sym_token] = STATE(50),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(50),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(63),
    [sym_text] = ACTIONS(63),
  },
  [5] = {
    [sym__common] = STATE(59),
    [sym__math_mode_common] = STATE(59),
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(54),
    [sym_parameter] = STATE(59),
    [sym_math_env] = STATE(59),
    [sym_tag] = STATE(59),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(59),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(59),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(59),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(59),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(59),
    [sym_opt_math_group] = STATE(59),
    [sym_token] = STATE(59),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(59),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(71),
    [sym_subscript] = ACTIONS(71),
    [sym_active_char] = ACTIONS(71),
    [sym_text] = ACTIONS(71),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(73),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(73),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_text] = ACTIONS(73),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(62),
    [sym__math_mode_common] = STATE(62),
    [sym__math_mode] = STATE(62),
    [sym_math_mode] = STATE(61),
    [sym_parameter] = STATE(62),
    [sym_math_env] = STATE(62),
    [sym_tag] = STATE(62),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(62),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(62),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(62),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(62),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(62),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(62),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [sym_active_char] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [11] = {
    [sym__common] = STATE(62),
    [sym__math_mode_common] = STATE(62),
    [sym__math_mode] = STATE(62),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_env] = STATE(62),
    [sym_tag] = STATE(62),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(62),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(62),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(62),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(62),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(62),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(62),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [sym_active_char] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [12] = {
    [sym__common] = STATE(62),
    [sym__math_mode_common] = STATE(62),
    [sym__math_mode] = STATE(62),
    [sym_math_mode] = STATE(64),
    [sym_parameter] = STATE(62),
    [sym_math_env] = STATE(62),
    [sym_tag] = STATE(62),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(62),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(62),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(62),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(62),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(62),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(62),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [sym_active_char] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [13] = {
    [sym__common] = STATE(62),
    [sym__math_mode_common] = STATE(62),
    [sym__math_mode] = STATE(62),
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(62),
    [sym_math_env] = STATE(62),
    [sym_tag] = STATE(62),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(62),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(62),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(62),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(62),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(62),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(62),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [sym_active_char] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [14] = {
    [sym_verbatim_end] = STATE(67),
    [sym_verbatim_text] = STATE(68),
    [sym_end_token] = STATE(69),
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(71),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
    [sym__end_of_line] = ACTIONS(87),
  },
  [15] = {
    [sym__common] = STATE(75),
    [sym__text_mode_common] = STATE(75),
    [sym_inline_verbatim] = STATE(75),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(75),
    [sym_text_mode_at_region] = STATE(75),
    [sym_parameter] = STATE(75),
    [sym_text_env] = STATE(75),
    [sym__display_math] = STATE(75),
    [sym_tex_display_math] = STATE(75),
    [sym_latex_display_math] = STATE(75),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(75),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(75),
    [sym_tex_inline_math] = STATE(75),
    [sym_latex_inline_math] = STATE(75),
    [sym_inline_math_env] = STATE(75),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(75),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(75),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(73),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(75),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(75),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(75),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(75),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(75),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(75),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(75),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(75),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(75),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(75),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(75),
    [sym_opt_text_group] = STATE(75),
    [sym_token] = STATE(75),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(75),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(91),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(91),
    [sym_text] = ACTIONS(91),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(77),
    [sym_inline_math_env_group] = STATE(78),
    [sym_verbatim_env_group] = STATE(79),
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [17] = {
    [sym_simple_text_group] = STATE(82),
    [sym_opt_text_group] = STATE(83),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [18] = {
    [sym_simple_text_group] = STATE(84),
    [sym_opt_text_group] = STATE(85),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [19] = {
    [sym_text_group] = STATE(86),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(87),
    [sym_opt_text_group] = STATE(88),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_end_group] = ACTIONS(97),
    [sym_math_shift] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
  },
  [22] = {
    [sym_escaped] = STATE(90),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
  },
  [23] = {
    [sym_text_group] = STATE(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(92),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(93),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(94),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym__common] = STATE(114),
    [sym__text_mode_common] = STATE(114),
    [sym_inline_verbatim] = STATE(114),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(114),
    [sym_text_mode_at] = STATE(98),
    [sym_parameter] = STATE(114),
    [sym_text_env_at] = STATE(114),
    [sym__display_math_at] = STATE(114),
    [sym_tex_display_math_at] = STATE(114),
    [sym_latex_display_math_at] = STATE(114),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(114),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(114),
    [sym_tex_inline_math_at] = STATE(114),
    [sym_latex_inline_math_at] = STATE(114),
    [sym_inline_math_env_at] = STATE(114),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(114),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(114),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(114),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(114),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(114),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(114),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(114),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(114),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(114),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(114),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(114),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(114),
    [sym_texttt_token] = STATE(110),
    [sym_makeatother] = STATE(111),
    [sym_makeatother_token] = STATE(112),
    [sym_text_group_at] = STATE(114),
    [sym_opt_text_group_at] = STATE(114),
    [sym_token_at] = STATE(114),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(114),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(107),
    [sym_text] = ACTIONS(107),
  },
  [28] = {
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [29] = {
    [sym__common] = STATE(117),
    [sym__text_mode_common] = STATE(117),
    [sym_inline_verbatim] = STATE(117),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(117),
    [sym_text_mode_at_region] = STATE(117),
    [sym_parameter] = STATE(117),
    [sym_text_env] = STATE(117),
    [sym__display_math] = STATE(117),
    [sym_tex_display_math] = STATE(117),
    [sym_latex_display_math] = STATE(117),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(117),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(117),
    [sym_tex_inline_math] = STATE(117),
    [sym_latex_inline_math] = STATE(117),
    [sym_inline_math_env] = STATE(117),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(117),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(117),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(117),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(117),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(117),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(117),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(117),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(117),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(117),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(117),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(117),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(117),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(117),
    [sym_opt_text_group] = STATE(117),
    [sym_token] = STATE(117),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(116),
    [aux_sym_text_mode_repeat1] = STATE(117),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
  },
  [30] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
    [sym_inline_verbatim] = STATE(118),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(118),
    [sym_text_mode_at_region] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_env] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(118),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(118),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(118),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(118),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(118),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(118),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(118),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(118),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(118),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(118),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(118),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(118),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(118),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [aux_sym_parameter_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [31] = {
    [aux_sym_parameter_repeat1] = STATE(120),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(119),
    [sym_number] = ACTIONS(121),
  },
  [32] = {
    [sym__whitespace] = STATE(121),
    [aux_sym__whitespace_repeat1] = STATE(122),
    [sym_verb_delim] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [33] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
  },
  [36] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(133),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(135),
  },
  [38] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(137),
  },
  [39] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(139),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(141),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_end_group] = ACTIONS(143),
    [sym_math_shift] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_text] = ACTIONS(143),
  },
  [42] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(145),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(147),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(149),
  },
  [45] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(151),
  },
  [46] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(153),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_text] = ACTIONS(157),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_text] = ACTIONS(159),
  },
  [50] = {
    [sym__common] = STATE(124),
    [sym__text_mode_common] = STATE(124),
    [sym_inline_verbatim] = STATE(124),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(124),
    [sym_text_mode_at_region] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(124),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(124),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(124),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(124),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(124),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(124),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(124),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(124),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(124),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(124),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(124),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(124),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [51] = {
    [anon_sym_tag] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [52] = {
    [sym__common] = STATE(127),
    [sym__math_mode_common] = STATE(127),
    [sym__math_mode] = STATE(127),
    [sym_parameter] = STATE(127),
    [sym_math_env] = STATE(127),
    [sym_tag] = STATE(127),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(127),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(127),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(127),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(127),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(127),
    [sym_opt_math_group] = STATE(127),
    [sym_token] = STATE(127),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(127),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [53] = {
    [sym__common] = STATE(59),
    [sym__math_mode_common] = STATE(59),
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(128),
    [sym_parameter] = STATE(59),
    [sym_math_env] = STATE(59),
    [sym_tag] = STATE(59),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(59),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(59),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(59),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(59),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(59),
    [sym_opt_math_group] = STATE(59),
    [sym_token] = STATE(59),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(59),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(71),
    [sym_subscript] = ACTIONS(71),
    [sym_active_char] = ACTIONS(71),
    [sym_text] = ACTIONS(71),
  },
  [54] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(171),
  },
  [55] = {
    [sym_math_text_group] = STATE(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(173),
  },
  [56] = {
    [sym__common] = STATE(134),
    [sym__math_mode_common] = STATE(134),
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_env] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(134),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(133),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(134),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(134),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(134),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(134),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_text] = ACTIONS(177),
  },
  [57] = {
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [58] = {
    [sym__common] = STATE(136),
    [sym__math_mode_common] = STATE(136),
    [sym__math_mode] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_math_env] = STATE(136),
    [sym_tag] = STATE(136),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(136),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(136),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(136),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(136),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(136),
    [sym_opt_math_group] = STATE(136),
    [sym_token] = STATE(136),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(135),
    [aux_sym_math_mode_repeat1] = STATE(136),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(179),
  },
  [59] = {
    [sym__common] = STATE(137),
    [sym__math_mode_common] = STATE(137),
    [sym__math_mode] = STATE(137),
    [sym_parameter] = STATE(137),
    [sym_math_env] = STATE(137),
    [sym_tag] = STATE(137),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(137),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(137),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(137),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(137),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(137),
    [sym_opt_math_group] = STATE(137),
    [sym_token] = STATE(137),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(137),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_text] = ACTIONS(183),
  },
  [60] = {
    [sym_verb_body] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [61] = {
    [sym_end_display_math] = STATE(140),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(187),
  },
  [62] = {
    [sym__common] = STATE(141),
    [sym__math_mode_common] = STATE(141),
    [sym__math_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_math_env] = STATE(141),
    [sym_tag] = STATE(141),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(141),
    [sym_opt_math_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [63] = {
    [sym_end_inline_math] = STATE(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(191),
  },
  [64] = {
    [sym_display_math_end] = STATE(144),
    [sym_end_token] = STATE(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [65] = {
    [sym_inline_math_end] = STATE(146),
    [sym_end_token] = STATE(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [66] = {
    [anon_sym_end] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(195),
    [sym_begin_group] = ACTIONS(195),
    [sym_end_group] = ACTIONS(195),
    [sym_math_shift] = ACTIONS(195),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [68] = {
    [sym_verbatim_end] = STATE(149),
    [sym_end_token] = STATE(69),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [69] = {
    [sym_verbatim_env_group] = STATE(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(197),
  },
  [70] = {
    [aux_sym_verbatim_text_repeat1] = STATE(153),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(201),
  },
  [71] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(154),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(203),
    [sym__end_of_line] = ACTIONS(205),
  },
  [72] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(207),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [anon_sym_makeatletter] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [74] = {
    [sym_simple_text_group] = STATE(155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [75] = {
    [sym__common] = STATE(157),
    [sym__text_mode_common] = STATE(157),
    [sym_inline_verbatim] = STATE(157),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(157),
    [sym_text_mode_at_region] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_text_env] = STATE(157),
    [sym__display_math] = STATE(157),
    [sym_tex_display_math] = STATE(157),
    [sym_latex_display_math] = STATE(157),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(157),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(157),
    [sym_tex_inline_math] = STATE(157),
    [sym_latex_inline_math] = STATE(157),
    [sym_inline_math_env] = STATE(157),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(157),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(157),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(156),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(157),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(157),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(157),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(157),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(157),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(157),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(157),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(157),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(157),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(157),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(157),
    [sym_opt_text_group] = STATE(157),
    [sym_token] = STATE(157),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(157),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [76] = {
    [sym_display_math_env_name] = ACTIONS(213),
    [sym_inline_math_env_name] = ACTIONS(215),
    [sym_verbatim_env_name] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(219),
  },
  [77] = {
    [sym_text_group] = STATE(164),
    [sym_opt_text_group] = STATE(165),
    [sym_begin_opt] = STATE(166),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(221),
    [sym__end_of_line] = ACTIONS(223),
  },
  [78] = {
    [anon_sym_LBRACK] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [79] = {
    [sym_text_group] = STATE(168),
    [sym_opt_text_group] = STATE(169),
    [sym_begin_opt] = STATE(166),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(221),
    [sym__end_of_line] = ACTIONS(227),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [81] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(231),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(233),
    [sym_begin_group] = ACTIONS(233),
    [sym_end_group] = ACTIONS(233),
    [sym_math_shift] = ACTIONS(233),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_text] = ACTIONS(233),
  },
  [83] = {
    [sym_simple_text_group] = STATE(170),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(235),
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
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_text] = ACTIONS(235),
  },
  [85] = {
    [sym_simple_text_group] = STATE(171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_end_group] = ACTIONS(237),
    [sym_math_shift] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_text] = ACTIONS(237),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(239),
    [sym_begin_group] = ACTIONS(239),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(239),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(239),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(239),
    [sym_active_char] = ACTIONS(239),
    [sym_text] = ACTIONS(239),
  },
  [88] = {
    [sym_text_group] = STATE(172),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [89] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_end_group] = ACTIONS(245),
    [sym_math_shift] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(247),
    [sym_end_group] = ACTIONS(247),
    [sym_math_shift] = ACTIONS(247),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(247),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(247),
    [sym_active_char] = ACTIONS(247),
    [sym_text] = ACTIONS(247),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(249),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(249),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_text] = ACTIONS(249),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(251),
    [sym_begin_group] = ACTIONS(251),
    [sym_end_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(251),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(251),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(251),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [95] = {
    [anon_sym_verb] = ACTIONS(27),
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
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [anon_sym_makeatother] = ACTIONS(253),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(255),
  },
  [96] = {
    [sym__common] = STATE(179),
    [sym__text_mode_common] = STATE(179),
    [sym_inline_verbatim] = STATE(179),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(179),
    [sym_parameter] = STATE(179),
    [sym_text_env_at] = STATE(179),
    [sym__display_math_at] = STATE(179),
    [sym_tex_display_math_at] = STATE(179),
    [sym_latex_display_math_at] = STATE(179),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(179),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(179),
    [sym_tex_inline_math_at] = STATE(179),
    [sym_latex_inline_math_at] = STATE(179),
    [sym_inline_math_env_at] = STATE(179),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(179),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(179),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(179),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(179),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(179),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(179),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(179),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(179),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(179),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(179),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(179),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(179),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(179),
    [sym_opt_text_group_at] = STATE(179),
    [sym_token_at] = STATE(179),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(179),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(259),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [97] = {
    [sym__common] = STATE(187),
    [sym__math_mode_common] = STATE(187),
    [sym__math_mode_at] = STATE(187),
    [sym_math_mode_at] = STATE(183),
    [sym_parameter] = STATE(187),
    [sym_math_env_at] = STATE(187),
    [sym_tag_at] = STATE(187),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(187),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(187),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(187),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(187),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(187),
    [sym_opt_math_group_at] = STATE(187),
    [sym_token_at] = STATE(187),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(187),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(267),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [98] = {
    [sym_makeatother] = STATE(189),
    [sym_makeatother_token] = STATE(112),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(271),
  },
  [99] = {
    [sym__common] = STATE(191),
    [sym__math_mode_common] = STATE(191),
    [sym__math_mode_at] = STATE(191),
    [sym_math_mode_at] = STATE(190),
    [sym_parameter] = STATE(191),
    [sym_math_env_at] = STATE(191),
    [sym_tag_at] = STATE(191),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(191),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(191),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(191),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(191),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(191),
    [sym_opt_math_group_at] = STATE(191),
    [sym_token_at] = STATE(191),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(191),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [100] = {
    [sym__common] = STATE(191),
    [sym__math_mode_common] = STATE(191),
    [sym__math_mode_at] = STATE(191),
    [sym_math_mode_at] = STATE(192),
    [sym_parameter] = STATE(191),
    [sym_math_env_at] = STATE(191),
    [sym_tag_at] = STATE(191),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(191),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(191),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(191),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(191),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(191),
    [sym_opt_math_group_at] = STATE(191),
    [sym_token_at] = STATE(191),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(191),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [101] = {
    [sym__common] = STATE(191),
    [sym__math_mode_common] = STATE(191),
    [sym__math_mode_at] = STATE(191),
    [sym_math_mode_at] = STATE(193),
    [sym_parameter] = STATE(191),
    [sym_math_env_at] = STATE(191),
    [sym_tag_at] = STATE(191),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(191),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(191),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(191),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(191),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(191),
    [sym_opt_math_group_at] = STATE(191),
    [sym_token_at] = STATE(191),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(191),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [102] = {
    [sym__common] = STATE(191),
    [sym__math_mode_common] = STATE(191),
    [sym__math_mode_at] = STATE(191),
    [sym_math_mode_at] = STATE(194),
    [sym_parameter] = STATE(191),
    [sym_math_env_at] = STATE(191),
    [sym_tag_at] = STATE(191),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(191),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(191),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(191),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(191),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(191),
    [sym_opt_math_group_at] = STATE(191),
    [sym_token_at] = STATE(191),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(191),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [103] = {
    [sym__common] = STATE(197),
    [sym__text_mode_common] = STATE(197),
    [sym_inline_verbatim] = STATE(197),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env_at] = STATE(197),
    [sym__display_math_at] = STATE(197),
    [sym_tex_display_math_at] = STATE(197),
    [sym_latex_display_math_at] = STATE(197),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(197),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(197),
    [sym_tex_inline_math_at] = STATE(197),
    [sym_latex_inline_math_at] = STATE(197),
    [sym_inline_math_env_at] = STATE(197),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_end] = STATE(196),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(197),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(197),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(197),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(197),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(197),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(197),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(197),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(197),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(197),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(197),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(197),
    [sym_opt_text_group_at] = STATE(197),
    [sym_token_at] = STATE(197),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(197),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [104] = {
    [sym_display_math_env_group] = STATE(198),
    [sym_inline_math_env_group] = STATE(78),
    [sym_verbatim_env_group] = STATE(79),
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [105] = {
    [sym_text_group_at] = STATE(199),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [106] = {
    [sym_text_group_at] = STATE(200),
    [sym_opt_text_group_at] = STATE(201),
    [sym_begin_opt] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [107] = {
    [sym_text_group_at] = STATE(202),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [108] = {
    [sym_text_group_at] = STATE(203),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [109] = {
    [sym_text_group_at] = STATE(204),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [110] = {
    [sym_text_group_at] = STATE(205),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(279),
    [sym_end_group] = ACTIONS(279),
    [sym_math_shift] = ACTIONS(279),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(279),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [sym_text] = ACTIONS(279),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(281),
    [sym_begin_group] = ACTIONS(281),
    [sym_end_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(281),
    [sym_alignment_tab] = ACTIONS(281),
    [sym_parameter_char] = ACTIONS(281),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(281),
    [sym_text] = ACTIONS(281),
  },
  [113] = {
    [sym__common] = STATE(207),
    [sym__text_mode_common] = STATE(207),
    [sym_inline_verbatim] = STATE(207),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_text_env_at] = STATE(207),
    [sym__display_math_at] = STATE(207),
    [sym_tex_display_math_at] = STATE(207),
    [sym_latex_display_math_at] = STATE(207),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(207),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(207),
    [sym_tex_inline_math_at] = STATE(207),
    [sym_latex_inline_math_at] = STATE(207),
    [sym_inline_math_env_at] = STATE(207),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(207),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(207),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(207),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(207),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(207),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(207),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(207),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(207),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(207),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(207),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(207),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(207),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(207),
    [sym_opt_text_group_at] = STATE(207),
    [sym_token_at] = STATE(207),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(206),
    [aux_sym_text_mode_at_repeat1] = STATE(207),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
  },
  [114] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env_at] = STATE(208),
    [sym__display_math_at] = STATE(208),
    [sym_tex_display_math_at] = STATE(208),
    [sym_latex_display_math_at] = STATE(208),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(208),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(208),
    [sym_tex_inline_math_at] = STATE(208),
    [sym_latex_inline_math_at] = STATE(208),
    [sym_inline_math_env_at] = STATE(208),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(208),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(208),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(208),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(208),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(208),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(208),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(208),
    [sym_opt_text_group_at] = STATE(208),
    [sym_token_at] = STATE(208),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(287),
    [sym_text] = ACTIONS(287),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(289),
    [sym_begin_group] = ACTIONS(289),
    [sym_end_group] = ACTIONS(289),
    [sym_math_shift] = ACTIONS(289),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(289),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [sym_text] = ACTIONS(289),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(291),
    [sym_begin_group] = ACTIONS(291),
    [sym_end_group] = ACTIONS(291),
    [sym_math_shift] = ACTIONS(291),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [117] = {
    [sym__common] = STATE(210),
    [sym__text_mode_common] = STATE(210),
    [sym_inline_verbatim] = STATE(210),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(210),
    [sym_text_mode_at_region] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_text_env] = STATE(210),
    [sym__display_math] = STATE(210),
    [sym_tex_display_math] = STATE(210),
    [sym_latex_display_math] = STATE(210),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(210),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(210),
    [sym_tex_inline_math] = STATE(210),
    [sym_latex_inline_math] = STATE(210),
    [sym_inline_math_env] = STATE(210),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(210),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(210),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(210),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(210),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(210),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(210),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(210),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(210),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(210),
    [sym_opt_text_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(209),
    [aux_sym_text_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(293),
    [sym_text] = ACTIONS(293),
  },
  [118] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
    [sym_inline_verbatim] = STATE(118),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(118),
    [sym_text_mode_at_region] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_env] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(118),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(118),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(118),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(118),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(118),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(118),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(118),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(118),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(118),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(118),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(118),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(118),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(118),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [aux_sym_parameter_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(306),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(318),
    [sym_begin_group] = ACTIONS(318),
    [sym_end_group] = ACTIONS(318),
    [sym_math_shift] = ACTIONS(318),
    [sym_alignment_tab] = ACTIONS(318),
    [sym_parameter_char] = ACTIONS(318),
    [sym_superscript] = ACTIONS(318),
    [sym_subscript] = ACTIONS(318),
    [sym_active_char] = ACTIONS(318),
    [sym_text] = ACTIONS(318),
  },
  [120] = {
    [aux_sym_parameter_repeat1] = STATE(120),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(320),
    [sym_number] = ACTIONS(323),
  },
  [121] = {
    [sym_verb_delim] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [122] = {
    [aux_sym__whitespace_repeat1] = STATE(211),
    [sym_verb_delim] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [124] = {
    [sym__common] = STATE(124),
    [sym__text_mode_common] = STATE(124),
    [sym_inline_verbatim] = STATE(124),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(124),
    [sym_text_mode_at_region] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(124),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(124),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(124),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(124),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(124),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(124),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(124),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(124),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(124),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(124),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(124),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(124),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(295),
    [sym_math_shift] = ACTIONS(306),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [125] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(336),
  },
  [126] = {
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(338),
    [sym_begin_group] = ACTIONS(338),
    [sym_end_group] = ACTIONS(338),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(338),
    [sym_parameter_char] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [sym_active_char] = ACTIONS(338),
    [sym_text] = ACTIONS(338),
  },
  [127] = {
    [sym__common] = STATE(213),
    [sym__math_mode_common] = STATE(213),
    [sym__math_mode] = STATE(213),
    [sym_parameter] = STATE(213),
    [sym_math_env] = STATE(213),
    [sym_tag] = STATE(213),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(213),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(213),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(213),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(213),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(213),
    [sym_opt_math_group] = STATE(213),
    [sym_token] = STATE(213),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(213),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(340),
    [sym_alignment_tab] = ACTIONS(342),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(342),
    [sym_subscript] = ACTIONS(342),
    [sym_active_char] = ACTIONS(342),
    [sym_text] = ACTIONS(342),
  },
  [128] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(344),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(346),
    [sym_begin_group] = ACTIONS(346),
    [sym_end_group] = ACTIONS(346),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(346),
    [sym_parameter_char] = ACTIONS(346),
    [sym_superscript] = ACTIONS(346),
    [sym_subscript] = ACTIONS(346),
    [sym_active_char] = ACTIONS(346),
    [sym_text] = ACTIONS(346),
  },
  [130] = {
    [sym__common] = STATE(217),
    [sym__text_mode_common] = STATE(217),
    [sym_inline_verbatim] = STATE(217),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(217),
    [sym_text_mode] = STATE(216),
    [sym_text_mode_at_region] = STATE(217),
    [sym_parameter] = STATE(217),
    [sym_text_env] = STATE(217),
    [sym__display_math] = STATE(217),
    [sym_tex_display_math] = STATE(217),
    [sym_latex_display_math] = STATE(217),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(217),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(217),
    [sym_tex_inline_math] = STATE(217),
    [sym_latex_inline_math] = STATE(217),
    [sym_inline_math_env] = STATE(217),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(217),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(217),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(217),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(217),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(217),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(217),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(217),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(217),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(217),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(217),
    [sym_opt_text_group] = STATE(217),
    [sym_token] = STATE(217),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(348),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(350),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(350),
    [sym_text] = ACTIONS(350),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(352),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(352),
    [sym_begin_group] = ACTIONS(352),
    [sym_end_group] = ACTIONS(352),
    [sym_math_shift] = ACTIONS(352),
    [sym_alignment_tab] = ACTIONS(352),
    [sym_parameter_char] = ACTIONS(352),
    [sym_superscript] = ACTIONS(352),
    [sym_subscript] = ACTIONS(352),
    [sym_active_char] = ACTIONS(352),
    [sym_text] = ACTIONS(352),
  },
  [132] = {
    [anon_sym_tag] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(207),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(354),
    [sym_begin_group] = ACTIONS(354),
    [sym_end_group] = ACTIONS(354),
    [sym_math_shift] = ACTIONS(354),
    [sym_alignment_tab] = ACTIONS(354),
    [sym_parameter_char] = ACTIONS(354),
    [sym_superscript] = ACTIONS(354),
    [sym_subscript] = ACTIONS(354),
    [sym_active_char] = ACTIONS(354),
    [sym_text] = ACTIONS(354),
  },
  [134] = {
    [sym__common] = STATE(141),
    [sym__math_mode_common] = STATE(141),
    [sym__math_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_math_env] = STATE(141),
    [sym_tag] = STATE(141),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(218),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(141),
    [sym_opt_math_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(356),
    [sym_end_group] = ACTIONS(356),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(356),
    [sym_parameter_char] = ACTIONS(356),
    [sym_superscript] = ACTIONS(356),
    [sym_subscript] = ACTIONS(356),
    [sym_active_char] = ACTIONS(356),
    [sym_text] = ACTIONS(356),
  },
  [136] = {
    [sym__common] = STATE(220),
    [sym__math_mode_common] = STATE(220),
    [sym__math_mode] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_math_env] = STATE(220),
    [sym_tag] = STATE(220),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(220),
    [sym_opt_math_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(219),
    [aux_sym_math_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(358),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(358),
    [sym_subscript] = ACTIONS(358),
    [sym_active_char] = ACTIONS(358),
    [sym_text] = ACTIONS(358),
  },
  [137] = {
    [sym__common] = STATE(137),
    [sym__math_mode_common] = STATE(137),
    [sym__math_mode] = STATE(137),
    [sym_parameter] = STATE(137),
    [sym_math_env] = STATE(137),
    [sym_tag] = STATE(137),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(137),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(137),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(137),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(137),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(137),
    [sym_opt_math_group] = STATE(137),
    [sym_token] = STATE(137),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(137),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(366),
    [sym_math_shift] = ACTIONS(369),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(374),
    [sym_superscript] = ACTIONS(371),
    [sym_subscript] = ACTIONS(371),
    [sym_active_char] = ACTIONS(371),
    [sym_text] = ACTIONS(371),
  },
  [138] = {
    [sym_verb_delim] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [139] = {
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [141] = {
    [sym__common] = STATE(141),
    [sym__math_mode_common] = STATE(141),
    [sym__math_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_math_env] = STATE(141),
    [sym_tag] = STATE(141),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(141),
    [sym_opt_math_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(374),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(388),
    [sym_end_group] = ACTIONS(388),
    [sym_math_shift] = ACTIONS(388),
    [sym_alignment_tab] = ACTIONS(388),
    [sym_parameter_char] = ACTIONS(388),
    [sym_superscript] = ACTIONS(388),
    [sym_subscript] = ACTIONS(388),
    [sym_active_char] = ACTIONS(388),
    [sym_text] = ACTIONS(388),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(390),
    [sym_begin_group] = ACTIONS(390),
    [sym_end_group] = ACTIONS(390),
    [sym_math_shift] = ACTIONS(390),
    [sym_alignment_tab] = ACTIONS(390),
    [sym_parameter_char] = ACTIONS(390),
    [sym_superscript] = ACTIONS(390),
    [sym_subscript] = ACTIONS(390),
    [sym_active_char] = ACTIONS(390),
    [sym_text] = ACTIONS(390),
  },
  [145] = {
    [sym_display_math_env_group] = STATE(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(392),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(394),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(394),
    [sym_begin_group] = ACTIONS(394),
    [sym_end_group] = ACTIONS(394),
    [sym_math_shift] = ACTIONS(394),
    [sym_alignment_tab] = ACTIONS(394),
    [sym_parameter_char] = ACTIONS(394),
    [sym_superscript] = ACTIONS(394),
    [sym_subscript] = ACTIONS(394),
    [sym_active_char] = ACTIONS(394),
    [sym_text] = ACTIONS(394),
  },
  [147] = {
    [sym_inline_math_env_group] = STATE(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(396),
  },
  [148] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(398),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(400),
    [sym_begin_group] = ACTIONS(400),
    [sym_end_group] = ACTIONS(400),
    [sym_math_shift] = ACTIONS(400),
    [sym_alignment_tab] = ACTIONS(400),
    [sym_parameter_char] = ACTIONS(400),
    [sym_superscript] = ACTIONS(400),
    [sym_subscript] = ACTIONS(400),
    [sym_active_char] = ACTIONS(400),
    [sym_text] = ACTIONS(400),
  },
  [150] = {
    [sym_verbatim_env_name] = ACTIONS(402),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(404),
    [sym_begin_group] = ACTIONS(404),
    [sym_end_group] = ACTIONS(404),
    [sym_math_shift] = ACTIONS(404),
    [sym_alignment_tab] = ACTIONS(404),
    [sym_parameter_char] = ACTIONS(404),
    [sym_superscript] = ACTIONS(404),
    [sym_subscript] = ACTIONS(404),
    [sym_active_char] = ACTIONS(404),
    [sym_text] = ACTIONS(404),
  },
  [152] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(406),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(408),
    [sym__end_of_line] = ACTIONS(408),
  },
  [153] = {
    [aux_sym_verbatim_text_repeat1] = STATE(153),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(410),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(413),
  },
  [154] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(154),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(408),
    [sym__end_of_line] = ACTIONS(418),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_end_group] = ACTIONS(421),
    [sym_math_shift] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(423),
    [sym_end_group] = ACTIONS(423),
    [sym_math_shift] = ACTIONS(423),
    [sym_alignment_tab] = ACTIONS(423),
    [sym_parameter_char] = ACTIONS(423),
    [sym_superscript] = ACTIONS(423),
    [sym_subscript] = ACTIONS(423),
    [sym_active_char] = ACTIONS(423),
    [sym_text] = ACTIONS(423),
  },
  [157] = {
    [sym__common] = STATE(157),
    [sym__text_mode_common] = STATE(157),
    [sym_inline_verbatim] = STATE(157),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(157),
    [sym_text_mode_at_region] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_text_env] = STATE(157),
    [sym__display_math] = STATE(157),
    [sym_tex_display_math] = STATE(157),
    [sym_latex_display_math] = STATE(157),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(157),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(157),
    [sym_tex_inline_math] = STATE(157),
    [sym_latex_inline_math] = STATE(157),
    [sym_inline_math_env] = STATE(157),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(157),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(157),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(157),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(157),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(157),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(157),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(157),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(157),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(157),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(157),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(157),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(157),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(157),
    [sym_opt_text_group] = STATE(157),
    [sym_token] = STATE(157),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(157),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(306),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [158] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(428),
  },
  [159] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(430),
  },
  [160] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(432),
  },
  [161] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(434),
  },
  [162] = {
    [sym__common] = STATE(234),
    [sym__text_mode_common] = STATE(234),
    [sym_inline_verbatim] = STATE(234),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(234),
    [sym_text_mode_at_region] = STATE(234),
    [sym_parameter] = STATE(234),
    [sym_text_env] = STATE(234),
    [sym__display_math] = STATE(234),
    [sym_tex_display_math] = STATE(234),
    [sym_latex_display_math] = STATE(234),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(234),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(234),
    [sym_tex_inline_math] = STATE(234),
    [sym_latex_inline_math] = STATE(234),
    [sym_inline_math_env] = STATE(234),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(234),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(234),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(234),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(234),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(234),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(234),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(234),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(234),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(234),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(234),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(234),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(234),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(234),
    [sym_opt_text_group] = STATE(234),
    [sym_token] = STATE(234),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(234),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(436),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(438),
    [sym_text] = ACTIONS(438),
  },
  [163] = {
    [anon_sym_LBRACK] = ACTIONS(440),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(440),
    [sym_begin_group] = ACTIONS(440),
    [sym_alignment_tab] = ACTIONS(440),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(440),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(440),
    [sym_text] = ACTIONS(440),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(442),
  },
  [165] = {
    [sym_text_group] = STATE(236),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(221),
    [sym__end_of_line] = ACTIONS(442),
  },
  [166] = {
    [sym__common] = STATE(239),
    [sym__text_mode_common] = STATE(239),
    [sym_inline_verbatim] = STATE(239),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(239),
    [sym_text_mode_at_region] = STATE(239),
    [sym_parameter] = STATE(239),
    [sym_text_env] = STATE(239),
    [sym__display_math] = STATE(239),
    [sym_tex_display_math] = STATE(239),
    [sym_latex_display_math] = STATE(239),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(239),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(239),
    [sym_tex_inline_math] = STATE(239),
    [sym_latex_inline_math] = STATE(239),
    [sym_inline_math_env] = STATE(239),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(239),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(239),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(239),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(239),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(239),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(239),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(239),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(239),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(239),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(239),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(239),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(239),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(239),
    [sym_opt_text_group] = STATE(239),
    [sym_token] = STATE(239),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(238),
    [aux_sym_text_mode_repeat1] = STATE(239),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(446),
    [sym_text] = ACTIONS(446),
  },
  [167] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(450),
    [sym__end_of_line] = ACTIONS(450),
  },
  [168] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(452),
  },
  [169] = {
    [sym_text_group] = STATE(241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(221),
    [sym__end_of_line] = ACTIONS(452),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(454),
    [sym_begin_group] = ACTIONS(454),
    [sym_end_group] = ACTIONS(454),
    [sym_math_shift] = ACTIONS(454),
    [sym_alignment_tab] = ACTIONS(454),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(454),
    [sym_subscript] = ACTIONS(454),
    [sym_active_char] = ACTIONS(454),
    [sym_text] = ACTIONS(454),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(456),
    [sym_end_group] = ACTIONS(456),
    [sym_math_shift] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(456),
    [sym_parameter_char] = ACTIONS(456),
    [sym_superscript] = ACTIONS(456),
    [sym_subscript] = ACTIONS(456),
    [sym_active_char] = ACTIONS(456),
    [sym_text] = ACTIONS(456),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(458),
    [sym_begin_group] = ACTIONS(458),
    [sym_end_group] = ACTIONS(458),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(458),
    [sym_parameter_char] = ACTIONS(458),
    [sym_superscript] = ACTIONS(458),
    [sym_subscript] = ACTIONS(458),
    [sym_active_char] = ACTIONS(458),
    [sym_text] = ACTIONS(458),
  },
  [173] = {
    [anon_sym_EQ] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [174] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(460),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(462),
    [sym_begin_group] = ACTIONS(462),
    [sym_end_group] = ACTIONS(462),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(462),
    [sym_subscript] = ACTIONS(462),
    [sym_active_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [176] = {
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(464),
    [sym_begin_group] = ACTIONS(464),
    [sym_end_group] = ACTIONS(464),
    [sym_math_shift] = ACTIONS(464),
    [sym_alignment_tab] = ACTIONS(464),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(464),
    [sym_active_char] = ACTIONS(464),
    [sym_text] = ACTIONS(464),
  },
  [177] = {
    [anon_sym_verb] = ACTIONS(27),
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
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(255),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(466),
    [sym_begin_group] = ACTIONS(466),
    [sym_end_group] = ACTIONS(466),
    [sym_math_shift] = ACTIONS(466),
    [sym_alignment_tab] = ACTIONS(466),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(466),
    [sym_subscript] = ACTIONS(466),
    [sym_active_char] = ACTIONS(466),
    [sym_text] = ACTIONS(466),
  },
  [179] = {
    [sym__common] = STATE(244),
    [sym__text_mode_common] = STATE(244),
    [sym_inline_verbatim] = STATE(244),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_text_env_at] = STATE(244),
    [sym__display_math_at] = STATE(244),
    [sym_tex_display_math_at] = STATE(244),
    [sym_latex_display_math_at] = STATE(244),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(244),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(244),
    [sym_tex_inline_math_at] = STATE(244),
    [sym_latex_inline_math_at] = STATE(244),
    [sym_inline_math_env_at] = STATE(244),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(244),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(244),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(244),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(244),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(244),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(244),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(244),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(244),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(244),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(244),
    [sym_opt_text_group_at] = STATE(244),
    [sym_token_at] = STATE(244),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(244),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(468),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [180] = {
    [anon_sym_tag] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(255),
  },
  [181] = {
    [sym__common] = STATE(246),
    [sym__math_mode_common] = STATE(246),
    [sym__math_mode_at] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_math_env_at] = STATE(246),
    [sym_tag_at] = STATE(246),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(246),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(246),
    [sym_opt_math_group_at] = STATE(246),
    [sym_token_at] = STATE(246),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_end_group] = ACTIONS(472),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_text] = ACTIONS(474),
  },
  [182] = {
    [sym__common] = STATE(187),
    [sym__math_mode_common] = STATE(187),
    [sym__math_mode_at] = STATE(187),
    [sym_math_mode_at] = STATE(247),
    [sym_parameter] = STATE(187),
    [sym_math_env_at] = STATE(187),
    [sym_tag_at] = STATE(187),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(187),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(187),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(187),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(187),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(187),
    [sym_opt_math_group_at] = STATE(187),
    [sym_token_at] = STATE(187),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(187),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [183] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(476),
  },
  [184] = {
    [sym_math_text_group_at] = STATE(250),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(478),
  },
  [185] = {
    [sym__common] = STATE(253),
    [sym__math_mode_common] = STATE(253),
    [sym__math_mode_at] = STATE(253),
    [sym_parameter] = STATE(253),
    [sym_math_env_at] = STATE(253),
    [sym_tag_at] = STATE(253),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(253),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(252),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(253),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(253),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(253),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(253),
    [sym_opt_math_group_at] = STATE(253),
    [sym_token_at] = STATE(253),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(253),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(482),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(482),
    [sym_subscript] = ACTIONS(482),
    [sym_active_char] = ACTIONS(482),
    [sym_text] = ACTIONS(482),
  },
  [186] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env_at] = STATE(255),
    [sym_tag_at] = STATE(255),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(255),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(255),
    [sym_opt_math_group_at] = STATE(255),
    [sym_token_at] = STATE(255),
    [sym_begin_opt] = STATE(186),
    [sym_end_opt] = STATE(254),
    [aux_sym_math_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(484),
    [sym_active_char] = ACTIONS(484),
    [sym_text] = ACTIONS(484),
  },
  [187] = {
    [sym__common] = STATE(256),
    [sym__math_mode_common] = STATE(256),
    [sym__math_mode_at] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_math_env_at] = STATE(256),
    [sym_tag_at] = STATE(256),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(256),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(256),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(256),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(256),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(256),
    [sym_opt_math_group_at] = STATE(256),
    [sym_token_at] = STATE(256),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(256),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(486),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_active_char] = ACTIONS(488),
    [sym_text] = ACTIONS(488),
  },
  [188] = {
    [anon_sym_makeatother] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(492),
    [sym_begin_group] = ACTIONS(492),
    [sym_end_group] = ACTIONS(492),
    [sym_math_shift] = ACTIONS(492),
    [sym_alignment_tab] = ACTIONS(492),
    [sym_parameter_char] = ACTIONS(492),
    [sym_superscript] = ACTIONS(492),
    [sym_subscript] = ACTIONS(492),
    [sym_active_char] = ACTIONS(492),
    [sym_text] = ACTIONS(492),
  },
  [190] = {
    [sym_end_display_math] = STATE(257),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(187),
  },
  [191] = {
    [sym__common] = STATE(258),
    [sym__math_mode_common] = STATE(258),
    [sym__math_mode_at] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_env_at] = STATE(258),
    [sym_tag_at] = STATE(258),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(258),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(258),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(258),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(258),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(258),
    [sym_opt_math_group_at] = STATE(258),
    [sym_token_at] = STATE(258),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(258),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_text] = ACTIONS(494),
  },
  [192] = {
    [sym_end_inline_math] = STATE(259),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(191),
  },
  [193] = {
    [sym_display_math_end] = STATE(260),
    [sym_end_token] = STATE(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [194] = {
    [sym_inline_math_end] = STATE(261),
    [sym_end_token] = STATE(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [195] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(207),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(255),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_RBRACK] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(496),
    [sym_end_group] = ACTIONS(496),
    [sym_math_shift] = ACTIONS(496),
    [sym_alignment_tab] = ACTIONS(496),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(496),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(496),
    [sym_text] = ACTIONS(496),
  },
  [197] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env_at] = STATE(208),
    [sym__display_math_at] = STATE(208),
    [sym_tex_display_math_at] = STATE(208),
    [sym_latex_display_math_at] = STATE(208),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(208),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(208),
    [sym_tex_inline_math_at] = STATE(208),
    [sym_latex_inline_math_at] = STATE(208),
    [sym_inline_math_env_at] = STATE(208),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_end] = STATE(262),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(208),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(208),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(208),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(208),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(208),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(208),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(208),
    [sym_opt_text_group_at] = STATE(208),
    [sym_token_at] = STATE(208),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(287),
    [sym_text] = ACTIONS(287),
  },
  [198] = {
    [sym_text_group_at] = STATE(265),
    [sym_opt_text_group_at] = STATE(266),
    [sym_begin_opt] = STATE(267),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(498),
    [sym__end_of_line] = ACTIONS(500),
  },
  [199] = {
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
    [sym_superscript] = ACTIONS(502),
    [sym_subscript] = ACTIONS(502),
    [sym_active_char] = ACTIONS(502),
    [sym_text] = ACTIONS(502),
  },
  [200] = {
    [anon_sym_LBRACK] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(504),
    [sym_end_group] = ACTIONS(504),
    [sym_math_shift] = ACTIONS(504),
    [sym_alignment_tab] = ACTIONS(504),
    [sym_parameter_char] = ACTIONS(504),
    [sym_superscript] = ACTIONS(504),
    [sym_subscript] = ACTIONS(504),
    [sym_active_char] = ACTIONS(504),
    [sym_text] = ACTIONS(504),
  },
  [201] = {
    [sym_text_group_at] = STATE(268),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [202] = {
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(506),
    [sym_begin_group] = ACTIONS(506),
    [sym_end_group] = ACTIONS(506),
    [sym_math_shift] = ACTIONS(506),
    [sym_alignment_tab] = ACTIONS(506),
    [sym_parameter_char] = ACTIONS(506),
    [sym_superscript] = ACTIONS(506),
    [sym_subscript] = ACTIONS(506),
    [sym_active_char] = ACTIONS(506),
    [sym_text] = ACTIONS(506),
  },
  [203] = {
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(508),
    [sym_begin_group] = ACTIONS(508),
    [sym_end_group] = ACTIONS(508),
    [sym_math_shift] = ACTIONS(508),
    [sym_alignment_tab] = ACTIONS(508),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(508),
    [sym_subscript] = ACTIONS(508),
    [sym_active_char] = ACTIONS(508),
    [sym_text] = ACTIONS(508),
  },
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(510),
    [sym_begin_group] = ACTIONS(510),
    [sym_end_group] = ACTIONS(510),
    [sym_math_shift] = ACTIONS(510),
    [sym_alignment_tab] = ACTIONS(510),
    [sym_parameter_char] = ACTIONS(510),
    [sym_superscript] = ACTIONS(510),
    [sym_subscript] = ACTIONS(510),
    [sym_active_char] = ACTIONS(510),
    [sym_text] = ACTIONS(510),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_RBRACK] = ACTIONS(512),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(512),
    [sym_begin_group] = ACTIONS(512),
    [sym_end_group] = ACTIONS(512),
    [sym_math_shift] = ACTIONS(512),
    [sym_alignment_tab] = ACTIONS(512),
    [sym_parameter_char] = ACTIONS(512),
    [sym_superscript] = ACTIONS(512),
    [sym_subscript] = ACTIONS(512),
    [sym_active_char] = ACTIONS(512),
    [sym_text] = ACTIONS(512),
  },
  [206] = {
    [anon_sym_LBRACK] = ACTIONS(514),
    [anon_sym_RBRACK] = ACTIONS(514),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(514),
    [sym_begin_group] = ACTIONS(514),
    [sym_end_group] = ACTIONS(514),
    [sym_math_shift] = ACTIONS(514),
    [sym_alignment_tab] = ACTIONS(514),
    [sym_parameter_char] = ACTIONS(514),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(514),
    [sym_active_char] = ACTIONS(514),
    [sym_text] = ACTIONS(514),
  },
  [207] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env_at] = STATE(270),
    [sym__display_math_at] = STATE(270),
    [sym_tex_display_math_at] = STATE(270),
    [sym_latex_display_math_at] = STATE(270),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(270),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(270),
    [sym_tex_inline_math_at] = STATE(270),
    [sym_latex_inline_math_at] = STATE(270),
    [sym_inline_math_env_at] = STATE(270),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(270),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(270),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(270),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(270),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(270),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(270),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(270),
    [sym_opt_text_group_at] = STATE(270),
    [sym_token_at] = STATE(270),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(269),
    [aux_sym_text_mode_at_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(516),
    [sym_text] = ACTIONS(516),
  },
  [208] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env_at] = STATE(208),
    [sym__display_math_at] = STATE(208),
    [sym_tex_display_math_at] = STATE(208),
    [sym_latex_display_math_at] = STATE(208),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(208),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(208),
    [sym_tex_inline_math_at] = STATE(208),
    [sym_latex_inline_math_at] = STATE(208),
    [sym_inline_math_env_at] = STATE(208),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(208),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(208),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(208),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(208),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(208),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(208),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(208),
    [sym_opt_text_group_at] = STATE(208),
    [sym_token_at] = STATE(208),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(524),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(533),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(530),
    [sym_text] = ACTIONS(530),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(539),
    [sym_begin_group] = ACTIONS(539),
    [sym_end_group] = ACTIONS(539),
    [sym_math_shift] = ACTIONS(539),
    [sym_alignment_tab] = ACTIONS(539),
    [sym_parameter_char] = ACTIONS(539),
    [sym_superscript] = ACTIONS(539),
    [sym_subscript] = ACTIONS(539),
    [sym_active_char] = ACTIONS(539),
    [sym_text] = ACTIONS(539),
  },
  [210] = {
    [sym__common] = STATE(210),
    [sym__text_mode_common] = STATE(210),
    [sym_inline_verbatim] = STATE(210),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(210),
    [sym_text_mode_at_region] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_text_env] = STATE(210),
    [sym__display_math] = STATE(210),
    [sym_tex_display_math] = STATE(210),
    [sym_latex_display_math] = STATE(210),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(210),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(210),
    [sym_tex_inline_math] = STATE(210),
    [sym_latex_inline_math] = STATE(210),
    [sym_inline_math_env] = STATE(210),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(210),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(210),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(210),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(210),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(210),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(210),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(210),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(210),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(210),
    [sym_opt_text_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(306),
    [sym_alignment_tab] = ACTIONS(541),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(541),
    [sym_text] = ACTIONS(541),
  },
  [211] = {
    [aux_sym__whitespace_repeat1] = STATE(211),
    [sym_verb_delim] = ACTIONS(544),
    [aux_sym_SLASH_LBRACK_BSLASHs_BSLASHt_RBRACK_SLASH] = ACTIONS(546),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [212] = {
    [anon_sym_LBRACK] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(549),
    [sym_begin_group] = ACTIONS(549),
    [sym_end_group] = ACTIONS(549),
    [sym_math_shift] = ACTIONS(549),
    [sym_alignment_tab] = ACTIONS(549),
    [sym_parameter_char] = ACTIONS(549),
    [sym_superscript] = ACTIONS(549),
    [sym_subscript] = ACTIONS(549),
    [sym_active_char] = ACTIONS(549),
    [sym_text] = ACTIONS(549),
  },
  [213] = {
    [sym__common] = STATE(213),
    [sym__math_mode_common] = STATE(213),
    [sym__math_mode] = STATE(213),
    [sym_parameter] = STATE(213),
    [sym_math_env] = STATE(213),
    [sym_tag] = STATE(213),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(213),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(213),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(213),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(213),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(213),
    [sym_opt_math_group] = STATE(213),
    [sym_token] = STATE(213),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(213),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(366),
    [sym_end_group] = ACTIONS(369),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(374),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_text] = ACTIONS(551),
  },
  [214] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(554),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(556),
    [sym_begin_group] = ACTIONS(556),
    [sym_end_group] = ACTIONS(556),
    [sym_math_shift] = ACTIONS(556),
    [sym_alignment_tab] = ACTIONS(556),
    [sym_parameter_char] = ACTIONS(556),
    [sym_superscript] = ACTIONS(556),
    [sym_subscript] = ACTIONS(556),
    [sym_active_char] = ACTIONS(556),
    [sym_text] = ACTIONS(556),
  },
  [216] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(558),
  },
  [217] = {
    [sym__common] = STATE(124),
    [sym__text_mode_common] = STATE(124),
    [sym_inline_verbatim] = STATE(124),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(124),
    [sym_text_mode_at_region] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(124),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(124),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(124),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(124),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(124),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(124),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(124),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(124),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(124),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(124),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(124),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(124),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [218] = {
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_end_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [219] = {
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(562),
    [sym_end_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(562),
    [sym_active_char] = ACTIONS(562),
    [sym_text] = ACTIONS(562),
  },
  [220] = {
    [sym__common] = STATE(220),
    [sym__math_mode_common] = STATE(220),
    [sym__math_mode] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_math_env] = STATE(220),
    [sym_tag] = STATE(220),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(220),
    [sym_opt_math_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(374),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_text] = ACTIONS(564),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(567),
    [sym_begin_group] = ACTIONS(567),
    [sym_end_group] = ACTIONS(567),
    [sym_math_shift] = ACTIONS(567),
    [sym_alignment_tab] = ACTIONS(567),
    [sym_parameter_char] = ACTIONS(567),
    [sym_superscript] = ACTIONS(567),
    [sym_subscript] = ACTIONS(567),
    [sym_active_char] = ACTIONS(567),
    [sym_text] = ACTIONS(567),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(569),
    [sym_begin_group] = ACTIONS(569),
    [sym_end_group] = ACTIONS(569),
    [sym_math_shift] = ACTIONS(569),
    [sym_alignment_tab] = ACTIONS(569),
    [sym_parameter_char] = ACTIONS(569),
    [sym_superscript] = ACTIONS(569),
    [sym_subscript] = ACTIONS(569),
    [sym_active_char] = ACTIONS(569),
    [sym_text] = ACTIONS(569),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(571),
    [sym_begin_group] = ACTIONS(571),
    [sym_end_group] = ACTIONS(571),
    [sym_math_shift] = ACTIONS(571),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(571),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [224] = {
    [sym_display_math_env_name] = ACTIONS(573),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(575),
    [sym_end_group] = ACTIONS(575),
    [sym_math_shift] = ACTIONS(575),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(575),
    [sym_superscript] = ACTIONS(575),
    [sym_subscript] = ACTIONS(575),
    [sym_active_char] = ACTIONS(575),
    [sym_text] = ACTIONS(575),
  },
  [226] = {
    [sym_inline_math_env_name] = ACTIONS(577),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(579),
    [sym_begin_group] = ACTIONS(579),
    [sym_end_group] = ACTIONS(579),
    [sym_math_shift] = ACTIONS(579),
    [sym_alignment_tab] = ACTIONS(579),
    [sym_parameter_char] = ACTIONS(579),
    [sym_superscript] = ACTIONS(579),
    [sym_subscript] = ACTIONS(579),
    [sym_active_char] = ACTIONS(579),
    [sym_text] = ACTIONS(579),
  },
  [228] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(581),
  },
  [229] = {
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(583),
    [sym__end_of_line] = ACTIONS(583),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(585),
    [sym_end_group] = ACTIONS(585),
    [sym_math_shift] = ACTIONS(585),
    [sym_alignment_tab] = ACTIONS(585),
    [sym_parameter_char] = ACTIONS(585),
    [sym_superscript] = ACTIONS(585),
    [sym_subscript] = ACTIONS(585),
    [sym_active_char] = ACTIONS(585),
    [sym_text] = ACTIONS(585),
  },
  [231] = {
    [anon_sym_LBRACK] = ACTIONS(587),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(587),
    [sym__end_of_line] = ACTIONS(587),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(589),
    [sym_end_group] = ACTIONS(589),
    [sym_math_shift] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(589),
    [sym_parameter_char] = ACTIONS(589),
    [sym_superscript] = ACTIONS(589),
    [sym_subscript] = ACTIONS(589),
    [sym_active_char] = ACTIONS(589),
    [sym_text] = ACTIONS(589),
  },
  [233] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(159),
  },
  [234] = {
    [sym__common] = STATE(124),
    [sym__text_mode_common] = STATE(124),
    [sym_inline_verbatim] = STATE(124),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(124),
    [sym_text_mode_at_region] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(124),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(124),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(124),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(124),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(124),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(124),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(124),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(124),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(124),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(124),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(124),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(124),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(591),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(593),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(593),
    [sym_begin_group] = ACTIONS(593),
    [sym_alignment_tab] = ACTIONS(593),
    [sym_parameter_char] = ACTIONS(593),
    [sym_superscript] = ACTIONS(593),
    [sym_subscript] = ACTIONS(593),
    [sym_active_char] = ACTIONS(593),
    [sym_text] = ACTIONS(593),
  },
  [236] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(595),
  },
  [237] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(289),
    [sym__end_of_line] = ACTIONS(289),
  },
  [238] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(291),
    [sym__end_of_line] = ACTIONS(291),
  },
  [239] = {
    [sym__common] = STATE(210),
    [sym__text_mode_common] = STATE(210),
    [sym_inline_verbatim] = STATE(210),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(210),
    [sym_text_mode_at_region] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_text_env] = STATE(210),
    [sym__display_math] = STATE(210),
    [sym_tex_display_math] = STATE(210),
    [sym_latex_display_math] = STATE(210),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(210),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(210),
    [sym_tex_inline_math] = STATE(210),
    [sym_latex_inline_math] = STATE(210),
    [sym_inline_math_env] = STATE(210),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(210),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(210),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(210),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(210),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(210),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(210),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(210),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(210),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(210),
    [sym_opt_text_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(277),
    [aux_sym_text_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(293),
    [sym_text] = ACTIONS(293),
  },
  [240] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(597),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(599),
    [sym__end_of_line] = ACTIONS(599),
  },
  [241] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(601),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_RBRACK] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(603),
    [sym_begin_group] = ACTIONS(603),
    [sym_end_group] = ACTIONS(603),
    [sym_math_shift] = ACTIONS(603),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(603),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(603),
  },
  [243] = {
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(605),
    [sym_end_group] = ACTIONS(605),
    [sym_math_shift] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_parameter_char] = ACTIONS(605),
    [sym_superscript] = ACTIONS(605),
    [sym_subscript] = ACTIONS(605),
    [sym_active_char] = ACTIONS(605),
    [sym_text] = ACTIONS(605),
  },
  [244] = {
    [sym__common] = STATE(244),
    [sym__text_mode_common] = STATE(244),
    [sym_inline_verbatim] = STATE(244),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_text_env_at] = STATE(244),
    [sym__display_math_at] = STATE(244),
    [sym_tex_display_math_at] = STATE(244),
    [sym_latex_display_math_at] = STATE(244),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(244),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(244),
    [sym_tex_inline_math_at] = STATE(244),
    [sym_latex_inline_math_at] = STATE(244),
    [sym_inline_math_env_at] = STATE(244),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(244),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(244),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(244),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(244),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(244),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(244),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(244),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(244),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(244),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(244),
    [sym_opt_text_group_at] = STATE(244),
    [sym_token_at] = STATE(244),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(244),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(518),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(524),
    [sym_end_group] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(609),
    [sym_parameter_char] = ACTIONS(533),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(609),
    [sym_text] = ACTIONS(609),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_RBRACK] = ACTIONS(612),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(612),
    [sym_begin_group] = ACTIONS(612),
    [sym_end_group] = ACTIONS(612),
    [sym_math_shift] = ACTIONS(612),
    [sym_alignment_tab] = ACTIONS(612),
    [sym_parameter_char] = ACTIONS(612),
    [sym_superscript] = ACTIONS(612),
    [sym_subscript] = ACTIONS(612),
    [sym_active_char] = ACTIONS(612),
    [sym_text] = ACTIONS(612),
  },
  [246] = {
    [sym__common] = STATE(280),
    [sym__math_mode_common] = STATE(280),
    [sym__math_mode_at] = STATE(280),
    [sym_parameter] = STATE(280),
    [sym_math_env_at] = STATE(280),
    [sym_tag_at] = STATE(280),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(280),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(280),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(280),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(280),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(280),
    [sym_opt_math_group_at] = STATE(280),
    [sym_token_at] = STATE(280),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(280),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_end_group] = ACTIONS(614),
    [sym_alignment_tab] = ACTIONS(616),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(616),
    [sym_subscript] = ACTIONS(616),
    [sym_active_char] = ACTIONS(616),
    [sym_text] = ACTIONS(616),
  },
  [247] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(618),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(620),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(620),
    [sym_begin_group] = ACTIONS(620),
    [sym_end_group] = ACTIONS(620),
    [sym_math_shift] = ACTIONS(620),
    [sym_alignment_tab] = ACTIONS(620),
    [sym_parameter_char] = ACTIONS(620),
    [sym_superscript] = ACTIONS(620),
    [sym_subscript] = ACTIONS(620),
    [sym_active_char] = ACTIONS(620),
    [sym_text] = ACTIONS(620),
  },
  [249] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym_inline_verbatim] = STATE(284),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(284),
    [sym_text_mode_at] = STATE(283),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(622),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(624),
    [sym_text] = ACTIONS(624),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(626),
    [sym_begin_group] = ACTIONS(626),
    [sym_end_group] = ACTIONS(626),
    [sym_math_shift] = ACTIONS(626),
    [sym_alignment_tab] = ACTIONS(626),
    [sym_parameter_char] = ACTIONS(626),
    [sym_superscript] = ACTIONS(626),
    [sym_subscript] = ACTIONS(626),
    [sym_active_char] = ACTIONS(626),
    [sym_text] = ACTIONS(626),
  },
  [251] = {
    [anon_sym_tag] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(207),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(255),
  },
  [252] = {
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
    [sym_superscript] = ACTIONS(628),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(628),
    [sym_text] = ACTIONS(628),
  },
  [253] = {
    [sym__common] = STATE(258),
    [sym__math_mode_common] = STATE(258),
    [sym__math_mode_at] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_env_at] = STATE(258),
    [sym_tag_at] = STATE(258),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(258),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(285),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(258),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(258),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(258),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(258),
    [sym_opt_math_group_at] = STATE(258),
    [sym_token_at] = STATE(258),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(258),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_text] = ACTIONS(494),
  },
  [254] = {
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(630),
    [sym_begin_group] = ACTIONS(630),
    [sym_end_group] = ACTIONS(630),
    [sym_math_shift] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(630),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(630),
    [sym_active_char] = ACTIONS(630),
    [sym_text] = ACTIONS(630),
  },
  [255] = {
    [sym__common] = STATE(287),
    [sym__math_mode_common] = STATE(287),
    [sym__math_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_math_env_at] = STATE(287),
    [sym_tag_at] = STATE(287),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(287),
    [sym_opt_math_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(186),
    [sym_end_opt] = STATE(286),
    [aux_sym_math_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [256] = {
    [sym__common] = STATE(256),
    [sym__math_mode_common] = STATE(256),
    [sym__math_mode_at] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_math_env_at] = STATE(256),
    [sym_tag_at] = STATE(256),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(256),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(256),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(256),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(256),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(256),
    [sym_opt_math_group_at] = STATE(256),
    [sym_token_at] = STATE(256),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(256),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(634),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(640),
    [sym_math_shift] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(645),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(645),
    [sym_subscript] = ACTIONS(645),
    [sym_active_char] = ACTIONS(645),
    [sym_text] = ACTIONS(645),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_end_group] = ACTIONS(651),
    [sym_math_shift] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_active_char] = ACTIONS(651),
    [sym_text] = ACTIONS(651),
  },
  [258] = {
    [sym__common] = STATE(258),
    [sym__math_mode_common] = STATE(258),
    [sym__math_mode_at] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_env_at] = STATE(258),
    [sym_tag_at] = STATE(258),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(258),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(258),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(258),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(258),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(258),
    [sym_opt_math_group_at] = STATE(258),
    [sym_token_at] = STATE(258),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(258),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(634),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(640),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(653),
    [sym_subscript] = ACTIONS(653),
    [sym_active_char] = ACTIONS(653),
    [sym_text] = ACTIONS(653),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_end_group] = ACTIONS(656),
    [sym_math_shift] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(656),
  },
  [260] = {
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_RBRACK] = ACTIONS(658),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(658),
    [sym_begin_group] = ACTIONS(658),
    [sym_end_group] = ACTIONS(658),
    [sym_math_shift] = ACTIONS(658),
    [sym_alignment_tab] = ACTIONS(658),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(658),
    [sym_subscript] = ACTIONS(658),
    [sym_active_char] = ACTIONS(658),
    [sym_text] = ACTIONS(658),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_RBRACK] = ACTIONS(660),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(660),
    [sym_begin_group] = ACTIONS(660),
    [sym_end_group] = ACTIONS(660),
    [sym_math_shift] = ACTIONS(660),
    [sym_alignment_tab] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(660),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_text] = ACTIONS(660),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(662),
    [sym_begin_group] = ACTIONS(662),
    [sym_end_group] = ACTIONS(662),
    [sym_math_shift] = ACTIONS(662),
    [sym_alignment_tab] = ACTIONS(662),
    [sym_parameter_char] = ACTIONS(662),
    [sym_superscript] = ACTIONS(662),
    [sym_subscript] = ACTIONS(662),
    [sym_active_char] = ACTIONS(662),
    [sym_text] = ACTIONS(662),
  },
  [263] = {
    [sym__common] = STATE(289),
    [sym__text_mode_common] = STATE(289),
    [sym_inline_verbatim] = STATE(289),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(289),
    [sym_parameter] = STATE(289),
    [sym_text_env_at] = STATE(289),
    [sym__display_math_at] = STATE(289),
    [sym_tex_display_math_at] = STATE(289),
    [sym_latex_display_math_at] = STATE(289),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(289),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(289),
    [sym_tex_inline_math_at] = STATE(289),
    [sym_latex_inline_math_at] = STATE(289),
    [sym_inline_math_env_at] = STATE(289),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(289),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(289),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(289),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(289),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(289),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(289),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(289),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(289),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(289),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(289),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(289),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(289),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(289),
    [sym_opt_text_group_at] = STATE(289),
    [sym_token_at] = STATE(289),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(289),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(664),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(666),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(666),
    [sym_text] = ACTIONS(666),
  },
  [264] = {
    [anon_sym_LBRACK] = ACTIONS(668),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_alignment_tab] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_text] = ACTIONS(668),
  },
  [265] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(670),
  },
  [266] = {
    [sym_text_group_at] = STATE(291),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(498),
    [sym__end_of_line] = ACTIONS(670),
  },
  [267] = {
    [sym__common] = STATE(293),
    [sym__text_mode_common] = STATE(293),
    [sym_inline_verbatim] = STATE(293),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(293),
    [sym_parameter] = STATE(293),
    [sym_text_env_at] = STATE(293),
    [sym__display_math_at] = STATE(293),
    [sym_tex_display_math_at] = STATE(293),
    [sym_latex_display_math_at] = STATE(293),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(293),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(293),
    [sym_tex_inline_math_at] = STATE(293),
    [sym_latex_inline_math_at] = STATE(293),
    [sym_inline_math_env_at] = STATE(293),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(293),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(293),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(293),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(293),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(293),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(293),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(293),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(293),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(293),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(293),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(293),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(293),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(293),
    [sym_opt_text_group_at] = STATE(293),
    [sym_token_at] = STATE(293),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(292),
    [aux_sym_text_mode_at_repeat1] = STATE(293),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(672),
    [sym_text] = ACTIONS(672),
  },
  [268] = {
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(674),
    [sym_begin_group] = ACTIONS(674),
    [sym_end_group] = ACTIONS(674),
    [sym_math_shift] = ACTIONS(674),
    [sym_alignment_tab] = ACTIONS(674),
    [sym_parameter_char] = ACTIONS(674),
    [sym_superscript] = ACTIONS(674),
    [sym_subscript] = ACTIONS(674),
    [sym_active_char] = ACTIONS(674),
    [sym_text] = ACTIONS(674),
  },
  [269] = {
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(676),
    [sym_begin_group] = ACTIONS(676),
    [sym_end_group] = ACTIONS(676),
    [sym_math_shift] = ACTIONS(676),
    [sym_alignment_tab] = ACTIONS(676),
    [sym_parameter_char] = ACTIONS(676),
    [sym_superscript] = ACTIONS(676),
    [sym_subscript] = ACTIONS(676),
    [sym_active_char] = ACTIONS(676),
    [sym_text] = ACTIONS(676),
  },
  [270] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env_at] = STATE(270),
    [sym__display_math_at] = STATE(270),
    [sym_tex_display_math_at] = STATE(270),
    [sym_latex_display_math_at] = STATE(270),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(270),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(270),
    [sym_tex_inline_math_at] = STATE(270),
    [sym_latex_inline_math_at] = STATE(270),
    [sym_inline_math_env_at] = STATE(270),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(270),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(270),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(270),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(270),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(270),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(270),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(270),
    [sym_opt_text_group_at] = STATE(270),
    [sym_token_at] = STATE(270),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(524),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(678),
    [sym_parameter_char] = ACTIONS(533),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(678),
    [sym_text] = ACTIONS(678),
  },
  [271] = {
    [ts_builtin_sym_end] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_math_shift] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [272] = {
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_RBRACK] = ACTIONS(683),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(683),
    [sym_begin_group] = ACTIONS(683),
    [sym_end_group] = ACTIONS(683),
    [sym_math_shift] = ACTIONS(683),
    [sym_alignment_tab] = ACTIONS(683),
    [sym_parameter_char] = ACTIONS(683),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(683),
    [sym_active_char] = ACTIONS(683),
    [sym_text] = ACTIONS(683),
  },
  [273] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(685),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(587),
    [sym_begin_group] = ACTIONS(587),
    [sym_end_group] = ACTIONS(587),
    [sym_math_shift] = ACTIONS(587),
    [sym_alignment_tab] = ACTIONS(587),
    [sym_parameter_char] = ACTIONS(587),
    [sym_superscript] = ACTIONS(587),
    [sym_subscript] = ACTIONS(587),
    [sym_active_char] = ACTIONS(587),
    [sym_text] = ACTIONS(587),
  },
  [275] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(331),
  },
  [276] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_active_char] = ACTIONS(687),
    [sym_text] = ACTIONS(687),
  },
  [277] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(539),
    [sym__end_of_line] = ACTIONS(539),
  },
  [278] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(691),
    [sym__end_of_line] = ACTIONS(691),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(693),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(693),
    [sym_begin_group] = ACTIONS(693),
    [sym_end_group] = ACTIONS(693),
    [sym_math_shift] = ACTIONS(693),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(693),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(693),
    [sym_active_char] = ACTIONS(693),
    [sym_text] = ACTIONS(693),
  },
  [280] = {
    [sym__common] = STATE(280),
    [sym__math_mode_common] = STATE(280),
    [sym__math_mode_at] = STATE(280),
    [sym_parameter] = STATE(280),
    [sym_math_env_at] = STATE(280),
    [sym_tag_at] = STATE(280),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(280),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(280),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(280),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(280),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(280),
    [sym_opt_math_group_at] = STATE(280),
    [sym_token_at] = STATE(280),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(280),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(634),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(640),
    [sym_end_group] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(695),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(695),
    [sym_subscript] = ACTIONS(695),
    [sym_active_char] = ACTIONS(695),
    [sym_text] = ACTIONS(695),
  },
  [281] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(698),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(700),
    [sym_begin_group] = ACTIONS(700),
    [sym_end_group] = ACTIONS(700),
    [sym_math_shift] = ACTIONS(700),
    [sym_alignment_tab] = ACTIONS(700),
    [sym_parameter_char] = ACTIONS(700),
    [sym_superscript] = ACTIONS(700),
    [sym_subscript] = ACTIONS(700),
    [sym_active_char] = ACTIONS(700),
    [sym_text] = ACTIONS(700),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(702),
  },
  [284] = {
    [sym__common] = STATE(244),
    [sym__text_mode_common] = STATE(244),
    [sym_inline_verbatim] = STATE(244),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_text_env_at] = STATE(244),
    [sym__display_math_at] = STATE(244),
    [sym_tex_display_math_at] = STATE(244),
    [sym_latex_display_math_at] = STATE(244),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(244),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(244),
    [sym_tex_inline_math_at] = STATE(244),
    [sym_latex_inline_math_at] = STATE(244),
    [sym_inline_math_env_at] = STATE(244),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(244),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(244),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(244),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(244),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(244),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(244),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(244),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(244),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(244),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(244),
    [sym_opt_text_group_at] = STATE(244),
    [sym_token_at] = STATE(244),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(244),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [285] = {
    [anon_sym_LBRACK] = ACTIONS(704),
    [anon_sym_RBRACK] = ACTIONS(704),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(704),
    [sym_begin_group] = ACTIONS(704),
    [sym_end_group] = ACTIONS(704),
    [sym_math_shift] = ACTIONS(704),
    [sym_alignment_tab] = ACTIONS(704),
    [sym_parameter_char] = ACTIONS(704),
    [sym_superscript] = ACTIONS(704),
    [sym_subscript] = ACTIONS(704),
    [sym_active_char] = ACTIONS(704),
    [sym_text] = ACTIONS(704),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(706),
    [anon_sym_RBRACK] = ACTIONS(706),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(706),
    [sym_begin_group] = ACTIONS(706),
    [sym_end_group] = ACTIONS(706),
    [sym_math_shift] = ACTIONS(706),
    [sym_alignment_tab] = ACTIONS(706),
    [sym_parameter_char] = ACTIONS(706),
    [sym_superscript] = ACTIONS(706),
    [sym_subscript] = ACTIONS(706),
    [sym_active_char] = ACTIONS(706),
    [sym_text] = ACTIONS(706),
  },
  [287] = {
    [sym__common] = STATE(287),
    [sym__math_mode_common] = STATE(287),
    [sym__math_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_math_env_at] = STATE(287),
    [sym_tag_at] = STATE(287),
    [sym_tag_token] = STATE(184),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(185),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(287),
    [sym_opt_math_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(186),
    [aux_sym_math_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(640),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(648),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [288] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(466),
  },
  [289] = {
    [sym__common] = STATE(244),
    [sym__text_mode_common] = STATE(244),
    [sym_inline_verbatim] = STATE(244),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_text_env_at] = STATE(244),
    [sym__display_math_at] = STATE(244),
    [sym_tex_display_math_at] = STATE(244),
    [sym_latex_display_math_at] = STATE(244),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(244),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(244),
    [sym_tex_inline_math_at] = STATE(244),
    [sym_latex_inline_math_at] = STATE(244),
    [sym_inline_math_env_at] = STATE(244),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(244),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(244),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(244),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(244),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(244),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(244),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(244),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(244),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(244),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(244),
    [sym_opt_text_group_at] = STATE(244),
    [sym_token_at] = STATE(244),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(244),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(711),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [290] = {
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(713),
    [sym_alignment_tab] = ACTIONS(713),
    [sym_parameter_char] = ACTIONS(713),
    [sym_superscript] = ACTIONS(713),
    [sym_subscript] = ACTIONS(713),
    [sym_active_char] = ACTIONS(713),
    [sym_text] = ACTIONS(713),
  },
  [291] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(715),
  },
  [292] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(514),
    [sym__end_of_line] = ACTIONS(514),
  },
  [293] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env_at] = STATE(270),
    [sym__display_math_at] = STATE(270),
    [sym_tex_display_math_at] = STATE(270),
    [sym_latex_display_math_at] = STATE(270),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(270),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(270),
    [sym_tex_inline_math_at] = STATE(270),
    [sym_latex_inline_math_at] = STATE(270),
    [sym_inline_math_env_at] = STATE(270),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(270),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(270),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(270),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(270),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(270),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(270),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(270),
    [sym_opt_text_group_at] = STATE(270),
    [sym_token_at] = STATE(270),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(299),
    [aux_sym_text_mode_at_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(516),
    [sym_text] = ACTIONS(516),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(583),
    [sym_end_group] = ACTIONS(583),
    [sym_math_shift] = ACTIONS(583),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(583),
    [sym_superscript] = ACTIONS(583),
    [sym_subscript] = ACTIONS(583),
    [sym_active_char] = ACTIONS(583),
    [sym_text] = ACTIONS(583),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_math_shift] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [296] = {
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
    [sym_superscript] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_active_char] = ACTIONS(719),
    [sym_text] = ACTIONS(719),
  },
  [297] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(605),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(721),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(721),
    [sym_begin_group] = ACTIONS(721),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(721),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_text] = ACTIONS(721),
  },
  [299] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(676),
    [sym__end_of_line] = ACTIONS(676),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(30),
  [21] = {.count = 1, .reusable = true}, SHIFT(31),
  [23] = {.count = 1, .reusable = true}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(32),
  [29] = {.count = 1, .reusable = true}, SHIFT(33),
  [31] = {.count = 1, .reusable = true}, SHIFT(34),
  [33] = {.count = 1, .reusable = false}, SHIFT(35),
  [35] = {.count = 1, .reusable = false}, SHIFT(36),
  [37] = {.count = 1, .reusable = false}, SHIFT(37),
  [39] = {.count = 1, .reusable = false}, SHIFT(38),
  [41] = {.count = 1, .reusable = false}, SHIFT(39),
  [43] = {.count = 1, .reusable = false}, SHIFT(40),
  [45] = {.count = 1, .reusable = false}, SHIFT(41),
  [47] = {.count = 1, .reusable = true}, SHIFT(42),
  [49] = {.count = 1, .reusable = false}, SHIFT(43),
  [51] = {.count = 1, .reusable = false}, SHIFT(44),
  [53] = {.count = 1, .reusable = false}, SHIFT(45),
  [55] = {.count = 1, .reusable = false}, SHIFT(46),
  [57] = {.count = 1, .reusable = false}, SHIFT(47),
  [59] = {.count = 1, .reusable = false}, SHIFT(48),
  [61] = {.count = 1, .reusable = true}, SHIFT(49),
  [63] = {.count = 1, .reusable = true}, SHIFT(50),
  [65] = {.count = 1, .reusable = true}, SHIFT(51),
  [67] = {.count = 1, .reusable = true}, SHIFT(52),
  [69] = {.count = 1, .reusable = true}, SHIFT(53),
  [71] = {.count = 1, .reusable = true}, SHIFT(59),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, SHIFT(60),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(62),
  [83] = {.count = 1, .reusable = false}, SHIFT(70),
  [85] = {.count = 1, .reusable = true}, SHIFT(66),
  [87] = {.count = 1, .reusable = true}, SHIFT(71),
  [89] = {.count = 1, .reusable = true}, SHIFT(72),
  [91] = {.count = 1, .reusable = true}, SHIFT(75),
  [93] = {.count = 1, .reusable = true}, SHIFT(76),
  [95] = {.count = 1, .reusable = true}, SHIFT(81),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(89),
  [101] = {.count = 1, .reusable = true}, SHIFT(95),
  [103] = {.count = 1, .reusable = true}, SHIFT(96),
  [105] = {.count = 1, .reusable = true}, SHIFT(97),
  [107] = {.count = 1, .reusable = true}, SHIFT(114),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(115),
  [113] = {.count = 1, .reusable = true}, SHIFT(117),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(118),
  [119] = {.count = 1, .reusable = true}, SHIFT(120),
  [121] = {.count = 1, .reusable = true}, SHIFT(119),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(122),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(123),
  [163] = {.count = 1, .reusable = true}, SHIFT(124),
  [165] = {.count = 1, .reusable = false}, SHIFT(125),
  [167] = {.count = 1, .reusable = true}, SHIFT(126),
  [169] = {.count = 1, .reusable = true}, SHIFT(127),
  [171] = {.count = 1, .reusable = true}, SHIFT(129),
  [173] = {.count = 1, .reusable = true}, SHIFT(130),
  [175] = {.count = 1, .reusable = true}, SHIFT(132),
  [177] = {.count = 1, .reusable = true}, SHIFT(134),
  [179] = {.count = 1, .reusable = true}, SHIFT(136),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(137),
  [185] = {.count = 1, .reusable = true}, SHIFT(138),
  [187] = {.count = 1, .reusable = true}, SHIFT(139),
  [189] = {.count = 1, .reusable = true}, SHIFT(141),
  [191] = {.count = 1, .reusable = true}, SHIFT(142),
  [193] = {.count = 1, .reusable = true}, SHIFT(148),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(150),
  [199] = {.count = 1, .reusable = false}, SHIFT(153),
  [201] = {.count = 1, .reusable = true}, SHIFT(152),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(154),
  [207] = {.count = 1, .reusable = false}, SHIFT(148),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(157),
  [213] = {.count = 1, .reusable = false}, SHIFT(158),
  [215] = {.count = 1, .reusable = false}, SHIFT(159),
  [217] = {.count = 1, .reusable = false}, SHIFT(160),
  [219] = {.count = 1, .reusable = false}, SHIFT(161),
  [221] = {.count = 1, .reusable = true}, SHIFT(162),
  [223] = {.count = 1, .reusable = true}, SHIFT(163),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [227] = {.count = 1, .reusable = true}, SHIFT(167),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(161),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [241] = {.count = 1, .reusable = false}, SHIFT(173),
  [243] = {.count = 1, .reusable = true}, SHIFT(174),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [253] = {.count = 1, .reusable = false}, SHIFT(175),
  [255] = {.count = 1, .reusable = false}, SHIFT(176),
  [257] = {.count = 1, .reusable = true}, SHIFT(177),
  [259] = {.count = 1, .reusable = true}, SHIFT(178),
  [261] = {.count = 1, .reusable = true}, SHIFT(179),
  [263] = {.count = 1, .reusable = true}, SHIFT(180),
  [265] = {.count = 1, .reusable = true}, SHIFT(181),
  [267] = {.count = 1, .reusable = true}, SHIFT(182),
  [269] = {.count = 1, .reusable = true}, SHIFT(187),
  [271] = {.count = 1, .reusable = true}, SHIFT(188),
  [273] = {.count = 1, .reusable = true}, SHIFT(191),
  [275] = {.count = 1, .reusable = true}, SHIFT(195),
  [277] = {.count = 1, .reusable = true}, SHIFT(197),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(207),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [287] = {.count = 1, .reusable = true}, SHIFT(208),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(210),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(118),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(31),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(120),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__whitespace, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(211),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [340] = {.count = 1, .reusable = true}, SHIFT(212),
  [342] = {.count = 1, .reusable = true}, SHIFT(213),
  [344] = {.count = 1, .reusable = true}, SHIFT(214),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [348] = {.count = 1, .reusable = true}, SHIFT(215),
  [350] = {.count = 1, .reusable = true}, SHIFT(217),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [358] = {.count = 1, .reusable = true}, SHIFT(220),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(51),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(137),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(31),
  [377] = {.count = 1, .reusable = true}, SHIFT(221),
  [379] = {.count = 1, .reusable = true}, SHIFT(222),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(141),
  [386] = {.count = 1, .reusable = true}, SHIFT(223),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [392] = {.count = 1, .reusable = true}, SHIFT(224),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [396] = {.count = 1, .reusable = true}, SHIFT(226),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [402] = {.count = 1, .reusable = true}, SHIFT(228),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [406] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(153),
  [413] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(70),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(154),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(157),
  [428] = {.count = 1, .reusable = true}, SHIFT(229),
  [430] = {.count = 1, .reusable = true}, SHIFT(230),
  [432] = {.count = 1, .reusable = true}, SHIFT(231),
  [434] = {.count = 1, .reusable = true}, SHIFT(232),
  [436] = {.count = 1, .reusable = true}, SHIFT(233),
  [438] = {.count = 1, .reusable = true}, SHIFT(234),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [442] = {.count = 1, .reusable = true}, SHIFT(235),
  [444] = {.count = 1, .reusable = true}, SHIFT(237),
  [446] = {.count = 1, .reusable = true}, SHIFT(239),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [452] = {.count = 1, .reusable = true}, SHIFT(240),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [460] = {.count = 1, .reusable = true}, SHIFT(242),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [468] = {.count = 1, .reusable = true}, SHIFT(243),
  [470] = {.count = 1, .reusable = true}, SHIFT(244),
  [472] = {.count = 1, .reusable = true}, SHIFT(245),
  [474] = {.count = 1, .reusable = true}, SHIFT(246),
  [476] = {.count = 1, .reusable = true}, SHIFT(248),
  [478] = {.count = 1, .reusable = true}, SHIFT(249),
  [480] = {.count = 1, .reusable = true}, SHIFT(251),
  [482] = {.count = 1, .reusable = true}, SHIFT(253),
  [484] = {.count = 1, .reusable = true}, SHIFT(255),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(256),
  [490] = {.count = 1, .reusable = true}, SHIFT(175),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [494] = {.count = 1, .reusable = true}, SHIFT(258),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [498] = {.count = 1, .reusable = true}, SHIFT(263),
  [500] = {.count = 1, .reusable = true}, SHIFT(264),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(270),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(177),
  [524] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(96),
  [527] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(97),
  [530] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(208),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(31),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(210),
  [544] = {.count = 1, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__whitespace_repeat1, 2), SHIFT_REPEAT(211),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(213),
  [554] = {.count = 1, .reusable = true}, SHIFT(271),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [558] = {.count = 1, .reusable = true}, SHIFT(272),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(220),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [573] = {.count = 1, .reusable = true}, SHIFT(273),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [577] = {.count = 1, .reusable = true}, SHIFT(159),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [581] = {.count = 1, .reusable = true}, SHIFT(274),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [591] = {.count = 1, .reusable = true}, SHIFT(275),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [595] = {.count = 1, .reusable = true}, SHIFT(276),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [601] = {.count = 1, .reusable = true}, SHIFT(278),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [607] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(244),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [614] = {.count = 1, .reusable = true}, SHIFT(279),
  [616] = {.count = 1, .reusable = true}, SHIFT(280),
  [618] = {.count = 1, .reusable = true}, SHIFT(281),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [622] = {.count = 1, .reusable = true}, SHIFT(282),
  [624] = {.count = 1, .reusable = true}, SHIFT(284),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [632] = {.count = 1, .reusable = true}, SHIFT(287),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(180),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(181),
  [643] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(256),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(31),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(258),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [664] = {.count = 1, .reusable = true}, SHIFT(288),
  [666] = {.count = 1, .reusable = true}, SHIFT(289),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [670] = {.count = 1, .reusable = true}, SHIFT(290),
  [672] = {.count = 1, .reusable = true}, SHIFT(293),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(270),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [685] = {.count = 1, .reusable = true}, SHIFT(294),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(280),
  [698] = {.count = 1, .reusable = true}, SHIFT(295),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [702] = {.count = 1, .reusable = true}, SHIFT(296),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(287),
  [711] = {.count = 1, .reusable = true}, SHIFT(297),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [715] = {.count = 1, .reusable = true}, SHIFT(298),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
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
