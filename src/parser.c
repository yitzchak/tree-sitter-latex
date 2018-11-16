#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 297
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 4
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_verb = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_display_math_env_name = 8,
  sym_inline_math_env_name = 9,
  anon_sym_tag = 10,
  aux_sym_SLASH_DOT_SLASH = 11,
  sym_verbatim_env_name = 12,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 13,
  anon_sym_begin = 14,
  anon_sym_end = 15,
  anon_sym_documentclass = 16,
  anon_sym_usepackage = 17,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 18,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 19,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 20,
  anon_sym_EQ = 21,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 22,
  anon_sym_emph = 23,
  anon_sym_textbf = 24,
  anon_sym_textit = 25,
  anon_sym_texttt = 26,
  anon_sym_makeatletter = 27,
  anon_sym_makeatother = 28,
  sym_magic_comment = 29,
  sym_comment = 30,
  sym__escape = 31,
  sym_begin_group = 32,
  sym_end_group = 33,
  sym_math_shift = 34,
  sym_alignment_tab = 35,
  sym__end_of_line = 36,
  sym_parameter_char = 37,
  sym_superscript = 38,
  sym_subscript = 39,
  sym__name = 40,
  sym__name_at = 41,
  sym_active_char = 42,
  sym_text = 43,
  sym_number = 44,
  sym_document = 45,
  sym__common = 46,
  sym__text_mode_common = 47,
  sym_inline_verbatim = 48,
  sym_verb_token = 49,
  sym__text_mode = 50,
  sym_text_mode = 51,
  sym__text_mode_at = 52,
  sym_text_mode_at = 53,
  sym_text_mode_at_region = 54,
  sym__math_mode_common = 55,
  sym__math_mode = 56,
  sym_math_mode = 57,
  sym__math_mode_at = 58,
  sym_math_mode_at = 59,
  sym_parameter = 60,
  sym_text_env = 61,
  sym_text_env_at = 62,
  sym_math_env = 63,
  sym_math_env_at = 64,
  sym__display_math = 65,
  sym__display_math_at = 66,
  sym_tex_display_math = 67,
  sym_tex_display_math_at = 68,
  sym_latex_display_math = 69,
  sym_latex_display_math_at = 70,
  sym_begin_display_math = 71,
  sym_end_display_math = 72,
  sym_begin_inline_math = 73,
  sym_end_inline_math = 74,
  sym_display_math_env = 75,
  sym_display_math_env_at = 76,
  sym_display_math_begin = 77,
  sym_display_math_begin_at = 78,
  sym_display_math_end = 79,
  sym_display_math_env_group = 80,
  sym__inline_math = 81,
  sym__inline_math_at = 82,
  sym_tex_inline_math = 83,
  sym_tex_inline_math_at = 84,
  sym_latex_inline_math = 85,
  sym_latex_inline_math_at = 86,
  sym_inline_math_env = 87,
  sym_inline_math_env_at = 88,
  sym_inline_math_begin = 89,
  sym_inline_math_end = 90,
  sym_inline_math_env_group = 91,
  sym_tag = 92,
  sym_tag_at = 93,
  sym_tag_token = 94,
  sym_verbatim_env = 95,
  sym_verbatim_begin = 96,
  sym_verbatim_end = 97,
  sym_verbatim_text = 98,
  sym_verbatim_env_group = 99,
  sym_escaped = 100,
  sym_begin = 101,
  sym_begin_token = 102,
  sym_end = 103,
  sym_end_token = 104,
  sym_documentclass = 105,
  sym_documentclass_token = 106,
  sym_usepackage = 107,
  sym_usepackage_token = 108,
  sym_include = 109,
  sym_include_at = 110,
  sym_include_token = 111,
  sym_section = 112,
  sym_section_at = 113,
  sym_section_token = 114,
  sym_storage = 115,
  sym_storage_token = 116,
  sym_catcode = 117,
  sym_catcode_token = 118,
  sym_emph = 119,
  sym_emph_at = 120,
  sym_emph_token = 121,
  sym_textbf = 122,
  sym_textbf_at = 123,
  sym_textbf_token = 124,
  sym_textit = 125,
  sym_textit_at = 126,
  sym_textit_token = 127,
  sym_texttt = 128,
  sym_texttt_at = 129,
  sym_texttt_token = 130,
  sym_makeatletter = 131,
  sym_makeatletter_token = 132,
  sym_makeatother = 133,
  sym_makeatother_token = 134,
  sym_text_group = 135,
  sym_text_group_at = 136,
  sym_simple_text_group = 137,
  sym_opt_text_group = 138,
  sym_opt_text_group_at = 139,
  sym_math_group = 140,
  sym_math_group_at = 141,
  sym_opt_math_group = 142,
  sym_opt_math_group_at = 143,
  sym_math_text_group = 144,
  sym_math_text_group_at = 145,
  sym_token = 146,
  sym_token_at = 147,
  sym_begin_opt = 148,
  sym_end_opt = 149,
  aux_sym_text_mode_repeat1 = 150,
  aux_sym_text_mode_at_repeat1 = 151,
  aux_sym_math_mode_repeat1 = 152,
  aux_sym_math_mode_at_repeat1 = 153,
  aux_sym_parameter_repeat1 = 154,
  aux_sym_verbatim_text_repeat1 = 155,
  aux_sym_verbatim_text_repeat2 = 156,
  anon_alias_sym_class_name = 157,
  anon_alias_sym_env_name = 158,
  anon_alias_sym_package_name = 159,
  anon_alias_sym_text = 160,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [ts_builtin_sym_end] = "END",
  [anon_sym_verb] = "verb",
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
      ADVANCE(33);
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 34:
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
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 36:
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
        ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(57);
      if (lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'v')
        ADVANCE(159);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 38:
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
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(42);
      if (lookahead == 'p')
        ADVANCE(47);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'h')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'i')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(143);
      if (lookahead == 'i')
        ADVANCE(145);
      if (lookahead == 't')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 166:
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
        ADVANCE(35);
      END_STATE();
    case 167:
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
      ADVANCE(35);
      END_STATE();
    case 168:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 170:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(173);
      if (lookahead == 'd')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(175);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 178:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'n')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 183:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(57);
      if (lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(184);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'v')
        ADVANCE(159);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 187:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(188);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'd')
        ADVANCE(205);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 'g')
        ADVANCE(244);
      if (lookahead == 'l')
        ADVANCE(249);
      if (lookahead == 'm')
        ADVANCE(258);
      if (lookahead == 's')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(276);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
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
        ADVANCE(35);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(202);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(206);
      if (lookahead == 'g')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
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
        ADVANCE(35);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
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
        ADVANCE(35);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'u')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
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
        ADVANCE(35);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 284:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 285:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 286:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 287:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'k')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(349);
      if (lookahead == 'p')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'u')
        ADVANCE(396);
      if (lookahead == 'v')
        ADVANCE(406);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(291);
      if (lookahead == 'p')
        ADVANCE(296);
      if (lookahead == 's')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(292);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(293);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(297);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(307);
      if (lookahead == 'h')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(340);
      if (lookahead == 'p')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(350);
      if (lookahead == 'i')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead == 'u')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(379);
      if (lookahead == 's')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead == 'u')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 412:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(173);
      if (lookahead == 'd')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(413);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(175);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 414:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 415:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'k')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(416);
      if (lookahead == 'p')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'u')
        ADVANCE(396);
      if (lookahead == 'v')
        ADVANCE(406);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 417:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(418);
      if (lookahead == 'd')
        ADVANCE(419);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'k')
        ADVANCE(347);
      if (lookahead == 't')
        ADVANCE(420);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 423:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'a')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'k')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'e')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'a')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 't')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'o')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 't')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'h')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'e')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'r')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 435:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'e')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'k')
        ADVANCE(347);
      if (lookahead == 'm')
        ADVANCE(416);
      if (lookahead == 'p')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'u')
        ADVANCE(396);
      if (lookahead == 'v')
        ADVANCE(406);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'n')
        ADVANCE(437);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 439:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(418);
      if (lookahead == 'd')
        ADVANCE(419);
      if (lookahead == 'e')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'k')
        ADVANCE(347);
      if (lookahead == 't')
        ADVANCE(420);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(165);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'n')
        ADVANCE(437);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 167},
  [7] = {.lex_state = 168},
  [8] = {.lex_state = 168, .external_lex_state = 2},
  [9] = {.lex_state = 168},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 170},
  [32] = {.lex_state = 168, .external_lex_state = 2},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 167},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 167},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 166},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 166},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 168, .external_lex_state = 3},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 178},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 182},
  [71] = {.lex_state = 169},
  [72] = {.lex_state = 183},
  [73] = {.lex_state = 167},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 187},
  [77] = {.lex_state = 284},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 284},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 167},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 167},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 167},
  [87] = {.lex_state = 167},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 285},
  [90] = {.lex_state = 286},
  [91] = {.lex_state = 167},
  [92] = {.lex_state = 167},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 167},
  [95] = {.lex_state = 287},
  [96] = {.lex_state = 166},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 167},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 167},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 167},
  [120] = {.lex_state = 170},
  [121] = {.lex_state = 167},
  [122] = {.lex_state = 166},
  [123] = {.lex_state = 34},
  [124] = {.lex_state = 167},
  [125] = {.lex_state = 166},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 166},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 412},
  [131] = {.lex_state = 167},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 167},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 168, .external_lex_state = 2},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 167},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 414},
  [141] = {.lex_state = 167},
  [142] = {.lex_state = 167},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 167},
  [145] = {.lex_state = 34},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 167},
  [148] = {.lex_state = 187},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 169},
  [151] = {.lex_state = 182},
  [152] = {.lex_state = 169},
  [153] = {.lex_state = 167},
  [154] = {.lex_state = 167},
  [155] = {.lex_state = 34},
  [156] = {.lex_state = 166},
  [157] = {.lex_state = 166},
  [158] = {.lex_state = 166},
  [159] = {.lex_state = 166},
  [160] = {.lex_state = 166},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 284},
  [163] = {.lex_state = 284},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 169},
  [166] = {.lex_state = 284},
  [167] = {.lex_state = 284},
  [168] = {.lex_state = 167},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 167},
  [171] = {.lex_state = 286},
  [172] = {.lex_state = 170},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 415},
  [176] = {.lex_state = 167},
  [177] = {.lex_state = 166},
  [178] = {.lex_state = 417},
  [179] = {.lex_state = 166},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 34},
  [186] = {.lex_state = 423},
  [187] = {.lex_state = 167},
  [188] = {.lex_state = 34},
  [189] = {.lex_state = 34},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 34},
  [192] = {.lex_state = 34},
  [193] = {.lex_state = 435},
  [194] = {.lex_state = 167},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 284},
  [197] = {.lex_state = 167},
  [198] = {.lex_state = 167},
  [199] = {.lex_state = 34},
  [200] = {.lex_state = 167},
  [201] = {.lex_state = 167},
  [202] = {.lex_state = 167},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 167},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 34},
  [207] = {.lex_state = 167},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 167},
  [210] = {.lex_state = 166},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 167},
  [213] = {.lex_state = 166},
  [214] = {.lex_state = 166},
  [215] = {.lex_state = 167},
  [216] = {.lex_state = 167},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 167},
  [219] = {.lex_state = 167},
  [220] = {.lex_state = 167},
  [221] = {.lex_state = 187},
  [222] = {.lex_state = 167},
  [223] = {.lex_state = 187},
  [224] = {.lex_state = 167},
  [225] = {.lex_state = 166},
  [226] = {.lex_state = 284},
  [227] = {.lex_state = 167},
  [228] = {.lex_state = 284},
  [229] = {.lex_state = 167},
  [230] = {.lex_state = 284},
  [231] = {.lex_state = 166},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 284},
  [234] = {.lex_state = 284},
  [235] = {.lex_state = 284},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 169},
  [238] = {.lex_state = 284},
  [239] = {.lex_state = 167},
  [240] = {.lex_state = 167},
  [241] = {.lex_state = 166},
  [242] = {.lex_state = 167},
  [243] = {.lex_state = 166},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 167},
  [246] = {.lex_state = 166},
  [247] = {.lex_state = 167},
  [248] = {.lex_state = 439},
  [249] = {.lex_state = 167},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 167},
  [252] = {.lex_state = 36},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 167},
  [255] = {.lex_state = 34},
  [256] = {.lex_state = 167},
  [257] = {.lex_state = 167},
  [258] = {.lex_state = 167},
  [259] = {.lex_state = 167},
  [260] = {.lex_state = 166},
  [261] = {.lex_state = 34},
  [262] = {.lex_state = 284},
  [263] = {.lex_state = 284},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 167},
  [266] = {.lex_state = 167},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 167},
  [269] = {.lex_state = 167},
  [270] = {.lex_state = 166},
  [271] = {.lex_state = 167},
  [272] = {.lex_state = 284},
  [273] = {.lex_state = 34},
  [274] = {.lex_state = 284},
  [275] = {.lex_state = 169},
  [276] = {.lex_state = 167},
  [277] = {.lex_state = 166},
  [278] = {.lex_state = 34},
  [279] = {.lex_state = 167},
  [280] = {.lex_state = 166},
  [281] = {.lex_state = 166},
  [282] = {.lex_state = 167},
  [283] = {.lex_state = 167},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 284},
  [286] = {.lex_state = 166},
  [287] = {.lex_state = 34},
  [288] = {.lex_state = 284},
  [289] = {.lex_state = 284},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 167},
  [292] = {.lex_state = 167},
  [293] = {.lex_state = 167},
  [294] = {.lex_state = 284},
  [295] = {.lex_state = 34},
  [296] = {.lex_state = 284},
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
    [sym_verb_delim] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [33] = {
    [anon_sym_LBRACK] = ACTIONS(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(125),
    [sym_parameter_char] = ACTIONS(125),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(125),
    [sym_active_char] = ACTIONS(125),
    [sym_text] = ACTIONS(125),
  },
  [34] = {
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_end_group] = ACTIONS(129),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [36] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(133),
  },
  [38] = {
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(135),
  },
  [39] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(137),
  },
  [40] = {
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(139),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
    [sym_end_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(141),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(141),
    [sym_active_char] = ACTIONS(141),
    [sym_text] = ACTIONS(141),
  },
  [42] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(145),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(147),
  },
  [45] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(149),
  },
  [46] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(151),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_end_group] = ACTIONS(155),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [49] = {
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
  [50] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
    [sym_inline_verbatim] = STATE(122),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(122),
    [sym_text_mode_at_region] = STATE(122),
    [sym_parameter] = STATE(122),
    [sym_text_env] = STATE(122),
    [sym__display_math] = STATE(122),
    [sym_tex_display_math] = STATE(122),
    [sym_latex_display_math] = STATE(122),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(122),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(122),
    [sym_tex_inline_math] = STATE(122),
    [sym_latex_inline_math] = STATE(122),
    [sym_inline_math_env] = STATE(122),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(122),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(122),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(122),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(122),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(122),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(122),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(122),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(122),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(122),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(122),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [51] = {
    [anon_sym_tag] = ACTIONS(163),
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
    [sym__common] = STATE(125),
    [sym__math_mode_common] = STATE(125),
    [sym__math_mode] = STATE(125),
    [sym_parameter] = STATE(125),
    [sym_math_env] = STATE(125),
    [sym_tag] = STATE(125),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(125),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(125),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(125),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(125),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(125),
    [sym_opt_math_group] = STATE(125),
    [sym_token] = STATE(125),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(125),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_text] = ACTIONS(167),
  },
  [53] = {
    [sym__common] = STATE(59),
    [sym__math_mode_common] = STATE(59),
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(126),
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
    [sym_math_shift] = ACTIONS(169),
  },
  [55] = {
    [sym_math_text_group] = STATE(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(171),
  },
  [56] = {
    [sym__common] = STATE(132),
    [sym__math_mode_common] = STATE(132),
    [sym__math_mode] = STATE(132),
    [sym_parameter] = STATE(132),
    [sym_math_env] = STATE(132),
    [sym_tag] = STATE(132),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(132),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(131),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(132),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(132),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(132),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(132),
    [sym_opt_math_group] = STATE(132),
    [sym_token] = STATE(132),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(132),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_text] = ACTIONS(175),
  },
  [57] = {
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [58] = {
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
    [sym_end_opt] = STATE(133),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_text] = ACTIONS(177),
  },
  [59] = {
    [sym__common] = STATE(135),
    [sym__math_mode_common] = STATE(135),
    [sym__math_mode] = STATE(135),
    [sym_parameter] = STATE(135),
    [sym_math_env] = STATE(135),
    [sym_tag] = STATE(135),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(135),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(135),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(135),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(135),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(135),
    [sym_opt_math_group] = STATE(135),
    [sym_token] = STATE(135),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(135),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(181),
  },
  [60] = {
    [sym_verb_body] = ACTIONS(183),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [61] = {
    [sym_end_display_math] = STATE(138),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(185),
  },
  [62] = {
    [sym__common] = STATE(139),
    [sym__math_mode_common] = STATE(139),
    [sym__math_mode] = STATE(139),
    [sym_parameter] = STATE(139),
    [sym_math_env] = STATE(139),
    [sym_tag] = STATE(139),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(139),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(139),
    [sym_opt_math_group] = STATE(139),
    [sym_token] = STATE(139),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(139),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_text] = ACTIONS(187),
  },
  [63] = {
    [sym_end_inline_math] = STATE(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(189),
  },
  [64] = {
    [sym_display_math_end] = STATE(142),
    [sym_end_token] = STATE(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [65] = {
    [sym_inline_math_end] = STATE(144),
    [sym_end_token] = STATE(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [66] = {
    [anon_sym_end] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(193),
    [sym_begin_group] = ACTIONS(193),
    [sym_end_group] = ACTIONS(193),
    [sym_math_shift] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_text] = ACTIONS(193),
  },
  [68] = {
    [sym_verbatim_end] = STATE(147),
    [sym_end_token] = STATE(69),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [69] = {
    [sym_verbatim_env_group] = STATE(149),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(195),
  },
  [70] = {
    [aux_sym_verbatim_text_repeat1] = STATE(151),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(199),
  },
  [71] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(152),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(201),
    [sym__end_of_line] = ACTIONS(203),
  },
  [72] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(205),
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
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(207),
    [sym_end_group] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
  },
  [74] = {
    [sym_simple_text_group] = STATE(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [75] = {
    [sym__common] = STATE(155),
    [sym__text_mode_common] = STATE(155),
    [sym_inline_verbatim] = STATE(155),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(155),
    [sym_text_mode_at_region] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(154),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(155),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(155),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(155),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(155),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(155),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(155),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(155),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(155),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(155),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [76] = {
    [sym_display_math_env_name] = ACTIONS(211),
    [sym_inline_math_env_name] = ACTIONS(213),
    [sym_verbatim_env_name] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(217),
  },
  [77] = {
    [sym_text_group] = STATE(162),
    [sym_opt_text_group] = STATE(163),
    [sym_begin_opt] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
    [sym__end_of_line] = ACTIONS(221),
  },
  [78] = {
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [79] = {
    [sym_text_group] = STATE(166),
    [sym_opt_text_group] = STATE(167),
    [sym_begin_opt] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
    [sym__end_of_line] = ACTIONS(225),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [81] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(229),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_end_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_text] = ACTIONS(231),
  },
  [83] = {
    [sym_simple_text_group] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [84] = {
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
  [85] = {
    [sym_simple_text_group] = STATE(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [86] = {
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
  [87] = {
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
  [88] = {
    [sym_text_group] = STATE(170),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [89] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(239),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(243),
  },
  [92] = {
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
  [93] = {
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
  [94] = {
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
    [anon_sym_makeatother] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(253),
  },
  [96] = {
    [sym__common] = STATE(177),
    [sym__text_mode_common] = STATE(177),
    [sym_inline_verbatim] = STATE(177),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_text_env_at] = STATE(177),
    [sym__display_math_at] = STATE(177),
    [sym_tex_display_math_at] = STATE(177),
    [sym_latex_display_math_at] = STATE(177),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(177),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(177),
    [sym_tex_inline_math_at] = STATE(177),
    [sym_latex_inline_math_at] = STATE(177),
    [sym_inline_math_env_at] = STATE(177),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(177),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(177),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(177),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(177),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(177),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(177),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(177),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(177),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(177),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(177),
    [sym_opt_text_group_at] = STATE(177),
    [sym_token_at] = STATE(177),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [97] = {
    [sym__common] = STATE(185),
    [sym__math_mode_common] = STATE(185),
    [sym__math_mode_at] = STATE(185),
    [sym_math_mode_at] = STATE(181),
    [sym_parameter] = STATE(185),
    [sym_math_env_at] = STATE(185),
    [sym_tag_at] = STATE(185),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(185),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(185),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(185),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(185),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(185),
    [sym_opt_math_group_at] = STATE(185),
    [sym_token_at] = STATE(185),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(185),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [98] = {
    [sym_makeatother] = STATE(187),
    [sym_makeatother_token] = STATE(112),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(269),
  },
  [99] = {
    [sym__common] = STATE(189),
    [sym__math_mode_common] = STATE(189),
    [sym__math_mode_at] = STATE(189),
    [sym_math_mode_at] = STATE(188),
    [sym_parameter] = STATE(189),
    [sym_math_env_at] = STATE(189),
    [sym_tag_at] = STATE(189),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(189),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(189),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(189),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(189),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(189),
    [sym_opt_math_group_at] = STATE(189),
    [sym_token_at] = STATE(189),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(189),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [100] = {
    [sym__common] = STATE(189),
    [sym__math_mode_common] = STATE(189),
    [sym__math_mode_at] = STATE(189),
    [sym_math_mode_at] = STATE(190),
    [sym_parameter] = STATE(189),
    [sym_math_env_at] = STATE(189),
    [sym_tag_at] = STATE(189),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(189),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(189),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(189),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(189),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(189),
    [sym_opt_math_group_at] = STATE(189),
    [sym_token_at] = STATE(189),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(189),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [101] = {
    [sym__common] = STATE(189),
    [sym__math_mode_common] = STATE(189),
    [sym__math_mode_at] = STATE(189),
    [sym_math_mode_at] = STATE(191),
    [sym_parameter] = STATE(189),
    [sym_math_env_at] = STATE(189),
    [sym_tag_at] = STATE(189),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(189),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(189),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(189),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(189),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(189),
    [sym_opt_math_group_at] = STATE(189),
    [sym_token_at] = STATE(189),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(189),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [102] = {
    [sym__common] = STATE(189),
    [sym__math_mode_common] = STATE(189),
    [sym__math_mode_at] = STATE(189),
    [sym_math_mode_at] = STATE(192),
    [sym_parameter] = STATE(189),
    [sym_math_env_at] = STATE(189),
    [sym_tag_at] = STATE(189),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(189),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(189),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(189),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(189),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(189),
    [sym_opt_math_group_at] = STATE(189),
    [sym_token_at] = STATE(189),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(189),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [103] = {
    [sym__common] = STATE(195),
    [sym__text_mode_common] = STATE(195),
    [sym_inline_verbatim] = STATE(195),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(195),
    [sym_parameter] = STATE(195),
    [sym_text_env_at] = STATE(195),
    [sym__display_math_at] = STATE(195),
    [sym_tex_display_math_at] = STATE(195),
    [sym_latex_display_math_at] = STATE(195),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(195),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(195),
    [sym_tex_inline_math_at] = STATE(195),
    [sym_latex_inline_math_at] = STATE(195),
    [sym_inline_math_env_at] = STATE(195),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(195),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(195),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_end] = STATE(194),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(195),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(195),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(195),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(195),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(195),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(195),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(195),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(195),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(195),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(195),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(195),
    [sym_opt_text_group_at] = STATE(195),
    [sym_token_at] = STATE(195),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(195),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [104] = {
    [sym_display_math_env_group] = STATE(196),
    [sym_inline_math_env_group] = STATE(78),
    [sym_verbatim_env_group] = STATE(79),
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [105] = {
    [sym_text_group_at] = STATE(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [106] = {
    [sym_text_group_at] = STATE(198),
    [sym_opt_text_group_at] = STATE(199),
    [sym_begin_opt] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [107] = {
    [sym_text_group_at] = STATE(200),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [108] = {
    [sym_text_group_at] = STATE(201),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [109] = {
    [sym_text_group_at] = STATE(202),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [110] = {
    [sym_text_group_at] = STATE(203),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(277),
    [sym_end_group] = ACTIONS(277),
    [sym_math_shift] = ACTIONS(277),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(277),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(277),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [112] = {
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
  [113] = {
    [sym__common] = STATE(205),
    [sym__text_mode_common] = STATE(205),
    [sym_inline_verbatim] = STATE(205),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(205),
    [sym_parameter] = STATE(205),
    [sym_text_env_at] = STATE(205),
    [sym__display_math_at] = STATE(205),
    [sym_tex_display_math_at] = STATE(205),
    [sym_latex_display_math_at] = STATE(205),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(205),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(205),
    [sym_tex_inline_math_at] = STATE(205),
    [sym_latex_inline_math_at] = STATE(205),
    [sym_inline_math_env_at] = STATE(205),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(205),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(205),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(205),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(205),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(205),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(205),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(205),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(205),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(205),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(205),
    [sym_opt_text_group_at] = STATE(205),
    [sym_token_at] = STATE(205),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(204),
    [aux_sym_text_mode_at_repeat1] = STATE(205),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(281),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(281),
    [sym_text] = ACTIONS(281),
  },
  [114] = {
    [sym__common] = STATE(206),
    [sym__text_mode_common] = STATE(206),
    [sym_inline_verbatim] = STATE(206),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_text_env_at] = STATE(206),
    [sym__display_math_at] = STATE(206),
    [sym_tex_display_math_at] = STATE(206),
    [sym_latex_display_math_at] = STATE(206),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(206),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(206),
    [sym_tex_inline_math_at] = STATE(206),
    [sym_latex_inline_math_at] = STATE(206),
    [sym_inline_math_env_at] = STATE(206),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(206),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(206),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(206),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(206),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(206),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(206),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(206),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(206),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(206),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(206),
    [sym_opt_text_group_at] = STATE(206),
    [sym_token_at] = STATE(206),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(206),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(283),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(285),
    [sym_text] = ACTIONS(285),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(287),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_text] = ACTIONS(287),
  },
  [116] = {
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
  [117] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(208),
    [sym_text_mode_at_region] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env] = STATE(208),
    [sym__display_math] = STATE(208),
    [sym_tex_display_math] = STATE(208),
    [sym_latex_display_math] = STATE(208),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(208),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(208),
    [sym_tex_inline_math] = STATE(208),
    [sym_latex_inline_math] = STATE(208),
    [sym_inline_math_env] = STATE(208),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(208),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(208),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(208),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(208),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(208),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(208),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(208),
    [sym_opt_text_group] = STATE(208),
    [sym_token] = STATE(208),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(207),
    [aux_sym_text_mode_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
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
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(298),
    [sym_begin_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(310),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(316),
    [sym_end_group] = ACTIONS(316),
    [sym_math_shift] = ACTIONS(316),
    [sym_alignment_tab] = ACTIONS(316),
    [sym_parameter_char] = ACTIONS(316),
    [sym_superscript] = ACTIONS(316),
    [sym_subscript] = ACTIONS(316),
    [sym_active_char] = ACTIONS(316),
    [sym_text] = ACTIONS(316),
  },
  [120] = {
    [aux_sym_parameter_repeat1] = STATE(120),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(318),
    [sym_number] = ACTIONS(321),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [122] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
    [sym_inline_verbatim] = STATE(122),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(122),
    [sym_text_mode_at_region] = STATE(122),
    [sym_parameter] = STATE(122),
    [sym_text_env] = STATE(122),
    [sym__display_math] = STATE(122),
    [sym_tex_display_math] = STATE(122),
    [sym_latex_display_math] = STATE(122),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(122),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(122),
    [sym_tex_inline_math] = STATE(122),
    [sym_latex_inline_math] = STATE(122),
    [sym_inline_math_env] = STATE(122),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(122),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(122),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(122),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(122),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(122),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(122),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(122),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(122),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(122),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(122),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(298),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(310),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(325),
    [sym_text] = ACTIONS(325),
  },
  [123] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(328),
  },
  [124] = {
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(330),
    [sym_begin_group] = ACTIONS(330),
    [sym_end_group] = ACTIONS(330),
    [sym_math_shift] = ACTIONS(330),
    [sym_alignment_tab] = ACTIONS(330),
    [sym_parameter_char] = ACTIONS(330),
    [sym_superscript] = ACTIONS(330),
    [sym_subscript] = ACTIONS(330),
    [sym_active_char] = ACTIONS(330),
    [sym_text] = ACTIONS(330),
  },
  [125] = {
    [sym__common] = STATE(210),
    [sym__math_mode_common] = STATE(210),
    [sym__math_mode] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_math_env] = STATE(210),
    [sym_tag] = STATE(210),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(210),
    [sym_opt_math_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(332),
    [sym_alignment_tab] = ACTIONS(334),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(334),
    [sym_subscript] = ACTIONS(334),
    [sym_active_char] = ACTIONS(334),
    [sym_text] = ACTIONS(334),
  },
  [126] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(336),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(338),
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
  [128] = {
    [sym__common] = STATE(214),
    [sym__text_mode_common] = STATE(214),
    [sym_inline_verbatim] = STATE(214),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(214),
    [sym_text_mode] = STATE(213),
    [sym_text_mode_at_region] = STATE(214),
    [sym_parameter] = STATE(214),
    [sym_text_env] = STATE(214),
    [sym__display_math] = STATE(214),
    [sym_tex_display_math] = STATE(214),
    [sym_latex_display_math] = STATE(214),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(214),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(214),
    [sym_tex_inline_math] = STATE(214),
    [sym_latex_inline_math] = STATE(214),
    [sym_inline_math_env] = STATE(214),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(214),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(214),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(214),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(214),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(214),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(214),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(214),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(214),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(214),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(214),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(214),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(214),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(214),
    [sym_opt_text_group] = STATE(214),
    [sym_token] = STATE(214),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(214),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(340),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(342),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(342),
    [sym_text] = ACTIONS(342),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(344),
    [sym_begin_group] = ACTIONS(344),
    [sym_end_group] = ACTIONS(344),
    [sym_math_shift] = ACTIONS(344),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(344),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_text] = ACTIONS(344),
  },
  [130] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(205),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [131] = {
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
  [132] = {
    [sym__common] = STATE(139),
    [sym__math_mode_common] = STATE(139),
    [sym__math_mode] = STATE(139),
    [sym_parameter] = STATE(139),
    [sym_math_env] = STATE(139),
    [sym_tag] = STATE(139),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(139),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(215),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(139),
    [sym_opt_math_group] = STATE(139),
    [sym_token] = STATE(139),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(139),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_text] = ACTIONS(187),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(348),
    [sym_begin_group] = ACTIONS(348),
    [sym_end_group] = ACTIONS(348),
    [sym_math_shift] = ACTIONS(348),
    [sym_alignment_tab] = ACTIONS(348),
    [sym_parameter_char] = ACTIONS(348),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(348),
    [sym_active_char] = ACTIONS(348),
    [sym_text] = ACTIONS(348),
  },
  [134] = {
    [sym__common] = STATE(217),
    [sym__math_mode_common] = STATE(217),
    [sym__math_mode] = STATE(217),
    [sym_parameter] = STATE(217),
    [sym_math_env] = STATE(217),
    [sym_tag] = STATE(217),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(217),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(217),
    [sym_opt_math_group] = STATE(217),
    [sym_token] = STATE(217),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(216),
    [aux_sym_math_mode_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(350),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(350),
    [sym_subscript] = ACTIONS(350),
    [sym_active_char] = ACTIONS(350),
    [sym_text] = ACTIONS(350),
  },
  [135] = {
    [sym__common] = STATE(135),
    [sym__math_mode_common] = STATE(135),
    [sym__math_mode] = STATE(135),
    [sym_parameter] = STATE(135),
    [sym_math_env] = STATE(135),
    [sym_tag] = STATE(135),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(135),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(135),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(135),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(135),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(135),
    [sym_opt_math_group] = STATE(135),
    [sym_token] = STATE(135),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(135),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(358),
    [sym_math_shift] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(366),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [136] = {
    [sym_verb_delim] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [137] = {
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [138] = {
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
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [139] = {
    [sym__common] = STATE(139),
    [sym__math_mode_common] = STATE(139),
    [sym__math_mode] = STATE(139),
    [sym_parameter] = STATE(139),
    [sym_math_env] = STATE(139),
    [sym_tag] = STATE(139),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(139),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(139),
    [sym_opt_math_group] = STATE(139),
    [sym_token] = STATE(139),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(139),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(358),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(366),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(380),
    [sym_begin_group] = ACTIONS(380),
    [sym_end_group] = ACTIONS(380),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(380),
    [sym_parameter_char] = ACTIONS(380),
    [sym_superscript] = ACTIONS(380),
    [sym_subscript] = ACTIONS(380),
    [sym_active_char] = ACTIONS(380),
    [sym_text] = ACTIONS(380),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(382),
    [sym_begin_group] = ACTIONS(382),
    [sym_end_group] = ACTIONS(382),
    [sym_math_shift] = ACTIONS(382),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(382),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [sym_active_char] = ACTIONS(382),
    [sym_text] = ACTIONS(382),
  },
  [143] = {
    [sym_display_math_env_group] = STATE(222),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(384),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(386),
    [sym_begin_group] = ACTIONS(386),
    [sym_end_group] = ACTIONS(386),
    [sym_math_shift] = ACTIONS(386),
    [sym_alignment_tab] = ACTIONS(386),
    [sym_parameter_char] = ACTIONS(386),
    [sym_superscript] = ACTIONS(386),
    [sym_subscript] = ACTIONS(386),
    [sym_active_char] = ACTIONS(386),
    [sym_text] = ACTIONS(386),
  },
  [145] = {
    [sym_inline_math_env_group] = STATE(224),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(388),
  },
  [146] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(390),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(392),
    [sym_begin_group] = ACTIONS(392),
    [sym_end_group] = ACTIONS(392),
    [sym_math_shift] = ACTIONS(392),
    [sym_alignment_tab] = ACTIONS(392),
    [sym_parameter_char] = ACTIONS(392),
    [sym_superscript] = ACTIONS(392),
    [sym_subscript] = ACTIONS(392),
    [sym_active_char] = ACTIONS(392),
    [sym_text] = ACTIONS(392),
  },
  [148] = {
    [sym_verbatim_env_name] = ACTIONS(394),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(396),
    [sym_begin_group] = ACTIONS(396),
    [sym_end_group] = ACTIONS(396),
    [sym_math_shift] = ACTIONS(396),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(396),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_text] = ACTIONS(396),
  },
  [150] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(398),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(400),
    [sym__end_of_line] = ACTIONS(400),
  },
  [151] = {
    [aux_sym_verbatim_text_repeat1] = STATE(151),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(402),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(405),
  },
  [152] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(152),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(400),
    [sym__end_of_line] = ACTIONS(410),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_end_group] = ACTIONS(413),
    [sym_math_shift] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_end_group] = ACTIONS(415),
    [sym_math_shift] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [155] = {
    [sym__common] = STATE(155),
    [sym__text_mode_common] = STATE(155),
    [sym_inline_verbatim] = STATE(155),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(155),
    [sym_text_mode_at_region] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(155),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(155),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(155),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(155),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(155),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(155),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(155),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(155),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(155),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(298),
    [sym_begin_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(310),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [156] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(420),
  },
  [157] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(422),
  },
  [158] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(424),
  },
  [159] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(426),
  },
  [160] = {
    [sym__common] = STATE(231),
    [sym__text_mode_common] = STATE(231),
    [sym_inline_verbatim] = STATE(231),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(231),
    [sym_text_mode_at_region] = STATE(231),
    [sym_parameter] = STATE(231),
    [sym_text_env] = STATE(231),
    [sym__display_math] = STATE(231),
    [sym_tex_display_math] = STATE(231),
    [sym_latex_display_math] = STATE(231),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(231),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(231),
    [sym_tex_inline_math] = STATE(231),
    [sym_latex_inline_math] = STATE(231),
    [sym_inline_math_env] = STATE(231),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(231),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(231),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(231),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(231),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(231),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(231),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(231),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(231),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(231),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(231),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(231),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(231),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(231),
    [sym_opt_text_group] = STATE(231),
    [sym_token] = STATE(231),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(231),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(430),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(430),
    [sym_text] = ACTIONS(430),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(432),
    [sym_parameter_char] = ACTIONS(432),
    [sym_superscript] = ACTIONS(432),
    [sym_subscript] = ACTIONS(432),
    [sym_active_char] = ACTIONS(432),
    [sym_text] = ACTIONS(432),
  },
  [162] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(434),
  },
  [163] = {
    [sym_text_group] = STATE(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
    [sym__end_of_line] = ACTIONS(434),
  },
  [164] = {
    [sym__common] = STATE(236),
    [sym__text_mode_common] = STATE(236),
    [sym_inline_verbatim] = STATE(236),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(236),
    [sym_text_mode_at_region] = STATE(236),
    [sym_parameter] = STATE(236),
    [sym_text_env] = STATE(236),
    [sym__display_math] = STATE(236),
    [sym_tex_display_math] = STATE(236),
    [sym_latex_display_math] = STATE(236),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(236),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(236),
    [sym_tex_inline_math] = STATE(236),
    [sym_latex_inline_math] = STATE(236),
    [sym_inline_math_env] = STATE(236),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(236),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(236),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(236),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(236),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(236),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(236),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(236),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(236),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(236),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(236),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(236),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(236),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(236),
    [sym_opt_text_group] = STATE(236),
    [sym_token] = STATE(236),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(235),
    [aux_sym_text_mode_repeat1] = STATE(236),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(438),
    [sym_text] = ACTIONS(438),
  },
  [165] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(440),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(442),
    [sym__end_of_line] = ACTIONS(442),
  },
  [166] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(444),
  },
  [167] = {
    [sym_text_group] = STATE(238),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
    [sym__end_of_line] = ACTIONS(444),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(446),
    [sym_begin_group] = ACTIONS(446),
    [sym_end_group] = ACTIONS(446),
    [sym_math_shift] = ACTIONS(446),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_text] = ACTIONS(446),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(448),
    [sym_begin_group] = ACTIONS(448),
    [sym_end_group] = ACTIONS(448),
    [sym_math_shift] = ACTIONS(448),
    [sym_alignment_tab] = ACTIONS(448),
    [sym_parameter_char] = ACTIONS(448),
    [sym_superscript] = ACTIONS(448),
    [sym_subscript] = ACTIONS(448),
    [sym_active_char] = ACTIONS(448),
    [sym_text] = ACTIONS(448),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(450),
    [sym_end_group] = ACTIONS(450),
    [sym_math_shift] = ACTIONS(450),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_text] = ACTIONS(450),
  },
  [171] = {
    [anon_sym_EQ] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [172] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(452),
  },
  [173] = {
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
  [174] = {
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
  [175] = {
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
    [sym__name_at] = ACTIONS(253),
  },
  [176] = {
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
  [177] = {
    [sym__common] = STATE(241),
    [sym__text_mode_common] = STATE(241),
    [sym_inline_verbatim] = STATE(241),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_env_at] = STATE(241),
    [sym__display_math_at] = STATE(241),
    [sym_tex_display_math_at] = STATE(241),
    [sym_latex_display_math_at] = STATE(241),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(460),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [178] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(253),
  },
  [179] = {
    [sym__common] = STATE(243),
    [sym__math_mode_common] = STATE(243),
    [sym__math_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_math_env_at] = STATE(243),
    [sym_tag_at] = STATE(243),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(243),
    [sym_opt_math_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_end_group] = ACTIONS(464),
    [sym_alignment_tab] = ACTIONS(466),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(466),
    [sym_subscript] = ACTIONS(466),
    [sym_active_char] = ACTIONS(466),
    [sym_text] = ACTIONS(466),
  },
  [180] = {
    [sym__common] = STATE(185),
    [sym__math_mode_common] = STATE(185),
    [sym__math_mode_at] = STATE(185),
    [sym_math_mode_at] = STATE(244),
    [sym_parameter] = STATE(185),
    [sym_math_env_at] = STATE(185),
    [sym_tag_at] = STATE(185),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(185),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(185),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(185),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(185),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(185),
    [sym_opt_math_group_at] = STATE(185),
    [sym_token_at] = STATE(185),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(185),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(468),
  },
  [182] = {
    [sym_math_text_group_at] = STATE(247),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(470),
  },
  [183] = {
    [sym__common] = STATE(250),
    [sym__math_mode_common] = STATE(250),
    [sym__math_mode_at] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_math_env_at] = STATE(250),
    [sym_tag_at] = STATE(250),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(249),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(250),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(250),
    [sym_opt_math_group_at] = STATE(250),
    [sym_token_at] = STATE(250),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(472),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_text] = ACTIONS(474),
  },
  [184] = {
    [sym__common] = STATE(252),
    [sym__math_mode_common] = STATE(252),
    [sym__math_mode_at] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_math_env_at] = STATE(252),
    [sym_tag_at] = STATE(252),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(252),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(252),
    [sym_opt_math_group_at] = STATE(252),
    [sym_token_at] = STATE(252),
    [sym_begin_opt] = STATE(184),
    [sym_end_opt] = STATE(251),
    [aux_sym_math_mode_at_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_text] = ACTIONS(476),
  },
  [185] = {
    [sym__common] = STATE(253),
    [sym__math_mode_common] = STATE(253),
    [sym__math_mode_at] = STATE(253),
    [sym_parameter] = STATE(253),
    [sym_math_env_at] = STATE(253),
    [sym_tag_at] = STATE(253),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(253),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(253),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(253),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(253),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(253),
    [sym_opt_math_group_at] = STATE(253),
    [sym_token_at] = STATE(253),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(253),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_math_shift] = ACTIONS(478),
    [sym_alignment_tab] = ACTIONS(480),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [sym_active_char] = ACTIONS(480),
    [sym_text] = ACTIONS(480),
  },
  [186] = {
    [anon_sym_makeatother] = ACTIONS(482),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(484),
    [sym_end_group] = ACTIONS(484),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(484),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(484),
    [sym_active_char] = ACTIONS(484),
    [sym_text] = ACTIONS(484),
  },
  [188] = {
    [sym_end_display_math] = STATE(254),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(185),
  },
  [189] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env_at] = STATE(255),
    [sym_tag_at] = STATE(255),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(183),
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
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(478),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(486),
    [sym_active_char] = ACTIONS(486),
    [sym_text] = ACTIONS(486),
  },
  [190] = {
    [sym_end_inline_math] = STATE(256),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(189),
  },
  [191] = {
    [sym_display_math_end] = STATE(257),
    [sym_end_token] = STATE(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [192] = {
    [sym_inline_math_end] = STATE(258),
    [sym_end_token] = STATE(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [193] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(205),
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
    [sym__name_at] = ACTIONS(253),
  },
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_end_group] = ACTIONS(488),
    [sym_math_shift] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(488),
    [sym_superscript] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_active_char] = ACTIONS(488),
    [sym_text] = ACTIONS(488),
  },
  [195] = {
    [sym__common] = STATE(206),
    [sym__text_mode_common] = STATE(206),
    [sym_inline_verbatim] = STATE(206),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_text_env_at] = STATE(206),
    [sym__display_math_at] = STATE(206),
    [sym_tex_display_math_at] = STATE(206),
    [sym_latex_display_math_at] = STATE(206),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(206),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(206),
    [sym_tex_inline_math_at] = STATE(206),
    [sym_latex_inline_math_at] = STATE(206),
    [sym_inline_math_env_at] = STATE(206),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(206),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_end] = STATE(259),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(206),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(206),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(206),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(206),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(206),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(206),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(206),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(206),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(206),
    [sym_opt_text_group_at] = STATE(206),
    [sym_token_at] = STATE(206),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(206),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(285),
    [sym_text] = ACTIONS(285),
  },
  [196] = {
    [sym_text_group_at] = STATE(262),
    [sym_opt_text_group_at] = STATE(263),
    [sym_begin_opt] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(490),
    [sym__end_of_line] = ACTIONS(492),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(494),
    [sym_begin_group] = ACTIONS(494),
    [sym_end_group] = ACTIONS(494),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(494),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_text] = ACTIONS(494),
  },
  [198] = {
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
  [199] = {
    [sym_text_group_at] = STATE(265),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [200] = {
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(498),
    [sym_begin_group] = ACTIONS(498),
    [sym_end_group] = ACTIONS(498),
    [sym_math_shift] = ACTIONS(498),
    [sym_alignment_tab] = ACTIONS(498),
    [sym_parameter_char] = ACTIONS(498),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(498),
    [sym_text] = ACTIONS(498),
  },
  [201] = {
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(500),
    [sym_begin_group] = ACTIONS(500),
    [sym_end_group] = ACTIONS(500),
    [sym_math_shift] = ACTIONS(500),
    [sym_alignment_tab] = ACTIONS(500),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(500),
    [sym_subscript] = ACTIONS(500),
    [sym_active_char] = ACTIONS(500),
    [sym_text] = ACTIONS(500),
  },
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
    [sym__common] = STATE(267),
    [sym__text_mode_common] = STATE(267),
    [sym_inline_verbatim] = STATE(267),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_text_env_at] = STATE(267),
    [sym__display_math_at] = STATE(267),
    [sym_tex_display_math_at] = STATE(267),
    [sym_latex_display_math_at] = STATE(267),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(267),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(267),
    [sym_tex_inline_math_at] = STATE(267),
    [sym_latex_inline_math_at] = STATE(267),
    [sym_inline_math_env_at] = STATE(267),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(267),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(267),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(267),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(267),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(267),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(267),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(267),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(267),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(267),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(267),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(267),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(267),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(267),
    [sym_opt_text_group_at] = STATE(267),
    [sym_token_at] = STATE(267),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(266),
    [aux_sym_text_mode_at_repeat1] = STATE(267),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(508),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(508),
    [sym_text] = ACTIONS(508),
  },
  [206] = {
    [sym__common] = STATE(206),
    [sym__text_mode_common] = STATE(206),
    [sym_inline_verbatim] = STATE(206),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_text_env_at] = STATE(206),
    [sym__display_math_at] = STATE(206),
    [sym_tex_display_math_at] = STATE(206),
    [sym_latex_display_math_at] = STATE(206),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(206),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(206),
    [sym_tex_inline_math_at] = STATE(206),
    [sym_latex_inline_math_at] = STATE(206),
    [sym_inline_math_env_at] = STATE(206),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(206),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(206),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(206),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(206),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(206),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(206),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(206),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(206),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(206),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(206),
    [sym_opt_text_group_at] = STATE(206),
    [sym_token_at] = STATE(206),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(206),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(510),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(516),
    [sym_math_shift] = ACTIONS(519),
    [sym_alignment_tab] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(525),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(522),
    [sym_text] = ACTIONS(522),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(531),
    [sym_begin_group] = ACTIONS(531),
    [sym_end_group] = ACTIONS(531),
    [sym_math_shift] = ACTIONS(531),
    [sym_alignment_tab] = ACTIONS(531),
    [sym_parameter_char] = ACTIONS(531),
    [sym_superscript] = ACTIONS(531),
    [sym_subscript] = ACTIONS(531),
    [sym_active_char] = ACTIONS(531),
    [sym_text] = ACTIONS(531),
  },
  [208] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(208),
    [sym_text_mode_at_region] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env] = STATE(208),
    [sym__display_math] = STATE(208),
    [sym_tex_display_math] = STATE(208),
    [sym_latex_display_math] = STATE(208),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(208),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(208),
    [sym_tex_inline_math] = STATE(208),
    [sym_latex_inline_math] = STATE(208),
    [sym_inline_math_env] = STATE(208),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(208),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(208),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(208),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(208),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(208),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(208),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(208),
    [sym_opt_text_group] = STATE(208),
    [sym_token] = STATE(208),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(298),
    [sym_begin_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(310),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [209] = {
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(536),
    [sym_begin_group] = ACTIONS(536),
    [sym_end_group] = ACTIONS(536),
    [sym_math_shift] = ACTIONS(536),
    [sym_alignment_tab] = ACTIONS(536),
    [sym_parameter_char] = ACTIONS(536),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(536),
    [sym_text] = ACTIONS(536),
  },
  [210] = {
    [sym__common] = STATE(210),
    [sym__math_mode_common] = STATE(210),
    [sym__math_mode] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_math_env] = STATE(210),
    [sym_tag] = STATE(210),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(210),
    [sym_opt_math_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(358),
    [sym_end_group] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(366),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_text] = ACTIONS(538),
  },
  [211] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(541),
  },
  [212] = {
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(543),
    [sym_begin_group] = ACTIONS(543),
    [sym_end_group] = ACTIONS(543),
    [sym_math_shift] = ACTIONS(543),
    [sym_alignment_tab] = ACTIONS(543),
    [sym_parameter_char] = ACTIONS(543),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [sym_active_char] = ACTIONS(543),
    [sym_text] = ACTIONS(543),
  },
  [213] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(545),
  },
  [214] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
    [sym_inline_verbatim] = STATE(122),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(122),
    [sym_text_mode_at_region] = STATE(122),
    [sym_parameter] = STATE(122),
    [sym_text_env] = STATE(122),
    [sym__display_math] = STATE(122),
    [sym_tex_display_math] = STATE(122),
    [sym_latex_display_math] = STATE(122),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(122),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(122),
    [sym_tex_inline_math] = STATE(122),
    [sym_latex_inline_math] = STATE(122),
    [sym_inline_math_env] = STATE(122),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(122),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(122),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(122),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(122),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(122),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(122),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(122),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(122),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(122),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(122),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(547),
    [sym_begin_group] = ACTIONS(547),
    [sym_end_group] = ACTIONS(547),
    [sym_math_shift] = ACTIONS(547),
    [sym_alignment_tab] = ACTIONS(547),
    [sym_parameter_char] = ACTIONS(547),
    [sym_superscript] = ACTIONS(547),
    [sym_subscript] = ACTIONS(547),
    [sym_active_char] = ACTIONS(547),
    [sym_text] = ACTIONS(547),
  },
  [216] = {
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
  [217] = {
    [sym__common] = STATE(217),
    [sym__math_mode_common] = STATE(217),
    [sym__math_mode] = STATE(217),
    [sym_parameter] = STATE(217),
    [sym_math_env] = STATE(217),
    [sym_tag] = STATE(217),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(217),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(217),
    [sym_opt_math_group] = STATE(217),
    [sym_token] = STATE(217),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(358),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(366),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_text] = ACTIONS(551),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_end_group] = ACTIONS(554),
    [sym_math_shift] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(556),
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
  [220] = {
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
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_text] = ACTIONS(558),
  },
  [221] = {
    [sym_display_math_env_name] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(562),
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
  [223] = {
    [sym_inline_math_env_name] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_end_group] = ACTIONS(566),
    [sym_math_shift] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [225] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(568),
  },
  [226] = {
    [anon_sym_LBRACK] = ACTIONS(570),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(570),
    [sym__end_of_line] = ACTIONS(570),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(572),
    [sym_begin_group] = ACTIONS(572),
    [sym_end_group] = ACTIONS(572),
    [sym_math_shift] = ACTIONS(572),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(572),
    [sym_superscript] = ACTIONS(572),
    [sym_subscript] = ACTIONS(572),
    [sym_active_char] = ACTIONS(572),
    [sym_text] = ACTIONS(572),
  },
  [228] = {
    [anon_sym_LBRACK] = ACTIONS(574),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(574),
    [sym__end_of_line] = ACTIONS(574),
  },
  [229] = {
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
    [sym_superscript] = ACTIONS(576),
    [sym_subscript] = ACTIONS(576),
    [sym_active_char] = ACTIONS(576),
    [sym_text] = ACTIONS(576),
  },
  [230] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(157),
  },
  [231] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
    [sym_inline_verbatim] = STATE(122),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(122),
    [sym_text_mode_at_region] = STATE(122),
    [sym_parameter] = STATE(122),
    [sym_text_env] = STATE(122),
    [sym__display_math] = STATE(122),
    [sym_tex_display_math] = STATE(122),
    [sym_latex_display_math] = STATE(122),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(122),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(122),
    [sym_tex_inline_math] = STATE(122),
    [sym_latex_inline_math] = STATE(122),
    [sym_inline_math_env] = STATE(122),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(122),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(122),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(122),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(122),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(122),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(122),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(122),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(122),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(122),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(122),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(578),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [232] = {
    [anon_sym_LBRACK] = ACTIONS(580),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(580),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(580),
    [sym_superscript] = ACTIONS(580),
    [sym_subscript] = ACTIONS(580),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [233] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(582),
  },
  [234] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(287),
    [sym__end_of_line] = ACTIONS(287),
  },
  [235] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(289),
    [sym__end_of_line] = ACTIONS(289),
  },
  [236] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(208),
    [sym_text_mode_at_region] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env] = STATE(208),
    [sym__display_math] = STATE(208),
    [sym_tex_display_math] = STATE(208),
    [sym_latex_display_math] = STATE(208),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(208),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(208),
    [sym_tex_inline_math] = STATE(208),
    [sym_latex_inline_math] = STATE(208),
    [sym_inline_math_env] = STATE(208),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(208),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(208),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(208),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(208),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(208),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(208),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(208),
    [sym_opt_text_group] = STATE(208),
    [sym_token] = STATE(208),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(274),
    [aux_sym_text_mode_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [237] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(586),
    [sym__end_of_line] = ACTIONS(586),
  },
  [238] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(588),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(590),
    [anon_sym_RBRACK] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(590),
    [sym_end_group] = ACTIONS(590),
    [sym_math_shift] = ACTIONS(590),
    [sym_alignment_tab] = ACTIONS(590),
    [sym_parameter_char] = ACTIONS(590),
    [sym_superscript] = ACTIONS(590),
    [sym_subscript] = ACTIONS(590),
    [sym_active_char] = ACTIONS(590),
    [sym_text] = ACTIONS(590),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_RBRACK] = ACTIONS(592),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(592),
    [sym_begin_group] = ACTIONS(592),
    [sym_end_group] = ACTIONS(592),
    [sym_math_shift] = ACTIONS(592),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(592),
    [sym_superscript] = ACTIONS(592),
    [sym_subscript] = ACTIONS(592),
    [sym_active_char] = ACTIONS(592),
    [sym_text] = ACTIONS(592),
  },
  [241] = {
    [sym__common] = STATE(241),
    [sym__text_mode_common] = STATE(241),
    [sym_inline_verbatim] = STATE(241),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_env_at] = STATE(241),
    [sym__display_math_at] = STATE(241),
    [sym_tex_display_math_at] = STATE(241),
    [sym_latex_display_math_at] = STATE(241),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(510),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(516),
    [sym_end_group] = ACTIONS(594),
    [sym_math_shift] = ACTIONS(519),
    [sym_alignment_tab] = ACTIONS(596),
    [sym_parameter_char] = ACTIONS(525),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(596),
    [sym_text] = ACTIONS(596),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(599),
    [sym_begin_group] = ACTIONS(599),
    [sym_end_group] = ACTIONS(599),
    [sym_math_shift] = ACTIONS(599),
    [sym_alignment_tab] = ACTIONS(599),
    [sym_parameter_char] = ACTIONS(599),
    [sym_superscript] = ACTIONS(599),
    [sym_subscript] = ACTIONS(599),
    [sym_active_char] = ACTIONS(599),
    [sym_text] = ACTIONS(599),
  },
  [243] = {
    [sym__common] = STATE(277),
    [sym__math_mode_common] = STATE(277),
    [sym__math_mode_at] = STATE(277),
    [sym_parameter] = STATE(277),
    [sym_math_env_at] = STATE(277),
    [sym_tag_at] = STATE(277),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(277),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(277),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(277),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(277),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(277),
    [sym_opt_math_group_at] = STATE(277),
    [sym_token_at] = STATE(277),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(277),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_end_group] = ACTIONS(601),
    [sym_alignment_tab] = ACTIONS(603),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(603),
    [sym_subscript] = ACTIONS(603),
    [sym_active_char] = ACTIONS(603),
    [sym_text] = ACTIONS(603),
  },
  [244] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(605),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(607),
    [sym_end_group] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(607),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(607),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_text] = ACTIONS(607),
  },
  [246] = {
    [sym__common] = STATE(281),
    [sym__text_mode_common] = STATE(281),
    [sym_inline_verbatim] = STATE(281),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(281),
    [sym_text_mode_at] = STATE(280),
    [sym_parameter] = STATE(281),
    [sym_text_env_at] = STATE(281),
    [sym__display_math_at] = STATE(281),
    [sym_tex_display_math_at] = STATE(281),
    [sym_latex_display_math_at] = STATE(281),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(281),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(281),
    [sym_tex_inline_math_at] = STATE(281),
    [sym_latex_inline_math_at] = STATE(281),
    [sym_inline_math_env_at] = STATE(281),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(281),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(281),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(281),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(281),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(281),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(281),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(281),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(281),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(281),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(281),
    [sym_opt_text_group_at] = STATE(281),
    [sym_token_at] = STATE(281),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(609),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(611),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(611),
    [sym_text] = ACTIONS(611),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_RBRACK] = ACTIONS(613),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(613),
    [sym_end_group] = ACTIONS(613),
    [sym_math_shift] = ACTIONS(613),
    [sym_alignment_tab] = ACTIONS(613),
    [sym_parameter_char] = ACTIONS(613),
    [sym_superscript] = ACTIONS(613),
    [sym_subscript] = ACTIONS(613),
    [sym_active_char] = ACTIONS(613),
    [sym_text] = ACTIONS(613),
  },
  [248] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(205),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(253),
  },
  [249] = {
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_RBRACK] = ACTIONS(615),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(615),
    [sym_begin_group] = ACTIONS(615),
    [sym_end_group] = ACTIONS(615),
    [sym_math_shift] = ACTIONS(615),
    [sym_alignment_tab] = ACTIONS(615),
    [sym_parameter_char] = ACTIONS(615),
    [sym_superscript] = ACTIONS(615),
    [sym_subscript] = ACTIONS(615),
    [sym_active_char] = ACTIONS(615),
    [sym_text] = ACTIONS(615),
  },
  [250] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env_at] = STATE(255),
    [sym_tag_at] = STATE(255),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(282),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(255),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(255),
    [sym_opt_math_group_at] = STATE(255),
    [sym_token_at] = STATE(255),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(472),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(486),
    [sym_active_char] = ACTIONS(486),
    [sym_text] = ACTIONS(486),
  },
  [251] = {
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(617),
    [sym_begin_group] = ACTIONS(617),
    [sym_end_group] = ACTIONS(617),
    [sym_math_shift] = ACTIONS(617),
    [sym_alignment_tab] = ACTIONS(617),
    [sym_parameter_char] = ACTIONS(617),
    [sym_superscript] = ACTIONS(617),
    [sym_subscript] = ACTIONS(617),
    [sym_active_char] = ACTIONS(617),
    [sym_text] = ACTIONS(617),
  },
  [252] = {
    [sym__common] = STATE(284),
    [sym__math_mode_common] = STATE(284),
    [sym__math_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_math_env_at] = STATE(284),
    [sym_tag_at] = STATE(284),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(284),
    [sym_opt_math_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(184),
    [sym_end_opt] = STATE(283),
    [aux_sym_math_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(619),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(619),
    [sym_subscript] = ACTIONS(619),
    [sym_active_char] = ACTIONS(619),
    [sym_text] = ACTIONS(619),
  },
  [253] = {
    [sym__common] = STATE(253),
    [sym__math_mode_common] = STATE(253),
    [sym__math_mode_at] = STATE(253),
    [sym_parameter] = STATE(253),
    [sym_math_env_at] = STATE(253),
    [sym_tag_at] = STATE(253),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(253),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(253),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(253),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(253),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(253),
    [sym_opt_math_group_at] = STATE(253),
    [sym_token_at] = STATE(253),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(253),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(627),
    [sym_math_shift] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [254] = {
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(638),
    [sym_begin_group] = ACTIONS(638),
    [sym_end_group] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(638),
    [sym_alignment_tab] = ACTIONS(638),
    [sym_parameter_char] = ACTIONS(638),
    [sym_superscript] = ACTIONS(638),
    [sym_subscript] = ACTIONS(638),
    [sym_active_char] = ACTIONS(638),
    [sym_text] = ACTIONS(638),
  },
  [255] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env_at] = STATE(255),
    [sym_tag_at] = STATE(255),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(183),
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
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(627),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [sym_text] = ACTIONS(640),
  },
  [256] = {
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(643),
    [sym_begin_group] = ACTIONS(643),
    [sym_end_group] = ACTIONS(643),
    [sym_math_shift] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(643),
    [sym_parameter_char] = ACTIONS(643),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(643),
    [sym_active_char] = ACTIONS(643),
    [sym_text] = ACTIONS(643),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(645),
    [sym_begin_group] = ACTIONS(645),
    [sym_end_group] = ACTIONS(645),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(645),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(645),
    [sym_subscript] = ACTIONS(645),
    [sym_active_char] = ACTIONS(645),
    [sym_text] = ACTIONS(645),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_RBRACK] = ACTIONS(647),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(647),
    [sym_begin_group] = ACTIONS(647),
    [sym_end_group] = ACTIONS(647),
    [sym_math_shift] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(647),
    [sym_parameter_char] = ACTIONS(647),
    [sym_superscript] = ACTIONS(647),
    [sym_subscript] = ACTIONS(647),
    [sym_active_char] = ACTIONS(647),
    [sym_text] = ACTIONS(647),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(649),
    [sym_begin_group] = ACTIONS(649),
    [sym_end_group] = ACTIONS(649),
    [sym_math_shift] = ACTIONS(649),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(649),
    [sym_subscript] = ACTIONS(649),
    [sym_active_char] = ACTIONS(649),
    [sym_text] = ACTIONS(649),
  },
  [260] = {
    [sym__common] = STATE(286),
    [sym__text_mode_common] = STATE(286),
    [sym_inline_verbatim] = STATE(286),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(286),
    [sym_parameter] = STATE(286),
    [sym_text_env_at] = STATE(286),
    [sym__display_math_at] = STATE(286),
    [sym_tex_display_math_at] = STATE(286),
    [sym_latex_display_math_at] = STATE(286),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(286),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(286),
    [sym_tex_inline_math_at] = STATE(286),
    [sym_latex_inline_math_at] = STATE(286),
    [sym_inline_math_env_at] = STATE(286),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(286),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(286),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(286),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(286),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(286),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(286),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(286),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(286),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(286),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(286),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(286),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(286),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(286),
    [sym_opt_text_group_at] = STATE(286),
    [sym_token_at] = STATE(286),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(286),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(651),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(653),
    [sym_text] = ACTIONS(653),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(655),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(655),
    [sym_begin_group] = ACTIONS(655),
    [sym_alignment_tab] = ACTIONS(655),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(655),
    [sym_subscript] = ACTIONS(655),
    [sym_active_char] = ACTIONS(655),
    [sym_text] = ACTIONS(655),
  },
  [262] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(657),
  },
  [263] = {
    [sym_text_group_at] = STATE(288),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(490),
    [sym__end_of_line] = ACTIONS(657),
  },
  [264] = {
    [sym__common] = STATE(290),
    [sym__text_mode_common] = STATE(290),
    [sym_inline_verbatim] = STATE(290),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(290),
    [sym_parameter] = STATE(290),
    [sym_text_env_at] = STATE(290),
    [sym__display_math_at] = STATE(290),
    [sym_tex_display_math_at] = STATE(290),
    [sym_latex_display_math_at] = STATE(290),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(290),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(290),
    [sym_tex_inline_math_at] = STATE(290),
    [sym_latex_inline_math_at] = STATE(290),
    [sym_inline_math_env_at] = STATE(290),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(290),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(290),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(290),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(290),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(290),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(290),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(290),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(290),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(290),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(290),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(290),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(290),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(290),
    [sym_opt_text_group_at] = STATE(290),
    [sym_token_at] = STATE(290),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(289),
    [aux_sym_text_mode_at_repeat1] = STATE(290),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(661),
    [sym_begin_group] = ACTIONS(661),
    [sym_end_group] = ACTIONS(661),
    [sym_math_shift] = ACTIONS(661),
    [sym_alignment_tab] = ACTIONS(661),
    [sym_parameter_char] = ACTIONS(661),
    [sym_superscript] = ACTIONS(661),
    [sym_subscript] = ACTIONS(661),
    [sym_active_char] = ACTIONS(661),
    [sym_text] = ACTIONS(661),
  },
  [266] = {
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_end_group] = ACTIONS(663),
    [sym_math_shift] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_active_char] = ACTIONS(663),
    [sym_text] = ACTIONS(663),
  },
  [267] = {
    [sym__common] = STATE(267),
    [sym__text_mode_common] = STATE(267),
    [sym_inline_verbatim] = STATE(267),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_text_env_at] = STATE(267),
    [sym__display_math_at] = STATE(267),
    [sym_tex_display_math_at] = STATE(267),
    [sym_latex_display_math_at] = STATE(267),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(267),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(267),
    [sym_tex_inline_math_at] = STATE(267),
    [sym_latex_inline_math_at] = STATE(267),
    [sym_inline_math_env_at] = STATE(267),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(267),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(267),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(267),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(267),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(267),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(267),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(267),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(267),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(267),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(267),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(267),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(267),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(267),
    [sym_opt_text_group_at] = STATE(267),
    [sym_token_at] = STATE(267),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(267),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(516),
    [sym_math_shift] = ACTIONS(519),
    [sym_alignment_tab] = ACTIONS(665),
    [sym_parameter_char] = ACTIONS(525),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(665),
    [sym_text] = ACTIONS(665),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_end_group] = ACTIONS(668),
    [sym_math_shift] = ACTIONS(668),
    [sym_alignment_tab] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_text] = ACTIONS(668),
  },
  [269] = {
    [anon_sym_LBRACK] = ACTIONS(670),
    [anon_sym_RBRACK] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(670),
    [sym_begin_group] = ACTIONS(670),
    [sym_end_group] = ACTIONS(670),
    [sym_math_shift] = ACTIONS(670),
    [sym_alignment_tab] = ACTIONS(670),
    [sym_parameter_char] = ACTIONS(670),
    [sym_superscript] = ACTIONS(670),
    [sym_subscript] = ACTIONS(670),
    [sym_active_char] = ACTIONS(670),
    [sym_text] = ACTIONS(670),
  },
  [270] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(672),
  },
  [271] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(574),
    [sym_begin_group] = ACTIONS(574),
    [sym_end_group] = ACTIONS(574),
    [sym_math_shift] = ACTIONS(574),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(574),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [272] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(323),
  },
  [273] = {
    [anon_sym_LBRACK] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(674),
    [sym_begin_group] = ACTIONS(674),
    [sym_alignment_tab] = ACTIONS(674),
    [sym_parameter_char] = ACTIONS(674),
    [sym_superscript] = ACTIONS(674),
    [sym_subscript] = ACTIONS(674),
    [sym_active_char] = ACTIONS(674),
    [sym_text] = ACTIONS(674),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(531),
    [sym__end_of_line] = ACTIONS(531),
  },
  [275] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(676),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(678),
    [sym__end_of_line] = ACTIONS(678),
  },
  [276] = {
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [sym_text] = ACTIONS(680),
  },
  [277] = {
    [sym__common] = STATE(277),
    [sym__math_mode_common] = STATE(277),
    [sym__math_mode_at] = STATE(277),
    [sym_parameter] = STATE(277),
    [sym_math_env_at] = STATE(277),
    [sym_tag_at] = STATE(277),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(277),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(277),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(277),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(277),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(277),
    [sym_opt_math_group_at] = STATE(277),
    [sym_token_at] = STATE(277),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(277),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(627),
    [sym_end_group] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_active_char] = ACTIONS(682),
    [sym_text] = ACTIONS(682),
  },
  [278] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(685),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_end_group] = ACTIONS(687),
    [sym_math_shift] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_active_char] = ACTIONS(687),
    [sym_text] = ACTIONS(687),
  },
  [280] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(689),
  },
  [281] = {
    [sym__common] = STATE(241),
    [sym__text_mode_common] = STATE(241),
    [sym_inline_verbatim] = STATE(241),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_env_at] = STATE(241),
    [sym__display_math_at] = STATE(241),
    [sym_tex_display_math_at] = STATE(241),
    [sym_latex_display_math_at] = STATE(241),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_end_group] = ACTIONS(691),
    [sym_math_shift] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(691),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [sym_text] = ACTIONS(691),
  },
  [283] = {
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
  [284] = {
    [sym__common] = STATE(284),
    [sym__math_mode_common] = STATE(284),
    [sym__math_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_math_env_at] = STATE(284),
    [sym_tag_at] = STATE(284),
    [sym_tag_token] = STATE(182),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(183),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(105),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(284),
    [sym_opt_math_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(184),
    [aux_sym_math_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(624),
    [sym_begin_group] = ACTIONS(627),
    [sym_alignment_tab] = ACTIONS(695),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(695),
    [sym_subscript] = ACTIONS(695),
    [sym_active_char] = ACTIONS(695),
    [sym_text] = ACTIONS(695),
  },
  [285] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(458),
  },
  [286] = {
    [sym__common] = STATE(241),
    [sym__text_mode_common] = STATE(241),
    [sym_inline_verbatim] = STATE(241),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_env_at] = STATE(241),
    [sym__display_math_at] = STATE(241),
    [sym_tex_display_math_at] = STATE(241),
    [sym_latex_display_math_at] = STATE(241),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(113),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(698),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(700),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(700),
    [sym_begin_group] = ACTIONS(700),
    [sym_alignment_tab] = ACTIONS(700),
    [sym_parameter_char] = ACTIONS(700),
    [sym_superscript] = ACTIONS(700),
    [sym_subscript] = ACTIONS(700),
    [sym_active_char] = ACTIONS(700),
    [sym_text] = ACTIONS(700),
  },
  [288] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(702),
  },
  [289] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(506),
    [sym__end_of_line] = ACTIONS(506),
  },
  [290] = {
    [sym__common] = STATE(267),
    [sym__text_mode_common] = STATE(267),
    [sym_inline_verbatim] = STATE(267),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_text_env_at] = STATE(267),
    [sym__display_math_at] = STATE(267),
    [sym_tex_display_math_at] = STATE(267),
    [sym_latex_display_math_at] = STATE(267),
    [sym_begin_display_math] = STATE(99),
    [sym_begin_inline_math] = STATE(100),
    [sym_display_math_env_at] = STATE(267),
    [sym_display_math_begin_at] = STATE(101),
    [sym__inline_math_at] = STATE(267),
    [sym_tex_inline_math_at] = STATE(267),
    [sym_latex_inline_math_at] = STATE(267),
    [sym_inline_math_env_at] = STATE(267),
    [sym_inline_math_begin] = STATE(102),
    [sym_verbatim_env] = STATE(267),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(267),
    [sym_begin] = STATE(103),
    [sym_begin_token] = STATE(104),
    [sym_documentclass] = STATE(267),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(267),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(267),
    [sym_include_token] = STATE(105),
    [sym_section_at] = STATE(267),
    [sym_section_token] = STATE(106),
    [sym_storage] = STATE(267),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(267),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(267),
    [sym_emph_token] = STATE(107),
    [sym_textbf_at] = STATE(267),
    [sym_textbf_token] = STATE(108),
    [sym_textit_at] = STATE(267),
    [sym_textit_token] = STATE(109),
    [sym_texttt_at] = STATE(267),
    [sym_texttt_token] = STATE(110),
    [sym_text_group_at] = STATE(267),
    [sym_opt_text_group_at] = STATE(267),
    [sym_token_at] = STATE(267),
    [sym_begin_opt] = STATE(113),
    [sym_end_opt] = STATE(296),
    [aux_sym_text_mode_at_repeat1] = STATE(267),
    [aux_sym_parameter_repeat1] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(508),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(508),
    [sym_text] = ACTIONS(508),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(570),
    [anon_sym_RBRACK] = ACTIONS(570),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(570),
    [sym_begin_group] = ACTIONS(570),
    [sym_end_group] = ACTIONS(570),
    [sym_math_shift] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(570),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [292] = {
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
  [293] = {
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
  [294] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(592),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(708),
    [sym_begin_group] = ACTIONS(708),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(708),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [296] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(663),
    [sym__end_of_line] = ACTIONS(663),
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
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(121),
  [161] = {.count = 1, .reusable = true}, SHIFT(122),
  [163] = {.count = 1, .reusable = false}, SHIFT(123),
  [165] = {.count = 1, .reusable = true}, SHIFT(124),
  [167] = {.count = 1, .reusable = true}, SHIFT(125),
  [169] = {.count = 1, .reusable = true}, SHIFT(127),
  [171] = {.count = 1, .reusable = true}, SHIFT(128),
  [173] = {.count = 1, .reusable = true}, SHIFT(130),
  [175] = {.count = 1, .reusable = true}, SHIFT(132),
  [177] = {.count = 1, .reusable = true}, SHIFT(134),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(135),
  [183] = {.count = 1, .reusable = true}, SHIFT(136),
  [185] = {.count = 1, .reusable = true}, SHIFT(137),
  [187] = {.count = 1, .reusable = true}, SHIFT(139),
  [189] = {.count = 1, .reusable = true}, SHIFT(140),
  [191] = {.count = 1, .reusable = true}, SHIFT(146),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(148),
  [197] = {.count = 1, .reusable = false}, SHIFT(151),
  [199] = {.count = 1, .reusable = true}, SHIFT(150),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(152),
  [205] = {.count = 1, .reusable = false}, SHIFT(146),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(155),
  [211] = {.count = 1, .reusable = false}, SHIFT(156),
  [213] = {.count = 1, .reusable = false}, SHIFT(157),
  [215] = {.count = 1, .reusable = false}, SHIFT(158),
  [217] = {.count = 1, .reusable = false}, SHIFT(159),
  [219] = {.count = 1, .reusable = true}, SHIFT(160),
  [221] = {.count = 1, .reusable = true}, SHIFT(161),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(165),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(159),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(171),
  [241] = {.count = 1, .reusable = true}, SHIFT(172),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [251] = {.count = 1, .reusable = false}, SHIFT(173),
  [253] = {.count = 1, .reusable = false}, SHIFT(174),
  [255] = {.count = 1, .reusable = true}, SHIFT(175),
  [257] = {.count = 1, .reusable = true}, SHIFT(176),
  [259] = {.count = 1, .reusable = true}, SHIFT(177),
  [261] = {.count = 1, .reusable = true}, SHIFT(178),
  [263] = {.count = 1, .reusable = true}, SHIFT(179),
  [265] = {.count = 1, .reusable = true}, SHIFT(180),
  [267] = {.count = 1, .reusable = true}, SHIFT(185),
  [269] = {.count = 1, .reusable = true}, SHIFT(186),
  [271] = {.count = 1, .reusable = true}, SHIFT(189),
  [273] = {.count = 1, .reusable = true}, SHIFT(193),
  [275] = {.count = 1, .reusable = true}, SHIFT(195),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(205),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [285] = {.count = 1, .reusable = true}, SHIFT(206),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(208),
  [293] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(118),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(31),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(120),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(122),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [332] = {.count = 1, .reusable = true}, SHIFT(209),
  [334] = {.count = 1, .reusable = true}, SHIFT(210),
  [336] = {.count = 1, .reusable = true}, SHIFT(211),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [340] = {.count = 1, .reusable = true}, SHIFT(212),
  [342] = {.count = 1, .reusable = true}, SHIFT(214),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [350] = {.count = 1, .reusable = true}, SHIFT(217),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(51),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(135),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(31),
  [369] = {.count = 1, .reusable = true}, SHIFT(218),
  [371] = {.count = 1, .reusable = true}, SHIFT(219),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(139),
  [378] = {.count = 1, .reusable = true}, SHIFT(220),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [384] = {.count = 1, .reusable = true}, SHIFT(221),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [388] = {.count = 1, .reusable = true}, SHIFT(223),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [394] = {.count = 1, .reusable = true}, SHIFT(225),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [398] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(151),
  [405] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(70),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(152),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [417] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(155),
  [420] = {.count = 1, .reusable = true}, SHIFT(226),
  [422] = {.count = 1, .reusable = true}, SHIFT(227),
  [424] = {.count = 1, .reusable = true}, SHIFT(228),
  [426] = {.count = 1, .reusable = true}, SHIFT(229),
  [428] = {.count = 1, .reusable = true}, SHIFT(230),
  [430] = {.count = 1, .reusable = true}, SHIFT(231),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [434] = {.count = 1, .reusable = true}, SHIFT(232),
  [436] = {.count = 1, .reusable = true}, SHIFT(234),
  [438] = {.count = 1, .reusable = true}, SHIFT(236),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [444] = {.count = 1, .reusable = true}, SHIFT(237),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [452] = {.count = 1, .reusable = true}, SHIFT(239),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(240),
  [462] = {.count = 1, .reusable = true}, SHIFT(241),
  [464] = {.count = 1, .reusable = true}, SHIFT(242),
  [466] = {.count = 1, .reusable = true}, SHIFT(243),
  [468] = {.count = 1, .reusable = true}, SHIFT(245),
  [470] = {.count = 1, .reusable = true}, SHIFT(246),
  [472] = {.count = 1, .reusable = true}, SHIFT(248),
  [474] = {.count = 1, .reusable = true}, SHIFT(250),
  [476] = {.count = 1, .reusable = true}, SHIFT(252),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [480] = {.count = 1, .reusable = true}, SHIFT(253),
  [482] = {.count = 1, .reusable = true}, SHIFT(173),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [486] = {.count = 1, .reusable = true}, SHIFT(255),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [490] = {.count = 1, .reusable = true}, SHIFT(260),
  [492] = {.count = 1, .reusable = true}, SHIFT(261),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [508] = {.count = 1, .reusable = true}, SHIFT(267),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(175),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(96),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(97),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(206),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(31),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(208),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(210),
  [541] = {.count = 1, .reusable = true}, SHIFT(268),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [545] = {.count = 1, .reusable = true}, SHIFT(269),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(217),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [560] = {.count = 1, .reusable = true}, SHIFT(270),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [564] = {.count = 1, .reusable = true}, SHIFT(157),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [568] = {.count = 1, .reusable = true}, SHIFT(271),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [578] = {.count = 1, .reusable = true}, SHIFT(272),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [582] = {.count = 1, .reusable = true}, SHIFT(273),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [588] = {.count = 1, .reusable = true}, SHIFT(275),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [594] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(241),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [601] = {.count = 1, .reusable = true}, SHIFT(276),
  [603] = {.count = 1, .reusable = true}, SHIFT(277),
  [605] = {.count = 1, .reusable = true}, SHIFT(278),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [609] = {.count = 1, .reusable = true}, SHIFT(279),
  [611] = {.count = 1, .reusable = true}, SHIFT(281),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [619] = {.count = 1, .reusable = true}, SHIFT(284),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(178),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(179),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(253),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(31),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(255),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [651] = {.count = 1, .reusable = true}, SHIFT(285),
  [653] = {.count = 1, .reusable = true}, SHIFT(286),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [657] = {.count = 1, .reusable = true}, SHIFT(287),
  [659] = {.count = 1, .reusable = true}, SHIFT(290),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(267),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [672] = {.count = 1, .reusable = true}, SHIFT(291),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(277),
  [685] = {.count = 1, .reusable = true}, SHIFT(292),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [689] = {.count = 1, .reusable = true}, SHIFT(293),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(284),
  [698] = {.count = 1, .reusable = true}, SHIFT(294),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [702] = {.count = 1, .reusable = true}, SHIFT(295),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
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
