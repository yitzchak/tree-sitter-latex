#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 357
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 4
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_STAR = 3,
  anon_sym_verb = 4,
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
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 15,
  anon_sym_begin = 16,
  anon_sym_end = 17,
  anon_sym_documentclass = 18,
  anon_sym_usepackage = 19,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 20,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 21,
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
  sym_magic_comment = 32,
  sym_comment = 33,
  sym__escape = 34,
  sym_begin_group = 35,
  sym_end_group = 36,
  sym_math_shift = 37,
  sym_alignment_tab = 38,
  sym__end_of_line = 39,
  sym_parameter_char = 40,
  sym_superscript = 41,
  sym_subscript = 42,
  sym__name = 43,
  sym__name_at = 44,
  sym_active_char = 45,
  sym_text = 46,
  sym_number = 47,
  sym_document = 48,
  sym__common = 49,
  sym__text_mode_common = 50,
  sym_inline_verbatim = 51,
  sym_verb_token = 52,
  sym__text_mode = 53,
  sym_text_mode = 54,
  sym__text_mode_at = 55,
  sym_text_mode_at = 56,
  sym_text_mode_at_region = 57,
  sym__math_mode_common = 58,
  sym__math_mode = 59,
  sym_math_mode = 60,
  sym__math_mode_at = 61,
  sym_math_mode_at = 62,
  sym_parameter = 63,
  sym_text_env = 64,
  sym_text_env_at = 65,
  sym_math_env = 66,
  sym_math_env_at = 67,
  sym__display_math = 68,
  sym__display_math_at = 69,
  sym_tex_display_math = 70,
  sym_tex_display_math_at = 71,
  sym_latex_display_math = 72,
  sym_latex_display_math_at = 73,
  sym_begin_display_math = 74,
  sym_end_display_math = 75,
  sym_begin_inline_math = 76,
  sym_end_inline_math = 77,
  sym_display_math_env = 78,
  sym_display_math_env_at = 79,
  sym_display_math_begin = 80,
  sym_display_math_begin_at = 81,
  sym_display_math_end = 82,
  sym_display_math_env_group = 83,
  sym__inline_math = 84,
  sym__inline_math_at = 85,
  sym_tex_inline_math = 86,
  sym_tex_inline_math_at = 87,
  sym_latex_inline_math = 88,
  sym_latex_inline_math_at = 89,
  sym_inline_math_env = 90,
  sym_inline_math_env_at = 91,
  sym_inline_math_begin = 92,
  sym_inline_math_end = 93,
  sym_inline_math_env_group = 94,
  sym_tag = 95,
  sym_tag_at = 96,
  sym_tag_token = 97,
  sym_verbatim_env = 98,
  sym_verbatim_begin = 99,
  sym_verbatim_end = 100,
  sym_verbatim_text = 101,
  sym_verbatim_env_group = 102,
  sym_escaped = 103,
  sym_begin = 104,
  sym_begin_token = 105,
  sym_end = 106,
  sym_end_token = 107,
  sym_documentclass = 108,
  sym_documentclass_token = 109,
  sym_usepackage = 110,
  sym_usepackage_token = 111,
  sym_include = 112,
  sym_include_at = 113,
  sym_include_token = 114,
  sym_section = 115,
  sym_section_at = 116,
  sym_section_token = 117,
  sym_storage = 118,
  sym_storage_token = 119,
  sym_catcode = 120,
  sym_catcode_token = 121,
  sym_emph = 122,
  sym_emph_at = 123,
  sym_emph_token = 124,
  sym_footnote = 125,
  sym_footnote_at = 126,
  sym_footnote_token = 127,
  sym_textbf = 128,
  sym_textbf_at = 129,
  sym_textbf_token = 130,
  sym_textit = 131,
  sym_textit_at = 132,
  sym_textit_token = 133,
  sym_texttt = 134,
  sym_texttt_at = 135,
  sym_texttt_token = 136,
  sym_makeatletter = 137,
  sym_makeatletter_token = 138,
  sym_makeatother = 139,
  sym_makeatother_token = 140,
  sym_text_group = 141,
  sym_text_group_at = 142,
  sym_simple_text_group = 143,
  sym_opt_text_group = 144,
  sym_opt_text_group_at = 145,
  sym_math_group = 146,
  sym_math_group_at = 147,
  sym_opt_math_group = 148,
  sym_opt_math_group_at = 149,
  sym_math_text_group = 150,
  sym_math_text_group_at = 151,
  sym_token = 152,
  sym_token_at = 153,
  sym_begin_opt = 154,
  sym_end_opt = 155,
  aux_sym_text_mode_repeat1 = 156,
  aux_sym_text_mode_at_repeat1 = 157,
  aux_sym_math_mode_repeat1 = 158,
  aux_sym_math_mode_at_repeat1 = 159,
  aux_sym_parameter_repeat1 = 160,
  aux_sym_verbatim_text_repeat1 = 161,
  aux_sym_verbatim_text_repeat2 = 162,
  anon_alias_sym_class_name = 163,
  anon_alias_sym_env_name = 164,
  anon_alias_sym_package_name = 165,
  anon_alias_sym_text = 166,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [ts_builtin_sym_end] = "END",
  [anon_sym_STAR] = "*",
  [anon_sym_verb] = "verb",
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verb] = {
    .visible = true,
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
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 38:
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
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(59);
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 'm')
        ADVANCE(111);
      if (lookahead == 'p')
        ADVANCE(126);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(149);
      if (lookahead == 'u')
        ADVANCE(159);
      if (lookahead == 'v')
        ADVANCE(169);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 40:
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
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(44);
      if (lookahead == 'p')
        ADVANCE(49);
      if (lookahead == 's')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'h')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(102);
      if (lookahead == 'p')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'i')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(129);
      if (lookahead == 't')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(135);
      if (lookahead == 'u')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(142);
      if (lookahead == 's')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(135);
      if (lookahead == 'u')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(153);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 176:
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
        ADVANCE(29);
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
        ADVANCE(37);
      END_STATE();
    case 177:
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
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      ADVANCE(37);
      END_STATE();
    case 178:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 179:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(24);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 181:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(34);
      END_STATE();
    case 184:
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
        ADVANCE(185);
      ADVANCE(37);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 186:
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
    case 187:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(188);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(190);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 193:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'n')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'd')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 198:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(59);
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(199);
      if (lookahead == 'f')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 'm')
        ADVANCE(111);
      if (lookahead == 'p')
        ADVANCE(126);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(149);
      if (lookahead == 'u')
        ADVANCE(159);
      if (lookahead == 'v')
        ADVANCE(169);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 202:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(203);
      if (lookahead == 'a')
        ADVANCE(212);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(256);
      if (lookahead == 'g')
        ADVANCE(261);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(275);
      if (lookahead == 's')
        ADVANCE(290);
      if (lookahead == 'v')
        ADVANCE(293);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'g')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(240);
      if (lookahead == 's')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(250);
      if (lookahead == 'u')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'i')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 301:
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
    case 302:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 303:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 304:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead == 'b')
        ADVANCE(318);
      if (lookahead == 'c')
        ADVANCE(323);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == 'e')
        ADVANCE(350);
      if (lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'k')
        ADVANCE(372);
      if (lookahead == 'm')
        ADVANCE(374);
      if (lookahead == 'p')
        ADVANCE(388);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(421);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'p')
        ADVANCE(313);
      if (lookahead == 's')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(324);
      if (lookahead == 'h')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(66);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'm')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(365);
      if (lookahead == 'p')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(375);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(391);
      if (lookahead == 't')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead == 'u')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(404);
      if (lookahead == 's')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead == 'u')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(415);
      if (lookahead == 'i')
        ADVANCE(417);
      if (lookahead == 't')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 437:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(188);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'e')
        ADVANCE(438);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(190);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 439:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 440:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead == 'b')
        ADVANCE(318);
      if (lookahead == 'c')
        ADVANCE(323);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == 'e')
        ADVANCE(350);
      if (lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'k')
        ADVANCE(372);
      if (lookahead == 'm')
        ADVANCE(441);
      if (lookahead == 'p')
        ADVANCE(388);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(421);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(318);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'k')
        ADVANCE(372);
      if (lookahead == 't')
        ADVANCE(445);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(447);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 448:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'a')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'k')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'e')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'a')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 't')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'o')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 't')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'h')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'e')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'r')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 460:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead == 'b')
        ADVANCE(318);
      if (lookahead == 'c')
        ADVANCE(323);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == 'e')
        ADVANCE(461);
      if (lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'k')
        ADVANCE(372);
      if (lookahead == 'm')
        ADVANCE(441);
      if (lookahead == 'p')
        ADVANCE(388);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead == 'u')
        ADVANCE(421);
      if (lookahead == 'v')
        ADVANCE(431);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'm')
        ADVANCE(352);
      if (lookahead == 'n')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(463);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 464:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(318);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'e')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'k')
        ADVANCE(372);
      if (lookahead == 't')
        ADVANCE(445);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'n')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 176},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 177},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 179, .external_lex_state = 2},
  [9] = {.lex_state = 178},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 180},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 177},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 181},
  [33] = {.lex_state = 183, .external_lex_state = 2},
  [34] = {.lex_state = 184},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 177},
  [37] = {.lex_state = 186},
  [38] = {.lex_state = 186},
  [39] = {.lex_state = 186},
  [40] = {.lex_state = 186},
  [41] = {.lex_state = 186},
  [42] = {.lex_state = 184},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 186},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 186},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 186},
  [49] = {.lex_state = 184},
  [50] = {.lex_state = 184},
  [51] = {.lex_state = 177},
  [52] = {.lex_state = 176},
  [53] = {.lex_state = 187},
  [54] = {.lex_state = 176},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 178, .external_lex_state = 3},
  [63] = {.lex_state = 178, .external_lex_state = 2},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 193},
  [70] = {.lex_state = 177},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 180},
  [75] = {.lex_state = 198},
  [76] = {.lex_state = 177},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 202},
  [80] = {.lex_state = 301},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 301},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 177},
  [86] = {.lex_state = 186},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 177},
  [89] = {.lex_state = 186},
  [90] = {.lex_state = 177},
  [91] = {.lex_state = 177},
  [92] = {.lex_state = 186},
  [93] = {.lex_state = 302},
  [94] = {.lex_state = 303},
  [95] = {.lex_state = 177},
  [96] = {.lex_state = 177},
  [97] = {.lex_state = 186},
  [98] = {.lex_state = 177},
  [99] = {.lex_state = 177},
  [100] = {.lex_state = 177},
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 176},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 36},
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
  [118] = {.lex_state = 177},
  [119] = {.lex_state = 177},
  [120] = {.lex_state = 38},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 177},
  [123] = {.lex_state = 177},
  [124] = {.lex_state = 38},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 177},
  [127] = {.lex_state = 181},
  [128] = {.lex_state = 179, .external_lex_state = 2},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 186},
  [136] = {.lex_state = 186},
  [137] = {.lex_state = 177},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 177},
  [145] = {.lex_state = 177},
  [146] = {.lex_state = 176},
  [147] = {.lex_state = 186},
  [148] = {.lex_state = 177},
  [149] = {.lex_state = 176},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 177},
  [152] = {.lex_state = 176},
  [153] = {.lex_state = 177},
  [154] = {.lex_state = 437},
  [155] = {.lex_state = 177},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 177},
  [158] = {.lex_state = 38},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 178, .external_lex_state = 2},
  [161] = {.lex_state = 178, .external_lex_state = 3},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 177},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 439},
  [166] = {.lex_state = 177},
  [167] = {.lex_state = 177},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 177},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 186},
  [172] = {.lex_state = 177},
  [173] = {.lex_state = 202},
  [174] = {.lex_state = 177},
  [175] = {.lex_state = 180},
  [176] = {.lex_state = 197},
  [177] = {.lex_state = 180},
  [178] = {.lex_state = 177},
  [179] = {.lex_state = 177},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 176},
  [182] = {.lex_state = 176},
  [183] = {.lex_state = 176},
  [184] = {.lex_state = 176},
  [185] = {.lex_state = 176},
  [186] = {.lex_state = 36},
  [187] = {.lex_state = 301},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 180},
  [190] = {.lex_state = 301},
  [191] = {.lex_state = 301},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 177},
  [194] = {.lex_state = 301},
  [195] = {.lex_state = 301},
  [196] = {.lex_state = 38},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 177},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 177},
  [201] = {.lex_state = 303},
  [202] = {.lex_state = 181},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 177},
  [205] = {.lex_state = 184},
  [206] = {.lex_state = 184},
  [207] = {.lex_state = 440},
  [208] = {.lex_state = 177},
  [209] = {.lex_state = 176},
  [210] = {.lex_state = 442},
  [211] = {.lex_state = 176},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 38},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 448},
  [219] = {.lex_state = 177},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 460},
  [226] = {.lex_state = 177},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 301},
  [229] = {.lex_state = 177},
  [230] = {.lex_state = 177},
  [231] = {.lex_state = 186},
  [232] = {.lex_state = 38},
  [233] = {.lex_state = 177},
  [234] = {.lex_state = 177},
  [235] = {.lex_state = 186},
  [236] = {.lex_state = 177},
  [237] = {.lex_state = 177},
  [238] = {.lex_state = 177},
  [239] = {.lex_state = 177},
  [240] = {.lex_state = 38},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 177},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 186},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 177},
  [248] = {.lex_state = 176},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 177},
  [251] = {.lex_state = 176},
  [252] = {.lex_state = 176},
  [253] = {.lex_state = 177},
  [254] = {.lex_state = 177},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 177},
  [257] = {.lex_state = 178, .external_lex_state = 2},
  [258] = {.lex_state = 184},
  [259] = {.lex_state = 184},
  [260] = {.lex_state = 202},
  [261] = {.lex_state = 177},
  [262] = {.lex_state = 202},
  [263] = {.lex_state = 177},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 176},
  [266] = {.lex_state = 301},
  [267] = {.lex_state = 177},
  [268] = {.lex_state = 301},
  [269] = {.lex_state = 177},
  [270] = {.lex_state = 301},
  [271] = {.lex_state = 176},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 301},
  [274] = {.lex_state = 301},
  [275] = {.lex_state = 180},
  [276] = {.lex_state = 301},
  [277] = {.lex_state = 301},
  [278] = {.lex_state = 177},
  [279] = {.lex_state = 301},
  [280] = {.lex_state = 177},
  [281] = {.lex_state = 177},
  [282] = {.lex_state = 177},
  [283] = {.lex_state = 177},
  [284] = {.lex_state = 177},
  [285] = {.lex_state = 177},
  [286] = {.lex_state = 177},
  [287] = {.lex_state = 176},
  [288] = {.lex_state = 177},
  [289] = {.lex_state = 176},
  [290] = {.lex_state = 36},
  [291] = {.lex_state = 177},
  [292] = {.lex_state = 176},
  [293] = {.lex_state = 177},
  [294] = {.lex_state = 464},
  [295] = {.lex_state = 177},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 177},
  [298] = {.lex_state = 38},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 177},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 177},
  [303] = {.lex_state = 177},
  [304] = {.lex_state = 177},
  [305] = {.lex_state = 177},
  [306] = {.lex_state = 176},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 301},
  [309] = {.lex_state = 301},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 177},
  [312] = {.lex_state = 301},
  [313] = {.lex_state = 38},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 177},
  [316] = {.lex_state = 177},
  [317] = {.lex_state = 38},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 177},
  [320] = {.lex_state = 177},
  [321] = {.lex_state = 177},
  [322] = {.lex_state = 177},
  [323] = {.lex_state = 177},
  [324] = {.lex_state = 176},
  [325] = {.lex_state = 177},
  [326] = {.lex_state = 301},
  [327] = {.lex_state = 36},
  [328] = {.lex_state = 301},
  [329] = {.lex_state = 180},
  [330] = {.lex_state = 301},
  [331] = {.lex_state = 177},
  [332] = {.lex_state = 176},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 177},
  [335] = {.lex_state = 176},
  [336] = {.lex_state = 176},
  [337] = {.lex_state = 177},
  [338] = {.lex_state = 177},
  [339] = {.lex_state = 38},
  [340] = {.lex_state = 301},
  [341] = {.lex_state = 176},
  [342] = {.lex_state = 36},
  [343] = {.lex_state = 301},
  [344] = {.lex_state = 301},
  [345] = {.lex_state = 177},
  [346] = {.lex_state = 301},
  [347] = {.lex_state = 177},
  [348] = {.lex_state = 177},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 180},
  [351] = {.lex_state = 177},
  [352] = {.lex_state = 177},
  [353] = {.lex_state = 301},
  [354] = {.lex_state = 36},
  [355] = {.lex_state = 301},
  [356] = {.lex_state = 36},
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
    [anon_sym_STAR] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
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
    [aux_sym_text_mode_repeat1] = STATE(31),
    [aux_sym_parameter_repeat1] = STATE(32),
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
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [anon_sym_makeatletter] = ACTIONS(59),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [4] = {
    [sym__common] = STATE(52),
    [sym__text_mode_common] = STATE(52),
    [sym_inline_verbatim] = STATE(52),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(52),
    [sym_text_mode_at_region] = STATE(52),
    [sym_parameter] = STATE(52),
    [sym_text_env] = STATE(52),
    [sym__display_math] = STATE(52),
    [sym_tex_display_math] = STATE(52),
    [sym_latex_display_math] = STATE(52),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(52),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(52),
    [sym_tex_inline_math] = STATE(52),
    [sym_latex_inline_math] = STATE(52),
    [sym_inline_math_env] = STATE(52),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(52),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(52),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(52),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(52),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(52),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(52),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(52),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(52),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(52),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(52),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(52),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(52),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(52),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(52),
    [sym_opt_text_group] = STATE(52),
    [sym_token] = STATE(52),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(52),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(63),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [5] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(61),
    [sym_math_env] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(61),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(61),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(61),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(61),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(61),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(71),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_text] = ACTIONS(73),
  },
  [6] = {
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(64),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [11] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [12] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(67),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [13] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(68),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [14] = {
    [sym_verbatim_end] = STATE(70),
    [sym_verbatim_text] = STATE(71),
    [sym_end_token] = STATE(72),
    [aux_sym_verbatim_text_repeat1] = STATE(73),
    [aux_sym_verbatim_text_repeat2] = STATE(74),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(87),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym__end_of_line] = ACTIONS(91),
  },
  [15] = {
    [sym__common] = STATE(78),
    [sym__text_mode_common] = STATE(78),
    [sym_inline_verbatim] = STATE(78),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(78),
    [sym_text_mode_at_region] = STATE(78),
    [sym_parameter] = STATE(78),
    [sym_text_env] = STATE(78),
    [sym__display_math] = STATE(78),
    [sym_tex_display_math] = STATE(78),
    [sym_latex_display_math] = STATE(78),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(78),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(78),
    [sym_tex_inline_math] = STATE(78),
    [sym_latex_inline_math] = STATE(78),
    [sym_inline_math_env] = STATE(78),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(78),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(78),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(76),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(78),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(78),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(78),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(78),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(78),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(78),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(78),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(78),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(78),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(78),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(78),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(78),
    [sym_opt_text_group] = STATE(78),
    [sym_token] = STATE(78),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(78),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(95),
    [sym_text] = ACTIONS(95),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(80),
    [sym_inline_math_env_group] = STATE(81),
    [sym_verbatim_env_group] = STATE(82),
    [sym_simple_text_group] = STATE(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [17] = {
    [sym_simple_text_group] = STATE(85),
    [sym_opt_text_group] = STATE(86),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [18] = {
    [sym_simple_text_group] = STATE(88),
    [sym_opt_text_group] = STATE(89),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [19] = {
    [sym_text_group] = STATE(90),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(92),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(101),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [22] = {
    [sym_escaped] = STATE(94),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(103),
  },
  [23] = {
    [sym_text_group] = STATE(95),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(96),
    [sym_opt_text_group] = STATE(97),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(98),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(99),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(100),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [28] = {
    [sym__common] = STATE(121),
    [sym__text_mode_common] = STATE(121),
    [sym_inline_verbatim] = STATE(121),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(121),
    [sym_text_mode_at] = STATE(104),
    [sym_parameter] = STATE(121),
    [sym_text_env_at] = STATE(121),
    [sym__display_math_at] = STATE(121),
    [sym_tex_display_math_at] = STATE(121),
    [sym_latex_display_math_at] = STATE(121),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(121),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(121),
    [sym_tex_inline_math_at] = STATE(121),
    [sym_latex_inline_math_at] = STATE(121),
    [sym_inline_math_env_at] = STATE(121),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(121),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(121),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(121),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(121),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(121),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(121),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(121),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(121),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(121),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(121),
    [sym_texttt_token] = STATE(117),
    [sym_makeatother] = STATE(118),
    [sym_makeatother_token] = STATE(119),
    [sym_text_group_at] = STATE(121),
    [sym_opt_text_group_at] = STATE(121),
    [sym_token_at] = STATE(121),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(121),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(113),
    [sym_math_shift] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(113),
    [sym_superscript] = ACTIONS(113),
    [sym_subscript] = ACTIONS(113),
    [sym_active_char] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
  },
  [30] = {
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
    [sym_footnote] = STATE(124),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(124),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(124),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(124),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(124),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(123),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
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
    [sym__common] = STATE(125),
    [sym__text_mode_common] = STATE(125),
    [sym_inline_verbatim] = STATE(125),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(125),
    [sym_text_mode_at_region] = STATE(125),
    [sym_parameter] = STATE(125),
    [sym_text_env] = STATE(125),
    [sym__display_math] = STATE(125),
    [sym_tex_display_math] = STATE(125),
    [sym_latex_display_math] = STATE(125),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(125),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(125),
    [sym_tex_inline_math] = STATE(125),
    [sym_latex_inline_math] = STATE(125),
    [sym_inline_math_env] = STATE(125),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(125),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(125),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(125),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(125),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(125),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(125),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(125),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(125),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(125),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(125),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(125),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(125),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(125),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(125),
    [sym_opt_text_group] = STATE(125),
    [sym_token] = STATE(125),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(125),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
  },
  [33] = {
    [sym_verb_delim] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_text] = ACTIONS(141),
  },
  [36] = {
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
  [37] = {
    [sym__whitespace] = ACTIONS(145),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(147),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(151),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(155),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(159),
  },
  [41] = {
    [anon_sym_STAR] = ACTIONS(161),
    [sym__whitespace] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(165),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym__whitespace] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(167),
    [sym_math_shift] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_text] = ACTIONS(171),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(173),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(177),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(181),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(183),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(185),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(187),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(189),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(193),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(197),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_text] = ACTIONS(199),
  },
  [50] = {
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
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(201),
    [sym_active_char] = ACTIONS(201),
    [sym_text] = ACTIONS(205),
  },
  [51] = {
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
  [52] = {
    [sym__common] = STATE(146),
    [sym__text_mode_common] = STATE(146),
    [sym_inline_verbatim] = STATE(146),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(146),
    [sym_text_mode_at_region] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_env] = STATE(146),
    [sym__display_math] = STATE(146),
    [sym_tex_display_math] = STATE(146),
    [sym_latex_display_math] = STATE(146),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(146),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(146),
    [sym_tex_inline_math] = STATE(146),
    [sym_latex_inline_math] = STATE(146),
    [sym_inline_math_env] = STATE(146),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(146),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(146),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(146),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(146),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(146),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(146),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(146),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(146),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(146),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(146),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(146),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(146),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(146),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(146),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [53] = {
    [anon_sym_tag] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [54] = {
    [sym__common] = STATE(149),
    [sym__math_mode_common] = STATE(149),
    [sym__math_mode] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_math_env] = STATE(149),
    [sym_tag] = STATE(149),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(149),
    [sym_opt_math_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [55] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(150),
    [sym_parameter] = STATE(61),
    [sym_math_env] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(61),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(61),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(61),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(61),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(61),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_text] = ACTIONS(73),
  },
  [56] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(219),
  },
  [57] = {
    [sym_math_text_group] = STATE(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(221),
  },
  [58] = {
    [sym__common] = STATE(156),
    [sym__math_mode_common] = STATE(156),
    [sym__math_mode] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_math_env] = STATE(156),
    [sym_tag] = STATE(156),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(156),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(155),
    [sym_end_token] = STATE(77),
    [sym_include] = STATE(156),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(156),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(156),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(156),
    [sym_opt_math_group] = STATE(156),
    [sym_token] = STATE(156),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [59] = {
    [sym_simple_text_group] = STATE(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [60] = {
    [sym__common] = STATE(158),
    [sym__math_mode_common] = STATE(158),
    [sym__math_mode] = STATE(158),
    [sym_parameter] = STATE(158),
    [sym_math_env] = STATE(158),
    [sym_tag] = STATE(158),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(158),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(158),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(158),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(158),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(158),
    [sym_opt_math_group] = STATE(158),
    [sym_token] = STATE(158),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(157),
    [aux_sym_math_mode_repeat1] = STATE(158),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [61] = {
    [sym__common] = STATE(159),
    [sym__math_mode_common] = STATE(159),
    [sym__math_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_math_env] = STATE(159),
    [sym_tag] = STATE(159),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(159),
    [sym_opt_math_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_text] = ACTIONS(231),
  },
  [62] = {
    [sym_verb_body] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [63] = {
    [sym_verb_delim] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [64] = {
    [sym_end_display_math] = STATE(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
  },
  [65] = {
    [sym__common] = STATE(164),
    [sym__math_mode_common] = STATE(164),
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_env] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(164),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(164),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(164),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(164),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(164),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(239),
    [sym_active_char] = ACTIONS(239),
    [sym_text] = ACTIONS(239),
  },
  [66] = {
    [sym_end_inline_math] = STATE(166),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
  },
  [67] = {
    [sym_display_math_end] = STATE(167),
    [sym_end_token] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
  },
  [68] = {
    [sym_inline_math_end] = STATE(169),
    [sym_end_token] = STATE(170),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
  },
  [69] = {
    [anon_sym_end] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [70] = {
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
  [71] = {
    [sym_verbatim_end] = STATE(172),
    [sym_end_token] = STATE(72),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
  },
  [72] = {
    [sym_verbatim_env_group] = STATE(174),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(247),
  },
  [73] = {
    [aux_sym_verbatim_text_repeat1] = STATE(176),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(251),
  },
  [74] = {
    [aux_sym_verbatim_text_repeat1] = STATE(73),
    [aux_sym_verbatim_text_repeat2] = STATE(177),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(87),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(253),
    [sym__end_of_line] = ACTIONS(255),
  },
  [75] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(257),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [anon_sym_makeatletter] = ACTIONS(59),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [76] = {
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
  [77] = {
    [sym_simple_text_group] = STATE(178),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [78] = {
    [sym__common] = STATE(180),
    [sym__text_mode_common] = STATE(180),
    [sym_inline_verbatim] = STATE(180),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(180),
    [sym_text_mode_at_region] = STATE(180),
    [sym_parameter] = STATE(180),
    [sym_text_env] = STATE(180),
    [sym__display_math] = STATE(180),
    [sym_tex_display_math] = STATE(180),
    [sym_latex_display_math] = STATE(180),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(180),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(180),
    [sym_tex_inline_math] = STATE(180),
    [sym_latex_inline_math] = STATE(180),
    [sym_inline_math_env] = STATE(180),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(180),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(179),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(180),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(180),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(180),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(180),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(180),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(180),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(180),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(180),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(180),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(180),
    [sym_opt_text_group] = STATE(180),
    [sym_token] = STATE(180),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(180),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [79] = {
    [sym_display_math_env_name] = ACTIONS(263),
    [sym_inline_math_env_name] = ACTIONS(265),
    [sym_verbatim_env_name] = ACTIONS(267),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(269),
  },
  [80] = {
    [sym_text_group] = STATE(187),
    [sym_opt_text_group] = STATE(188),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(273),
  },
  [81] = {
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [82] = {
    [sym_text_group] = STATE(190),
    [sym_opt_text_group] = STATE(191),
    [sym_begin_opt] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(277),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(279),
    [sym_math_shift] = ACTIONS(279),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(279),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [sym_text] = ACTIONS(279),
  },
  [84] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(281),
  },
  [85] = {
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
  [86] = {
    [sym_simple_text_group] = STATE(193),
    [sym__whitespace] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [87] = {
    [sym__common] = STATE(196),
    [sym__text_mode_common] = STATE(196),
    [sym_inline_verbatim] = STATE(196),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(196),
    [sym_text_mode_at_region] = STATE(196),
    [sym_parameter] = STATE(196),
    [sym_text_env] = STATE(196),
    [sym__display_math] = STATE(196),
    [sym_tex_display_math] = STATE(196),
    [sym_latex_display_math] = STATE(196),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(196),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(196),
    [sym_tex_inline_math] = STATE(196),
    [sym_latex_inline_math] = STATE(196),
    [sym_inline_math_env] = STATE(196),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(196),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(196),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(196),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(196),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(196),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(196),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(196),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(196),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(196),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(196),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(196),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(196),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(196),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(196),
    [sym_opt_text_group] = STATE(196),
    [sym_token] = STATE(196),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(195),
    [aux_sym_text_mode_repeat1] = STATE(196),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(289),
    [sym_text] = ACTIONS(289),
  },
  [88] = {
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
  [89] = {
    [sym_simple_text_group] = STATE(198),
    [sym__whitespace] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(295),
    [sym_begin_group] = ACTIONS(295),
    [sym_end_group] = ACTIONS(295),
    [sym_math_shift] = ACTIONS(295),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(295),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_end_group] = ACTIONS(297),
    [sym_math_shift] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [92] = {
    [sym_text_group] = STATE(200),
    [sym__whitespace] = ACTIONS(299),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [93] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(305),
    [sym_end_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(305),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(307),
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
  [97] = {
    [sym_text_group] = STATE(204),
    [sym__whitespace] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(311),
    [sym_end_group] = ACTIONS(311),
    [sym_math_shift] = ACTIONS(311),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_active_char] = ACTIONS(311),
    [sym_text] = ACTIONS(311),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_end_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [100] = {
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
  [101] = {
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
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [anon_sym_makeatother] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(319),
  },
  [102] = {
    [sym__common] = STATE(209),
    [sym__text_mode_common] = STATE(209),
    [sym_inline_verbatim] = STATE(209),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(209),
    [sym_parameter] = STATE(209),
    [sym_text_env_at] = STATE(209),
    [sym__display_math_at] = STATE(209),
    [sym_tex_display_math_at] = STATE(209),
    [sym_latex_display_math_at] = STATE(209),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(209),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(209),
    [sym_tex_inline_math_at] = STATE(209),
    [sym_latex_inline_math_at] = STATE(209),
    [sym_inline_math_env_at] = STATE(209),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(209),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(209),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(209),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(209),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(209),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(209),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(209),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(209),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(209),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(209),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(209),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(209),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(209),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(209),
    [sym_opt_text_group_at] = STATE(209),
    [sym_token_at] = STATE(209),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(209),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(325),
    [sym_text] = ACTIONS(325),
  },
  [103] = {
    [sym__common] = STATE(217),
    [sym__math_mode_common] = STATE(217),
    [sym__math_mode_at] = STATE(217),
    [sym_math_mode_at] = STATE(213),
    [sym_parameter] = STATE(217),
    [sym_math_env_at] = STATE(217),
    [sym_tag_at] = STATE(217),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(217),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(217),
    [sym_opt_math_group_at] = STATE(217),
    [sym_token_at] = STATE(217),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [104] = {
    [sym_makeatother] = STATE(219),
    [sym_makeatother_token] = STATE(119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(335),
  },
  [105] = {
    [sym__common] = STATE(221),
    [sym__math_mode_common] = STATE(221),
    [sym__math_mode_at] = STATE(221),
    [sym_math_mode_at] = STATE(220),
    [sym_parameter] = STATE(221),
    [sym_math_env_at] = STATE(221),
    [sym_tag_at] = STATE(221),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(221),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(221),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(221),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(221),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(221),
    [sym_opt_math_group_at] = STATE(221),
    [sym_token_at] = STATE(221),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(221),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [106] = {
    [sym__common] = STATE(221),
    [sym__math_mode_common] = STATE(221),
    [sym__math_mode_at] = STATE(221),
    [sym_math_mode_at] = STATE(222),
    [sym_parameter] = STATE(221),
    [sym_math_env_at] = STATE(221),
    [sym_tag_at] = STATE(221),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(221),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(221),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(221),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(221),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(221),
    [sym_opt_math_group_at] = STATE(221),
    [sym_token_at] = STATE(221),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(221),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [107] = {
    [sym__common] = STATE(221),
    [sym__math_mode_common] = STATE(221),
    [sym__math_mode_at] = STATE(221),
    [sym_math_mode_at] = STATE(223),
    [sym_parameter] = STATE(221),
    [sym_math_env_at] = STATE(221),
    [sym_tag_at] = STATE(221),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(221),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(221),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(221),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(221),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(221),
    [sym_opt_math_group_at] = STATE(221),
    [sym_token_at] = STATE(221),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(221),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [108] = {
    [sym__common] = STATE(221),
    [sym__math_mode_common] = STATE(221),
    [sym__math_mode_at] = STATE(221),
    [sym_math_mode_at] = STATE(224),
    [sym_parameter] = STATE(221),
    [sym_math_env_at] = STATE(221),
    [sym_tag_at] = STATE(221),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(221),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(221),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(221),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(221),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(221),
    [sym_opt_math_group_at] = STATE(221),
    [sym_token_at] = STATE(221),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(221),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [109] = {
    [sym__common] = STATE(227),
    [sym__text_mode_common] = STATE(227),
    [sym_inline_verbatim] = STATE(227),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(227),
    [sym_parameter] = STATE(227),
    [sym_text_env_at] = STATE(227),
    [sym__display_math_at] = STATE(227),
    [sym_tex_display_math_at] = STATE(227),
    [sym_latex_display_math_at] = STATE(227),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(227),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(227),
    [sym_tex_inline_math_at] = STATE(227),
    [sym_latex_inline_math_at] = STATE(227),
    [sym_inline_math_env_at] = STATE(227),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(227),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(227),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_end] = STATE(226),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(227),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(227),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(227),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(227),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(227),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(227),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(227),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(227),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(227),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(227),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(227),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(227),
    [sym_opt_text_group_at] = STATE(227),
    [sym_token_at] = STATE(227),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(227),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(339),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [110] = {
    [sym_display_math_env_group] = STATE(228),
    [sym_inline_math_env_group] = STATE(81),
    [sym_verbatim_env_group] = STATE(82),
    [sym_simple_text_group] = STATE(83),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [111] = {
    [sym_text_group_at] = STATE(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [112] = {
    [sym_text_group_at] = STATE(230),
    [sym_opt_text_group_at] = STATE(231),
    [sym_begin_opt] = STATE(232),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [113] = {
    [sym_text_group_at] = STATE(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [114] = {
    [sym_text_group_at] = STATE(234),
    [sym_opt_text_group_at] = STATE(235),
    [sym_begin_opt] = STATE(232),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [115] = {
    [sym_text_group_at] = STATE(236),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [116] = {
    [sym_text_group_at] = STATE(237),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [117] = {
    [sym_text_group_at] = STATE(238),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_text] = ACTIONS(343),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [120] = {
    [sym__common] = STATE(240),
    [sym__text_mode_common] = STATE(240),
    [sym_inline_verbatim] = STATE(240),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_text_env_at] = STATE(240),
    [sym__display_math_at] = STATE(240),
    [sym_tex_display_math_at] = STATE(240),
    [sym_latex_display_math_at] = STATE(240),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(240),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(240),
    [sym_tex_inline_math_at] = STATE(240),
    [sym_latex_inline_math_at] = STATE(240),
    [sym_inline_math_env_at] = STATE(240),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(240),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(240),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(240),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(240),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(240),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(240),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(240),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(240),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(240),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(240),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(240),
    [sym_opt_text_group_at] = STATE(240),
    [sym_token_at] = STATE(240),
    [sym_begin_opt] = STATE(120),
    [sym_end_opt] = STATE(239),
    [aux_sym_text_mode_at_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [121] = {
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
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(241),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(353),
    [sym_begin_group] = ACTIONS(353),
    [sym_end_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(353),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(353),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(353),
    [sym_active_char] = ACTIONS(353),
    [sym_text] = ACTIONS(353),
  },
  [123] = {
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
  [124] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(242),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(357),
    [sym_text] = ACTIONS(357),
  },
  [125] = {
    [sym__common] = STATE(125),
    [sym__text_mode_common] = STATE(125),
    [sym_inline_verbatim] = STATE(125),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(125),
    [sym_text_mode_at_region] = STATE(125),
    [sym_parameter] = STATE(125),
    [sym_text_env] = STATE(125),
    [sym__display_math] = STATE(125),
    [sym_tex_display_math] = STATE(125),
    [sym_latex_display_math] = STATE(125),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(125),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(125),
    [sym_tex_inline_math] = STATE(125),
    [sym_latex_inline_math] = STATE(125),
    [sym_inline_math_env] = STATE(125),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(125),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(125),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(125),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(125),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(125),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(125),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(125),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(125),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(125),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(125),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(125),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(125),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(125),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(125),
    [sym_opt_text_group] = STATE(125),
    [sym_token] = STATE(125),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(125),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(364),
    [sym_begin_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(370),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [126] = {
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
  [127] = {
    [aux_sym_parameter_repeat1] = STATE(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(384),
    [sym_number] = ACTIONS(387),
  },
  [128] = {
    [sym_verb_delim] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [130] = {
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(393),
    [sym_begin_group] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(393),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(393),
    [sym_text] = ACTIONS(393),
  },
  [131] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(395),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(397),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(399),
  },
  [134] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(401),
  },
  [135] = {
    [sym__whitespace] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(405),
  },
  [136] = {
    [anon_sym_STAR] = ACTIONS(407),
    [sym__whitespace] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(405),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(409),
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
  [138] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(411),
  },
  [139] = {
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(413),
  },
  [140] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(415),
  },
  [141] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(417),
  },
  [142] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(419),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_math_shift] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [144] = {
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
  [145] = {
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
  [146] = {
    [sym__common] = STATE(146),
    [sym__text_mode_common] = STATE(146),
    [sym_inline_verbatim] = STATE(146),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(146),
    [sym_text_mode_at_region] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_env] = STATE(146),
    [sym__display_math] = STATE(146),
    [sym_tex_display_math] = STATE(146),
    [sym_latex_display_math] = STATE(146),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(146),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(146),
    [sym_tex_inline_math] = STATE(146),
    [sym_latex_inline_math] = STATE(146),
    [sym_inline_math_env] = STATE(146),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(146),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(146),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(146),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(146),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(146),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(146),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(146),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(146),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(146),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(146),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(146),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(146),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(146),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(146),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(364),
    [sym_begin_group] = ACTIONS(367),
    [sym_end_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(370),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [147] = {
    [sym__whitespace] = ACTIONS(430),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(432),
  },
  [148] = {
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(434),
    [sym_begin_group] = ACTIONS(434),
    [sym_end_group] = ACTIONS(434),
    [sym_math_shift] = ACTIONS(434),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_text] = ACTIONS(434),
  },
  [149] = {
    [sym__common] = STATE(248),
    [sym__math_mode_common] = STATE(248),
    [sym__math_mode] = STATE(248),
    [sym_parameter] = STATE(248),
    [sym_math_env] = STATE(248),
    [sym_tag] = STATE(248),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(248),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(248),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(248),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(248),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(248),
    [sym_opt_math_group] = STATE(248),
    [sym_token] = STATE(248),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(248),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(436),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(438),
    [sym_subscript] = ACTIONS(438),
    [sym_active_char] = ACTIONS(438),
    [sym_text] = ACTIONS(438),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(440),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(442),
    [sym_begin_group] = ACTIONS(442),
    [sym_end_group] = ACTIONS(442),
    [sym_math_shift] = ACTIONS(442),
    [sym_alignment_tab] = ACTIONS(442),
    [sym_parameter_char] = ACTIONS(442),
    [sym_superscript] = ACTIONS(442),
    [sym_subscript] = ACTIONS(442),
    [sym_active_char] = ACTIONS(442),
    [sym_text] = ACTIONS(442),
  },
  [152] = {
    [sym__common] = STATE(252),
    [sym__text_mode_common] = STATE(252),
    [sym_inline_verbatim] = STATE(252),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(252),
    [sym_text_mode] = STATE(251),
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
    [aux_sym_text_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(444),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(446),
    [sym_text] = ACTIONS(446),
  },
  [153] = {
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
  [154] = {
    [anon_sym_tag] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(257),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [155] = {
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
  [156] = {
    [sym__common] = STATE(164),
    [sym__math_mode_common] = STATE(164),
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_env] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(164),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(253),
    [sym_end_token] = STATE(77),
    [sym_include] = STATE(164),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(164),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(164),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(164),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(239),
    [sym_active_char] = ACTIONS(239),
    [sym_text] = ACTIONS(239),
  },
  [157] = {
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(452),
    [sym_end_group] = ACTIONS(452),
    [sym_math_shift] = ACTIONS(452),
    [sym_alignment_tab] = ACTIONS(452),
    [sym_parameter_char] = ACTIONS(452),
    [sym_superscript] = ACTIONS(452),
    [sym_subscript] = ACTIONS(452),
    [sym_active_char] = ACTIONS(452),
    [sym_text] = ACTIONS(452),
  },
  [158] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env] = STATE(255),
    [sym_tag] = STATE(255),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(255),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(255),
    [sym_opt_math_group] = STATE(255),
    [sym_token] = STATE(255),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(254),
    [aux_sym_math_mode_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(454),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(454),
    [sym_subscript] = ACTIONS(454),
    [sym_active_char] = ACTIONS(454),
    [sym_text] = ACTIONS(454),
  },
  [159] = {
    [sym__common] = STATE(159),
    [sym__math_mode_common] = STATE(159),
    [sym__math_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_math_env] = STATE(159),
    [sym_tag] = STATE(159),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(159),
    [sym_opt_math_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(462),
    [sym_math_shift] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(467),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(467),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(467),
    [sym_text] = ACTIONS(467),
  },
  [160] = {
    [sym_verb_delim] = ACTIONS(473),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [161] = {
    [sym_verb_body] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [162] = {
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [163] = {
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
  [164] = {
    [sym__common] = STATE(164),
    [sym__math_mode_common] = STATE(164),
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_env] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(164),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(164),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(164),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(164),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(164),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_text] = ACTIONS(481),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(486),
    [sym_end_group] = ACTIONS(486),
    [sym_math_shift] = ACTIONS(486),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(486),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(486),
    [sym_active_char] = ACTIONS(486),
    [sym_text] = ACTIONS(486),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(488),
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
  [168] = {
    [sym_display_math_env_group] = STATE(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(490),
  },
  [169] = {
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
  [170] = {
    [sym_inline_math_env_group] = STATE(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(494),
  },
  [171] = {
    [sym__whitespace] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(498),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(500),
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
  [173] = {
    [sym_verbatim_env_name] = ACTIONS(502),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(504),
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
  [175] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(506),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(508),
    [sym__end_of_line] = ACTIONS(508),
  },
  [176] = {
    [aux_sym_verbatim_text_repeat1] = STATE(176),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(510),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(513),
  },
  [177] = {
    [aux_sym_verbatim_text_repeat1] = STATE(73),
    [aux_sym_verbatim_text_repeat2] = STATE(177),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(515),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(508),
    [sym__end_of_line] = ACTIONS(518),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(521),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(521),
    [sym_alignment_tab] = ACTIONS(521),
    [sym_parameter_char] = ACTIONS(521),
    [sym_superscript] = ACTIONS(521),
    [sym_subscript] = ACTIONS(521),
    [sym_active_char] = ACTIONS(521),
    [sym_text] = ACTIONS(521),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(523),
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
    [sym_active_char] = ACTIONS(523),
    [sym_text] = ACTIONS(523),
  },
  [180] = {
    [sym__common] = STATE(180),
    [sym__text_mode_common] = STATE(180),
    [sym_inline_verbatim] = STATE(180),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(180),
    [sym_text_mode_at_region] = STATE(180),
    [sym_parameter] = STATE(180),
    [sym_text_env] = STATE(180),
    [sym__display_math] = STATE(180),
    [sym_tex_display_math] = STATE(180),
    [sym_latex_display_math] = STATE(180),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(180),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(180),
    [sym_tex_inline_math] = STATE(180),
    [sym_latex_inline_math] = STATE(180),
    [sym_inline_math_env] = STATE(180),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(180),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(180),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(180),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(180),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(180),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(180),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(180),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(180),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(180),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(180),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(180),
    [sym_opt_text_group] = STATE(180),
    [sym_token] = STATE(180),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(180),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(364),
    [sym_begin_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(370),
    [sym_alignment_tab] = ACTIONS(525),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(525),
    [sym_text] = ACTIONS(525),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(528),
  },
  [182] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(530),
  },
  [183] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(532),
  },
  [184] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(534),
  },
  [185] = {
    [sym__common] = STATE(271),
    [sym__text_mode_common] = STATE(271),
    [sym_inline_verbatim] = STATE(271),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(271),
    [sym_text_mode_at_region] = STATE(271),
    [sym_parameter] = STATE(271),
    [sym_text_env] = STATE(271),
    [sym__display_math] = STATE(271),
    [sym_tex_display_math] = STATE(271),
    [sym_latex_display_math] = STATE(271),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(271),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(271),
    [sym_tex_inline_math] = STATE(271),
    [sym_latex_inline_math] = STATE(271),
    [sym_inline_math_env] = STATE(271),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(271),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(271),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(271),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(271),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(271),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(271),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(271),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(271),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(271),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(271),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(271),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(271),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(271),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(271),
    [sym_opt_text_group] = STATE(271),
    [sym_token] = STATE(271),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(271),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(536),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(538),
    [sym_text] = ACTIONS(538),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(540),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(540),
    [sym_begin_group] = ACTIONS(540),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(540),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_text] = ACTIONS(540),
  },
  [187] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(542),
  },
  [188] = {
    [sym_text_group] = STATE(274),
    [sym__whitespace] = ACTIONS(544),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(542),
  },
  [189] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(546),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(548),
    [sym__end_of_line] = ACTIONS(548),
  },
  [190] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(550),
  },
  [191] = {
    [sym_text_group] = STATE(277),
    [sym__whitespace] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(550),
  },
  [192] = {
    [sym_simple_text_group] = STATE(278),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [193] = {
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
  [194] = {
    [sym__whitespace] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(353),
    [sym__end_of_line] = ACTIONS(353),
  },
  [195] = {
    [sym__whitespace] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(355),
    [sym__end_of_line] = ACTIONS(355),
  },
  [196] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(279),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(357),
    [sym_text] = ACTIONS(357),
  },
  [197] = {
    [sym_simple_text_group] = STATE(280),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(99),
  },
  [198] = {
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
  [199] = {
    [sym_text_group] = STATE(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [200] = {
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
  [201] = {
    [anon_sym_EQ] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [202] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(560),
  },
  [203] = {
    [sym_text_group] = STATE(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [204] = {
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
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym__whitespace] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(564),
    [sym_begin_group] = ACTIONS(564),
    [sym_end_group] = ACTIONS(564),
    [sym_math_shift] = ACTIONS(564),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(564),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_text] = ACTIONS(568),
  },
  [206] = {
    [sym__whitespace] = ACTIONS(570),
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
    [sym_text] = ACTIONS(574),
  },
  [207] = {
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
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(319),
  },
  [208] = {
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
  [209] = {
    [sym__common] = STATE(287),
    [sym__text_mode_common] = STATE(287),
    [sym_inline_verbatim] = STATE(287),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_text_env_at] = STATE(287),
    [sym__display_math_at] = STATE(287),
    [sym_tex_display_math_at] = STATE(287),
    [sym_latex_display_math_at] = STATE(287),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(287),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(287),
    [sym_tex_inline_math_at] = STATE(287),
    [sym_latex_inline_math_at] = STATE(287),
    [sym_inline_math_env_at] = STATE(287),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(287),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(287),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(287),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(287),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(287),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(287),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(287),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(287),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(287),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(287),
    [sym_opt_text_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(578),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [210] = {
    [anon_sym_tag] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(319),
  },
  [211] = {
    [sym__common] = STATE(289),
    [sym__math_mode_common] = STATE(289),
    [sym__math_mode_at] = STATE(289),
    [sym_parameter] = STATE(289),
    [sym_math_env_at] = STATE(289),
    [sym_tag_at] = STATE(289),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(289),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(289),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(289),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(289),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(289),
    [sym_opt_math_group_at] = STATE(289),
    [sym_token_at] = STATE(289),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(289),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [212] = {
    [sym__common] = STATE(217),
    [sym__math_mode_common] = STATE(217),
    [sym__math_mode_at] = STATE(217),
    [sym_math_mode_at] = STATE(290),
    [sym_parameter] = STATE(217),
    [sym_math_env_at] = STATE(217),
    [sym_tag_at] = STATE(217),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(217),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(217),
    [sym_opt_math_group_at] = STATE(217),
    [sym_token_at] = STATE(217),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [213] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(586),
  },
  [214] = {
    [sym_math_text_group_at] = STATE(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(588),
  },
  [215] = {
    [sym__common] = STATE(296),
    [sym__math_mode_common] = STATE(296),
    [sym__math_mode_at] = STATE(296),
    [sym_parameter] = STATE(296),
    [sym_math_env_at] = STATE(296),
    [sym_tag_at] = STATE(296),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(296),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(295),
    [sym_end_token] = STATE(77),
    [sym_include_at] = STATE(296),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(296),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(296),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(296),
    [sym_opt_math_group_at] = STATE(296),
    [sym_token_at] = STATE(296),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(296),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(592),
    [sym_subscript] = ACTIONS(592),
    [sym_active_char] = ACTIONS(592),
    [sym_text] = ACTIONS(592),
  },
  [216] = {
    [sym__common] = STATE(298),
    [sym__math_mode_common] = STATE(298),
    [sym__math_mode_at] = STATE(298),
    [sym_parameter] = STATE(298),
    [sym_math_env_at] = STATE(298),
    [sym_tag_at] = STATE(298),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(298),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(298),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(298),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(298),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(298),
    [sym_opt_math_group_at] = STATE(298),
    [sym_token_at] = STATE(298),
    [sym_begin_opt] = STATE(216),
    [sym_end_opt] = STATE(297),
    [aux_sym_math_mode_at_repeat1] = STATE(298),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [217] = {
    [sym__common] = STATE(299),
    [sym__math_mode_common] = STATE(299),
    [sym__math_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_math_env_at] = STATE(299),
    [sym_tag_at] = STATE(299),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(299),
    [sym_opt_math_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [218] = {
    [anon_sym_makeatother] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(602),
    [sym_begin_group] = ACTIONS(602),
    [sym_end_group] = ACTIONS(602),
    [sym_math_shift] = ACTIONS(602),
    [sym_alignment_tab] = ACTIONS(602),
    [sym_parameter_char] = ACTIONS(602),
    [sym_superscript] = ACTIONS(602),
    [sym_subscript] = ACTIONS(602),
    [sym_active_char] = ACTIONS(602),
    [sym_text] = ACTIONS(602),
  },
  [220] = {
    [sym_end_display_math] = STATE(300),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
  },
  [221] = {
    [sym__common] = STATE(301),
    [sym__math_mode_common] = STATE(301),
    [sym__math_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_math_env_at] = STATE(301),
    [sym_tag_at] = STATE(301),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(301),
    [sym_opt_math_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(301),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(596),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(604),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [sym_text] = ACTIONS(604),
  },
  [222] = {
    [sym_end_inline_math] = STATE(302),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(241),
  },
  [223] = {
    [sym_display_math_end] = STATE(303),
    [sym_end_token] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
  },
  [224] = {
    [sym_inline_math_end] = STATE(304),
    [sym_end_token] = STATE(170),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
  },
  [225] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(257),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(319),
  },
  [226] = {
    [anon_sym_LBRACK] = ACTIONS(606),
    [anon_sym_RBRACK] = ACTIONS(606),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(606),
    [sym_begin_group] = ACTIONS(606),
    [sym_end_group] = ACTIONS(606),
    [sym_math_shift] = ACTIONS(606),
    [sym_alignment_tab] = ACTIONS(606),
    [sym_parameter_char] = ACTIONS(606),
    [sym_superscript] = ACTIONS(606),
    [sym_subscript] = ACTIONS(606),
    [sym_active_char] = ACTIONS(606),
    [sym_text] = ACTIONS(606),
  },
  [227] = {
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
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_end] = STATE(305),
    [sym_end_token] = STATE(77),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(241),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(339),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [228] = {
    [sym_text_group_at] = STATE(308),
    [sym_opt_text_group_at] = STATE(309),
    [sym_begin_opt] = STATE(232),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(608),
    [sym__end_of_line] = ACTIONS(610),
  },
  [229] = {
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
  [230] = {
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
  [231] = {
    [sym_text_group_at] = STATE(311),
    [sym__whitespace] = ACTIONS(616),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [232] = {
    [sym__common] = STATE(313),
    [sym__text_mode_common] = STATE(313),
    [sym_inline_verbatim] = STATE(313),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(313),
    [sym_parameter] = STATE(313),
    [sym_text_env_at] = STATE(313),
    [sym__display_math_at] = STATE(313),
    [sym_tex_display_math_at] = STATE(313),
    [sym_latex_display_math_at] = STATE(313),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(313),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(313),
    [sym_tex_inline_math_at] = STATE(313),
    [sym_latex_inline_math_at] = STATE(313),
    [sym_inline_math_env_at] = STATE(313),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(313),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(313),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(313),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(313),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(313),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(313),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(313),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(313),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(313),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(313),
    [sym_opt_text_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(120),
    [sym_end_opt] = STATE(312),
    [aux_sym_text_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(618),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(618),
    [sym_text] = ACTIONS(618),
  },
  [233] = {
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
  [234] = {
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_end_group] = ACTIONS(622),
    [sym_math_shift] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(622),
    [sym_superscript] = ACTIONS(622),
    [sym_subscript] = ACTIONS(622),
    [sym_active_char] = ACTIONS(622),
    [sym_text] = ACTIONS(622),
  },
  [235] = {
    [sym_text_group_at] = STATE(315),
    [sym__whitespace] = ACTIONS(624),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [236] = {
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
  [237] = {
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
  [238] = {
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
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(632),
    [sym_begin_group] = ACTIONS(632),
    [sym_end_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(632),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(632),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [240] = {
    [sym__common] = STATE(317),
    [sym__text_mode_common] = STATE(317),
    [sym_inline_verbatim] = STATE(317),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(317),
    [sym_parameter] = STATE(317),
    [sym_text_env_at] = STATE(317),
    [sym__display_math_at] = STATE(317),
    [sym_tex_display_math_at] = STATE(317),
    [sym_latex_display_math_at] = STATE(317),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(317),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(317),
    [sym_tex_inline_math_at] = STATE(317),
    [sym_latex_inline_math_at] = STATE(317),
    [sym_inline_math_env_at] = STATE(317),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(317),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(317),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(317),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(317),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(317),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(317),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(317),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(317),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(317),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(317),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(317),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(317),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(317),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(317),
    [sym_opt_text_group_at] = STATE(317),
    [sym_token_at] = STATE(317),
    [sym_begin_opt] = STATE(120),
    [sym_end_opt] = STATE(316),
    [aux_sym_text_mode_at_repeat1] = STATE(317),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(634),
    [sym_text] = ACTIONS(634),
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
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(241),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(636),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(642),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(648),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(648),
    [sym_text] = ACTIONS(648),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(657),
    [sym_begin_group] = ACTIONS(657),
    [sym_end_group] = ACTIONS(657),
    [sym_math_shift] = ACTIONS(657),
    [sym_alignment_tab] = ACTIONS(657),
    [sym_parameter_char] = ACTIONS(657),
    [sym_superscript] = ACTIONS(657),
    [sym_subscript] = ACTIONS(657),
    [sym_active_char] = ACTIONS(657),
    [sym_text] = ACTIONS(657),
  },
  [243] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(364),
    [sym_begin_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(370),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [244] = {
    [anon_sym_LBRACK] = ACTIONS(662),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(662),
  },
  [245] = {
    [sym__whitespace] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(662),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(662),
  },
  [246] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(666),
  },
  [247] = {
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
  [248] = {
    [sym__common] = STATE(248),
    [sym__math_mode_common] = STATE(248),
    [sym__math_mode] = STATE(248),
    [sym_parameter] = STATE(248),
    [sym_math_env] = STATE(248),
    [sym_tag] = STATE(248),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(248),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(248),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(248),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(248),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(248),
    [sym_opt_math_group] = STATE(248),
    [sym_token] = STATE(248),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(248),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(462),
    [sym_end_group] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(670),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(670),
    [sym_subscript] = ACTIONS(670),
    [sym_active_char] = ACTIONS(670),
    [sym_text] = ACTIONS(670),
  },
  [249] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(673),
  },
  [250] = {
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
  [251] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(677),
  },
  [252] = {
    [sym__common] = STATE(146),
    [sym__text_mode_common] = STATE(146),
    [sym_inline_verbatim] = STATE(146),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(146),
    [sym_text_mode_at_region] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_env] = STATE(146),
    [sym__display_math] = STATE(146),
    [sym_tex_display_math] = STATE(146),
    [sym_latex_display_math] = STATE(146),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(146),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(146),
    [sym_tex_inline_math] = STATE(146),
    [sym_latex_inline_math] = STATE(146),
    [sym_inline_math_env] = STATE(146),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(146),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(146),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(146),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(146),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(146),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(146),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(146),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(146),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(146),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(146),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(146),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(146),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(146),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(146),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [253] = {
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
  [254] = {
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
  [255] = {
    [sym__common] = STATE(255),
    [sym__math_mode_common] = STATE(255),
    [sym__math_mode] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_math_env] = STATE(255),
    [sym_tag] = STATE(255),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(255),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(255),
    [sym_opt_math_group] = STATE(255),
    [sym_token] = STATE(255),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(683),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(683),
    [sym_active_char] = ACTIONS(683),
    [sym_text] = ACTIONS(683),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(686),
    [sym_begin_group] = ACTIONS(686),
    [sym_end_group] = ACTIONS(686),
    [sym_math_shift] = ACTIONS(686),
    [sym_alignment_tab] = ACTIONS(686),
    [sym_parameter_char] = ACTIONS(686),
    [sym_superscript] = ACTIONS(686),
    [sym_subscript] = ACTIONS(686),
    [sym_active_char] = ACTIONS(686),
    [sym_text] = ACTIONS(686),
  },
  [257] = {
    [sym_verb_delim] = ACTIONS(688),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [sym__whitespace] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_RBRACK] = ACTIONS(690),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(690),
    [sym_begin_group] = ACTIONS(690),
    [sym_end_group] = ACTIONS(690),
    [sym_math_shift] = ACTIONS(690),
    [sym_alignment_tab] = ACTIONS(690),
    [sym_parameter_char] = ACTIONS(690),
    [sym_superscript] = ACTIONS(690),
    [sym_subscript] = ACTIONS(690),
    [sym_active_char] = ACTIONS(690),
    [sym_text] = ACTIONS(694),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [sym__whitespace] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_RBRACK] = ACTIONS(696),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(696),
    [sym_begin_group] = ACTIONS(696),
    [sym_end_group] = ACTIONS(696),
    [sym_math_shift] = ACTIONS(696),
    [sym_alignment_tab] = ACTIONS(696),
    [sym_parameter_char] = ACTIONS(696),
    [sym_superscript] = ACTIONS(696),
    [sym_subscript] = ACTIONS(696),
    [sym_active_char] = ACTIONS(696),
    [sym_text] = ACTIONS(700),
  },
  [260] = {
    [sym_display_math_env_name] = ACTIONS(702),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(704),
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
  [262] = {
    [sym_inline_math_env_name] = ACTIONS(706),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(708),
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
  [264] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(710),
  },
  [265] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(712),
  },
  [266] = {
    [anon_sym_LBRACK] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(714),
    [sym__end_of_line] = ACTIONS(714),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(716),
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
  [268] = {
    [anon_sym_LBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(718),
    [sym__end_of_line] = ACTIONS(718),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(720),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(720),
    [sym_begin_group] = ACTIONS(720),
    [sym_end_group] = ACTIONS(720),
    [sym_math_shift] = ACTIONS(720),
    [sym_alignment_tab] = ACTIONS(720),
    [sym_parameter_char] = ACTIONS(720),
    [sym_superscript] = ACTIONS(720),
    [sym_subscript] = ACTIONS(720),
    [sym_active_char] = ACTIONS(720),
    [sym_text] = ACTIONS(720),
  },
  [270] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(207),
  },
  [271] = {
    [sym__common] = STATE(146),
    [sym__text_mode_common] = STATE(146),
    [sym_inline_verbatim] = STATE(146),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(146),
    [sym_text_mode_at_region] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_env] = STATE(146),
    [sym__display_math] = STATE(146),
    [sym_tex_display_math] = STATE(146),
    [sym_latex_display_math] = STATE(146),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(146),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(146),
    [sym_tex_inline_math] = STATE(146),
    [sym_latex_inline_math] = STATE(146),
    [sym_inline_math_env] = STATE(146),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(146),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(146),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(146),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(146),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(146),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(146),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(146),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(146),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(146),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(146),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(146),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(146),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(146),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(146),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(722),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [272] = {
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(724),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [sym_text] = ACTIONS(724),
  },
  [273] = {
    [sym_text_group] = STATE(328),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(726),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(726),
  },
  [275] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(728),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(730),
    [sym__end_of_line] = ACTIONS(730),
  },
  [276] = {
    [sym_text_group] = STATE(330),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(271),
    [sym__end_of_line] = ACTIONS(732),
  },
  [277] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(732),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(734),
    [sym_math_shift] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [279] = {
    [sym__whitespace] = ACTIONS(657),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(657),
    [sym__end_of_line] = ACTIONS(657),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_end_group] = ACTIONS(736),
    [sym_math_shift] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_active_char] = ACTIONS(736),
    [sym_text] = ACTIONS(736),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(738),
    [anon_sym_LBRACK] = ACTIONS(738),
    [anon_sym_RBRACK] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(738),
    [sym_begin_group] = ACTIONS(738),
    [sym_end_group] = ACTIONS(738),
    [sym_math_shift] = ACTIONS(738),
    [sym_alignment_tab] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(738),
    [sym_superscript] = ACTIONS(738),
    [sym_subscript] = ACTIONS(738),
    [sym_active_char] = ACTIONS(738),
    [sym_text] = ACTIONS(738),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(740),
    [sym_begin_group] = ACTIONS(740),
    [sym_end_group] = ACTIONS(740),
    [sym_math_shift] = ACTIONS(740),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(740),
    [sym_superscript] = ACTIONS(740),
    [sym_subscript] = ACTIONS(740),
    [sym_active_char] = ACTIONS(740),
    [sym_text] = ACTIONS(740),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(742),
    [anon_sym_RBRACK] = ACTIONS(742),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(742),
    [sym_begin_group] = ACTIONS(742),
    [sym_end_group] = ACTIONS(742),
    [sym_math_shift] = ACTIONS(742),
    [sym_alignment_tab] = ACTIONS(742),
    [sym_parameter_char] = ACTIONS(742),
    [sym_superscript] = ACTIONS(742),
    [sym_subscript] = ACTIONS(742),
    [sym_active_char] = ACTIONS(742),
    [sym_text] = ACTIONS(742),
  },
  [284] = {
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
    [sym_superscript] = ACTIONS(744),
    [sym_subscript] = ACTIONS(744),
    [sym_active_char] = ACTIONS(744),
    [sym_text] = ACTIONS(744),
  },
  [285] = {
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
  [286] = {
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
  [287] = {
    [sym__common] = STATE(287),
    [sym__text_mode_common] = STATE(287),
    [sym_inline_verbatim] = STATE(287),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_text_env_at] = STATE(287),
    [sym__display_math_at] = STATE(287),
    [sym_tex_display_math_at] = STATE(287),
    [sym_latex_display_math_at] = STATE(287),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(287),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(287),
    [sym_tex_inline_math_at] = STATE(287),
    [sym_latex_inline_math_at] = STATE(287),
    [sym_inline_math_env_at] = STATE(287),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(287),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(287),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(287),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(287),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(287),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(287),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(287),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(287),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(287),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(287),
    [sym_opt_text_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(636),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(642),
    [sym_end_group] = ACTIONS(750),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(752),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(752),
    [sym_text] = ACTIONS(752),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(755),
    [sym_begin_group] = ACTIONS(755),
    [sym_end_group] = ACTIONS(755),
    [sym_math_shift] = ACTIONS(755),
    [sym_alignment_tab] = ACTIONS(755),
    [sym_parameter_char] = ACTIONS(755),
    [sym_superscript] = ACTIONS(755),
    [sym_subscript] = ACTIONS(755),
    [sym_active_char] = ACTIONS(755),
    [sym_text] = ACTIONS(755),
  },
  [289] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(759),
    [sym_subscript] = ACTIONS(759),
    [sym_active_char] = ACTIONS(759),
    [sym_text] = ACTIONS(759),
  },
  [290] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(761),
  },
  [291] = {
    [anon_sym_LBRACK] = ACTIONS(763),
    [anon_sym_RBRACK] = ACTIONS(763),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(763),
    [sym_begin_group] = ACTIONS(763),
    [sym_end_group] = ACTIONS(763),
    [sym_math_shift] = ACTIONS(763),
    [sym_alignment_tab] = ACTIONS(763),
    [sym_parameter_char] = ACTIONS(763),
    [sym_superscript] = ACTIONS(763),
    [sym_subscript] = ACTIONS(763),
    [sym_active_char] = ACTIONS(763),
    [sym_text] = ACTIONS(763),
  },
  [292] = {
    [sym__common] = STATE(336),
    [sym__text_mode_common] = STATE(336),
    [sym_inline_verbatim] = STATE(336),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(336),
    [sym_text_mode_at] = STATE(335),
    [sym_parameter] = STATE(336),
    [sym_text_env_at] = STATE(336),
    [sym__display_math_at] = STATE(336),
    [sym_tex_display_math_at] = STATE(336),
    [sym_latex_display_math_at] = STATE(336),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(336),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(336),
    [sym_tex_inline_math_at] = STATE(336),
    [sym_latex_inline_math_at] = STATE(336),
    [sym_inline_math_env_at] = STATE(336),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(336),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(336),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(336),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(336),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(336),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(336),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(336),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(336),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(336),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(336),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(336),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(336),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(336),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(336),
    [sym_opt_text_group_at] = STATE(336),
    [sym_token_at] = STATE(336),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(336),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(765),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(767),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(767),
    [sym_text] = ACTIONS(767),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(769),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(769),
    [sym_begin_group] = ACTIONS(769),
    [sym_end_group] = ACTIONS(769),
    [sym_math_shift] = ACTIONS(769),
    [sym_alignment_tab] = ACTIONS(769),
    [sym_parameter_char] = ACTIONS(769),
    [sym_superscript] = ACTIONS(769),
    [sym_subscript] = ACTIONS(769),
    [sym_active_char] = ACTIONS(769),
    [sym_text] = ACTIONS(769),
  },
  [294] = {
    [anon_sym_tag] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(257),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(319),
  },
  [295] = {
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
  [296] = {
    [sym__common] = STATE(301),
    [sym__math_mode_common] = STATE(301),
    [sym__math_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_math_env_at] = STATE(301),
    [sym_tag_at] = STATE(301),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(337),
    [sym_end_token] = STATE(77),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(301),
    [sym_opt_math_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(301),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(604),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [sym_text] = ACTIONS(604),
  },
  [297] = {
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
  [298] = {
    [sym__common] = STATE(339),
    [sym__math_mode_common] = STATE(339),
    [sym__math_mode_at] = STATE(339),
    [sym_parameter] = STATE(339),
    [sym_math_env_at] = STATE(339),
    [sym_tag_at] = STATE(339),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(339),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(339),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(339),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(339),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(339),
    [sym_opt_math_group_at] = STATE(339),
    [sym_token_at] = STATE(339),
    [sym_begin_opt] = STATE(216),
    [sym_end_opt] = STATE(338),
    [aux_sym_math_mode_at_repeat1] = STATE(339),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(775),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(775),
    [sym_subscript] = ACTIONS(775),
    [sym_active_char] = ACTIONS(775),
    [sym_text] = ACTIONS(775),
  },
  [299] = {
    [sym__common] = STATE(299),
    [sym__math_mode_common] = STATE(299),
    [sym__math_mode_at] = STATE(299),
    [sym_parameter] = STATE(299),
    [sym_math_env_at] = STATE(299),
    [sym_tag_at] = STATE(299),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(299),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(299),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(299),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(299),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(299),
    [sym_opt_math_group_at] = STATE(299),
    [sym_token_at] = STATE(299),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(299),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(783),
    [sym_math_shift] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(794),
    [anon_sym_RBRACK] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(794),
    [sym_begin_group] = ACTIONS(794),
    [sym_end_group] = ACTIONS(794),
    [sym_math_shift] = ACTIONS(794),
    [sym_alignment_tab] = ACTIONS(794),
    [sym_parameter_char] = ACTIONS(794),
    [sym_superscript] = ACTIONS(794),
    [sym_subscript] = ACTIONS(794),
    [sym_active_char] = ACTIONS(794),
    [sym_text] = ACTIONS(794),
  },
  [301] = {
    [sym__common] = STATE(301),
    [sym__math_mode_common] = STATE(301),
    [sym__math_mode_at] = STATE(301),
    [sym_parameter] = STATE(301),
    [sym_math_env_at] = STATE(301),
    [sym_tag_at] = STATE(301),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(301),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(301),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(301),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(301),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(301),
    [sym_opt_math_group_at] = STATE(301),
    [sym_token_at] = STATE(301),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(301),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(783),
    [sym_alignment_tab] = ACTIONS(796),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(796),
    [sym_active_char] = ACTIONS(796),
    [sym_text] = ACTIONS(796),
  },
  [302] = {
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
    [sym_superscript] = ACTIONS(799),
    [sym_subscript] = ACTIONS(799),
    [sym_active_char] = ACTIONS(799),
    [sym_text] = ACTIONS(799),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(801),
    [anon_sym_RBRACK] = ACTIONS(801),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(801),
    [sym_begin_group] = ACTIONS(801),
    [sym_end_group] = ACTIONS(801),
    [sym_math_shift] = ACTIONS(801),
    [sym_alignment_tab] = ACTIONS(801),
    [sym_parameter_char] = ACTIONS(801),
    [sym_superscript] = ACTIONS(801),
    [sym_subscript] = ACTIONS(801),
    [sym_active_char] = ACTIONS(801),
    [sym_text] = ACTIONS(801),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(803),
    [anon_sym_RBRACK] = ACTIONS(803),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(803),
    [sym_begin_group] = ACTIONS(803),
    [sym_end_group] = ACTIONS(803),
    [sym_math_shift] = ACTIONS(803),
    [sym_alignment_tab] = ACTIONS(803),
    [sym_parameter_char] = ACTIONS(803),
    [sym_superscript] = ACTIONS(803),
    [sym_subscript] = ACTIONS(803),
    [sym_active_char] = ACTIONS(803),
    [sym_text] = ACTIONS(803),
  },
  [305] = {
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
    [sym_superscript] = ACTIONS(805),
    [sym_subscript] = ACTIONS(805),
    [sym_active_char] = ACTIONS(805),
    [sym_text] = ACTIONS(805),
  },
  [306] = {
    [sym__common] = STATE(341),
    [sym__text_mode_common] = STATE(341),
    [sym_inline_verbatim] = STATE(341),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(341),
    [sym_parameter] = STATE(341),
    [sym_text_env_at] = STATE(341),
    [sym__display_math_at] = STATE(341),
    [sym_tex_display_math_at] = STATE(341),
    [sym_latex_display_math_at] = STATE(341),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(341),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(341),
    [sym_tex_inline_math_at] = STATE(341),
    [sym_latex_inline_math_at] = STATE(341),
    [sym_inline_math_env_at] = STATE(341),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(341),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(341),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(341),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(341),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(341),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(341),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(341),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(341),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(341),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(341),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(341),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(341),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(341),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(341),
    [sym_opt_text_group_at] = STATE(341),
    [sym_token_at] = STATE(341),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(341),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(807),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [307] = {
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
  [308] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(813),
  },
  [309] = {
    [sym_text_group_at] = STATE(344),
    [sym__whitespace] = ACTIONS(815),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(608),
    [sym__end_of_line] = ACTIONS(813),
  },
  [310] = {
    [sym_text_group_at] = STATE(345),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [311] = {
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
  [312] = {
    [sym__whitespace] = ACTIONS(632),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(632),
    [sym__end_of_line] = ACTIONS(632),
  },
  [313] = {
    [sym__common] = STATE(317),
    [sym__text_mode_common] = STATE(317),
    [sym_inline_verbatim] = STATE(317),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(317),
    [sym_parameter] = STATE(317),
    [sym_text_env_at] = STATE(317),
    [sym__display_math_at] = STATE(317),
    [sym_tex_display_math_at] = STATE(317),
    [sym_latex_display_math_at] = STATE(317),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(317),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(317),
    [sym_tex_inline_math_at] = STATE(317),
    [sym_latex_inline_math_at] = STATE(317),
    [sym_inline_math_env_at] = STATE(317),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(317),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(317),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(317),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(317),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(317),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(317),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(317),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(317),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(317),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(317),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(317),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(317),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(317),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(317),
    [sym_opt_text_group_at] = STATE(317),
    [sym_token_at] = STATE(317),
    [sym_begin_opt] = STATE(120),
    [sym_end_opt] = STATE(346),
    [aux_sym_text_mode_at_repeat1] = STATE(317),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(634),
    [sym_text] = ACTIONS(634),
  },
  [314] = {
    [sym_text_group_at] = STATE(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(107),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_RBRACK] = ACTIONS(819),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(819),
    [sym_begin_group] = ACTIONS(819),
    [sym_end_group] = ACTIONS(819),
    [sym_math_shift] = ACTIONS(819),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(819),
    [sym_superscript] = ACTIONS(819),
    [sym_subscript] = ACTIONS(819),
    [sym_active_char] = ACTIONS(819),
    [sym_text] = ACTIONS(819),
  },
  [316] = {
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
    [sym_superscript] = ACTIONS(821),
    [sym_subscript] = ACTIONS(821),
    [sym_active_char] = ACTIONS(821),
    [sym_text] = ACTIONS(821),
  },
  [317] = {
    [sym__common] = STATE(317),
    [sym__text_mode_common] = STATE(317),
    [sym_inline_verbatim] = STATE(317),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(317),
    [sym_parameter] = STATE(317),
    [sym_text_env_at] = STATE(317),
    [sym__display_math_at] = STATE(317),
    [sym_tex_display_math_at] = STATE(317),
    [sym_latex_display_math_at] = STATE(317),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(317),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(317),
    [sym_tex_inline_math_at] = STATE(317),
    [sym_latex_inline_math_at] = STATE(317),
    [sym_inline_math_env_at] = STATE(317),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(317),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(317),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(317),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(317),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(317),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(317),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(317),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(317),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(317),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(317),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(317),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(317),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(317),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(317),
    [sym_opt_text_group_at] = STATE(317),
    [sym_token_at] = STATE(317),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(317),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(642),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(823),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(823),
    [sym_text] = ACTIONS(823),
  },
  [318] = {
    [anon_sym_LBRACK] = ACTIONS(826),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(826),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_RBRACK] = ACTIONS(828),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(828),
    [sym_end_group] = ACTIONS(828),
    [sym_math_shift] = ACTIONS(828),
    [sym_alignment_tab] = ACTIONS(828),
    [sym_parameter_char] = ACTIONS(828),
    [sym_superscript] = ACTIONS(828),
    [sym_subscript] = ACTIONS(828),
    [sym_active_char] = ACTIONS(828),
    [sym_text] = ACTIONS(828),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(830),
    [anon_sym_RBRACK] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(830),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(830),
    [sym_math_shift] = ACTIONS(830),
    [sym_alignment_tab] = ACTIONS(830),
    [sym_parameter_char] = ACTIONS(830),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(830),
    [sym_active_char] = ACTIONS(830),
    [sym_text] = ACTIONS(830),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [anon_sym_LBRACK] = ACTIONS(832),
    [anon_sym_RBRACK] = ACTIONS(832),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(832),
    [sym_begin_group] = ACTIONS(832),
    [sym_end_group] = ACTIONS(832),
    [sym_math_shift] = ACTIONS(832),
    [sym_alignment_tab] = ACTIONS(832),
    [sym_parameter_char] = ACTIONS(832),
    [sym_superscript] = ACTIONS(832),
    [sym_subscript] = ACTIONS(832),
    [sym_active_char] = ACTIONS(832),
    [sym_text] = ACTIONS(832),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(834),
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RBRACK] = ACTIONS(834),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(834),
    [sym_begin_group] = ACTIONS(834),
    [sym_end_group] = ACTIONS(834),
    [sym_math_shift] = ACTIONS(834),
    [sym_alignment_tab] = ACTIONS(834),
    [sym_parameter_char] = ACTIONS(834),
    [sym_superscript] = ACTIONS(834),
    [sym_subscript] = ACTIONS(834),
    [sym_active_char] = ACTIONS(834),
    [sym_text] = ACTIONS(834),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_RBRACK] = ACTIONS(836),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(836),
    [sym_begin_group] = ACTIONS(836),
    [sym_end_group] = ACTIONS(836),
    [sym_math_shift] = ACTIONS(836),
    [sym_alignment_tab] = ACTIONS(836),
    [sym_parameter_char] = ACTIONS(836),
    [sym_superscript] = ACTIONS(836),
    [sym_subscript] = ACTIONS(836),
    [sym_active_char] = ACTIONS(836),
    [sym_text] = ACTIONS(836),
  },
  [324] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(838),
  },
  [325] = {
    [ts_builtin_sym_end] = ACTIONS(718),
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
  [326] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(425),
  },
  [327] = {
    [anon_sym_LBRACK] = ACTIONS(840),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(840),
    [sym_alignment_tab] = ACTIONS(840),
    [sym_parameter_char] = ACTIONS(840),
    [sym_superscript] = ACTIONS(840),
    [sym_subscript] = ACTIONS(840),
    [sym_active_char] = ACTIONS(840),
    [sym_text] = ACTIONS(840),
  },
  [328] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(842),
  },
  [329] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(846),
    [sym__end_of_line] = ACTIONS(846),
  },
  [330] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(848),
  },
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_end_group] = ACTIONS(850),
    [sym_math_shift] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_parameter_char] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_active_char] = ACTIONS(850),
    [sym_text] = ACTIONS(850),
  },
  [332] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(783),
    [sym_end_group] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(852),
    [sym_text] = ACTIONS(852),
  },
  [333] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(855),
  },
  [334] = {
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
    [sym_superscript] = ACTIONS(857),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [sym_text] = ACTIONS(857),
  },
  [335] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(859),
  },
  [336] = {
    [sym__common] = STATE(287),
    [sym__text_mode_common] = STATE(287),
    [sym_inline_verbatim] = STATE(287),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_text_env_at] = STATE(287),
    [sym__display_math_at] = STATE(287),
    [sym_tex_display_math_at] = STATE(287),
    [sym_latex_display_math_at] = STATE(287),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(287),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(287),
    [sym_tex_inline_math_at] = STATE(287),
    [sym_latex_inline_math_at] = STATE(287),
    [sym_inline_math_env_at] = STATE(287),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(287),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(287),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(287),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(287),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(287),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(287),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(287),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(287),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(287),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(287),
    [sym_opt_text_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [337] = {
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(861),
    [sym_begin_group] = ACTIONS(861),
    [sym_end_group] = ACTIONS(861),
    [sym_math_shift] = ACTIONS(861),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(861),
    [sym_superscript] = ACTIONS(861),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [sym_text] = ACTIONS(861),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(863),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(863),
    [sym_begin_group] = ACTIONS(863),
    [sym_end_group] = ACTIONS(863),
    [sym_math_shift] = ACTIONS(863),
    [sym_alignment_tab] = ACTIONS(863),
    [sym_parameter_char] = ACTIONS(863),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(863),
    [sym_active_char] = ACTIONS(863),
    [sym_text] = ACTIONS(863),
  },
  [339] = {
    [sym__common] = STATE(339),
    [sym__math_mode_common] = STATE(339),
    [sym__math_mode_at] = STATE(339),
    [sym_parameter] = STATE(339),
    [sym_math_env_at] = STATE(339),
    [sym_tag_at] = STATE(339),
    [sym_tag_token] = STATE(214),
    [sym_escaped] = STATE(339),
    [sym_begin] = STATE(215),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(339),
    [sym_include_token] = STATE(111),
    [sym_storage] = STATE(339),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(339),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(339),
    [sym_opt_math_group_at] = STATE(339),
    [sym_token_at] = STATE(339),
    [sym_begin_opt] = STATE(216),
    [aux_sym_math_mode_at_repeat1] = STATE(339),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(783),
    [sym_alignment_tab] = ACTIONS(865),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(865),
    [sym_subscript] = ACTIONS(865),
    [sym_active_char] = ACTIONS(865),
    [sym_text] = ACTIONS(865),
  },
  [340] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(576),
  },
  [341] = {
    [sym__common] = STATE(287),
    [sym__text_mode_common] = STATE(287),
    [sym_inline_verbatim] = STATE(287),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_text_env_at] = STATE(287),
    [sym__display_math_at] = STATE(287),
    [sym_tex_display_math_at] = STATE(287),
    [sym_latex_display_math_at] = STATE(287),
    [sym_begin_display_math] = STATE(105),
    [sym_begin_inline_math] = STATE(106),
    [sym_display_math_env_at] = STATE(287),
    [sym_display_math_begin_at] = STATE(107),
    [sym__inline_math_at] = STATE(287),
    [sym_tex_inline_math_at] = STATE(287),
    [sym_latex_inline_math_at] = STATE(287),
    [sym_inline_math_env_at] = STATE(287),
    [sym_inline_math_begin] = STATE(108),
    [sym_verbatim_env] = STATE(287),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(109),
    [sym_begin_token] = STATE(110),
    [sym_documentclass] = STATE(287),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(287),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(111),
    [sym_section_at] = STATE(287),
    [sym_section_token] = STATE(112),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(287),
    [sym_emph_token] = STATE(113),
    [sym_footnote_at] = STATE(287),
    [sym_footnote_token] = STATE(114),
    [sym_textbf_at] = STATE(287),
    [sym_textbf_token] = STATE(115),
    [sym_textit_at] = STATE(287),
    [sym_textit_token] = STATE(116),
    [sym_texttt_at] = STATE(287),
    [sym_texttt_token] = STATE(117),
    [sym_text_group_at] = STATE(287),
    [sym_opt_text_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(120),
    [aux_sym_text_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(868),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [342] = {
    [anon_sym_LBRACK] = ACTIONS(870),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(870),
    [sym_begin_group] = ACTIONS(870),
    [sym_alignment_tab] = ACTIONS(870),
    [sym_parameter_char] = ACTIONS(870),
    [sym_superscript] = ACTIONS(870),
    [sym_subscript] = ACTIONS(870),
    [sym_active_char] = ACTIONS(870),
    [sym_text] = ACTIONS(870),
  },
  [343] = {
    [sym_text_group_at] = STATE(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(608),
    [sym__end_of_line] = ACTIONS(872),
  },
  [344] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(872),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_RBRACK] = ACTIONS(874),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(874),
    [sym_begin_group] = ACTIONS(874),
    [sym_end_group] = ACTIONS(874),
    [sym_math_shift] = ACTIONS(874),
    [sym_alignment_tab] = ACTIONS(874),
    [sym_parameter_char] = ACTIONS(874),
    [sym_superscript] = ACTIONS(874),
    [sym_subscript] = ACTIONS(874),
    [sym_active_char] = ACTIONS(874),
    [sym_text] = ACTIONS(874),
  },
  [346] = {
    [sym__whitespace] = ACTIONS(821),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(821),
    [sym__end_of_line] = ACTIONS(821),
  },
  [347] = {
    [anon_sym_LBRACK] = ACTIONS(876),
    [anon_sym_RBRACK] = ACTIONS(876),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(876),
    [sym_begin_group] = ACTIONS(876),
    [sym_end_group] = ACTIONS(876),
    [sym_math_shift] = ACTIONS(876),
    [sym_alignment_tab] = ACTIONS(876),
    [sym_parameter_char] = ACTIONS(876),
    [sym_superscript] = ACTIONS(876),
    [sym_subscript] = ACTIONS(876),
    [sym_active_char] = ACTIONS(876),
    [sym_text] = ACTIONS(876),
  },
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(714),
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
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(878),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(878),
    [sym_begin_group] = ACTIONS(878),
    [sym_alignment_tab] = ACTIONS(878),
    [sym_parameter_char] = ACTIONS(878),
    [sym_superscript] = ACTIONS(878),
    [sym_subscript] = ACTIONS(878),
    [sym_active_char] = ACTIONS(878),
    [sym_text] = ACTIONS(878),
  },
  [350] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(882),
    [sym__end_of_line] = ACTIONS(882),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_RBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(884),
    [sym_begin_group] = ACTIONS(884),
    [sym_end_group] = ACTIONS(884),
    [sym_math_shift] = ACTIONS(884),
    [sym_alignment_tab] = ACTIONS(884),
    [sym_parameter_char] = ACTIONS(884),
    [sym_superscript] = ACTIONS(884),
    [sym_subscript] = ACTIONS(884),
    [sym_active_char] = ACTIONS(884),
    [sym_text] = ACTIONS(884),
  },
  [352] = {
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_RBRACK] = ACTIONS(886),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(886),
    [sym_begin_group] = ACTIONS(886),
    [sym_end_group] = ACTIONS(886),
    [sym_math_shift] = ACTIONS(886),
    [sym_alignment_tab] = ACTIONS(886),
    [sym_parameter_char] = ACTIONS(886),
    [sym_superscript] = ACTIONS(886),
    [sym_subscript] = ACTIONS(886),
    [sym_active_char] = ACTIONS(886),
    [sym_text] = ACTIONS(886),
  },
  [353] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(748),
  },
  [354] = {
    [anon_sym_LBRACK] = ACTIONS(888),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(888),
    [sym_begin_group] = ACTIONS(888),
    [sym_alignment_tab] = ACTIONS(888),
    [sym_parameter_char] = ACTIONS(888),
    [sym_superscript] = ACTIONS(888),
    [sym_subscript] = ACTIONS(888),
    [sym_active_char] = ACTIONS(888),
    [sym_text] = ACTIONS(888),
  },
  [355] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(890),
  },
  [356] = {
    [anon_sym_LBRACK] = ACTIONS(892),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(892),
    [sym_begin_group] = ACTIONS(892),
    [sym_alignment_tab] = ACTIONS(892),
    [sym_parameter_char] = ACTIONS(892),
    [sym_superscript] = ACTIONS(892),
    [sym_subscript] = ACTIONS(892),
    [sym_active_char] = ACTIONS(892),
    [sym_text] = ACTIONS(892),
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
  [23] = {.count = 1, .reusable = true}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(33),
  [29] = {.count = 1, .reusable = true}, SHIFT(34),
  [31] = {.count = 1, .reusable = true}, SHIFT(35),
  [33] = {.count = 1, .reusable = false}, SHIFT(36),
  [35] = {.count = 1, .reusable = false}, SHIFT(37),
  [37] = {.count = 1, .reusable = false}, SHIFT(38),
  [39] = {.count = 1, .reusable = false}, SHIFT(39),
  [41] = {.count = 1, .reusable = false}, SHIFT(40),
  [43] = {.count = 1, .reusable = false}, SHIFT(41),
  [45] = {.count = 1, .reusable = false}, SHIFT(42),
  [47] = {.count = 1, .reusable = true}, SHIFT(43),
  [49] = {.count = 1, .reusable = false}, SHIFT(44),
  [51] = {.count = 1, .reusable = false}, SHIFT(45),
  [53] = {.count = 1, .reusable = false}, SHIFT(46),
  [55] = {.count = 1, .reusable = false}, SHIFT(47),
  [57] = {.count = 1, .reusable = false}, SHIFT(48),
  [59] = {.count = 1, .reusable = false}, SHIFT(49),
  [61] = {.count = 1, .reusable = false}, SHIFT(50),
  [63] = {.count = 1, .reusable = true}, SHIFT(51),
  [65] = {.count = 1, .reusable = true}, SHIFT(52),
  [67] = {.count = 1, .reusable = true}, SHIFT(53),
  [69] = {.count = 1, .reusable = true}, SHIFT(54),
  [71] = {.count = 1, .reusable = true}, SHIFT(55),
  [73] = {.count = 1, .reusable = true}, SHIFT(61),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [77] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [79] = {.count = 1, .reusable = true}, SHIFT(62),
  [81] = {.count = 1, .reusable = true}, SHIFT(63),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(65),
  [87] = {.count = 1, .reusable = false}, SHIFT(73),
  [89] = {.count = 1, .reusable = true}, SHIFT(69),
  [91] = {.count = 1, .reusable = true}, SHIFT(74),
  [93] = {.count = 1, .reusable = true}, SHIFT(75),
  [95] = {.count = 1, .reusable = true}, SHIFT(78),
  [97] = {.count = 1, .reusable = true}, SHIFT(79),
  [99] = {.count = 1, .reusable = true}, SHIFT(84),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(93),
  [105] = {.count = 1, .reusable = true}, SHIFT(101),
  [107] = {.count = 1, .reusable = true}, SHIFT(102),
  [109] = {.count = 1, .reusable = true}, SHIFT(103),
  [111] = {.count = 1, .reusable = true}, SHIFT(121),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(122),
  [117] = {.count = 1, .reusable = true}, SHIFT(124),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(125),
  [123] = {.count = 1, .reusable = true}, SHIFT(127),
  [125] = {.count = 1, .reusable = true}, SHIFT(126),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(128),
  [131] = {.count = 1, .reusable = false}, SHIFT(129),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [137] = {.count = 1, .reusable = false}, SHIFT(130),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(131),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(132),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(133),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(134),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(135),
  [163] = {.count = 1, .reusable = true}, SHIFT(136),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [169] = {.count = 1, .reusable = false}, SHIFT(137),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(138),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(139),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(140),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(141),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(142),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [195] = {.count = 1, .reusable = false}, SHIFT(143),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [203] = {.count = 1, .reusable = false}, SHIFT(144),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(145),
  [211] = {.count = 1, .reusable = true}, SHIFT(146),
  [213] = {.count = 1, .reusable = false}, SHIFT(147),
  [215] = {.count = 1, .reusable = true}, SHIFT(148),
  [217] = {.count = 1, .reusable = true}, SHIFT(149),
  [219] = {.count = 1, .reusable = true}, SHIFT(151),
  [221] = {.count = 1, .reusable = true}, SHIFT(152),
  [223] = {.count = 1, .reusable = true}, SHIFT(154),
  [225] = {.count = 1, .reusable = true}, SHIFT(156),
  [227] = {.count = 1, .reusable = true}, SHIFT(158),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(159),
  [233] = {.count = 1, .reusable = true}, SHIFT(160),
  [235] = {.count = 1, .reusable = true}, SHIFT(161),
  [237] = {.count = 1, .reusable = true}, SHIFT(162),
  [239] = {.count = 1, .reusable = true}, SHIFT(164),
  [241] = {.count = 1, .reusable = true}, SHIFT(165),
  [243] = {.count = 1, .reusable = true}, SHIFT(171),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(173),
  [249] = {.count = 1, .reusable = false}, SHIFT(176),
  [251] = {.count = 1, .reusable = true}, SHIFT(175),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [255] = {.count = 1, .reusable = true}, SHIFT(177),
  [257] = {.count = 1, .reusable = false}, SHIFT(171),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [261] = {.count = 1, .reusable = true}, SHIFT(180),
  [263] = {.count = 1, .reusable = false}, SHIFT(181),
  [265] = {.count = 1, .reusable = false}, SHIFT(182),
  [267] = {.count = 1, .reusable = false}, SHIFT(183),
  [269] = {.count = 1, .reusable = false}, SHIFT(184),
  [271] = {.count = 1, .reusable = true}, SHIFT(185),
  [273] = {.count = 1, .reusable = true}, SHIFT(186),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(189),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [281] = {.count = 1, .reusable = true}, SHIFT(184),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [285] = {.count = 1, .reusable = true}, SHIFT(192),
  [287] = {.count = 1, .reusable = true}, SHIFT(194),
  [289] = {.count = 1, .reusable = true}, SHIFT(196),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [293] = {.count = 1, .reusable = true}, SHIFT(197),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(199),
  [301] = {.count = 1, .reusable = false}, SHIFT(201),
  [303] = {.count = 1, .reusable = true}, SHIFT(202),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(203),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [317] = {.count = 1, .reusable = false}, SHIFT(205),
  [319] = {.count = 1, .reusable = false}, SHIFT(206),
  [321] = {.count = 1, .reusable = true}, SHIFT(207),
  [323] = {.count = 1, .reusable = true}, SHIFT(208),
  [325] = {.count = 1, .reusable = true}, SHIFT(209),
  [327] = {.count = 1, .reusable = true}, SHIFT(210),
  [329] = {.count = 1, .reusable = true}, SHIFT(211),
  [331] = {.count = 1, .reusable = true}, SHIFT(212),
  [333] = {.count = 1, .reusable = true}, SHIFT(217),
  [335] = {.count = 1, .reusable = true}, SHIFT(218),
  [337] = {.count = 1, .reusable = true}, SHIFT(221),
  [339] = {.count = 1, .reusable = true}, SHIFT(225),
  [341] = {.count = 1, .reusable = true}, SHIFT(227),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [347] = {.count = 1, .reusable = true}, SHIFT(240),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(241),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(243),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(125),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(127),
  [387] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [403] = {.count = 1, .reusable = true}, SHIFT(244),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [407] = {.count = 1, .reusable = true}, SHIFT(245),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(146),
  [430] = {.count = 1, .reusable = true}, SHIFT(246),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [436] = {.count = 1, .reusable = true}, SHIFT(247),
  [438] = {.count = 1, .reusable = true}, SHIFT(248),
  [440] = {.count = 1, .reusable = true}, SHIFT(249),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [444] = {.count = 1, .reusable = true}, SHIFT(250),
  [446] = {.count = 1, .reusable = true}, SHIFT(252),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [454] = {.count = 1, .reusable = true}, SHIFT(255),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [465] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(159),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [473] = {.count = 1, .reusable = true}, SHIFT(256),
  [475] = {.count = 1, .reusable = true}, SHIFT(257),
  [477] = {.count = 1, .reusable = true}, SHIFT(258),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [484] = {.count = 1, .reusable = true}, SHIFT(259),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [490] = {.count = 1, .reusable = true}, SHIFT(260),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [494] = {.count = 1, .reusable = true}, SHIFT(262),
  [496] = {.count = 1, .reusable = true}, SHIFT(264),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [502] = {.count = 1, .reusable = true}, SHIFT(265),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [506] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(176),
  [513] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(73),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(177),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(180),
  [528] = {.count = 1, .reusable = true}, SHIFT(266),
  [530] = {.count = 1, .reusable = true}, SHIFT(267),
  [532] = {.count = 1, .reusable = true}, SHIFT(268),
  [534] = {.count = 1, .reusable = true}, SHIFT(269),
  [536] = {.count = 1, .reusable = true}, SHIFT(270),
  [538] = {.count = 1, .reusable = true}, SHIFT(271),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [542] = {.count = 1, .reusable = true}, SHIFT(272),
  [544] = {.count = 1, .reusable = true}, SHIFT(273),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [550] = {.count = 1, .reusable = true}, SHIFT(275),
  [552] = {.count = 1, .reusable = true}, SHIFT(276),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [560] = {.count = 1, .reusable = true}, SHIFT(282),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [566] = {.count = 1, .reusable = false}, SHIFT(284),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [570] = {.count = 1, .reusable = false}, SHIFT(285),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [578] = {.count = 1, .reusable = true}, SHIFT(286),
  [580] = {.count = 1, .reusable = true}, SHIFT(287),
  [582] = {.count = 1, .reusable = true}, SHIFT(288),
  [584] = {.count = 1, .reusable = true}, SHIFT(289),
  [586] = {.count = 1, .reusable = true}, SHIFT(291),
  [588] = {.count = 1, .reusable = true}, SHIFT(292),
  [590] = {.count = 1, .reusable = true}, SHIFT(294),
  [592] = {.count = 1, .reusable = true}, SHIFT(296),
  [594] = {.count = 1, .reusable = true}, SHIFT(298),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [598] = {.count = 1, .reusable = true}, SHIFT(299),
  [600] = {.count = 1, .reusable = true}, SHIFT(205),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [604] = {.count = 1, .reusable = true}, SHIFT(301),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [608] = {.count = 1, .reusable = true}, SHIFT(306),
  [610] = {.count = 1, .reusable = true}, SHIFT(307),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [616] = {.count = 1, .reusable = true}, SHIFT(310),
  [618] = {.count = 1, .reusable = true}, SHIFT(313),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [624] = {.count = 1, .reusable = true}, SHIFT(314),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [634] = {.count = 1, .reusable = true}, SHIFT(317),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(207),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(102),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(103),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(241),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(243),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [664] = {.count = 1, .reusable = true}, SHIFT(318),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(248),
  [673] = {.count = 1, .reusable = true}, SHIFT(319),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [677] = {.count = 1, .reusable = true}, SHIFT(320),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(255),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [688] = {.count = 1, .reusable = true}, SHIFT(321),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [692] = {.count = 1, .reusable = false}, SHIFT(322),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [698] = {.count = 1, .reusable = false}, SHIFT(323),
  [700] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [702] = {.count = 1, .reusable = true}, SHIFT(324),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [706] = {.count = 1, .reusable = true}, SHIFT(182),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [712] = {.count = 1, .reusable = true}, SHIFT(325),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [722] = {.count = 1, .reusable = true}, SHIFT(326),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [726] = {.count = 1, .reusable = true}, SHIFT(327),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [732] = {.count = 1, .reusable = true}, SHIFT(329),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(287),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [757] = {.count = 1, .reusable = true}, SHIFT(331),
  [759] = {.count = 1, .reusable = true}, SHIFT(332),
  [761] = {.count = 1, .reusable = true}, SHIFT(333),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [765] = {.count = 1, .reusable = true}, SHIFT(334),
  [767] = {.count = 1, .reusable = true}, SHIFT(336),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [775] = {.count = 1, .reusable = true}, SHIFT(339),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(210),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(211),
  [786] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(299),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(301),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [807] = {.count = 1, .reusable = true}, SHIFT(340),
  [809] = {.count = 1, .reusable = true}, SHIFT(341),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [813] = {.count = 1, .reusable = true}, SHIFT(342),
  [815] = {.count = 1, .reusable = true}, SHIFT(343),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(317),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 5),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [838] = {.count = 1, .reusable = true}, SHIFT(348),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [842] = {.count = 1, .reusable = true}, SHIFT(349),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [848] = {.count = 1, .reusable = true}, SHIFT(350),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [852] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(332),
  [855] = {.count = 1, .reusable = true}, SHIFT(351),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [859] = {.count = 1, .reusable = true}, SHIFT(352),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(339),
  [868] = {.count = 1, .reusable = true}, SHIFT(353),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [872] = {.count = 1, .reusable = true}, SHIFT(354),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [880] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [890] = {.count = 1, .reusable = true}, SHIFT(356),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
