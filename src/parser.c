#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 284
#define SYMBOL_COUNT 148
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
  sym__at_name = 38,
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
  sym__math_mode = 49,
  sym_math_mode = 50,
  sym__math_mode_at = 51,
  sym_math_mode_at = 52,
  sym_parameter = 53,
  sym_text_env = 54,
  sym_math_env = 55,
  sym_math_env_at = 56,
  sym__display_math = 57,
  sym__display_math_at = 58,
  sym_tex_display_math = 59,
  sym_tex_display_math_at = 60,
  sym_latex_display_math = 61,
  sym_latex_display_math_at = 62,
  sym_begin_display_math = 63,
  sym_end_display_math = 64,
  sym_begin_inline_math = 65,
  sym_end_inline_math = 66,
  sym_display_math_env = 67,
  sym_display_math_env_at = 68,
  sym_display_math_begin = 69,
  sym_display_math_begin_at = 70,
  sym_display_math_end = 71,
  sym_display_math_env_group = 72,
  sym__inline_math = 73,
  sym__inline_math_at = 74,
  sym_tex_inline_math = 75,
  sym_tex_inline_math_at = 76,
  sym_latex_inline_math = 77,
  sym_latex_inline_math_at = 78,
  sym_inline_math_env = 79,
  sym_inline_math_env_at = 80,
  sym_inline_math_begin = 81,
  sym_inline_math_end = 82,
  sym_inline_math_env_group = 83,
  sym_tag = 84,
  sym_tag_at = 85,
  sym_tag_token = 86,
  sym_verbatim_env = 87,
  sym_verbatim_begin = 88,
  sym_verbatim_end = 89,
  sym_verbatim_text = 90,
  sym_verbatim_env_group = 91,
  sym_escaped = 92,
  sym_begin = 93,
  sym_begin_token = 94,
  sym_end = 95,
  sym_end_token = 96,
  sym_documentclass = 97,
  sym_documentclass_token = 98,
  sym_usepackage = 99,
  sym_usepackage_token = 100,
  sym_include = 101,
  sym_include_at = 102,
  sym_include_token = 103,
  sym_section = 104,
  sym_section_at = 105,
  sym_section_token = 106,
  sym_storage = 107,
  sym_storage_token = 108,
  sym_catcode = 109,
  sym_catcode_token = 110,
  sym_emph = 111,
  sym_emph_at = 112,
  sym_emph_token = 113,
  sym_textbf = 114,
  sym_textbf_at = 115,
  sym_textbf_token = 116,
  sym_textit = 117,
  sym_textit_at = 118,
  sym_textit_token = 119,
  sym_texttt = 120,
  sym_texttt_at = 121,
  sym_texttt_token = 122,
  sym_makeatletter = 123,
  sym_makeatletter_token = 124,
  sym_makeatother = 125,
  sym_makeatother_token = 126,
  sym_text_group = 127,
  sym_text_group_at = 128,
  sym_simple_text_group = 129,
  sym_opt_text_group = 130,
  sym_opt_text_group_at = 131,
  sym_math_group = 132,
  sym_math_group_at = 133,
  sym_opt_math_group = 134,
  sym_opt_math_group_at = 135,
  sym_math_text_group = 136,
  sym_math_text_group_at = 137,
  sym_token = 138,
  sym_token_at = 139,
  sym_begin_opt = 140,
  sym_end_opt = 141,
  aux_sym_text_mode_repeat1 = 142,
  aux_sym_text_mode_at_repeat1 = 143,
  aux_sym_math_mode_repeat1 = 144,
  aux_sym_math_mode_at_repeat1 = 145,
  aux_sym_verbatim_text_repeat1 = 146,
  aux_sym_verbatim_text_repeat2 = 147,
  anon_alias_sym_class_name = 148,
  anon_alias_sym_env_name = 149,
  anon_alias_sym_package_name = 150,
  anon_alias_sym_text = 151,
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
  [sym__at_name] = "_at_name",
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
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym__math_mode_at] = "_math_mode_at",
  [sym_math_mode_at] = "math_mode_at",
  [sym_parameter] = "parameter",
  [sym_text_env] = "text_env",
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
  [sym__at_name] = {
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
      if (lookahead == 'm')
        ADVANCE(178);
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
      if (lookahead == 'a')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'k')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'a')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'l')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 191:
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
        ADVANCE(192);
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
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 195:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(196);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead == 'd')
        ADVANCE(213);
      if (lookahead == 'e')
        ADVANCE(239);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'g')
        ADVANCE(252);
      if (lookahead == 'l')
        ADVANCE(257);
      if (lookahead == 'm')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(281);
      if (lookahead == 'v')
        ADVANCE(284);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(291);
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(202);
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
        ADVANCE(206);
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(210);
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
      if (lookahead == 'g')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(231);
      if (lookahead == 's')
        ADVANCE(234);
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
      if (lookahead == 'r')
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
      if (lookahead == 'r')
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
      if (lookahead == 'y')
        ADVANCE(212);
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
      if (lookahead == 'r')
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(210);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(212);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(212);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'u')
        ADVANCE(242);
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
        ADVANCE(35);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(212);
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(246);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(212);
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
      if (lookahead == 's')
        ADVANCE(258);
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
        ADVANCE(262);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(204);
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
      if (lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(274);
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
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
      if (lookahead == 'd')
        ADVANCE(204);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(212);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
        ADVANCE(283);
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
      if (lookahead == 'i')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 292:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 293:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 294:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 295:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(297);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(299);
      if (lookahead == 'p')
        ADVANCE(304);
      if (lookahead == 's')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(315);
      if (lookahead == 'h')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(327);
      if (lookahead == 'o')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(348);
      if (lookahead == 'p')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 't')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'u')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'u')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'x')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(400);
      if (lookahead == 't')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 416:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(169);
      if (lookahead == 'd')
        ADVANCE(170);
      if (lookahead == 'e')
        ADVANCE(417);
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
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 418:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 419:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(326);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 'm')
        ADVANCE(420);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead == 's')
        ADVANCE(379);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(404);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 421:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(422);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(424);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 427:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(422);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(424);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'n')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
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
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 167},
  [70] = {.lex_state = 191},
  [71] = {.lex_state = 165},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 195},
  [75] = {.lex_state = 292},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 292},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 165},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 165},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 293},
  [88] = {.lex_state = 294},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 165},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 295},
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
  [107] = {.lex_state = 165},
  [108] = {.lex_state = 165},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 34},
  [111] = {.lex_state = 165},
  [112] = {.lex_state = 165},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 165},
  [116] = {.lex_state = 162},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 165},
  [119] = {.lex_state = 162},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 165},
  [122] = {.lex_state = 162},
  [123] = {.lex_state = 165},
  [124] = {.lex_state = 416},
  [125] = {.lex_state = 165},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 165},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 34},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 165},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 418},
  [134] = {.lex_state = 165},
  [135] = {.lex_state = 165},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 165},
  [138] = {.lex_state = 34},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 165},
  [141] = {.lex_state = 195},
  [142] = {.lex_state = 165},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 167},
  [146] = {.lex_state = 165},
  [147] = {.lex_state = 165},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 162},
  [150] = {.lex_state = 162},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 162},
  [153] = {.lex_state = 162},
  [154] = {.lex_state = 34},
  [155] = {.lex_state = 292},
  [156] = {.lex_state = 292},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 167},
  [159] = {.lex_state = 292},
  [160] = {.lex_state = 292},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 165},
  [163] = {.lex_state = 165},
  [164] = {.lex_state = 294},
  [165] = {.lex_state = 163},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 419},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 162},
  [171] = {.lex_state = 421},
  [172] = {.lex_state = 162},
  [173] = {.lex_state = 34},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 34},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 292},
  [185] = {.lex_state = 165},
  [186] = {.lex_state = 165},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 165},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 165},
  [191] = {.lex_state = 165},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 165},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 165},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 162},
  [200] = {.lex_state = 34},
  [201] = {.lex_state = 165},
  [202] = {.lex_state = 162},
  [203] = {.lex_state = 162},
  [204] = {.lex_state = 165},
  [205] = {.lex_state = 165},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 165},
  [208] = {.lex_state = 165},
  [209] = {.lex_state = 195},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 195},
  [212] = {.lex_state = 165},
  [213] = {.lex_state = 162},
  [214] = {.lex_state = 292},
  [215] = {.lex_state = 165},
  [216] = {.lex_state = 292},
  [217] = {.lex_state = 165},
  [218] = {.lex_state = 292},
  [219] = {.lex_state = 162},
  [220] = {.lex_state = 34},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 292},
  [223] = {.lex_state = 292},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 167},
  [226] = {.lex_state = 292},
  [227] = {.lex_state = 165},
  [228] = {.lex_state = 165},
  [229] = {.lex_state = 162},
  [230] = {.lex_state = 165},
  [231] = {.lex_state = 162},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 165},
  [234] = {.lex_state = 162},
  [235] = {.lex_state = 165},
  [236] = {.lex_state = 427},
  [237] = {.lex_state = 165},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 165},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 165},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 165},
  [245] = {.lex_state = 165},
  [246] = {.lex_state = 165},
  [247] = {.lex_state = 162},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 292},
  [250] = {.lex_state = 292},
  [251] = {.lex_state = 36},
  [252] = {.lex_state = 165},
  [253] = {.lex_state = 165},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 165},
  [256] = {.lex_state = 165},
  [257] = {.lex_state = 162},
  [258] = {.lex_state = 165},
  [259] = {.lex_state = 292},
  [260] = {.lex_state = 34},
  [261] = {.lex_state = 292},
  [262] = {.lex_state = 167},
  [263] = {.lex_state = 165},
  [264] = {.lex_state = 162},
  [265] = {.lex_state = 34},
  [266] = {.lex_state = 174},
  [267] = {.lex_state = 165},
  [268] = {.lex_state = 162},
  [269] = {.lex_state = 165},
  [270] = {.lex_state = 165},
  [271] = {.lex_state = 36},
  [272] = {.lex_state = 292},
  [273] = {.lex_state = 162},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 292},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 165},
  [279] = {.lex_state = 165},
  [280] = {.lex_state = 165},
  [281] = {.lex_state = 292},
  [282] = {.lex_state = 34},
  [283] = {.lex_state = 292},
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
    [sym_text_mode_at] = STATE(30),
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
    [sym_text_mode_at] = STATE(48),
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
    [sym_text_mode_at] = STATE(73),
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
    [sym__common] = STATE(110),
    [sym__text_mode_common] = STATE(110),
    [sym__text_mode_at] = STATE(110),
    [sym_parameter] = STATE(110),
    [sym_text_env] = STATE(110),
    [sym__display_math_at] = STATE(110),
    [sym_tex_display_math_at] = STATE(110),
    [sym_latex_display_math_at] = STATE(110),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(110),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(110),
    [sym_tex_inline_math_at] = STATE(110),
    [sym_latex_inline_math_at] = STATE(110),
    [sym_inline_math_env_at] = STATE(110),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(110),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(110),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(110),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(110),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(110),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(110),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(110),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(110),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(110),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(110),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(110),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(110),
    [sym_texttt_token] = STATE(106),
    [sym_makeatother] = STATE(107),
    [sym_makeatother_token] = STATE(108),
    [sym_text_group_at] = STATE(110),
    [sym_opt_text_group_at] = STATE(110),
    [sym_token_at] = STATE(110),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(110),
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
    [sym__common] = STATE(113),
    [sym__text_mode_common] = STATE(113),
    [sym__text_mode] = STATE(113),
    [sym_text_mode_at] = STATE(113),
    [sym_parameter] = STATE(113),
    [sym_text_env] = STATE(113),
    [sym__display_math] = STATE(113),
    [sym_tex_display_math] = STATE(113),
    [sym_latex_display_math] = STATE(113),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(113),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(113),
    [sym_tex_inline_math] = STATE(113),
    [sym_latex_inline_math] = STATE(113),
    [sym_inline_math_env] = STATE(113),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(113),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(113),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(113),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(113),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(113),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(113),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(113),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(113),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(113),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(113),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(113),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(113),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(113),
    [sym_opt_text_group] = STATE(113),
    [sym_token] = STATE(113),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(112),
    [aux_sym_text_mode_repeat1] = STATE(113),
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
    [sym__common] = STATE(114),
    [sym__text_mode_common] = STATE(114),
    [sym__text_mode] = STATE(114),
    [sym_text_mode_at] = STATE(114),
    [sym_parameter] = STATE(114),
    [sym_text_env] = STATE(114),
    [sym__display_math] = STATE(114),
    [sym_tex_display_math] = STATE(114),
    [sym_latex_display_math] = STATE(114),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(114),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(114),
    [sym_tex_inline_math] = STATE(114),
    [sym_latex_inline_math] = STATE(114),
    [sym_inline_math_env] = STATE(114),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(114),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(114),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(114),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(114),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(114),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(114),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(114),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(114),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(114),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(114),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(114),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(114),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(114),
    [sym_opt_text_group] = STATE(114),
    [sym_token] = STATE(114),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(114),
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
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at] = STATE(116),
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
    [sym__common] = STATE(119),
    [sym__math_mode] = STATE(119),
    [sym_parameter] = STATE(119),
    [sym_math_env] = STATE(119),
    [sym_tag] = STATE(119),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(119),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(119),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(119),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(119),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(119),
    [sym_opt_math_group] = STATE(119),
    [sym_token] = STATE(119),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(119),
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
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(120),
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
    [sym_math_text_group] = STATE(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(163),
  },
  [54] = {
    [sym__common] = STATE(126),
    [sym__math_mode] = STATE(126),
    [sym_parameter] = STATE(126),
    [sym_math_env] = STATE(126),
    [sym_tag] = STATE(126),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(126),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(125),
    [sym_end_token] = STATE(72),
    [sym_include] = STATE(126),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(126),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(126),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(126),
    [sym_opt_math_group] = STATE(126),
    [sym_token] = STATE(126),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(126),
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
    [sym__common] = STATE(128),
    [sym__math_mode] = STATE(128),
    [sym_parameter] = STATE(128),
    [sym_math_env] = STATE(128),
    [sym_tag] = STATE(128),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(128),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
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
    [sym_end_opt] = STATE(127),
    [aux_sym_math_mode_repeat1] = STATE(128),
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
    [sym__common] = STATE(129),
    [sym__math_mode] = STATE(129),
    [sym_parameter] = STATE(129),
    [sym_math_env] = STATE(129),
    [sym_tag] = STATE(129),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(129),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(129),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(129),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(129),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(129),
    [sym_opt_math_group] = STATE(129),
    [sym_token] = STATE(129),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(129),
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
    [sym_end_display_math] = STATE(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(177),
  },
  [60] = {
    [sym__common] = STATE(132),
    [sym__math_mode] = STATE(132),
    [sym_parameter] = STATE(132),
    [sym_math_env] = STATE(132),
    [sym_tag] = STATE(132),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(132),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(132),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(132),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(132),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(132),
    [sym_opt_math_group] = STATE(132),
    [sym_token] = STATE(132),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(132),
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
    [sym_end_inline_math] = STATE(134),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
  },
  [62] = {
    [sym_display_math_end] = STATE(135),
    [sym_end_token] = STATE(136),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [63] = {
    [sym_inline_math_end] = STATE(137),
    [sym_end_token] = STATE(138),
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
    [sym_verbatim_end] = STATE(140),
    [sym_end_token] = STATE(67),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [67] = {
    [sym_verbatim_env_group] = STATE(142),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(187),
  },
  [68] = {
    [aux_sym_verbatim_text_repeat1] = STATE(144),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(191),
  },
  [69] = {
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [aux_sym_verbatim_text_repeat2] = STATE(145),
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
    [sym_simple_text_group] = STATE(146),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [73] = {
    [sym__common] = STATE(148),
    [sym__text_mode_common] = STATE(148),
    [sym__text_mode] = STATE(148),
    [sym_text_mode_at] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_text_env] = STATE(148),
    [sym__display_math] = STATE(148),
    [sym_tex_display_math] = STATE(148),
    [sym_latex_display_math] = STATE(148),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(148),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(148),
    [sym_tex_inline_math] = STATE(148),
    [sym_latex_inline_math] = STATE(148),
    [sym_inline_math_env] = STATE(148),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(148),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(148),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(147),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(148),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(148),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(148),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(148),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(148),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(148),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(148),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(148),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(148),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(148),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(148),
    [sym_opt_text_group] = STATE(148),
    [sym_token] = STATE(148),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(148),
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
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(156),
    [sym_begin_opt] = STATE(157),
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
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(160),
    [sym_begin_opt] = STATE(157),
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
    [sym_simple_text_group] = STATE(161),
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
    [sym_simple_text_group] = STATE(162),
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
    [sym_text_group] = STATE(163),
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
    [sym__at_name] = ACTIONS(245),
  },
  [94] = {
    [sym__common] = STATE(170),
    [sym__text_mode_common] = STATE(170),
    [sym__text_mode_at] = STATE(170),
    [sym_parameter] = STATE(170),
    [sym_text_env] = STATE(170),
    [sym__display_math_at] = STATE(170),
    [sym_tex_display_math_at] = STATE(170),
    [sym_latex_display_math_at] = STATE(170),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(170),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(170),
    [sym_tex_inline_math_at] = STATE(170),
    [sym_latex_inline_math_at] = STATE(170),
    [sym_inline_math_env_at] = STATE(170),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(170),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(170),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(170),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(170),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(170),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(170),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(170),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(170),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(170),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(170),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(170),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(170),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(170),
    [sym_opt_text_group_at] = STATE(170),
    [sym_token_at] = STATE(170),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(170),
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
    [sym__common] = STATE(178),
    [sym__math_mode_at] = STATE(178),
    [sym_math_mode_at] = STATE(174),
    [sym_parameter] = STATE(178),
    [sym_math_env_at] = STATE(178),
    [sym_tag_at] = STATE(178),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(178),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(178),
    [sym_opt_math_group_at] = STATE(178),
    [sym_token_at] = STATE(178),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(178),
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
    [sym__common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(179),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [97] = {
    [sym__common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(181),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [98] = {
    [sym__common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(182),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [99] = {
    [sym__common] = STATE(180),
    [sym__math_mode_at] = STATE(180),
    [sym_math_mode_at] = STATE(183),
    [sym_parameter] = STATE(180),
    [sym_math_env_at] = STATE(180),
    [sym_tag_at] = STATE(180),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(180),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(180),
    [sym_opt_math_group_at] = STATE(180),
    [sym_token_at] = STATE(180),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(180),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [100] = {
    [sym_display_math_env_group] = STATE(184),
    [sym_inline_math_env_group] = STATE(76),
    [sym_verbatim_env_group] = STATE(77),
    [sym_simple_text_group] = STATE(78),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [101] = {
    [sym_text_group_at] = STATE(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [102] = {
    [sym_text_group_at] = STATE(186),
    [sym_opt_text_group_at] = STATE(187),
    [sym_begin_opt] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [103] = {
    [sym_text_group_at] = STATE(188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [104] = {
    [sym_text_group_at] = STATE(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [105] = {
    [sym_text_group_at] = STATE(190),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [106] = {
    [sym_text_group_at] = STATE(191),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(263),
    [sym_end_group] = ACTIONS(263),
    [sym_math_shift] = ACTIONS(263),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(263),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(265),
    [sym_end_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [109] = {
    [sym__common] = STATE(193),
    [sym__text_mode_common] = STATE(193),
    [sym__text_mode_at] = STATE(193),
    [sym_parameter] = STATE(193),
    [sym_text_env] = STATE(193),
    [sym__display_math_at] = STATE(193),
    [sym_tex_display_math_at] = STATE(193),
    [sym_latex_display_math_at] = STATE(193),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(193),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(193),
    [sym_tex_inline_math_at] = STATE(193),
    [sym_latex_inline_math_at] = STATE(193),
    [sym_inline_math_env_at] = STATE(193),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(193),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(193),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(193),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(193),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(193),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(193),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(193),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(193),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(193),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(193),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(193),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(193),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(193),
    [sym_opt_text_group_at] = STATE(193),
    [sym_token_at] = STATE(193),
    [sym_begin_opt] = STATE(109),
    [sym_end_opt] = STATE(192),
    [aux_sym_text_mode_at_repeat1] = STATE(193),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [110] = {
    [sym__common] = STATE(195),
    [sym__text_mode_common] = STATE(195),
    [sym__text_mode_at] = STATE(195),
    [sym_parameter] = STATE(195),
    [sym_text_env] = STATE(195),
    [sym__display_math_at] = STATE(195),
    [sym_tex_display_math_at] = STATE(195),
    [sym_latex_display_math_at] = STATE(195),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(195),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(195),
    [sym_tex_inline_math_at] = STATE(195),
    [sym_latex_inline_math_at] = STATE(195),
    [sym_inline_math_env_at] = STATE(195),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(195),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(195),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(195),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(195),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(195),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(195),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(195),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(195),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(195),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(195),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(195),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(195),
    [sym_texttt_token] = STATE(106),
    [sym_makeatother] = STATE(194),
    [sym_makeatother_token] = STATE(108),
    [sym_text_group_at] = STATE(195),
    [sym_opt_text_group_at] = STATE(195),
    [sym_token_at] = STATE(195),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [111] = {
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
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(273),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(273),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [113] = {
    [sym__common] = STATE(197),
    [sym__text_mode_common] = STATE(197),
    [sym__text_mode] = STATE(197),
    [sym_text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env] = STATE(197),
    [sym__display_math] = STATE(197),
    [sym_tex_display_math] = STATE(197),
    [sym_latex_display_math] = STATE(197),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(197),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(197),
    [sym_tex_inline_math] = STATE(197),
    [sym_latex_inline_math] = STATE(197),
    [sym_inline_math_env] = STATE(197),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(197),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(197),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(197),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(197),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(197),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(197),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(197),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(197),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(197),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(197),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(197),
    [sym_opt_text_group] = STATE(197),
    [sym_token] = STATE(197),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(196),
    [aux_sym_text_mode_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [114] = {
    [sym__common] = STATE(114),
    [sym__text_mode_common] = STATE(114),
    [sym__text_mode] = STATE(114),
    [sym_text_mode_at] = STATE(114),
    [sym_parameter] = STATE(114),
    [sym_text_env] = STATE(114),
    [sym__display_math] = STATE(114),
    [sym_tex_display_math] = STATE(114),
    [sym_latex_display_math] = STATE(114),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(114),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(114),
    [sym_tex_inline_math] = STATE(114),
    [sym_latex_inline_math] = STATE(114),
    [sym_inline_math_env] = STATE(114),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(114),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(114),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(114),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(114),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(114),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(114),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(114),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(114),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(114),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(114),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(114),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(114),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(114),
    [sym_opt_text_group] = STATE(114),
    [sym_token] = STATE(114),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(282),
    [sym_begin_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(288),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(294),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(300),
    [sym_end_group] = ACTIONS(300),
    [sym_math_shift] = ACTIONS(300),
    [sym_alignment_tab] = ACTIONS(300),
    [sym_parameter_char] = ACTIONS(300),
    [sym_superscript] = ACTIONS(300),
    [sym_subscript] = ACTIONS(300),
    [sym_active_char] = ACTIONS(300),
    [sym_text] = ACTIONS(300),
  },
  [116] = {
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at] = STATE(116),
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
    [anon_sym_LBRACK] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(282),
    [sym_begin_group] = ACTIONS(285),
    [sym_end_group] = ACTIONS(277),
    [sym_math_shift] = ACTIONS(288),
    [sym_alignment_tab] = ACTIONS(302),
    [sym_parameter_char] = ACTIONS(294),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(302),
    [sym_text] = ACTIONS(302),
  },
  [117] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(305),
  },
  [118] = {
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(307),
    [sym_end_group] = ACTIONS(307),
    [sym_math_shift] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(307),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [119] = {
    [sym__common] = STATE(199),
    [sym__math_mode] = STATE(199),
    [sym_parameter] = STATE(199),
    [sym_math_env] = STATE(199),
    [sym_tag] = STATE(199),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(199),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(199),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(199),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(199),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(199),
    [sym_opt_math_group] = STATE(199),
    [sym_token] = STATE(199),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_active_char] = ACTIONS(311),
    [sym_text] = ACTIONS(311),
  },
  [120] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(313),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(315),
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
  [122] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym__text_mode] = STATE(203),
    [sym_text_mode] = STATE(202),
    [sym_text_mode_at] = STATE(203),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [123] = {
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(321),
    [sym_end_group] = ACTIONS(321),
    [sym_math_shift] = ACTIONS(321),
    [sym_alignment_tab] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(321),
    [sym_superscript] = ACTIONS(321),
    [sym_subscript] = ACTIONS(321),
    [sym_active_char] = ACTIONS(321),
    [sym_text] = ACTIONS(321),
  },
  [124] = {
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
  [125] = {
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
  [126] = {
    [sym__common] = STATE(132),
    [sym__math_mode] = STATE(132),
    [sym_parameter] = STATE(132),
    [sym_math_env] = STATE(132),
    [sym_tag] = STATE(132),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(132),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(204),
    [sym_end_token] = STATE(72),
    [sym_include] = STATE(132),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(132),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(132),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(132),
    [sym_opt_math_group] = STATE(132),
    [sym_token] = STATE(132),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(132),
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
  [127] = {
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(325),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(325),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_text] = ACTIONS(325),
  },
  [128] = {
    [sym__common] = STATE(206),
    [sym__math_mode] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_math_env] = STATE(206),
    [sym_tag] = STATE(206),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(206),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(206),
    [sym_opt_math_group] = STATE(206),
    [sym_token] = STATE(206),
    [sym_begin_opt] = STATE(56),
    [sym_end_opt] = STATE(205),
    [aux_sym_math_mode_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [129] = {
    [sym__common] = STATE(129),
    [sym__math_mode] = STATE(129),
    [sym_parameter] = STATE(129),
    [sym_math_env] = STATE(129),
    [sym_tag] = STATE(129),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(129),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(129),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(129),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(129),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(129),
    [sym_opt_math_group] = STATE(129),
    [sym_token] = STATE(129),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(332),
    [sym_begin_group] = ACTIONS(335),
    [sym_math_shift] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(340),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(340),
    [sym_subscript] = ACTIONS(340),
    [sym_active_char] = ACTIONS(340),
    [sym_text] = ACTIONS(340),
  },
  [130] = {
    [anon_sym_RBRACK] = ACTIONS(346),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(348),
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
  [132] = {
    [sym__common] = STATE(132),
    [sym__math_mode] = STATE(132),
    [sym_parameter] = STATE(132),
    [sym_math_env] = STATE(132),
    [sym_tag] = STATE(132),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(132),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(132),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(132),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(132),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(132),
    [sym_opt_math_group] = STATE(132),
    [sym_token] = STATE(132),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(332),
    [sym_begin_group] = ACTIONS(335),
    [sym_alignment_tab] = ACTIONS(350),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(350),
    [sym_subscript] = ACTIONS(350),
    [sym_active_char] = ACTIONS(350),
    [sym_text] = ACTIONS(350),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(355),
    [sym_end_group] = ACTIONS(355),
    [sym_math_shift] = ACTIONS(355),
    [sym_alignment_tab] = ACTIONS(355),
    [sym_parameter_char] = ACTIONS(355),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(355),
    [sym_text] = ACTIONS(355),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(357),
    [sym_begin_group] = ACTIONS(357),
    [sym_end_group] = ACTIONS(357),
    [sym_math_shift] = ACTIONS(357),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(357),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(357),
    [sym_active_char] = ACTIONS(357),
    [sym_text] = ACTIONS(357),
  },
  [136] = {
    [sym_display_math_env_group] = STATE(210),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(359),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(361),
    [sym_begin_group] = ACTIONS(361),
    [sym_end_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(361),
    [sym_parameter_char] = ACTIONS(361),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(361),
    [sym_active_char] = ACTIONS(361),
    [sym_text] = ACTIONS(361),
  },
  [138] = {
    [sym_inline_math_env_group] = STATE(212),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(363),
  },
  [139] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(365),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(367),
    [sym_begin_group] = ACTIONS(367),
    [sym_end_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [141] = {
    [sym_verbatim_env_name] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(371),
    [sym_begin_group] = ACTIONS(371),
    [sym_end_group] = ACTIONS(371),
    [sym_math_shift] = ACTIONS(371),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(371),
    [sym_superscript] = ACTIONS(371),
    [sym_subscript] = ACTIONS(371),
    [sym_active_char] = ACTIONS(371),
    [sym_text] = ACTIONS(371),
  },
  [143] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(375),
  },
  [144] = {
    [aux_sym_verbatim_text_repeat1] = STATE(144),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(380),
  },
  [145] = {
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [aux_sym_verbatim_text_repeat2] = STATE(145),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(382),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(385),
  },
  [146] = {
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
  [147] = {
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
  [148] = {
    [sym__common] = STATE(148),
    [sym__text_mode_common] = STATE(148),
    [sym__text_mode] = STATE(148),
    [sym_text_mode_at] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_text_env] = STATE(148),
    [sym__display_math] = STATE(148),
    [sym_tex_display_math] = STATE(148),
    [sym_latex_display_math] = STATE(148),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(148),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(148),
    [sym_tex_inline_math] = STATE(148),
    [sym_latex_inline_math] = STATE(148),
    [sym_inline_math_env] = STATE(148),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(148),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(148),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(148),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(148),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(148),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(148),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(148),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(148),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(148),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(148),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(148),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(148),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(148),
    [sym_opt_text_group] = STATE(148),
    [sym_token] = STATE(148),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(282),
    [sym_begin_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(288),
    [sym_alignment_tab] = ACTIONS(392),
    [sym_parameter_char] = ACTIONS(294),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(392),
    [sym_text] = ACTIONS(392),
  },
  [149] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(395),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(397),
  },
  [151] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(399),
  },
  [152] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(401),
  },
  [153] = {
    [sym__common] = STATE(219),
    [sym__text_mode_common] = STATE(219),
    [sym__text_mode] = STATE(219),
    [sym_text_mode_at] = STATE(219),
    [sym_parameter] = STATE(219),
    [sym_text_env] = STATE(219),
    [sym__display_math] = STATE(219),
    [sym_tex_display_math] = STATE(219),
    [sym_latex_display_math] = STATE(219),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(219),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(219),
    [sym_tex_inline_math] = STATE(219),
    [sym_latex_inline_math] = STATE(219),
    [sym_inline_math_env] = STATE(219),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(219),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(219),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(219),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(219),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(219),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(219),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(219),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(219),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(219),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(219),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(219),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(219),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(219),
    [sym_opt_text_group] = STATE(219),
    [sym_token] = STATE(219),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(219),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(403),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [154] = {
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(407),
    [sym_alignment_tab] = ACTIONS(407),
    [sym_parameter_char] = ACTIONS(407),
    [sym_superscript] = ACTIONS(407),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [sym_text] = ACTIONS(407),
  },
  [155] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(409),
  },
  [156] = {
    [sym_text_group] = STATE(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(409),
  },
  [157] = {
    [sym__common] = STATE(224),
    [sym__text_mode_common] = STATE(224),
    [sym__text_mode] = STATE(224),
    [sym_text_mode_at] = STATE(224),
    [sym_parameter] = STATE(224),
    [sym_text_env] = STATE(224),
    [sym__display_math] = STATE(224),
    [sym_tex_display_math] = STATE(224),
    [sym_latex_display_math] = STATE(224),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(224),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(224),
    [sym_tex_inline_math] = STATE(224),
    [sym_latex_inline_math] = STATE(224),
    [sym_inline_math_env] = STATE(224),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(224),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(224),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(224),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(224),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(224),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(224),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(224),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(224),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(224),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(224),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(224),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(224),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(224),
    [sym_opt_text_group] = STATE(224),
    [sym_token] = STATE(224),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(223),
    [aux_sym_text_mode_repeat1] = STATE(224),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [158] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(417),
    [sym__end_of_line] = ACTIONS(417),
  },
  [159] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(419),
  },
  [160] = {
    [sym_text_group] = STATE(226),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(211),
    [sym__end_of_line] = ACTIONS(419),
  },
  [161] = {
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
  [162] = {
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(425),
    [sym_math_shift] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [164] = {
    [anon_sym_EQ] = ACTIONS(121),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [165] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(427),
  },
  [166] = {
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
  [167] = {
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
  [168] = {
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
    [sym__at_name] = ACTIONS(245),
  },
  [169] = {
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
  [170] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [171] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(245),
  },
  [172] = {
    [sym__common] = STATE(231),
    [sym__math_mode_at] = STATE(231),
    [sym_parameter] = STATE(231),
    [sym_math_env_at] = STATE(231),
    [sym_tag_at] = STATE(231),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(231),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(231),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(231),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(231),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(231),
    [sym_opt_math_group_at] = STATE(231),
    [sym_token_at] = STATE(231),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [173] = {
    [sym__common] = STATE(178),
    [sym__math_mode_at] = STATE(178),
    [sym_math_mode_at] = STATE(232),
    [sym_parameter] = STATE(178),
    [sym_math_env_at] = STATE(178),
    [sym_tag_at] = STATE(178),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(178),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(178),
    [sym_opt_math_group_at] = STATE(178),
    [sym_token_at] = STATE(178),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(178),
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
  [174] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(443),
  },
  [175] = {
    [sym_math_text_group_at] = STATE(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(445),
  },
  [176] = {
    [sym__common] = STATE(238),
    [sym__math_mode_at] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym_math_env_at] = STATE(238),
    [sym_tag_at] = STATE(238),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(238),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(237),
    [sym_end_token] = STATE(72),
    [sym_include_at] = STATE(238),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(238),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(238),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(238),
    [sym_opt_math_group_at] = STATE(238),
    [sym_token_at] = STATE(238),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(447),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [177] = {
    [sym__common] = STATE(240),
    [sym__math_mode_at] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_math_env_at] = STATE(240),
    [sym_tag_at] = STATE(240),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(240),
    [sym_opt_math_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(177),
    [sym_end_opt] = STATE(239),
    [aux_sym_math_mode_at_repeat1] = STATE(240),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(451),
    [sym_active_char] = ACTIONS(451),
    [sym_text] = ACTIONS(451),
  },
  [178] = {
    [sym__common] = STATE(241),
    [sym__math_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_env_at] = STATE(241),
    [sym_tag_at] = STATE(241),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(241),
    [sym_opt_math_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(453),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_text] = ACTIONS(455),
  },
  [179] = {
    [sym_end_display_math] = STATE(242),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(177),
  },
  [180] = {
    [sym__common] = STATE(243),
    [sym__math_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_math_env_at] = STATE(243),
    [sym_tag_at] = STATE(243),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(243),
    [sym_opt_math_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(243),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(453),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [181] = {
    [sym_end_inline_math] = STATE(244),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
  },
  [182] = {
    [sym_display_math_end] = STATE(245),
    [sym_end_token] = STATE(136),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [183] = {
    [sym_inline_math_end] = STATE(246),
    [sym_end_token] = STATE(138),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [184] = {
    [sym_text_group_at] = STATE(249),
    [sym_opt_text_group_at] = STATE(250),
    [sym_begin_opt] = STATE(251),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(459),
    [sym__end_of_line] = ACTIONS(461),
  },
  [185] = {
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(463),
    [sym_begin_group] = ACTIONS(463),
    [sym_end_group] = ACTIONS(463),
    [sym_math_shift] = ACTIONS(463),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(463),
    [sym_superscript] = ACTIONS(463),
    [sym_subscript] = ACTIONS(463),
    [sym_active_char] = ACTIONS(463),
    [sym_text] = ACTIONS(463),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(465),
    [sym_end_group] = ACTIONS(465),
    [sym_math_shift] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(465),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [sym_text] = ACTIONS(465),
  },
  [187] = {
    [sym_text_group_at] = STATE(252),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(101),
  },
  [188] = {
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
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(469),
    [sym_begin_group] = ACTIONS(469),
    [sym_end_group] = ACTIONS(469),
    [sym_math_shift] = ACTIONS(469),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [190] = {
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
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(473),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(473),
    [sym_math_shift] = ACTIONS(473),
    [sym_alignment_tab] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(473),
    [sym_superscript] = ACTIONS(473),
    [sym_subscript] = ACTIONS(473),
    [sym_active_char] = ACTIONS(473),
    [sym_text] = ACTIONS(473),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(475),
    [sym_begin_group] = ACTIONS(475),
    [sym_end_group] = ACTIONS(475),
    [sym_math_shift] = ACTIONS(475),
    [sym_alignment_tab] = ACTIONS(475),
    [sym_parameter_char] = ACTIONS(475),
    [sym_superscript] = ACTIONS(475),
    [sym_subscript] = ACTIONS(475),
    [sym_active_char] = ACTIONS(475),
    [sym_text] = ACTIONS(475),
  },
  [193] = {
    [sym__common] = STATE(254),
    [sym__text_mode_common] = STATE(254),
    [sym__text_mode_at] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_env] = STATE(254),
    [sym__display_math_at] = STATE(254),
    [sym_tex_display_math_at] = STATE(254),
    [sym_latex_display_math_at] = STATE(254),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(254),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(254),
    [sym_tex_inline_math_at] = STATE(254),
    [sym_latex_inline_math_at] = STATE(254),
    [sym_inline_math_env_at] = STATE(254),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(254),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(254),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(254),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(254),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(254),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(254),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(254),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(254),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(254),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(254),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(254),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(254),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(254),
    [sym_opt_text_group_at] = STATE(254),
    [sym_token_at] = STATE(254),
    [sym_begin_opt] = STATE(109),
    [sym_end_opt] = STATE(253),
    [aux_sym_text_mode_at_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(477),
    [sym_text] = ACTIONS(477),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(479),
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
  [195] = {
    [sym__common] = STATE(195),
    [sym__text_mode_common] = STATE(195),
    [sym__text_mode_at] = STATE(195),
    [sym_parameter] = STATE(195),
    [sym_text_env] = STATE(195),
    [sym__display_math_at] = STATE(195),
    [sym_tex_display_math_at] = STATE(195),
    [sym_latex_display_math_at] = STATE(195),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(195),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(195),
    [sym_tex_inline_math_at] = STATE(195),
    [sym_latex_inline_math_at] = STATE(195),
    [sym_inline_math_env_at] = STATE(195),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(195),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(195),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(195),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(195),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(195),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(195),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(195),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(195),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(195),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(195),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(195),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(195),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(195),
    [sym_opt_text_group_at] = STATE(195),
    [sym_token_at] = STATE(195),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(487),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [196] = {
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
    [sym_superscript] = ACTIONS(502),
    [sym_subscript] = ACTIONS(502),
    [sym_active_char] = ACTIONS(502),
    [sym_text] = ACTIONS(502),
  },
  [197] = {
    [sym__common] = STATE(197),
    [sym__text_mode_common] = STATE(197),
    [sym__text_mode] = STATE(197),
    [sym_text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env] = STATE(197),
    [sym__display_math] = STATE(197),
    [sym_tex_display_math] = STATE(197),
    [sym_latex_display_math] = STATE(197),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(197),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(197),
    [sym_tex_inline_math] = STATE(197),
    [sym_latex_inline_math] = STATE(197),
    [sym_inline_math_env] = STATE(197),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(197),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(197),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(197),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(197),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(197),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(197),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(197),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(197),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(197),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(197),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(197),
    [sym_opt_text_group] = STATE(197),
    [sym_token] = STATE(197),
    [sym_begin_opt] = STATE(29),
    [aux_sym_text_mode_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(282),
    [sym_begin_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(288),
    [sym_alignment_tab] = ACTIONS(504),
    [sym_parameter_char] = ACTIONS(294),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(504),
    [sym_text] = ACTIONS(504),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(507),
    [sym_begin_group] = ACTIONS(507),
    [sym_end_group] = ACTIONS(507),
    [sym_math_shift] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [199] = {
    [sym__common] = STATE(199),
    [sym__math_mode] = STATE(199),
    [sym_parameter] = STATE(199),
    [sym_math_env] = STATE(199),
    [sym_tag] = STATE(199),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(199),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(199),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(199),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(199),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(199),
    [sym_opt_math_group] = STATE(199),
    [sym_token] = STATE(199),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(332),
    [sym_begin_group] = ACTIONS(335),
    [sym_end_group] = ACTIONS(338),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(509),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [sym_text] = ACTIONS(509),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(512),
  },
  [201] = {
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
  [202] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(516),
  },
  [203] = {
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at] = STATE(116),
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
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(518),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(518),
    [sym_begin_group] = ACTIONS(518),
    [sym_end_group] = ACTIONS(518),
    [sym_math_shift] = ACTIONS(518),
    [sym_alignment_tab] = ACTIONS(518),
    [sym_parameter_char] = ACTIONS(518),
    [sym_superscript] = ACTIONS(518),
    [sym_subscript] = ACTIONS(518),
    [sym_active_char] = ACTIONS(518),
    [sym_text] = ACTIONS(518),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(520),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(520),
    [sym_end_group] = ACTIONS(520),
    [sym_math_shift] = ACTIONS(520),
    [sym_alignment_tab] = ACTIONS(520),
    [sym_parameter_char] = ACTIONS(520),
    [sym_superscript] = ACTIONS(520),
    [sym_subscript] = ACTIONS(520),
    [sym_active_char] = ACTIONS(520),
    [sym_text] = ACTIONS(520),
  },
  [206] = {
    [sym__common] = STATE(206),
    [sym__math_mode] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_math_env] = STATE(206),
    [sym_tag] = STATE(206),
    [sym_tag_token] = STATE(53),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(54),
    [sym_begin_token] = STATE(55),
    [sym_include] = STATE(206),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(206),
    [sym_opt_math_group] = STATE(206),
    [sym_token] = STATE(206),
    [sym_begin_opt] = STATE(56),
    [aux_sym_math_mode_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(332),
    [sym_begin_group] = ACTIONS(335),
    [sym_alignment_tab] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(522),
    [sym_subscript] = ACTIONS(522),
    [sym_active_char] = ACTIONS(522),
    [sym_text] = ACTIONS(522),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(525),
    [sym_begin_group] = ACTIONS(525),
    [sym_end_group] = ACTIONS(525),
    [sym_math_shift] = ACTIONS(525),
    [sym_alignment_tab] = ACTIONS(525),
    [sym_parameter_char] = ACTIONS(525),
    [sym_superscript] = ACTIONS(525),
    [sym_subscript] = ACTIONS(525),
    [sym_active_char] = ACTIONS(525),
    [sym_text] = ACTIONS(525),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_end_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(527),
  },
  [209] = {
    [sym_display_math_env_name] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [210] = {
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
  [211] = {
    [sym_inline_math_env_name] = ACTIONS(533),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_end_group] = ACTIONS(535),
    [sym_math_shift] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [213] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(537),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(539),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(539),
    [sym__end_of_line] = ACTIONS(539),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(541),
    [sym_begin_group] = ACTIONS(541),
    [sym_end_group] = ACTIONS(541),
    [sym_math_shift] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(541),
    [sym_parameter_char] = ACTIONS(541),
    [sym_superscript] = ACTIONS(541),
    [sym_subscript] = ACTIONS(541),
    [sym_active_char] = ACTIONS(541),
    [sym_text] = ACTIONS(541),
  },
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(543),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(543),
    [sym__end_of_line] = ACTIONS(543),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(545),
    [sym_begin_group] = ACTIONS(545),
    [sym_end_group] = ACTIONS(545),
    [sym_math_shift] = ACTIONS(545),
    [sym_alignment_tab] = ACTIONS(545),
    [sym_parameter_char] = ACTIONS(545),
    [sym_superscript] = ACTIONS(545),
    [sym_subscript] = ACTIONS(545),
    [sym_active_char] = ACTIONS(545),
    [sym_text] = ACTIONS(545),
  },
  [218] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(149),
  },
  [219] = {
    [sym__common] = STATE(116),
    [sym__text_mode_common] = STATE(116),
    [sym__text_mode] = STATE(116),
    [sym_text_mode_at] = STATE(116),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(547),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(549),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(549),
    [sym_begin_group] = ACTIONS(549),
    [sym_alignment_tab] = ACTIONS(549),
    [sym_parameter_char] = ACTIONS(549),
    [sym_superscript] = ACTIONS(549),
    [sym_subscript] = ACTIONS(549),
    [sym_active_char] = ACTIONS(549),
    [sym_text] = ACTIONS(549),
  },
  [221] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(551),
  },
  [222] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(271),
  },
  [223] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(273),
    [sym__end_of_line] = ACTIONS(273),
  },
  [224] = {
    [sym__common] = STATE(197),
    [sym__text_mode_common] = STATE(197),
    [sym__text_mode] = STATE(197),
    [sym_text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env] = STATE(197),
    [sym__display_math] = STATE(197),
    [sym_tex_display_math] = STATE(197),
    [sym_latex_display_math] = STATE(197),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(197),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(197),
    [sym_tex_inline_math] = STATE(197),
    [sym_latex_inline_math] = STATE(197),
    [sym_inline_math_env] = STATE(197),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(197),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(197),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(197),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(197),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(197),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(197),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(197),
    [sym_emph_token] = STATE(23),
    [sym_textbf] = STATE(197),
    [sym_textbf_token] = STATE(24),
    [sym_textit] = STATE(197),
    [sym_textit_token] = STATE(25),
    [sym_texttt] = STATE(197),
    [sym_texttt_token] = STATE(26),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_text_group] = STATE(197),
    [sym_opt_text_group] = STATE(197),
    [sym_token] = STATE(197),
    [sym_begin_opt] = STATE(29),
    [sym_end_opt] = STATE(261),
    [aux_sym_text_mode_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [225] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(553),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(555),
    [sym__end_of_line] = ACTIONS(555),
  },
  [226] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(557),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(559),
    [sym_begin_group] = ACTIONS(559),
    [sym_end_group] = ACTIONS(559),
    [sym_math_shift] = ACTIONS(559),
    [sym_alignment_tab] = ACTIONS(559),
    [sym_parameter_char] = ACTIONS(559),
    [sym_superscript] = ACTIONS(559),
    [sym_subscript] = ACTIONS(559),
    [sym_active_char] = ACTIONS(559),
    [sym_text] = ACTIONS(559),
  },
  [228] = {
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(561),
    [sym_begin_group] = ACTIONS(561),
    [sym_end_group] = ACTIONS(561),
    [sym_math_shift] = ACTIONS(561),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(561),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_text] = ACTIONS(561),
  },
  [229] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(487),
    [sym_end_group] = ACTIONS(563),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(565),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(565),
    [sym_text] = ACTIONS(565),
  },
  [230] = {
    [anon_sym_LBRACK] = ACTIONS(568),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(568),
    [sym_begin_group] = ACTIONS(568),
    [sym_end_group] = ACTIONS(568),
    [sym_math_shift] = ACTIONS(568),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(568),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_text] = ACTIONS(568),
  },
  [231] = {
    [sym__common] = STATE(264),
    [sym__math_mode_at] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env_at] = STATE(264),
    [sym_tag_at] = STATE(264),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(264),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(264),
    [sym_opt_math_group_at] = STATE(264),
    [sym_token_at] = STATE(264),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(572),
    [sym_subscript] = ACTIONS(572),
    [sym_active_char] = ACTIONS(572),
    [sym_text] = ACTIONS(572),
  },
  [232] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(574),
  },
  [233] = {
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
  [234] = {
    [sym_text_mode_at] = STATE(268),
    [sym_makeatletter] = STATE(27),
    [sym_makeatletter_token] = STATE(28),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(578),
    [sym_end_group] = ACTIONS(580),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_end_group] = ACTIONS(582),
    [sym_math_shift] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [236] = {
    [anon_sym_tag] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(245),
  },
  [237] = {
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_end_group] = ACTIONS(584),
    [sym_math_shift] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [238] = {
    [sym__common] = STATE(243),
    [sym__math_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_math_env_at] = STATE(243),
    [sym_tag_at] = STATE(243),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_end] = STATE(269),
    [sym_end_token] = STATE(72),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(243),
    [sym_opt_math_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(243),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(447),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_RBRACK] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_end_group] = ACTIONS(586),
    [sym_math_shift] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [240] = {
    [sym__common] = STATE(271),
    [sym__math_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_math_env_at] = STATE(271),
    [sym_tag_at] = STATE(271),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(271),
    [sym_opt_math_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(177),
    [sym_end_opt] = STATE(270),
    [aux_sym_math_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym_begin_group] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_text] = ACTIONS(588),
  },
  [241] = {
    [sym__common] = STATE(241),
    [sym__math_mode_at] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_env_at] = STATE(241),
    [sym_tag_at] = STATE(241),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(241),
    [sym_opt_math_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(593),
    [sym_begin_group] = ACTIONS(596),
    [sym_math_shift] = ACTIONS(599),
    [sym_alignment_tab] = ACTIONS(601),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(601),
    [sym_subscript] = ACTIONS(601),
    [sym_active_char] = ACTIONS(601),
    [sym_text] = ACTIONS(601),
  },
  [242] = {
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
  [243] = {
    [sym__common] = STATE(243),
    [sym__math_mode_at] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_math_env_at] = STATE(243),
    [sym_tag_at] = STATE(243),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(243),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(243),
    [sym_opt_math_group_at] = STATE(243),
    [sym_token_at] = STATE(243),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(243),
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(593),
    [sym_begin_group] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(609),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(609),
    [sym_subscript] = ACTIONS(609),
    [sym_active_char] = ACTIONS(609),
    [sym_text] = ACTIONS(609),
  },
  [244] = {
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
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(614),
    [sym_begin_group] = ACTIONS(614),
    [sym_end_group] = ACTIONS(614),
    [sym_math_shift] = ACTIONS(614),
    [sym_alignment_tab] = ACTIONS(614),
    [sym_parameter_char] = ACTIONS(614),
    [sym_superscript] = ACTIONS(614),
    [sym_subscript] = ACTIONS(614),
    [sym_active_char] = ACTIONS(614),
    [sym_text] = ACTIONS(614),
  },
  [246] = {
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
    [sym_superscript] = ACTIONS(616),
    [sym_subscript] = ACTIONS(616),
    [sym_active_char] = ACTIONS(616),
    [sym_text] = ACTIONS(616),
  },
  [247] = {
    [sym__common] = STATE(273),
    [sym__text_mode_common] = STATE(273),
    [sym__text_mode_at] = STATE(273),
    [sym_parameter] = STATE(273),
    [sym_text_env] = STATE(273),
    [sym__display_math_at] = STATE(273),
    [sym_tex_display_math_at] = STATE(273),
    [sym_latex_display_math_at] = STATE(273),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(273),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(273),
    [sym_tex_inline_math_at] = STATE(273),
    [sym_latex_inline_math_at] = STATE(273),
    [sym_inline_math_env_at] = STATE(273),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(273),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(273),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(273),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(273),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(273),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(273),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(273),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(273),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(273),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(273),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(273),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(273),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(273),
    [sym_opt_text_group_at] = STATE(273),
    [sym_token_at] = STATE(273),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(618),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(620),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(620),
    [sym_text] = ACTIONS(620),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(622),
    [sym_superscript] = ACTIONS(622),
    [sym_subscript] = ACTIONS(622),
    [sym_active_char] = ACTIONS(622),
    [sym_text] = ACTIONS(622),
  },
  [249] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(624),
  },
  [250] = {
    [sym_text_group_at] = STATE(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(459),
    [sym__end_of_line] = ACTIONS(624),
  },
  [251] = {
    [sym__common] = STATE(277),
    [sym__text_mode_common] = STATE(277),
    [sym__text_mode_at] = STATE(277),
    [sym_parameter] = STATE(277),
    [sym_text_env] = STATE(277),
    [sym__display_math_at] = STATE(277),
    [sym_tex_display_math_at] = STATE(277),
    [sym_latex_display_math_at] = STATE(277),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(277),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(277),
    [sym_tex_inline_math_at] = STATE(277),
    [sym_latex_inline_math_at] = STATE(277),
    [sym_inline_math_env_at] = STATE(277),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(277),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(277),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(277),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(277),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(277),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(277),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(277),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(277),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(277),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(277),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(277),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(277),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(277),
    [sym_opt_text_group_at] = STATE(277),
    [sym_token_at] = STATE(277),
    [sym_begin_opt] = STATE(109),
    [sym_end_opt] = STATE(276),
    [aux_sym_text_mode_at_repeat1] = STATE(277),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(626),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
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
    [sym__common] = STATE(254),
    [sym__text_mode_common] = STATE(254),
    [sym__text_mode_at] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_env] = STATE(254),
    [sym__display_math_at] = STATE(254),
    [sym_tex_display_math_at] = STATE(254),
    [sym_latex_display_math_at] = STATE(254),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(254),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(254),
    [sym_tex_inline_math_at] = STATE(254),
    [sym_latex_inline_math_at] = STATE(254),
    [sym_inline_math_env_at] = STATE(254),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(254),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(254),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(254),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(254),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(254),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(254),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(254),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(254),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(254),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(254),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(254),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(254),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(254),
    [sym_opt_text_group_at] = STATE(254),
    [sym_token_at] = STATE(254),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(563),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(487),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(635),
    [sym_begin_group] = ACTIONS(635),
    [sym_end_group] = ACTIONS(635),
    [sym_math_shift] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(635),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(635),
    [sym_subscript] = ACTIONS(635),
    [sym_active_char] = ACTIONS(635),
    [sym_text] = ACTIONS(635),
  },
  [256] = {
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(637),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(637),
    [sym_end_group] = ACTIONS(637),
    [sym_math_shift] = ACTIONS(637),
    [sym_alignment_tab] = ACTIONS(637),
    [sym_parameter_char] = ACTIONS(637),
    [sym_superscript] = ACTIONS(637),
    [sym_subscript] = ACTIONS(637),
    [sym_active_char] = ACTIONS(637),
    [sym_text] = ACTIONS(637),
  },
  [257] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(639),
  },
  [258] = {
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
  [259] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(300),
  },
  [260] = {
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(641),
    [sym_alignment_tab] = ACTIONS(641),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(641),
    [sym_subscript] = ACTIONS(641),
    [sym_active_char] = ACTIONS(641),
    [sym_text] = ACTIONS(641),
  },
  [261] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(502),
    [sym__end_of_line] = ACTIONS(502),
  },
  [262] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(645),
    [sym__end_of_line] = ACTIONS(645),
  },
  [263] = {
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
  [264] = {
    [sym__common] = STATE(264),
    [sym__math_mode_at] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env_at] = STATE(264),
    [sym_tag_at] = STATE(264),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(264),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(264),
    [sym_opt_math_group_at] = STATE(264),
    [sym_token_at] = STATE(264),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(593),
    [sym_begin_group] = ACTIONS(596),
    [sym_end_group] = ACTIONS(599),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(649),
    [sym_subscript] = ACTIONS(649),
    [sym_active_char] = ACTIONS(649),
    [sym_text] = ACTIONS(649),
  },
  [265] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(652),
  },
  [266] = {
    [anon_sym_makeatletter] = ACTIONS(654),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [267] = {
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
  [268] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(658),
  },
  [269] = {
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
  [270] = {
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
  [271] = {
    [sym__common] = STATE(271),
    [sym__math_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_math_env_at] = STATE(271),
    [sym_tag_at] = STATE(271),
    [sym_tag_token] = STATE(175),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(176),
    [sym_begin_token] = STATE(55),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(101),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(271),
    [sym_opt_math_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(177),
    [aux_sym_math_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(590),
    [anon_sym_RBRACK] = ACTIONS(599),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(593),
    [sym_begin_group] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(664),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(664),
    [sym_subscript] = ACTIONS(664),
    [sym_active_char] = ACTIONS(664),
    [sym_text] = ACTIONS(664),
  },
  [272] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(433),
  },
  [273] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(109),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(667),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [274] = {
    [anon_sym_LBRACK] = ACTIONS(669),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(669),
    [sym_begin_group] = ACTIONS(669),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(669),
    [sym_superscript] = ACTIONS(669),
    [sym_subscript] = ACTIONS(669),
    [sym_active_char] = ACTIONS(669),
    [sym_text] = ACTIONS(669),
  },
  [275] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(671),
  },
  [276] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(475),
    [sym__end_of_line] = ACTIONS(475),
  },
  [277] = {
    [sym__common] = STATE(254),
    [sym__text_mode_common] = STATE(254),
    [sym__text_mode_at] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_env] = STATE(254),
    [sym__display_math_at] = STATE(254),
    [sym_tex_display_math_at] = STATE(254),
    [sym_latex_display_math_at] = STATE(254),
    [sym_begin_display_math] = STATE(96),
    [sym_begin_inline_math] = STATE(97),
    [sym_display_math_env_at] = STATE(254),
    [sym_display_math_begin_at] = STATE(98),
    [sym__inline_math_at] = STATE(254),
    [sym_tex_inline_math_at] = STATE(254),
    [sym_latex_inline_math_at] = STATE(254),
    [sym_inline_math_env_at] = STATE(254),
    [sym_inline_math_begin] = STATE(99),
    [sym_verbatim_env] = STATE(254),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(254),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(100),
    [sym_documentclass] = STATE(254),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(254),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(254),
    [sym_include_token] = STATE(101),
    [sym_section_at] = STATE(254),
    [sym_section_token] = STATE(102),
    [sym_storage] = STATE(254),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(254),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(254),
    [sym_emph_token] = STATE(103),
    [sym_textbf_at] = STATE(254),
    [sym_textbf_token] = STATE(104),
    [sym_textit_at] = STATE(254),
    [sym_textit_token] = STATE(105),
    [sym_texttt_at] = STATE(254),
    [sym_texttt_token] = STATE(106),
    [sym_text_group_at] = STATE(254),
    [sym_opt_text_group_at] = STATE(254),
    [sym_token_at] = STATE(254),
    [sym_begin_opt] = STATE(109),
    [sym_end_opt] = STATE(283),
    [aux_sym_text_mode_at_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(477),
    [sym_text] = ACTIONS(477),
  },
  [278] = {
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
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(673),
    [sym_begin_group] = ACTIONS(673),
    [sym_end_group] = ACTIONS(673),
    [sym_math_shift] = ACTIONS(673),
    [sym_alignment_tab] = ACTIONS(673),
    [sym_parameter_char] = ACTIONS(673),
    [sym_superscript] = ACTIONS(673),
    [sym_subscript] = ACTIONS(673),
    [sym_active_char] = ACTIONS(673),
    [sym_text] = ACTIONS(673),
  },
  [280] = {
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_end_group] = ACTIONS(675),
    [sym_math_shift] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_text] = ACTIONS(675),
  },
  [281] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(561),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(677),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(630),
    [sym__end_of_line] = ACTIONS(630),
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
  [105] = {.count = 1, .reusable = true}, SHIFT(110),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(111),
  [111] = {.count = 1, .reusable = true}, SHIFT(113),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(114),
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
  [151] = {.count = 1, .reusable = true}, SHIFT(115),
  [153] = {.count = 1, .reusable = true}, SHIFT(116),
  [155] = {.count = 1, .reusable = false}, SHIFT(117),
  [157] = {.count = 1, .reusable = true}, SHIFT(118),
  [159] = {.count = 1, .reusable = true}, SHIFT(119),
  [161] = {.count = 1, .reusable = true}, SHIFT(121),
  [163] = {.count = 1, .reusable = true}, SHIFT(122),
  [165] = {.count = 1, .reusable = true}, SHIFT(124),
  [167] = {.count = 1, .reusable = true}, SHIFT(126),
  [169] = {.count = 1, .reusable = true}, SHIFT(128),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [173] = {.count = 1, .reusable = true}, SHIFT(129),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(130),
  [179] = {.count = 1, .reusable = true}, SHIFT(132),
  [181] = {.count = 1, .reusable = true}, SHIFT(133),
  [183] = {.count = 1, .reusable = true}, SHIFT(139),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(141),
  [189] = {.count = 1, .reusable = false}, SHIFT(144),
  [191] = {.count = 1, .reusable = true}, SHIFT(143),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(145),
  [197] = {.count = 1, .reusable = false}, SHIFT(139),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(148),
  [203] = {.count = 1, .reusable = false}, SHIFT(149),
  [205] = {.count = 1, .reusable = false}, SHIFT(150),
  [207] = {.count = 1, .reusable = false}, SHIFT(151),
  [209] = {.count = 1, .reusable = false}, SHIFT(152),
  [211] = {.count = 1, .reusable = true}, SHIFT(153),
  [213] = {.count = 1, .reusable = true}, SHIFT(154),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(158),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(152),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [231] = {.count = 1, .reusable = false}, SHIFT(164),
  [233] = {.count = 1, .reusable = true}, SHIFT(165),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [243] = {.count = 1, .reusable = false}, SHIFT(166),
  [245] = {.count = 1, .reusable = false}, SHIFT(167),
  [247] = {.count = 1, .reusable = true}, SHIFT(168),
  [249] = {.count = 1, .reusable = true}, SHIFT(169),
  [251] = {.count = 1, .reusable = true}, SHIFT(170),
  [253] = {.count = 1, .reusable = true}, SHIFT(171),
  [255] = {.count = 1, .reusable = true}, SHIFT(172),
  [257] = {.count = 1, .reusable = true}, SHIFT(173),
  [259] = {.count = 1, .reusable = true}, SHIFT(178),
  [261] = {.count = 1, .reusable = true}, SHIFT(180),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(193),
  [269] = {.count = 1, .reusable = true}, SHIFT(195),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(197),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(114),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(116),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(198),
  [311] = {.count = 1, .reusable = true}, SHIFT(199),
  [313] = {.count = 1, .reusable = true}, SHIFT(200),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [317] = {.count = 1, .reusable = true}, SHIFT(201),
  [319] = {.count = 1, .reusable = true}, SHIFT(203),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(206),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(49),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(50),
  [338] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(129),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [346] = {.count = 1, .reusable = true}, SHIFT(207),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(132),
  [353] = {.count = 1, .reusable = true}, SHIFT(208),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [359] = {.count = 1, .reusable = true}, SHIFT(209),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [363] = {.count = 1, .reusable = true}, SHIFT(211),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [369] = {.count = 1, .reusable = true}, SHIFT(213),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [373] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(144),
  [380] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(68),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(145),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(148),
  [395] = {.count = 1, .reusable = true}, SHIFT(214),
  [397] = {.count = 1, .reusable = true}, SHIFT(215),
  [399] = {.count = 1, .reusable = true}, SHIFT(216),
  [401] = {.count = 1, .reusable = true}, SHIFT(217),
  [403] = {.count = 1, .reusable = true}, SHIFT(218),
  [405] = {.count = 1, .reusable = true}, SHIFT(219),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [409] = {.count = 1, .reusable = true}, SHIFT(220),
  [411] = {.count = 1, .reusable = true}, SHIFT(222),
  [413] = {.count = 1, .reusable = true}, SHIFT(224),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [419] = {.count = 1, .reusable = true}, SHIFT(225),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(227),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(228),
  [437] = {.count = 1, .reusable = true}, SHIFT(229),
  [439] = {.count = 1, .reusable = true}, SHIFT(230),
  [441] = {.count = 1, .reusable = true}, SHIFT(231),
  [443] = {.count = 1, .reusable = true}, SHIFT(233),
  [445] = {.count = 1, .reusable = true}, SHIFT(234),
  [447] = {.count = 1, .reusable = true}, SHIFT(236),
  [449] = {.count = 1, .reusable = true}, SHIFT(238),
  [451] = {.count = 1, .reusable = true}, SHIFT(240),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [455] = {.count = 1, .reusable = true}, SHIFT(241),
  [457] = {.count = 1, .reusable = true}, SHIFT(243),
  [459] = {.count = 1, .reusable = true}, SHIFT(247),
  [461] = {.count = 1, .reusable = true}, SHIFT(248),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [477] = {.count = 1, .reusable = true}, SHIFT(254),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 3),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(168),
  [487] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(94),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(95),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(195),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(7),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(197),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(199),
  [512] = {.count = 1, .reusable = true}, SHIFT(255),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(256),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(206),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [529] = {.count = 1, .reusable = true}, SHIFT(257),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [533] = {.count = 1, .reusable = true}, SHIFT(150),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [537] = {.count = 1, .reusable = true}, SHIFT(258),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [547] = {.count = 1, .reusable = true}, SHIFT(259),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [551] = {.count = 1, .reusable = true}, SHIFT(260),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [557] = {.count = 1, .reusable = true}, SHIFT(262),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(229),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [570] = {.count = 1, .reusable = true}, SHIFT(263),
  [572] = {.count = 1, .reusable = true}, SHIFT(264),
  [574] = {.count = 1, .reusable = true}, SHIFT(265),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [578] = {.count = 1, .reusable = true}, SHIFT(266),
  [580] = {.count = 1, .reusable = true}, SHIFT(267),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(271),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(171),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(172),
  [599] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(241),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(243),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [618] = {.count = 1, .reusable = true}, SHIFT(272),
  [620] = {.count = 1, .reusable = true}, SHIFT(273),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(274),
  [626] = {.count = 1, .reusable = true}, SHIFT(277),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(254),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [639] = {.count = 1, .reusable = true}, SHIFT(278),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(264),
  [652] = {.count = 1, .reusable = true}, SHIFT(279),
  [654] = {.count = 1, .reusable = true}, SHIFT(45),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [658] = {.count = 1, .reusable = true}, SHIFT(280),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(271),
  [667] = {.count = 1, .reusable = true}, SHIFT(281),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [671] = {.count = 1, .reusable = true}, SHIFT(282),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
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
