#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 339
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 4
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

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
  anon_sym_footnote = 21,
  anon_sym_textbf = 22,
  anon_sym_textit = 23,
  anon_sym_texttt = 24,
  anon_sym_makeatletter = 25,
  anon_sym_makeatother = 26,
  sym_magic_comment = 27,
  sym_comment = 28,
  sym__escape = 29,
  sym_begin_group = 30,
  sym_end_group = 31,
  sym_math_shift = 32,
  sym_alignment_tab = 33,
  sym__end_of_line = 34,
  sym_parameter_char = 35,
  sym_superscript = 36,
  sym_subscript = 37,
  sym__whitespace = 38,
  sym__name = 39,
  sym__name_at = 40,
  sym_active_char = 41,
  sym_text = 42,
  sym_number = 43,
  sym_document = 44,
  sym__common = 45,
  sym__text_mode_common = 46,
  sym__text_mode = 47,
  sym_text_mode = 48,
  sym__text_mode_at = 49,
  sym_text_mode_at = 50,
  sym_text_mode_at_region = 51,
  sym__math_mode_common = 52,
  sym__math_mode = 53,
  sym_math_mode = 54,
  sym__math_mode_at = 55,
  sym_math_mode_at = 56,
  sym_parameter = 57,
  sym_text_env = 58,
  sym_text_env_at = 59,
  sym_math_env = 60,
  sym_math_env_at = 61,
  sym__display_math = 62,
  sym__display_math_at = 63,
  sym_tex_display_math = 64,
  sym_tex_display_math_at = 65,
  sym_latex_display_math = 66,
  sym_latex_display_math_at = 67,
  sym_begin_display_math = 68,
  sym_end_display_math = 69,
  sym_begin_inline_math = 70,
  sym_end_inline_math = 71,
  sym_display_math_env = 72,
  sym_display_math_env_at = 73,
  sym_display_math_begin = 74,
  sym_display_math_begin_at = 75,
  sym_display_math_end = 76,
  sym_display_math_env_group = 77,
  sym__inline_math = 78,
  sym__inline_math_at = 79,
  sym_tex_inline_math = 80,
  sym_tex_inline_math_at = 81,
  sym_latex_inline_math = 82,
  sym_latex_inline_math_at = 83,
  sym_inline_math_env = 84,
  sym_inline_math_env_at = 85,
  sym_inline_math_begin = 86,
  sym_inline_math_end = 87,
  sym_inline_math_env_group = 88,
  sym_tag = 89,
  sym_tag_at = 90,
  sym_tag_token = 91,
  sym_verbatim_env = 92,
  sym_verbatim_begin = 93,
  sym_verbatim_end = 94,
  sym_verbatim_text = 95,
  sym_verbatim_env_group = 96,
  sym_escaped = 97,
  sym_begin = 98,
  sym_begin_token = 99,
  sym_end = 100,
  sym_end_token = 101,
  sym_documentclass = 102,
  sym_documentclass_token = 103,
  sym_usepackage = 104,
  sym_usepackage_token = 105,
  sym_include = 106,
  sym_include_at = 107,
  sym_include_token = 108,
  sym_section = 109,
  sym_section_at = 110,
  sym_section_token = 111,
  sym_storage = 112,
  sym_storage_token = 113,
  sym_catcode = 114,
  sym_catcode_token = 115,
  sym_emph = 116,
  sym_emph_at = 117,
  sym_emph_token = 118,
  sym_footnote = 119,
  sym_footnote_at = 120,
  sym_footnote_token = 121,
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
  aux_sym_verbatim_text_repeat1 = 154,
  aux_sym_verbatim_text_repeat2 = 155,
  anon_alias_sym_class_name = 156,
  anon_alias_sym_env_name = 157,
  anon_alias_sym_package_name = 158,
  anon_alias_sym_text = 159,
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
  [anon_sym_footnote] = "footnote",
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
  [sym__whitespace] = "_whitespace",
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
  [sym__whitespace] = {
    .visible = false,
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
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == 'p')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'u')
        ADVANCE(157);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(169);
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
      if (lookahead == 'o')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(100);
      if (lookahead == 'p')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
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
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(110);
      if (lookahead == 'i')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(133);
      if (lookahead == 'u')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(140);
      if (lookahead == 's')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(133);
      if (lookahead == 'u')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 170:
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
    case 171:
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
    case 174:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 175:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 176:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(177);
      ADVANCE(35);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 'd')
        ADVANCE(182);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 186:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'd')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_end);
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
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == 'p')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(147);
      if (lookahead == 'u')
        ADVANCE(157);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(169);
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
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 293:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 294:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(313);
      if (lookahead == 'd')
        ADVANCE(325);
      if (lookahead == 'e')
        ADVANCE(340);
      if (lookahead == 'f')
        ADVANCE(345);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'k')
        ADVANCE(362);
      if (lookahead == 'm')
        ADVANCE(364);
      if (lookahead == 'p')
        ADVANCE(378);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(411);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(297);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(298);
      if (lookahead == 'p')
        ADVANCE(303);
      if (lookahead == 's')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(314);
      if (lookahead == 'h')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(326);
      if (lookahead == 'o')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'm')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(355);
      if (lookahead == 'p')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(365);
      if (lookahead == 'i')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 't')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(387);
      if (lookahead == 'u')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(387);
      if (lookahead == 'u')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(405);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 't')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 423:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(181);
      if (lookahead == 'd')
        ADVANCE(182);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'k')
        ADVANCE(107);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 425:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 426:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(313);
      if (lookahead == 'd')
        ADVANCE(325);
      if (lookahead == 'e')
        ADVANCE(340);
      if (lookahead == 'f')
        ADVANCE(345);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'k')
        ADVANCE(362);
      if (lookahead == 'm')
        ADVANCE(427);
      if (lookahead == 'p')
        ADVANCE(378);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(411);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 428:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(429);
      if (lookahead == 'd')
        ADVANCE(430);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'k')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(431);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 434:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'a')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'k')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'e')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'a')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'o')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 't')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'h')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'e')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'r')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 446:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(313);
      if (lookahead == 'd')
        ADVANCE(325);
      if (lookahead == 'e')
        ADVANCE(447);
      if (lookahead == 'f')
        ADVANCE(345);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'k')
        ADVANCE(362);
      if (lookahead == 'm')
        ADVANCE(427);
      if (lookahead == 'p')
        ADVANCE(378);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(411);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'm')
        ADVANCE(342);
      if (lookahead == 'n')
        ADVANCE(448);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(449);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
      END_STATE();
    case 450:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'b')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(429);
      if (lookahead == 'd')
        ADVANCE(430);
      if (lookahead == 'e')
        ADVANCE(451);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'k')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(431);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(169);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'n')
        ADVANCE(448);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(302);
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
  [4] = {.lex_state = 170},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 173},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 175},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 173},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 176},
  [33] = {.lex_state = 176},
  [34] = {.lex_state = 173},
  [35] = {.lex_state = 178},
  [36] = {.lex_state = 178},
  [37] = {.lex_state = 178},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 173},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 178},
  [43] = {.lex_state = 178},
  [44] = {.lex_state = 178},
  [45] = {.lex_state = 178},
  [46] = {.lex_state = 178},
  [47] = {.lex_state = 176},
  [48] = {.lex_state = 176},
  [49] = {.lex_state = 173},
  [50] = {.lex_state = 170},
  [51] = {.lex_state = 180},
  [52] = {.lex_state = 170},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 173},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 186},
  [67] = {.lex_state = 173},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 190},
  [71] = {.lex_state = 175},
  [72] = {.lex_state = 191},
  [73] = {.lex_state = 173},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 195},
  [77] = {.lex_state = 178},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 178},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 173},
  [83] = {.lex_state = 178},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 173},
  [86] = {.lex_state = 178},
  [87] = {.lex_state = 173},
  [88] = {.lex_state = 173},
  [89] = {.lex_state = 178},
  [90] = {.lex_state = 292},
  [91] = {.lex_state = 293},
  [92] = {.lex_state = 173},
  [93] = {.lex_state = 173},
  [94] = {.lex_state = 178},
  [95] = {.lex_state = 173},
  [96] = {.lex_state = 173},
  [97] = {.lex_state = 173},
  [98] = {.lex_state = 294},
  [99] = {.lex_state = 170},
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
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 34},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 173},
  [116] = {.lex_state = 173},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 173},
  [120] = {.lex_state = 173},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 34},
  [123] = {.lex_state = 34},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 34},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 173},
  [135] = {.lex_state = 173},
  [136] = {.lex_state = 170},
  [137] = {.lex_state = 178},
  [138] = {.lex_state = 173},
  [139] = {.lex_state = 170},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 173},
  [142] = {.lex_state = 170},
  [143] = {.lex_state = 173},
  [144] = {.lex_state = 423},
  [145] = {.lex_state = 173},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 173},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 173},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 425},
  [154] = {.lex_state = 173},
  [155] = {.lex_state = 173},
  [156] = {.lex_state = 34},
  [157] = {.lex_state = 173},
  [158] = {.lex_state = 34},
  [159] = {.lex_state = 178},
  [160] = {.lex_state = 173},
  [161] = {.lex_state = 195},
  [162] = {.lex_state = 173},
  [163] = {.lex_state = 175},
  [164] = {.lex_state = 190},
  [165] = {.lex_state = 175},
  [166] = {.lex_state = 173},
  [167] = {.lex_state = 173},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 170},
  [170] = {.lex_state = 170},
  [171] = {.lex_state = 170},
  [172] = {.lex_state = 170},
  [173] = {.lex_state = 170},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 178},
  [176] = {.lex_state = 178},
  [177] = {.lex_state = 175},
  [178] = {.lex_state = 178},
  [179] = {.lex_state = 178},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 173},
  [182] = {.lex_state = 178},
  [183] = {.lex_state = 178},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 34},
  [186] = {.lex_state = 173},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 173},
  [189] = {.lex_state = 293},
  [190] = {.lex_state = 171},
  [191] = {.lex_state = 34},
  [192] = {.lex_state = 173},
  [193] = {.lex_state = 176},
  [194] = {.lex_state = 176},
  [195] = {.lex_state = 426},
  [196] = {.lex_state = 173},
  [197] = {.lex_state = 170},
  [198] = {.lex_state = 428},
  [199] = {.lex_state = 170},
  [200] = {.lex_state = 34},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 34},
  [206] = {.lex_state = 434},
  [207] = {.lex_state = 173},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 34},
  [210] = {.lex_state = 34},
  [211] = {.lex_state = 34},
  [212] = {.lex_state = 34},
  [213] = {.lex_state = 446},
  [214] = {.lex_state = 173},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 178},
  [217] = {.lex_state = 173},
  [218] = {.lex_state = 173},
  [219] = {.lex_state = 178},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 173},
  [222] = {.lex_state = 173},
  [223] = {.lex_state = 178},
  [224] = {.lex_state = 173},
  [225] = {.lex_state = 173},
  [226] = {.lex_state = 173},
  [227] = {.lex_state = 173},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 173},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 34},
  [233] = {.lex_state = 173},
  [234] = {.lex_state = 170},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 173},
  [237] = {.lex_state = 170},
  [238] = {.lex_state = 170},
  [239] = {.lex_state = 173},
  [240] = {.lex_state = 173},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 176},
  [243] = {.lex_state = 176},
  [244] = {.lex_state = 195},
  [245] = {.lex_state = 173},
  [246] = {.lex_state = 195},
  [247] = {.lex_state = 173},
  [248] = {.lex_state = 34},
  [249] = {.lex_state = 170},
  [250] = {.lex_state = 178},
  [251] = {.lex_state = 173},
  [252] = {.lex_state = 178},
  [253] = {.lex_state = 173},
  [254] = {.lex_state = 178},
  [255] = {.lex_state = 170},
  [256] = {.lex_state = 34},
  [257] = {.lex_state = 178},
  [258] = {.lex_state = 178},
  [259] = {.lex_state = 175},
  [260] = {.lex_state = 178},
  [261] = {.lex_state = 178},
  [262] = {.lex_state = 173},
  [263] = {.lex_state = 178},
  [264] = {.lex_state = 173},
  [265] = {.lex_state = 173},
  [266] = {.lex_state = 173},
  [267] = {.lex_state = 173},
  [268] = {.lex_state = 173},
  [269] = {.lex_state = 173},
  [270] = {.lex_state = 173},
  [271] = {.lex_state = 170},
  [272] = {.lex_state = 173},
  [273] = {.lex_state = 170},
  [274] = {.lex_state = 34},
  [275] = {.lex_state = 173},
  [276] = {.lex_state = 170},
  [277] = {.lex_state = 173},
  [278] = {.lex_state = 450},
  [279] = {.lex_state = 173},
  [280] = {.lex_state = 34},
  [281] = {.lex_state = 173},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 34},
  [284] = {.lex_state = 173},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 173},
  [287] = {.lex_state = 173},
  [288] = {.lex_state = 173},
  [289] = {.lex_state = 173},
  [290] = {.lex_state = 170},
  [291] = {.lex_state = 34},
  [292] = {.lex_state = 178},
  [293] = {.lex_state = 178},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 173},
  [296] = {.lex_state = 178},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 34},
  [299] = {.lex_state = 173},
  [300] = {.lex_state = 173},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 173},
  [303] = {.lex_state = 173},
  [304] = {.lex_state = 173},
  [305] = {.lex_state = 173},
  [306] = {.lex_state = 170},
  [307] = {.lex_state = 173},
  [308] = {.lex_state = 178},
  [309] = {.lex_state = 34},
  [310] = {.lex_state = 178},
  [311] = {.lex_state = 175},
  [312] = {.lex_state = 178},
  [313] = {.lex_state = 173},
  [314] = {.lex_state = 170},
  [315] = {.lex_state = 34},
  [316] = {.lex_state = 173},
  [317] = {.lex_state = 170},
  [318] = {.lex_state = 170},
  [319] = {.lex_state = 173},
  [320] = {.lex_state = 173},
  [321] = {.lex_state = 36},
  [322] = {.lex_state = 178},
  [323] = {.lex_state = 170},
  [324] = {.lex_state = 34},
  [325] = {.lex_state = 178},
  [326] = {.lex_state = 178},
  [327] = {.lex_state = 173},
  [328] = {.lex_state = 178},
  [329] = {.lex_state = 173},
  [330] = {.lex_state = 173},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 175},
  [333] = {.lex_state = 173},
  [334] = {.lex_state = 173},
  [335] = {.lex_state = 178},
  [336] = {.lex_state = 34},
  [337] = {.lex_state = 178},
  [338] = {.lex_state = 34},
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
    [sym__common] = STATE(31),
    [sym__text_mode_common] = STATE(31),
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
    [aux_sym_text_mode_repeat1] = STATE(31),
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
    [anon_sym_footnote] = ACTIONS(49),
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
    [sym_footnote] = STATE(50),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(50),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(50),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(50),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(50),
    [sym_opt_text_group] = STATE(50),
    [sym_token] = STATE(50),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(50),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(73),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(75),
    [sym_end_group] = ACTIONS(75),
    [sym_math_shift] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(75),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [sym_footnote] = STATE(75),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(75),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(75),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(75),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(75),
    [sym_opt_text_group] = STATE(75),
    [sym_token] = STATE(75),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(75),
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
    [sym_begin_opt] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [18] = {
    [sym_simple_text_group] = STATE(85),
    [sym_opt_text_group] = STATE(86),
    [sym_begin_opt] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [19] = {
    [sym_text_group] = STATE(87),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(88),
    [sym_opt_text_group] = STATE(89),
    [sym_begin_opt] = STATE(84),
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
    [sym_escaped] = STATE(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
  },
  [23] = {
    [sym_text_group] = STATE(92),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(94),
    [sym_begin_opt] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(95),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(96),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(97),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [28] = {
    [sym__common] = STATE(118),
    [sym__text_mode_common] = STATE(118),
    [sym__text_mode_at] = STATE(118),
    [sym_text_mode_at] = STATE(101),
    [sym_parameter] = STATE(118),
    [sym_text_env_at] = STATE(118),
    [sym__display_math_at] = STATE(118),
    [sym_tex_display_math_at] = STATE(118),
    [sym_latex_display_math_at] = STATE(118),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(118),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(118),
    [sym_tex_inline_math_at] = STATE(118),
    [sym_latex_inline_math_at] = STATE(118),
    [sym_inline_math_env_at] = STATE(118),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(118),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(118),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(118),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(118),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(118),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(118),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(118),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(118),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(118),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(118),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(118),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(118),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(118),
    [sym_texttt_token] = STATE(114),
    [sym_makeatother] = STATE(115),
    [sym_makeatother_token] = STATE(116),
    [sym_text_group_at] = STATE(118),
    [sym_opt_text_group_at] = STATE(118),
    [sym_token_at] = STATE(118),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(118),
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
  [29] = {
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
  [30] = {
    [sym__common] = STATE(121),
    [sym__text_mode_common] = STATE(121),
    [sym__text_mode] = STATE(121),
    [sym_text_mode_at_region] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_text_env] = STATE(121),
    [sym__display_math] = STATE(121),
    [sym_tex_display_math] = STATE(121),
    [sym_latex_display_math] = STATE(121),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(121),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(121),
    [sym_tex_inline_math] = STATE(121),
    [sym_latex_inline_math] = STATE(121),
    [sym_inline_math_env] = STATE(121),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(121),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(121),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(121),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(121),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(121),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(121),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(121),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(121),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(121),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(121),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(121),
    [sym_opt_text_group] = STATE(121),
    [sym_token] = STATE(121),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(120),
    [aux_sym_text_mode_repeat1] = STATE(121),
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
  [31] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
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
    [sym_footnote] = STATE(122),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(122),
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
    [sym__whitespace] = ACTIONS(121),
    [sym_active_char] = ACTIONS(119),
    [sym_text] = ACTIONS(123),
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
    [sym__whitespace] = ACTIONS(127),
    [sym_active_char] = ACTIONS(125),
    [sym_text] = ACTIONS(129),
  },
  [34] = {
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
  [35] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(135),
  },
  [36] = {
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(139),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(141),
    [sym__whitespace] = ACTIONS(143),
  },
  [38] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(145),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(147),
  },
  [40] = {
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
  [41] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(151),
  },
  [42] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(153),
    [sym__whitespace] = ACTIONS(155),
  },
  [43] = {
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(157),
    [sym__whitespace] = ACTIONS(159),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(161),
    [sym__whitespace] = ACTIONS(163),
  },
  [45] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(165),
    [sym__whitespace] = ACTIONS(167),
  },
  [46] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(169),
    [sym__whitespace] = ACTIONS(171),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(173),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(173),
    [sym_math_shift] = ACTIONS(173),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym__whitespace] = ACTIONS(175),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(177),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym__whitespace] = ACTIONS(181),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(183),
  },
  [49] = {
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
  [50] = {
    [sym__common] = STATE(136),
    [sym__text_mode_common] = STATE(136),
    [sym__text_mode] = STATE(136),
    [sym_text_mode_at_region] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_text_env] = STATE(136),
    [sym__display_math] = STATE(136),
    [sym_tex_display_math] = STATE(136),
    [sym_latex_display_math] = STATE(136),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(136),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(136),
    [sym_tex_inline_math] = STATE(136),
    [sym_latex_inline_math] = STATE(136),
    [sym_inline_math_env] = STATE(136),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(136),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(136),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(136),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(136),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(136),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(136),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(136),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(136),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(136),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(136),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(136),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(136),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(136),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(136),
    [sym_opt_text_group] = STATE(136),
    [sym_token] = STATE(136),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(187),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [51] = {
    [anon_sym_tag] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [52] = {
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [53] = {
    [sym__common] = STATE(59),
    [sym__math_mode_common] = STATE(59),
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(140),
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
    [sym_math_shift] = ACTIONS(197),
  },
  [55] = {
    [sym_math_text_group] = STATE(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(199),
  },
  [56] = {
    [sym__common] = STATE(146),
    [sym__math_mode_common] = STATE(146),
    [sym__math_mode] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_math_env] = STATE(146),
    [sym_tag] = STATE(146),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(146),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(145),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(146),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(146),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(146),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(146),
    [sym_opt_math_group] = STATE(146),
    [sym_token] = STATE(146),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(146),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [57] = {
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [58] = {
    [sym__common] = STATE(148),
    [sym__math_mode_common] = STATE(148),
    [sym__math_mode] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_math_env] = STATE(148),
    [sym_tag] = STATE(148),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(148),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(148),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(148),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(148),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(148),
    [sym_opt_math_group] = STATE(148),
    [sym_token] = STATE(148),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(147),
    [aux_sym_math_mode_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_text] = ACTIONS(205),
  },
  [59] = {
    [sym__common] = STATE(149),
    [sym__math_mode_common] = STATE(149),
    [sym__math_mode] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_math_env] = STATE(149),
    [sym_tag] = STATE(149),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(149),
    [sym_opt_math_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_math_shift] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(211),
    [sym_end_group] = ACTIONS(211),
    [sym_math_shift] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(211),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(211),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [61] = {
    [sym_end_display_math] = STATE(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(213),
  },
  [62] = {
    [sym__common] = STATE(152),
    [sym__math_mode_common] = STATE(152),
    [sym__math_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_math_env] = STATE(152),
    [sym_tag] = STATE(152),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(152),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(152),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(152),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(152),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(152),
    [sym_opt_math_group] = STATE(152),
    [sym_token] = STATE(152),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(215),
  },
  [63] = {
    [sym_end_inline_math] = STATE(154),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(217),
  },
  [64] = {
    [sym_display_math_end] = STATE(155),
    [sym_end_token] = STATE(156),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [65] = {
    [sym_inline_math_end] = STATE(157),
    [sym_end_token] = STATE(158),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [66] = {
    [anon_sym_end] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(221),
    [sym_end_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(221),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [sym_text] = ACTIONS(221),
  },
  [68] = {
    [sym_verbatim_end] = STATE(160),
    [sym_end_token] = STATE(69),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [69] = {
    [sym_verbatim_env_group] = STATE(162),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(223),
  },
  [70] = {
    [aux_sym_verbatim_text_repeat1] = STATE(164),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(227),
  },
  [71] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(165),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(229),
    [sym__end_of_line] = ACTIONS(231),
  },
  [72] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(233),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_footnote] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [anon_sym_makeatletter] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [73] = {
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
  [74] = {
    [sym_simple_text_group] = STATE(166),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [75] = {
    [sym__common] = STATE(168),
    [sym__text_mode_common] = STATE(168),
    [sym__text_mode] = STATE(168),
    [sym_text_mode_at_region] = STATE(168),
    [sym_parameter] = STATE(168),
    [sym_text_env] = STATE(168),
    [sym__display_math] = STATE(168),
    [sym_tex_display_math] = STATE(168),
    [sym_latex_display_math] = STATE(168),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(168),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(168),
    [sym_tex_inline_math] = STATE(168),
    [sym_latex_inline_math] = STATE(168),
    [sym_inline_math_env] = STATE(168),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(168),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(168),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(167),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(168),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(168),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(168),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(168),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(168),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(168),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(168),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(168),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(168),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(168),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(168),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(168),
    [sym_opt_text_group] = STATE(168),
    [sym_token] = STATE(168),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(168),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(237),
    [sym_text] = ACTIONS(237),
  },
  [76] = {
    [sym_display_math_env_name] = ACTIONS(239),
    [sym_inline_math_env_name] = ACTIONS(241),
    [sym_verbatim_env_name] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(245),
  },
  [77] = {
    [sym_text_group] = STATE(175),
    [sym_opt_text_group] = STATE(176),
    [sym_begin_opt] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(249),
  },
  [78] = {
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(251),
    [sym_begin_group] = ACTIONS(251),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(251),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(251),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [79] = {
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(179),
    [sym_begin_opt] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(253),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(255),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_text] = ACTIONS(255),
  },
  [81] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(257),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(259),
    [sym_begin_group] = ACTIONS(259),
    [sym_end_group] = ACTIONS(259),
    [sym_math_shift] = ACTIONS(259),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(259),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [83] = {
    [sym_simple_text_group] = STATE(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
    [sym__whitespace] = ACTIONS(261),
  },
  [84] = {
    [sym__common] = STATE(184),
    [sym__text_mode_common] = STATE(184),
    [sym__text_mode] = STATE(184),
    [sym_text_mode_at_region] = STATE(184),
    [sym_parameter] = STATE(184),
    [sym_text_env] = STATE(184),
    [sym__display_math] = STATE(184),
    [sym_tex_display_math] = STATE(184),
    [sym_latex_display_math] = STATE(184),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(184),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(184),
    [sym_tex_inline_math] = STATE(184),
    [sym_latex_inline_math] = STATE(184),
    [sym_inline_math_env] = STATE(184),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(184),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(184),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(184),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(184),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(184),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(184),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(184),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(184),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(184),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(184),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(184),
    [sym_opt_text_group] = STATE(184),
    [sym_token] = STATE(184),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(183),
    [aux_sym_text_mode_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(267),
    [sym_math_shift] = ACTIONS(267),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(267),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_text] = ACTIONS(267),
  },
  [86] = {
    [sym_simple_text_group] = STATE(186),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
    [sym__whitespace] = ACTIONS(269),
  },
  [87] = {
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
  [88] = {
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
  [89] = {
    [sym_text_group] = STATE(188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(275),
  },
  [90] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [91] = {
    [anon_sym_EQ] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [92] = {
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
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(283),
    [sym_begin_group] = ACTIONS(283),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(283),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(283),
    [sym_active_char] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
  },
  [94] = {
    [sym_text_group] = STATE(192),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(285),
  },
  [95] = {
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
  [96] = {
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
  [97] = {
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
  [98] = {
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
    [anon_sym_footnote] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [anon_sym_makeatother] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(295),
  },
  [99] = {
    [sym__common] = STATE(197),
    [sym__text_mode_common] = STATE(197),
    [sym__text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env_at] = STATE(197),
    [sym__display_math_at] = STATE(197),
    [sym_tex_display_math_at] = STATE(197),
    [sym_latex_display_math_at] = STATE(197),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(197),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(197),
    [sym_tex_inline_math_at] = STATE(197),
    [sym_latex_inline_math_at] = STATE(197),
    [sym_inline_math_env_at] = STATE(197),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(197),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(197),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(197),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(197),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(197),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(197),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(197),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(197),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(197),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(197),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(197),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(197),
    [sym_opt_text_group_at] = STATE(197),
    [sym_token_at] = STATE(197),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(299),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(301),
    [sym_text] = ACTIONS(301),
  },
  [100] = {
    [sym__common] = STATE(205),
    [sym__math_mode_common] = STATE(205),
    [sym__math_mode_at] = STATE(205),
    [sym_math_mode_at] = STATE(201),
    [sym_parameter] = STATE(205),
    [sym_math_env_at] = STATE(205),
    [sym_tag_at] = STATE(205),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(205),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(205),
    [sym_opt_math_group_at] = STATE(205),
    [sym_token_at] = STATE(205),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(205),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [101] = {
    [sym_makeatother] = STATE(207),
    [sym_makeatother_token] = STATE(116),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(311),
  },
  [102] = {
    [sym__common] = STATE(209),
    [sym__math_mode_common] = STATE(209),
    [sym__math_mode_at] = STATE(209),
    [sym_math_mode_at] = STATE(208),
    [sym_parameter] = STATE(209),
    [sym_math_env_at] = STATE(209),
    [sym_tag_at] = STATE(209),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(209),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(209),
    [sym_opt_math_group_at] = STATE(209),
    [sym_token_at] = STATE(209),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [103] = {
    [sym__common] = STATE(209),
    [sym__math_mode_common] = STATE(209),
    [sym__math_mode_at] = STATE(209),
    [sym_math_mode_at] = STATE(210),
    [sym_parameter] = STATE(209),
    [sym_math_env_at] = STATE(209),
    [sym_tag_at] = STATE(209),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(209),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(209),
    [sym_opt_math_group_at] = STATE(209),
    [sym_token_at] = STATE(209),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [104] = {
    [sym__common] = STATE(209),
    [sym__math_mode_common] = STATE(209),
    [sym__math_mode_at] = STATE(209),
    [sym_math_mode_at] = STATE(211),
    [sym_parameter] = STATE(209),
    [sym_math_env_at] = STATE(209),
    [sym_tag_at] = STATE(209),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(209),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(209),
    [sym_opt_math_group_at] = STATE(209),
    [sym_token_at] = STATE(209),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [105] = {
    [sym__common] = STATE(209),
    [sym__math_mode_common] = STATE(209),
    [sym__math_mode_at] = STATE(209),
    [sym_math_mode_at] = STATE(212),
    [sym_parameter] = STATE(209),
    [sym_math_env_at] = STATE(209),
    [sym_tag_at] = STATE(209),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(209),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(209),
    [sym_opt_math_group_at] = STATE(209),
    [sym_token_at] = STATE(209),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [106] = {
    [sym__common] = STATE(215),
    [sym__text_mode_common] = STATE(215),
    [sym__text_mode_at] = STATE(215),
    [sym_parameter] = STATE(215),
    [sym_text_env_at] = STATE(215),
    [sym__display_math_at] = STATE(215),
    [sym_tex_display_math_at] = STATE(215),
    [sym_latex_display_math_at] = STATE(215),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(215),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(215),
    [sym_tex_inline_math_at] = STATE(215),
    [sym_latex_inline_math_at] = STATE(215),
    [sym_inline_math_env_at] = STATE(215),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(215),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_end] = STATE(214),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(215),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(215),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(215),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(215),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(215),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(215),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(215),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(215),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(215),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(215),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(215),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(215),
    [sym_opt_text_group_at] = STATE(215),
    [sym_token_at] = STATE(215),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(215),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(317),
    [sym_text] = ACTIONS(317),
  },
  [107] = {
    [sym_display_math_env_group] = STATE(216),
    [sym_inline_math_env_group] = STATE(78),
    [sym_verbatim_env_group] = STATE(79),
    [sym_simple_text_group] = STATE(80),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(93),
  },
  [108] = {
    [sym_text_group_at] = STATE(217),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [109] = {
    [sym_text_group_at] = STATE(218),
    [sym_opt_text_group_at] = STATE(219),
    [sym_begin_opt] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [110] = {
    [sym_text_group_at] = STATE(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [111] = {
    [sym_text_group_at] = STATE(222),
    [sym_opt_text_group_at] = STATE(223),
    [sym_begin_opt] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [112] = {
    [sym_text_group_at] = STATE(224),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [113] = {
    [sym_text_group_at] = STATE(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [114] = {
    [sym_text_group_at] = STATE(226),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(319),
    [sym_begin_group] = ACTIONS(319),
    [sym_end_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(319),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(321),
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
  [117] = {
    [sym__common] = STATE(228),
    [sym__text_mode_common] = STATE(228),
    [sym__text_mode_at] = STATE(228),
    [sym_parameter] = STATE(228),
    [sym_text_env_at] = STATE(228),
    [sym__display_math_at] = STATE(228),
    [sym_tex_display_math_at] = STATE(228),
    [sym_latex_display_math_at] = STATE(228),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(228),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(228),
    [sym_tex_inline_math_at] = STATE(228),
    [sym_latex_inline_math_at] = STATE(228),
    [sym_inline_math_env_at] = STATE(228),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(228),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(228),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(228),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(228),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(228),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(228),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(228),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(228),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(228),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(228),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(228),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(228),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(228),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(228),
    [sym_opt_text_group_at] = STATE(228),
    [sym_token_at] = STATE(228),
    [sym_begin_opt] = STATE(117),
    [sym_end_opt] = STATE(227),
    [aux_sym_text_mode_at_repeat1] = STATE(228),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [118] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env_at] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(229),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(329),
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
  [120] = {
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
  [121] = {
    [sym__common] = STATE(231),
    [sym__text_mode_common] = STATE(231),
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
    [sym_footnote] = STATE(231),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(231),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(231),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(231),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(231),
    [sym_opt_text_group] = STATE(231),
    [sym_token] = STATE(231),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(230),
    [aux_sym_text_mode_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [122] = {
    [sym__common] = STATE(122),
    [sym__text_mode_common] = STATE(122),
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
    [sym_footnote] = STATE(122),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(122),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(122),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(122),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(122),
    [sym_token] = STATE(122),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(352),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(349),
    [sym_text] = ACTIONS(349),
  },
  [123] = {
    [anon_sym_LBRACK] = ACTIONS(358),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(358),
    [sym_alignment_tab] = ACTIONS(358),
    [sym_parameter_char] = ACTIONS(358),
    [sym_superscript] = ACTIONS(358),
    [sym_subscript] = ACTIONS(358),
    [sym_active_char] = ACTIONS(358),
    [sym_text] = ACTIONS(358),
  },
  [124] = {
    [anon_sym_LBRACK] = ACTIONS(360),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(360),
    [sym_alignment_tab] = ACTIONS(360),
    [sym_parameter_char] = ACTIONS(360),
    [sym_superscript] = ACTIONS(360),
    [sym_subscript] = ACTIONS(360),
    [sym_active_char] = ACTIONS(360),
    [sym_text] = ACTIONS(360),
  },
  [125] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(362),
  },
  [126] = {
    [anon_sym_LBRACK] = ACTIONS(364),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(364),
  },
  [127] = {
    [anon_sym_LBRACK] = ACTIONS(366),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(366),
  },
  [128] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(368),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(370),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(370),
  },
  [130] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(372),
  },
  [131] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(374),
  },
  [132] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(376),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(378),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(378),
    [sym_math_shift] = ACTIONS(378),
    [sym_alignment_tab] = ACTIONS(378),
    [sym_parameter_char] = ACTIONS(378),
    [sym_superscript] = ACTIONS(378),
    [sym_subscript] = ACTIONS(378),
    [sym_active_char] = ACTIONS(378),
    [sym_text] = ACTIONS(378),
  },
  [134] = {
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
  [135] = {
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
  [136] = {
    [sym__common] = STATE(136),
    [sym__text_mode_common] = STATE(136),
    [sym__text_mode] = STATE(136),
    [sym_text_mode_at_region] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_text_env] = STATE(136),
    [sym__display_math] = STATE(136),
    [sym_tex_display_math] = STATE(136),
    [sym_latex_display_math] = STATE(136),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(136),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(136),
    [sym_tex_inline_math] = STATE(136),
    [sym_latex_inline_math] = STATE(136),
    [sym_inline_math_env] = STATE(136),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(136),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(136),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(136),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(136),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(136),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(136),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(136),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(136),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(136),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(136),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(136),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(136),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(136),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(136),
    [sym_opt_text_group] = STATE(136),
    [sym_token] = STATE(136),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(335),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(384),
    [sym_parameter_char] = ACTIONS(352),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(384),
    [sym_text] = ACTIONS(384),
  },
  [137] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(387),
    [sym__whitespace] = ACTIONS(389),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(391),
    [sym_math_shift] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [139] = {
    [sym__common] = STATE(234),
    [sym__math_mode_common] = STATE(234),
    [sym__math_mode] = STATE(234),
    [sym_parameter] = STATE(234),
    [sym_math_env] = STATE(234),
    [sym_tag] = STATE(234),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(234),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(234),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(234),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(234),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(234),
    [sym_opt_math_group] = STATE(234),
    [sym_token] = STATE(234),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(234),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_end_group] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [140] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(397),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_end_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [142] = {
    [sym__common] = STATE(238),
    [sym__text_mode_common] = STATE(238),
    [sym__text_mode] = STATE(238),
    [sym_text_mode] = STATE(237),
    [sym_text_mode_at_region] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym_text_env] = STATE(238),
    [sym__display_math] = STATE(238),
    [sym_tex_display_math] = STATE(238),
    [sym_latex_display_math] = STATE(238),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(238),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(238),
    [sym_tex_inline_math] = STATE(238),
    [sym_latex_inline_math] = STATE(238),
    [sym_inline_math_env] = STATE(238),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(238),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(238),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(238),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(238),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(238),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(238),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(238),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(238),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(238),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(238),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(238),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(238),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(238),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(238),
    [sym_opt_text_group] = STATE(238),
    [sym_token] = STATE(238),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(405),
    [sym_end_group] = ACTIONS(405),
    [sym_math_shift] = ACTIONS(405),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(405),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [144] = {
    [anon_sym_tag] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(233),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(59),
  },
  [145] = {
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
    [sym_superscript] = ACTIONS(407),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [sym_text] = ACTIONS(407),
  },
  [146] = {
    [sym__common] = STATE(152),
    [sym__math_mode_common] = STATE(152),
    [sym__math_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_math_env] = STATE(152),
    [sym_tag] = STATE(152),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(152),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(239),
    [sym_end_token] = STATE(74),
    [sym_include] = STATE(152),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(152),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(152),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(152),
    [sym_opt_math_group] = STATE(152),
    [sym_token] = STATE(152),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(215),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [148] = {
    [sym__common] = STATE(241),
    [sym__math_mode_common] = STATE(241),
    [sym__math_mode] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_env] = STATE(241),
    [sym_tag] = STATE(241),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(241),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(241),
    [sym_opt_math_group] = STATE(241),
    [sym_token] = STATE(241),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(240),
    [aux_sym_math_mode_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [sym_text] = ACTIONS(411),
  },
  [149] = {
    [sym__common] = STATE(149),
    [sym__math_mode_common] = STATE(149),
    [sym__math_mode] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_math_env] = STATE(149),
    [sym_tag] = STATE(149),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(149),
    [sym_opt_math_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(422),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_text] = ACTIONS(424),
  },
  [150] = {
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(432),
    [sym_end_group] = ACTIONS(432),
    [sym_math_shift] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(432),
    [sym_parameter_char] = ACTIONS(432),
    [sym_superscript] = ACTIONS(432),
    [sym_subscript] = ACTIONS(432),
    [sym_active_char] = ACTIONS(432),
    [sym_text] = ACTIONS(432),
  },
  [152] = {
    [sym__common] = STATE(152),
    [sym__math_mode_common] = STATE(152),
    [sym__math_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_math_env] = STATE(152),
    [sym_tag] = STATE(152),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(152),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(152),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(152),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(152),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(152),
    [sym_opt_math_group] = STATE(152),
    [sym_token] = STATE(152),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_text] = ACTIONS(434),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(439),
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
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(441),
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
  [156] = {
    [sym_display_math_env_group] = STATE(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(443),
  },
  [157] = {
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
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [158] = {
    [sym_inline_math_env_group] = STATE(247),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(447),
  },
  [159] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(449),
    [sym__whitespace] = ACTIONS(451),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(453),
    [sym_begin_group] = ACTIONS(453),
    [sym_end_group] = ACTIONS(453),
    [sym_math_shift] = ACTIONS(453),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(453),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(453),
    [sym_text] = ACTIONS(453),
  },
  [161] = {
    [sym_verbatim_env_name] = ACTIONS(455),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_end_group] = ACTIONS(457),
    [sym_math_shift] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [163] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(459),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(461),
    [sym__end_of_line] = ACTIONS(461),
  },
  [164] = {
    [aux_sym_verbatim_text_repeat1] = STATE(164),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(466),
  },
  [165] = {
    [aux_sym_verbatim_text_repeat1] = STATE(70),
    [aux_sym_verbatim_text_repeat2] = STATE(165),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(468),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(461),
    [sym__end_of_line] = ACTIONS(471),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(474),
    [sym_begin_group] = ACTIONS(474),
    [sym_end_group] = ACTIONS(474),
    [sym_math_shift] = ACTIONS(474),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(474),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_text] = ACTIONS(474),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(476),
    [sym_begin_group] = ACTIONS(476),
    [sym_end_group] = ACTIONS(476),
    [sym_math_shift] = ACTIONS(476),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(476),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_text] = ACTIONS(476),
  },
  [168] = {
    [sym__common] = STATE(168),
    [sym__text_mode_common] = STATE(168),
    [sym__text_mode] = STATE(168),
    [sym_text_mode_at_region] = STATE(168),
    [sym_parameter] = STATE(168),
    [sym_text_env] = STATE(168),
    [sym__display_math] = STATE(168),
    [sym_tex_display_math] = STATE(168),
    [sym_latex_display_math] = STATE(168),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(168),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(168),
    [sym_tex_inline_math] = STATE(168),
    [sym_latex_inline_math] = STATE(168),
    [sym_inline_math_env] = STATE(168),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(168),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(168),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(168),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(168),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(168),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(168),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(168),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(168),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(168),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(168),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(168),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(168),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(168),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(168),
    [sym_opt_text_group] = STATE(168),
    [sym_token] = STATE(168),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(168),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(478),
    [sym_parameter_char] = ACTIONS(352),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(478),
    [sym_text] = ACTIONS(478),
  },
  [169] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(481),
  },
  [170] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(483),
  },
  [171] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(485),
  },
  [172] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(487),
  },
  [173] = {
    [sym__common] = STATE(255),
    [sym__text_mode_common] = STATE(255),
    [sym__text_mode] = STATE(255),
    [sym_text_mode_at_region] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_env] = STATE(255),
    [sym__display_math] = STATE(255),
    [sym_tex_display_math] = STATE(255),
    [sym_latex_display_math] = STATE(255),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(255),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(255),
    [sym_tex_inline_math] = STATE(255),
    [sym_latex_inline_math] = STATE(255),
    [sym_inline_math_env] = STATE(255),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(255),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(255),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(255),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(255),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(255),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(255),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(255),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(255),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(255),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(255),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(255),
    [sym_opt_text_group] = STATE(255),
    [sym_token] = STATE(255),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(255),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(489),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [174] = {
    [anon_sym_LBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [175] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(495),
  },
  [176] = {
    [sym_text_group] = STATE(258),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(495),
    [sym__whitespace] = ACTIONS(497),
  },
  [177] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(499),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(501),
    [sym__end_of_line] = ACTIONS(501),
  },
  [178] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(503),
  },
  [179] = {
    [sym_text_group] = STATE(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(503),
    [sym__whitespace] = ACTIONS(505),
  },
  [180] = {
    [sym_simple_text_group] = STATE(262),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(507),
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
  [182] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(329),
    [sym__end_of_line] = ACTIONS(329),
    [sym__whitespace] = ACTIONS(329),
  },
  [183] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(331),
    [sym__end_of_line] = ACTIONS(331),
    [sym__whitespace] = ACTIONS(331),
  },
  [184] = {
    [sym__common] = STATE(231),
    [sym__text_mode_common] = STATE(231),
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
    [sym_footnote] = STATE(231),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(231),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(231),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(231),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(231),
    [sym_opt_text_group] = STATE(231),
    [sym_token] = STATE(231),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(263),
    [aux_sym_text_mode_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [185] = {
    [sym_simple_text_group] = STATE(264),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_end_group] = ACTIONS(509),
    [sym_math_shift] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(509),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [sym_text] = ACTIONS(509),
  },
  [187] = {
    [sym_text_group] = STATE(265),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_end_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [sym_text] = ACTIONS(511),
  },
  [189] = {
    [anon_sym_EQ] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [190] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(513),
  },
  [191] = {
    [sym_text_group] = STATE(267),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(515),
    [sym_begin_group] = ACTIONS(515),
    [sym_end_group] = ACTIONS(515),
    [sym_math_shift] = ACTIONS(515),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(515),
    [sym_subscript] = ACTIONS(515),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(517),
    [sym_begin_group] = ACTIONS(517),
    [sym_end_group] = ACTIONS(517),
    [sym_math_shift] = ACTIONS(517),
    [sym_alignment_tab] = ACTIONS(517),
    [sym_parameter_char] = ACTIONS(517),
    [sym_superscript] = ACTIONS(517),
    [sym_subscript] = ACTIONS(517),
    [sym__whitespace] = ACTIONS(519),
    [sym_active_char] = ACTIONS(517),
    [sym_text] = ACTIONS(521),
  },
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(523),
    [sym_begin_group] = ACTIONS(523),
    [sym_end_group] = ACTIONS(523),
    [sym_math_shift] = ACTIONS(523),
    [sym_alignment_tab] = ACTIONS(523),
    [sym_parameter_char] = ACTIONS(523),
    [sym_superscript] = ACTIONS(523),
    [sym_subscript] = ACTIONS(523),
    [sym__whitespace] = ACTIONS(525),
    [sym_active_char] = ACTIONS(523),
    [sym_text] = ACTIONS(527),
  },
  [195] = {
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
    [anon_sym_footnote] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(295),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(529),
    [sym_begin_group] = ACTIONS(529),
    [sym_end_group] = ACTIONS(529),
    [sym_math_shift] = ACTIONS(529),
    [sym_alignment_tab] = ACTIONS(529),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(529),
    [sym_subscript] = ACTIONS(529),
    [sym_active_char] = ACTIONS(529),
    [sym_text] = ACTIONS(529),
  },
  [197] = {
    [sym__common] = STATE(271),
    [sym__text_mode_common] = STATE(271),
    [sym__text_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_text_env_at] = STATE(271),
    [sym__display_math_at] = STATE(271),
    [sym_tex_display_math_at] = STATE(271),
    [sym_latex_display_math_at] = STATE(271),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(271),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(271),
    [sym_tex_inline_math_at] = STATE(271),
    [sym_latex_inline_math_at] = STATE(271),
    [sym_inline_math_env_at] = STATE(271),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(271),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(271),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(271),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(271),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(271),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(271),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(271),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(271),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(271),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(271),
    [sym_opt_text_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(531),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [198] = {
    [anon_sym_tag] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(295),
  },
  [199] = {
    [sym__common] = STATE(273),
    [sym__math_mode_common] = STATE(273),
    [sym__math_mode_at] = STATE(273),
    [sym_parameter] = STATE(273),
    [sym_math_env_at] = STATE(273),
    [sym_tag_at] = STATE(273),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(273),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(273),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(273),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(273),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(273),
    [sym_opt_math_group_at] = STATE(273),
    [sym_token_at] = STATE(273),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(273),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_end_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(537),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(537),
    [sym_subscript] = ACTIONS(537),
    [sym_active_char] = ACTIONS(537),
    [sym_text] = ACTIONS(537),
  },
  [200] = {
    [sym__common] = STATE(205),
    [sym__math_mode_common] = STATE(205),
    [sym__math_mode_at] = STATE(205),
    [sym_math_mode_at] = STATE(274),
    [sym_parameter] = STATE(205),
    [sym_math_env_at] = STATE(205),
    [sym_tag_at] = STATE(205),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(205),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(205),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(205),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(205),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(205),
    [sym_opt_math_group_at] = STATE(205),
    [sym_token_at] = STATE(205),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(205),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [201] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(539),
  },
  [202] = {
    [sym_math_text_group_at] = STATE(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(541),
  },
  [203] = {
    [sym__common] = STATE(280),
    [sym__math_mode_common] = STATE(280),
    [sym__math_mode_at] = STATE(280),
    [sym_parameter] = STATE(280),
    [sym_math_env_at] = STATE(280),
    [sym_tag_at] = STATE(280),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(280),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(279),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(280),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(280),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(280),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(280),
    [sym_opt_math_group_at] = STATE(280),
    [sym_token_at] = STATE(280),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(280),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(543),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(545),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(545),
    [sym_subscript] = ACTIONS(545),
    [sym_active_char] = ACTIONS(545),
    [sym_text] = ACTIONS(545),
  },
  [204] = {
    [sym__common] = STATE(282),
    [sym__math_mode_common] = STATE(282),
    [sym__math_mode_at] = STATE(282),
    [sym_parameter] = STATE(282),
    [sym_math_env_at] = STATE(282),
    [sym_tag_at] = STATE(282),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(282),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(282),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(282),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(282),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(282),
    [sym_opt_math_group_at] = STATE(282),
    [sym_token_at] = STATE(282),
    [sym_begin_opt] = STATE(204),
    [sym_end_opt] = STATE(281),
    [aux_sym_math_mode_at_repeat1] = STATE(282),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(547),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(547),
    [sym_subscript] = ACTIONS(547),
    [sym_active_char] = ACTIONS(547),
    [sym_text] = ACTIONS(547),
  },
  [205] = {
    [sym__common] = STATE(283),
    [sym__math_mode_common] = STATE(283),
    [sym__math_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_math_env_at] = STATE(283),
    [sym_tag_at] = STATE(283),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(283),
    [sym_opt_math_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(283),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(549),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_text] = ACTIONS(551),
  },
  [206] = {
    [anon_sym_makeatother] = ACTIONS(553),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [207] = {
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
  [208] = {
    [sym_end_display_math] = STATE(284),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(213),
  },
  [209] = {
    [sym__common] = STATE(285),
    [sym__math_mode_common] = STATE(285),
    [sym__math_mode_at] = STATE(285),
    [sym_parameter] = STATE(285),
    [sym_math_env_at] = STATE(285),
    [sym_tag_at] = STATE(285),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(285),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(285),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(285),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(285),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(285),
    [sym_opt_math_group_at] = STATE(285),
    [sym_token_at] = STATE(285),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(285),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(549),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_text] = ACTIONS(557),
  },
  [210] = {
    [sym_end_inline_math] = STATE(286),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(217),
  },
  [211] = {
    [sym_display_math_end] = STATE(287),
    [sym_end_token] = STATE(156),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [212] = {
    [sym_inline_math_end] = STATE(288),
    [sym_end_token] = STATE(158),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(85),
  },
  [213] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(233),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_footnote] = ACTIONS(49),
    [anon_sym_textbf] = ACTIONS(51),
    [anon_sym_textit] = ACTIONS(53),
    [anon_sym_texttt] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(295),
  },
  [214] = {
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
  [215] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env_at] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_end] = STATE(289),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(229),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [216] = {
    [sym_text_group_at] = STATE(292),
    [sym_opt_text_group_at] = STATE(293),
    [sym_begin_opt] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(561),
    [sym__end_of_line] = ACTIONS(563),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_RBRACK] = ACTIONS(565),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(565),
    [sym_begin_group] = ACTIONS(565),
    [sym_end_group] = ACTIONS(565),
    [sym_math_shift] = ACTIONS(565),
    [sym_alignment_tab] = ACTIONS(565),
    [sym_parameter_char] = ACTIONS(565),
    [sym_superscript] = ACTIONS(565),
    [sym_subscript] = ACTIONS(565),
    [sym_active_char] = ACTIONS(565),
    [sym_text] = ACTIONS(565),
  },
  [218] = {
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
  [219] = {
    [sym_text_group_at] = STATE(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(569),
  },
  [220] = {
    [sym__common] = STATE(297),
    [sym__text_mode_common] = STATE(297),
    [sym__text_mode_at] = STATE(297),
    [sym_parameter] = STATE(297),
    [sym_text_env_at] = STATE(297),
    [sym__display_math_at] = STATE(297),
    [sym_tex_display_math_at] = STATE(297),
    [sym_latex_display_math_at] = STATE(297),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(297),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(297),
    [sym_tex_inline_math_at] = STATE(297),
    [sym_latex_inline_math_at] = STATE(297),
    [sym_inline_math_env_at] = STATE(297),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(297),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(297),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(297),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(297),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(297),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(297),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(297),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(297),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(297),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(297),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(297),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(297),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(297),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(297),
    [sym_opt_text_group_at] = STATE(297),
    [sym_token_at] = STATE(297),
    [sym_begin_opt] = STATE(117),
    [sym_end_opt] = STATE(296),
    [aux_sym_text_mode_at_repeat1] = STATE(297),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [221] = {
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
  [222] = {
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
  [223] = {
    [sym_text_group_at] = STATE(299),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(577),
  },
  [224] = {
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
  [225] = {
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(581),
    [sym_begin_group] = ACTIONS(581),
    [sym_end_group] = ACTIONS(581),
    [sym_math_shift] = ACTIONS(581),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(581),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(581),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [226] = {
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
  [227] = {
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
  [228] = {
    [sym__common] = STATE(301),
    [sym__text_mode_common] = STATE(301),
    [sym__text_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_text_env_at] = STATE(301),
    [sym__display_math_at] = STATE(301),
    [sym_tex_display_math_at] = STATE(301),
    [sym_latex_display_math_at] = STATE(301),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(301),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(301),
    [sym_tex_inline_math_at] = STATE(301),
    [sym_latex_inline_math_at] = STATE(301),
    [sym_inline_math_env_at] = STATE(301),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(301),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(301),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(301),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(301),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(301),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(301),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(301),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(301),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(301),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(301),
    [sym_opt_text_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(117),
    [sym_end_opt] = STATE(300),
    [aux_sym_text_mode_at_repeat1] = STATE(301),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(587),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(587),
    [sym_text] = ACTIONS(587),
  },
  [229] = {
    [sym__common] = STATE(229),
    [sym__text_mode_common] = STATE(229),
    [sym__text_mode_at] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_text_env_at] = STATE(229),
    [sym__display_math_at] = STATE(229),
    [sym_tex_display_math_at] = STATE(229),
    [sym_latex_display_math_at] = STATE(229),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(229),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(229),
    [sym_tex_inline_math_at] = STATE(229),
    [sym_latex_inline_math_at] = STATE(229),
    [sym_inline_math_env_at] = STATE(229),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(229),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(229),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(229),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(229),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(229),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(229),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(229),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(229),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(229),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(229),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(229),
    [sym_opt_text_group_at] = STATE(229),
    [sym_token_at] = STATE(229),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(592),
    [sym_begin_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(601),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(601),
    [sym_text] = ACTIONS(601),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(610),
    [sym_begin_group] = ACTIONS(610),
    [sym_end_group] = ACTIONS(610),
    [sym_math_shift] = ACTIONS(610),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(610),
    [sym_superscript] = ACTIONS(610),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [sym_text] = ACTIONS(610),
  },
  [231] = {
    [sym__common] = STATE(231),
    [sym__text_mode_common] = STATE(231),
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
    [sym_footnote] = STATE(231),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(231),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(231),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(231),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(231),
    [sym_opt_text_group] = STATE(231),
    [sym_token] = STATE(231),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(340),
    [sym_begin_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(346),
    [sym_alignment_tab] = ACTIONS(612),
    [sym_parameter_char] = ACTIONS(352),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(612),
    [sym_text] = ACTIONS(612),
  },
  [232] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(615),
  },
  [233] = {
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
  [234] = {
    [sym__common] = STATE(234),
    [sym__math_mode_common] = STATE(234),
    [sym__math_mode] = STATE(234),
    [sym_parameter] = STATE(234),
    [sym_math_env] = STATE(234),
    [sym_tag] = STATE(234),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(234),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(234),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(234),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(234),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(234),
    [sym_opt_math_group] = STATE(234),
    [sym_token] = STATE(234),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(234),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_end_group] = ACTIONS(422),
    [sym_alignment_tab] = ACTIONS(619),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(619),
    [sym_subscript] = ACTIONS(619),
    [sym_active_char] = ACTIONS(619),
    [sym_text] = ACTIONS(619),
  },
  [235] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(622),
  },
  [236] = {
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
  [237] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(626),
  },
  [238] = {
    [sym__common] = STATE(136),
    [sym__text_mode_common] = STATE(136),
    [sym__text_mode] = STATE(136),
    [sym_text_mode_at_region] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_text_env] = STATE(136),
    [sym__display_math] = STATE(136),
    [sym_tex_display_math] = STATE(136),
    [sym_latex_display_math] = STATE(136),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(136),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(136),
    [sym_tex_inline_math] = STATE(136),
    [sym_latex_inline_math] = STATE(136),
    [sym_inline_math_env] = STATE(136),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(136),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(136),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(136),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(136),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(136),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(136),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(136),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(136),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(136),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(136),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(136),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(136),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(136),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(136),
    [sym_opt_text_group] = STATE(136),
    [sym_token] = STATE(136),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [239] = {
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
  [240] = {
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
  [241] = {
    [sym__common] = STATE(241),
    [sym__math_mode_common] = STATE(241),
    [sym__math_mode] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_env] = STATE(241),
    [sym_tag] = STATE(241),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_include] = STATE(241),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(241),
    [sym_opt_math_group] = STATE(241),
    [sym_token] = STATE(241),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [242] = {
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
    [sym__whitespace] = ACTIONS(637),
    [sym_active_char] = ACTIONS(635),
    [sym_text] = ACTIONS(639),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(641),
    [sym_end_group] = ACTIONS(641),
    [sym_math_shift] = ACTIONS(641),
    [sym_alignment_tab] = ACTIONS(641),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(641),
    [sym_subscript] = ACTIONS(641),
    [sym__whitespace] = ACTIONS(643),
    [sym_active_char] = ACTIONS(641),
    [sym_text] = ACTIONS(645),
  },
  [244] = {
    [sym_display_math_env_name] = ACTIONS(647),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [245] = {
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
  [246] = {
    [sym_inline_math_env_name] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(653),
    [sym_begin_group] = ACTIONS(653),
    [sym_end_group] = ACTIONS(653),
    [sym_math_shift] = ACTIONS(653),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(653),
    [sym_superscript] = ACTIONS(653),
    [sym_subscript] = ACTIONS(653),
    [sym_active_char] = ACTIONS(653),
    [sym_text] = ACTIONS(653),
  },
  [248] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(655),
  },
  [249] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(657),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(659),
    [sym__end_of_line] = ACTIONS(659),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(661),
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
  [252] = {
    [anon_sym_LBRACK] = ACTIONS(663),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(663),
    [sym__end_of_line] = ACTIONS(663),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(665),
    [sym_begin_group] = ACTIONS(665),
    [sym_end_group] = ACTIONS(665),
    [sym_math_shift] = ACTIONS(665),
    [sym_alignment_tab] = ACTIONS(665),
    [sym_parameter_char] = ACTIONS(665),
    [sym_superscript] = ACTIONS(665),
    [sym_subscript] = ACTIONS(665),
    [sym_active_char] = ACTIONS(665),
    [sym_text] = ACTIONS(665),
  },
  [254] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(185),
  },
  [255] = {
    [sym__common] = STATE(136),
    [sym__text_mode_common] = STATE(136),
    [sym__text_mode] = STATE(136),
    [sym_text_mode_at_region] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_text_env] = STATE(136),
    [sym__display_math] = STATE(136),
    [sym_tex_display_math] = STATE(136),
    [sym_latex_display_math] = STATE(136),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(136),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(136),
    [sym_tex_inline_math] = STATE(136),
    [sym_latex_inline_math] = STATE(136),
    [sym_inline_math_env] = STATE(136),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(136),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(136),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(136),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(136),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(136),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(136),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(136),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(136),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(136),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(136),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(136),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(136),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(136),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(136),
    [sym_opt_text_group] = STATE(136),
    [sym_token] = STATE(136),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(667),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(189),
  },
  [256] = {
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
  [257] = {
    [sym_text_group] = STATE(310),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(671),
  },
  [258] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(671),
  },
  [259] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(673),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(675),
    [sym__end_of_line] = ACTIONS(675),
  },
  [260] = {
    [sym_text_group] = STATE(312),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(677),
  },
  [261] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(677),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(679),
    [sym_begin_group] = ACTIONS(679),
    [sym_end_group] = ACTIONS(679),
    [sym_math_shift] = ACTIONS(679),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(679),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(679),
    [sym_text] = ACTIONS(679),
  },
  [263] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(610),
    [sym__end_of_line] = ACTIONS(610),
    [sym__whitespace] = ACTIONS(610),
  },
  [264] = {
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
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(683),
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
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(685),
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
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(687),
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
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_end_group] = ACTIONS(689),
    [sym_math_shift] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [269] = {
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
  [270] = {
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
  [271] = {
    [sym__common] = STATE(271),
    [sym__text_mode_common] = STATE(271),
    [sym__text_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_text_env_at] = STATE(271),
    [sym__display_math_at] = STATE(271),
    [sym_tex_display_math_at] = STATE(271),
    [sym_latex_display_math_at] = STATE(271),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(271),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(271),
    [sym_tex_inline_math_at] = STATE(271),
    [sym_latex_inline_math_at] = STATE(271),
    [sym_inline_math_env_at] = STATE(271),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(271),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(271),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(271),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(271),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(271),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(271),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(271),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(271),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(271),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(271),
    [sym_opt_text_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(592),
    [sym_begin_group] = ACTIONS(595),
    [sym_end_group] = ACTIONS(695),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(697),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(697),
    [sym_text] = ACTIONS(697),
  },
  [272] = {
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
  [273] = {
    [sym__common] = STATE(314),
    [sym__math_mode_common] = STATE(314),
    [sym__math_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_math_env_at] = STATE(314),
    [sym_tag_at] = STATE(314),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(314),
    [sym_opt_math_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(314),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_end_group] = ACTIONS(702),
    [sym_alignment_tab] = ACTIONS(704),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(704),
    [sym_subscript] = ACTIONS(704),
    [sym_active_char] = ACTIONS(704),
    [sym_text] = ACTIONS(704),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(706),
  },
  [275] = {
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_RBRACK] = ACTIONS(708),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(708),
    [sym_begin_group] = ACTIONS(708),
    [sym_end_group] = ACTIONS(708),
    [sym_math_shift] = ACTIONS(708),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(708),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [276] = {
    [sym__common] = STATE(318),
    [sym__text_mode_common] = STATE(318),
    [sym__text_mode_at] = STATE(318),
    [sym_text_mode_at] = STATE(317),
    [sym_parameter] = STATE(318),
    [sym_text_env_at] = STATE(318),
    [sym__display_math_at] = STATE(318),
    [sym_tex_display_math_at] = STATE(318),
    [sym_latex_display_math_at] = STATE(318),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(318),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(318),
    [sym_tex_inline_math_at] = STATE(318),
    [sym_latex_inline_math_at] = STATE(318),
    [sym_inline_math_env_at] = STATE(318),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(318),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(318),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(318),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(318),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(318),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(318),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(318),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(318),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(318),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(318),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(318),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(318),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(318),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(318),
    [sym_opt_text_group_at] = STATE(318),
    [sym_token_at] = STATE(318),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(318),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(710),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(712),
    [sym_text] = ACTIONS(712),
  },
  [277] = {
    [anon_sym_LBRACK] = ACTIONS(714),
    [anon_sym_RBRACK] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(714),
    [sym_begin_group] = ACTIONS(714),
    [sym_end_group] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(714),
    [sym_alignment_tab] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(714),
    [sym_superscript] = ACTIONS(714),
    [sym_subscript] = ACTIONS(714),
    [sym_active_char] = ACTIONS(714),
    [sym_text] = ACTIONS(714),
  },
  [278] = {
    [anon_sym_tag] = ACTIONS(191),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(233),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(295),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_RBRACK] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_end_group] = ACTIONS(716),
    [sym_math_shift] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_text] = ACTIONS(716),
  },
  [280] = {
    [sym__common] = STATE(285),
    [sym__math_mode_common] = STATE(285),
    [sym__math_mode_at] = STATE(285),
    [sym_parameter] = STATE(285),
    [sym_math_env_at] = STATE(285),
    [sym_tag_at] = STATE(285),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(285),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(319),
    [sym_end_token] = STATE(74),
    [sym_include_at] = STATE(285),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(285),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(285),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(285),
    [sym_opt_math_group_at] = STATE(285),
    [sym_token_at] = STATE(285),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(285),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(543),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_text] = ACTIONS(557),
  },
  [281] = {
    [anon_sym_LBRACK] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(718),
    [sym_begin_group] = ACTIONS(718),
    [sym_end_group] = ACTIONS(718),
    [sym_math_shift] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(718),
    [sym_parameter_char] = ACTIONS(718),
    [sym_superscript] = ACTIONS(718),
    [sym_subscript] = ACTIONS(718),
    [sym_active_char] = ACTIONS(718),
    [sym_text] = ACTIONS(718),
  },
  [282] = {
    [sym__common] = STATE(321),
    [sym__math_mode_common] = STATE(321),
    [sym__math_mode_at] = STATE(321),
    [sym_parameter] = STATE(321),
    [sym_math_env_at] = STATE(321),
    [sym_tag_at] = STATE(321),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(321),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(321),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(321),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(321),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(321),
    [sym_opt_math_group_at] = STATE(321),
    [sym_token_at] = STATE(321),
    [sym_begin_opt] = STATE(204),
    [sym_end_opt] = STATE(320),
    [aux_sym_math_mode_at_repeat1] = STATE(321),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(720),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(720),
    [sym_subscript] = ACTIONS(720),
    [sym_active_char] = ACTIONS(720),
    [sym_text] = ACTIONS(720),
  },
  [283] = {
    [sym__common] = STATE(283),
    [sym__math_mode_common] = STATE(283),
    [sym__math_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_math_env_at] = STATE(283),
    [sym_tag_at] = STATE(283),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(283),
    [sym_opt_math_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(283),
    [anon_sym_LBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(728),
    [sym_math_shift] = ACTIONS(731),
    [sym_alignment_tab] = ACTIONS(733),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(733),
    [sym_active_char] = ACTIONS(733),
    [sym_text] = ACTIONS(733),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_RBRACK] = ACTIONS(739),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(739),
    [sym_begin_group] = ACTIONS(739),
    [sym_end_group] = ACTIONS(739),
    [sym_math_shift] = ACTIONS(739),
    [sym_alignment_tab] = ACTIONS(739),
    [sym_parameter_char] = ACTIONS(739),
    [sym_superscript] = ACTIONS(739),
    [sym_subscript] = ACTIONS(739),
    [sym_active_char] = ACTIONS(739),
    [sym_text] = ACTIONS(739),
  },
  [285] = {
    [sym__common] = STATE(285),
    [sym__math_mode_common] = STATE(285),
    [sym__math_mode_at] = STATE(285),
    [sym_parameter] = STATE(285),
    [sym_math_env_at] = STATE(285),
    [sym_tag_at] = STATE(285),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(285),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(285),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(285),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(285),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(285),
    [sym_opt_math_group_at] = STATE(285),
    [sym_token_at] = STATE(285),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(285),
    [anon_sym_LBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_text] = ACTIONS(741),
  },
  [286] = {
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
    [sym_superscript] = ACTIONS(744),
    [sym_subscript] = ACTIONS(744),
    [sym_active_char] = ACTIONS(744),
    [sym_text] = ACTIONS(744),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_end_group] = ACTIONS(746),
    [sym_math_shift] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(746),
    [sym_superscript] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [288] = {
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
    [sym_superscript] = ACTIONS(748),
    [sym_subscript] = ACTIONS(748),
    [sym_active_char] = ACTIONS(748),
    [sym_text] = ACTIONS(748),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(750),
    [sym_math_shift] = ACTIONS(750),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(750),
    [sym_superscript] = ACTIONS(750),
    [sym_subscript] = ACTIONS(750),
    [sym_active_char] = ACTIONS(750),
    [sym_text] = ACTIONS(750),
  },
  [290] = {
    [sym__common] = STATE(323),
    [sym__text_mode_common] = STATE(323),
    [sym__text_mode_at] = STATE(323),
    [sym_parameter] = STATE(323),
    [sym_text_env_at] = STATE(323),
    [sym__display_math_at] = STATE(323),
    [sym_tex_display_math_at] = STATE(323),
    [sym_latex_display_math_at] = STATE(323),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(323),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(323),
    [sym_tex_inline_math_at] = STATE(323),
    [sym_latex_inline_math_at] = STATE(323),
    [sym_inline_math_env_at] = STATE(323),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(323),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(323),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(323),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(323),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(323),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(323),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(323),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(323),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(323),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(323),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(323),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(323),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(323),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(323),
    [sym_opt_text_group_at] = STATE(323),
    [sym_token_at] = STATE(323),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(323),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(752),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(754),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(754),
    [sym_text] = ACTIONS(754),
  },
  [291] = {
    [anon_sym_LBRACK] = ACTIONS(756),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(756),
    [sym_begin_group] = ACTIONS(756),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(756),
    [sym_superscript] = ACTIONS(756),
    [sym_subscript] = ACTIONS(756),
    [sym_active_char] = ACTIONS(756),
    [sym_text] = ACTIONS(756),
  },
  [292] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(758),
  },
  [293] = {
    [sym_text_group_at] = STATE(326),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(561),
    [sym__end_of_line] = ACTIONS(758),
    [sym__whitespace] = ACTIONS(760),
  },
  [294] = {
    [sym_text_group_at] = STATE(327),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(762),
    [sym_begin_group] = ACTIONS(762),
    [sym_end_group] = ACTIONS(762),
    [sym_math_shift] = ACTIONS(762),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_parameter_char] = ACTIONS(762),
    [sym_superscript] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_active_char] = ACTIONS(762),
    [sym_text] = ACTIONS(762),
  },
  [296] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(585),
    [sym__end_of_line] = ACTIONS(585),
    [sym__whitespace] = ACTIONS(585),
  },
  [297] = {
    [sym__common] = STATE(301),
    [sym__text_mode_common] = STATE(301),
    [sym__text_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_text_env_at] = STATE(301),
    [sym__display_math_at] = STATE(301),
    [sym_tex_display_math_at] = STATE(301),
    [sym_latex_display_math_at] = STATE(301),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(301),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(301),
    [sym_tex_inline_math_at] = STATE(301),
    [sym_latex_inline_math_at] = STATE(301),
    [sym_inline_math_env_at] = STATE(301),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(301),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(301),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(301),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(301),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(301),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(301),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(301),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(301),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(301),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(301),
    [sym_opt_text_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(117),
    [sym_end_opt] = STATE(328),
    [aux_sym_text_mode_at_repeat1] = STATE(301),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(587),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(587),
    [sym_text] = ACTIONS(587),
  },
  [298] = {
    [sym_text_group_at] = STATE(329),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(764),
    [sym_begin_group] = ACTIONS(764),
    [sym_end_group] = ACTIONS(764),
    [sym_math_shift] = ACTIONS(764),
    [sym_alignment_tab] = ACTIONS(764),
    [sym_parameter_char] = ACTIONS(764),
    [sym_superscript] = ACTIONS(764),
    [sym_subscript] = ACTIONS(764),
    [sym_active_char] = ACTIONS(764),
    [sym_text] = ACTIONS(764),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(766),
    [anon_sym_RBRACK] = ACTIONS(766),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(766),
    [sym_begin_group] = ACTIONS(766),
    [sym_end_group] = ACTIONS(766),
    [sym_math_shift] = ACTIONS(766),
    [sym_alignment_tab] = ACTIONS(766),
    [sym_parameter_char] = ACTIONS(766),
    [sym_superscript] = ACTIONS(766),
    [sym_subscript] = ACTIONS(766),
    [sym_active_char] = ACTIONS(766),
    [sym_text] = ACTIONS(766),
  },
  [301] = {
    [sym__common] = STATE(301),
    [sym__text_mode_common] = STATE(301),
    [sym__text_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_text_env_at] = STATE(301),
    [sym__display_math_at] = STATE(301),
    [sym_tex_display_math_at] = STATE(301),
    [sym_latex_display_math_at] = STATE(301),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(301),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(301),
    [sym_tex_inline_math_at] = STATE(301),
    [sym_latex_inline_math_at] = STATE(301),
    [sym_inline_math_env_at] = STATE(301),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(301),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(301),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(301),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(301),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(301),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(301),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(301),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(301),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(301),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(301),
    [sym_opt_text_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(301),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(592),
    [sym_begin_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(768),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(768),
    [sym_text] = ACTIONS(768),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(771),
    [anon_sym_RBRACK] = ACTIONS(771),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(771),
    [sym_begin_group] = ACTIONS(771),
    [sym_end_group] = ACTIONS(771),
    [sym_math_shift] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(771),
    [sym_parameter_char] = ACTIONS(771),
    [sym_superscript] = ACTIONS(771),
    [sym_subscript] = ACTIONS(771),
    [sym_active_char] = ACTIONS(771),
    [sym_text] = ACTIONS(771),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_RBRACK] = ACTIONS(773),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(773),
    [sym_end_group] = ACTIONS(773),
    [sym_math_shift] = ACTIONS(773),
    [sym_alignment_tab] = ACTIONS(773),
    [sym_parameter_char] = ACTIONS(773),
    [sym_superscript] = ACTIONS(773),
    [sym_subscript] = ACTIONS(773),
    [sym_active_char] = ACTIONS(773),
    [sym_text] = ACTIONS(773),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_RBRACK] = ACTIONS(775),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(775),
    [sym_begin_group] = ACTIONS(775),
    [sym_end_group] = ACTIONS(775),
    [sym_math_shift] = ACTIONS(775),
    [sym_alignment_tab] = ACTIONS(775),
    [sym_parameter_char] = ACTIONS(775),
    [sym_superscript] = ACTIONS(775),
    [sym_subscript] = ACTIONS(775),
    [sym_active_char] = ACTIONS(775),
    [sym_text] = ACTIONS(775),
  },
  [305] = {
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(777),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(777),
    [sym_begin_group] = ACTIONS(777),
    [sym_end_group] = ACTIONS(777),
    [sym_math_shift] = ACTIONS(777),
    [sym_alignment_tab] = ACTIONS(777),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(777),
    [sym_subscript] = ACTIONS(777),
    [sym_active_char] = ACTIONS(777),
    [sym_text] = ACTIONS(777),
  },
  [306] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(779),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(663),
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
  [308] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(382),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(781),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(781),
    [sym_begin_group] = ACTIONS(781),
    [sym_alignment_tab] = ACTIONS(781),
    [sym_parameter_char] = ACTIONS(781),
    [sym_superscript] = ACTIONS(781),
    [sym_subscript] = ACTIONS(781),
    [sym_active_char] = ACTIONS(781),
    [sym_text] = ACTIONS(781),
  },
  [310] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(783),
  },
  [311] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(785),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(787),
    [sym__end_of_line] = ACTIONS(787),
  },
  [312] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(789),
  },
  [313] = {
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
    [sym_superscript] = ACTIONS(791),
    [sym_subscript] = ACTIONS(791),
    [sym_active_char] = ACTIONS(791),
    [sym_text] = ACTIONS(791),
  },
  [314] = {
    [sym__common] = STATE(314),
    [sym__math_mode_common] = STATE(314),
    [sym__math_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_math_env_at] = STATE(314),
    [sym_tag_at] = STATE(314),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(314),
    [sym_opt_math_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(314),
    [anon_sym_LBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(728),
    [sym_end_group] = ACTIONS(731),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(793),
    [sym_active_char] = ACTIONS(793),
    [sym_text] = ACTIONS(793),
  },
  [315] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(796),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(798),
    [anon_sym_RBRACK] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(798),
    [sym_begin_group] = ACTIONS(798),
    [sym_end_group] = ACTIONS(798),
    [sym_math_shift] = ACTIONS(798),
    [sym_alignment_tab] = ACTIONS(798),
    [sym_parameter_char] = ACTIONS(798),
    [sym_superscript] = ACTIONS(798),
    [sym_subscript] = ACTIONS(798),
    [sym_active_char] = ACTIONS(798),
    [sym_text] = ACTIONS(798),
  },
  [317] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(800),
  },
  [318] = {
    [sym__common] = STATE(271),
    [sym__text_mode_common] = STATE(271),
    [sym__text_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_text_env_at] = STATE(271),
    [sym__display_math_at] = STATE(271),
    [sym_tex_display_math_at] = STATE(271),
    [sym_latex_display_math_at] = STATE(271),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(271),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(271),
    [sym_tex_inline_math_at] = STATE(271),
    [sym_latex_inline_math_at] = STATE(271),
    [sym_inline_math_env_at] = STATE(271),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(271),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(271),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(271),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(271),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(271),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(271),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(271),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(271),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(271),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(271),
    [sym_opt_text_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [319] = {
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_end_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(804),
    [sym_begin_group] = ACTIONS(804),
    [sym_end_group] = ACTIONS(804),
    [sym_math_shift] = ACTIONS(804),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(804),
    [sym_superscript] = ACTIONS(804),
    [sym_subscript] = ACTIONS(804),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [321] = {
    [sym__common] = STATE(321),
    [sym__math_mode_common] = STATE(321),
    [sym__math_mode_at] = STATE(321),
    [sym_parameter] = STATE(321),
    [sym_math_env_at] = STATE(321),
    [sym_tag_at] = STATE(321),
    [sym_tag_token] = STATE(202),
    [sym_escaped] = STATE(321),
    [sym_begin] = STATE(203),
    [sym_begin_token] = STATE(57),
    [sym_include_at] = STATE(321),
    [sym_include_token] = STATE(108),
    [sym_storage] = STATE(321),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(321),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(321),
    [sym_opt_math_group_at] = STATE(321),
    [sym_token_at] = STATE(321),
    [sym_begin_opt] = STATE(204),
    [aux_sym_math_mode_at_repeat1] = STATE(321),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(731),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(806),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(806),
    [sym_subscript] = ACTIONS(806),
    [sym_active_char] = ACTIONS(806),
    [sym_text] = ACTIONS(806),
  },
  [322] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(529),
  },
  [323] = {
    [sym__common] = STATE(271),
    [sym__text_mode_common] = STATE(271),
    [sym__text_mode_at] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_text_env_at] = STATE(271),
    [sym__display_math_at] = STATE(271),
    [sym_tex_display_math_at] = STATE(271),
    [sym_latex_display_math_at] = STATE(271),
    [sym_begin_display_math] = STATE(102),
    [sym_begin_inline_math] = STATE(103),
    [sym_display_math_env_at] = STATE(271),
    [sym_display_math_begin_at] = STATE(104),
    [sym__inline_math_at] = STATE(271),
    [sym_tex_inline_math_at] = STATE(271),
    [sym_latex_inline_math_at] = STATE(271),
    [sym_inline_math_env_at] = STATE(271),
    [sym_inline_math_begin] = STATE(105),
    [sym_verbatim_env] = STATE(271),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(107),
    [sym_documentclass] = STATE(271),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(271),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(271),
    [sym_include_token] = STATE(108),
    [sym_section_at] = STATE(271),
    [sym_section_token] = STATE(109),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(271),
    [sym_emph_token] = STATE(110),
    [sym_footnote_at] = STATE(271),
    [sym_footnote_token] = STATE(111),
    [sym_textbf_at] = STATE(271),
    [sym_textbf_token] = STATE(112),
    [sym_textit_at] = STATE(271),
    [sym_textit_token] = STATE(113),
    [sym_texttt_at] = STATE(271),
    [sym_texttt_token] = STATE(114),
    [sym_text_group_at] = STATE(271),
    [sym_opt_text_group_at] = STATE(271),
    [sym_token_at] = STATE(271),
    [sym_begin_opt] = STATE(117),
    [aux_sym_text_mode_at_repeat1] = STATE(271),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(809),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [324] = {
    [anon_sym_LBRACK] = ACTIONS(811),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(811),
    [sym_begin_group] = ACTIONS(811),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(811),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(811),
    [sym_active_char] = ACTIONS(811),
    [sym_text] = ACTIONS(811),
  },
  [325] = {
    [sym_text_group_at] = STATE(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(561),
    [sym__end_of_line] = ACTIONS(813),
  },
  [326] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(813),
  },
  [327] = {
    [anon_sym_LBRACK] = ACTIONS(815),
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(815),
    [sym_begin_group] = ACTIONS(815),
    [sym_end_group] = ACTIONS(815),
    [sym_math_shift] = ACTIONS(815),
    [sym_alignment_tab] = ACTIONS(815),
    [sym_parameter_char] = ACTIONS(815),
    [sym_superscript] = ACTIONS(815),
    [sym_subscript] = ACTIONS(815),
    [sym_active_char] = ACTIONS(815),
    [sym_text] = ACTIONS(815),
  },
  [328] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(766),
    [sym__end_of_line] = ACTIONS(766),
    [sym__whitespace] = ACTIONS(766),
  },
  [329] = {
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
    [sym_superscript] = ACTIONS(817),
    [sym_subscript] = ACTIONS(817),
    [sym_active_char] = ACTIONS(817),
    [sym_text] = ACTIONS(817),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_end_group] = ACTIONS(659),
    [sym_math_shift] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(819),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(819),
    [sym_begin_group] = ACTIONS(819),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(819),
    [sym_superscript] = ACTIONS(819),
    [sym_subscript] = ACTIONS(819),
    [sym_active_char] = ACTIONS(819),
    [sym_text] = ACTIONS(819),
  },
  [332] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(821),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(823),
    [sym__end_of_line] = ACTIONS(823),
  },
  [333] = {
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(825),
    [sym_begin_group] = ACTIONS(825),
    [sym_end_group] = ACTIONS(825),
    [sym_math_shift] = ACTIONS(825),
    [sym_alignment_tab] = ACTIONS(825),
    [sym_parameter_char] = ACTIONS(825),
    [sym_superscript] = ACTIONS(825),
    [sym_subscript] = ACTIONS(825),
    [sym_active_char] = ACTIONS(825),
    [sym_text] = ACTIONS(825),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_end_group] = ACTIONS(827),
    [sym_math_shift] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_active_char] = ACTIONS(827),
    [sym_text] = ACTIONS(827),
  },
  [335] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(693),
  },
  [336] = {
    [anon_sym_LBRACK] = ACTIONS(829),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(829),
    [sym_begin_group] = ACTIONS(829),
    [sym_alignment_tab] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(829),
    [sym_superscript] = ACTIONS(829),
    [sym_subscript] = ACTIONS(829),
    [sym_active_char] = ACTIONS(829),
    [sym_text] = ACTIONS(829),
  },
  [337] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(831),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(833),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(833),
    [sym_begin_group] = ACTIONS(833),
    [sym_alignment_tab] = ACTIONS(833),
    [sym_parameter_char] = ACTIONS(833),
    [sym_superscript] = ACTIONS(833),
    [sym_subscript] = ACTIONS(833),
    [sym_active_char] = ACTIONS(833),
    [sym_text] = ACTIONS(833),
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
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(32),
  [29] = {.count = 1, .reusable = true}, SHIFT(33),
  [31] = {.count = 1, .reusable = false}, SHIFT(34),
  [33] = {.count = 1, .reusable = false}, SHIFT(35),
  [35] = {.count = 1, .reusable = false}, SHIFT(36),
  [37] = {.count = 1, .reusable = false}, SHIFT(37),
  [39] = {.count = 1, .reusable = false}, SHIFT(38),
  [41] = {.count = 1, .reusable = false}, SHIFT(39),
  [43] = {.count = 1, .reusable = false}, SHIFT(40),
  [45] = {.count = 1, .reusable = true}, SHIFT(41),
  [47] = {.count = 1, .reusable = false}, SHIFT(42),
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
  [73] = {.count = 1, .reusable = true}, SHIFT(60),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [77] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
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
  [99] = {.count = 1, .reusable = true}, SHIFT(90),
  [101] = {.count = 1, .reusable = true}, SHIFT(98),
  [103] = {.count = 1, .reusable = true}, SHIFT(99),
  [105] = {.count = 1, .reusable = true}, SHIFT(100),
  [107] = {.count = 1, .reusable = true}, SHIFT(118),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(119),
  [113] = {.count = 1, .reusable = true}, SHIFT(121),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(122),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(123),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(124),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(125),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(126),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(127),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(128),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(129),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(130),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(131),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(132),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [175] = {.count = 1, .reusable = false}, SHIFT(133),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [181] = {.count = 1, .reusable = false}, SHIFT(134),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(135),
  [189] = {.count = 1, .reusable = true}, SHIFT(136),
  [191] = {.count = 1, .reusable = false}, SHIFT(137),
  [193] = {.count = 1, .reusable = true}, SHIFT(138),
  [195] = {.count = 1, .reusable = true}, SHIFT(139),
  [197] = {.count = 1, .reusable = true}, SHIFT(141),
  [199] = {.count = 1, .reusable = true}, SHIFT(142),
  [201] = {.count = 1, .reusable = true}, SHIFT(144),
  [203] = {.count = 1, .reusable = true}, SHIFT(146),
  [205] = {.count = 1, .reusable = true}, SHIFT(148),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(149),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(150),
  [215] = {.count = 1, .reusable = true}, SHIFT(152),
  [217] = {.count = 1, .reusable = true}, SHIFT(153),
  [219] = {.count = 1, .reusable = true}, SHIFT(159),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(161),
  [225] = {.count = 1, .reusable = false}, SHIFT(164),
  [227] = {.count = 1, .reusable = true}, SHIFT(163),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(165),
  [233] = {.count = 1, .reusable = false}, SHIFT(159),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [237] = {.count = 1, .reusable = true}, SHIFT(168),
  [239] = {.count = 1, .reusable = false}, SHIFT(169),
  [241] = {.count = 1, .reusable = false}, SHIFT(170),
  [243] = {.count = 1, .reusable = false}, SHIFT(171),
  [245] = {.count = 1, .reusable = false}, SHIFT(172),
  [247] = {.count = 1, .reusable = true}, SHIFT(173),
  [249] = {.count = 1, .reusable = true}, SHIFT(174),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(177),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(172),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [261] = {.count = 1, .reusable = true}, SHIFT(180),
  [263] = {.count = 1, .reusable = true}, SHIFT(182),
  [265] = {.count = 1, .reusable = true}, SHIFT(184),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [269] = {.count = 1, .reusable = true}, SHIFT(185),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(187),
  [277] = {.count = 1, .reusable = false}, SHIFT(189),
  [279] = {.count = 1, .reusable = true}, SHIFT(190),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(191),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [293] = {.count = 1, .reusable = false}, SHIFT(193),
  [295] = {.count = 1, .reusable = false}, SHIFT(194),
  [297] = {.count = 1, .reusable = true}, SHIFT(195),
  [299] = {.count = 1, .reusable = true}, SHIFT(196),
  [301] = {.count = 1, .reusable = true}, SHIFT(197),
  [303] = {.count = 1, .reusable = true}, SHIFT(198),
  [305] = {.count = 1, .reusable = true}, SHIFT(199),
  [307] = {.count = 1, .reusable = true}, SHIFT(200),
  [309] = {.count = 1, .reusable = true}, SHIFT(205),
  [311] = {.count = 1, .reusable = true}, SHIFT(206),
  [313] = {.count = 1, .reusable = true}, SHIFT(209),
  [315] = {.count = 1, .reusable = true}, SHIFT(213),
  [317] = {.count = 1, .reusable = true}, SHIFT(215),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(228),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [327] = {.count = 1, .reusable = true}, SHIFT(229),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [333] = {.count = 1, .reusable = true}, SHIFT(231),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(122),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(136),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [389] = {.count = 1, .reusable = true}, SHIFT(232),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [393] = {.count = 1, .reusable = true}, SHIFT(233),
  [395] = {.count = 1, .reusable = true}, SHIFT(234),
  [397] = {.count = 1, .reusable = true}, SHIFT(235),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [401] = {.count = 1, .reusable = true}, SHIFT(236),
  [403] = {.count = 1, .reusable = true}, SHIFT(238),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [411] = {.count = 1, .reusable = true}, SHIFT(241),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(51),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [422] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(149),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [430] = {.count = 1, .reusable = true}, SHIFT(242),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(152),
  [437] = {.count = 1, .reusable = true}, SHIFT(243),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [443] = {.count = 1, .reusable = true}, SHIFT(244),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [447] = {.count = 1, .reusable = true}, SHIFT(246),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(248),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [455] = {.count = 1, .reusable = true}, SHIFT(249),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [463] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(164),
  [466] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(70),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(165),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(168),
  [481] = {.count = 1, .reusable = true}, SHIFT(250),
  [483] = {.count = 1, .reusable = true}, SHIFT(251),
  [485] = {.count = 1, .reusable = true}, SHIFT(252),
  [487] = {.count = 1, .reusable = true}, SHIFT(253),
  [489] = {.count = 1, .reusable = true}, SHIFT(254),
  [491] = {.count = 1, .reusable = true}, SHIFT(255),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(256),
  [497] = {.count = 1, .reusable = true}, SHIFT(257),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [503] = {.count = 1, .reusable = true}, SHIFT(259),
  [505] = {.count = 1, .reusable = true}, SHIFT(260),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(266),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [519] = {.count = 1, .reusable = false}, SHIFT(268),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [525] = {.count = 1, .reusable = false}, SHIFT(269),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [531] = {.count = 1, .reusable = true}, SHIFT(270),
  [533] = {.count = 1, .reusable = true}, SHIFT(271),
  [535] = {.count = 1, .reusable = true}, SHIFT(272),
  [537] = {.count = 1, .reusable = true}, SHIFT(273),
  [539] = {.count = 1, .reusable = true}, SHIFT(275),
  [541] = {.count = 1, .reusable = true}, SHIFT(276),
  [543] = {.count = 1, .reusable = true}, SHIFT(278),
  [545] = {.count = 1, .reusable = true}, SHIFT(280),
  [547] = {.count = 1, .reusable = true}, SHIFT(282),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [551] = {.count = 1, .reusable = true}, SHIFT(283),
  [553] = {.count = 1, .reusable = true}, SHIFT(193),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [557] = {.count = 1, .reusable = true}, SHIFT(285),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [561] = {.count = 1, .reusable = true}, SHIFT(290),
  [563] = {.count = 1, .reusable = true}, SHIFT(291),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [569] = {.count = 1, .reusable = true}, SHIFT(294),
  [571] = {.count = 1, .reusable = true}, SHIFT(297),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [577] = {.count = 1, .reusable = true}, SHIFT(298),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [587] = {.count = 1, .reusable = true}, SHIFT(301),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(195),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(99),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(100),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(229),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(7),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(231),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(234),
  [622] = {.count = 1, .reusable = true}, SHIFT(302),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [626] = {.count = 1, .reusable = true}, SHIFT(303),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(241),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [637] = {.count = 1, .reusable = false}, SHIFT(304),
  [639] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [643] = {.count = 1, .reusable = false}, SHIFT(305),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [647] = {.count = 1, .reusable = true}, SHIFT(306),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [651] = {.count = 1, .reusable = true}, SHIFT(170),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [657] = {.count = 1, .reusable = true}, SHIFT(307),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [667] = {.count = 1, .reusable = true}, SHIFT(308),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [671] = {.count = 1, .reusable = true}, SHIFT(309),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [677] = {.count = 1, .reusable = true}, SHIFT(311),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [695] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(271),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [702] = {.count = 1, .reusable = true}, SHIFT(313),
  [704] = {.count = 1, .reusable = true}, SHIFT(314),
  [706] = {.count = 1, .reusable = true}, SHIFT(315),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [710] = {.count = 1, .reusable = true}, SHIFT(316),
  [712] = {.count = 1, .reusable = true}, SHIFT(318),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [720] = {.count = 1, .reusable = true}, SHIFT(321),
  [722] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(198),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(199),
  [731] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [733] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(283),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(285),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [752] = {.count = 1, .reusable = true}, SHIFT(322),
  [754] = {.count = 1, .reusable = true}, SHIFT(323),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [758] = {.count = 1, .reusable = true}, SHIFT(324),
  [760] = {.count = 1, .reusable = true}, SHIFT(325),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(301),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [779] = {.count = 1, .reusable = true}, SHIFT(330),
  [781] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [783] = {.count = 1, .reusable = true}, SHIFT(331),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [789] = {.count = 1, .reusable = true}, SHIFT(332),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(314),
  [796] = {.count = 1, .reusable = true}, SHIFT(333),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [800] = {.count = 1, .reusable = true}, SHIFT(334),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(321),
  [809] = {.count = 1, .reusable = true}, SHIFT(335),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [813] = {.count = 1, .reusable = true}, SHIFT(336),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [831] = {.count = 1, .reusable = true}, SHIFT(338),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
