#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 291
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 4
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_display_math_env_name = 5,
  sym_inline_math_env_name = 6,
  anon_sym_tag = 7,
  aux_sym_SLASH_DOT_SLASH = 8,
  sym_verbatim_env_name = 9,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 10,
  anon_sym_begin = 11,
  anon_sym_end = 12,
  anon_sym_documentclass = 13,
  anon_sym_usepackage = 14,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 15,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 16,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 17,
  anon_sym_EQ = 18,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 19,
  anon_sym_emph = 20,
  anon_sym_textbf = 21,
  anon_sym_textit = 22,
  anon_sym_texttt = 23,
  anon_sym_makeatletter = 24,
  anon_sym_makeatother = 25,
  sym_magic_comment = 26,
  sym_comment = 27,
  sym__escape = 28,
  sym_begin_group = 29,
  sym_end_group = 30,
  sym_math_shift = 31,
  sym_alignment_tab = 32,
  sym__end_of_line = 33,
  sym_parameter_char = 34,
  sym_superscript = 35,
  sym_subscript = 36,
  sym__name = 37,
  sym__name_at = 38,
  sym_active_char = 39,
  sym_text = 40,
  sym_number = 41,
  sym_document = 42,
  sym__common = 43,
  sym__text_mode_common = 44,
  sym__text_mode = 45,
  sym_text_mode = 46,
  sym__text_mode_at = 47,
  sym_text_mode_at = 48,
  sym_text_mode_at_region = 49,
  sym__math_mode_common = 50,
  sym__math_mode = 51,
  sym_math_mode = 52,
  sym__math_mode_at = 53,
  sym_math_mode_at = 54,
  sym_parameter = 55,
  sym_text_env = 56,
  sym_text_env_at = 57,
  sym_math_env = 58,
  sym_math_env_at = 59,
  sym__display_math = 60,
  sym__display_math_at = 61,
  sym_tex_display_math = 62,
  sym_tex_display_math_at = 63,
  sym_latex_display_math = 64,
  sym_latex_display_math_at = 65,
  sym_begin_display_math = 66,
  sym_end_display_math = 67,
  sym_begin_inline_math = 68,
  sym_end_inline_math = 69,
  sym_display_math_env = 70,
  sym_display_math_env_at = 71,
  sym_display_math_begin = 72,
  sym_display_math_begin_at = 73,
  sym_display_math_end = 74,
  sym_display_math_env_group = 75,
  sym__inline_math = 76,
  sym__inline_math_at = 77,
  sym_tex_inline_math = 78,
  sym_tex_inline_math_at = 79,
  sym_latex_inline_math = 80,
  sym_latex_inline_math_at = 81,
  sym_inline_math_env = 82,
  sym_inline_math_env_at = 83,
  sym_inline_math_begin = 84,
  sym_inline_math_end = 85,
  sym_inline_math_env_group = 86,
  sym_tag = 87,
  sym_tag_at = 88,
  sym_tag_token = 89,
  sym_verbatim_env = 90,
  sym_verbatim_begin = 91,
  sym_verbatim_end = 92,
  sym_verbatim_text = 93,
  sym_verbatim_env_group = 94,
  sym_escaped = 95,
  sym_begin = 96,
  sym_begin_token = 97,
  sym_end = 98,
  sym_end_token = 99,
  sym_documentclass = 100,
  sym_documentclass_token = 101,
  sym_usepackage = 102,
  sym_usepackage_token = 103,
  sym_include = 104,
  sym_include_at = 105,
  sym_include_token = 106,
  sym_section = 107,
  sym_section_at = 108,
  sym_section_token = 109,
  sym_storage = 110,
  sym_storage_token = 111,
  sym_catcode = 112,
  sym_catcode_token = 113,
  sym_emph = 114,
  sym_emph_at = 115,
  sym_emph_token = 116,
  sym_textbf = 117,
  sym_textbf_at = 118,
  sym_textbf_token = 119,
  sym_textit = 120,
  sym_textit_at = 121,
  sym_textit_token = 122,
  sym_texttt = 123,
  sym_texttt_at = 124,
  sym_texttt_token = 125,
  sym_makeatletter = 126,
  sym_makeatletter_token = 127,
  sym_makeatother = 128,
  sym_makeatother_token = 129,
  sym_text_group = 130,
  sym_text_group_at = 131,
  sym_simple_text_group = 132,
  sym_opt_text_group = 133,
  sym_opt_text_group_at = 134,
  sym_math_group = 135,
  sym_math_group_at = 136,
  sym_opt_math_group = 137,
  sym_opt_math_group_at = 138,
  sym_math_text_group = 139,
  sym_math_text_group_at = 140,
  sym_token = 141,
  sym_token_at = 142,
  sym_begin_opt = 143,
  sym_end_opt = 144,
  aux_sym_text_mode_repeat1 = 145,
  aux_sym_text_mode_at_repeat1 = 146,
  aux_sym_math_mode_repeat1 = 147,
  aux_sym_math_mode_at_repeat1 = 148,
  aux_sym_verbatim_text_repeat1 = 149,
  aux_sym_verbatim_text_repeat2 = 150,
  anon_alias_sym_class_name = 151,
  anon_alias_sym_env_name = 152,
  anon_alias_sym_package_name = 153,
  anon_alias_sym_text = 154,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_verbatim_text_repeat2] = "verbatim_text_repeat2",
  [anon_alias_sym_class_name] = "class_name",
  [anon_alias_sym_env_name] = "env_name",
  [anon_alias_sym_package_name] = "package_name",
  [anon_alias_sym_text] = "text",
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
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
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
      if (lookahead == 'd')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 162:
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
    case 163:
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 165:
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
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 168:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 174:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'd')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 179:
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
        ADVANCE(180);
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
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 183:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(184);
      if (lookahead == 'a')
        ADVANCE(193);
      if (lookahead == 'd')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(235);
      if (lookahead == 'g')
        ADVANCE(240);
      if (lookahead == 'l')
        ADVANCE(245);
      if (lookahead == 'm')
        ADVANCE(254);
      if (lookahead == 's')
        ADVANCE(269);
      if (lookahead == 'v')
        ADVANCE(272);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(188);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(198);
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'g')
        ADVANCE(206);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 's')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(203);
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
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(205);
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
      if (lookahead == 'y')
        ADVANCE(200);
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(200);
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
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
        ADVANCE(214);
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(198);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(200);
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
      if (lookahead == 'e')
        ADVANCE(223);
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
        ADVANCE(226);
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
      if (lookahead == 's')
        ADVANCE(200);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
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
      if (lookahead == 'a')
        ADVANCE(202);
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
      if (lookahead == 'a')
        ADVANCE(231);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
        ADVANCE(233);
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
      if (lookahead == 'o')
        ADVANCE(234);
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
      if (lookahead == 'n')
        ADVANCE(200);
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(239);
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
      if (lookahead == 'g')
        ADVANCE(234);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
        ADVANCE(244);
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
      if (lookahead == 'r')
        ADVANCE(200);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(249);
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(192);
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
      if (lookahead == 'a')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'u')
        ADVANCE(262);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
        ADVANCE(259);
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(192);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
        ADVANCE(266);
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(200);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(273);
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
        ADVANCE(276);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
        ADVANCE(192);
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
      if (lookahead == 'V')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 280:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 281:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 282:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 283:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'b')
        ADVANCE(297);
      if (lookahead == 'c')
        ADVANCE(302);
      if (lookahead == 'd')
        ADVANCE(314);
      if (lookahead == 'e')
        ADVANCE(329);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'k')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(345);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead == 'u')
        ADVANCE(392);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(286);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(287);
      if (lookahead == 'p')
        ADVANCE(292);
      if (lookahead == 's')
        ADVANCE(295);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(288);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(293);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(315);
      if (lookahead == 'o')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(330);
      if (lookahead == 'm')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(336);
      if (lookahead == 'p')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(346);
      if (lookahead == 'i')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(295);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(375);
      if (lookahead == 's')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(386);
      if (lookahead == 'i')
        ADVANCE(388);
      if (lookahead == 't')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 404:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 406:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 407:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'b')
        ADVANCE(297);
      if (lookahead == 'c')
        ADVANCE(302);
      if (lookahead == 'd')
        ADVANCE(314);
      if (lookahead == 'e')
        ADVANCE(329);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'k')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead == 'u')
        ADVANCE(392);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 409:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(297);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(411);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'k')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 415:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'a')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'k')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'e')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'a')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 't')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'o')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 't')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'h')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'e')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'r')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 427:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'b')
        ADVANCE(297);
      if (lookahead == 'c')
        ADVANCE(302);
      if (lookahead == 'd')
        ADVANCE(314);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'k')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(408);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead == 'u')
        ADVANCE(392);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(330);
      if (lookahead == 'm')
        ADVANCE(331);
      if (lookahead == 'n')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 431:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(297);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(411);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'k')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 163},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 166},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 165},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 165},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 165},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 165},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 162},
  [49] = {.lex_state = 168},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 165},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 174},
  [65] = {.lex_state = 165},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 178},
  [69] = {.lex_state = 167},
  [70] = {.lex_state = 179},
  [71] = {.lex_state = 165},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 183},
  [75] = {.lex_state = 280},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 280},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 165},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 165},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 281},
  [88] = {.lex_state = 282},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 165},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 283},
  [94] = {.lex_state = 162},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 34},
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
  [109] = {.lex_state = 165},
  [110] = {.lex_state = 165},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 165},
  [114] = {.lex_state = 165},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 165},
  [118] = {.lex_state = 162},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 165},
  [121] = {.lex_state = 162},
  [122] = {.lex_state = 34},
  [123] = {.lex_state = 165},
  [124] = {.lex_state = 162},
  [125] = {.lex_state = 165},
  [126] = {.lex_state = 404},
  [127] = {.lex_state = 165},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 165},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 165},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 406},
  [136] = {.lex_state = 165},
  [137] = {.lex_state = 165},
  [138] = {.lex_state = 34},
  [139] = {.lex_state = 165},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 165},
  [143] = {.lex_state = 183},
  [144] = {.lex_state = 165},
  [145] = {.lex_state = 167},
  [146] = {.lex_state = 178},
  [147] = {.lex_state = 167},
  [148] = {.lex_state = 165},
  [149] = {.lex_state = 165},
  [150] = {.lex_state = 34},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 162},
  [153] = {.lex_state = 162},
  [154] = {.lex_state = 162},
  [155] = {.lex_state = 162},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 280},
  [158] = {.lex_state = 280},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 167},
  [161] = {.lex_state = 280},
  [162] = {.lex_state = 280},
  [163] = {.lex_state = 165},
  [164] = {.lex_state = 165},
  [165] = {.lex_state = 165},
  [166] = {.lex_state = 282},
  [167] = {.lex_state = 163},
  [168] = {.lex_state = 165},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 407},
  [171] = {.lex_state = 165},
  [172] = {.lex_state = 162},
  [173] = {.lex_state = 409},
  [174] = {.lex_state = 162},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 34},
  [177] = {.lex_state = 34},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 36},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 415},
  [182] = {.lex_state = 165},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 34},
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 427},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 280},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 165},
  [194] = {.lex_state = 34},
  [195] = {.lex_state = 165},
  [196] = {.lex_state = 165},
  [197] = {.lex_state = 165},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 165},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 165},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 165},
  [205] = {.lex_state = 162},
  [206] = {.lex_state = 34},
  [207] = {.lex_state = 165},
  [208] = {.lex_state = 162},
  [209] = {.lex_state = 162},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 165},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 165},
  [214] = {.lex_state = 165},
  [215] = {.lex_state = 183},
  [216] = {.lex_state = 165},
  [217] = {.lex_state = 183},
  [218] = {.lex_state = 165},
  [219] = {.lex_state = 162},
  [220] = {.lex_state = 280},
  [221] = {.lex_state = 165},
  [222] = {.lex_state = 280},
  [223] = {.lex_state = 165},
  [224] = {.lex_state = 280},
  [225] = {.lex_state = 162},
  [226] = {.lex_state = 34},
  [227] = {.lex_state = 280},
  [228] = {.lex_state = 280},
  [229] = {.lex_state = 280},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 167},
  [232] = {.lex_state = 280},
  [233] = {.lex_state = 165},
  [234] = {.lex_state = 165},
  [235] = {.lex_state = 162},
  [236] = {.lex_state = 165},
  [237] = {.lex_state = 162},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 165},
  [240] = {.lex_state = 162},
  [241] = {.lex_state = 165},
  [242] = {.lex_state = 431},
  [243] = {.lex_state = 165},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 165},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 34},
  [248] = {.lex_state = 165},
  [249] = {.lex_state = 34},
  [250] = {.lex_state = 165},
  [251] = {.lex_state = 165},
  [252] = {.lex_state = 165},
  [253] = {.lex_state = 165},
  [254] = {.lex_state = 162},
  [255] = {.lex_state = 34},
  [256] = {.lex_state = 280},
  [257] = {.lex_state = 280},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 165},
  [260] = {.lex_state = 165},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 165},
  [263] = {.lex_state = 165},
  [264] = {.lex_state = 162},
  [265] = {.lex_state = 165},
  [266] = {.lex_state = 280},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 280},
  [269] = {.lex_state = 167},
  [270] = {.lex_state = 165},
  [271] = {.lex_state = 162},
  [272] = {.lex_state = 34},
  [273] = {.lex_state = 165},
  [274] = {.lex_state = 162},
  [275] = {.lex_state = 162},
  [276] = {.lex_state = 165},
  [277] = {.lex_state = 165},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 280},
  [280] = {.lex_state = 162},
  [281] = {.lex_state = 34},
  [282] = {.lex_state = 280},
  [283] = {.lex_state = 280},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 165},
  [286] = {.lex_state = 165},
  [287] = {.lex_state = 165},
  [288] = {.lex_state = 280},
  [289] = {.lex_state = 34},
  [290] = {.lex_state = 280},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [sym_document] = STATE(8),
    [sym__common] = STATE(30),
    [sym__text_mode_common] = STATE(30),
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
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatletter] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [4] = {
    [sym__common] = STATE(48),
    [sym__text_mode_common] = STATE(48),
    [sym__text_mode] = STATE(48),
    [sym_text_mode_at_region] = STATE(48),
    [sym_parameter] = STATE(48),
    [sym_text_env] = STATE(48),
    [sym__display_math] = STATE(48),
    [sym_tex_display_math] = STATE(48),
    [sym_latex_display_math] = STATE(48),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(48),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(48),
    [sym_tex_inline_math] = STATE(48),
    [sym_latex_inline_math] = STATE(48),
    [sym_inline_math_env] = STATE(48),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(48),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(48),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(48),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(48),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(48),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(48),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(48),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(48),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(48),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(48),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(48),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(48),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(48),
    [sym_opt_text_group] = STATE(48),
    [sym_token] = STATE(48),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(48),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(59),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(61),
    [sym_text] = ACTIONS(61),
  },
  [5] = {
    [sym__common] = STATE(57),
    [sym__math_mode_common] = STATE(57),
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(52),
    [sym_parameter] = STATE(57),
    [sym_math_env] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(57),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(57),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(57),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(57),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(57),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [6] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(71),
  },
  [7] = {
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(60),
    [sym__math_mode_common] = STATE(60),
    [sym__math_mode] = STATE(60),
    [sym_math_mode] = STATE(59),
    [sym_parameter] = STATE(60),
    [sym_math_env] = STATE(60),
    [sym_tag] = STATE(60),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(60),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(60),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(60),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(60),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(60),
    [sym_opt_math_group] = STATE(60),
    [sym_token] = STATE(60),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [11] = {
    [sym__common] = STATE(60),
    [sym__math_mode_common] = STATE(60),
    [sym__math_mode] = STATE(60),
    [sym_math_mode] = STATE(61),
    [sym_parameter] = STATE(60),
    [sym_math_env] = STATE(60),
    [sym_tag] = STATE(60),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(60),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(60),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(60),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(60),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(60),
    [sym_opt_math_group] = STATE(60),
    [sym_token] = STATE(60),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [12] = {
    [sym__common] = STATE(60),
    [sym__math_mode_common] = STATE(60),
    [sym__math_mode] = STATE(60),
    [sym_math_mode] = STATE(62),
    [sym_parameter] = STATE(60),
    [sym_math_env] = STATE(60),
    [sym_tag] = STATE(60),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(60),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(60),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(60),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(60),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(60),
    [sym_opt_math_group] = STATE(60),
    [sym_token] = STATE(60),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [13] = {
    [sym__common] = STATE(60),
    [sym__math_mode_common] = STATE(60),
    [sym__math_mode] = STATE(60),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(60),
    [sym_math_env] = STATE(60),
    [sym_tag] = STATE(60),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(60),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(60),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(60),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(60),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(60),
    [sym_opt_math_group] = STATE(60),
    [sym_token] = STATE(60),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(60),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [14] = {
    [sym_verbatim_end] = STATE(65),
    [sym_verbatim_text] = STATE(66),
    [sym_end_token] = STATE(67),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [aux_sym_verbatim_text_repeat2] = STATE(69),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
    [sym__end_of_line] = ACTIONS(85),
  },
  [15] = {
    [sym__common] = STATE(73),
    [sym__text_mode_common] = STATE(73),
    [sym__text_mode] = STATE(73),
    [sym_text_mode_at_region] = STATE(73),
    [sym_parameter] = STATE(73),
    [sym_text_env] = STATE(73),
    [sym__display_math] = STATE(73),
    [sym_tex_display_math] = STATE(73),
    [sym_latex_display_math] = STATE(73),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(73),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(73),
    [sym_tex_inline_math] = STATE(73),
    [sym_latex_inline_math] = STATE(73),
    [sym_inline_math_env] = STATE(73),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(73),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(73),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(71),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(73),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(73),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(73),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(73),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(73),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(73),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(73),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(73),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(73),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(73),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(73),
    [sym_opt_text_group] = STATE(73),
    [sym_token] = STATE(73),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(75),
    [sym_inline_math_env_group] = STATE(76),
    [sym_verbatim_env_group] = STATE(77),
    [sym_simple_text_group] = STATE(78),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [17] = {
    [sym_simple_text_group] = STATE(80),
    [sym_opt_text_group] = STATE(81),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [18] = {
    [sym_simple_text_group] = STATE(82),
    [sym_opt_text_group] = STATE(83),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [19] = {
    [sym_text_group] = STATE(84),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(85),
    [sym_opt_text_group] = STATE(86),
    [sym_begin_opt] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(95),
    [sym_end_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(95),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(95),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(95),
    [sym_text] = ACTIONS(95),
  },
  [22] = {
    [sym_escaped] = STATE(88),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
  },
  [23] = {
    [sym_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(90),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(92),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym__common] = STATE(112),
    [sym__text_mode_common] = STATE(112),
    [sym__text_mode_at] = STATE(112),
    [sym_text_mode_at] = STATE(96),
    [sym_parameter] = STATE(112),
    [sym_text_env_at] = STATE(112),
    [sym__display_math_at] = STATE(112),
    [sym_tex_display_math_at] = STATE(112),
    [sym_latex_display_math_at] = STATE(112),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(112),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(112),
    [sym_tex_inline_math_at] = STATE(112),
    [sym_latex_inline_math_at] = STATE(112),
    [sym_inline_math_env_at] = STATE(112),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(112),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(112),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(112),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(112),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(112),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(112),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(112),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(112),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(112),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(112),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(112),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(112),
    [sym_texttt_token] = STATE(108),
    [sym_makeatother] = STATE(109),
    [sym_makeatother_token] = STATE(110),
    [sym_text_group_at] = STATE(112),
    [sym_opt_text_group_at] = STATE(112),
    [sym_token_at] = STATE(112),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [28] = {
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(107),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(107),
    [sym_text] = ACTIONS(107),
  },
  [29] = {
    [sym__common] = STATE(115),
    [sym__text_mode_common] = STATE(115),
    [sym__text_mode] = STATE(115),
    [sym_text_mode_at_region] = STATE(115),
    [sym_parameter] = STATE(115),
    [sym_text_env] = STATE(115),
    [sym__display_math] = STATE(115),
    [sym_tex_display_math] = STATE(115),
    [sym_latex_display_math] = STATE(115),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(115),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(115),
    [sym_tex_inline_math] = STATE(115),
    [sym_latex_inline_math] = STATE(115),
    [sym_inline_math_env] = STATE(115),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(115),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(115),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(115),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(115),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(115),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(115),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(115),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(115),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(115),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(115),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(115),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(115),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(115),
    [sym_opt_text_group] = STATE(115),
    [sym_token] = STATE(115),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(114),
    [aux_sym_text_mode_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [30] = {
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at_region] = STATE(116),
    [sym_parameter] = STATE(116),
    [sym_text_env] = STATE(116),
    [sym__display_math] = STATE(116),
    [sym_tex_display_math] = STATE(116),
    [sym_latex_display_math] = STATE(116),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(116),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(116),
    [sym_tex_inline_math] = STATE(116),
    [sym_latex_inline_math] = STATE(116),
    [sym_inline_math_env] = STATE(116),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(116),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(116),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(116),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(116),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(116),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(116),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(116),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(116),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(116),
    [sym_opt_text_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [31] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [32] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(119),
    [sym_superscript] = ACTIONS(119),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_end_group] = ACTIONS(121),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
  },
  [34] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(125),
  },
  [36] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(127),
  },
  [37] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(129),
  },
  [38] = {
    [anon_sym_LBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [40] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(135),
  },
  [41] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(137),
  },
  [42] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(139),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(141),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(143),
  },
  [45] = {
    [anon_sym_LBRACK] = ACTIONS(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(145),
    [sym_math_shift] = ACTIONS(145),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(145),
    [sym_superscript] = ACTIONS(145),
    [sym_subscript] = ACTIONS(145),
    [sym_active_char] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(147),
    [sym_math_shift] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_text] = ACTIONS(149),
  },
  [48] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [49] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [50] = {
    [sym__common] = STATE(121),
    [sym__math_mode_common] = STATE(121),
    [sym__math_mode] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_math_env] = STATE(121),
    [sym_tag] = STATE(121),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(121),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(121),
    [sym_opt_math_group] = STATE(121),
    [sym_token] = STATE(121),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_text] = ACTIONS(159),
  },
  [51] = {
    [sym__common] = STATE(57),
    [sym__math_mode_common] = STATE(57),
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(122),
    [sym_parameter] = STATE(57),
    [sym_math_env] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(57),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(57),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(57),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(57),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(57),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [52] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(161),
  },
  [53] = {
    [sym_math_text_group] = STATE(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(163),
  },
  [54] = {
    [sym__common] = STATE(128),
    [sym__math_mode_common] = STATE(128),
    [sym__math_mode] = STATE(128),
    [sym_parameter] = STATE(128),
    [sym_math_env] = STATE(128),
    [sym_tag] = STATE(128),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(128),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(127),
    [sym_end_token] = STATE(72),
    [sym_include] = STATE(128),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(128),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(128),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(128),
    [sym_opt_math_group] = STATE(128),
    [sym_token] = STATE(128),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_text] = ACTIONS(167),
  },
  [55] = {
    [sym_simple_text_group] = STATE(78),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [56] = {
    [sym__common] = STATE(130),
    [sym__math_mode_common] = STATE(130),
    [sym__math_mode] = STATE(130),
    [sym_parameter] = STATE(130),
    [sym_math_env] = STATE(130),
    [sym_tag] = STATE(130),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(130),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(130),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(130),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(130),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(130),
    [sym_opt_math_group] = STATE(130),
    [sym_token] = STATE(130),
    [sym_begin_opt] = STATE(56),
    [sym_end_opt] = STATE(129),
    [aux_sym_math_mode_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [57] = {
    [sym__common] = STATE(131),
    [sym__math_mode_common] = STATE(131),
    [sym__math_mode] = STATE(131),
    [sym_parameter] = STATE(131),
    [sym_math_env] = STATE(131),
    [sym_tag] = STATE(131),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(131),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(131),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(131),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(131),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(131),
    [sym_opt_math_group] = STATE(131),
    [sym_token] = STATE(131),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(171),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_end_group] = ACTIONS(175),
    [sym_math_shift] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_text] = ACTIONS(175),
  },
  [59] = {
    [sym_end_display_math] = STATE(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(177),
  },
  [60] = {
    [sym__common] = STATE(134),
    [sym__math_mode_common] = STATE(134),
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_env] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(134),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(134),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(134),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(134),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(134),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(179),
  },
  [61] = {
    [sym_end_inline_math] = STATE(136),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
  },
  [62] = {
    [sym_display_math_end] = STATE(137),
    [sym_end_token] = STATE(138),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [63] = {
    [sym_inline_math_end] = STATE(139),
    [sym_end_token] = STATE(140),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [64] = {
    [anon_sym_end] = ACTIONS(183),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_end_group] = ACTIONS(185),
    [sym_math_shift] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(185),
  },
  [66] = {
    [sym_verbatim_end] = STATE(142),
    [sym_end_token] = STATE(67),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [67] = {
    [sym_verbatim_env_group] = STATE(144),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(187),
  },
  [68] = {
    [aux_sym_verbatim_text_repeat1] = STATE(146),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(191),
  },
  [69] = {
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [aux_sym_verbatim_text_repeat2] = STATE(147),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(193),
    [sym__end_of_line] = ACTIONS(195),
  },
  [70] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(197),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatletter] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_end_group] = ACTIONS(199),
    [sym_math_shift] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [72] = {
    [sym_simple_text_group] = STATE(148),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [73] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
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
    [sym_end] = STATE(149),
    [sym_end_token] = STATE(72),
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
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(201),
    [sym_text] = ACTIONS(201),
  },
  [74] = {
    [sym_display_math_env_name] = ACTIONS(203),
    [sym_inline_math_env_name] = ACTIONS(205),
    [sym_verbatim_env_name] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(209),
  },
  [75] = {
    [sym_text_group] = STATE(157),
    [sym_opt_text_group] = STATE(158),
    [sym_begin_opt] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(213),
  },
  [76] = {
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(215),
  },
  [77] = {
    [sym_text_group] = STATE(161),
    [sym_opt_text_group] = STATE(162),
    [sym_begin_opt] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(217),
  },
  [78] = {
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_text] = ACTIONS(219),
  },
  [79] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(221),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_end_group] = ACTIONS(223),
    [sym_math_shift] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [81] = {
    [sym_simple_text_group] = STATE(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [83] = {
    [sym_simple_text_group] = STATE(164),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(229),
    [sym_end_group] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [86] = {
    [sym_text_group] = STATE(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [87] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [88] = {
    [anon_sym_EQ] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [89] = {
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
  [90] = {
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
  [91] = {
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
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
  },
  [93] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatother] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(245),
  },
  [94] = {
    [sym__common] = STATE(172),
    [sym__text_mode_common] = STATE(172),
    [sym__text_mode_at] = STATE(172),
    [sym_parameter] = STATE(172),
    [sym_text_env_at] = STATE(172),
    [sym__display_math_at] = STATE(172),
    [sym_tex_display_math_at] = STATE(172),
    [sym_latex_display_math_at] = STATE(172),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(172),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(172),
    [sym_tex_inline_math_at] = STATE(172),
    [sym_latex_inline_math_at] = STATE(172),
    [sym_inline_math_env_at] = STATE(172),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(172),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(172),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(172),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(172),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(172),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(172),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(172),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(172),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(172),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(172),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(172),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(172),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(172),
    [sym_opt_text_group_at] = STATE(172),
    [sym_token_at] = STATE(172),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(172),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [95] = {
    [sym__common] = STATE(180),
    [sym__math_mode_common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(176),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(257),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [96] = {
    [sym_makeatother] = STATE(182),
    [sym_makeatother_token] = STATE(110),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
  },
  [97] = {
    [sym__common] = STATE(184),
    [sym__math_mode_common] = STATE(184),
    [sym__math_mode_at] = STATE(184),
    [sym_math_mode_at] = STATE(183),
    [sym_parameter] = STATE(184),
    [sym_math_env_at] = STATE(184),
    [sym_tag_at] = STATE(184),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(184),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(184),
    [sym_opt_math_group_at] = STATE(184),
    [sym_token_at] = STATE(184),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [98] = {
    [sym__common] = STATE(184),
    [sym__math_mode_common] = STATE(184),
    [sym__math_mode_at] = STATE(184),
    [sym_math_mode_at] = STATE(185),
    [sym_parameter] = STATE(184),
    [sym_math_env_at] = STATE(184),
    [sym_tag_at] = STATE(184),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(184),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(184),
    [sym_opt_math_group_at] = STATE(184),
    [sym_token_at] = STATE(184),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [99] = {
    [sym__common] = STATE(184),
    [sym__math_mode_common] = STATE(184),
    [sym__math_mode_at] = STATE(184),
    [sym_math_mode_at] = STATE(186),
    [sym_parameter] = STATE(184),
    [sym_math_env_at] = STATE(184),
    [sym_tag_at] = STATE(184),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(184),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(184),
    [sym_opt_math_group_at] = STATE(184),
    [sym_token_at] = STATE(184),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [100] = {
    [sym__common] = STATE(184),
    [sym__math_mode_common] = STATE(184),
    [sym__math_mode_at] = STATE(184),
    [sym_math_mode_at] = STATE(187),
    [sym_parameter] = STATE(184),
    [sym_math_env_at] = STATE(184),
    [sym_tag_at] = STATE(184),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(184),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(184),
    [sym_opt_math_group_at] = STATE(184),
    [sym_token_at] = STATE(184),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [101] = {
    [sym__common] = STATE(190),
    [sym__text_mode_common] = STATE(190),
    [sym__text_mode_at] = STATE(190),
    [sym_parameter] = STATE(190),
    [sym_text_env_at] = STATE(190),
    [sym__display_math_at] = STATE(190),
    [sym_tex_display_math_at] = STATE(190),
    [sym_latex_display_math_at] = STATE(190),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(190),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(190),
    [sym_tex_inline_math_at] = STATE(190),
    [sym_latex_inline_math_at] = STATE(190),
    [sym_inline_math_env_at] = STATE(190),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(190),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(190),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_end] = STATE(189),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(190),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(190),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(190),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(190),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(190),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(190),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(190),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(190),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(190),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(190),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(190),
    [sym_opt_text_group_at] = STATE(190),
    [sym_token_at] = STATE(190),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [102] = {
    [sym_display_math_env_group] = STATE(191),
    [sym_inline_math_env_group] = STATE(76),
    [sym_verbatim_env_group] = STATE(77),
    [sym_simple_text_group] = STATE(78),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [103] = {
    [sym_text_group_at] = STATE(192),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [104] = {
    [sym_text_group_at] = STATE(193),
    [sym_opt_text_group_at] = STATE(194),
    [sym_begin_opt] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [105] = {
    [sym_text_group_at] = STATE(195),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [106] = {
    [sym_text_group_at] = STATE(196),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [107] = {
    [sym_text_group_at] = STATE(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [108] = {
    [sym_text_group_at] = STATE(198),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(271),
    [sym_begin_group] = ACTIONS(271),
    [sym_end_group] = ACTIONS(271),
    [sym_math_shift] = ACTIONS(271),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [111] = {
    [sym__common] = STATE(200),
    [sym__text_mode_common] = STATE(200),
    [sym__text_mode_at] = STATE(200),
    [sym_parameter] = STATE(200),
    [sym_text_env_at] = STATE(200),
    [sym__display_math_at] = STATE(200),
    [sym_tex_display_math_at] = STATE(200),
    [sym_latex_display_math_at] = STATE(200),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(200),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(200),
    [sym_tex_inline_math_at] = STATE(200),
    [sym_latex_inline_math_at] = STATE(200),
    [sym_inline_math_env_at] = STATE(200),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(200),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(200),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(200),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(200),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(200),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(200),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(200),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(200),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(200),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(200),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(200),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(200),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(200),
    [sym_opt_text_group_at] = STATE(200),
    [sym_token_at] = STATE(200),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(199),
    [aux_sym_text_mode_at_repeat1] = STATE(200),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [112] = {
    [sym__common] = STATE(201),
    [sym__text_mode_common] = STATE(201),
    [sym__text_mode_at] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_env_at] = STATE(201),
    [sym__display_math_at] = STATE(201),
    [sym_tex_display_math_at] = STATE(201),
    [sym_latex_display_math_at] = STATE(201),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(201),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(201),
    [sym_tex_inline_math_at] = STATE(201),
    [sym_latex_inline_math_at] = STATE(201),
    [sym_inline_math_env_at] = STATE(201),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(201),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(201),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(201),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(201),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(201),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(201),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(201),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(201),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(201),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(201),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(201),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(201),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(201),
    [sym_opt_text_group_at] = STATE(201),
    [sym_token_at] = STATE(201),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [113] = {
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
  [114] = {
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
  [115] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym__text_mode] = STATE(203),
    [sym_text_mode_at_region] = STATE(203),
    [sym_parameter] = STATE(203),
    [sym_text_env] = STATE(203),
    [sym__display_math] = STATE(203),
    [sym_tex_display_math] = STATE(203),
    [sym_latex_display_math] = STATE(203),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(203),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(203),
    [sym_tex_inline_math] = STATE(203),
    [sym_latex_inline_math] = STATE(203),
    [sym_inline_math_env] = STATE(203),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(203),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(203),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(203),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(203),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(203),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(203),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(203),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(203),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(203),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(203),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(203),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(203),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(203),
    [sym_opt_text_group] = STATE(203),
    [sym_token] = STATE(203),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(202),
    [aux_sym_text_mode_repeat1] = STATE(203),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
  },
  [116] = {
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at_region] = STATE(116),
    [sym_parameter] = STATE(116),
    [sym_text_env] = STATE(116),
    [sym__display_math] = STATE(116),
    [sym_tex_display_math] = STATE(116),
    [sym_latex_display_math] = STATE(116),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(116),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(116),
    [sym_tex_inline_math] = STATE(116),
    [sym_latex_inline_math] = STATE(116),
    [sym_inline_math_env] = STATE(116),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(116),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(116),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(116),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(116),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(116),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(116),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(116),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(116),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(116),
    [sym_opt_text_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(290),
    [sym_begin_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(299),
    [sym_parameter_char] = ACTIONS(302),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(299),
    [sym_text] = ACTIONS(299),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(308),
    [sym_begin_group] = ACTIONS(308),
    [sym_end_group] = ACTIONS(308),
    [sym_math_shift] = ACTIONS(308),
    [sym_alignment_tab] = ACTIONS(308),
    [sym_parameter_char] = ACTIONS(308),
    [sym_superscript] = ACTIONS(308),
    [sym_subscript] = ACTIONS(308),
    [sym_active_char] = ACTIONS(308),
    [sym_text] = ACTIONS(308),
  },
  [118] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
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
    [anon_sym_LBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(290),
    [sym_begin_group] = ACTIONS(293),
    [sym_end_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(310),
    [sym_parameter_char] = ACTIONS(302),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(310),
    [sym_text] = ACTIONS(310),
  },
  [119] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(313),
  },
  [120] = {
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_text] = ACTIONS(315),
  },
  [121] = {
    [sym__common] = STATE(205),
    [sym__math_mode_common] = STATE(205),
    [sym__math_mode] = STATE(205),
    [sym_parameter] = STATE(205),
    [sym_math_env] = STATE(205),
    [sym_tag] = STATE(205),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(205),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(205),
    [sym_opt_math_group] = STATE(205),
    [sym_token] = STATE(205),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(205),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [122] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(321),
  },
  [123] = {
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
  [124] = {
    [sym__common] = STATE(209),
    [sym__text_mode_common] = STATE(209),
    [sym__text_mode] = STATE(209),
    [sym_text_mode] = STATE(208),
    [sym_text_mode_at_region] = STATE(209),
    [sym_parameter] = STATE(209),
    [sym_text_env] = STATE(209),
    [sym__display_math] = STATE(209),
    [sym_tex_display_math] = STATE(209),
    [sym_latex_display_math] = STATE(209),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(209),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(209),
    [sym_tex_inline_math] = STATE(209),
    [sym_latex_inline_math] = STATE(209),
    [sym_inline_math_env] = STATE(209),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(209),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(209),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(209),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(209),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(209),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(209),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(209),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(209),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(209),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(209),
    [sym_opt_text_group] = STATE(209),
    [sym_token] = STATE(209),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [125] = {
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(329),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [126] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [127] = {
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
  [128] = {
    [sym__common] = STATE(134),
    [sym__math_mode_common] = STATE(134),
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_env] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(134),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(210),
    [sym_end_token] = STATE(72),
    [sym_include] = STATE(134),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(134),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(134),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(134),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(179),
  },
  [129] = {
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
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [130] = {
    [sym__common] = STATE(212),
    [sym__math_mode_common] = STATE(212),
    [sym__math_mode] = STATE(212),
    [sym_parameter] = STATE(212),
    [sym_math_env] = STATE(212),
    [sym_tag] = STATE(212),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(212),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(212),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(212),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(212),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(212),
    [sym_opt_math_group] = STATE(212),
    [sym_token] = STATE(212),
    [sym_begin_opt] = STATE(56),
    [sym_end_opt] = STATE(211),
    [aux_sym_math_mode_repeat1] = STATE(212),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(335),
    [sym_subscript] = ACTIONS(335),
    [sym_active_char] = ACTIONS(335),
    [sym_text] = ACTIONS(335),
  },
  [131] = {
    [sym__common] = STATE(131),
    [sym__math_mode_common] = STATE(131),
    [sym__math_mode] = STATE(131),
    [sym_parameter] = STATE(131),
    [sym_math_env] = STATE(131),
    [sym_tag] = STATE(131),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(131),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(131),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(131),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(131),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(131),
    [sym_opt_math_group] = STATE(131),
    [sym_token] = STATE(131),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(348),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(348),
    [sym_active_char] = ACTIONS(348),
    [sym_text] = ACTIONS(348),
  },
  [132] = {
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(356),
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
  [134] = {
    [sym__common] = STATE(134),
    [sym__math_mode_common] = STATE(134),
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_env] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(134),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(134),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(134),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(134),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(134),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(358),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(358),
    [sym_subscript] = ACTIONS(358),
    [sym_active_char] = ACTIONS(358),
    [sym_text] = ACTIONS(358),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [136] = {
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
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_end_group] = ACTIONS(365),
    [sym_math_shift] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [138] = {
    [sym_display_math_env_group] = STATE(216),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(367),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(369),
    [sym_begin_group] = ACTIONS(369),
    [sym_end_group] = ACTIONS(369),
    [sym_math_shift] = ACTIONS(369),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(369),
    [sym_active_char] = ACTIONS(369),
    [sym_text] = ACTIONS(369),
  },
  [140] = {
    [sym_inline_math_env_group] = STATE(218),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(371),
  },
  [141] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(373),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_end_group] = ACTIONS(375),
    [sym_math_shift] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [143] = {
    [sym_verbatim_env_name] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [144] = {
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
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [145] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(383),
    [sym__end_of_line] = ACTIONS(383),
  },
  [146] = {
    [aux_sym_verbatim_text_repeat1] = STATE(146),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(388),
  },
  [147] = {
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [aux_sym_verbatim_text_repeat2] = STATE(147),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(390),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(383),
    [sym__end_of_line] = ACTIONS(393),
  },
  [148] = {
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
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(398),
    [sym_begin_group] = ACTIONS(398),
    [sym_end_group] = ACTIONS(398),
    [sym_math_shift] = ACTIONS(398),
    [sym_alignment_tab] = ACTIONS(398),
    [sym_parameter_char] = ACTIONS(398),
    [sym_superscript] = ACTIONS(398),
    [sym_subscript] = ACTIONS(398),
    [sym_active_char] = ACTIONS(398),
    [sym_text] = ACTIONS(398),
  },
  [150] = {
    [sym__common] = STATE(150),
    [sym__text_mode_common] = STATE(150),
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
    [sym_textbf] = STATE(150),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(150),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(150),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(150),
    [sym_token] = STATE(150),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(150),
    [anon_sym_LBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(290),
    [sym_begin_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(400),
    [sym_parameter_char] = ACTIONS(302),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(400),
    [sym_text] = ACTIONS(400),
  },
  [151] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(403),
  },
  [152] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(405),
  },
  [153] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(407),
  },
  [154] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(409),
  },
  [155] = {
    [sym__common] = STATE(225),
    [sym__text_mode_common] = STATE(225),
    [sym__text_mode] = STATE(225),
    [sym_text_mode_at_region] = STATE(225),
    [sym_parameter] = STATE(225),
    [sym_text_env] = STATE(225),
    [sym__display_math] = STATE(225),
    [sym_tex_display_math] = STATE(225),
    [sym_latex_display_math] = STATE(225),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(225),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(225),
    [sym_tex_inline_math] = STATE(225),
    [sym_latex_inline_math] = STATE(225),
    [sym_inline_math_env] = STATE(225),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(225),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(225),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(225),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(225),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(225),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(225),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(225),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(225),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(225),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(225),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(225),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(225),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(225),
    [sym_opt_text_group] = STATE(225),
    [sym_token] = STATE(225),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(225),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(411),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [157] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(417),
  },
  [158] = {
    [sym_text_group] = STATE(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(417),
  },
  [159] = {
    [sym__common] = STATE(230),
    [sym__text_mode_common] = STATE(230),
    [sym__text_mode] = STATE(230),
    [sym_text_mode_at_region] = STATE(230),
    [sym_parameter] = STATE(230),
    [sym_text_env] = STATE(230),
    [sym__display_math] = STATE(230),
    [sym_tex_display_math] = STATE(230),
    [sym_latex_display_math] = STATE(230),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(230),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(230),
    [sym_tex_inline_math] = STATE(230),
    [sym_latex_inline_math] = STATE(230),
    [sym_inline_math_env] = STATE(230),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(230),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(230),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(230),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(230),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(230),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(230),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(230),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(230),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(230),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(230),
    [sym_opt_text_group] = STATE(230),
    [sym_token] = STATE(230),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(229),
    [aux_sym_text_mode_repeat1] = STATE(230),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [160] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(423),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym__end_of_line] = ACTIONS(425),
  },
  [161] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(427),
  },
  [162] = {
    [sym_text_group] = STATE(232),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(427),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(429),
    [sym_end_group] = ACTIONS(429),
    [sym_math_shift] = ACTIONS(429),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(429),
    [sym_superscript] = ACTIONS(429),
    [sym_subscript] = ACTIONS(429),
    [sym_active_char] = ACTIONS(429),
    [sym_text] = ACTIONS(429),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_end_group] = ACTIONS(431),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(433),
    [sym_begin_group] = ACTIONS(433),
    [sym_end_group] = ACTIONS(433),
    [sym_math_shift] = ACTIONS(433),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(433),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(433),
    [sym_active_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(121),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [167] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(435),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(437),
    [sym_end_group] = ACTIONS(437),
    [sym_math_shift] = ACTIONS(437),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(437),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(439),
    [sym_end_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(439),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(439),
    [sym_active_char] = ACTIONS(439),
    [sym_text] = ACTIONS(439),
  },
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(245),
  },
  [171] = {
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(441),
    [sym_end_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(441),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [172] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [173] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(245),
  },
  [174] = {
    [sym__common] = STATE(237),
    [sym__math_mode_common] = STATE(237),
    [sym__math_mode_at] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_env_at] = STATE(237),
    [sym_tag_at] = STATE(237),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(237),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(237),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(237),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(237),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(237),
    [sym_opt_math_group_at] = STATE(237),
    [sym_token_at] = STATE(237),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(447),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [175] = {
    [sym__common] = STATE(180),
    [sym__math_mode_common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(238),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [176] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(451),
  },
  [177] = {
    [sym_math_text_group_at] = STATE(241),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(453),
  },
  [178] = {
    [sym__common] = STATE(244),
    [sym__math_mode_common] = STATE(244),
    [sym__math_mode_at] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_math_env_at] = STATE(244),
    [sym_tag_at] = STATE(244),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(243),
    [sym_end_token] = STATE(72),
    [sym_include_at] = STATE(244),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(244),
    [sym_opt_math_group_at] = STATE(244),
    [sym_token_at] = STATE(244),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(244),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [179] = {
    [sym__common] = STATE(246),
    [sym__math_mode_common] = STATE(246),
    [sym__math_mode_at] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_math_env_at] = STATE(246),
    [sym_tag_at] = STATE(246),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(246),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(246),
    [sym_opt_math_group_at] = STATE(246),
    [sym_token_at] = STATE(246),
    [sym_begin_opt] = STATE(179),
    [sym_end_opt] = STATE(245),
    [aux_sym_math_mode_at_repeat1] = STATE(246),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(459),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(459),
    [sym_subscript] = ACTIONS(459),
    [sym_active_char] = ACTIONS(459),
    [sym_text] = ACTIONS(459),
  },
  [180] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode_at] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env_at] = STATE(247),
    [sym_tag_at] = STATE(247),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(247),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(247),
    [sym_opt_math_group_at] = STATE(247),
    [sym_token_at] = STATE(247),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(247),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(461),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(463),
    [sym_subscript] = ACTIONS(463),
    [sym_active_char] = ACTIONS(463),
    [sym_text] = ACTIONS(463),
  },
  [181] = {
    [anon_sym_makeatother] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [182] = {
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
    [sym_superscript] = ACTIONS(467),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(467),
    [sym_text] = ACTIONS(467),
  },
  [183] = {
    [sym_end_display_math] = STATE(248),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(177),
  },
  [184] = {
    [sym__common] = STATE(249),
    [sym__math_mode_common] = STATE(249),
    [sym__math_mode_at] = STATE(249),
    [sym_parameter] = STATE(249),
    [sym_math_env_at] = STATE(249),
    [sym_tag_at] = STATE(249),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(249),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(249),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(249),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(249),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(249),
    [sym_opt_math_group_at] = STATE(249),
    [sym_token_at] = STATE(249),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [185] = {
    [sym_end_inline_math] = STATE(250),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
  },
  [186] = {
    [sym_display_math_end] = STATE(251),
    [sym_end_token] = STATE(138),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [187] = {
    [sym_inline_math_end] = STATE(252),
    [sym_end_token] = STATE(140),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [188] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(197),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(245),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(471),
    [sym_end_group] = ACTIONS(471),
    [sym_math_shift] = ACTIONS(471),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(471),
    [sym_superscript] = ACTIONS(471),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(471),
    [sym_text] = ACTIONS(471),
  },
  [190] = {
    [sym__common] = STATE(201),
    [sym__text_mode_common] = STATE(201),
    [sym__text_mode_at] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_env_at] = STATE(201),
    [sym__display_math_at] = STATE(201),
    [sym_tex_display_math_at] = STATE(201),
    [sym_latex_display_math_at] = STATE(201),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(201),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(201),
    [sym_tex_inline_math_at] = STATE(201),
    [sym_latex_inline_math_at] = STATE(201),
    [sym_inline_math_env_at] = STATE(201),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(201),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(201),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_end] = STATE(253),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(201),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(201),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(201),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(201),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(201),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(201),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(201),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(201),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(201),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(201),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(201),
    [sym_opt_text_group_at] = STATE(201),
    [sym_token_at] = STATE(201),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [191] = {
    [sym_text_group_at] = STATE(256),
    [sym_opt_text_group_at] = STATE(257),
    [sym_begin_opt] = STATE(258),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(473),
    [sym__end_of_line] = ACTIONS(475),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(477),
    [sym_begin_group] = ACTIONS(477),
    [sym_end_group] = ACTIONS(477),
    [sym_math_shift] = ACTIONS(477),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(477),
    [sym_superscript] = ACTIONS(477),
    [sym_subscript] = ACTIONS(477),
    [sym_active_char] = ACTIONS(477),
    [sym_text] = ACTIONS(477),
  },
  [193] = {
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_end_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(479),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [sym_text] = ACTIONS(479),
  },
  [194] = {
    [sym_text_group_at] = STATE(259),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [195] = {
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(481),
    [sym_end_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(481),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_text] = ACTIONS(481),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_end_group] = ACTIONS(483),
    [sym_math_shift] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_text] = ACTIONS(483),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(485),
    [sym_begin_group] = ACTIONS(485),
    [sym_end_group] = ACTIONS(485),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(485),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(487),
    [sym_end_group] = ACTIONS(487),
    [sym_math_shift] = ACTIONS(487),
    [sym_alignment_tab] = ACTIONS(487),
    [sym_parameter_char] = ACTIONS(487),
    [sym_superscript] = ACTIONS(487),
    [sym_subscript] = ACTIONS(487),
    [sym_active_char] = ACTIONS(487),
    [sym_text] = ACTIONS(487),
  },
  [199] = {
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(489),
    [sym_begin_group] = ACTIONS(489),
    [sym_end_group] = ACTIONS(489),
    [sym_math_shift] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(489),
    [sym_parameter_char] = ACTIONS(489),
    [sym_superscript] = ACTIONS(489),
    [sym_subscript] = ACTIONS(489),
    [sym_active_char] = ACTIONS(489),
    [sym_text] = ACTIONS(489),
  },
  [200] = {
    [sym__common] = STATE(261),
    [sym__text_mode_common] = STATE(261),
    [sym__text_mode_at] = STATE(261),
    [sym_parameter] = STATE(261),
    [sym_text_env_at] = STATE(261),
    [sym__display_math_at] = STATE(261),
    [sym_tex_display_math_at] = STATE(261),
    [sym_latex_display_math_at] = STATE(261),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(261),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(261),
    [sym_tex_inline_math_at] = STATE(261),
    [sym_latex_inline_math_at] = STATE(261),
    [sym_inline_math_env_at] = STATE(261),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(261),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(261),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(261),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(261),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(261),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(261),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(261),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(261),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(261),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(261),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(261),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(261),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(261),
    [sym_opt_text_group_at] = STATE(261),
    [sym_token_at] = STATE(261),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(260),
    [aux_sym_text_mode_at_repeat1] = STATE(261),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [201] = {
    [sym__common] = STATE(201),
    [sym__text_mode_common] = STATE(201),
    [sym__text_mode_at] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_env_at] = STATE(201),
    [sym__display_math_at] = STATE(201),
    [sym_tex_display_math_at] = STATE(201),
    [sym_latex_display_math_at] = STATE(201),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(201),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(201),
    [sym_tex_inline_math_at] = STATE(201),
    [sym_latex_inline_math_at] = STATE(201),
    [sym_inline_math_env_at] = STATE(201),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(201),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(201),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(201),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(201),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(201),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(201),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(201),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(201),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(201),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(201),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(201),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(201),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(201),
    [sym_opt_text_group_at] = STATE(201),
    [sym_token_at] = STATE(201),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(499),
    [sym_math_shift] = ACTIONS(502),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(514),
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
  [203] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym__text_mode] = STATE(203),
    [sym_text_mode_at_region] = STATE(203),
    [sym_parameter] = STATE(203),
    [sym_text_env] = STATE(203),
    [sym__display_math] = STATE(203),
    [sym_tex_display_math] = STATE(203),
    [sym_latex_display_math] = STATE(203),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(203),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(203),
    [sym_tex_inline_math] = STATE(203),
    [sym_latex_inline_math] = STATE(203),
    [sym_inline_math_env] = STATE(203),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(203),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(203),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(203),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(203),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(203),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(203),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(203),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(203),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(203),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(203),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(203),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(203),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(203),
    [sym_opt_text_group] = STATE(203),
    [sym_token] = STATE(203),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(203),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(290),
    [sym_begin_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(302),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(516),
    [sym_text] = ACTIONS(516),
  },
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(519),
    [sym_begin_group] = ACTIONS(519),
    [sym_end_group] = ACTIONS(519),
    [sym_math_shift] = ACTIONS(519),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(519),
    [sym_superscript] = ACTIONS(519),
    [sym_subscript] = ACTIONS(519),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [205] = {
    [sym__common] = STATE(205),
    [sym__math_mode_common] = STATE(205),
    [sym__math_mode] = STATE(205),
    [sym_parameter] = STATE(205),
    [sym_math_env] = STATE(205),
    [sym_tag] = STATE(205),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(205),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(205),
    [sym_opt_math_group] = STATE(205),
    [sym_token] = STATE(205),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(205),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(521),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(521),
    [sym_subscript] = ACTIONS(521),
    [sym_active_char] = ACTIONS(521),
    [sym_text] = ACTIONS(521),
  },
  [206] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(524),
  },
  [207] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_end_group] = ACTIONS(526),
    [sym_math_shift] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_text] = ACTIONS(526),
  },
  [208] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(528),
  },
  [209] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(113),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(530),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_end_group] = ACTIONS(530),
    [sym_math_shift] = ACTIONS(530),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_text] = ACTIONS(530),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(532),
    [sym_begin_group] = ACTIONS(532),
    [sym_end_group] = ACTIONS(532),
    [sym_math_shift] = ACTIONS(532),
    [sym_alignment_tab] = ACTIONS(532),
    [sym_parameter_char] = ACTIONS(532),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(532),
    [sym_text] = ACTIONS(532),
  },
  [212] = {
    [sym__common] = STATE(212),
    [sym__math_mode_common] = STATE(212),
    [sym__math_mode] = STATE(212),
    [sym_parameter] = STATE(212),
    [sym_math_env] = STATE(212),
    [sym_tag] = STATE(212),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(212),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(212),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(212),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(212),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(212),
    [sym_opt_math_group] = STATE(212),
    [sym_token] = STATE(212),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(212),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(346),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_text] = ACTIONS(534),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(537),
    [sym_begin_group] = ACTIONS(537),
    [sym_end_group] = ACTIONS(537),
    [sym_math_shift] = ACTIONS(537),
    [sym_alignment_tab] = ACTIONS(537),
    [sym_parameter_char] = ACTIONS(537),
    [sym_superscript] = ACTIONS(537),
    [sym_subscript] = ACTIONS(537),
    [sym_active_char] = ACTIONS(537),
    [sym_text] = ACTIONS(537),
  },
  [214] = {
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
  [215] = {
    [sym_display_math_env_name] = ACTIONS(541),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(543),
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
  [217] = {
    [sym_inline_math_env_name] = ACTIONS(545),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(547),
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
  [219] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(549),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(551),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(551),
    [sym__end_of_line] = ACTIONS(551),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_RBRACK] = ACTIONS(553),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(553),
    [sym_begin_group] = ACTIONS(553),
    [sym_end_group] = ACTIONS(553),
    [sym_math_shift] = ACTIONS(553),
    [sym_alignment_tab] = ACTIONS(553),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(553),
    [sym_subscript] = ACTIONS(553),
    [sym_active_char] = ACTIONS(553),
    [sym_text] = ACTIONS(553),
  },
  [222] = {
    [anon_sym_LBRACK] = ACTIONS(555),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(555),
    [sym__end_of_line] = ACTIONS(555),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(557),
    [sym_begin_group] = ACTIONS(557),
    [sym_end_group] = ACTIONS(557),
    [sym_math_shift] = ACTIONS(557),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(557),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_text] = ACTIONS(557),
  },
  [224] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(149),
  },
  [225] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(559),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [226] = {
    [anon_sym_LBRACK] = ACTIONS(561),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(561),
    [sym_begin_group] = ACTIONS(561),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(561),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_text] = ACTIONS(561),
  },
  [227] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(563),
  },
  [228] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(279),
    [sym__end_of_line] = ACTIONS(279),
  },
  [229] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(281),
    [sym__end_of_line] = ACTIONS(281),
  },
  [230] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym__text_mode] = STATE(203),
    [sym_text_mode_at_region] = STATE(203),
    [sym_parameter] = STATE(203),
    [sym_text_env] = STATE(203),
    [sym__display_math] = STATE(203),
    [sym_tex_display_math] = STATE(203),
    [sym_latex_display_math] = STATE(203),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(203),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(203),
    [sym_tex_inline_math] = STATE(203),
    [sym_latex_inline_math] = STATE(203),
    [sym_inline_math_env] = STATE(203),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(203),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(203),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(203),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(203),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(203),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(203),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(203),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(203),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(203),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(203),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(203),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(203),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(203),
    [sym_opt_text_group] = STATE(203),
    [sym_token] = STATE(203),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(268),
    [aux_sym_text_mode_repeat1] = STATE(203),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
  },
  [231] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(565),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(567),
    [sym__end_of_line] = ACTIONS(567),
  },
  [232] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(569),
  },
  [233] = {
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
  [234] = {
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(573),
    [sym_begin_group] = ACTIONS(573),
    [sym_end_group] = ACTIONS(573),
    [sym_math_shift] = ACTIONS(573),
    [sym_alignment_tab] = ACTIONS(573),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(573),
    [sym_subscript] = ACTIONS(573),
    [sym_active_char] = ACTIONS(573),
    [sym_text] = ACTIONS(573),
  },
  [235] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [anon_sym_LBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(499),
    [sym_end_group] = ACTIONS(575),
    [sym_math_shift] = ACTIONS(502),
    [sym_alignment_tab] = ACTIONS(577),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(577),
    [sym_text] = ACTIONS(577),
  },
  [236] = {
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(580),
    [sym_end_group] = ACTIONS(580),
    [sym_math_shift] = ACTIONS(580),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(580),
    [sym_superscript] = ACTIONS(580),
    [sym_subscript] = ACTIONS(580),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [237] = {
    [sym__common] = STATE(271),
    [sym__math_mode_common] = STATE(271),
    [sym__math_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_math_env_at] = STATE(271),
    [sym_tag_at] = STATE(271),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(271),
    [sym_opt_math_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [238] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(586),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(588),
    [sym_begin_group] = ACTIONS(588),
    [sym_end_group] = ACTIONS(588),
    [sym_math_shift] = ACTIONS(588),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(588),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_text] = ACTIONS(588),
  },
  [240] = {
    [sym__common] = STATE(275),
    [sym__text_mode_common] = STATE(275),
    [sym__text_mode_at] = STATE(275),
    [sym_text_mode_at] = STATE(274),
    [sym_parameter] = STATE(275),
    [sym_text_env_at] = STATE(275),
    [sym__display_math_at] = STATE(275),
    [sym_tex_display_math_at] = STATE(275),
    [sym_latex_display_math_at] = STATE(275),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(275),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(275),
    [sym_tex_inline_math_at] = STATE(275),
    [sym_latex_inline_math_at] = STATE(275),
    [sym_inline_math_env_at] = STATE(275),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(275),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(275),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(275),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(275),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(275),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(275),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(275),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(275),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(275),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(275),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(275),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(275),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(275),
    [sym_opt_text_group_at] = STATE(275),
    [sym_token_at] = STATE(275),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(275),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(590),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(592),
    [sym_text] = ACTIONS(592),
  },
  [241] = {
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(594),
    [sym_begin_group] = ACTIONS(594),
    [sym_end_group] = ACTIONS(594),
    [sym_math_shift] = ACTIONS(594),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(594),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [242] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(245),
  },
  [243] = {
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_RBRACK] = ACTIONS(596),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(596),
    [sym_begin_group] = ACTIONS(596),
    [sym_end_group] = ACTIONS(596),
    [sym_math_shift] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(596),
    [sym_parameter_char] = ACTIONS(596),
    [sym_superscript] = ACTIONS(596),
    [sym_subscript] = ACTIONS(596),
    [sym_active_char] = ACTIONS(596),
    [sym_text] = ACTIONS(596),
  },
  [244] = {
    [sym__common] = STATE(249),
    [sym__math_mode_common] = STATE(249),
    [sym__math_mode_at] = STATE(249),
    [sym_parameter] = STATE(249),
    [sym_math_env_at] = STATE(249),
    [sym_tag_at] = STATE(249),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(249),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(276),
    [sym_end_token] = STATE(72),
    [sym_include_at] = STATE(249),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(249),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(249),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(249),
    [sym_opt_math_group_at] = STATE(249),
    [sym_token_at] = STATE(249),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_end_group] = ACTIONS(598),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [246] = {
    [sym__common] = STATE(278),
    [sym__math_mode_common] = STATE(278),
    [sym__math_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_math_env_at] = STATE(278),
    [sym_tag_at] = STATE(278),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(278),
    [sym_opt_math_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(179),
    [sym_end_opt] = STATE(277),
    [aux_sym_math_mode_at_repeat1] = STATE(278),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [247] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode_at] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env_at] = STATE(247),
    [sym_tag_at] = STATE(247),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(247),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(247),
    [sym_opt_math_group_at] = STATE(247),
    [sym_token_at] = STATE(247),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(247),
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(608),
    [sym_math_shift] = ACTIONS(611),
    [sym_alignment_tab] = ACTIONS(613),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(613),
    [sym_subscript] = ACTIONS(613),
    [sym_active_char] = ACTIONS(613),
    [sym_text] = ACTIONS(613),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(619),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(619),
    [sym_begin_group] = ACTIONS(619),
    [sym_end_group] = ACTIONS(619),
    [sym_math_shift] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(619),
    [sym_parameter_char] = ACTIONS(619),
    [sym_superscript] = ACTIONS(619),
    [sym_subscript] = ACTIONS(619),
    [sym_active_char] = ACTIONS(619),
    [sym_text] = ACTIONS(619),
  },
  [249] = {
    [sym__common] = STATE(249),
    [sym__math_mode_common] = STATE(249),
    [sym__math_mode_at] = STATE(249),
    [sym_parameter] = STATE(249),
    [sym_math_env_at] = STATE(249),
    [sym_tag_at] = STATE(249),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(249),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(249),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(249),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(249),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(249),
    [sym_opt_math_group_at] = STATE(249),
    [sym_token_at] = STATE(249),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(249),
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(608),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [250] = {
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
    [sym_superscript] = ACTIONS(624),
    [sym_subscript] = ACTIONS(624),
    [sym_active_char] = ACTIONS(624),
    [sym_text] = ACTIONS(624),
  },
  [251] = {
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
  [254] = {
    [sym__common] = STATE(280),
    [sym__text_mode_common] = STATE(280),
    [sym__text_mode_at] = STATE(280),
    [sym_parameter] = STATE(280),
    [sym_text_env_at] = STATE(280),
    [sym__display_math_at] = STATE(280),
    [sym_tex_display_math_at] = STATE(280),
    [sym_latex_display_math_at] = STATE(280),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(280),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(280),
    [sym_tex_inline_math_at] = STATE(280),
    [sym_latex_inline_math_at] = STATE(280),
    [sym_inline_math_env_at] = STATE(280),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(280),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(280),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(280),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(280),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(280),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(280),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(280),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(280),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(280),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(280),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(280),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(280),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(280),
    [sym_opt_text_group_at] = STATE(280),
    [sym_token_at] = STATE(280),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(280),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(634),
    [sym_text] = ACTIONS(634),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(636),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_superscript] = ACTIONS(636),
    [sym_subscript] = ACTIONS(636),
    [sym_active_char] = ACTIONS(636),
    [sym_text] = ACTIONS(636),
  },
  [256] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(638),
  },
  [257] = {
    [sym_text_group_at] = STATE(282),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(473),
    [sym__end_of_line] = ACTIONS(638),
  },
  [258] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym__text_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(283),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(640),
    [sym_text] = ACTIONS(640),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(642),
    [sym_begin_group] = ACTIONS(642),
    [sym_end_group] = ACTIONS(642),
    [sym_math_shift] = ACTIONS(642),
    [sym_alignment_tab] = ACTIONS(642),
    [sym_parameter_char] = ACTIONS(642),
    [sym_superscript] = ACTIONS(642),
    [sym_subscript] = ACTIONS(642),
    [sym_active_char] = ACTIONS(642),
    [sym_text] = ACTIONS(642),
  },
  [260] = {
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_RBRACK] = ACTIONS(644),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(644),
    [sym_begin_group] = ACTIONS(644),
    [sym_end_group] = ACTIONS(644),
    [sym_math_shift] = ACTIONS(644),
    [sym_alignment_tab] = ACTIONS(644),
    [sym_parameter_char] = ACTIONS(644),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(644),
    [sym_text] = ACTIONS(644),
  },
  [261] = {
    [sym__common] = STATE(261),
    [sym__text_mode_common] = STATE(261),
    [sym__text_mode_at] = STATE(261),
    [sym_parameter] = STATE(261),
    [sym_text_env_at] = STATE(261),
    [sym__display_math_at] = STATE(261),
    [sym_tex_display_math_at] = STATE(261),
    [sym_latex_display_math_at] = STATE(261),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(261),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(261),
    [sym_tex_inline_math_at] = STATE(261),
    [sym_latex_inline_math_at] = STATE(261),
    [sym_inline_math_env_at] = STATE(261),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(261),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(261),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(261),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(261),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(261),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(261),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(261),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(261),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(261),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(261),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(261),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(261),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(261),
    [sym_opt_text_group_at] = STATE(261),
    [sym_token_at] = STATE(261),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(261),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(575),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(499),
    [sym_math_shift] = ACTIONS(502),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(646),
    [sym_text] = ACTIONS(646),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(649),
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
  [263] = {
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
  [264] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(653),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(555),
    [sym_begin_group] = ACTIONS(555),
    [sym_end_group] = ACTIONS(555),
    [sym_math_shift] = ACTIONS(555),
    [sym_alignment_tab] = ACTIONS(555),
    [sym_parameter_char] = ACTIONS(555),
    [sym_superscript] = ACTIONS(555),
    [sym_subscript] = ACTIONS(555),
    [sym_active_char] = ACTIONS(555),
    [sym_text] = ACTIONS(555),
  },
  [266] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(308),
  },
  [267] = {
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
  [268] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(514),
    [sym__end_of_line] = ACTIONS(514),
  },
  [269] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(657),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(659),
    [sym__end_of_line] = ACTIONS(659),
  },
  [270] = {
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
  [271] = {
    [sym__common] = STATE(271),
    [sym__math_mode_common] = STATE(271),
    [sym__math_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_math_env_at] = STATE(271),
    [sym_tag_at] = STATE(271),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(271),
    [sym_opt_math_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(608),
    [sym_end_group] = ACTIONS(611),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_active_char] = ACTIONS(663),
    [sym_text] = ACTIONS(663),
  },
  [272] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(666),
  },
  [273] = {
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
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(670),
  },
  [275] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(275),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [276] = {
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_end_group] = ACTIONS(672),
    [sym_math_shift] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_text] = ACTIONS(672),
  },
  [277] = {
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
  [278] = {
    [sym__common] = STATE(278),
    [sym__math_mode_common] = STATE(278),
    [sym__math_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_math_env_at] = STATE(278),
    [sym_tag_at] = STATE(278),
    [sym_tag_token] = STATE(177),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(178),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(278),
    [sym_opt_math_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(179),
    [aux_sym_math_mode_at_repeat1] = STATE(278),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(608),
    [sym_alignment_tab] = ACTIONS(676),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(676),
    [sym_subscript] = ACTIONS(676),
    [sym_active_char] = ACTIONS(676),
    [sym_text] = ACTIONS(676),
  },
  [279] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(441),
  },
  [280] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(111),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(679),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [281] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [282] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(683),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(489),
    [sym__end_of_line] = ACTIONS(489),
  },
  [284] = {
    [sym__common] = STATE(261),
    [sym__text_mode_common] = STATE(261),
    [sym__text_mode_at] = STATE(261),
    [sym_parameter] = STATE(261),
    [sym_text_env_at] = STATE(261),
    [sym__display_math_at] = STATE(261),
    [sym_tex_display_math_at] = STATE(261),
    [sym_latex_display_math_at] = STATE(261),
    [sym_begin_display_math] = STATE(97),
    [sym_begin_inline_math] = STATE(98),
    [sym_display_math_env_at] = STATE(261),
    [sym_display_math_begin_at] = STATE(99),
    [sym__inline_math_at] = STATE(261),
    [sym_tex_inline_math_at] = STATE(261),
    [sym_latex_inline_math_at] = STATE(261),
    [sym_inline_math_env_at] = STATE(261),
    [sym_inline_math_begin] = STATE(100),
    [sym_verbatim_env] = STATE(261),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(261),
    [sym_begin] = STATE(101),
    [sym_begin_token] = STATE(102),
    [sym_documentclass] = STATE(261),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(261),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(261),
    [sym_include_token] = STATE(103),
    [sym_section_at] = STATE(261),
    [sym_section_token] = STATE(104),
    [sym_storage] = STATE(261),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(261),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(261),
    [sym_emph_token] = STATE(105),
    [sym_textbf_at] = STATE(261),
    [sym_textbf_token] = STATE(106),
    [sym_textit_at] = STATE(261),
    [sym_textit_token] = STATE(107),
    [sym_texttt_at] = STATE(261),
    [sym_texttt_token] = STATE(108),
    [sym_text_group_at] = STATE(261),
    [sym_opt_text_group_at] = STATE(261),
    [sym_token_at] = STATE(261),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(290),
    [aux_sym_text_mode_at_repeat1] = STATE(261),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(551),
    [sym_begin_group] = ACTIONS(551),
    [sym_end_group] = ACTIONS(551),
    [sym_math_shift] = ACTIONS(551),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(551),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_text] = ACTIONS(551),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_RBRACK] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(685),
    [sym_begin_group] = ACTIONS(685),
    [sym_end_group] = ACTIONS(685),
    [sym_math_shift] = ACTIONS(685),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(685),
    [sym_superscript] = ACTIONS(685),
    [sym_subscript] = ACTIONS(685),
    [sym_active_char] = ACTIONS(685),
    [sym_text] = ACTIONS(685),
  },
  [287] = {
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
  [288] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(573),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [290] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(644),
    [sym__end_of_line] = ACTIONS(644),
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
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(31),
  [29] = {.count = 1, .reusable = true}, SHIFT(32),
  [31] = {.count = 1, .reusable = false}, SHIFT(33),
  [33] = {.count = 1, .reusable = false}, SHIFT(34),
  [35] = {.count = 1, .reusable = false}, SHIFT(35),
  [37] = {.count = 1, .reusable = false}, SHIFT(36),
  [39] = {.count = 1, .reusable = false}, SHIFT(37),
  [41] = {.count = 1, .reusable = false}, SHIFT(38),
  [43] = {.count = 1, .reusable = false}, SHIFT(39),
  [45] = {.count = 1, .reusable = true}, SHIFT(40),
  [47] = {.count = 1, .reusable = false}, SHIFT(41),
  [49] = {.count = 1, .reusable = false}, SHIFT(42),
  [51] = {.count = 1, .reusable = false}, SHIFT(43),
  [53] = {.count = 1, .reusable = false}, SHIFT(44),
  [55] = {.count = 1, .reusable = false}, SHIFT(45),
  [57] = {.count = 1, .reusable = false}, SHIFT(46),
  [59] = {.count = 1, .reusable = true}, SHIFT(47),
  [61] = {.count = 1, .reusable = true}, SHIFT(48),
  [63] = {.count = 1, .reusable = true}, SHIFT(49),
  [65] = {.count = 1, .reusable = true}, SHIFT(50),
  [67] = {.count = 1, .reusable = true}, SHIFT(51),
  [69] = {.count = 1, .reusable = true}, SHIFT(57),
  [71] = {.count = 1, .reusable = true}, SHIFT(58),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(60),
  [81] = {.count = 1, .reusable = false}, SHIFT(68),
  [83] = {.count = 1, .reusable = true}, SHIFT(64),
  [85] = {.count = 1, .reusable = true}, SHIFT(69),
  [87] = {.count = 1, .reusable = true}, SHIFT(70),
  [89] = {.count = 1, .reusable = true}, SHIFT(73),
  [91] = {.count = 1, .reusable = true}, SHIFT(74),
  [93] = {.count = 1, .reusable = true}, SHIFT(79),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(87),
  [99] = {.count = 1, .reusable = true}, SHIFT(93),
  [101] = {.count = 1, .reusable = true}, SHIFT(94),
  [103] = {.count = 1, .reusable = true}, SHIFT(95),
  [105] = {.count = 1, .reusable = true}, SHIFT(112),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(113),
  [111] = {.count = 1, .reusable = true}, SHIFT(115),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(116),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(117),
  [153] = {.count = 1, .reusable = true}, SHIFT(118),
  [155] = {.count = 1, .reusable = false}, SHIFT(119),
  [157] = {.count = 1, .reusable = true}, SHIFT(120),
  [159] = {.count = 1, .reusable = true}, SHIFT(121),
  [161] = {.count = 1, .reusable = true}, SHIFT(123),
  [163] = {.count = 1, .reusable = true}, SHIFT(124),
  [165] = {.count = 1, .reusable = true}, SHIFT(126),
  [167] = {.count = 1, .reusable = true}, SHIFT(128),
  [169] = {.count = 1, .reusable = true}, SHIFT(130),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [173] = {.count = 1, .reusable = true}, SHIFT(131),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(132),
  [179] = {.count = 1, .reusable = true}, SHIFT(134),
  [181] = {.count = 1, .reusable = true}, SHIFT(135),
  [183] = {.count = 1, .reusable = true}, SHIFT(141),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(143),
  [189] = {.count = 1, .reusable = false}, SHIFT(146),
  [191] = {.count = 1, .reusable = true}, SHIFT(145),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(147),
  [197] = {.count = 1, .reusable = false}, SHIFT(141),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(150),
  [203] = {.count = 1, .reusable = false}, SHIFT(151),
  [205] = {.count = 1, .reusable = false}, SHIFT(152),
  [207] = {.count = 1, .reusable = false}, SHIFT(153),
  [209] = {.count = 1, .reusable = false}, SHIFT(154),
  [211] = {.count = 1, .reusable = true}, SHIFT(155),
  [213] = {.count = 1, .reusable = true}, SHIFT(156),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(160),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(154),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [231] = {.count = 1, .reusable = false}, SHIFT(166),
  [233] = {.count = 1, .reusable = true}, SHIFT(167),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [243] = {.count = 1, .reusable = false}, SHIFT(168),
  [245] = {.count = 1, .reusable = false}, SHIFT(169),
  [247] = {.count = 1, .reusable = true}, SHIFT(170),
  [249] = {.count = 1, .reusable = true}, SHIFT(171),
  [251] = {.count = 1, .reusable = true}, SHIFT(172),
  [253] = {.count = 1, .reusable = true}, SHIFT(173),
  [255] = {.count = 1, .reusable = true}, SHIFT(174),
  [257] = {.count = 1, .reusable = true}, SHIFT(175),
  [259] = {.count = 1, .reusable = true}, SHIFT(180),
  [261] = {.count = 1, .reusable = true}, SHIFT(181),
  [263] = {.count = 1, .reusable = true}, SHIFT(184),
  [265] = {.count = 1, .reusable = true}, SHIFT(188),
  [267] = {.count = 1, .reusable = true}, SHIFT(190),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(200),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [277] = {.count = 1, .reusable = true}, SHIFT(201),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(203),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(116),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(118),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [317] = {.count = 1, .reusable = true}, SHIFT(204),
  [319] = {.count = 1, .reusable = true}, SHIFT(205),
  [321] = {.count = 1, .reusable = true}, SHIFT(206),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [325] = {.count = 1, .reusable = true}, SHIFT(207),
  [327] = {.count = 1, .reusable = true}, SHIFT(209),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(212),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(49),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(50),
  [346] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(131),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [354] = {.count = 1, .reusable = true}, SHIFT(213),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(134),
  [361] = {.count = 1, .reusable = true}, SHIFT(214),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [367] = {.count = 1, .reusable = true}, SHIFT(215),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [371] = {.count = 1, .reusable = true}, SHIFT(217),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [377] = {.count = 1, .reusable = true}, SHIFT(219),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(146),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(68),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(147),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(150),
  [403] = {.count = 1, .reusable = true}, SHIFT(220),
  [405] = {.count = 1, .reusable = true}, SHIFT(221),
  [407] = {.count = 1, .reusable = true}, SHIFT(222),
  [409] = {.count = 1, .reusable = true}, SHIFT(223),
  [411] = {.count = 1, .reusable = true}, SHIFT(224),
  [413] = {.count = 1, .reusable = true}, SHIFT(225),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [417] = {.count = 1, .reusable = true}, SHIFT(226),
  [419] = {.count = 1, .reusable = true}, SHIFT(228),
  [421] = {.count = 1, .reusable = true}, SHIFT(230),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(231),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [435] = {.count = 1, .reusable = true}, SHIFT(233),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(234),
  [445] = {.count = 1, .reusable = true}, SHIFT(235),
  [447] = {.count = 1, .reusable = true}, SHIFT(236),
  [449] = {.count = 1, .reusable = true}, SHIFT(237),
  [451] = {.count = 1, .reusable = true}, SHIFT(239),
  [453] = {.count = 1, .reusable = true}, SHIFT(240),
  [455] = {.count = 1, .reusable = true}, SHIFT(242),
  [457] = {.count = 1, .reusable = true}, SHIFT(244),
  [459] = {.count = 1, .reusable = true}, SHIFT(246),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [463] = {.count = 1, .reusable = true}, SHIFT(247),
  [465] = {.count = 1, .reusable = true}, SHIFT(168),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [469] = {.count = 1, .reusable = true}, SHIFT(249),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [473] = {.count = 1, .reusable = true}, SHIFT(254),
  [475] = {.count = 1, .reusable = true}, SHIFT(255),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [491] = {.count = 1, .reusable = true}, SHIFT(261),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(170),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(94),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(95),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(201),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(7),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(203),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(205),
  [524] = {.count = 1, .reusable = true}, SHIFT(262),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [528] = {.count = 1, .reusable = true}, SHIFT(263),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(212),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [541] = {.count = 1, .reusable = true}, SHIFT(264),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [545] = {.count = 1, .reusable = true}, SHIFT(152),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [549] = {.count = 1, .reusable = true}, SHIFT(265),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [559] = {.count = 1, .reusable = true}, SHIFT(266),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [563] = {.count = 1, .reusable = true}, SHIFT(267),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [569] = {.count = 1, .reusable = true}, SHIFT(269),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [577] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(235),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [582] = {.count = 1, .reusable = true}, SHIFT(270),
  [584] = {.count = 1, .reusable = true}, SHIFT(271),
  [586] = {.count = 1, .reusable = true}, SHIFT(272),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [590] = {.count = 1, .reusable = true}, SHIFT(273),
  [592] = {.count = 1, .reusable = true}, SHIFT(275),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [600] = {.count = 1, .reusable = true}, SHIFT(278),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(173),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(174),
  [611] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(247),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(249),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [632] = {.count = 1, .reusable = true}, SHIFT(279),
  [634] = {.count = 1, .reusable = true}, SHIFT(280),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [638] = {.count = 1, .reusable = true}, SHIFT(281),
  [640] = {.count = 1, .reusable = true}, SHIFT(284),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(261),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [653] = {.count = 1, .reusable = true}, SHIFT(285),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [663] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(271),
  [666] = {.count = 1, .reusable = true}, SHIFT(286),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [670] = {.count = 1, .reusable = true}, SHIFT(287),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(278),
  [679] = {.count = 1, .reusable = true}, SHIFT(288),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [683] = {.count = 1, .reusable = true}, SHIFT(289),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
