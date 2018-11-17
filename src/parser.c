#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 785
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 4
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  sym_implicit_math_shift = 3,
  sym_display_math_shift = 4,
  sym_inline_math_shift = 5,
  aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH = 6,
  sym__whitespace = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_display_math_env_name = 12,
  sym_inline_math_env_name = 13,
  anon_sym_tag = 14,
  aux_sym_SLASH_DOT_SLASH = 15,
  sym_verbatim_env_name = 16,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 17,
  anon_sym_begin = 18,
  anon_sym_end = 19,
  anon_sym_documentclass = 20,
  anon_sym_usepackage = 21,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 22,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 23,
  anon_sym_STAR = 24,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 25,
  anon_sym_EQ = 26,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 27,
  anon_sym_emph = 28,
  anon_sym_footnote = 29,
  anon_sym_textbf = 30,
  anon_sym_textit = 31,
  anon_sym_texttt = 32,
  anon_sym_makeatletter = 33,
  anon_sym_makeatother = 34,
  sym_magic_comment = 35,
  sym_comment = 36,
  sym__escape = 37,
  sym_begin_group = 38,
  sym_end_group = 39,
  sym_math_shift = 40,
  sym_alignment_tab = 41,
  sym__end_of_line = 42,
  sym_parameter_char = 43,
  sym_superscript = 44,
  sym_subscript = 45,
  sym__name = 46,
  sym__name_at = 47,
  sym_active_char = 48,
  sym_text = 49,
  sym_number = 50,
  sym_document = 51,
  sym__common = 52,
  sym__text_mode_common = 53,
  sym_inline_verbatim = 54,
  sym_verb_token = 55,
  sym__text_mode = 56,
  sym_text_mode = 57,
  sym__text_mode_at = 58,
  sym_text_mode_at = 59,
  sym_text_mode_at_region = 60,
  sym__math_mode_common = 61,
  sym__math_mode = 62,
  sym_math_mode = 63,
  sym__math_mode_at = 64,
  sym_math_mode_at = 65,
  sym_parameter = 66,
  sym_text_env = 67,
  sym_text_env_at = 68,
  sym_math_env = 69,
  sym_math_env_at = 70,
  sym__display_math = 71,
  sym__display_math_at = 72,
  sym_tex_display_math = 73,
  sym_tex_display_math_at = 74,
  sym_latex_display_math = 75,
  sym_latex_display_math_at = 76,
  sym_begin_display_math = 77,
  sym_end_display_math = 78,
  sym_begin_inline_math = 79,
  sym_end_inline_math = 80,
  sym_display_math_env = 81,
  sym_display_math_env_at = 82,
  sym_display_math_begin = 83,
  sym_display_math_begin_at = 84,
  sym_display_math_end = 85,
  sym_display_math_env_group = 86,
  sym__inline_math = 87,
  sym__inline_math_at = 88,
  sym_tex_inline_math = 89,
  sym_tex_inline_math_at = 90,
  sym_latex_inline_math = 91,
  sym_latex_inline_math_at = 92,
  sym_inline_math_env = 93,
  sym_inline_math_env_at = 94,
  sym_inline_math_begin = 95,
  sym_inline_math_end = 96,
  sym_inline_math_env_group = 97,
  sym_tag = 98,
  sym_tag_at = 99,
  sym_tag_token = 100,
  sym_verbatim_env = 101,
  sym_verbatim_begin = 102,
  sym_verbatim_end = 103,
  sym_verbatim_text = 104,
  sym_verbatim_env_group = 105,
  sym_escaped = 106,
  sym_begin = 107,
  sym_begin_token = 108,
  sym_end = 109,
  sym_end_token = 110,
  sym_documentclass = 111,
  sym_documentclass_token = 112,
  sym_usepackage = 113,
  sym_usepackage_token = 114,
  sym_include = 115,
  sym_include_at = 116,
  sym_include_token = 117,
  sym_section = 118,
  sym_section_at = 119,
  sym_section_token = 120,
  sym_storage = 121,
  sym_storage_token = 122,
  sym_catcode = 123,
  sym_catcode_token = 124,
  sym_emph = 125,
  sym_emph_at = 126,
  sym_emph_token = 127,
  sym_footnote = 128,
  sym_footnote_at = 129,
  sym_footnote_token = 130,
  sym_textbf = 131,
  sym_textbf_at = 132,
  sym_textbf_token = 133,
  sym_textit = 134,
  sym_textit_at = 135,
  sym_textit_token = 136,
  sym_texttt = 137,
  sym_texttt_at = 138,
  sym_texttt_token = 139,
  sym_makeatletter = 140,
  sym_makeatletter_token = 141,
  sym_makeatother = 142,
  sym_makeatother_token = 143,
  sym_text_group = 144,
  sym_text_group_at = 145,
  sym_simple_text_group = 146,
  sym_opt_text_group = 147,
  sym_opt_text_group_at = 148,
  sym_math_group = 149,
  sym_math_group_at = 150,
  sym_opt_math_group = 151,
  sym_opt_math_group_at = 152,
  sym_math_text_group = 153,
  sym_math_text_group_at = 154,
  sym_token = 155,
  sym_token_at = 156,
  sym_begin_opt = 157,
  sym_end_opt = 158,
  aux_sym_text_mode_repeat1 = 159,
  aux_sym_text_mode_at_repeat1 = 160,
  aux_sym_math_mode_repeat1 = 161,
  aux_sym_math_mode_at_repeat1 = 162,
  aux_sym_parameter_repeat1 = 163,
  aux_sym_verbatim_text_repeat1 = 164,
  aux_sym_verbatim_text_repeat2 = 165,
  anon_alias_sym_class_name = 166,
  anon_alias_sym_env_name = 167,
  anon_alias_sym_package_name = 168,
  anon_alias_sym_text = 169,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [sym_implicit_math_shift] = "implicit_math_shift",
  [sym_display_math_shift] = "display_math_shift",
  [sym_inline_math_shift] = "inline_math_shift",
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
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = "/[^()\\[\\]]/",
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
  [sym_implicit_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_shift] = {
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
      if ((lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
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
      if ((lookahead < '#' || lookahead > '&') &&
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
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(176);
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
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 177:
      if (lookahead == '#')
        ADVANCE(3);
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
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(37);
      END_STATE();
    case 178:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 188:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
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
      if (lookahead == '#')
        ADVANCE(3);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 192:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 196:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 197:
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
        ADVANCE(198);
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
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 201:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(202);
      if (lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'd')
        ADVANCE(221);
      if (lookahead == 'e')
        ADVANCE(247);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'g')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(265);
      if (lookahead == 'm')
        ADVANCE(274);
      if (lookahead == 's')
        ADVANCE(289);
      if (lookahead == 'v')
        ADVANCE(292);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(203);
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(212);
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
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(219);
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
      if (lookahead == 'g')
        ADVANCE(214);
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == 'a')
        ADVANCE(217);
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
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(220);
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
        ADVANCE(210);
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
      if (lookahead == 'a')
        ADVANCE(222);
      if (lookahead == 'g')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'm')
        ADVANCE(239);
      if (lookahead == 's')
        ADVANCE(242);
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
      if (lookahead == 'r')
        ADVANCE(223);
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
        ADVANCE(218);
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
      if (lookahead == 'r')
        ADVANCE(227);
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(218);
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
      if (lookahead == 's')
        ADVANCE(231);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(216);
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
      if (lookahead == 'a')
        ADVANCE(240);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(218);
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
      if (lookahead == 'e')
        ADVANCE(243);
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(218);
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
      if (lookahead == 'q')
        ADVANCE(248);
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
      if (lookahead == 'n')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(250);
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
      if (lookahead == 'a')
        ADVANCE(222);
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
        ADVANCE(251);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(218);
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
      if (lookahead == 'l')
        ADVANCE(256);
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(254);
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
      if (lookahead == 'a')
        ADVANCE(261);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(218);
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
      if (lookahead == 's')
        ADVANCE(266);
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(210);
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
      if (lookahead == 'a')
        ADVANCE(275);
      if (lookahead == 'i')
        ADVANCE(278);
      if (lookahead == 'u')
        ADVANCE(282);
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
      if (lookahead == 't')
        ADVANCE(276);
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(210);
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
      if (lookahead == 'l')
        ADVANCE(283);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(218);
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
      if (lookahead == 'p')
        ADVANCE(290);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(217);
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
      if (lookahead == 'e')
        ADVANCE(293);
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 300:
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
    case 301:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 302:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 303:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(304);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(322);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == 'f')
        ADVANCE(354);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 'm')
        ADVANCE(373);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(395);
      if (lookahead == 't')
        ADVANCE(410);
      if (lookahead == 'u')
        ADVANCE(420);
      if (lookahead == 'v')
        ADVANCE(430);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(307);
      if (lookahead == 'p')
        ADVANCE(312);
      if (lookahead == 's')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == 'h')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(66);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'o')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == 'm')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(364);
      if (lookahead == 'p')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead == 'u')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead == 'u')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(414);
      if (lookahead == 'i')
        ADVANCE(416);
      if (lookahead == 't')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(173);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 436:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'e')
        ADVANCE(437);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(185);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 438:
      if (lookahead == '#')
        ADVANCE(3);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(37);
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
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(441);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(444);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(445);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 446:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(304);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(322);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == 'f')
        ADVANCE(354);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(395);
      if (lookahead == 't')
        ADVANCE(410);
      if (lookahead == 'u')
        ADVANCE(420);
      if (lookahead == 'v')
        ADVANCE(430);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
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
        ADVANCE(304);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(322);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(461);
      if (lookahead == 'f')
        ADVANCE(354);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(395);
      if (lookahead == 't')
        ADVANCE(410);
      if (lookahead == 'u')
        ADVANCE(420);
      if (lookahead == 'v')
        ADVANCE(430);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == 'm')
        ADVANCE(351);
      if (lookahead == 'n')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(463);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 464:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(441);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'e')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(176);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == 'n')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 36, .external_lex_state = 3},
  [3] = {.lex_state = 36, .external_lex_state = 4},
  [4] = {.lex_state = 38, .external_lex_state = 2},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 177, .external_lex_state = 5},
  [7] = {.lex_state = 38, .external_lex_state = 2},
  [8] = {.lex_state = 178},
  [9] = {.lex_state = 36, .external_lex_state = 6},
  [10] = {.lex_state = 178},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 179},
  [16] = {.lex_state = 36, .external_lex_state = 2},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 38, .external_lex_state = 2},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 38, .external_lex_state = 2},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 180},
  [34] = {.lex_state = 38, .external_lex_state = 2},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 182},
  [37] = {.lex_state = 177, .external_lex_state = 7},
  [38] = {.lex_state = 178, .external_lex_state = 3},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36, .external_lex_state = 3},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 36, .external_lex_state = 3},
  [47] = {.lex_state = 180},
  [48] = {.lex_state = 38, .external_lex_state = 2},
  [49] = {.lex_state = 182},
  [50] = {.lex_state = 177, .external_lex_state = 7},
  [51] = {.lex_state = 178, .external_lex_state = 4},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36, .external_lex_state = 4},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 36, .external_lex_state = 4},
  [59] = {.lex_state = 180},
  [60] = {.lex_state = 36, .external_lex_state = 6},
  [61] = {.lex_state = 188},
  [62] = {.lex_state = 188},
  [63] = {.lex_state = 38, .external_lex_state = 2},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 190},
  [66] = {.lex_state = 190},
  [67] = {.lex_state = 190},
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 188, .external_lex_state = 2},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 190},
  [72] = {.lex_state = 190},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 191, .external_lex_state = 2},
  [77] = {.lex_state = 188, .external_lex_state = 2},
  [78] = {.lex_state = 36, .external_lex_state = 3},
  [79] = {.lex_state = 36, .external_lex_state = 4},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 177, .external_lex_state = 5},
  [82] = {.lex_state = 38, .external_lex_state = 2},
  [83] = {.lex_state = 177, .external_lex_state = 5},
  [84] = {.lex_state = 36, .external_lex_state = 6},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 179},
  [90] = {.lex_state = 36, .external_lex_state = 2},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 36},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 177, .external_lex_state = 5},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 36, .external_lex_state = 2},
  [103] = {.lex_state = 38, .external_lex_state = 2},
  [104] = {.lex_state = 177, .external_lex_state = 5},
  [105] = {.lex_state = 180},
  [106] = {.lex_state = 178, .external_lex_state = 8},
  [107] = {.lex_state = 182},
  [108] = {.lex_state = 177, .external_lex_state = 7},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 38},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 180},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 192},
  [122] = {.lex_state = 38, .external_lex_state = 2},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 196},
  [126] = {.lex_state = 179},
  [127] = {.lex_state = 197},
  [128] = {.lex_state = 38, .external_lex_state = 2},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36, .external_lex_state = 2},
  [131] = {.lex_state = 201},
  [132] = {.lex_state = 300},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 300},
  [135] = {.lex_state = 36, .external_lex_state = 2},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 38, .external_lex_state = 2},
  [138] = {.lex_state = 190},
  [139] = {.lex_state = 38, .external_lex_state = 2},
  [140] = {.lex_state = 38, .external_lex_state = 2},
  [141] = {.lex_state = 190},
  [142] = {.lex_state = 38, .external_lex_state = 2},
  [143] = {.lex_state = 38, .external_lex_state = 2},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 301},
  [146] = {.lex_state = 302},
  [147] = {.lex_state = 38, .external_lex_state = 2},
  [148] = {.lex_state = 38, .external_lex_state = 2},
  [149] = {.lex_state = 190},
  [150] = {.lex_state = 38, .external_lex_state = 2},
  [151] = {.lex_state = 38, .external_lex_state = 2},
  [152] = {.lex_state = 38, .external_lex_state = 2},
  [153] = {.lex_state = 36, .external_lex_state = 3},
  [154] = {.lex_state = 36, .external_lex_state = 4},
  [155] = {.lex_state = 303},
  [156] = {.lex_state = 177, .external_lex_state = 5},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 36},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 36, .external_lex_state = 2},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 36},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 38, .external_lex_state = 2},
  [172] = {.lex_state = 38, .external_lex_state = 2},
  [173] = {.lex_state = 38, .external_lex_state = 2},
  [174] = {.lex_state = 36, .external_lex_state = 2},
  [175] = {.lex_state = 38, .external_lex_state = 2},
  [176] = {.lex_state = 38, .external_lex_state = 2},
  [177] = {.lex_state = 38, .external_lex_state = 2},
  [178] = {.lex_state = 36, .external_lex_state = 2},
  [179] = {.lex_state = 38, .external_lex_state = 2},
  [180] = {.lex_state = 180},
  [181] = {.lex_state = 190},
  [182] = {.lex_state = 36, .external_lex_state = 3},
  [183] = {.lex_state = 191, .external_lex_state = 3},
  [184] = {.lex_state = 191, .external_lex_state = 3},
  [185] = {.lex_state = 182},
  [186] = {.lex_state = 177, .external_lex_state = 7},
  [187] = {.lex_state = 36, .external_lex_state = 3},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 177, .external_lex_state = 7},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 38},
  [194] = {.lex_state = 177, .external_lex_state = 7},
  [195] = {.lex_state = 180},
  [196] = {.lex_state = 38, .external_lex_state = 2},
  [197] = {.lex_state = 177, .external_lex_state = 5},
  [198] = {.lex_state = 36, .external_lex_state = 3},
  [199] = {.lex_state = 436},
  [200] = {.lex_state = 36, .external_lex_state = 3},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 36},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 177, .external_lex_state = 5},
  [206] = {.lex_state = 36, .external_lex_state = 3},
  [207] = {.lex_state = 302},
  [208] = {.lex_state = 36, .external_lex_state = 3},
  [209] = {.lex_state = 36, .external_lex_state = 3},
  [210] = {.lex_state = 38},
  [211] = {.lex_state = 36, .external_lex_state = 3},
  [212] = {.lex_state = 36, .external_lex_state = 3},
  [213] = {.lex_state = 36, .external_lex_state = 4},
  [214] = {.lex_state = 191, .external_lex_state = 4},
  [215] = {.lex_state = 191, .external_lex_state = 4},
  [216] = {.lex_state = 36, .external_lex_state = 4},
  [217] = {.lex_state = 177, .external_lex_state = 7},
  [218] = {.lex_state = 38, .external_lex_state = 2},
  [219] = {.lex_state = 177, .external_lex_state = 5},
  [220] = {.lex_state = 36, .external_lex_state = 4},
  [221] = {.lex_state = 36, .external_lex_state = 4},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 177, .external_lex_state = 5},
  [225] = {.lex_state = 36, .external_lex_state = 4},
  [226] = {.lex_state = 302},
  [227] = {.lex_state = 36, .external_lex_state = 4},
  [228] = {.lex_state = 36, .external_lex_state = 4},
  [229] = {.lex_state = 38},
  [230] = {.lex_state = 36, .external_lex_state = 4},
  [231] = {.lex_state = 36, .external_lex_state = 4},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 36},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 190},
  [239] = {.lex_state = 190},
  [240] = {.lex_state = 38, .external_lex_state = 2},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 36, .external_lex_state = 2},
  [247] = {.lex_state = 38, .external_lex_state = 2},
  [248] = {.lex_state = 177, .external_lex_state = 5},
  [249] = {.lex_state = 178, .external_lex_state = 3},
  [250] = {.lex_state = 177, .external_lex_state = 5},
  [251] = {.lex_state = 178, .external_lex_state = 4},
  [252] = {.lex_state = 177, .external_lex_state = 5},
  [253] = {.lex_state = 438, .external_lex_state = 5},
  [254] = {.lex_state = 438, .external_lex_state = 5},
  [255] = {.lex_state = 177, .external_lex_state = 5},
  [256] = {.lex_state = 177, .external_lex_state = 5},
  [257] = {.lex_state = 178, .external_lex_state = 8},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 36},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 177, .external_lex_state = 5},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 177, .external_lex_state = 5},
  [266] = {.lex_state = 36},
  [267] = {.lex_state = 36, .external_lex_state = 2},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 177, .external_lex_state = 5},
  [270] = {.lex_state = 190},
  [271] = {.lex_state = 177, .external_lex_state = 5},
  [272] = {.lex_state = 190},
  [273] = {.lex_state = 177, .external_lex_state = 5},
  [274] = {.lex_state = 177, .external_lex_state = 5},
  [275] = {.lex_state = 190},
  [276] = {.lex_state = 302},
  [277] = {.lex_state = 177, .external_lex_state = 5},
  [278] = {.lex_state = 177, .external_lex_state = 5},
  [279] = {.lex_state = 190},
  [280] = {.lex_state = 177, .external_lex_state = 5},
  [281] = {.lex_state = 177, .external_lex_state = 5},
  [282] = {.lex_state = 177, .external_lex_state = 5},
  [283] = {.lex_state = 303},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 177, .external_lex_state = 5},
  [286] = {.lex_state = 177, .external_lex_state = 5},
  [287] = {.lex_state = 177, .external_lex_state = 5},
  [288] = {.lex_state = 177, .external_lex_state = 5},
  [289] = {.lex_state = 38, .external_lex_state = 2},
  [290] = {.lex_state = 38, .external_lex_state = 2},
  [291] = {.lex_state = 177, .external_lex_state = 5},
  [292] = {.lex_state = 177, .external_lex_state = 5},
  [293] = {.lex_state = 36, .external_lex_state = 6},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 188},
  [296] = {.lex_state = 188},
  [297] = {.lex_state = 38},
  [298] = {.lex_state = 177, .external_lex_state = 7},
  [299] = {.lex_state = 38},
  [300] = {.lex_state = 38, .external_lex_state = 2},
  [301] = {.lex_state = 177, .external_lex_state = 5},
  [302] = {.lex_state = 38},
  [303] = {.lex_state = 38},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 36},
  [306] = {.lex_state = 177, .external_lex_state = 5},
  [307] = {.lex_state = 38},
  [308] = {.lex_state = 302},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 38},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 38},
  [314] = {.lex_state = 439},
  [315] = {.lex_state = 38, .external_lex_state = 2},
  [316] = {.lex_state = 38, .external_lex_state = 2},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 38, .external_lex_state = 2},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 190},
  [321] = {.lex_state = 38, .external_lex_state = 2},
  [322] = {.lex_state = 201},
  [323] = {.lex_state = 38, .external_lex_state = 2},
  [324] = {.lex_state = 179},
  [325] = {.lex_state = 196},
  [326] = {.lex_state = 179},
  [327] = {.lex_state = 38, .external_lex_state = 2},
  [328] = {.lex_state = 38, .external_lex_state = 2},
  [329] = {.lex_state = 36, .external_lex_state = 2},
  [330] = {.lex_state = 177, .external_lex_state = 7},
  [331] = {.lex_state = 177, .external_lex_state = 7},
  [332] = {.lex_state = 177, .external_lex_state = 7},
  [333] = {.lex_state = 177, .external_lex_state = 7},
  [334] = {.lex_state = 177, .external_lex_state = 5},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 300},
  [337] = {.lex_state = 300},
  [338] = {.lex_state = 179},
  [339] = {.lex_state = 300},
  [340] = {.lex_state = 300},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 38, .external_lex_state = 2},
  [343] = {.lex_state = 300},
  [344] = {.lex_state = 300},
  [345] = {.lex_state = 38, .external_lex_state = 2},
  [346] = {.lex_state = 36},
  [347] = {.lex_state = 38, .external_lex_state = 2},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 38, .external_lex_state = 2},
  [350] = {.lex_state = 302},
  [351] = {.lex_state = 180},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 38, .external_lex_state = 2},
  [354] = {.lex_state = 38, .external_lex_state = 2},
  [355] = {.lex_state = 440},
  [356] = {.lex_state = 177, .external_lex_state = 7},
  [357] = {.lex_state = 178, .external_lex_state = 3},
  [358] = {.lex_state = 36},
  [359] = {.lex_state = 36},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 38},
  [362] = {.lex_state = 36, .external_lex_state = 3},
  [363] = {.lex_state = 38, .external_lex_state = 2},
  [364] = {.lex_state = 440},
  [365] = {.lex_state = 177, .external_lex_state = 7},
  [366] = {.lex_state = 178, .external_lex_state = 4},
  [367] = {.lex_state = 36},
  [368] = {.lex_state = 36},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 38},
  [371] = {.lex_state = 36, .external_lex_state = 4},
  [372] = {.lex_state = 188, .external_lex_state = 2},
  [373] = {.lex_state = 188, .external_lex_state = 2},
  [374] = {.lex_state = 36, .external_lex_state = 3},
  [375] = {.lex_state = 36, .external_lex_state = 4},
  [376] = {.lex_state = 446},
  [377] = {.lex_state = 177, .external_lex_state = 5},
  [378] = {.lex_state = 38, .external_lex_state = 2},
  [379] = {.lex_state = 36},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 36, .external_lex_state = 2},
  [384] = {.lex_state = 36},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 36},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 36},
  [390] = {.lex_state = 36},
  [391] = {.lex_state = 38, .external_lex_state = 2},
  [392] = {.lex_state = 177, .external_lex_state = 5},
  [393] = {.lex_state = 448},
  [394] = {.lex_state = 38, .external_lex_state = 2},
  [395] = {.lex_state = 440},
  [396] = {.lex_state = 177, .external_lex_state = 7},
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 38},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 36},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 460},
  [407] = {.lex_state = 38, .external_lex_state = 2},
  [408] = {.lex_state = 36, .external_lex_state = 2},
  [409] = {.lex_state = 300},
  [410] = {.lex_state = 38, .external_lex_state = 2},
  [411] = {.lex_state = 38, .external_lex_state = 2},
  [412] = {.lex_state = 190},
  [413] = {.lex_state = 38, .external_lex_state = 2},
  [414] = {.lex_state = 38, .external_lex_state = 2},
  [415] = {.lex_state = 38, .external_lex_state = 2},
  [416] = {.lex_state = 190},
  [417] = {.lex_state = 38, .external_lex_state = 2},
  [418] = {.lex_state = 38, .external_lex_state = 2},
  [419] = {.lex_state = 38, .external_lex_state = 2},
  [420] = {.lex_state = 446},
  [421] = {.lex_state = 38, .external_lex_state = 2},
  [422] = {.lex_state = 38, .external_lex_state = 2},
  [423] = {.lex_state = 36, .external_lex_state = 2},
  [424] = {.lex_state = 38, .external_lex_state = 2},
  [425] = {.lex_state = 38, .external_lex_state = 2},
  [426] = {.lex_state = 36},
  [427] = {.lex_state = 36, .external_lex_state = 3},
  [428] = {.lex_state = 36, .external_lex_state = 3},
  [429] = {.lex_state = 177, .external_lex_state = 7},
  [430] = {.lex_state = 438, .external_lex_state = 7},
  [431] = {.lex_state = 438, .external_lex_state = 7},
  [432] = {.lex_state = 177, .external_lex_state = 7},
  [433] = {.lex_state = 177, .external_lex_state = 7},
  [434] = {.lex_state = 177, .external_lex_state = 5},
  [435] = {.lex_state = 177, .external_lex_state = 7},
  [436] = {.lex_state = 177, .external_lex_state = 7},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 36},
  [439] = {.lex_state = 177, .external_lex_state = 5},
  [440] = {.lex_state = 177, .external_lex_state = 7},
  [441] = {.lex_state = 302},
  [442] = {.lex_state = 177, .external_lex_state = 7},
  [443] = {.lex_state = 177, .external_lex_state = 7},
  [444] = {.lex_state = 38},
  [445] = {.lex_state = 36, .external_lex_state = 3},
  [446] = {.lex_state = 177, .external_lex_state = 7},
  [447] = {.lex_state = 177, .external_lex_state = 7},
  [448] = {.lex_state = 36, .external_lex_state = 3},
  [449] = {.lex_state = 177, .external_lex_state = 7},
  [450] = {.lex_state = 177, .external_lex_state = 5},
  [451] = {.lex_state = 36},
  [452] = {.lex_state = 36, .external_lex_state = 3},
  [453] = {.lex_state = 36, .external_lex_state = 3},
  [454] = {.lex_state = 177, .external_lex_state = 7},
  [455] = {.lex_state = 36, .external_lex_state = 3},
  [456] = {.lex_state = 177, .external_lex_state = 5},
  [457] = {.lex_state = 180},
  [458] = {.lex_state = 36, .external_lex_state = 3},
  [459] = {.lex_state = 38},
  [460] = {.lex_state = 36, .external_lex_state = 4},
  [461] = {.lex_state = 36, .external_lex_state = 4},
  [462] = {.lex_state = 36, .external_lex_state = 4},
  [463] = {.lex_state = 36, .external_lex_state = 4},
  [464] = {.lex_state = 177, .external_lex_state = 7},
  [465] = {.lex_state = 36},
  [466] = {.lex_state = 36, .external_lex_state = 4},
  [467] = {.lex_state = 36, .external_lex_state = 4},
  [468] = {.lex_state = 36, .external_lex_state = 4},
  [469] = {.lex_state = 177, .external_lex_state = 5},
  [470] = {.lex_state = 180},
  [471] = {.lex_state = 36, .external_lex_state = 4},
  [472] = {.lex_state = 36},
  [473] = {.lex_state = 190},
  [474] = {.lex_state = 177, .external_lex_state = 5},
  [475] = {.lex_state = 177, .external_lex_state = 5},
  [476] = {.lex_state = 177, .external_lex_state = 5},
  [477] = {.lex_state = 177, .external_lex_state = 5},
  [478] = {.lex_state = 177, .external_lex_state = 5},
  [479] = {.lex_state = 36, .external_lex_state = 6},
  [480] = {.lex_state = 38},
  [481] = {.lex_state = 177, .external_lex_state = 5},
  [482] = {.lex_state = 439},
  [483] = {.lex_state = 177, .external_lex_state = 5},
  [484] = {.lex_state = 177, .external_lex_state = 5},
  [485] = {.lex_state = 36},
  [486] = {.lex_state = 177, .external_lex_state = 5},
  [487] = {.lex_state = 36},
  [488] = {.lex_state = 177, .external_lex_state = 5},
  [489] = {.lex_state = 201},
  [490] = {.lex_state = 177, .external_lex_state = 5},
  [491] = {.lex_state = 177, .external_lex_state = 5},
  [492] = {.lex_state = 177, .external_lex_state = 5},
  [493] = {.lex_state = 177, .external_lex_state = 7},
  [494] = {.lex_state = 36},
  [495] = {.lex_state = 177, .external_lex_state = 5},
  [496] = {.lex_state = 36},
  [497] = {.lex_state = 177, .external_lex_state = 5},
  [498] = {.lex_state = 36},
  [499] = {.lex_state = 177, .external_lex_state = 5},
  [500] = {.lex_state = 180},
  [501] = {.lex_state = 36},
  [502] = {.lex_state = 177, .external_lex_state = 5},
  [503] = {.lex_state = 438, .external_lex_state = 5},
  [504] = {.lex_state = 448},
  [505] = {.lex_state = 177, .external_lex_state = 5},
  [506] = {.lex_state = 177, .external_lex_state = 5},
  [507] = {.lex_state = 38, .external_lex_state = 2},
  [508] = {.lex_state = 38},
  [509] = {.lex_state = 38},
  [510] = {.lex_state = 38},
  [511] = {.lex_state = 188, .external_lex_state = 2},
  [512] = {.lex_state = 38},
  [513] = {.lex_state = 177, .external_lex_state = 7},
  [514] = {.lex_state = 38},
  [515] = {.lex_state = 38},
  [516] = {.lex_state = 38},
  [517] = {.lex_state = 177, .external_lex_state = 5},
  [518] = {.lex_state = 180},
  [519] = {.lex_state = 38},
  [520] = {.lex_state = 188, .external_lex_state = 2},
  [521] = {.lex_state = 201},
  [522] = {.lex_state = 38, .external_lex_state = 2},
  [523] = {.lex_state = 201},
  [524] = {.lex_state = 38, .external_lex_state = 2},
  [525] = {.lex_state = 36},
  [526] = {.lex_state = 177, .external_lex_state = 7},
  [527] = {.lex_state = 300},
  [528] = {.lex_state = 36},
  [529] = {.lex_state = 300},
  [530] = {.lex_state = 38, .external_lex_state = 2},
  [531] = {.lex_state = 300},
  [532] = {.lex_state = 177, .external_lex_state = 5},
  [533] = {.lex_state = 36},
  [534] = {.lex_state = 300},
  [535] = {.lex_state = 300},
  [536] = {.lex_state = 179},
  [537] = {.lex_state = 300},
  [538] = {.lex_state = 300},
  [539] = {.lex_state = 38, .external_lex_state = 2},
  [540] = {.lex_state = 300},
  [541] = {.lex_state = 38, .external_lex_state = 2},
  [542] = {.lex_state = 38, .external_lex_state = 2},
  [543] = {.lex_state = 38, .external_lex_state = 2},
  [544] = {.lex_state = 38, .external_lex_state = 2},
  [545] = {.lex_state = 191, .external_lex_state = 3},
  [546] = {.lex_state = 440},
  [547] = {.lex_state = 177, .external_lex_state = 7},
  [548] = {.lex_state = 36, .external_lex_state = 3},
  [549] = {.lex_state = 36},
  [550] = {.lex_state = 36},
  [551] = {.lex_state = 36},
  [552] = {.lex_state = 38},
  [553] = {.lex_state = 177, .external_lex_state = 7},
  [554] = {.lex_state = 38, .external_lex_state = 2},
  [555] = {.lex_state = 177, .external_lex_state = 5},
  [556] = {.lex_state = 36, .external_lex_state = 3},
  [557] = {.lex_state = 464},
  [558] = {.lex_state = 36, .external_lex_state = 3},
  [559] = {.lex_state = 36},
  [560] = {.lex_state = 177, .external_lex_state = 5},
  [561] = {.lex_state = 36, .external_lex_state = 3},
  [562] = {.lex_state = 36, .external_lex_state = 3},
  [563] = {.lex_state = 38},
  [564] = {.lex_state = 36, .external_lex_state = 3},
  [565] = {.lex_state = 191, .external_lex_state = 4},
  [566] = {.lex_state = 36, .external_lex_state = 4},
  [567] = {.lex_state = 177, .external_lex_state = 7},
  [568] = {.lex_state = 38, .external_lex_state = 2},
  [569] = {.lex_state = 177, .external_lex_state = 5},
  [570] = {.lex_state = 36, .external_lex_state = 4},
  [571] = {.lex_state = 36, .external_lex_state = 4},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 177, .external_lex_state = 5},
  [574] = {.lex_state = 36, .external_lex_state = 4},
  [575] = {.lex_state = 36, .external_lex_state = 4},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 36, .external_lex_state = 4},
  [578] = {.lex_state = 38, .external_lex_state = 2},
  [579] = {.lex_state = 38, .external_lex_state = 2},
  [580] = {.lex_state = 177, .external_lex_state = 5},
  [581] = {.lex_state = 178, .external_lex_state = 3},
  [582] = {.lex_state = 177, .external_lex_state = 5},
  [583] = {.lex_state = 178, .external_lex_state = 4},
  [584] = {.lex_state = 438, .external_lex_state = 5},
  [585] = {.lex_state = 177, .external_lex_state = 5},
  [586] = {.lex_state = 177, .external_lex_state = 5},
  [587] = {.lex_state = 36},
  [588] = {.lex_state = 36},
  [589] = {.lex_state = 36},
  [590] = {.lex_state = 36},
  [591] = {.lex_state = 177, .external_lex_state = 5},
  [592] = {.lex_state = 36, .external_lex_state = 2},
  [593] = {.lex_state = 177, .external_lex_state = 5},
  [594] = {.lex_state = 177, .external_lex_state = 5},
  [595] = {.lex_state = 190},
  [596] = {.lex_state = 177, .external_lex_state = 5},
  [597] = {.lex_state = 177, .external_lex_state = 5},
  [598] = {.lex_state = 190},
  [599] = {.lex_state = 177, .external_lex_state = 5},
  [600] = {.lex_state = 177, .external_lex_state = 5},
  [601] = {.lex_state = 177, .external_lex_state = 5},
  [602] = {.lex_state = 177, .external_lex_state = 5},
  [603] = {.lex_state = 38, .external_lex_state = 2},
  [604] = {.lex_state = 38, .external_lex_state = 2},
  [605] = {.lex_state = 177, .external_lex_state = 5},
  [606] = {.lex_state = 188},
  [607] = {.lex_state = 38},
  [608] = {.lex_state = 177, .external_lex_state = 7},
  [609] = {.lex_state = 38, .external_lex_state = 2},
  [610] = {.lex_state = 177, .external_lex_state = 5},
  [611] = {.lex_state = 38},
  [612] = {.lex_state = 38},
  [613] = {.lex_state = 36},
  [614] = {.lex_state = 177, .external_lex_state = 5},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 38},
  [617] = {.lex_state = 38},
  [618] = {.lex_state = 36},
  [619] = {.lex_state = 38, .external_lex_state = 2},
  [620] = {.lex_state = 38, .external_lex_state = 2},
  [621] = {.lex_state = 38, .external_lex_state = 2},
  [622] = {.lex_state = 38, .external_lex_state = 2},
  [623] = {.lex_state = 177, .external_lex_state = 5},
  [624] = {.lex_state = 36},
  [625] = {.lex_state = 300},
  [626] = {.lex_state = 300},
  [627] = {.lex_state = 36},
  [628] = {.lex_state = 38, .external_lex_state = 2},
  [629] = {.lex_state = 300},
  [630] = {.lex_state = 38, .external_lex_state = 2},
  [631] = {.lex_state = 36},
  [632] = {.lex_state = 38, .external_lex_state = 2},
  [633] = {.lex_state = 38, .external_lex_state = 2},
  [634] = {.lex_state = 38, .external_lex_state = 2},
  [635] = {.lex_state = 177, .external_lex_state = 7},
  [636] = {.lex_state = 177, .external_lex_state = 7},
  [637] = {.lex_state = 177, .external_lex_state = 7},
  [638] = {.lex_state = 177, .external_lex_state = 7},
  [639] = {.lex_state = 177, .external_lex_state = 7},
  [640] = {.lex_state = 36},
  [641] = {.lex_state = 177, .external_lex_state = 7},
  [642] = {.lex_state = 177, .external_lex_state = 7},
  [643] = {.lex_state = 177, .external_lex_state = 7},
  [644] = {.lex_state = 177, .external_lex_state = 5},
  [645] = {.lex_state = 180},
  [646] = {.lex_state = 177, .external_lex_state = 7},
  [647] = {.lex_state = 36, .external_lex_state = 3},
  [648] = {.lex_state = 177, .external_lex_state = 7},
  [649] = {.lex_state = 38},
  [650] = {.lex_state = 36, .external_lex_state = 3},
  [651] = {.lex_state = 36, .external_lex_state = 3},
  [652] = {.lex_state = 36, .external_lex_state = 4},
  [653] = {.lex_state = 177, .external_lex_state = 7},
  [654] = {.lex_state = 36, .external_lex_state = 4},
  [655] = {.lex_state = 36, .external_lex_state = 4},
  [656] = {.lex_state = 36},
  [657] = {.lex_state = 177, .external_lex_state = 5},
  [658] = {.lex_state = 438, .external_lex_state = 5},
  [659] = {.lex_state = 438, .external_lex_state = 5},
  [660] = {.lex_state = 201},
  [661] = {.lex_state = 177, .external_lex_state = 5},
  [662] = {.lex_state = 201},
  [663] = {.lex_state = 177, .external_lex_state = 5},
  [664] = {.lex_state = 177, .external_lex_state = 7},
  [665] = {.lex_state = 177, .external_lex_state = 5},
  [666] = {.lex_state = 177, .external_lex_state = 5},
  [667] = {.lex_state = 177, .external_lex_state = 5},
  [668] = {.lex_state = 177, .external_lex_state = 5},
  [669] = {.lex_state = 177, .external_lex_state = 5},
  [670] = {.lex_state = 177, .external_lex_state = 5},
  [671] = {.lex_state = 177, .external_lex_state = 5},
  [672] = {.lex_state = 38, .external_lex_state = 2},
  [673] = {.lex_state = 38},
  [674] = {.lex_state = 38},
  [675] = {.lex_state = 38},
  [676] = {.lex_state = 38, .external_lex_state = 2},
  [677] = {.lex_state = 177, .external_lex_state = 7},
  [678] = {.lex_state = 177, .external_lex_state = 7},
  [679] = {.lex_state = 38, .external_lex_state = 2},
  [680] = {.lex_state = 300},
  [681] = {.lex_state = 36},
  [682] = {.lex_state = 300},
  [683] = {.lex_state = 179},
  [684] = {.lex_state = 300},
  [685] = {.lex_state = 36, .external_lex_state = 3},
  [686] = {.lex_state = 438, .external_lex_state = 7},
  [687] = {.lex_state = 177, .external_lex_state = 7},
  [688] = {.lex_state = 177, .external_lex_state = 7},
  [689] = {.lex_state = 177, .external_lex_state = 5},
  [690] = {.lex_state = 177, .external_lex_state = 7},
  [691] = {.lex_state = 177, .external_lex_state = 7},
  [692] = {.lex_state = 36},
  [693] = {.lex_state = 177, .external_lex_state = 5},
  [694] = {.lex_state = 177, .external_lex_state = 7},
  [695] = {.lex_state = 177, .external_lex_state = 7},
  [696] = {.lex_state = 38},
  [697] = {.lex_state = 36, .external_lex_state = 3},
  [698] = {.lex_state = 177, .external_lex_state = 7},
  [699] = {.lex_state = 36, .external_lex_state = 3},
  [700] = {.lex_state = 177, .external_lex_state = 7},
  [701] = {.lex_state = 177, .external_lex_state = 5},
  [702] = {.lex_state = 36, .external_lex_state = 3},
  [703] = {.lex_state = 36, .external_lex_state = 3},
  [704] = {.lex_state = 177, .external_lex_state = 5},
  [705] = {.lex_state = 36, .external_lex_state = 3},
  [706] = {.lex_state = 38},
  [707] = {.lex_state = 36, .external_lex_state = 4},
  [708] = {.lex_state = 36, .external_lex_state = 4},
  [709] = {.lex_state = 36, .external_lex_state = 4},
  [710] = {.lex_state = 177, .external_lex_state = 7},
  [711] = {.lex_state = 36, .external_lex_state = 4},
  [712] = {.lex_state = 36, .external_lex_state = 4},
  [713] = {.lex_state = 177, .external_lex_state = 5},
  [714] = {.lex_state = 36, .external_lex_state = 4},
  [715] = {.lex_state = 177, .external_lex_state = 5},
  [716] = {.lex_state = 177, .external_lex_state = 5},
  [717] = {.lex_state = 177, .external_lex_state = 5},
  [718] = {.lex_state = 177, .external_lex_state = 5},
  [719] = {.lex_state = 177, .external_lex_state = 5},
  [720] = {.lex_state = 177, .external_lex_state = 5},
  [721] = {.lex_state = 177, .external_lex_state = 5},
  [722] = {.lex_state = 177, .external_lex_state = 5},
  [723] = {.lex_state = 177, .external_lex_state = 5},
  [724] = {.lex_state = 36},
  [725] = {.lex_state = 177, .external_lex_state = 5},
  [726] = {.lex_state = 36},
  [727] = {.lex_state = 177, .external_lex_state = 5},
  [728] = {.lex_state = 177, .external_lex_state = 5},
  [729] = {.lex_state = 38},
  [730] = {.lex_state = 38},
  [731] = {.lex_state = 38},
  [732] = {.lex_state = 177, .external_lex_state = 7},
  [733] = {.lex_state = 38},
  [734] = {.lex_state = 38},
  [735] = {.lex_state = 177, .external_lex_state = 5},
  [736] = {.lex_state = 38},
  [737] = {.lex_state = 300},
  [738] = {.lex_state = 177, .external_lex_state = 5},
  [739] = {.lex_state = 36},
  [740] = {.lex_state = 300},
  [741] = {.lex_state = 300},
  [742] = {.lex_state = 38, .external_lex_state = 2},
  [743] = {.lex_state = 300},
  [744] = {.lex_state = 38, .external_lex_state = 2},
  [745] = {.lex_state = 177, .external_lex_state = 7},
  [746] = {.lex_state = 177, .external_lex_state = 7},
  [747] = {.lex_state = 177, .external_lex_state = 7},
  [748] = {.lex_state = 177, .external_lex_state = 7},
  [749] = {.lex_state = 36, .external_lex_state = 3},
  [750] = {.lex_state = 36, .external_lex_state = 4},
  [751] = {.lex_state = 177, .external_lex_state = 5},
  [752] = {.lex_state = 177, .external_lex_state = 5},
  [753] = {.lex_state = 177, .external_lex_state = 7},
  [754] = {.lex_state = 177, .external_lex_state = 7},
  [755] = {.lex_state = 177, .external_lex_state = 5},
  [756] = {.lex_state = 38, .external_lex_state = 2},
  [757] = {.lex_state = 38, .external_lex_state = 2},
  [758] = {.lex_state = 36},
  [759] = {.lex_state = 179},
  [760] = {.lex_state = 177, .external_lex_state = 7},
  [761] = {.lex_state = 177, .external_lex_state = 7},
  [762] = {.lex_state = 177, .external_lex_state = 7},
  [763] = {.lex_state = 177, .external_lex_state = 7},
  [764] = {.lex_state = 177, .external_lex_state = 7},
  [765] = {.lex_state = 177, .external_lex_state = 7},
  [766] = {.lex_state = 177, .external_lex_state = 5},
  [767] = {.lex_state = 177, .external_lex_state = 7},
  [768] = {.lex_state = 36, .external_lex_state = 3},
  [769] = {.lex_state = 36, .external_lex_state = 3},
  [770] = {.lex_state = 36, .external_lex_state = 4},
  [771] = {.lex_state = 36, .external_lex_state = 4},
  [772] = {.lex_state = 177, .external_lex_state = 5},
  [773] = {.lex_state = 177, .external_lex_state = 5},
  [774] = {.lex_state = 38},
  [775] = {.lex_state = 38},
  [776] = {.lex_state = 300},
  [777] = {.lex_state = 36},
  [778] = {.lex_state = 300},
  [779] = {.lex_state = 177, .external_lex_state = 7},
  [780] = {.lex_state = 177, .external_lex_state = 5},
  [781] = {.lex_state = 177, .external_lex_state = 5},
  [782] = {.lex_state = 177, .external_lex_state = 7},
  [783] = {.lex_state = 177, .external_lex_state = 7},
  [784] = {.lex_state = 36},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
  ts_external_token_implicit_math_shift,
  ts_external_token_display_math_shift,
  ts_external_token_inline_math_shift,
  ts_external_token_end_group,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
  [ts_external_token_implicit_math_shift] = sym_implicit_math_shift,
  [ts_external_token_display_math_shift] = sym_display_math_shift,
  [ts_external_token_inline_math_shift] = sym_inline_math_shift,
  [ts_external_token_end_group] = sym_end_group,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
    [ts_external_token_implicit_math_shift] = true,
    [ts_external_token_display_math_shift] = true,
    [ts_external_token_inline_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [2] = {
    [ts_external_token_display_math_shift] = true,
    [ts_external_token_inline_math_shift] = true,
  },
  [3] = {
    [ts_external_token_implicit_math_shift] = true,
    [ts_external_token_display_math_shift] = true,
  },
  [4] = {
    [ts_external_token_implicit_math_shift] = true,
    [ts_external_token_inline_math_shift] = true,
  },
  [5] = {
    [ts_external_token_display_math_shift] = true,
    [ts_external_token_inline_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [6] = {
    [ts_external_token_verb_delim] = true,
  },
  [7] = {
    [ts_external_token_end_group] = true,
  },
  [8] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [sym_implicit_math_shift] = ACTIONS(1),
    [sym_display_math_shift] = ACTIONS(1),
    [sym_inline_math_shift] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(3),
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
    [sym_document] = STATE(8),
    [sym__common] = STATE(32),
    [sym__text_mode_common] = STATE(32),
    [sym_inline_verbatim] = STATE(32),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(32),
    [sym_text_mode] = STATE(10),
    [sym_text_mode_at_region] = STATE(32),
    [sym_parameter] = STATE(32),
    [sym_text_env] = STATE(32),
    [sym__display_math] = STATE(32),
    [sym_tex_display_math] = STATE(32),
    [sym_latex_display_math] = STATE(32),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(32),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(32),
    [sym_tex_inline_math] = STATE(32),
    [sym_latex_inline_math] = STATE(32),
    [sym_inline_math_env] = STATE(32),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(32),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(32),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(32),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(32),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(32),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(32),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(32),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(32),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(32),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(32),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(32),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(32),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(32),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(32),
    [sym_opt_text_group] = STATE(32),
    [sym_token] = STATE(32),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(32),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(21),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(21),
    [sym_text] = ACTIONS(21),
  },
  [2] = {
    [sym__common] = STATE(46),
    [sym__math_mode_common] = STATE(46),
    [sym__math_mode] = STATE(46),
    [sym_math_mode] = STATE(38),
    [sym_parameter] = STATE(46),
    [sym_math_env] = STATE(46),
    [sym_tag] = STATE(46),
    [sym_tag_token] = STATE(39),
    [sym_escaped] = STATE(46),
    [sym_begin] = STATE(40),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(46),
    [sym_include_token] = STATE(42),
    [sym_storage] = STATE(46),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(46),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_token] = STATE(46),
    [sym_begin_opt] = STATE(45),
    [aux_sym_math_mode_repeat1] = STATE(46),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(27),
    [sym_display_math_shift] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_alignment_tab] = ACTIONS(35),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(35),
    [sym_subscript] = ACTIONS(35),
    [sym_active_char] = ACTIONS(35),
    [sym_text] = ACTIONS(35),
  },
  [3] = {
    [sym__common] = STATE(58),
    [sym__math_mode_common] = STATE(58),
    [sym__math_mode] = STATE(58),
    [sym_math_mode] = STATE(51),
    [sym_parameter] = STATE(58),
    [sym_math_env] = STATE(58),
    [sym_tag] = STATE(58),
    [sym_tag_token] = STATE(52),
    [sym_escaped] = STATE(58),
    [sym_begin] = STATE(53),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(58),
    [sym_include_token] = STATE(54),
    [sym_storage] = STATE(58),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(58),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(58),
    [sym_opt_math_group] = STATE(58),
    [sym_token] = STATE(58),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(58),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(39),
    [sym_inline_math_shift] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(41),
    [sym_begin_group] = ACTIONS(43),
    [sym_alignment_tab] = ACTIONS(45),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(45),
    [sym_subscript] = ACTIONS(45),
    [sym_active_char] = ACTIONS(45),
    [sym_text] = ACTIONS(45),
  },
  [4] = {
    [sym_display_math_shift] = ACTIONS(49),
    [sym_inline_math_shift] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(49),
    [sym_alignment_tab] = ACTIONS(49),
    [sym_parameter_char] = ACTIONS(49),
    [sym_superscript] = ACTIONS(49),
    [sym_subscript] = ACTIONS(49),
    [sym_active_char] = ACTIONS(49),
    [sym_text] = ACTIONS(49),
  },
  [5] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [anon_sym_makeatletter] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(85),
  },
  [6] = {
    [sym__common] = STATE(104),
    [sym__text_mode_common] = STATE(104),
    [sym_inline_verbatim] = STATE(104),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(104),
    [sym_text_mode_at_region] = STATE(104),
    [sym_parameter] = STATE(104),
    [sym_text_env] = STATE(104),
    [sym__display_math] = STATE(104),
    [sym_tex_display_math] = STATE(104),
    [sym_latex_display_math] = STATE(104),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(104),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(104),
    [sym_tex_inline_math] = STATE(104),
    [sym_latex_inline_math] = STATE(104),
    [sym_inline_math_env] = STATE(104),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(104),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(104),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(104),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(104),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(104),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(104),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(104),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(104),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(104),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(104),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(104),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(104),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(104),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(104),
    [sym_opt_text_group] = STATE(104),
    [sym_token] = STATE(104),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(104),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(95),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
  },
  [7] = {
    [sym_display_math_shift] = ACTIONS(103),
    [sym_inline_math_shift] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(103),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [9] = {
    [sym_verb_delim] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [11] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(109),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [12] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(118),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [13] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(119),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [14] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(120),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [15] = {
    [sym_verbatim_end] = STATE(122),
    [sym_verbatim_text] = STATE(123),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [aux_sym_verbatim_text_repeat2] = STATE(126),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
    [sym__end_of_line] = ACTIONS(123),
  },
  [16] = {
    [sym__common] = STATE(130),
    [sym__text_mode_common] = STATE(130),
    [sym_inline_verbatim] = STATE(130),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(130),
    [sym_text_mode_at_region] = STATE(130),
    [sym_parameter] = STATE(130),
    [sym_text_env] = STATE(130),
    [sym__display_math] = STATE(130),
    [sym_tex_display_math] = STATE(130),
    [sym_latex_display_math] = STATE(130),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(130),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(130),
    [sym_tex_inline_math] = STATE(130),
    [sym_latex_inline_math] = STATE(130),
    [sym_inline_math_env] = STATE(130),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(130),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(130),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(128),
    [sym_end_token] = STATE(129),
    [sym_documentclass] = STATE(130),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(130),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(130),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(130),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(130),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(130),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(130),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(130),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(130),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(130),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(130),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(130),
    [sym_token] = STATE(130),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(130),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(132),
    [sym_inline_math_env_group] = STATE(133),
    [sym_verbatim_env_group] = STATE(134),
    [sym_simple_text_group] = STATE(135),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(129),
  },
  [18] = {
    [sym_simple_text_group] = STATE(137),
    [sym_opt_text_group] = STATE(138),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [19] = {
    [sym_simple_text_group] = STATE(140),
    [sym_opt_text_group] = STATE(141),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [20] = {
    [sym_text_group] = STATE(142),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [21] = {
    [sym_text_group] = STATE(143),
    [sym_opt_text_group] = STATE(144),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [22] = {
    [sym_display_math_shift] = ACTIONS(133),
    [sym_inline_math_shift] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [23] = {
    [sym_escaped] = STATE(146),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [24] = {
    [sym_text_group] = STATE(147),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [25] = {
    [sym_text_group] = STATE(148),
    [sym_opt_text_group] = STATE(149),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [26] = {
    [sym_text_group] = STATE(150),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [27] = {
    [sym_text_group] = STATE(151),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [28] = {
    [sym_text_group] = STATE(152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [29] = {
    [sym__common] = STATE(174),
    [sym__text_mode_common] = STATE(174),
    [sym_inline_verbatim] = STATE(174),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(174),
    [sym_text_mode_at] = STATE(157),
    [sym_parameter] = STATE(174),
    [sym_text_env_at] = STATE(174),
    [sym__display_math_at] = STATE(174),
    [sym_tex_display_math_at] = STATE(174),
    [sym_latex_display_math_at] = STATE(174),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(174),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(174),
    [sym_tex_inline_math_at] = STATE(174),
    [sym_latex_inline_math_at] = STATE(174),
    [sym_inline_math_env_at] = STATE(174),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(174),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(174),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(174),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(174),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(174),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(174),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(174),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(174),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(174),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(174),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(174),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(174),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(174),
    [sym_texttt_token] = STATE(170),
    [sym_makeatother] = STATE(171),
    [sym_makeatother_token] = STATE(172),
    [sym_text_group_at] = STATE(174),
    [sym_opt_text_group_at] = STATE(174),
    [sym_token_at] = STATE(174),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(174),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
  },
  [30] = {
    [sym_display_math_shift] = ACTIONS(147),
    [sym_inline_math_shift] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [31] = {
    [sym__common] = STATE(177),
    [sym__text_mode_common] = STATE(177),
    [sym_inline_verbatim] = STATE(177),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(177),
    [sym_text_mode_at_region] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_text_env] = STATE(177),
    [sym__display_math] = STATE(177),
    [sym_tex_display_math] = STATE(177),
    [sym_latex_display_math] = STATE(177),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(177),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(177),
    [sym_tex_inline_math] = STATE(177),
    [sym_latex_inline_math] = STATE(177),
    [sym_inline_math_env] = STATE(177),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(177),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(177),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(177),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(177),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(177),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(177),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(177),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(177),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(177),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(177),
    [sym_opt_text_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(176),
    [aux_sym_text_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(151),
    [sym_text] = ACTIONS(151),
  },
  [32] = {
    [sym__common] = STATE(178),
    [sym__text_mode_common] = STATE(178),
    [sym_inline_verbatim] = STATE(178),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(178),
    [sym_text_mode_at_region] = STATE(178),
    [sym_parameter] = STATE(178),
    [sym_text_env] = STATE(178),
    [sym__display_math] = STATE(178),
    [sym_tex_display_math] = STATE(178),
    [sym_latex_display_math] = STATE(178),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(178),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(178),
    [sym_tex_inline_math] = STATE(178),
    [sym_latex_inline_math] = STATE(178),
    [sym_inline_math_env] = STATE(178),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(178),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(178),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(178),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(178),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(178),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(178),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(178),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(178),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(178),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(178),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(178),
    [sym_token] = STATE(178),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(178),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [33] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
  },
  [34] = {
    [sym_display_math_shift] = ACTIONS(161),
    [sym_inline_math_shift] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(49),
    [sym_alignment_tab] = ACTIONS(49),
    [sym_parameter_char] = ACTIONS(49),
    [sym_superscript] = ACTIONS(49),
    [sym_subscript] = ACTIONS(49),
    [sym_active_char] = ACTIONS(49),
    [sym_text] = ACTIONS(49),
  },
  [36] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(165),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(167),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(169),
  },
  [37] = {
    [sym__common] = STATE(194),
    [sym__math_mode_common] = STATE(194),
    [sym__math_mode] = STATE(194),
    [sym_parameter] = STATE(194),
    [sym_math_env] = STATE(194),
    [sym_tag] = STATE(194),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(194),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(194),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(194),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(194),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(194),
    [sym_opt_math_group] = STATE(194),
    [sym_token] = STATE(194),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(194),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_text] = ACTIONS(177),
  },
  [38] = {
    [sym_implicit_math_shift] = ACTIONS(181),
    [sym_display_math_shift] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [39] = {
    [sym_math_text_group] = STATE(198),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(183),
  },
  [40] = {
    [sym__common] = STATE(202),
    [sym__math_mode_common] = STATE(202),
    [sym__math_mode] = STATE(202),
    [sym_parameter] = STATE(202),
    [sym_math_env] = STATE(202),
    [sym_tag] = STATE(202),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(202),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(200),
    [sym_end_token] = STATE(201),
    [sym_include] = STATE(202),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(202),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(202),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(202),
    [sym_opt_math_group] = STATE(202),
    [sym_token] = STATE(202),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(202),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_text] = ACTIONS(187),
  },
  [41] = {
    [sym_simple_text_group] = STATE(204),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(189),
  },
  [42] = {
    [sym_text_group] = STATE(206),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(191),
  },
  [43] = {
    [sym_implicit_math_shift] = ACTIONS(133),
    [sym_display_math_shift] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [44] = {
    [sym_escaped] = STATE(207),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [45] = {
    [sym__common] = STATE(210),
    [sym__math_mode_common] = STATE(210),
    [sym__math_mode] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_math_env] = STATE(210),
    [sym_tag] = STATE(210),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(210),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(210),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(210),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(210),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(210),
    [sym_opt_math_group] = STATE(210),
    [sym_token] = STATE(210),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(209),
    [aux_sym_math_mode_repeat1] = STATE(210),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [46] = {
    [sym__common] = STATE(211),
    [sym__math_mode_common] = STATE(211),
    [sym__math_mode] = STATE(211),
    [sym_parameter] = STATE(211),
    [sym_math_env] = STATE(211),
    [sym_tag] = STATE(211),
    [sym_tag_token] = STATE(39),
    [sym_escaped] = STATE(211),
    [sym_begin] = STATE(40),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(211),
    [sym_include_token] = STATE(42),
    [sym_storage] = STATE(211),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(211),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(211),
    [sym_opt_math_group] = STATE(211),
    [sym_token] = STATE(211),
    [sym_begin_opt] = STATE(45),
    [aux_sym_math_mode_repeat1] = STATE(211),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(197),
    [sym_display_math_shift] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [47] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(201),
  },
  [48] = {
    [sym_display_math_shift] = ACTIONS(203),
    [sym_inline_math_shift] = ACTIONS(203),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [49] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(205),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(207),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(209),
  },
  [50] = {
    [sym__common] = STATE(217),
    [sym__math_mode_common] = STATE(217),
    [sym__math_mode] = STATE(217),
    [sym_parameter] = STATE(217),
    [sym_math_env] = STATE(217),
    [sym_tag] = STATE(217),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(217),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(217),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(217),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(217),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(217),
    [sym_opt_math_group] = STATE(217),
    [sym_token] = STATE(217),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(217),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(213),
  },
  [51] = {
    [sym_implicit_math_shift] = ACTIONS(215),
    [sym_inline_math_shift] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [52] = {
    [sym_math_text_group] = STATE(220),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(217),
  },
  [53] = {
    [sym__common] = STATE(223),
    [sym__math_mode_common] = STATE(223),
    [sym__math_mode] = STATE(223),
    [sym_parameter] = STATE(223),
    [sym_math_env] = STATE(223),
    [sym_tag] = STATE(223),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(223),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(221),
    [sym_end_token] = STATE(222),
    [sym_include] = STATE(223),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(223),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(223),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(223),
    [sym_opt_math_group] = STATE(223),
    [sym_token] = STATE(223),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(223),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_text] = ACTIONS(219),
  },
  [54] = {
    [sym_text_group] = STATE(225),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(221),
  },
  [55] = {
    [sym_implicit_math_shift] = ACTIONS(133),
    [sym_inline_math_shift] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [56] = {
    [sym_escaped] = STATE(226),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [57] = {
    [sym__common] = STATE(229),
    [sym__math_mode_common] = STATE(229),
    [sym__math_mode] = STATE(229),
    [sym_parameter] = STATE(229),
    [sym_math_env] = STATE(229),
    [sym_tag] = STATE(229),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(229),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(229),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(229),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(229),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(229),
    [sym_opt_math_group] = STATE(229),
    [sym_token] = STATE(229),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(228),
    [aux_sym_math_mode_repeat1] = STATE(229),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [58] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode] = STATE(230),
    [sym_parameter] = STATE(230),
    [sym_math_env] = STATE(230),
    [sym_tag] = STATE(230),
    [sym_tag_token] = STATE(52),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(53),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(230),
    [sym_include_token] = STATE(54),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(230),
    [sym_opt_math_group] = STATE(230),
    [sym_token] = STATE(230),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(197),
    [sym_inline_math_shift] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(41),
    [sym_begin_group] = ACTIONS(43),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [59] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(229),
  },
  [60] = {
    [sym_verb_delim] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [61] = {
    [sym__whitespace] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(235),
    [sym_begin_group] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_text] = ACTIONS(237),
  },
  [62] = {
    [sym__whitespace] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(243),
  },
  [63] = {
    [sym_display_math_shift] = ACTIONS(245),
    [sym_inline_math_shift] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [64] = {
    [sym__whitespace] = ACTIONS(247),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(249),
  },
  [65] = {
    [sym__whitespace] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(253),
  },
  [66] = {
    [sym__whitespace] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(257),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(257),
  },
  [67] = {
    [sym__whitespace] = ACTIONS(259),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(261),
  },
  [68] = {
    [sym__whitespace] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(267),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(265),
  },
  [69] = {
    [sym_display_math_shift] = ACTIONS(269),
    [sym_inline_math_shift] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym__whitespace] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [70] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
  },
  [71] = {
    [sym__whitespace] = ACTIONS(277),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(279),
  },
  [72] = {
    [sym__whitespace] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(283),
  },
  [73] = {
    [sym__whitespace] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(287),
  },
  [74] = {
    [sym__whitespace] = ACTIONS(289),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(291),
  },
  [75] = {
    [sym__whitespace] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(295),
  },
  [76] = {
    [sym_display_math_shift] = ACTIONS(297),
    [sym_inline_math_shift] = ACTIONS(297),
    [sym__whitespace] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(301),
  },
  [77] = {
    [sym_display_math_shift] = ACTIONS(303),
    [sym_inline_math_shift] = ACTIONS(303),
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym__whitespace] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [78] = {
    [sym__common] = STATE(46),
    [sym__math_mode_common] = STATE(46),
    [sym__math_mode] = STATE(46),
    [sym_math_mode] = STATE(249),
    [sym_parameter] = STATE(46),
    [sym_math_env] = STATE(46),
    [sym_tag] = STATE(46),
    [sym_tag_token] = STATE(39),
    [sym_escaped] = STATE(46),
    [sym_begin] = STATE(40),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(46),
    [sym_include_token] = STATE(42),
    [sym_storage] = STATE(46),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(46),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(46),
    [sym_opt_math_group] = STATE(46),
    [sym_token] = STATE(46),
    [sym_begin_opt] = STATE(45),
    [aux_sym_math_mode_repeat1] = STATE(46),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(309),
    [sym_display_math_shift] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_alignment_tab] = ACTIONS(35),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(35),
    [sym_subscript] = ACTIONS(35),
    [sym_active_char] = ACTIONS(35),
    [sym_text] = ACTIONS(35),
  },
  [79] = {
    [sym__common] = STATE(58),
    [sym__math_mode_common] = STATE(58),
    [sym__math_mode] = STATE(58),
    [sym_math_mode] = STATE(251),
    [sym_parameter] = STATE(58),
    [sym_math_env] = STATE(58),
    [sym_tag] = STATE(58),
    [sym_tag_token] = STATE(52),
    [sym_escaped] = STATE(58),
    [sym_begin] = STATE(53),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(58),
    [sym_include_token] = STATE(54),
    [sym_storage] = STATE(58),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(58),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(58),
    [sym_opt_math_group] = STATE(58),
    [sym_token] = STATE(58),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(58),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(311),
    [sym_inline_math_shift] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(41),
    [sym_begin_group] = ACTIONS(43),
    [sym_alignment_tab] = ACTIONS(45),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(45),
    [sym_subscript] = ACTIONS(45),
    [sym_active_char] = ACTIONS(45),
    [sym_text] = ACTIONS(45),
  },
  [80] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(313),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(315),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [anon_sym_makeatletter] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(317),
  },
  [81] = {
    [sym__common] = STATE(256),
    [sym__text_mode_common] = STATE(256),
    [sym_inline_verbatim] = STATE(256),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(256),
    [sym_text_mode_at_region] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_env] = STATE(256),
    [sym__display_math] = STATE(256),
    [sym_tex_display_math] = STATE(256),
    [sym_latex_display_math] = STATE(256),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(256),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(256),
    [sym_tex_inline_math] = STATE(256),
    [sym_latex_inline_math] = STATE(256),
    [sym_inline_math_env] = STATE(256),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(256),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(256),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(256),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(256),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(256),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(256),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(256),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(256),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(256),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(256),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(256),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(256),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(256),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(256),
    [sym_opt_text_group] = STATE(256),
    [sym_token] = STATE(256),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(256),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(321),
    [sym_text] = ACTIONS(321),
  },
  [82] = {
    [sym_display_math_shift] = ACTIONS(323),
    [sym_inline_math_shift] = ACTIONS(323),
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [83] = {
    [sym_display_math_shift] = ACTIONS(103),
    [sym_inline_math_shift] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(103),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
  },
  [84] = {
    [sym_verb_delim] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [85] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(258),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [86] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(259),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [87] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(260),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [88] = {
    [sym__common] = STATE(116),
    [sym__math_mode_common] = STATE(116),
    [sym__math_mode] = STATE(116),
    [sym_math_mode] = STATE(261),
    [sym_parameter] = STATE(116),
    [sym_math_env] = STATE(116),
    [sym_tag] = STATE(116),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(116),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(116),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(116),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(116),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(116),
    [sym_opt_math_group] = STATE(116),
    [sym_token] = STATE(116),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(116),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [89] = {
    [sym_verbatim_end] = STATE(262),
    [sym_verbatim_text] = STATE(263),
    [sym_end_token] = STATE(264),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [aux_sym_verbatim_text_repeat2] = STATE(126),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
    [sym__end_of_line] = ACTIONS(123),
  },
  [90] = {
    [sym__common] = STATE(267),
    [sym__text_mode_common] = STATE(267),
    [sym_inline_verbatim] = STATE(267),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(267),
    [sym_text_mode_at_region] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_text_env] = STATE(267),
    [sym__display_math] = STATE(267),
    [sym_tex_display_math] = STATE(267),
    [sym_latex_display_math] = STATE(267),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(267),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(267),
    [sym_tex_inline_math] = STATE(267),
    [sym_latex_inline_math] = STATE(267),
    [sym_inline_math_env] = STATE(267),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(267),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(267),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(265),
    [sym_end_token] = STATE(266),
    [sym_documentclass] = STATE(267),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(267),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(267),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(267),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(267),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(267),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(267),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(267),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(267),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(267),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(267),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(267),
    [sym_opt_text_group] = STATE(267),
    [sym_token] = STATE(267),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(267),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [91] = {
    [sym_simple_text_group] = STATE(269),
    [sym_opt_text_group] = STATE(270),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [92] = {
    [sym_simple_text_group] = STATE(271),
    [sym_opt_text_group] = STATE(272),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [93] = {
    [sym_text_group] = STATE(273),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [94] = {
    [sym_text_group] = STATE(274),
    [sym_opt_text_group] = STATE(275),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [95] = {
    [sym_display_math_shift] = ACTIONS(133),
    [sym_inline_math_shift] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [96] = {
    [sym_escaped] = STATE(276),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [97] = {
    [sym_text_group] = STATE(277),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [98] = {
    [sym_text_group] = STATE(278),
    [sym_opt_text_group] = STATE(279),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [99] = {
    [sym_text_group] = STATE(280),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [100] = {
    [sym_text_group] = STATE(281),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [101] = {
    [sym_text_group] = STATE(282),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [102] = {
    [sym__common] = STATE(174),
    [sym__text_mode_common] = STATE(174),
    [sym_inline_verbatim] = STATE(174),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(174),
    [sym_text_mode_at] = STATE(284),
    [sym_parameter] = STATE(174),
    [sym_text_env_at] = STATE(174),
    [sym__display_math_at] = STATE(174),
    [sym_tex_display_math_at] = STATE(174),
    [sym_latex_display_math_at] = STATE(174),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(174),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(174),
    [sym_tex_inline_math_at] = STATE(174),
    [sym_latex_inline_math_at] = STATE(174),
    [sym_inline_math_env_at] = STATE(174),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(174),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(174),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(174),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(174),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(174),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(174),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(174),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(174),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(174),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(174),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(174),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(174),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(174),
    [sym_texttt_token] = STATE(170),
    [sym_makeatother] = STATE(285),
    [sym_makeatother_token] = STATE(286),
    [sym_text_group_at] = STATE(174),
    [sym_opt_text_group_at] = STATE(174),
    [sym_token_at] = STATE(174),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(174),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
  },
  [103] = {
    [sym__common] = STATE(289),
    [sym__text_mode_common] = STATE(289),
    [sym_inline_verbatim] = STATE(289),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(289),
    [sym_text_mode_at_region] = STATE(289),
    [sym_parameter] = STATE(289),
    [sym_text_env] = STATE(289),
    [sym__display_math] = STATE(289),
    [sym_tex_display_math] = STATE(289),
    [sym_latex_display_math] = STATE(289),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(289),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(289),
    [sym_tex_inline_math] = STATE(289),
    [sym_latex_inline_math] = STATE(289),
    [sym_inline_math_env] = STATE(289),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(289),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(289),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(289),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(289),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(289),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(289),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(289),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(289),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(289),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(289),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(289),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(289),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(289),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(289),
    [sym_opt_text_group] = STATE(289),
    [sym_token] = STATE(289),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(288),
    [aux_sym_text_mode_repeat1] = STATE(289),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(335),
    [sym_text] = ACTIONS(335),
  },
  [104] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(337),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [105] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(341),
  },
  [106] = {
    [sym_verb_body] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [107] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(347),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(349),
  },
  [108] = {
    [sym__common] = STATE(298),
    [sym__math_mode_common] = STATE(298),
    [sym__math_mode] = STATE(298),
    [sym_parameter] = STATE(298),
    [sym_math_env] = STATE(298),
    [sym_tag] = STATE(298),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(298),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(298),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(298),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(298),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(298),
    [sym_opt_math_group] = STATE(298),
    [sym_token] = STATE(298),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(298),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(353),
    [sym_active_char] = ACTIONS(353),
    [sym_text] = ACTIONS(353),
  },
  [109] = {
    [sym_end_display_math] = STATE(300),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(355),
  },
  [110] = {
    [sym_math_text_group] = STATE(302),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(357),
  },
  [111] = {
    [sym__common] = STATE(305),
    [sym__math_mode_common] = STATE(305),
    [sym__math_mode] = STATE(305),
    [sym_parameter] = STATE(305),
    [sym_math_env] = STATE(305),
    [sym_tag] = STATE(305),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(305),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(303),
    [sym_end_token] = STATE(304),
    [sym_include] = STATE(305),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(305),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(305),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(305),
    [sym_opt_math_group] = STATE(305),
    [sym_token] = STATE(305),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(305),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [112] = {
    [sym_text_group] = STATE(307),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(361),
  },
  [113] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [114] = {
    [sym_escaped] = STATE(308),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [115] = {
    [sym__common] = STATE(311),
    [sym__math_mode_common] = STATE(311),
    [sym__math_mode] = STATE(311),
    [sym_parameter] = STATE(311),
    [sym_math_env] = STATE(311),
    [sym_tag] = STATE(311),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(311),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(311),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(311),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(311),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(311),
    [sym_opt_math_group] = STATE(311),
    [sym_token] = STATE(311),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(310),
    [aux_sym_math_mode_repeat1] = STATE(311),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [116] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [117] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(369),
  },
  [118] = {
    [sym_end_inline_math] = STATE(315),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(371),
  },
  [119] = {
    [sym_display_math_end] = STATE(316),
    [sym_end_token] = STATE(317),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [120] = {
    [sym_inline_math_end] = STATE(318),
    [sym_end_token] = STATE(319),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [121] = {
    [anon_sym_end] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [122] = {
    [sym_display_math_shift] = ACTIONS(375),
    [sym_inline_math_shift] = ACTIONS(375),
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [123] = {
    [sym_verbatim_end] = STATE(321),
    [sym_end_token] = STATE(124),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [124] = {
    [sym_verbatim_env_group] = STATE(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(377),
  },
  [125] = {
    [aux_sym_verbatim_text_repeat1] = STATE(325),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(381),
  },
  [126] = {
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [aux_sym_verbatim_text_repeat2] = STATE(326),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(383),
    [sym__end_of_line] = ACTIONS(385),
  },
  [127] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(387),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [anon_sym_makeatletter] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(85),
  },
  [128] = {
    [sym_display_math_shift] = ACTIONS(389),
    [sym_inline_math_shift] = ACTIONS(389),
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [sym_active_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [129] = {
    [sym_simple_text_group] = STATE(327),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [130] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(329),
    [sym_text_mode_at_region] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env] = STATE(329),
    [sym__display_math] = STATE(329),
    [sym_tex_display_math] = STATE(329),
    [sym_latex_display_math] = STATE(329),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(329),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(329),
    [sym_tex_inline_math] = STATE(329),
    [sym_latex_inline_math] = STATE(329),
    [sym_inline_math_env] = STATE(329),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(328),
    [sym_end_token] = STATE(129),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(329),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(329),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(329),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(329),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(329),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(329),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(329),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(329),
    [sym_opt_text_group] = STATE(329),
    [sym_token] = STATE(329),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [131] = {
    [sym_display_math_env_name] = ACTIONS(393),
    [sym_inline_math_env_name] = ACTIONS(395),
    [sym_verbatim_env_name] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(399),
  },
  [132] = {
    [sym_text_group] = STATE(336),
    [sym_opt_text_group] = STATE(337),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(403),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(405),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(405),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [134] = {
    [sym_text_group] = STATE(339),
    [sym_opt_text_group] = STATE(340),
    [sym_begin_opt] = STATE(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(407),
  },
  [135] = {
    [sym_display_math_shift] = ACTIONS(409),
    [sym_inline_math_shift] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [136] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(411),
  },
  [137] = {
    [sym_display_math_shift] = ACTIONS(413),
    [sym_inline_math_shift] = ACTIONS(413),
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [138] = {
    [sym_simple_text_group] = STATE(342),
    [sym__whitespace] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [139] = {
    [sym__common] = STATE(345),
    [sym__text_mode_common] = STATE(345),
    [sym_inline_verbatim] = STATE(345),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(345),
    [sym_text_mode_at_region] = STATE(345),
    [sym_parameter] = STATE(345),
    [sym_text_env] = STATE(345),
    [sym__display_math] = STATE(345),
    [sym_tex_display_math] = STATE(345),
    [sym_latex_display_math] = STATE(345),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(345),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(345),
    [sym_tex_inline_math] = STATE(345),
    [sym_latex_inline_math] = STATE(345),
    [sym_inline_math_env] = STATE(345),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(345),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(345),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(345),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(345),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(345),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(345),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(345),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(345),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(345),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(345),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(345),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(345),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(345),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(345),
    [sym_opt_text_group] = STATE(345),
    [sym_token] = STATE(345),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(344),
    [aux_sym_text_mode_repeat1] = STATE(345),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [140] = {
    [sym_display_math_shift] = ACTIONS(421),
    [sym_inline_math_shift] = ACTIONS(421),
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [141] = {
    [sym_simple_text_group] = STATE(347),
    [sym__whitespace] = ACTIONS(423),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [142] = {
    [sym_display_math_shift] = ACTIONS(425),
    [sym_inline_math_shift] = ACTIONS(425),
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [143] = {
    [sym_display_math_shift] = ACTIONS(427),
    [sym_inline_math_shift] = ACTIONS(427),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [144] = {
    [sym_text_group] = STATE(349),
    [sym__whitespace] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [145] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [146] = {
    [anon_sym_EQ] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [147] = {
    [sym_display_math_shift] = ACTIONS(435),
    [sym_inline_math_shift] = ACTIONS(435),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(435),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [148] = {
    [sym_display_math_shift] = ACTIONS(437),
    [sym_inline_math_shift] = ACTIONS(437),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(437),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(437),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [149] = {
    [sym_text_group] = STATE(353),
    [sym__whitespace] = ACTIONS(439),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [150] = {
    [sym_display_math_shift] = ACTIONS(441),
    [sym_inline_math_shift] = ACTIONS(441),
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(441),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [151] = {
    [sym_display_math_shift] = ACTIONS(443),
    [sym_inline_math_shift] = ACTIONS(443),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [152] = {
    [sym_display_math_shift] = ACTIONS(445),
    [sym_inline_math_shift] = ACTIONS(445),
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [153] = {
    [sym__common] = STATE(362),
    [sym__math_mode_common] = STATE(362),
    [sym__math_mode_at] = STATE(362),
    [sym_math_mode_at] = STATE(357),
    [sym_parameter] = STATE(362),
    [sym_math_env_at] = STATE(362),
    [sym_tag_at] = STATE(362),
    [sym_tag_token] = STATE(358),
    [sym_escaped] = STATE(362),
    [sym_begin] = STATE(359),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(362),
    [sym_include_token] = STATE(360),
    [sym_storage] = STATE(362),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(362),
    [sym_catcode_token] = STATE(44),
    [sym_math_group_at] = STATE(362),
    [sym_opt_math_group_at] = STATE(362),
    [sym_token_at] = STATE(362),
    [sym_begin_opt] = STATE(361),
    [aux_sym_math_mode_at_repeat1] = STATE(362),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(447),
    [sym_display_math_shift] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(453),
    [sym_text] = ACTIONS(453),
  },
  [154] = {
    [sym__common] = STATE(371),
    [sym__math_mode_common] = STATE(371),
    [sym__math_mode_at] = STATE(371),
    [sym_math_mode_at] = STATE(366),
    [sym_parameter] = STATE(371),
    [sym_math_env_at] = STATE(371),
    [sym_tag_at] = STATE(371),
    [sym_tag_token] = STATE(367),
    [sym_escaped] = STATE(371),
    [sym_begin] = STATE(368),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(371),
    [sym_include_token] = STATE(369),
    [sym_storage] = STATE(371),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(371),
    [sym_catcode_token] = STATE(56),
    [sym_math_group_at] = STATE(371),
    [sym_opt_math_group_at] = STATE(371),
    [sym_token_at] = STATE(371),
    [sym_begin_opt] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(371),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(455),
    [sym_inline_math_shift] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(461),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(461),
    [sym_active_char] = ACTIONS(461),
    [sym_text] = ACTIONS(461),
  },
  [155] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [anon_sym_makeatother] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(465),
  },
  [156] = {
    [sym__common] = STATE(392),
    [sym__text_mode_common] = STATE(392),
    [sym_inline_verbatim] = STATE(392),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(392),
    [sym_parameter] = STATE(392),
    [sym_text_env_at] = STATE(392),
    [sym__display_math_at] = STATE(392),
    [sym_tex_display_math_at] = STATE(392),
    [sym_latex_display_math_at] = STATE(392),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(392),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(392),
    [sym_tex_inline_math_at] = STATE(392),
    [sym_latex_inline_math_at] = STATE(392),
    [sym_inline_math_env_at] = STATE(392),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(392),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(392),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(392),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(392),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(392),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(392),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(392),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(392),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(392),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(392),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(392),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(392),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(392),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(392),
    [sym_opt_text_group_at] = STATE(392),
    [sym_token_at] = STATE(392),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(392),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(475),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(477),
    [sym_text] = ACTIONS(477),
  },
  [157] = {
    [sym_makeatother] = STATE(394),
    [sym_makeatother_token] = STATE(172),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(479),
  },
  [158] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(397),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [159] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(403),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [160] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(404),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [161] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(405),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [162] = {
    [sym__common] = STATE(408),
    [sym__text_mode_common] = STATE(408),
    [sym_inline_verbatim] = STATE(408),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(408),
    [sym_parameter] = STATE(408),
    [sym_text_env_at] = STATE(408),
    [sym__display_math_at] = STATE(408),
    [sym_tex_display_math_at] = STATE(408),
    [sym_latex_display_math_at] = STATE(408),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(408),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(408),
    [sym_tex_inline_math_at] = STATE(408),
    [sym_latex_inline_math_at] = STATE(408),
    [sym_inline_math_env_at] = STATE(408),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(408),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(408),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_end] = STATE(407),
    [sym_end_token] = STATE(129),
    [sym_documentclass] = STATE(408),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(408),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(408),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(408),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(408),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(408),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(408),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(408),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(408),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(408),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(408),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(408),
    [sym_opt_text_group_at] = STATE(408),
    [sym_token_at] = STATE(408),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(408),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(489),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(489),
    [sym_text] = ACTIONS(489),
  },
  [163] = {
    [sym_display_math_env_group] = STATE(409),
    [sym_inline_math_env_group] = STATE(133),
    [sym_verbatim_env_group] = STATE(134),
    [sym_simple_text_group] = STATE(135),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(129),
  },
  [164] = {
    [sym_text_group_at] = STATE(410),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [165] = {
    [sym_text_group_at] = STATE(411),
    [sym_opt_text_group_at] = STATE(412),
    [sym_begin_opt] = STATE(413),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [166] = {
    [sym_text_group_at] = STATE(414),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [167] = {
    [sym_text_group_at] = STATE(415),
    [sym_opt_text_group_at] = STATE(416),
    [sym_begin_opt] = STATE(413),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [168] = {
    [sym_text_group_at] = STATE(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [169] = {
    [sym_text_group_at] = STATE(418),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [170] = {
    [sym_text_group_at] = STATE(419),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [171] = {
    [sym_display_math_shift] = ACTIONS(491),
    [sym_inline_math_shift] = ACTIONS(491),
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(491),
    [sym_begin_group] = ACTIONS(491),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [172] = {
    [sym_display_math_shift] = ACTIONS(493),
    [sym_inline_math_shift] = ACTIONS(493),
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [173] = {
    [sym__common] = STATE(422),
    [sym__text_mode_common] = STATE(422),
    [sym_inline_verbatim] = STATE(422),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(422),
    [sym_parameter] = STATE(422),
    [sym_text_env_at] = STATE(422),
    [sym__display_math_at] = STATE(422),
    [sym_tex_display_math_at] = STATE(422),
    [sym_latex_display_math_at] = STATE(422),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(422),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(422),
    [sym_tex_inline_math_at] = STATE(422),
    [sym_latex_inline_math_at] = STATE(422),
    [sym_inline_math_env_at] = STATE(422),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(422),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(422),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(422),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(422),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(422),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(422),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(422),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(422),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(422),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(422),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(422),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(422),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(422),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(422),
    [sym_opt_text_group_at] = STATE(422),
    [sym_token_at] = STATE(422),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(421),
    [aux_sym_text_mode_at_repeat1] = STATE(422),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [174] = {
    [sym__common] = STATE(423),
    [sym__text_mode_common] = STATE(423),
    [sym_inline_verbatim] = STATE(423),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(423),
    [sym_parameter] = STATE(423),
    [sym_text_env_at] = STATE(423),
    [sym__display_math_at] = STATE(423),
    [sym_tex_display_math_at] = STATE(423),
    [sym_latex_display_math_at] = STATE(423),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(423),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(423),
    [sym_tex_inline_math_at] = STATE(423),
    [sym_latex_inline_math_at] = STATE(423),
    [sym_inline_math_env_at] = STATE(423),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(423),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(423),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(423),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(423),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(423),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(423),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(423),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(423),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(423),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(423),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(423),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(423),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(423),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(423),
    [sym_opt_text_group_at] = STATE(423),
    [sym_token_at] = STATE(423),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(423),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(499),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [175] = {
    [sym_display_math_shift] = ACTIONS(503),
    [sym_inline_math_shift] = ACTIONS(503),
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [176] = {
    [sym_display_math_shift] = ACTIONS(505),
    [sym_inline_math_shift] = ACTIONS(505),
    [ts_builtin_sym_end] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(505),
    [sym_begin_group] = ACTIONS(505),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(505),
    [sym_superscript] = ACTIONS(505),
    [sym_subscript] = ACTIONS(505),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [177] = {
    [sym__common] = STATE(425),
    [sym__text_mode_common] = STATE(425),
    [sym_inline_verbatim] = STATE(425),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(425),
    [sym_text_mode_at_region] = STATE(425),
    [sym_parameter] = STATE(425),
    [sym_text_env] = STATE(425),
    [sym__display_math] = STATE(425),
    [sym_tex_display_math] = STATE(425),
    [sym_latex_display_math] = STATE(425),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(425),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(425),
    [sym_tex_inline_math] = STATE(425),
    [sym_latex_inline_math] = STATE(425),
    [sym_inline_math_env] = STATE(425),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(425),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(425),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(425),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(425),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(425),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(425),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(425),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(425),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(425),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(425),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(425),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(425),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(425),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(425),
    [sym_opt_text_group] = STATE(425),
    [sym_token] = STATE(425),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(424),
    [aux_sym_text_mode_repeat1] = STATE(425),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [178] = {
    [sym__common] = STATE(178),
    [sym__text_mode_common] = STATE(178),
    [sym_inline_verbatim] = STATE(178),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(178),
    [sym_text_mode_at_region] = STATE(178),
    [sym_parameter] = STATE(178),
    [sym_text_env] = STATE(178),
    [sym__display_math] = STATE(178),
    [sym_tex_display_math] = STATE(178),
    [sym_latex_display_math] = STATE(178),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(178),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(178),
    [sym_tex_inline_math] = STATE(178),
    [sym_latex_inline_math] = STATE(178),
    [sym_inline_math_env] = STATE(178),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(178),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(178),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(178),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(178),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(178),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(178),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(178),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(178),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(178),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(178),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(178),
    [sym_token] = STATE(178),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(178),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(509),
    [sym_inline_math_shift] = ACTIONS(512),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(523),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(526),
    [sym_text] = ACTIONS(526),
  },
  [179] = {
    [sym_display_math_shift] = ACTIONS(535),
    [sym_inline_math_shift] = ACTIONS(535),
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [180] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(537),
    [sym_number] = ACTIONS(540),
  },
  [181] = {
    [sym__whitespace] = ACTIONS(542),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(544),
  },
  [182] = {
    [sym_implicit_math_shift] = ACTIONS(245),
    [sym_display_math_shift] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [183] = {
    [sym_implicit_math_shift] = ACTIONS(269),
    [sym_display_math_shift] = ACTIONS(269),
    [sym__whitespace] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [184] = {
    [sym_implicit_math_shift] = ACTIONS(303),
    [sym_display_math_shift] = ACTIONS(303),
    [sym__whitespace] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [185] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(550),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(552),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(554),
  },
  [186] = {
    [sym__common] = STATE(433),
    [sym__math_mode_common] = STATE(433),
    [sym__math_mode] = STATE(433),
    [sym_parameter] = STATE(433),
    [sym_math_env] = STATE(433),
    [sym_tag] = STATE(433),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(433),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(433),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(433),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(433),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(433),
    [sym_opt_math_group] = STATE(433),
    [sym_token] = STATE(433),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(433),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(556),
    [sym_alignment_tab] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_text] = ACTIONS(558),
  },
  [187] = {
    [sym_implicit_math_shift] = ACTIONS(560),
    [sym_display_math_shift] = ACTIONS(560),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [188] = {
    [sym_math_text_group] = STATE(435),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(562),
  },
  [189] = {
    [sym__common] = STATE(438),
    [sym__math_mode_common] = STATE(438),
    [sym__math_mode] = STATE(438),
    [sym_parameter] = STATE(438),
    [sym_math_env] = STATE(438),
    [sym_tag] = STATE(438),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(438),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(436),
    [sym_end_token] = STATE(437),
    [sym_include] = STATE(438),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(438),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(438),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(438),
    [sym_opt_math_group] = STATE(438),
    [sym_token] = STATE(438),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(438),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_text] = ACTIONS(564),
  },
  [190] = {
    [sym_text_group] = STATE(440),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(566),
  },
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [192] = {
    [sym_escaped] = STATE(441),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(135),
  },
  [193] = {
    [sym__common] = STATE(444),
    [sym__math_mode_common] = STATE(444),
    [sym__math_mode] = STATE(444),
    [sym_parameter] = STATE(444),
    [sym_math_env] = STATE(444),
    [sym_tag] = STATE(444),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(444),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(444),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(444),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(444),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(444),
    [sym_opt_math_group] = STATE(444),
    [sym_token] = STATE(444),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(443),
    [aux_sym_math_mode_repeat1] = STATE(444),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [194] = {
    [sym__common] = STATE(446),
    [sym__math_mode_common] = STATE(446),
    [sym__math_mode] = STATE(446),
    [sym_parameter] = STATE(446),
    [sym_math_env] = STATE(446),
    [sym_tag] = STATE(446),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(446),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(446),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(446),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(446),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(446),
    [sym_opt_math_group] = STATE(446),
    [sym_token] = STATE(446),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(446),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(572),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [195] = {
    [aux_sym_parameter_repeat1] = STATE(180),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(157),
    [sym_number] = ACTIONS(576),
  },
  [196] = {
    [sym_display_math_shift] = ACTIONS(578),
    [sym_inline_math_shift] = ACTIONS(578),
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(578),
    [sym_begin_group] = ACTIONS(578),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(578),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_text] = ACTIONS(578),
  },
  [197] = {
    [sym__common] = STATE(450),
    [sym__text_mode_common] = STATE(450),
    [sym_inline_verbatim] = STATE(450),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(450),
    [sym_text_mode] = STATE(449),
    [sym_text_mode_at_region] = STATE(450),
    [sym_parameter] = STATE(450),
    [sym_text_env] = STATE(450),
    [sym__display_math] = STATE(450),
    [sym_tex_display_math] = STATE(450),
    [sym_latex_display_math] = STATE(450),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(450),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(450),
    [sym_tex_inline_math] = STATE(450),
    [sym_latex_inline_math] = STATE(450),
    [sym_inline_math_env] = STATE(450),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(450),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(450),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(450),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(450),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(450),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(450),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(450),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(450),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(450),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(450),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(450),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(450),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(450),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(450),
    [sym_opt_text_group] = STATE(450),
    [sym_token] = STATE(450),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(450),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(580),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [198] = {
    [sym_implicit_math_shift] = ACTIONS(584),
    [sym_display_math_shift] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [199] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(387),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(347),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(349),
  },
  [200] = {
    [sym_implicit_math_shift] = ACTIONS(586),
    [sym_display_math_shift] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [201] = {
    [sym_simple_text_group] = STATE(452),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(588),
  },
  [202] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(453),
    [sym_end_token] = STATE(201),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [203] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(590),
  },
  [204] = {
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [205] = {
    [sym__common] = STATE(456),
    [sym__text_mode_common] = STATE(456),
    [sym_inline_verbatim] = STATE(456),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(456),
    [sym_text_mode_at_region] = STATE(456),
    [sym_parameter] = STATE(456),
    [sym_text_env] = STATE(456),
    [sym__display_math] = STATE(456),
    [sym_tex_display_math] = STATE(456),
    [sym_latex_display_math] = STATE(456),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(456),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(456),
    [sym_tex_inline_math] = STATE(456),
    [sym_latex_inline_math] = STATE(456),
    [sym_inline_math_env] = STATE(456),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(456),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(456),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(456),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(456),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(456),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(456),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(456),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(456),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(456),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(456),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(456),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(456),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(456),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(456),
    [sym_opt_text_group] = STATE(456),
    [sym_token] = STATE(456),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(456),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(592),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [206] = {
    [sym_implicit_math_shift] = ACTIONS(425),
    [sym_display_math_shift] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [207] = {
    [anon_sym_EQ] = ACTIONS(596),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [208] = {
    [sym_implicit_math_shift] = ACTIONS(503),
    [sym_display_math_shift] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [209] = {
    [sym_implicit_math_shift] = ACTIONS(598),
    [sym_display_math_shift] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [210] = {
    [sym__common] = STATE(459),
    [sym__math_mode_common] = STATE(459),
    [sym__math_mode] = STATE(459),
    [sym_parameter] = STATE(459),
    [sym_math_env] = STATE(459),
    [sym_tag] = STATE(459),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(459),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(459),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(459),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(459),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(459),
    [sym_opt_math_group] = STATE(459),
    [sym_token] = STATE(459),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(458),
    [aux_sym_math_mode_repeat1] = STATE(459),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [211] = {
    [sym__common] = STATE(211),
    [sym__math_mode_common] = STATE(211),
    [sym__math_mode] = STATE(211),
    [sym_parameter] = STATE(211),
    [sym_math_env] = STATE(211),
    [sym_tag] = STATE(211),
    [sym_tag_token] = STATE(39),
    [sym_escaped] = STATE(211),
    [sym_begin] = STATE(40),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(211),
    [sym_include_token] = STATE(42),
    [sym_storage] = STATE(211),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(211),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(211),
    [sym_opt_math_group] = STATE(211),
    [sym_token] = STATE(211),
    [sym_begin_opt] = STATE(45),
    [aux_sym_math_mode_repeat1] = STATE(211),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(602),
    [sym_display_math_shift] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(610),
    [sym_alignment_tab] = ACTIONS(613),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(613),
    [sym_subscript] = ACTIONS(613),
    [sym_active_char] = ACTIONS(613),
    [sym_text] = ACTIONS(613),
  },
  [212] = {
    [sym_implicit_math_shift] = ACTIONS(535),
    [sym_display_math_shift] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [213] = {
    [sym_implicit_math_shift] = ACTIONS(245),
    [sym_inline_math_shift] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [214] = {
    [sym_implicit_math_shift] = ACTIONS(269),
    [sym_inline_math_shift] = ACTIONS(269),
    [sym__whitespace] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [215] = {
    [sym_implicit_math_shift] = ACTIONS(303),
    [sym_inline_math_shift] = ACTIONS(303),
    [sym__whitespace] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [216] = {
    [sym_implicit_math_shift] = ACTIONS(560),
    [sym_inline_math_shift] = ACTIONS(560),
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [217] = {
    [sym__common] = STATE(446),
    [sym__math_mode_common] = STATE(446),
    [sym__math_mode] = STATE(446),
    [sym_parameter] = STATE(446),
    [sym_math_env] = STATE(446),
    [sym_tag] = STATE(446),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(446),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(446),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(446),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(446),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(446),
    [sym_opt_math_group] = STATE(446),
    [sym_token] = STATE(446),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(446),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(623),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [218] = {
    [sym_display_math_shift] = ACTIONS(625),
    [sym_inline_math_shift] = ACTIONS(625),
    [ts_builtin_sym_end] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(625),
    [anon_sym_RBRACK] = ACTIONS(625),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(625),
    [sym_begin_group] = ACTIONS(625),
    [sym_alignment_tab] = ACTIONS(625),
    [sym_parameter_char] = ACTIONS(625),
    [sym_superscript] = ACTIONS(625),
    [sym_subscript] = ACTIONS(625),
    [sym_active_char] = ACTIONS(625),
    [sym_text] = ACTIONS(625),
  },
  [219] = {
    [sym__common] = STATE(450),
    [sym__text_mode_common] = STATE(450),
    [sym_inline_verbatim] = STATE(450),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(450),
    [sym_text_mode] = STATE(464),
    [sym_text_mode_at_region] = STATE(450),
    [sym_parameter] = STATE(450),
    [sym_text_env] = STATE(450),
    [sym__display_math] = STATE(450),
    [sym_tex_display_math] = STATE(450),
    [sym_latex_display_math] = STATE(450),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(450),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(450),
    [sym_tex_inline_math] = STATE(450),
    [sym_latex_inline_math] = STATE(450),
    [sym_inline_math_env] = STATE(450),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(450),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(450),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(450),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(450),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(450),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(450),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(450),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(450),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(450),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(450),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(450),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(450),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(450),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(450),
    [sym_opt_text_group] = STATE(450),
    [sym_token] = STATE(450),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(450),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(627),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [220] = {
    [sym_implicit_math_shift] = ACTIONS(584),
    [sym_inline_math_shift] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [221] = {
    [sym_implicit_math_shift] = ACTIONS(586),
    [sym_inline_math_shift] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [222] = {
    [sym_simple_text_group] = STATE(466),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(629),
  },
  [223] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(467),
    [sym_end_token] = STATE(222),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [224] = {
    [sym__common] = STATE(469),
    [sym__text_mode_common] = STATE(469),
    [sym_inline_verbatim] = STATE(469),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(469),
    [sym_text_mode_at_region] = STATE(469),
    [sym_parameter] = STATE(469),
    [sym_text_env] = STATE(469),
    [sym__display_math] = STATE(469),
    [sym_tex_display_math] = STATE(469),
    [sym_latex_display_math] = STATE(469),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(469),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(469),
    [sym_tex_inline_math] = STATE(469),
    [sym_latex_inline_math] = STATE(469),
    [sym_inline_math_env] = STATE(469),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(469),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(469),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(469),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(469),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(469),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(469),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(469),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(469),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(469),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(469),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(469),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(469),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(469),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(469),
    [sym_opt_text_group] = STATE(469),
    [sym_token] = STATE(469),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(469),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(631),
    [sym_alignment_tab] = ACTIONS(633),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(633),
    [sym_text] = ACTIONS(633),
  },
  [225] = {
    [sym_implicit_math_shift] = ACTIONS(425),
    [sym_inline_math_shift] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [226] = {
    [anon_sym_EQ] = ACTIONS(635),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [227] = {
    [sym_implicit_math_shift] = ACTIONS(503),
    [sym_inline_math_shift] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [228] = {
    [sym_implicit_math_shift] = ACTIONS(598),
    [sym_inline_math_shift] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [229] = {
    [sym__common] = STATE(459),
    [sym__math_mode_common] = STATE(459),
    [sym__math_mode] = STATE(459),
    [sym_parameter] = STATE(459),
    [sym_math_env] = STATE(459),
    [sym_tag] = STATE(459),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(459),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(459),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(459),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(459),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(459),
    [sym_opt_math_group] = STATE(459),
    [sym_token] = STATE(459),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(471),
    [aux_sym_math_mode_repeat1] = STATE(459),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [230] = {
    [sym__common] = STATE(230),
    [sym__math_mode_common] = STATE(230),
    [sym__math_mode] = STATE(230),
    [sym_parameter] = STATE(230),
    [sym_math_env] = STATE(230),
    [sym_tag] = STATE(230),
    [sym_tag_token] = STATE(52),
    [sym_escaped] = STATE(230),
    [sym_begin] = STATE(53),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(230),
    [sym_include_token] = STATE(54),
    [sym_storage] = STATE(230),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(230),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(230),
    [sym_opt_math_group] = STATE(230),
    [sym_token] = STATE(230),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(230),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(602),
    [sym_inline_math_shift] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(640),
    [sym_alignment_tab] = ACTIONS(643),
    [sym_parameter_char] = ACTIONS(646),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(643),
    [sym_active_char] = ACTIONS(643),
    [sym_text] = ACTIONS(643),
  },
  [231] = {
    [sym_implicit_math_shift] = ACTIONS(535),
    [sym_inline_math_shift] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [232] = {
    [anon_sym_LBRACK] = ACTIONS(649),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(649),
    [sym_begin_group] = ACTIONS(649),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(649),
    [sym_subscript] = ACTIONS(649),
    [sym_active_char] = ACTIONS(649),
    [sym_text] = ACTIONS(649),
  },
  [233] = {
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_active_char] = ACTIONS(651),
    [sym_text] = ACTIONS(651),
  },
  [234] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(653),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(655),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(655),
  },
  [236] = {
    [anon_sym_LBRACK] = ACTIONS(657),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(657),
  },
  [237] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(659),
  },
  [238] = {
    [sym__whitespace] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(665),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(663),
  },
  [239] = {
    [sym__whitespace] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(663),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(663),
  },
  [240] = {
    [sym_display_math_shift] = ACTIONS(667),
    [sym_inline_math_shift] = ACTIONS(667),
    [ts_builtin_sym_end] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [241] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(669),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(671),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(671),
  },
  [243] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(673),
  },
  [244] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(675),
  },
  [245] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(677),
  },
  [246] = {
    [sym_display_math_shift] = ACTIONS(679),
    [sym_inline_math_shift] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(679),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(679),
    [sym_begin_group] = ACTIONS(679),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(679),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(679),
    [sym_text] = ACTIONS(679),
  },
  [247] = {
    [sym_display_math_shift] = ACTIONS(681),
    [sym_inline_math_shift] = ACTIONS(681),
    [ts_builtin_sym_end] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [248] = {
    [sym_display_math_shift] = ACTIONS(161),
    [sym_inline_math_shift] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [249] = {
    [sym_implicit_math_shift] = ACTIONS(683),
    [sym_display_math_shift] = ACTIONS(683),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [250] = {
    [sym_display_math_shift] = ACTIONS(203),
    [sym_inline_math_shift] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_end_group] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [251] = {
    [sym_implicit_math_shift] = ACTIONS(685),
    [sym_inline_math_shift] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [252] = {
    [sym_display_math_shift] = ACTIONS(245),
    [sym_inline_math_shift] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_end_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [253] = {
    [sym_display_math_shift] = ACTIONS(269),
    [sym_inline_math_shift] = ACTIONS(269),
    [sym__whitespace] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [254] = {
    [sym_display_math_shift] = ACTIONS(303),
    [sym_inline_math_shift] = ACTIONS(303),
    [sym__whitespace] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [255] = {
    [sym_display_math_shift] = ACTIONS(323),
    [sym_inline_math_shift] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [256] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [257] = {
    [sym_verb_body] = ACTIONS(693),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [258] = {
    [sym_end_display_math] = STATE(481),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(695),
  },
  [259] = {
    [sym_end_inline_math] = STATE(483),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(697),
  },
  [260] = {
    [sym_display_math_end] = STATE(484),
    [sym_end_token] = STATE(485),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [261] = {
    [sym_inline_math_end] = STATE(486),
    [sym_end_token] = STATE(487),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [262] = {
    [sym_display_math_shift] = ACTIONS(375),
    [sym_inline_math_shift] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_end_group] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [263] = {
    [sym_verbatim_end] = STATE(488),
    [sym_end_token] = STATE(264),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [264] = {
    [sym_verbatim_env_group] = STATE(490),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(699),
  },
  [265] = {
    [sym_display_math_shift] = ACTIONS(389),
    [sym_inline_math_shift] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(389),
    [sym_end_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [sym_active_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [266] = {
    [sym_simple_text_group] = STATE(491),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [267] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(329),
    [sym_text_mode_at_region] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env] = STATE(329),
    [sym__display_math] = STATE(329),
    [sym_tex_display_math] = STATE(329),
    [sym_latex_display_math] = STATE(329),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(329),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(329),
    [sym_tex_inline_math] = STATE(329),
    [sym_latex_inline_math] = STATE(329),
    [sym_inline_math_env] = STATE(329),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(492),
    [sym_end_token] = STATE(266),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(329),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(329),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(329),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(329),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(329),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(329),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(329),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(329),
    [sym_opt_text_group] = STATE(329),
    [sym_token] = STATE(329),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [268] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(701),
  },
  [269] = {
    [sym_display_math_shift] = ACTIONS(413),
    [sym_inline_math_shift] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_end_group] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [270] = {
    [sym_simple_text_group] = STATE(495),
    [sym__whitespace] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [271] = {
    [sym_display_math_shift] = ACTIONS(421),
    [sym_inline_math_shift] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_end_group] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [272] = {
    [sym_simple_text_group] = STATE(497),
    [sym__whitespace] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [273] = {
    [sym_display_math_shift] = ACTIONS(425),
    [sym_inline_math_shift] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [274] = {
    [sym_display_math_shift] = ACTIONS(427),
    [sym_inline_math_shift] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [275] = {
    [sym_text_group] = STATE(499),
    [sym__whitespace] = ACTIONS(707),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [276] = {
    [anon_sym_EQ] = ACTIONS(709),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [277] = {
    [sym_display_math_shift] = ACTIONS(435),
    [sym_inline_math_shift] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(435),
    [sym_end_group] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(435),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [278] = {
    [sym_display_math_shift] = ACTIONS(437),
    [sym_inline_math_shift] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(437),
    [sym_end_group] = ACTIONS(437),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(437),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [279] = {
    [sym_text_group] = STATE(502),
    [sym__whitespace] = ACTIONS(711),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [280] = {
    [sym_display_math_shift] = ACTIONS(441),
    [sym_inline_math_shift] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(441),
    [sym_end_group] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(441),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [281] = {
    [sym_display_math_shift] = ACTIONS(443),
    [sym_inline_math_shift] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [282] = {
    [sym_display_math_shift] = ACTIONS(445),
    [sym_inline_math_shift] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_end_group] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [283] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [anon_sym_makeatother] = ACTIONS(713),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(465),
  },
  [284] = {
    [sym_makeatother] = STATE(505),
    [sym_makeatother_token] = STATE(286),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(715),
  },
  [285] = {
    [sym_display_math_shift] = ACTIONS(491),
    [sym_inline_math_shift] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(491),
    [sym_begin_group] = ACTIONS(491),
    [sym_end_group] = ACTIONS(491),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [286] = {
    [sym_display_math_shift] = ACTIONS(493),
    [sym_inline_math_shift] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_end_group] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [287] = {
    [sym_display_math_shift] = ACTIONS(503),
    [sym_inline_math_shift] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_end_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [288] = {
    [sym_display_math_shift] = ACTIONS(505),
    [sym_inline_math_shift] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(505),
    [sym_begin_group] = ACTIONS(505),
    [sym_end_group] = ACTIONS(505),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(505),
    [sym_superscript] = ACTIONS(505),
    [sym_subscript] = ACTIONS(505),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [289] = {
    [sym__common] = STATE(425),
    [sym__text_mode_common] = STATE(425),
    [sym_inline_verbatim] = STATE(425),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(425),
    [sym_text_mode_at_region] = STATE(425),
    [sym_parameter] = STATE(425),
    [sym_text_env] = STATE(425),
    [sym__display_math] = STATE(425),
    [sym_tex_display_math] = STATE(425),
    [sym_latex_display_math] = STATE(425),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(425),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(425),
    [sym_tex_inline_math] = STATE(425),
    [sym_latex_inline_math] = STATE(425),
    [sym_inline_math_env] = STATE(425),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(425),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(425),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(425),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(425),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(425),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(425),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(425),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(425),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(425),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(425),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(425),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(425),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(425),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(425),
    [sym_opt_text_group] = STATE(425),
    [sym_token] = STATE(425),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(506),
    [aux_sym_text_mode_repeat1] = STATE(425),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [290] = {
    [sym_display_math_shift] = ACTIONS(717),
    [sym_inline_math_shift] = ACTIONS(717),
    [ts_builtin_sym_end] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [291] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(719),
    [sym_inline_math_shift] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(728),
    [sym_end_group] = ACTIONS(515),
    [sym_alignment_tab] = ACTIONS(731),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(737),
    [sym_subscript] = ACTIONS(737),
    [sym_active_char] = ACTIONS(731),
    [sym_text] = ACTIONS(731),
  },
  [292] = {
    [sym_display_math_shift] = ACTIONS(535),
    [sym_inline_math_shift] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_end_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [293] = {
    [sym_verb_delim] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [295] = {
    [sym__whitespace] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [296] = {
    [sym__whitespace] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [298] = {
    [sym__common] = STATE(446),
    [sym__math_mode_common] = STATE(446),
    [sym__math_mode] = STATE(446),
    [sym_parameter] = STATE(446),
    [sym_math_env] = STATE(446),
    [sym_tag] = STATE(446),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(446),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(446),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(446),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(446),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(446),
    [sym_opt_math_group] = STATE(446),
    [sym_token] = STATE(446),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(446),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [299] = {
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [300] = {
    [sym_display_math_shift] = ACTIONS(750),
    [sym_inline_math_shift] = ACTIONS(750),
    [ts_builtin_sym_end] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(750),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(750),
    [sym_superscript] = ACTIONS(750),
    [sym_subscript] = ACTIONS(750),
    [sym_active_char] = ACTIONS(750),
    [sym_text] = ACTIONS(750),
  },
  [301] = {
    [sym__common] = STATE(450),
    [sym__text_mode_common] = STATE(450),
    [sym_inline_verbatim] = STATE(450),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(450),
    [sym_text_mode] = STATE(513),
    [sym_text_mode_at_region] = STATE(450),
    [sym_parameter] = STATE(450),
    [sym_text_env] = STATE(450),
    [sym__display_math] = STATE(450),
    [sym_tex_display_math] = STATE(450),
    [sym_latex_display_math] = STATE(450),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(450),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(450),
    [sym_tex_inline_math] = STATE(450),
    [sym_latex_inline_math] = STATE(450),
    [sym_inline_math_env] = STATE(450),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(450),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(450),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(450),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(450),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(450),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(450),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(450),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(450),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(450),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(450),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(450),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(450),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(450),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(450),
    [sym_opt_text_group] = STATE(450),
    [sym_token] = STATE(450),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(450),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(752),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_RBRACK] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [304] = {
    [sym_simple_text_group] = STATE(514),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(189),
  },
  [305] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(515),
    [sym_end_token] = STATE(304),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [306] = {
    [sym__common] = STATE(517),
    [sym__text_mode_common] = STATE(517),
    [sym_inline_verbatim] = STATE(517),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(517),
    [sym_text_mode_at_region] = STATE(517),
    [sym_parameter] = STATE(517),
    [sym_text_env] = STATE(517),
    [sym__display_math] = STATE(517),
    [sym_tex_display_math] = STATE(517),
    [sym_latex_display_math] = STATE(517),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(517),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(517),
    [sym_tex_inline_math] = STATE(517),
    [sym_latex_inline_math] = STATE(517),
    [sym_inline_math_env] = STATE(517),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(517),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(517),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(517),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(517),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(517),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(517),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(517),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(517),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(517),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(517),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(517),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(517),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(517),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(517),
    [sym_opt_text_group] = STATE(517),
    [sym_token] = STATE(517),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(517),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(756),
    [sym_text] = ACTIONS(756),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [308] = {
    [anon_sym_EQ] = ACTIONS(758),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [anon_sym_RBRACK] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [311] = {
    [sym__common] = STATE(459),
    [sym__math_mode_common] = STATE(459),
    [sym__math_mode] = STATE(459),
    [sym_parameter] = STATE(459),
    [sym_math_env] = STATE(459),
    [sym_tag] = STATE(459),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(459),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(459),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(459),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(459),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(459),
    [sym_opt_math_group] = STATE(459),
    [sym_token] = STATE(459),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(519),
    [aux_sym_math_mode_repeat1] = STATE(459),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [312] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(763),
    [sym_alignment_tab] = ACTIONS(766),
    [sym_parameter_char] = ACTIONS(769),
    [sym_superscript] = ACTIONS(766),
    [sym_subscript] = ACTIONS(766),
    [sym_active_char] = ACTIONS(766),
    [sym_text] = ACTIONS(766),
  },
  [313] = {
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [314] = {
    [anon_sym_RPAREN] = ACTIONS(772),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [315] = {
    [sym_display_math_shift] = ACTIONS(774),
    [sym_inline_math_shift] = ACTIONS(774),
    [ts_builtin_sym_end] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(774),
    [sym_begin_group] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(774),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [316] = {
    [sym_display_math_shift] = ACTIONS(776),
    [sym_inline_math_shift] = ACTIONS(776),
    [ts_builtin_sym_end] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_RBRACK] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(776),
    [sym_begin_group] = ACTIONS(776),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(776),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [317] = {
    [sym_display_math_env_group] = STATE(522),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(778),
  },
  [318] = {
    [sym_display_math_shift] = ACTIONS(780),
    [sym_inline_math_shift] = ACTIONS(780),
    [ts_builtin_sym_end] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(780),
    [sym_alignment_tab] = ACTIONS(780),
    [sym_parameter_char] = ACTIONS(780),
    [sym_superscript] = ACTIONS(780),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(780),
    [sym_text] = ACTIONS(780),
  },
  [319] = {
    [sym_inline_math_env_group] = STATE(524),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(782),
  },
  [320] = {
    [sym__whitespace] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(786),
  },
  [321] = {
    [sym_display_math_shift] = ACTIONS(788),
    [sym_inline_math_shift] = ACTIONS(788),
    [ts_builtin_sym_end] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(788),
    [anon_sym_RBRACK] = ACTIONS(788),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(788),
    [sym_begin_group] = ACTIONS(788),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(788),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [322] = {
    [sym_verbatim_env_name] = ACTIONS(790),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [323] = {
    [sym_display_math_shift] = ACTIONS(792),
    [sym_inline_math_shift] = ACTIONS(792),
    [ts_builtin_sym_end] = ACTIONS(792),
    [anon_sym_LBRACK] = ACTIONS(792),
    [anon_sym_RBRACK] = ACTIONS(792),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(792),
    [sym_begin_group] = ACTIONS(792),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(792),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(792),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [324] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(796),
    [sym__end_of_line] = ACTIONS(796),
  },
  [325] = {
    [aux_sym_verbatim_text_repeat1] = STATE(325),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(801),
  },
  [326] = {
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [aux_sym_verbatim_text_repeat2] = STATE(326),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(803),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(796),
    [sym__end_of_line] = ACTIONS(806),
  },
  [327] = {
    [sym_display_math_shift] = ACTIONS(809),
    [sym_inline_math_shift] = ACTIONS(809),
    [ts_builtin_sym_end] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [328] = {
    [sym_display_math_shift] = ACTIONS(811),
    [sym_inline_math_shift] = ACTIONS(811),
    [ts_builtin_sym_end] = ACTIONS(811),
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(811),
    [sym_begin_group] = ACTIONS(811),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(811),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(811),
    [sym_active_char] = ACTIONS(811),
    [sym_text] = ACTIONS(811),
  },
  [329] = {
    [sym__common] = STATE(329),
    [sym__text_mode_common] = STATE(329),
    [sym_inline_verbatim] = STATE(329),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(329),
    [sym_text_mode_at_region] = STATE(329),
    [sym_parameter] = STATE(329),
    [sym_text_env] = STATE(329),
    [sym__display_math] = STATE(329),
    [sym_tex_display_math] = STATE(329),
    [sym_latex_display_math] = STATE(329),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(329),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(329),
    [sym_tex_inline_math] = STATE(329),
    [sym_latex_inline_math] = STATE(329),
    [sym_inline_math_env] = STATE(329),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(329),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(329),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(329),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(329),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(329),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(329),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(329),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(329),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(329),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(329),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(329),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(329),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(329),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(329),
    [sym_opt_text_group] = STATE(329),
    [sym_token] = STATE(329),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(329),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(509),
    [sym_inline_math_shift] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(523),
    [sym_alignment_tab] = ACTIONS(813),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(813),
    [sym_text] = ACTIONS(813),
  },
  [330] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(816),
  },
  [331] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(818),
  },
  [332] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(820),
  },
  [333] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(822),
  },
  [334] = {
    [sym__common] = STATE(532),
    [sym__text_mode_common] = STATE(532),
    [sym_inline_verbatim] = STATE(532),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(532),
    [sym_text_mode_at_region] = STATE(532),
    [sym_parameter] = STATE(532),
    [sym_text_env] = STATE(532),
    [sym__display_math] = STATE(532),
    [sym_tex_display_math] = STATE(532),
    [sym_latex_display_math] = STATE(532),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(532),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(532),
    [sym_tex_inline_math] = STATE(532),
    [sym_latex_inline_math] = STATE(532),
    [sym_inline_math_env] = STATE(532),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(532),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(532),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(532),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(532),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(532),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(532),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(532),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(532),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(532),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(532),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(532),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(532),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(532),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(532),
    [sym_opt_text_group] = STATE(532),
    [sym_token] = STATE(532),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(532),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(824),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [335] = {
    [anon_sym_LBRACK] = ACTIONS(828),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(828),
    [sym_alignment_tab] = ACTIONS(828),
    [sym_parameter_char] = ACTIONS(828),
    [sym_superscript] = ACTIONS(828),
    [sym_subscript] = ACTIONS(828),
    [sym_active_char] = ACTIONS(828),
    [sym_text] = ACTIONS(828),
  },
  [336] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(830),
  },
  [337] = {
    [sym_text_group] = STATE(535),
    [sym__whitespace] = ACTIONS(832),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(830),
  },
  [338] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(834),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(836),
    [sym__end_of_line] = ACTIONS(836),
  },
  [339] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(838),
  },
  [340] = {
    [sym_text_group] = STATE(538),
    [sym__whitespace] = ACTIONS(840),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(838),
  },
  [341] = {
    [sym_simple_text_group] = STATE(539),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [342] = {
    [sym_display_math_shift] = ACTIONS(842),
    [sym_inline_math_shift] = ACTIONS(842),
    [ts_builtin_sym_end] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(842),
    [sym_begin_group] = ACTIONS(842),
    [sym_alignment_tab] = ACTIONS(842),
    [sym_parameter_char] = ACTIONS(842),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(842),
    [sym_active_char] = ACTIONS(842),
    [sym_text] = ACTIONS(842),
  },
  [343] = {
    [sym__whitespace] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(503),
    [sym__end_of_line] = ACTIONS(503),
  },
  [344] = {
    [sym__whitespace] = ACTIONS(505),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(505),
    [sym__end_of_line] = ACTIONS(505),
  },
  [345] = {
    [sym__common] = STATE(425),
    [sym__text_mode_common] = STATE(425),
    [sym_inline_verbatim] = STATE(425),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(425),
    [sym_text_mode_at_region] = STATE(425),
    [sym_parameter] = STATE(425),
    [sym_text_env] = STATE(425),
    [sym__display_math] = STATE(425),
    [sym_tex_display_math] = STATE(425),
    [sym_latex_display_math] = STATE(425),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(425),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(425),
    [sym_tex_inline_math] = STATE(425),
    [sym_latex_inline_math] = STATE(425),
    [sym_inline_math_env] = STATE(425),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(425),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(425),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(425),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(425),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(425),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(425),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(425),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(425),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(425),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(425),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(425),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(425),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(425),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(425),
    [sym_opt_text_group] = STATE(425),
    [sym_token] = STATE(425),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(540),
    [aux_sym_text_mode_repeat1] = STATE(425),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [346] = {
    [sym_simple_text_group] = STATE(541),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(131),
  },
  [347] = {
    [sym_display_math_shift] = ACTIONS(844),
    [sym_inline_math_shift] = ACTIONS(844),
    [ts_builtin_sym_end] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(844),
    [sym_begin_group] = ACTIONS(844),
    [sym_alignment_tab] = ACTIONS(844),
    [sym_parameter_char] = ACTIONS(844),
    [sym_superscript] = ACTIONS(844),
    [sym_subscript] = ACTIONS(844),
    [sym_active_char] = ACTIONS(844),
    [sym_text] = ACTIONS(844),
  },
  [348] = {
    [sym_text_group] = STATE(542),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [349] = {
    [sym_display_math_shift] = ACTIONS(846),
    [sym_inline_math_shift] = ACTIONS(846),
    [ts_builtin_sym_end] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(846),
    [anon_sym_RBRACK] = ACTIONS(846),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(846),
    [sym_begin_group] = ACTIONS(846),
    [sym_alignment_tab] = ACTIONS(846),
    [sym_parameter_char] = ACTIONS(846),
    [sym_superscript] = ACTIONS(846),
    [sym_subscript] = ACTIONS(846),
    [sym_active_char] = ACTIONS(846),
    [sym_text] = ACTIONS(846),
  },
  [350] = {
    [anon_sym_EQ] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [351] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(848),
  },
  [352] = {
    [sym_text_group] = STATE(544),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [353] = {
    [sym_display_math_shift] = ACTIONS(850),
    [sym_inline_math_shift] = ACTIONS(850),
    [ts_builtin_sym_end] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_parameter_char] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_active_char] = ACTIONS(850),
    [sym_text] = ACTIONS(850),
  },
  [354] = {
    [sym_display_math_shift] = ACTIONS(852),
    [sym_inline_math_shift] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(852),
    [sym_begin_group] = ACTIONS(852),
    [sym_alignment_tab] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(852),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(852),
    [sym_text] = ACTIONS(852),
  },
  [355] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(165),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(167),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(854),
  },
  [356] = {
    [sym__common] = STATE(553),
    [sym__math_mode_common] = STATE(553),
    [sym__math_mode_at] = STATE(553),
    [sym_parameter] = STATE(553),
    [sym_math_env_at] = STATE(553),
    [sym_tag_at] = STATE(553),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(553),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(553),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(553),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(553),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(553),
    [sym_opt_math_group_at] = STATE(553),
    [sym_token_at] = STATE(553),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(553),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(862),
    [sym_subscript] = ACTIONS(862),
    [sym_active_char] = ACTIONS(862),
    [sym_text] = ACTIONS(862),
  },
  [357] = {
    [sym_implicit_math_shift] = ACTIONS(864),
    [sym_display_math_shift] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [358] = {
    [sym_math_text_group_at] = STATE(556),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(866),
  },
  [359] = {
    [sym__common] = STATE(559),
    [sym__math_mode_common] = STATE(559),
    [sym__math_mode_at] = STATE(559),
    [sym_parameter] = STATE(559),
    [sym_math_env_at] = STATE(559),
    [sym_tag_at] = STATE(559),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(559),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(558),
    [sym_end_token] = STATE(201),
    [sym_include_at] = STATE(559),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(559),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(559),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(559),
    [sym_opt_math_group_at] = STATE(559),
    [sym_token_at] = STATE(559),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(559),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(870),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(870),
    [sym_subscript] = ACTIONS(870),
    [sym_active_char] = ACTIONS(870),
    [sym_text] = ACTIONS(870),
  },
  [360] = {
    [sym_text_group_at] = STATE(561),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(872),
  },
  [361] = {
    [sym__common] = STATE(563),
    [sym__math_mode_common] = STATE(563),
    [sym__math_mode_at] = STATE(563),
    [sym_parameter] = STATE(563),
    [sym_math_env_at] = STATE(563),
    [sym_tag_at] = STATE(563),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(563),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(563),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(563),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(563),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(563),
    [sym_opt_math_group_at] = STATE(563),
    [sym_token_at] = STATE(563),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(562),
    [aux_sym_math_mode_at_repeat1] = STATE(563),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(874),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(874),
    [sym_subscript] = ACTIONS(874),
    [sym_active_char] = ACTIONS(874),
    [sym_text] = ACTIONS(874),
  },
  [362] = {
    [sym__common] = STATE(564),
    [sym__math_mode_common] = STATE(564),
    [sym__math_mode_at] = STATE(564),
    [sym_parameter] = STATE(564),
    [sym_math_env_at] = STATE(564),
    [sym_tag_at] = STATE(564),
    [sym_tag_token] = STATE(358),
    [sym_escaped] = STATE(564),
    [sym_begin] = STATE(359),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(564),
    [sym_include_token] = STATE(360),
    [sym_storage] = STATE(564),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(564),
    [sym_catcode_token] = STATE(44),
    [sym_math_group_at] = STATE(564),
    [sym_opt_math_group_at] = STATE(564),
    [sym_token_at] = STATE(564),
    [sym_begin_opt] = STATE(361),
    [aux_sym_math_mode_at_repeat1] = STATE(564),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(876),
    [sym_display_math_shift] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(878),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(878),
    [sym_subscript] = ACTIONS(878),
    [sym_active_char] = ACTIONS(878),
    [sym_text] = ACTIONS(878),
  },
  [363] = {
    [sym_display_math_shift] = ACTIONS(880),
    [sym_inline_math_shift] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_RBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [364] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(205),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(207),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(882),
  },
  [365] = {
    [sym__common] = STATE(567),
    [sym__math_mode_common] = STATE(567),
    [sym__math_mode_at] = STATE(567),
    [sym_parameter] = STATE(567),
    [sym_math_env_at] = STATE(567),
    [sym_tag_at] = STATE(567),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(567),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(567),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(567),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(567),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(567),
    [sym_opt_math_group_at] = STATE(567),
    [sym_token_at] = STATE(567),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(567),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(884),
    [sym_alignment_tab] = ACTIONS(886),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(886),
    [sym_subscript] = ACTIONS(886),
    [sym_active_char] = ACTIONS(886),
    [sym_text] = ACTIONS(886),
  },
  [366] = {
    [sym_implicit_math_shift] = ACTIONS(888),
    [sym_inline_math_shift] = ACTIONS(888),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [367] = {
    [sym_math_text_group_at] = STATE(570),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(890),
  },
  [368] = {
    [sym__common] = STATE(572),
    [sym__math_mode_common] = STATE(572),
    [sym__math_mode_at] = STATE(572),
    [sym_parameter] = STATE(572),
    [sym_math_env_at] = STATE(572),
    [sym_tag_at] = STATE(572),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(572),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(571),
    [sym_end_token] = STATE(222),
    [sym_include_at] = STATE(572),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(572),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(572),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(572),
    [sym_opt_math_group_at] = STATE(572),
    [sym_token_at] = STATE(572),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(572),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(892),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(892),
    [sym_subscript] = ACTIONS(892),
    [sym_active_char] = ACTIONS(892),
    [sym_text] = ACTIONS(892),
  },
  [369] = {
    [sym_text_group_at] = STATE(574),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(894),
  },
  [370] = {
    [sym__common] = STATE(576),
    [sym__math_mode_common] = STATE(576),
    [sym__math_mode_at] = STATE(576),
    [sym_parameter] = STATE(576),
    [sym_math_env_at] = STATE(576),
    [sym_tag_at] = STATE(576),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(576),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(576),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(576),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(576),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(576),
    [sym_opt_math_group_at] = STATE(576),
    [sym_token_at] = STATE(576),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(575),
    [aux_sym_math_mode_at_repeat1] = STATE(576),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(896),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(896),
    [sym_active_char] = ACTIONS(896),
    [sym_text] = ACTIONS(896),
  },
  [371] = {
    [sym__common] = STATE(577),
    [sym__math_mode_common] = STATE(577),
    [sym__math_mode_at] = STATE(577),
    [sym_parameter] = STATE(577),
    [sym_math_env_at] = STATE(577),
    [sym_tag_at] = STATE(577),
    [sym_tag_token] = STATE(367),
    [sym_escaped] = STATE(577),
    [sym_begin] = STATE(368),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(577),
    [sym_include_token] = STATE(369),
    [sym_storage] = STATE(577),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(577),
    [sym_catcode_token] = STATE(56),
    [sym_math_group_at] = STATE(577),
    [sym_opt_math_group_at] = STATE(577),
    [sym_token_at] = STATE(577),
    [sym_begin_opt] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(577),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(876),
    [sym_inline_math_shift] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [372] = {
    [sym_display_math_shift] = ACTIONS(900),
    [sym_inline_math_shift] = ACTIONS(900),
    [ts_builtin_sym_end] = ACTIONS(900),
    [sym__whitespace] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_parameter_char] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_active_char] = ACTIONS(900),
    [sym_text] = ACTIONS(904),
  },
  [373] = {
    [sym_display_math_shift] = ACTIONS(906),
    [sym_inline_math_shift] = ACTIONS(906),
    [sym__whitespace] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [374] = {
    [sym__common] = STATE(362),
    [sym__math_mode_common] = STATE(362),
    [sym__math_mode_at] = STATE(362),
    [sym_math_mode_at] = STATE(581),
    [sym_parameter] = STATE(362),
    [sym_math_env_at] = STATE(362),
    [sym_tag_at] = STATE(362),
    [sym_tag_token] = STATE(358),
    [sym_escaped] = STATE(362),
    [sym_begin] = STATE(359),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(362),
    [sym_include_token] = STATE(360),
    [sym_storage] = STATE(362),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(362),
    [sym_catcode_token] = STATE(44),
    [sym_math_group_at] = STATE(362),
    [sym_opt_math_group_at] = STATE(362),
    [sym_token_at] = STATE(362),
    [sym_begin_opt] = STATE(361),
    [aux_sym_math_mode_at_repeat1] = STATE(362),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(912),
    [sym_display_math_shift] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(37),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(453),
    [sym_text] = ACTIONS(453),
  },
  [375] = {
    [sym__common] = STATE(371),
    [sym__math_mode_common] = STATE(371),
    [sym__math_mode_at] = STATE(371),
    [sym_math_mode_at] = STATE(583),
    [sym_parameter] = STATE(371),
    [sym_math_env_at] = STATE(371),
    [sym_tag_at] = STATE(371),
    [sym_tag_token] = STATE(367),
    [sym_escaped] = STATE(371),
    [sym_begin] = STATE(368),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(371),
    [sym_include_token] = STATE(369),
    [sym_storage] = STATE(371),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(371),
    [sym_catcode_token] = STATE(56),
    [sym_math_group_at] = STATE(371),
    [sym_opt_math_group_at] = STATE(371),
    [sym_token_at] = STATE(371),
    [sym_begin_opt] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(371),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(914),
    [sym_inline_math_shift] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(461),
    [sym_parameter_char] = ACTIONS(47),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(461),
    [sym_active_char] = ACTIONS(461),
    [sym_text] = ACTIONS(461),
  },
  [376] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(313),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(315),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(916),
  },
  [377] = {
    [sym__common] = STATE(586),
    [sym__text_mode_common] = STATE(586),
    [sym_inline_verbatim] = STATE(586),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(586),
    [sym_parameter] = STATE(586),
    [sym_text_env_at] = STATE(586),
    [sym__display_math_at] = STATE(586),
    [sym_tex_display_math_at] = STATE(586),
    [sym_latex_display_math_at] = STATE(586),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(586),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(586),
    [sym_tex_inline_math_at] = STATE(586),
    [sym_latex_inline_math_at] = STATE(586),
    [sym_inline_math_env_at] = STATE(586),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(586),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(586),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(586),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(586),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(586),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(586),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(586),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(586),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(586),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(586),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(586),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(586),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(586),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(586),
    [sym_opt_text_group_at] = STATE(586),
    [sym_token_at] = STATE(586),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(586),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(918),
    [sym_alignment_tab] = ACTIONS(920),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(920),
    [sym_text] = ACTIONS(920),
  },
  [378] = {
    [sym_display_math_shift] = ACTIONS(922),
    [sym_inline_math_shift] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [anon_sym_RBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [379] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(587),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [380] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(588),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [381] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(589),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [382] = {
    [sym__common] = STATE(402),
    [sym__math_mode_common] = STATE(402),
    [sym__math_mode_at] = STATE(402),
    [sym_math_mode_at] = STATE(590),
    [sym_parameter] = STATE(402),
    [sym_math_env_at] = STATE(402),
    [sym_tag_at] = STATE(402),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(402),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(402),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(402),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(402),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(402),
    [sym_opt_math_group_at] = STATE(402),
    [sym_token_at] = STATE(402),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(402),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_text] = ACTIONS(485),
  },
  [383] = {
    [sym__common] = STATE(592),
    [sym__text_mode_common] = STATE(592),
    [sym_inline_verbatim] = STATE(592),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(592),
    [sym_parameter] = STATE(592),
    [sym_text_env_at] = STATE(592),
    [sym__display_math_at] = STATE(592),
    [sym_tex_display_math_at] = STATE(592),
    [sym_latex_display_math_at] = STATE(592),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(592),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(592),
    [sym_tex_inline_math_at] = STATE(592),
    [sym_latex_inline_math_at] = STATE(592),
    [sym_inline_math_env_at] = STATE(592),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(592),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(592),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_end] = STATE(591),
    [sym_end_token] = STATE(266),
    [sym_documentclass] = STATE(592),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(592),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(592),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(592),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(592),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(592),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(592),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(592),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(592),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(592),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(592),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(592),
    [sym_opt_text_group_at] = STATE(592),
    [sym_token_at] = STATE(592),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(592),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(924),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(924),
    [sym_text] = ACTIONS(924),
  },
  [384] = {
    [sym_text_group_at] = STATE(593),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [385] = {
    [sym_text_group_at] = STATE(594),
    [sym_opt_text_group_at] = STATE(595),
    [sym_begin_opt] = STATE(413),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [386] = {
    [sym_text_group_at] = STATE(596),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [387] = {
    [sym_text_group_at] = STATE(597),
    [sym_opt_text_group_at] = STATE(598),
    [sym_begin_opt] = STATE(413),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [388] = {
    [sym_text_group_at] = STATE(599),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [389] = {
    [sym_text_group_at] = STATE(600),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [390] = {
    [sym_text_group_at] = STATE(601),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [391] = {
    [sym__common] = STATE(603),
    [sym__text_mode_common] = STATE(603),
    [sym_inline_verbatim] = STATE(603),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(603),
    [sym_parameter] = STATE(603),
    [sym_text_env_at] = STATE(603),
    [sym__display_math_at] = STATE(603),
    [sym_tex_display_math_at] = STATE(603),
    [sym_latex_display_math_at] = STATE(603),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(603),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(603),
    [sym_tex_inline_math_at] = STATE(603),
    [sym_latex_inline_math_at] = STATE(603),
    [sym_inline_math_env_at] = STATE(603),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(603),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(603),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(603),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(603),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(603),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(603),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(603),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(603),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(603),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(603),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(603),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(603),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(603),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(603),
    [sym_opt_text_group_at] = STATE(603),
    [sym_token_at] = STATE(603),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(602),
    [aux_sym_text_mode_at_repeat1] = STATE(603),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(926),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(926),
    [sym_text] = ACTIONS(926),
  },
  [392] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(928),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [393] = {
    [anon_sym_makeatother] = ACTIONS(932),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [394] = {
    [sym_display_math_shift] = ACTIONS(934),
    [sym_inline_math_shift] = ACTIONS(934),
    [ts_builtin_sym_end] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_RBRACK] = ACTIONS(934),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(934),
    [sym_begin_group] = ACTIONS(934),
    [sym_alignment_tab] = ACTIONS(934),
    [sym_parameter_char] = ACTIONS(934),
    [sym_superscript] = ACTIONS(934),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(934),
    [sym_text] = ACTIONS(934),
  },
  [395] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(347),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(936),
  },
  [396] = {
    [sym__common] = STATE(608),
    [sym__math_mode_common] = STATE(608),
    [sym__math_mode_at] = STATE(608),
    [sym_parameter] = STATE(608),
    [sym_math_env_at] = STATE(608),
    [sym_tag_at] = STATE(608),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(608),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(608),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(608),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(608),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(608),
    [sym_opt_math_group_at] = STATE(608),
    [sym_token_at] = STATE(608),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(608),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(938),
    [sym_alignment_tab] = ACTIONS(940),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(940),
    [sym_subscript] = ACTIONS(940),
    [sym_active_char] = ACTIONS(940),
    [sym_text] = ACTIONS(940),
  },
  [397] = {
    [sym_end_display_math] = STATE(609),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(355),
  },
  [398] = {
    [sym_math_text_group_at] = STATE(611),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(942),
  },
  [399] = {
    [sym__common] = STATE(613),
    [sym__math_mode_common] = STATE(613),
    [sym__math_mode_at] = STATE(613),
    [sym_parameter] = STATE(613),
    [sym_math_env_at] = STATE(613),
    [sym_tag_at] = STATE(613),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(613),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(612),
    [sym_end_token] = STATE(304),
    [sym_include_at] = STATE(613),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(613),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(613),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(613),
    [sym_opt_math_group_at] = STATE(613),
    [sym_token_at] = STATE(613),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(613),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(944),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(944),
    [sym_subscript] = ACTIONS(944),
    [sym_active_char] = ACTIONS(944),
    [sym_text] = ACTIONS(944),
  },
  [400] = {
    [sym_text_group_at] = STATE(615),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(946),
  },
  [401] = {
    [sym__common] = STATE(617),
    [sym__math_mode_common] = STATE(617),
    [sym__math_mode_at] = STATE(617),
    [sym_parameter] = STATE(617),
    [sym_math_env_at] = STATE(617),
    [sym_tag_at] = STATE(617),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(617),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(617),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(617),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(617),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(617),
    [sym_opt_math_group_at] = STATE(617),
    [sym_token_at] = STATE(617),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(616),
    [aux_sym_math_mode_at_repeat1] = STATE(617),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(948),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(948),
    [sym_subscript] = ACTIONS(948),
    [sym_active_char] = ACTIONS(948),
    [sym_text] = ACTIONS(948),
  },
  [402] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(876),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [403] = {
    [sym_end_inline_math] = STATE(619),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(371),
  },
  [404] = {
    [sym_display_math_end] = STATE(620),
    [sym_end_token] = STATE(317),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [405] = {
    [sym_inline_math_end] = STATE(621),
    [sym_end_token] = STATE(319),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [406] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(387),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(465),
  },
  [407] = {
    [sym_display_math_shift] = ACTIONS(952),
    [sym_inline_math_shift] = ACTIONS(952),
    [anon_sym_LBRACK] = ACTIONS(952),
    [anon_sym_RBRACK] = ACTIONS(952),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(952),
    [sym_alignment_tab] = ACTIONS(952),
    [sym_parameter_char] = ACTIONS(952),
    [sym_superscript] = ACTIONS(952),
    [sym_subscript] = ACTIONS(952),
    [sym_active_char] = ACTIONS(952),
    [sym_text] = ACTIONS(952),
  },
  [408] = {
    [sym__common] = STATE(423),
    [sym__text_mode_common] = STATE(423),
    [sym_inline_verbatim] = STATE(423),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(423),
    [sym_parameter] = STATE(423),
    [sym_text_env_at] = STATE(423),
    [sym__display_math_at] = STATE(423),
    [sym_tex_display_math_at] = STATE(423),
    [sym_latex_display_math_at] = STATE(423),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(423),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(423),
    [sym_tex_inline_math_at] = STATE(423),
    [sym_latex_inline_math_at] = STATE(423),
    [sym_inline_math_env_at] = STATE(423),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(423),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(423),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_end] = STATE(622),
    [sym_end_token] = STATE(129),
    [sym_documentclass] = STATE(423),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(423),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(423),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(423),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(423),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(423),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(423),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(423),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(423),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(423),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(423),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(423),
    [sym_opt_text_group_at] = STATE(423),
    [sym_token_at] = STATE(423),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(423),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [409] = {
    [sym_text_group_at] = STATE(625),
    [sym_opt_text_group_at] = STATE(626),
    [sym_begin_opt] = STATE(413),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(954),
    [sym__end_of_line] = ACTIONS(956),
  },
  [410] = {
    [sym_display_math_shift] = ACTIONS(958),
    [sym_inline_math_shift] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [anon_sym_RBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [411] = {
    [sym_display_math_shift] = ACTIONS(960),
    [sym_inline_math_shift] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(960),
    [anon_sym_RBRACK] = ACTIONS(960),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(960),
    [sym_begin_group] = ACTIONS(960),
    [sym_alignment_tab] = ACTIONS(960),
    [sym_parameter_char] = ACTIONS(960),
    [sym_superscript] = ACTIONS(960),
    [sym_subscript] = ACTIONS(960),
    [sym_active_char] = ACTIONS(960),
    [sym_text] = ACTIONS(960),
  },
  [412] = {
    [sym_text_group_at] = STATE(628),
    [sym__whitespace] = ACTIONS(962),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [413] = {
    [sym__common] = STATE(630),
    [sym__text_mode_common] = STATE(630),
    [sym_inline_verbatim] = STATE(630),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(630),
    [sym_parameter] = STATE(630),
    [sym_text_env_at] = STATE(630),
    [sym__display_math_at] = STATE(630),
    [sym_tex_display_math_at] = STATE(630),
    [sym_latex_display_math_at] = STATE(630),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(630),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(630),
    [sym_tex_inline_math_at] = STATE(630),
    [sym_latex_inline_math_at] = STATE(630),
    [sym_inline_math_env_at] = STATE(630),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(630),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(630),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(630),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(630),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(630),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(630),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(630),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(630),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(630),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(630),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(630),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(630),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(630),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(630),
    [sym_opt_text_group_at] = STATE(630),
    [sym_token_at] = STATE(630),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(629),
    [aux_sym_text_mode_at_repeat1] = STATE(630),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(964),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(964),
    [sym_text] = ACTIONS(964),
  },
  [414] = {
    [sym_display_math_shift] = ACTIONS(966),
    [sym_inline_math_shift] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(966),
    [sym_begin_group] = ACTIONS(966),
    [sym_alignment_tab] = ACTIONS(966),
    [sym_parameter_char] = ACTIONS(966),
    [sym_superscript] = ACTIONS(966),
    [sym_subscript] = ACTIONS(966),
    [sym_active_char] = ACTIONS(966),
    [sym_text] = ACTIONS(966),
  },
  [415] = {
    [sym_display_math_shift] = ACTIONS(968),
    [sym_inline_math_shift] = ACTIONS(968),
    [anon_sym_LBRACK] = ACTIONS(968),
    [anon_sym_RBRACK] = ACTIONS(968),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(968),
    [sym_begin_group] = ACTIONS(968),
    [sym_alignment_tab] = ACTIONS(968),
    [sym_parameter_char] = ACTIONS(968),
    [sym_superscript] = ACTIONS(968),
    [sym_subscript] = ACTIONS(968),
    [sym_active_char] = ACTIONS(968),
    [sym_text] = ACTIONS(968),
  },
  [416] = {
    [sym_text_group_at] = STATE(632),
    [sym__whitespace] = ACTIONS(970),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [417] = {
    [sym_display_math_shift] = ACTIONS(972),
    [sym_inline_math_shift] = ACTIONS(972),
    [anon_sym_LBRACK] = ACTIONS(972),
    [anon_sym_RBRACK] = ACTIONS(972),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(972),
    [sym_begin_group] = ACTIONS(972),
    [sym_alignment_tab] = ACTIONS(972),
    [sym_parameter_char] = ACTIONS(972),
    [sym_superscript] = ACTIONS(972),
    [sym_subscript] = ACTIONS(972),
    [sym_active_char] = ACTIONS(972),
    [sym_text] = ACTIONS(972),
  },
  [418] = {
    [sym_display_math_shift] = ACTIONS(974),
    [sym_inline_math_shift] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(974),
    [anon_sym_RBRACK] = ACTIONS(974),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(974),
    [sym_begin_group] = ACTIONS(974),
    [sym_alignment_tab] = ACTIONS(974),
    [sym_parameter_char] = ACTIONS(974),
    [sym_superscript] = ACTIONS(974),
    [sym_subscript] = ACTIONS(974),
    [sym_active_char] = ACTIONS(974),
    [sym_text] = ACTIONS(974),
  },
  [419] = {
    [sym_display_math_shift] = ACTIONS(976),
    [sym_inline_math_shift] = ACTIONS(976),
    [anon_sym_LBRACK] = ACTIONS(976),
    [anon_sym_RBRACK] = ACTIONS(976),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(976),
    [sym_begin_group] = ACTIONS(976),
    [sym_alignment_tab] = ACTIONS(976),
    [sym_parameter_char] = ACTIONS(976),
    [sym_superscript] = ACTIONS(976),
    [sym_subscript] = ACTIONS(976),
    [sym_active_char] = ACTIONS(976),
    [sym_text] = ACTIONS(976),
  },
  [420] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(57),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_documentclass] = ACTIONS(61),
    [anon_sym_usepackage] = ACTIONS(63),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(69),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [anon_sym_emph] = ACTIONS(73),
    [anon_sym_footnote] = ACTIONS(75),
    [anon_sym_textbf] = ACTIONS(77),
    [anon_sym_textit] = ACTIONS(79),
    [anon_sym_texttt] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(465),
  },
  [421] = {
    [sym_display_math_shift] = ACTIONS(978),
    [sym_inline_math_shift] = ACTIONS(978),
    [anon_sym_LBRACK] = ACTIONS(978),
    [anon_sym_RBRACK] = ACTIONS(978),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(978),
    [sym_begin_group] = ACTIONS(978),
    [sym_alignment_tab] = ACTIONS(978),
    [sym_parameter_char] = ACTIONS(978),
    [sym_superscript] = ACTIONS(978),
    [sym_subscript] = ACTIONS(978),
    [sym_active_char] = ACTIONS(978),
    [sym_text] = ACTIONS(978),
  },
  [422] = {
    [sym__common] = STATE(634),
    [sym__text_mode_common] = STATE(634),
    [sym_inline_verbatim] = STATE(634),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(634),
    [sym_parameter] = STATE(634),
    [sym_text_env_at] = STATE(634),
    [sym__display_math_at] = STATE(634),
    [sym_tex_display_math_at] = STATE(634),
    [sym_latex_display_math_at] = STATE(634),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(634),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(634),
    [sym_tex_inline_math_at] = STATE(634),
    [sym_latex_inline_math_at] = STATE(634),
    [sym_inline_math_env_at] = STATE(634),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(634),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(634),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(634),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(634),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(634),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(634),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(634),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(634),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(634),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(634),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(634),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(634),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(634),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(634),
    [sym_opt_text_group_at] = STATE(634),
    [sym_token_at] = STATE(634),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(633),
    [aux_sym_text_mode_at_repeat1] = STATE(634),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(980),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(980),
    [sym_text] = ACTIONS(980),
  },
  [423] = {
    [sym__common] = STATE(423),
    [sym__text_mode_common] = STATE(423),
    [sym_inline_verbatim] = STATE(423),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(423),
    [sym_parameter] = STATE(423),
    [sym_text_env_at] = STATE(423),
    [sym__display_math_at] = STATE(423),
    [sym_tex_display_math_at] = STATE(423),
    [sym_latex_display_math_at] = STATE(423),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(423),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(423),
    [sym_tex_inline_math_at] = STATE(423),
    [sym_latex_inline_math_at] = STATE(423),
    [sym_inline_math_env_at] = STATE(423),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(423),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(423),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(423),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(423),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(423),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(423),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(423),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(423),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(423),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(423),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(423),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(423),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(423),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(423),
    [sym_opt_text_group_at] = STATE(423),
    [sym_token_at] = STATE(423),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(423),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(982),
    [sym_inline_math_shift] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(988),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(994),
    [sym_alignment_tab] = ACTIONS(997),
    [sym_parameter_char] = ACTIONS(1000),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(997),
    [sym_text] = ACTIONS(997),
  },
  [424] = {
    [sym_display_math_shift] = ACTIONS(1006),
    [sym_inline_math_shift] = ACTIONS(1006),
    [ts_builtin_sym_end] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(1006),
    [anon_sym_RBRACK] = ACTIONS(1006),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1006),
    [sym_begin_group] = ACTIONS(1006),
    [sym_alignment_tab] = ACTIONS(1006),
    [sym_parameter_char] = ACTIONS(1006),
    [sym_superscript] = ACTIONS(1006),
    [sym_subscript] = ACTIONS(1006),
    [sym_active_char] = ACTIONS(1006),
    [sym_text] = ACTIONS(1006),
  },
  [425] = {
    [sym__common] = STATE(425),
    [sym__text_mode_common] = STATE(425),
    [sym_inline_verbatim] = STATE(425),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(425),
    [sym_text_mode_at_region] = STATE(425),
    [sym_parameter] = STATE(425),
    [sym_text_env] = STATE(425),
    [sym__display_math] = STATE(425),
    [sym_tex_display_math] = STATE(425),
    [sym_latex_display_math] = STATE(425),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(425),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(425),
    [sym_tex_inline_math] = STATE(425),
    [sym_latex_inline_math] = STATE(425),
    [sym_inline_math_env] = STATE(425),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(425),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(425),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(425),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(425),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(425),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(425),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(425),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(425),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(425),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(425),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(425),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(425),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(425),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(425),
    [sym_opt_text_group] = STATE(425),
    [sym_token] = STATE(425),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(425),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(509),
    [sym_inline_math_shift] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(523),
    [sym_alignment_tab] = ACTIONS(1008),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(1008),
    [sym_text] = ACTIONS(1008),
  },
  [426] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1011),
  },
  [427] = {
    [sym_implicit_math_shift] = ACTIONS(667),
    [sym_display_math_shift] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [428] = {
    [sym_implicit_math_shift] = ACTIONS(681),
    [sym_display_math_shift] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [429] = {
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_end_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [430] = {
    [sym__whitespace] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(273),
  },
  [431] = {
    [sym__whitespace] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(307),
  },
  [432] = {
    [anon_sym_LBRACK] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_end_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(560),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [433] = {
    [sym__common] = STATE(446),
    [sym__math_mode_common] = STATE(446),
    [sym__math_mode] = STATE(446),
    [sym_parameter] = STATE(446),
    [sym_math_env] = STATE(446),
    [sym_tag] = STATE(446),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(446),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(446),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(446),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(446),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(446),
    [sym_opt_math_group] = STATE(446),
    [sym_token] = STATE(446),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(446),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [434] = {
    [sym__common] = STATE(450),
    [sym__text_mode_common] = STATE(450),
    [sym_inline_verbatim] = STATE(450),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(450),
    [sym_text_mode] = STATE(639),
    [sym_text_mode_at_region] = STATE(450),
    [sym_parameter] = STATE(450),
    [sym_text_env] = STATE(450),
    [sym__display_math] = STATE(450),
    [sym_tex_display_math] = STATE(450),
    [sym_latex_display_math] = STATE(450),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(450),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(450),
    [sym_tex_inline_math] = STATE(450),
    [sym_latex_inline_math] = STATE(450),
    [sym_inline_math_env] = STATE(450),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(450),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(450),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(450),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(450),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(450),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(450),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(450),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(450),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(450),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(450),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(450),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(450),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(450),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(450),
    [sym_opt_text_group] = STATE(450),
    [sym_token] = STATE(450),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(450),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1019),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [435] = {
    [anon_sym_LBRACK] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(584),
    [sym_end_group] = ACTIONS(584),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [436] = {
    [anon_sym_LBRACK] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(586),
    [sym_end_group] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(586),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [437] = {
    [sym_simple_text_group] = STATE(641),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1021),
  },
  [438] = {
    [sym__common] = STATE(312),
    [sym__math_mode_common] = STATE(312),
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_env] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(312),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(642),
    [sym_end_token] = STATE(437),
    [sym_include] = STATE(312),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(312),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(312),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(312),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [439] = {
    [sym__common] = STATE(644),
    [sym__text_mode_common] = STATE(644),
    [sym_inline_verbatim] = STATE(644),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(644),
    [sym_text_mode_at_region] = STATE(644),
    [sym_parameter] = STATE(644),
    [sym_text_env] = STATE(644),
    [sym__display_math] = STATE(644),
    [sym_tex_display_math] = STATE(644),
    [sym_latex_display_math] = STATE(644),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(644),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(644),
    [sym_tex_inline_math] = STATE(644),
    [sym_latex_inline_math] = STATE(644),
    [sym_inline_math_env] = STATE(644),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(644),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(644),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(644),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(644),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(644),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(644),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(644),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(644),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(644),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(644),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(644),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(644),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(644),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(644),
    [sym_opt_text_group] = STATE(644),
    [sym_token] = STATE(644),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(644),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [440] = {
    [anon_sym_LBRACK] = ACTIONS(425),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [441] = {
    [anon_sym_EQ] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [442] = {
    [anon_sym_LBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_end_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [443] = {
    [anon_sym_LBRACK] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(598),
    [sym_begin_group] = ACTIONS(598),
    [sym_end_group] = ACTIONS(598),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(598),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [444] = {
    [sym__common] = STATE(459),
    [sym__math_mode_common] = STATE(459),
    [sym__math_mode] = STATE(459),
    [sym_parameter] = STATE(459),
    [sym_math_env] = STATE(459),
    [sym_tag] = STATE(459),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(459),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(459),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(459),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(459),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(459),
    [sym_opt_math_group] = STATE(459),
    [sym_token] = STATE(459),
    [sym_begin_opt] = STATE(115),
    [sym_end_opt] = STATE(646),
    [aux_sym_math_mode_repeat1] = STATE(459),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [445] = {
    [sym_implicit_math_shift] = ACTIONS(1029),
    [sym_display_math_shift] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [446] = {
    [sym__common] = STATE(446),
    [sym__math_mode_common] = STATE(446),
    [sym__math_mode] = STATE(446),
    [sym_parameter] = STATE(446),
    [sym_math_env] = STATE(446),
    [sym_tag] = STATE(446),
    [sym_tag_token] = STATE(188),
    [sym_escaped] = STATE(446),
    [sym_begin] = STATE(189),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(446),
    [sym_include_token] = STATE(190),
    [sym_storage] = STATE(446),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(446),
    [sym_catcode_token] = STATE(192),
    [sym_math_group] = STATE(446),
    [sym_opt_math_group] = STATE(446),
    [sym_token] = STATE(446),
    [sym_begin_opt] = STATE(193),
    [aux_sym_math_mode_repeat1] = STATE(446),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1031),
    [sym_begin_group] = ACTIONS(1034),
    [sym_end_group] = ACTIONS(602),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1040),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1037),
  },
  [447] = {
    [anon_sym_LBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(535),
    [sym_end_group] = ACTIONS(535),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_text] = ACTIONS(535),
  },
  [448] = {
    [sym_implicit_math_shift] = ACTIONS(1043),
    [sym_display_math_shift] = ACTIONS(1043),
    [anon_sym_LBRACK] = ACTIONS(1043),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1043),
    [sym_begin_group] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(1043),
    [sym_parameter_char] = ACTIONS(1043),
    [sym_superscript] = ACTIONS(1043),
    [sym_subscript] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(1043),
    [sym_text] = ACTIONS(1043),
  },
  [449] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1045),
  },
  [450] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [451] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(1047),
  },
  [452] = {
    [sym_implicit_math_shift] = ACTIONS(809),
    [sym_display_math_shift] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [453] = {
    [sym_implicit_math_shift] = ACTIONS(1049),
    [sym_display_math_shift] = ACTIONS(1049),
    [anon_sym_LBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [454] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1051),
  },
  [455] = {
    [sym_implicit_math_shift] = ACTIONS(323),
    [sym_display_math_shift] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [456] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1053),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [457] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1055),
  },
  [458] = {
    [sym_implicit_math_shift] = ACTIONS(1057),
    [sym_display_math_shift] = ACTIONS(1057),
    [anon_sym_LBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [459] = {
    [sym__common] = STATE(459),
    [sym__math_mode_common] = STATE(459),
    [sym__math_mode] = STATE(459),
    [sym_parameter] = STATE(459),
    [sym_math_env] = STATE(459),
    [sym_tag] = STATE(459),
    [sym_tag_token] = STATE(110),
    [sym_escaped] = STATE(459),
    [sym_begin] = STATE(111),
    [sym_begin_token] = STATE(41),
    [sym_include] = STATE(459),
    [sym_include_token] = STATE(112),
    [sym_storage] = STATE(459),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(459),
    [sym_catcode_token] = STATE(114),
    [sym_math_group] = STATE(459),
    [sym_opt_math_group] = STATE(459),
    [sym_token] = STATE(459),
    [sym_begin_opt] = STATE(115),
    [aux_sym_math_mode_repeat1] = STATE(459),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(763),
    [sym_alignment_tab] = ACTIONS(1059),
    [sym_parameter_char] = ACTIONS(769),
    [sym_superscript] = ACTIONS(1059),
    [sym_subscript] = ACTIONS(1059),
    [sym_active_char] = ACTIONS(1059),
    [sym_text] = ACTIONS(1059),
  },
  [460] = {
    [sym_implicit_math_shift] = ACTIONS(667),
    [sym_inline_math_shift] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [461] = {
    [sym_implicit_math_shift] = ACTIONS(681),
    [sym_inline_math_shift] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [462] = {
    [sym_implicit_math_shift] = ACTIONS(1029),
    [sym_inline_math_shift] = ACTIONS(1029),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [463] = {
    [sym_implicit_math_shift] = ACTIONS(1043),
    [sym_inline_math_shift] = ACTIONS(1043),
    [anon_sym_LBRACK] = ACTIONS(1043),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1043),
    [sym_begin_group] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(1043),
    [sym_parameter_char] = ACTIONS(1043),
    [sym_superscript] = ACTIONS(1043),
    [sym_subscript] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(1043),
    [sym_text] = ACTIONS(1043),
  },
  [464] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1062),
  },
  [465] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(1064),
  },
  [466] = {
    [sym_implicit_math_shift] = ACTIONS(809),
    [sym_inline_math_shift] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [467] = {
    [sym_implicit_math_shift] = ACTIONS(1049),
    [sym_inline_math_shift] = ACTIONS(1049),
    [anon_sym_LBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [468] = {
    [sym_implicit_math_shift] = ACTIONS(323),
    [sym_inline_math_shift] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [469] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1066),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [470] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1068),
  },
  [471] = {
    [sym_implicit_math_shift] = ACTIONS(1057),
    [sym_inline_math_shift] = ACTIONS(1057),
    [anon_sym_LBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [472] = {
    [anon_sym_LBRACK] = ACTIONS(1070),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1070),
  },
  [473] = {
    [sym__whitespace] = ACTIONS(1072),
    [anon_sym_LBRACK] = ACTIONS(1070),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1070),
  },
  [474] = {
    [sym_display_math_shift] = ACTIONS(578),
    [sym_inline_math_shift] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(578),
    [sym_begin_group] = ACTIONS(578),
    [sym_end_group] = ACTIONS(578),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(578),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_text] = ACTIONS(578),
  },
  [475] = {
    [sym_display_math_shift] = ACTIONS(625),
    [sym_inline_math_shift] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(625),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(625),
    [sym_begin_group] = ACTIONS(625),
    [sym_end_group] = ACTIONS(625),
    [sym_alignment_tab] = ACTIONS(625),
    [sym_parameter_char] = ACTIONS(625),
    [sym_superscript] = ACTIONS(625),
    [sym_subscript] = ACTIONS(625),
    [sym_active_char] = ACTIONS(625),
    [sym_text] = ACTIONS(625),
  },
  [476] = {
    [sym_display_math_shift] = ACTIONS(667),
    [sym_inline_math_shift] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_end_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [477] = {
    [sym_display_math_shift] = ACTIONS(681),
    [sym_inline_math_shift] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [478] = {
    [sym_display_math_shift] = ACTIONS(717),
    [sym_inline_math_shift] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [479] = {
    [sym_verb_delim] = ACTIONS(1074),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [480] = {
    [anon_sym_RBRACK] = ACTIONS(1076),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [481] = {
    [sym_display_math_shift] = ACTIONS(750),
    [sym_inline_math_shift] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(750),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(750),
    [sym_superscript] = ACTIONS(750),
    [sym_subscript] = ACTIONS(750),
    [sym_active_char] = ACTIONS(750),
    [sym_text] = ACTIONS(750),
  },
  [482] = {
    [anon_sym_RPAREN] = ACTIONS(1078),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [483] = {
    [sym_display_math_shift] = ACTIONS(774),
    [sym_inline_math_shift] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(774),
    [sym_begin_group] = ACTIONS(774),
    [sym_end_group] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(774),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [484] = {
    [sym_display_math_shift] = ACTIONS(776),
    [sym_inline_math_shift] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(776),
    [sym_begin_group] = ACTIONS(776),
    [sym_end_group] = ACTIONS(776),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(776),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [485] = {
    [sym_display_math_env_group] = STATE(661),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1080),
  },
  [486] = {
    [sym_display_math_shift] = ACTIONS(780),
    [sym_inline_math_shift] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(780),
    [sym_begin_group] = ACTIONS(780),
    [sym_end_group] = ACTIONS(780),
    [sym_alignment_tab] = ACTIONS(780),
    [sym_parameter_char] = ACTIONS(780),
    [sym_superscript] = ACTIONS(780),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(780),
    [sym_text] = ACTIONS(780),
  },
  [487] = {
    [sym_inline_math_env_group] = STATE(663),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1082),
  },
  [488] = {
    [sym_display_math_shift] = ACTIONS(788),
    [sym_inline_math_shift] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(788),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(788),
    [sym_begin_group] = ACTIONS(788),
    [sym_end_group] = ACTIONS(788),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(788),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [489] = {
    [sym_verbatim_env_name] = ACTIONS(1084),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [490] = {
    [sym_display_math_shift] = ACTIONS(792),
    [sym_inline_math_shift] = ACTIONS(792),
    [anon_sym_LBRACK] = ACTIONS(792),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(792),
    [sym_begin_group] = ACTIONS(792),
    [sym_end_group] = ACTIONS(792),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(792),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(792),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [491] = {
    [sym_display_math_shift] = ACTIONS(809),
    [sym_inline_math_shift] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_end_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [492] = {
    [sym_display_math_shift] = ACTIONS(811),
    [sym_inline_math_shift] = ACTIONS(811),
    [anon_sym_LBRACK] = ACTIONS(811),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(811),
    [sym_begin_group] = ACTIONS(811),
    [sym_end_group] = ACTIONS(811),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(811),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(811),
    [sym_active_char] = ACTIONS(811),
    [sym_text] = ACTIONS(811),
  },
  [493] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1086),
  },
  [494] = {
    [sym_simple_text_group] = STATE(666),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [495] = {
    [sym_display_math_shift] = ACTIONS(842),
    [sym_inline_math_shift] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(842),
    [sym_begin_group] = ACTIONS(842),
    [sym_end_group] = ACTIONS(842),
    [sym_alignment_tab] = ACTIONS(842),
    [sym_parameter_char] = ACTIONS(842),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(842),
    [sym_active_char] = ACTIONS(842),
    [sym_text] = ACTIONS(842),
  },
  [496] = {
    [sym_simple_text_group] = STATE(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(329),
  },
  [497] = {
    [sym_display_math_shift] = ACTIONS(844),
    [sym_inline_math_shift] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(844),
    [sym_begin_group] = ACTIONS(844),
    [sym_end_group] = ACTIONS(844),
    [sym_alignment_tab] = ACTIONS(844),
    [sym_parameter_char] = ACTIONS(844),
    [sym_superscript] = ACTIONS(844),
    [sym_subscript] = ACTIONS(844),
    [sym_active_char] = ACTIONS(844),
    [sym_text] = ACTIONS(844),
  },
  [498] = {
    [sym_text_group] = STATE(668),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [499] = {
    [sym_display_math_shift] = ACTIONS(846),
    [sym_inline_math_shift] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(846),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(846),
    [sym_begin_group] = ACTIONS(846),
    [sym_end_group] = ACTIONS(846),
    [sym_alignment_tab] = ACTIONS(846),
    [sym_parameter_char] = ACTIONS(846),
    [sym_superscript] = ACTIONS(846),
    [sym_subscript] = ACTIONS(846),
    [sym_active_char] = ACTIONS(846),
    [sym_text] = ACTIONS(846),
  },
  [500] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1088),
  },
  [501] = {
    [sym_text_group] = STATE(670),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(93),
  },
  [502] = {
    [sym_display_math_shift] = ACTIONS(850),
    [sym_inline_math_shift] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_end_group] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_parameter_char] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_active_char] = ACTIONS(850),
    [sym_text] = ACTIONS(850),
  },
  [503] = {
    [sym_display_math_shift] = ACTIONS(900),
    [sym_inline_math_shift] = ACTIONS(900),
    [sym__whitespace] = ACTIONS(1090),
    [anon_sym_LBRACK] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_end_group] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_parameter_char] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_active_char] = ACTIONS(900),
    [sym_text] = ACTIONS(904),
  },
  [504] = {
    [anon_sym_makeatother] = ACTIONS(1092),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [505] = {
    [sym_display_math_shift] = ACTIONS(934),
    [sym_inline_math_shift] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(934),
    [sym_begin_group] = ACTIONS(934),
    [sym_end_group] = ACTIONS(934),
    [sym_alignment_tab] = ACTIONS(934),
    [sym_parameter_char] = ACTIONS(934),
    [sym_superscript] = ACTIONS(934),
    [sym_subscript] = ACTIONS(934),
    [sym_active_char] = ACTIONS(934),
    [sym_text] = ACTIONS(934),
  },
  [506] = {
    [sym_display_math_shift] = ACTIONS(1006),
    [sym_inline_math_shift] = ACTIONS(1006),
    [anon_sym_LBRACK] = ACTIONS(1006),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1006),
    [sym_begin_group] = ACTIONS(1006),
    [sym_end_group] = ACTIONS(1006),
    [sym_alignment_tab] = ACTIONS(1006),
    [sym_parameter_char] = ACTIONS(1006),
    [sym_superscript] = ACTIONS(1006),
    [sym_subscript] = ACTIONS(1006),
    [sym_active_char] = ACTIONS(1006),
    [sym_text] = ACTIONS(1006),
  },
  [507] = {
    [sym_display_math_shift] = ACTIONS(1094),
    [sym_inline_math_shift] = ACTIONS(1094),
    [ts_builtin_sym_end] = ACTIONS(1094),
    [anon_sym_LBRACK] = ACTIONS(1094),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1094),
    [sym_begin_group] = ACTIONS(1094),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(1094),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1094),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [508] = {
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [509] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [510] = {
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_RBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [511] = {
    [sym_display_math_shift] = ACTIONS(1096),
    [sym_inline_math_shift] = ACTIONS(1096),
    [ts_builtin_sym_end] = ACTIONS(1096),
    [sym__whitespace] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_RBRACK] = ACTIONS(1096),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1096),
    [sym_begin_group] = ACTIONS(1096),
    [sym_alignment_tab] = ACTIONS(1096),
    [sym_parameter_char] = ACTIONS(1096),
    [sym_superscript] = ACTIONS(1096),
    [sym_subscript] = ACTIONS(1096),
    [sym_active_char] = ACTIONS(1096),
    [sym_text] = ACTIONS(1100),
  },
  [512] = {
    [anon_sym_LBRACK] = ACTIONS(1043),
    [anon_sym_RBRACK] = ACTIONS(1043),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1043),
    [sym_begin_group] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(1043),
    [sym_parameter_char] = ACTIONS(1043),
    [sym_superscript] = ACTIONS(1043),
    [sym_subscript] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(1043),
    [sym_text] = ACTIONS(1043),
  },
  [513] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1102),
  },
  [514] = {
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [515] = {
    [anon_sym_LBRACK] = ACTIONS(1049),
    [anon_sym_RBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [516] = {
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [517] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1104),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [518] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1106),
  },
  [519] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [520] = {
    [sym_display_math_shift] = ACTIONS(1108),
    [sym_inline_math_shift] = ACTIONS(1108),
    [ts_builtin_sym_end] = ACTIONS(1108),
    [sym__whitespace] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1108),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1108),
    [sym_begin_group] = ACTIONS(1108),
    [sym_alignment_tab] = ACTIONS(1108),
    [sym_parameter_char] = ACTIONS(1108),
    [sym_superscript] = ACTIONS(1108),
    [sym_subscript] = ACTIONS(1108),
    [sym_active_char] = ACTIONS(1108),
    [sym_text] = ACTIONS(1112),
  },
  [521] = {
    [sym_display_math_env_name] = ACTIONS(1114),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [522] = {
    [sym_display_math_shift] = ACTIONS(1116),
    [sym_inline_math_shift] = ACTIONS(1116),
    [ts_builtin_sym_end] = ACTIONS(1116),
    [anon_sym_LBRACK] = ACTIONS(1116),
    [anon_sym_RBRACK] = ACTIONS(1116),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1116),
    [sym_begin_group] = ACTIONS(1116),
    [sym_alignment_tab] = ACTIONS(1116),
    [sym_parameter_char] = ACTIONS(1116),
    [sym_superscript] = ACTIONS(1116),
    [sym_subscript] = ACTIONS(1116),
    [sym_active_char] = ACTIONS(1116),
    [sym_text] = ACTIONS(1116),
  },
  [523] = {
    [sym_inline_math_env_name] = ACTIONS(1118),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [524] = {
    [sym_display_math_shift] = ACTIONS(1120),
    [sym_inline_math_shift] = ACTIONS(1120),
    [ts_builtin_sym_end] = ACTIONS(1120),
    [anon_sym_LBRACK] = ACTIONS(1120),
    [anon_sym_RBRACK] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_active_char] = ACTIONS(1120),
    [sym_text] = ACTIONS(1120),
  },
  [525] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1122),
  },
  [526] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1124),
  },
  [527] = {
    [anon_sym_LBRACK] = ACTIONS(1126),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1126),
    [sym__end_of_line] = ACTIONS(1126),
  },
  [528] = {
    [anon_sym_LBRACK] = ACTIONS(1128),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1128),
    [sym_begin_group] = ACTIONS(1128),
    [sym_alignment_tab] = ACTIONS(1128),
    [sym_parameter_char] = ACTIONS(1128),
    [sym_superscript] = ACTIONS(1128),
    [sym_subscript] = ACTIONS(1128),
    [sym_active_char] = ACTIONS(1128),
    [sym_text] = ACTIONS(1128),
  },
  [529] = {
    [anon_sym_LBRACK] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1130),
    [sym__end_of_line] = ACTIONS(1130),
  },
  [530] = {
    [sym_display_math_shift] = ACTIONS(1132),
    [sym_inline_math_shift] = ACTIONS(1132),
    [ts_builtin_sym_end] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_RBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [531] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(323),
  },
  [532] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1134),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [533] = {
    [anon_sym_LBRACK] = ACTIONS(1136),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1136),
    [sym_begin_group] = ACTIONS(1136),
    [sym_alignment_tab] = ACTIONS(1136),
    [sym_parameter_char] = ACTIONS(1136),
    [sym_superscript] = ACTIONS(1136),
    [sym_subscript] = ACTIONS(1136),
    [sym_active_char] = ACTIONS(1136),
    [sym_text] = ACTIONS(1136),
  },
  [534] = {
    [sym_text_group] = STATE(682),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(1138),
  },
  [535] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1138),
  },
  [536] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1140),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1142),
    [sym__end_of_line] = ACTIONS(1142),
  },
  [537] = {
    [sym_text_group] = STATE(684),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(1144),
  },
  [538] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1144),
  },
  [539] = {
    [sym_display_math_shift] = ACTIONS(1146),
    [sym_inline_math_shift] = ACTIONS(1146),
    [ts_builtin_sym_end] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
    [anon_sym_RBRACK] = ACTIONS(1146),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1146),
    [sym_begin_group] = ACTIONS(1146),
    [sym_alignment_tab] = ACTIONS(1146),
    [sym_parameter_char] = ACTIONS(1146),
    [sym_superscript] = ACTIONS(1146),
    [sym_subscript] = ACTIONS(1146),
    [sym_active_char] = ACTIONS(1146),
    [sym_text] = ACTIONS(1146),
  },
  [540] = {
    [sym__whitespace] = ACTIONS(1006),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1006),
    [sym__end_of_line] = ACTIONS(1006),
  },
  [541] = {
    [sym_display_math_shift] = ACTIONS(1148),
    [sym_inline_math_shift] = ACTIONS(1148),
    [ts_builtin_sym_end] = ACTIONS(1148),
    [anon_sym_LBRACK] = ACTIONS(1148),
    [anon_sym_RBRACK] = ACTIONS(1148),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1148),
    [sym_begin_group] = ACTIONS(1148),
    [sym_alignment_tab] = ACTIONS(1148),
    [sym_parameter_char] = ACTIONS(1148),
    [sym_superscript] = ACTIONS(1148),
    [sym_subscript] = ACTIONS(1148),
    [sym_active_char] = ACTIONS(1148),
    [sym_text] = ACTIONS(1148),
  },
  [542] = {
    [sym_display_math_shift] = ACTIONS(1150),
    [sym_inline_math_shift] = ACTIONS(1150),
    [ts_builtin_sym_end] = ACTIONS(1150),
    [anon_sym_LBRACK] = ACTIONS(1150),
    [anon_sym_RBRACK] = ACTIONS(1150),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1150),
    [sym_begin_group] = ACTIONS(1150),
    [sym_alignment_tab] = ACTIONS(1150),
    [sym_parameter_char] = ACTIONS(1150),
    [sym_superscript] = ACTIONS(1150),
    [sym_subscript] = ACTIONS(1150),
    [sym_active_char] = ACTIONS(1150),
    [sym_text] = ACTIONS(1150),
  },
  [543] = {
    [sym_display_math_shift] = ACTIONS(1152),
    [sym_inline_math_shift] = ACTIONS(1152),
    [ts_builtin_sym_end] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [anon_sym_RBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [544] = {
    [sym_display_math_shift] = ACTIONS(1154),
    [sym_inline_math_shift] = ACTIONS(1154),
    [ts_builtin_sym_end] = ACTIONS(1154),
    [anon_sym_LBRACK] = ACTIONS(1154),
    [anon_sym_RBRACK] = ACTIONS(1154),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1154),
    [sym_begin_group] = ACTIONS(1154),
    [sym_alignment_tab] = ACTIONS(1154),
    [sym_parameter_char] = ACTIONS(1154),
    [sym_superscript] = ACTIONS(1154),
    [sym_subscript] = ACTIONS(1154),
    [sym_active_char] = ACTIONS(1154),
    [sym_text] = ACTIONS(1154),
  },
  [545] = {
    [sym_implicit_math_shift] = ACTIONS(906),
    [sym_display_math_shift] = ACTIONS(906),
    [sym__whitespace] = ACTIONS(1156),
    [anon_sym_LBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [546] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(550),
    [anon_sym_begin] = ACTIONS(59),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(552),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(1158),
  },
  [547] = {
    [sym__common] = STATE(688),
    [sym__math_mode_common] = STATE(688),
    [sym__math_mode_at] = STATE(688),
    [sym_parameter] = STATE(688),
    [sym_math_env_at] = STATE(688),
    [sym_tag_at] = STATE(688),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(688),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(688),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(688),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(688),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(688),
    [sym_opt_math_group_at] = STATE(688),
    [sym_token_at] = STATE(688),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(688),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(1160),
    [sym_alignment_tab] = ACTIONS(1162),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(1162),
    [sym_subscript] = ACTIONS(1162),
    [sym_active_char] = ACTIONS(1162),
    [sym_text] = ACTIONS(1162),
  },
  [548] = {
    [sym_implicit_math_shift] = ACTIONS(1164),
    [sym_display_math_shift] = ACTIONS(1164),
    [anon_sym_LBRACK] = ACTIONS(1164),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1164),
    [sym_begin_group] = ACTIONS(1164),
    [sym_alignment_tab] = ACTIONS(1164),
    [sym_parameter_char] = ACTIONS(1164),
    [sym_superscript] = ACTIONS(1164),
    [sym_subscript] = ACTIONS(1164),
    [sym_active_char] = ACTIONS(1164),
    [sym_text] = ACTIONS(1164),
  },
  [549] = {
    [sym_math_text_group_at] = STATE(690),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1166),
  },
  [550] = {
    [sym__common] = STATE(692),
    [sym__math_mode_common] = STATE(692),
    [sym__math_mode_at] = STATE(692),
    [sym_parameter] = STATE(692),
    [sym_math_env_at] = STATE(692),
    [sym_tag_at] = STATE(692),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(692),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(691),
    [sym_end_token] = STATE(437),
    [sym_include_at] = STATE(692),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(692),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(692),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(692),
    [sym_opt_math_group_at] = STATE(692),
    [sym_token_at] = STATE(692),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(692),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1168),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1168),
    [sym_subscript] = ACTIONS(1168),
    [sym_active_char] = ACTIONS(1168),
    [sym_text] = ACTIONS(1168),
  },
  [551] = {
    [sym_text_group_at] = STATE(694),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1170),
  },
  [552] = {
    [sym__common] = STATE(696),
    [sym__math_mode_common] = STATE(696),
    [sym__math_mode_at] = STATE(696),
    [sym_parameter] = STATE(696),
    [sym_math_env_at] = STATE(696),
    [sym_tag_at] = STATE(696),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(696),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(696),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(696),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(696),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(696),
    [sym_opt_math_group_at] = STATE(696),
    [sym_token_at] = STATE(696),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(695),
    [aux_sym_math_mode_at_repeat1] = STATE(696),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1172),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1172),
    [sym_subscript] = ACTIONS(1172),
    [sym_active_char] = ACTIONS(1172),
    [sym_text] = ACTIONS(1172),
  },
  [553] = {
    [sym__common] = STATE(698),
    [sym__math_mode_common] = STATE(698),
    [sym__math_mode_at] = STATE(698),
    [sym_parameter] = STATE(698),
    [sym_math_env_at] = STATE(698),
    [sym_tag_at] = STATE(698),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(698),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(698),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(698),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(698),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(698),
    [sym_opt_math_group_at] = STATE(698),
    [sym_token_at] = STATE(698),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(698),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(1174),
    [sym_alignment_tab] = ACTIONS(1176),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(1176),
    [sym_subscript] = ACTIONS(1176),
    [sym_active_char] = ACTIONS(1176),
    [sym_text] = ACTIONS(1176),
  },
  [554] = {
    [sym_display_math_shift] = ACTIONS(1178),
    [sym_inline_math_shift] = ACTIONS(1178),
    [anon_sym_LBRACK] = ACTIONS(1178),
    [anon_sym_RBRACK] = ACTIONS(1178),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1178),
    [sym_begin_group] = ACTIONS(1178),
    [sym_alignment_tab] = ACTIONS(1178),
    [sym_parameter_char] = ACTIONS(1178),
    [sym_superscript] = ACTIONS(1178),
    [sym_subscript] = ACTIONS(1178),
    [sym_active_char] = ACTIONS(1178),
    [sym_text] = ACTIONS(1178),
  },
  [555] = {
    [sym__common] = STATE(701),
    [sym__text_mode_common] = STATE(701),
    [sym_inline_verbatim] = STATE(701),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(701),
    [sym_text_mode_at] = STATE(700),
    [sym_parameter] = STATE(701),
    [sym_text_env_at] = STATE(701),
    [sym__display_math_at] = STATE(701),
    [sym_tex_display_math_at] = STATE(701),
    [sym_latex_display_math_at] = STATE(701),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(701),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(701),
    [sym_tex_inline_math_at] = STATE(701),
    [sym_latex_inline_math_at] = STATE(701),
    [sym_inline_math_env_at] = STATE(701),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(701),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(701),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(701),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(701),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(701),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(701),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(701),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(701),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(701),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(701),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(701),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(701),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(701),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(701),
    [sym_opt_text_group_at] = STATE(701),
    [sym_token_at] = STATE(701),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(701),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1180),
    [sym_alignment_tab] = ACTIONS(1182),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1182),
    [sym_text] = ACTIONS(1182),
  },
  [556] = {
    [sym_implicit_math_shift] = ACTIONS(1184),
    [sym_display_math_shift] = ACTIONS(1184),
    [anon_sym_LBRACK] = ACTIONS(1184),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1184),
    [sym_begin_group] = ACTIONS(1184),
    [sym_alignment_tab] = ACTIONS(1184),
    [sym_parameter_char] = ACTIONS(1184),
    [sym_superscript] = ACTIONS(1184),
    [sym_subscript] = ACTIONS(1184),
    [sym_active_char] = ACTIONS(1184),
    [sym_text] = ACTIONS(1184),
  },
  [557] = {
    [anon_sym_tag] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(345),
    [anon_sym_begin] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(387),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(65),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(347),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(936),
  },
  [558] = {
    [sym_implicit_math_shift] = ACTIONS(1186),
    [sym_display_math_shift] = ACTIONS(1186),
    [anon_sym_LBRACK] = ACTIONS(1186),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1186),
    [sym_begin_group] = ACTIONS(1186),
    [sym_alignment_tab] = ACTIONS(1186),
    [sym_parameter_char] = ACTIONS(1186),
    [sym_superscript] = ACTIONS(1186),
    [sym_subscript] = ACTIONS(1186),
    [sym_active_char] = ACTIONS(1186),
    [sym_text] = ACTIONS(1186),
  },
  [559] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(702),
    [sym_end_token] = STATE(201),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [560] = {
    [sym__common] = STATE(704),
    [sym__text_mode_common] = STATE(704),
    [sym_inline_verbatim] = STATE(704),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(704),
    [sym_parameter] = STATE(704),
    [sym_text_env_at] = STATE(704),
    [sym__display_math_at] = STATE(704),
    [sym_tex_display_math_at] = STATE(704),
    [sym_latex_display_math_at] = STATE(704),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(704),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(704),
    [sym_tex_inline_math_at] = STATE(704),
    [sym_latex_inline_math_at] = STATE(704),
    [sym_inline_math_env_at] = STATE(704),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(704),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(704),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(704),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(704),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(704),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(704),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(704),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(704),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(704),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(704),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(704),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(704),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(704),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(704),
    [sym_opt_text_group_at] = STATE(704),
    [sym_token_at] = STATE(704),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(704),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1188),
    [sym_alignment_tab] = ACTIONS(1190),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1190),
    [sym_text] = ACTIONS(1190),
  },
  [561] = {
    [sym_implicit_math_shift] = ACTIONS(958),
    [sym_display_math_shift] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [562] = {
    [sym_implicit_math_shift] = ACTIONS(1192),
    [sym_display_math_shift] = ACTIONS(1192),
    [anon_sym_LBRACK] = ACTIONS(1192),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1192),
    [sym_begin_group] = ACTIONS(1192),
    [sym_alignment_tab] = ACTIONS(1192),
    [sym_parameter_char] = ACTIONS(1192),
    [sym_superscript] = ACTIONS(1192),
    [sym_subscript] = ACTIONS(1192),
    [sym_active_char] = ACTIONS(1192),
    [sym_text] = ACTIONS(1192),
  },
  [563] = {
    [sym__common] = STATE(706),
    [sym__math_mode_common] = STATE(706),
    [sym__math_mode_at] = STATE(706),
    [sym_parameter] = STATE(706),
    [sym_math_env_at] = STATE(706),
    [sym_tag_at] = STATE(706),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(706),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(706),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(706),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(706),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(706),
    [sym_opt_math_group_at] = STATE(706),
    [sym_token_at] = STATE(706),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(705),
    [aux_sym_math_mode_at_repeat1] = STATE(706),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_active_char] = ACTIONS(1194),
    [sym_text] = ACTIONS(1194),
  },
  [564] = {
    [sym__common] = STATE(564),
    [sym__math_mode_common] = STATE(564),
    [sym__math_mode_at] = STATE(564),
    [sym_parameter] = STATE(564),
    [sym_math_env_at] = STATE(564),
    [sym_tag_at] = STATE(564),
    [sym_tag_token] = STATE(358),
    [sym_escaped] = STATE(564),
    [sym_begin] = STATE(359),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(564),
    [sym_include_token] = STATE(360),
    [sym_storage] = STATE(564),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(564),
    [sym_catcode_token] = STATE(44),
    [sym_math_group_at] = STATE(564),
    [sym_opt_math_group_at] = STATE(564),
    [sym_token_at] = STATE(564),
    [sym_begin_opt] = STATE(361),
    [aux_sym_math_mode_at_repeat1] = STATE(564),
    [aux_sym_parameter_repeat1] = STATE(47),
    [sym_implicit_math_shift] = ACTIONS(1196),
    [sym_display_math_shift] = ACTIONS(1196),
    [anon_sym_LBRACK] = ACTIONS(1198),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1201),
    [sym_begin_group] = ACTIONS(1204),
    [sym_alignment_tab] = ACTIONS(1207),
    [sym_parameter_char] = ACTIONS(1210),
    [sym_superscript] = ACTIONS(1207),
    [sym_subscript] = ACTIONS(1207),
    [sym_active_char] = ACTIONS(1207),
    [sym_text] = ACTIONS(1207),
  },
  [565] = {
    [sym_implicit_math_shift] = ACTIONS(906),
    [sym_inline_math_shift] = ACTIONS(906),
    [sym__whitespace] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [566] = {
    [sym_implicit_math_shift] = ACTIONS(1164),
    [sym_inline_math_shift] = ACTIONS(1164),
    [anon_sym_LBRACK] = ACTIONS(1164),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1164),
    [sym_begin_group] = ACTIONS(1164),
    [sym_alignment_tab] = ACTIONS(1164),
    [sym_parameter_char] = ACTIONS(1164),
    [sym_superscript] = ACTIONS(1164),
    [sym_subscript] = ACTIONS(1164),
    [sym_active_char] = ACTIONS(1164),
    [sym_text] = ACTIONS(1164),
  },
  [567] = {
    [sym__common] = STATE(698),
    [sym__math_mode_common] = STATE(698),
    [sym__math_mode_at] = STATE(698),
    [sym_parameter] = STATE(698),
    [sym_math_env_at] = STATE(698),
    [sym_tag_at] = STATE(698),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(698),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(698),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(698),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(698),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(698),
    [sym_opt_math_group_at] = STATE(698),
    [sym_token_at] = STATE(698),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(698),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(1215),
    [sym_alignment_tab] = ACTIONS(1176),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(1176),
    [sym_subscript] = ACTIONS(1176),
    [sym_active_char] = ACTIONS(1176),
    [sym_text] = ACTIONS(1176),
  },
  [568] = {
    [sym_display_math_shift] = ACTIONS(1217),
    [sym_inline_math_shift] = ACTIONS(1217),
    [anon_sym_LBRACK] = ACTIONS(1217),
    [anon_sym_RBRACK] = ACTIONS(1217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1217),
    [sym_begin_group] = ACTIONS(1217),
    [sym_alignment_tab] = ACTIONS(1217),
    [sym_parameter_char] = ACTIONS(1217),
    [sym_superscript] = ACTIONS(1217),
    [sym_subscript] = ACTIONS(1217),
    [sym_active_char] = ACTIONS(1217),
    [sym_text] = ACTIONS(1217),
  },
  [569] = {
    [sym__common] = STATE(701),
    [sym__text_mode_common] = STATE(701),
    [sym_inline_verbatim] = STATE(701),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(701),
    [sym_text_mode_at] = STATE(710),
    [sym_parameter] = STATE(701),
    [sym_text_env_at] = STATE(701),
    [sym__display_math_at] = STATE(701),
    [sym_tex_display_math_at] = STATE(701),
    [sym_latex_display_math_at] = STATE(701),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(701),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(701),
    [sym_tex_inline_math_at] = STATE(701),
    [sym_latex_inline_math_at] = STATE(701),
    [sym_inline_math_env_at] = STATE(701),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(701),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(701),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(701),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(701),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(701),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(701),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(701),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(701),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(701),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(701),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(701),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(701),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(701),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(701),
    [sym_opt_text_group_at] = STATE(701),
    [sym_token_at] = STATE(701),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(701),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1219),
    [sym_alignment_tab] = ACTIONS(1182),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1182),
    [sym_text] = ACTIONS(1182),
  },
  [570] = {
    [sym_implicit_math_shift] = ACTIONS(1184),
    [sym_inline_math_shift] = ACTIONS(1184),
    [anon_sym_LBRACK] = ACTIONS(1184),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1184),
    [sym_begin_group] = ACTIONS(1184),
    [sym_alignment_tab] = ACTIONS(1184),
    [sym_parameter_char] = ACTIONS(1184),
    [sym_superscript] = ACTIONS(1184),
    [sym_subscript] = ACTIONS(1184),
    [sym_active_char] = ACTIONS(1184),
    [sym_text] = ACTIONS(1184),
  },
  [571] = {
    [sym_implicit_math_shift] = ACTIONS(1186),
    [sym_inline_math_shift] = ACTIONS(1186),
    [anon_sym_LBRACK] = ACTIONS(1186),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1186),
    [sym_begin_group] = ACTIONS(1186),
    [sym_alignment_tab] = ACTIONS(1186),
    [sym_parameter_char] = ACTIONS(1186),
    [sym_superscript] = ACTIONS(1186),
    [sym_subscript] = ACTIONS(1186),
    [sym_active_char] = ACTIONS(1186),
    [sym_text] = ACTIONS(1186),
  },
  [572] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(711),
    [sym_end_token] = STATE(222),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [573] = {
    [sym__common] = STATE(713),
    [sym__text_mode_common] = STATE(713),
    [sym_inline_verbatim] = STATE(713),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(713),
    [sym_parameter] = STATE(713),
    [sym_text_env_at] = STATE(713),
    [sym__display_math_at] = STATE(713),
    [sym_tex_display_math_at] = STATE(713),
    [sym_latex_display_math_at] = STATE(713),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(713),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(713),
    [sym_tex_inline_math_at] = STATE(713),
    [sym_latex_inline_math_at] = STATE(713),
    [sym_inline_math_env_at] = STATE(713),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(713),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(713),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(713),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(713),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(713),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(713),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(713),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(713),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(713),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(713),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(713),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(713),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(713),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(713),
    [sym_opt_text_group_at] = STATE(713),
    [sym_token_at] = STATE(713),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(713),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1221),
    [sym_alignment_tab] = ACTIONS(1223),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1223),
    [sym_text] = ACTIONS(1223),
  },
  [574] = {
    [sym_implicit_math_shift] = ACTIONS(958),
    [sym_inline_math_shift] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [575] = {
    [sym_implicit_math_shift] = ACTIONS(1192),
    [sym_inline_math_shift] = ACTIONS(1192),
    [anon_sym_LBRACK] = ACTIONS(1192),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1192),
    [sym_begin_group] = ACTIONS(1192),
    [sym_alignment_tab] = ACTIONS(1192),
    [sym_parameter_char] = ACTIONS(1192),
    [sym_superscript] = ACTIONS(1192),
    [sym_subscript] = ACTIONS(1192),
    [sym_active_char] = ACTIONS(1192),
    [sym_text] = ACTIONS(1192),
  },
  [576] = {
    [sym__common] = STATE(706),
    [sym__math_mode_common] = STATE(706),
    [sym__math_mode_at] = STATE(706),
    [sym_parameter] = STATE(706),
    [sym_math_env_at] = STATE(706),
    [sym_tag_at] = STATE(706),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(706),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(706),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(706),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(706),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(706),
    [sym_opt_math_group_at] = STATE(706),
    [sym_token_at] = STATE(706),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(714),
    [aux_sym_math_mode_at_repeat1] = STATE(706),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_active_char] = ACTIONS(1194),
    [sym_text] = ACTIONS(1194),
  },
  [577] = {
    [sym__common] = STATE(577),
    [sym__math_mode_common] = STATE(577),
    [sym__math_mode_at] = STATE(577),
    [sym_parameter] = STATE(577),
    [sym_math_env_at] = STATE(577),
    [sym_tag_at] = STATE(577),
    [sym_tag_token] = STATE(367),
    [sym_escaped] = STATE(577),
    [sym_begin] = STATE(368),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(577),
    [sym_include_token] = STATE(369),
    [sym_storage] = STATE(577),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(577),
    [sym_catcode_token] = STATE(56),
    [sym_math_group_at] = STATE(577),
    [sym_opt_math_group_at] = STATE(577),
    [sym_token_at] = STATE(577),
    [sym_begin_opt] = STATE(370),
    [aux_sym_math_mode_at_repeat1] = STATE(577),
    [aux_sym_parameter_repeat1] = STATE(59),
    [sym_implicit_math_shift] = ACTIONS(1196),
    [sym_inline_math_shift] = ACTIONS(1196),
    [anon_sym_LBRACK] = ACTIONS(1198),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1225),
    [sym_begin_group] = ACTIONS(1228),
    [sym_alignment_tab] = ACTIONS(1231),
    [sym_parameter_char] = ACTIONS(1234),
    [sym_superscript] = ACTIONS(1231),
    [sym_subscript] = ACTIONS(1231),
    [sym_active_char] = ACTIONS(1231),
    [sym_text] = ACTIONS(1231),
  },
  [578] = {
    [sym_display_math_shift] = ACTIONS(1237),
    [sym_inline_math_shift] = ACTIONS(1237),
    [ts_builtin_sym_end] = ACTIONS(1237),
    [anon_sym_LBRACK] = ACTIONS(1237),
    [anon_sym_RBRACK] = ACTIONS(1237),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1237),
    [sym_begin_group] = ACTIONS(1237),
    [sym_alignment_tab] = ACTIONS(1237),
    [sym_parameter_char] = ACTIONS(1237),
    [sym_superscript] = ACTIONS(1237),
    [sym_subscript] = ACTIONS(1237),
    [sym_active_char] = ACTIONS(1237),
    [sym_text] = ACTIONS(1237),
  },
  [579] = {
    [sym_display_math_shift] = ACTIONS(1239),
    [sym_inline_math_shift] = ACTIONS(1239),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [anon_sym_RBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [580] = {
    [sym_display_math_shift] = ACTIONS(852),
    [sym_inline_math_shift] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(852),
    [sym_begin_group] = ACTIONS(852),
    [sym_end_group] = ACTIONS(852),
    [sym_alignment_tab] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(852),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(852),
    [sym_text] = ACTIONS(852),
  },
  [581] = {
    [sym_implicit_math_shift] = ACTIONS(1241),
    [sym_display_math_shift] = ACTIONS(1241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [582] = {
    [sym_display_math_shift] = ACTIONS(880),
    [sym_inline_math_shift] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_end_group] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [583] = {
    [sym_implicit_math_shift] = ACTIONS(1243),
    [sym_inline_math_shift] = ACTIONS(1243),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [584] = {
    [sym_display_math_shift] = ACTIONS(906),
    [sym_inline_math_shift] = ACTIONS(906),
    [sym__whitespace] = ACTIONS(1245),
    [anon_sym_LBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_end_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [585] = {
    [sym_display_math_shift] = ACTIONS(922),
    [sym_inline_math_shift] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_end_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [586] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1247),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [587] = {
    [sym_end_display_math] = STATE(719),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(695),
  },
  [588] = {
    [sym_end_inline_math] = STATE(720),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(697),
  },
  [589] = {
    [sym_display_math_end] = STATE(721),
    [sym_end_token] = STATE(485),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [590] = {
    [sym_inline_math_end] = STATE(722),
    [sym_end_token] = STATE(487),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(121),
  },
  [591] = {
    [sym_display_math_shift] = ACTIONS(952),
    [sym_inline_math_shift] = ACTIONS(952),
    [anon_sym_LBRACK] = ACTIONS(952),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(952),
    [sym_end_group] = ACTIONS(952),
    [sym_alignment_tab] = ACTIONS(952),
    [sym_parameter_char] = ACTIONS(952),
    [sym_superscript] = ACTIONS(952),
    [sym_subscript] = ACTIONS(952),
    [sym_active_char] = ACTIONS(952),
    [sym_text] = ACTIONS(952),
  },
  [592] = {
    [sym__common] = STATE(423),
    [sym__text_mode_common] = STATE(423),
    [sym_inline_verbatim] = STATE(423),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(423),
    [sym_parameter] = STATE(423),
    [sym_text_env_at] = STATE(423),
    [sym__display_math_at] = STATE(423),
    [sym_tex_display_math_at] = STATE(423),
    [sym_latex_display_math_at] = STATE(423),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(423),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(423),
    [sym_tex_inline_math_at] = STATE(423),
    [sym_latex_inline_math_at] = STATE(423),
    [sym_inline_math_env_at] = STATE(423),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(423),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(423),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_end] = STATE(723),
    [sym_end_token] = STATE(266),
    [sym_documentclass] = STATE(423),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(423),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(423),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(423),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(423),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(423),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(423),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(423),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(423),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(423),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(423),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(423),
    [sym_opt_text_group_at] = STATE(423),
    [sym_token_at] = STATE(423),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(423),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [593] = {
    [sym_display_math_shift] = ACTIONS(958),
    [sym_inline_math_shift] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_end_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [594] = {
    [sym_display_math_shift] = ACTIONS(960),
    [sym_inline_math_shift] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(960),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(960),
    [sym_begin_group] = ACTIONS(960),
    [sym_end_group] = ACTIONS(960),
    [sym_alignment_tab] = ACTIONS(960),
    [sym_parameter_char] = ACTIONS(960),
    [sym_superscript] = ACTIONS(960),
    [sym_subscript] = ACTIONS(960),
    [sym_active_char] = ACTIONS(960),
    [sym_text] = ACTIONS(960),
  },
  [595] = {
    [sym_text_group_at] = STATE(725),
    [sym__whitespace] = ACTIONS(1249),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [596] = {
    [sym_display_math_shift] = ACTIONS(966),
    [sym_inline_math_shift] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(966),
    [sym_begin_group] = ACTIONS(966),
    [sym_end_group] = ACTIONS(966),
    [sym_alignment_tab] = ACTIONS(966),
    [sym_parameter_char] = ACTIONS(966),
    [sym_superscript] = ACTIONS(966),
    [sym_subscript] = ACTIONS(966),
    [sym_active_char] = ACTIONS(966),
    [sym_text] = ACTIONS(966),
  },
  [597] = {
    [sym_display_math_shift] = ACTIONS(968),
    [sym_inline_math_shift] = ACTIONS(968),
    [anon_sym_LBRACK] = ACTIONS(968),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(968),
    [sym_begin_group] = ACTIONS(968),
    [sym_end_group] = ACTIONS(968),
    [sym_alignment_tab] = ACTIONS(968),
    [sym_parameter_char] = ACTIONS(968),
    [sym_superscript] = ACTIONS(968),
    [sym_subscript] = ACTIONS(968),
    [sym_active_char] = ACTIONS(968),
    [sym_text] = ACTIONS(968),
  },
  [598] = {
    [sym_text_group_at] = STATE(727),
    [sym__whitespace] = ACTIONS(1251),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [599] = {
    [sym_display_math_shift] = ACTIONS(972),
    [sym_inline_math_shift] = ACTIONS(972),
    [anon_sym_LBRACK] = ACTIONS(972),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(972),
    [sym_begin_group] = ACTIONS(972),
    [sym_end_group] = ACTIONS(972),
    [sym_alignment_tab] = ACTIONS(972),
    [sym_parameter_char] = ACTIONS(972),
    [sym_superscript] = ACTIONS(972),
    [sym_subscript] = ACTIONS(972),
    [sym_active_char] = ACTIONS(972),
    [sym_text] = ACTIONS(972),
  },
  [600] = {
    [sym_display_math_shift] = ACTIONS(974),
    [sym_inline_math_shift] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(974),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(974),
    [sym_begin_group] = ACTIONS(974),
    [sym_end_group] = ACTIONS(974),
    [sym_alignment_tab] = ACTIONS(974),
    [sym_parameter_char] = ACTIONS(974),
    [sym_superscript] = ACTIONS(974),
    [sym_subscript] = ACTIONS(974),
    [sym_active_char] = ACTIONS(974),
    [sym_text] = ACTIONS(974),
  },
  [601] = {
    [sym_display_math_shift] = ACTIONS(976),
    [sym_inline_math_shift] = ACTIONS(976),
    [anon_sym_LBRACK] = ACTIONS(976),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(976),
    [sym_begin_group] = ACTIONS(976),
    [sym_end_group] = ACTIONS(976),
    [sym_alignment_tab] = ACTIONS(976),
    [sym_parameter_char] = ACTIONS(976),
    [sym_superscript] = ACTIONS(976),
    [sym_subscript] = ACTIONS(976),
    [sym_active_char] = ACTIONS(976),
    [sym_text] = ACTIONS(976),
  },
  [602] = {
    [sym_display_math_shift] = ACTIONS(978),
    [sym_inline_math_shift] = ACTIONS(978),
    [anon_sym_LBRACK] = ACTIONS(978),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(978),
    [sym_begin_group] = ACTIONS(978),
    [sym_end_group] = ACTIONS(978),
    [sym_alignment_tab] = ACTIONS(978),
    [sym_parameter_char] = ACTIONS(978),
    [sym_superscript] = ACTIONS(978),
    [sym_subscript] = ACTIONS(978),
    [sym_active_char] = ACTIONS(978),
    [sym_text] = ACTIONS(978),
  },
  [603] = {
    [sym__common] = STATE(634),
    [sym__text_mode_common] = STATE(634),
    [sym_inline_verbatim] = STATE(634),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(634),
    [sym_parameter] = STATE(634),
    [sym_text_env_at] = STATE(634),
    [sym__display_math_at] = STATE(634),
    [sym_tex_display_math_at] = STATE(634),
    [sym_latex_display_math_at] = STATE(634),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(634),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(634),
    [sym_tex_inline_math_at] = STATE(634),
    [sym_latex_inline_math_at] = STATE(634),
    [sym_inline_math_env_at] = STATE(634),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(634),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(634),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(634),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(634),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(634),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(634),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(634),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(634),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(634),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(634),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(634),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(634),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(634),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(634),
    [sym_opt_text_group_at] = STATE(634),
    [sym_token_at] = STATE(634),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(728),
    [aux_sym_text_mode_at_repeat1] = STATE(634),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(980),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(980),
    [sym_text] = ACTIONS(980),
  },
  [604] = {
    [sym_display_math_shift] = ACTIONS(1253),
    [sym_inline_math_shift] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1253),
    [anon_sym_RBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [605] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(1255),
    [sym_inline_math_shift] = ACTIONS(1258),
    [anon_sym_LBRACK] = ACTIONS(988),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1261),
    [sym_begin_group] = ACTIONS(1264),
    [sym_end_group] = ACTIONS(1267),
    [sym_alignment_tab] = ACTIONS(1269),
    [sym_parameter_char] = ACTIONS(1272),
    [sym_superscript] = ACTIONS(1275),
    [sym_subscript] = ACTIONS(1275),
    [sym_active_char] = ACTIONS(1269),
    [sym_text] = ACTIONS(1269),
  },
  [606] = {
    [sym__whitespace] = ACTIONS(1278),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [607] = {
    [anon_sym_LBRACK] = ACTIONS(1164),
    [anon_sym_RBRACK] = ACTIONS(1164),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1164),
    [sym_begin_group] = ACTIONS(1164),
    [sym_alignment_tab] = ACTIONS(1164),
    [sym_parameter_char] = ACTIONS(1164),
    [sym_superscript] = ACTIONS(1164),
    [sym_subscript] = ACTIONS(1164),
    [sym_active_char] = ACTIONS(1164),
    [sym_text] = ACTIONS(1164),
  },
  [608] = {
    [sym__common] = STATE(698),
    [sym__math_mode_common] = STATE(698),
    [sym__math_mode_at] = STATE(698),
    [sym_parameter] = STATE(698),
    [sym_math_env_at] = STATE(698),
    [sym_tag_at] = STATE(698),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(698),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(698),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(698),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(698),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(698),
    [sym_opt_math_group_at] = STATE(698),
    [sym_token_at] = STATE(698),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(698),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(1280),
    [sym_alignment_tab] = ACTIONS(1176),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(1176),
    [sym_subscript] = ACTIONS(1176),
    [sym_active_char] = ACTIONS(1176),
    [sym_text] = ACTIONS(1176),
  },
  [609] = {
    [sym_display_math_shift] = ACTIONS(1282),
    [sym_inline_math_shift] = ACTIONS(1282),
    [anon_sym_LBRACK] = ACTIONS(1282),
    [anon_sym_RBRACK] = ACTIONS(1282),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1282),
    [sym_begin_group] = ACTIONS(1282),
    [sym_alignment_tab] = ACTIONS(1282),
    [sym_parameter_char] = ACTIONS(1282),
    [sym_superscript] = ACTIONS(1282),
    [sym_subscript] = ACTIONS(1282),
    [sym_active_char] = ACTIONS(1282),
    [sym_text] = ACTIONS(1282),
  },
  [610] = {
    [sym__common] = STATE(701),
    [sym__text_mode_common] = STATE(701),
    [sym_inline_verbatim] = STATE(701),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(701),
    [sym_text_mode_at] = STATE(732),
    [sym_parameter] = STATE(701),
    [sym_text_env_at] = STATE(701),
    [sym__display_math_at] = STATE(701),
    [sym_tex_display_math_at] = STATE(701),
    [sym_latex_display_math_at] = STATE(701),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(701),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(701),
    [sym_tex_inline_math_at] = STATE(701),
    [sym_latex_inline_math_at] = STATE(701),
    [sym_inline_math_env_at] = STATE(701),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(701),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(701),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(701),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(701),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(701),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(701),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(701),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(701),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(701),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(701),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(701),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(701),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(701),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(701),
    [sym_opt_text_group_at] = STATE(701),
    [sym_token_at] = STATE(701),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(701),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1284),
    [sym_alignment_tab] = ACTIONS(1182),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1182),
    [sym_text] = ACTIONS(1182),
  },
  [611] = {
    [anon_sym_LBRACK] = ACTIONS(1184),
    [anon_sym_RBRACK] = ACTIONS(1184),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1184),
    [sym_begin_group] = ACTIONS(1184),
    [sym_alignment_tab] = ACTIONS(1184),
    [sym_parameter_char] = ACTIONS(1184),
    [sym_superscript] = ACTIONS(1184),
    [sym_subscript] = ACTIONS(1184),
    [sym_active_char] = ACTIONS(1184),
    [sym_text] = ACTIONS(1184),
  },
  [612] = {
    [anon_sym_LBRACK] = ACTIONS(1186),
    [anon_sym_RBRACK] = ACTIONS(1186),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1186),
    [sym_begin_group] = ACTIONS(1186),
    [sym_alignment_tab] = ACTIONS(1186),
    [sym_parameter_char] = ACTIONS(1186),
    [sym_superscript] = ACTIONS(1186),
    [sym_subscript] = ACTIONS(1186),
    [sym_active_char] = ACTIONS(1186),
    [sym_text] = ACTIONS(1186),
  },
  [613] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(733),
    [sym_end_token] = STATE(304),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [614] = {
    [sym__common] = STATE(735),
    [sym__text_mode_common] = STATE(735),
    [sym_inline_verbatim] = STATE(735),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(735),
    [sym_parameter] = STATE(735),
    [sym_text_env_at] = STATE(735),
    [sym__display_math_at] = STATE(735),
    [sym_tex_display_math_at] = STATE(735),
    [sym_latex_display_math_at] = STATE(735),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(735),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(735),
    [sym_tex_inline_math_at] = STATE(735),
    [sym_latex_inline_math_at] = STATE(735),
    [sym_inline_math_env_at] = STATE(735),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(735),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(735),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(735),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(735),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(735),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(735),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(735),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(735),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(735),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(735),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(735),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(735),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(735),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(735),
    [sym_opt_text_group_at] = STATE(735),
    [sym_token_at] = STATE(735),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(735),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1286),
    [sym_alignment_tab] = ACTIONS(1288),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1288),
    [sym_text] = ACTIONS(1288),
  },
  [615] = {
    [anon_sym_LBRACK] = ACTIONS(958),
    [anon_sym_RBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [616] = {
    [anon_sym_LBRACK] = ACTIONS(1192),
    [anon_sym_RBRACK] = ACTIONS(1192),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1192),
    [sym_begin_group] = ACTIONS(1192),
    [sym_alignment_tab] = ACTIONS(1192),
    [sym_parameter_char] = ACTIONS(1192),
    [sym_superscript] = ACTIONS(1192),
    [sym_subscript] = ACTIONS(1192),
    [sym_active_char] = ACTIONS(1192),
    [sym_text] = ACTIONS(1192),
  },
  [617] = {
    [sym__common] = STATE(706),
    [sym__math_mode_common] = STATE(706),
    [sym__math_mode_at] = STATE(706),
    [sym_parameter] = STATE(706),
    [sym_math_env_at] = STATE(706),
    [sym_tag_at] = STATE(706),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(706),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(706),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(706),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(706),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(706),
    [sym_opt_math_group_at] = STATE(706),
    [sym_token_at] = STATE(706),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(736),
    [aux_sym_math_mode_at_repeat1] = STATE(706),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_active_char] = ACTIONS(1194),
    [sym_text] = ACTIONS(1194),
  },
  [618] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(1198),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1293),
    [sym_alignment_tab] = ACTIONS(1296),
    [sym_parameter_char] = ACTIONS(1299),
    [sym_superscript] = ACTIONS(1296),
    [sym_subscript] = ACTIONS(1296),
    [sym_active_char] = ACTIONS(1296),
    [sym_text] = ACTIONS(1296),
  },
  [619] = {
    [sym_display_math_shift] = ACTIONS(1302),
    [sym_inline_math_shift] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1302),
    [anon_sym_RBRACK] = ACTIONS(1302),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1302),
    [sym_begin_group] = ACTIONS(1302),
    [sym_alignment_tab] = ACTIONS(1302),
    [sym_parameter_char] = ACTIONS(1302),
    [sym_superscript] = ACTIONS(1302),
    [sym_subscript] = ACTIONS(1302),
    [sym_active_char] = ACTIONS(1302),
    [sym_text] = ACTIONS(1302),
  },
  [620] = {
    [sym_display_math_shift] = ACTIONS(1304),
    [sym_inline_math_shift] = ACTIONS(1304),
    [anon_sym_LBRACK] = ACTIONS(1304),
    [anon_sym_RBRACK] = ACTIONS(1304),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1304),
    [sym_begin_group] = ACTIONS(1304),
    [sym_alignment_tab] = ACTIONS(1304),
    [sym_parameter_char] = ACTIONS(1304),
    [sym_superscript] = ACTIONS(1304),
    [sym_subscript] = ACTIONS(1304),
    [sym_active_char] = ACTIONS(1304),
    [sym_text] = ACTIONS(1304),
  },
  [621] = {
    [sym_display_math_shift] = ACTIONS(1306),
    [sym_inline_math_shift] = ACTIONS(1306),
    [anon_sym_LBRACK] = ACTIONS(1306),
    [anon_sym_RBRACK] = ACTIONS(1306),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1306),
    [sym_begin_group] = ACTIONS(1306),
    [sym_alignment_tab] = ACTIONS(1306),
    [sym_parameter_char] = ACTIONS(1306),
    [sym_superscript] = ACTIONS(1306),
    [sym_subscript] = ACTIONS(1306),
    [sym_active_char] = ACTIONS(1306),
    [sym_text] = ACTIONS(1306),
  },
  [622] = {
    [sym_display_math_shift] = ACTIONS(1308),
    [sym_inline_math_shift] = ACTIONS(1308),
    [anon_sym_LBRACK] = ACTIONS(1308),
    [anon_sym_RBRACK] = ACTIONS(1308),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1308),
    [sym_begin_group] = ACTIONS(1308),
    [sym_alignment_tab] = ACTIONS(1308),
    [sym_parameter_char] = ACTIONS(1308),
    [sym_superscript] = ACTIONS(1308),
    [sym_subscript] = ACTIONS(1308),
    [sym_active_char] = ACTIONS(1308),
    [sym_text] = ACTIONS(1308),
  },
  [623] = {
    [sym__common] = STATE(738),
    [sym__text_mode_common] = STATE(738),
    [sym_inline_verbatim] = STATE(738),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(738),
    [sym_parameter] = STATE(738),
    [sym_text_env_at] = STATE(738),
    [sym__display_math_at] = STATE(738),
    [sym_tex_display_math_at] = STATE(738),
    [sym_latex_display_math_at] = STATE(738),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(738),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(738),
    [sym_tex_inline_math_at] = STATE(738),
    [sym_latex_inline_math_at] = STATE(738),
    [sym_inline_math_env_at] = STATE(738),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(738),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(738),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(738),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(738),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(738),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(738),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(738),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(738),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(738),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(738),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(738),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(738),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(738),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(738),
    [sym_opt_text_group_at] = STATE(738),
    [sym_token_at] = STATE(738),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(738),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1310),
    [sym_alignment_tab] = ACTIONS(1312),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1312),
    [sym_text] = ACTIONS(1312),
  },
  [624] = {
    [anon_sym_LBRACK] = ACTIONS(1314),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1314),
    [sym_begin_group] = ACTIONS(1314),
    [sym_alignment_tab] = ACTIONS(1314),
    [sym_parameter_char] = ACTIONS(1314),
    [sym_superscript] = ACTIONS(1314),
    [sym_subscript] = ACTIONS(1314),
    [sym_active_char] = ACTIONS(1314),
    [sym_text] = ACTIONS(1314),
  },
  [625] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1316),
  },
  [626] = {
    [sym_text_group_at] = STATE(741),
    [sym__whitespace] = ACTIONS(1318),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(954),
    [sym__end_of_line] = ACTIONS(1316),
  },
  [627] = {
    [sym_text_group_at] = STATE(742),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [628] = {
    [sym_display_math_shift] = ACTIONS(1320),
    [sym_inline_math_shift] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(1320),
    [anon_sym_RBRACK] = ACTIONS(1320),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1320),
    [sym_begin_group] = ACTIONS(1320),
    [sym_alignment_tab] = ACTIONS(1320),
    [sym_parameter_char] = ACTIONS(1320),
    [sym_superscript] = ACTIONS(1320),
    [sym_subscript] = ACTIONS(1320),
    [sym_active_char] = ACTIONS(1320),
    [sym_text] = ACTIONS(1320),
  },
  [629] = {
    [sym__whitespace] = ACTIONS(978),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(978),
    [sym__end_of_line] = ACTIONS(978),
  },
  [630] = {
    [sym__common] = STATE(634),
    [sym__text_mode_common] = STATE(634),
    [sym_inline_verbatim] = STATE(634),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(634),
    [sym_parameter] = STATE(634),
    [sym_text_env_at] = STATE(634),
    [sym__display_math_at] = STATE(634),
    [sym_tex_display_math_at] = STATE(634),
    [sym_latex_display_math_at] = STATE(634),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(634),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(634),
    [sym_tex_inline_math_at] = STATE(634),
    [sym_latex_inline_math_at] = STATE(634),
    [sym_inline_math_env_at] = STATE(634),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(634),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(634),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(634),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(634),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(634),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(634),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(634),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(634),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(634),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(634),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(634),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(634),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(634),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(634),
    [sym_opt_text_group_at] = STATE(634),
    [sym_token_at] = STATE(634),
    [sym_begin_opt] = STATE(173),
    [sym_end_opt] = STATE(743),
    [aux_sym_text_mode_at_repeat1] = STATE(634),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(137),
    [sym_inline_math_shift] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(980),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(980),
    [sym_text] = ACTIONS(980),
  },
  [631] = {
    [sym_text_group_at] = STATE(744),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(143),
  },
  [632] = {
    [sym_display_math_shift] = ACTIONS(1322),
    [sym_inline_math_shift] = ACTIONS(1322),
    [anon_sym_LBRACK] = ACTIONS(1322),
    [anon_sym_RBRACK] = ACTIONS(1322),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1322),
    [sym_begin_group] = ACTIONS(1322),
    [sym_alignment_tab] = ACTIONS(1322),
    [sym_parameter_char] = ACTIONS(1322),
    [sym_superscript] = ACTIONS(1322),
    [sym_subscript] = ACTIONS(1322),
    [sym_active_char] = ACTIONS(1322),
    [sym_text] = ACTIONS(1322),
  },
  [633] = {
    [sym_display_math_shift] = ACTIONS(1324),
    [sym_inline_math_shift] = ACTIONS(1324),
    [anon_sym_LBRACK] = ACTIONS(1324),
    [anon_sym_RBRACK] = ACTIONS(1324),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1324),
    [sym_begin_group] = ACTIONS(1324),
    [sym_alignment_tab] = ACTIONS(1324),
    [sym_parameter_char] = ACTIONS(1324),
    [sym_superscript] = ACTIONS(1324),
    [sym_subscript] = ACTIONS(1324),
    [sym_active_char] = ACTIONS(1324),
    [sym_text] = ACTIONS(1324),
  },
  [634] = {
    [sym__common] = STATE(634),
    [sym__text_mode_common] = STATE(634),
    [sym_inline_verbatim] = STATE(634),
    [sym_verb_token] = STATE(9),
    [sym__text_mode_at] = STATE(634),
    [sym_parameter] = STATE(634),
    [sym_text_env_at] = STATE(634),
    [sym__display_math_at] = STATE(634),
    [sym_tex_display_math_at] = STATE(634),
    [sym_latex_display_math_at] = STATE(634),
    [sym_begin_display_math] = STATE(158),
    [sym_begin_inline_math] = STATE(159),
    [sym_display_math_env_at] = STATE(634),
    [sym_display_math_begin_at] = STATE(160),
    [sym__inline_math_at] = STATE(634),
    [sym_tex_inline_math_at] = STATE(634),
    [sym_latex_inline_math_at] = STATE(634),
    [sym_inline_math_env_at] = STATE(634),
    [sym_inline_math_begin] = STATE(161),
    [sym_verbatim_env] = STATE(634),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(634),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(634),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(634),
    [sym_usepackage_token] = STATE(19),
    [sym_include_at] = STATE(634),
    [sym_include_token] = STATE(164),
    [sym_section_at] = STATE(634),
    [sym_section_token] = STATE(165),
    [sym_storage] = STATE(634),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(634),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(634),
    [sym_emph_token] = STATE(166),
    [sym_footnote_at] = STATE(634),
    [sym_footnote_token] = STATE(167),
    [sym_textbf_at] = STATE(634),
    [sym_textbf_token] = STATE(168),
    [sym_textit_at] = STATE(634),
    [sym_textit_token] = STATE(169),
    [sym_texttt_at] = STATE(634),
    [sym_texttt_token] = STATE(170),
    [sym_text_group_at] = STATE(634),
    [sym_opt_text_group_at] = STATE(634),
    [sym_token_at] = STATE(634),
    [sym_begin_opt] = STATE(173),
    [aux_sym_text_mode_at_repeat1] = STATE(634),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(982),
    [sym_inline_math_shift] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(988),
    [anon_sym_RBRACK] = ACTIONS(1267),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(994),
    [sym_alignment_tab] = ACTIONS(1326),
    [sym_parameter_char] = ACTIONS(1000),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1326),
    [sym_text] = ACTIONS(1326),
  },
  [635] = {
    [anon_sym_LBRACK] = ACTIONS(667),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_end_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_text] = ACTIONS(667),
  },
  [636] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [637] = {
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_end_group] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [638] = {
    [anon_sym_LBRACK] = ACTIONS(1043),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1043),
    [sym_begin_group] = ACTIONS(1043),
    [sym_end_group] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(1043),
    [sym_parameter_char] = ACTIONS(1043),
    [sym_superscript] = ACTIONS(1043),
    [sym_subscript] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(1043),
    [sym_text] = ACTIONS(1043),
  },
  [639] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1329),
  },
  [640] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(1331),
  },
  [641] = {
    [anon_sym_LBRACK] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_end_group] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [642] = {
    [anon_sym_LBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_end_group] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [643] = {
    [anon_sym_LBRACK] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [644] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(84),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(85),
    [sym_begin_inline_math] = STATE(86),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(87),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(88),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(90),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(92),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(93),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(94),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(96),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(97),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(98),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(99),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(100),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(101),
    [sym_makeatletter] = STATE(102),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(103),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_inline_math_shift] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(1333),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [645] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1335),
  },
  [646] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_end_group] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [647] = {
    [sym_implicit_math_shift] = ACTIONS(1337),
    [sym_display_math_shift] = ACTIONS(1337),
    [anon_sym_LBRACK] = ACTIONS(1337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1337),
    [sym_begin_group] = ACTIONS(1337),
    [sym_alignment_tab] = ACTIONS(1337),
    [sym_parameter_char] = ACTIONS(1337),
    [sym_superscript] = ACTIONS(1337),
    [sym_subscript] = ACTIONS(1337),
    [sym_active_char] = ACTIONS(1337),
    [sym_text] = ACTIONS(1337),
  },
  [648] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1339),
  },
  [649] = {
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_RBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [650] = {
    [sym_implicit_math_shift] = ACTIONS(717),
    [sym_display_math_shift] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [651] = {
    [sym_implicit_math_shift] = ACTIONS(1152),
    [sym_display_math_shift] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [652] = {
    [sym_implicit_math_shift] = ACTIONS(1337),
    [sym_inline_math_shift] = ACTIONS(1337),
    [anon_sym_LBRACK] = ACTIONS(1337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1337),
    [sym_begin_group] = ACTIONS(1337),
    [sym_alignment_tab] = ACTIONS(1337),
    [sym_parameter_char] = ACTIONS(1337),
    [sym_superscript] = ACTIONS(1337),
    [sym_subscript] = ACTIONS(1337),
    [sym_active_char] = ACTIONS(1337),
    [sym_text] = ACTIONS(1337),
  },
  [653] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1341),
  },
  [654] = {
    [sym_implicit_math_shift] = ACTIONS(717),
    [sym_inline_math_shift] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [655] = {
    [sym_implicit_math_shift] = ACTIONS(1152),
    [sym_inline_math_shift] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [656] = {
    [anon_sym_LBRACK] = ACTIONS(1343),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1343),
  },
  [657] = {
    [sym_display_math_shift] = ACTIONS(1094),
    [sym_inline_math_shift] = ACTIONS(1094),
    [anon_sym_LBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1094),
    [sym_begin_group] = ACTIONS(1094),
    [sym_end_group] = ACTIONS(1094),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(1094),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1094),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [658] = {
    [sym_display_math_shift] = ACTIONS(1096),
    [sym_inline_math_shift] = ACTIONS(1096),
    [sym__whitespace] = ACTIONS(1345),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1096),
    [sym_begin_group] = ACTIONS(1096),
    [sym_end_group] = ACTIONS(1096),
    [sym_alignment_tab] = ACTIONS(1096),
    [sym_parameter_char] = ACTIONS(1096),
    [sym_superscript] = ACTIONS(1096),
    [sym_subscript] = ACTIONS(1096),
    [sym_active_char] = ACTIONS(1096),
    [sym_text] = ACTIONS(1100),
  },
  [659] = {
    [sym_display_math_shift] = ACTIONS(1108),
    [sym_inline_math_shift] = ACTIONS(1108),
    [sym__whitespace] = ACTIONS(1347),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1108),
    [sym_begin_group] = ACTIONS(1108),
    [sym_end_group] = ACTIONS(1108),
    [sym_alignment_tab] = ACTIONS(1108),
    [sym_parameter_char] = ACTIONS(1108),
    [sym_superscript] = ACTIONS(1108),
    [sym_subscript] = ACTIONS(1108),
    [sym_active_char] = ACTIONS(1108),
    [sym_text] = ACTIONS(1112),
  },
  [660] = {
    [sym_display_math_env_name] = ACTIONS(1349),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [661] = {
    [sym_display_math_shift] = ACTIONS(1116),
    [sym_inline_math_shift] = ACTIONS(1116),
    [anon_sym_LBRACK] = ACTIONS(1116),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1116),
    [sym_begin_group] = ACTIONS(1116),
    [sym_end_group] = ACTIONS(1116),
    [sym_alignment_tab] = ACTIONS(1116),
    [sym_parameter_char] = ACTIONS(1116),
    [sym_superscript] = ACTIONS(1116),
    [sym_subscript] = ACTIONS(1116),
    [sym_active_char] = ACTIONS(1116),
    [sym_text] = ACTIONS(1116),
  },
  [662] = {
    [sym_inline_math_env_name] = ACTIONS(1351),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [663] = {
    [sym_display_math_shift] = ACTIONS(1120),
    [sym_inline_math_shift] = ACTIONS(1120),
    [anon_sym_LBRACK] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_end_group] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_active_char] = ACTIONS(1120),
    [sym_text] = ACTIONS(1120),
  },
  [664] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1353),
  },
  [665] = {
    [sym_display_math_shift] = ACTIONS(1132),
    [sym_inline_math_shift] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_end_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [666] = {
    [sym_display_math_shift] = ACTIONS(1146),
    [sym_inline_math_shift] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1146),
    [sym_begin_group] = ACTIONS(1146),
    [sym_end_group] = ACTIONS(1146),
    [sym_alignment_tab] = ACTIONS(1146),
    [sym_parameter_char] = ACTIONS(1146),
    [sym_superscript] = ACTIONS(1146),
    [sym_subscript] = ACTIONS(1146),
    [sym_active_char] = ACTIONS(1146),
    [sym_text] = ACTIONS(1146),
  },
  [667] = {
    [sym_display_math_shift] = ACTIONS(1148),
    [sym_inline_math_shift] = ACTIONS(1148),
    [anon_sym_LBRACK] = ACTIONS(1148),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1148),
    [sym_begin_group] = ACTIONS(1148),
    [sym_end_group] = ACTIONS(1148),
    [sym_alignment_tab] = ACTIONS(1148),
    [sym_parameter_char] = ACTIONS(1148),
    [sym_superscript] = ACTIONS(1148),
    [sym_subscript] = ACTIONS(1148),
    [sym_active_char] = ACTIONS(1148),
    [sym_text] = ACTIONS(1148),
  },
  [668] = {
    [sym_display_math_shift] = ACTIONS(1150),
    [sym_inline_math_shift] = ACTIONS(1150),
    [anon_sym_LBRACK] = ACTIONS(1150),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1150),
    [sym_begin_group] = ACTIONS(1150),
    [sym_end_group] = ACTIONS(1150),
    [sym_alignment_tab] = ACTIONS(1150),
    [sym_parameter_char] = ACTIONS(1150),
    [sym_superscript] = ACTIONS(1150),
    [sym_subscript] = ACTIONS(1150),
    [sym_active_char] = ACTIONS(1150),
    [sym_text] = ACTIONS(1150),
  },
  [669] = {
    [sym_display_math_shift] = ACTIONS(1152),
    [sym_inline_math_shift] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_end_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [670] = {
    [sym_display_math_shift] = ACTIONS(1154),
    [sym_inline_math_shift] = ACTIONS(1154),
    [anon_sym_LBRACK] = ACTIONS(1154),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1154),
    [sym_begin_group] = ACTIONS(1154),
    [sym_end_group] = ACTIONS(1154),
    [sym_alignment_tab] = ACTIONS(1154),
    [sym_parameter_char] = ACTIONS(1154),
    [sym_superscript] = ACTIONS(1154),
    [sym_subscript] = ACTIONS(1154),
    [sym_active_char] = ACTIONS(1154),
    [sym_text] = ACTIONS(1154),
  },
  [671] = {
    [sym_display_math_shift] = ACTIONS(1237),
    [sym_inline_math_shift] = ACTIONS(1237),
    [anon_sym_LBRACK] = ACTIONS(1237),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1237),
    [sym_begin_group] = ACTIONS(1237),
    [sym_end_group] = ACTIONS(1237),
    [sym_alignment_tab] = ACTIONS(1237),
    [sym_parameter_char] = ACTIONS(1237),
    [sym_superscript] = ACTIONS(1237),
    [sym_subscript] = ACTIONS(1237),
    [sym_active_char] = ACTIONS(1237),
    [sym_text] = ACTIONS(1237),
  },
  [672] = {
    [sym_display_math_shift] = ACTIONS(1355),
    [sym_inline_math_shift] = ACTIONS(1355),
    [ts_builtin_sym_end] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [anon_sym_RBRACK] = ACTIONS(1355),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1355),
    [sym_begin_group] = ACTIONS(1355),
    [sym_alignment_tab] = ACTIONS(1355),
    [sym_parameter_char] = ACTIONS(1355),
    [sym_superscript] = ACTIONS(1355),
    [sym_subscript] = ACTIONS(1355),
    [sym_active_char] = ACTIONS(1355),
    [sym_text] = ACTIONS(1355),
  },
  [673] = {
    [anon_sym_LBRACK] = ACTIONS(1337),
    [anon_sym_RBRACK] = ACTIONS(1337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1337),
    [sym_begin_group] = ACTIONS(1337),
    [sym_alignment_tab] = ACTIONS(1337),
    [sym_parameter_char] = ACTIONS(1337),
    [sym_superscript] = ACTIONS(1337),
    [sym_subscript] = ACTIONS(1337),
    [sym_active_char] = ACTIONS(1337),
    [sym_text] = ACTIONS(1337),
  },
  [674] = {
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [675] = {
    [anon_sym_LBRACK] = ACTIONS(1152),
    [anon_sym_RBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [676] = {
    [sym_display_math_shift] = ACTIONS(1357),
    [sym_inline_math_shift] = ACTIONS(1357),
    [ts_builtin_sym_end] = ACTIONS(1357),
    [anon_sym_LBRACK] = ACTIONS(1357),
    [anon_sym_RBRACK] = ACTIONS(1357),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1357),
    [sym_begin_group] = ACTIONS(1357),
    [sym_alignment_tab] = ACTIONS(1357),
    [sym_parameter_char] = ACTIONS(1357),
    [sym_superscript] = ACTIONS(1357),
    [sym_subscript] = ACTIONS(1357),
    [sym_active_char] = ACTIONS(1357),
    [sym_text] = ACTIONS(1357),
  },
  [677] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1359),
  },
  [678] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1361),
  },
  [679] = {
    [sym_display_math_shift] = ACTIONS(1130),
    [sym_inline_math_shift] = ACTIONS(1130),
    [ts_builtin_sym_end] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [anon_sym_RBRACK] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1130),
    [sym_begin_group] = ACTIONS(1130),
    [sym_alignment_tab] = ACTIONS(1130),
    [sym_parameter_char] = ACTIONS(1130),
    [sym_superscript] = ACTIONS(1130),
    [sym_subscript] = ACTIONS(1130),
    [sym_active_char] = ACTIONS(1130),
    [sym_text] = ACTIONS(1130),
  },
  [680] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(717),
  },
  [681] = {
    [anon_sym_LBRACK] = ACTIONS(1363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1363),
    [sym_begin_group] = ACTIONS(1363),
    [sym_alignment_tab] = ACTIONS(1363),
    [sym_parameter_char] = ACTIONS(1363),
    [sym_superscript] = ACTIONS(1363),
    [sym_subscript] = ACTIONS(1363),
    [sym_active_char] = ACTIONS(1363),
    [sym_text] = ACTIONS(1363),
  },
  [682] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1365),
  },
  [683] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1367),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1369),
    [sym__end_of_line] = ACTIONS(1369),
  },
  [684] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1371),
  },
  [685] = {
    [sym_implicit_math_shift] = ACTIONS(1239),
    [sym_display_math_shift] = ACTIONS(1239),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [686] = {
    [sym__whitespace] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_end_group] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(910),
  },
  [687] = {
    [anon_sym_LBRACK] = ACTIONS(1164),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1164),
    [sym_begin_group] = ACTIONS(1164),
    [sym_end_group] = ACTIONS(1164),
    [sym_alignment_tab] = ACTIONS(1164),
    [sym_parameter_char] = ACTIONS(1164),
    [sym_superscript] = ACTIONS(1164),
    [sym_subscript] = ACTIONS(1164),
    [sym_active_char] = ACTIONS(1164),
    [sym_text] = ACTIONS(1164),
  },
  [688] = {
    [sym__common] = STATE(698),
    [sym__math_mode_common] = STATE(698),
    [sym__math_mode_at] = STATE(698),
    [sym_parameter] = STATE(698),
    [sym_math_env_at] = STATE(698),
    [sym_tag_at] = STATE(698),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(698),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(698),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(698),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(698),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(698),
    [sym_opt_math_group_at] = STATE(698),
    [sym_token_at] = STATE(698),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(698),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(858),
    [sym_end_group] = ACTIONS(1375),
    [sym_alignment_tab] = ACTIONS(1176),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(1176),
    [sym_subscript] = ACTIONS(1176),
    [sym_active_char] = ACTIONS(1176),
    [sym_text] = ACTIONS(1176),
  },
  [689] = {
    [sym__common] = STATE(701),
    [sym__text_mode_common] = STATE(701),
    [sym_inline_verbatim] = STATE(701),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(701),
    [sym_text_mode_at] = STATE(763),
    [sym_parameter] = STATE(701),
    [sym_text_env_at] = STATE(701),
    [sym__display_math_at] = STATE(701),
    [sym_tex_display_math_at] = STATE(701),
    [sym_latex_display_math_at] = STATE(701),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(701),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(701),
    [sym_tex_inline_math_at] = STATE(701),
    [sym_latex_inline_math_at] = STATE(701),
    [sym_inline_math_env_at] = STATE(701),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(701),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(701),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(701),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(701),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(701),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(701),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(701),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(701),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(701),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(701),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(701),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(701),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(701),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(701),
    [sym_opt_text_group_at] = STATE(701),
    [sym_token_at] = STATE(701),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(701),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1377),
    [sym_alignment_tab] = ACTIONS(1182),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1182),
    [sym_text] = ACTIONS(1182),
  },
  [690] = {
    [anon_sym_LBRACK] = ACTIONS(1184),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1184),
    [sym_begin_group] = ACTIONS(1184),
    [sym_end_group] = ACTIONS(1184),
    [sym_alignment_tab] = ACTIONS(1184),
    [sym_parameter_char] = ACTIONS(1184),
    [sym_superscript] = ACTIONS(1184),
    [sym_subscript] = ACTIONS(1184),
    [sym_active_char] = ACTIONS(1184),
    [sym_text] = ACTIONS(1184),
  },
  [691] = {
    [anon_sym_LBRACK] = ACTIONS(1186),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1186),
    [sym_begin_group] = ACTIONS(1186),
    [sym_end_group] = ACTIONS(1186),
    [sym_alignment_tab] = ACTIONS(1186),
    [sym_parameter_char] = ACTIONS(1186),
    [sym_superscript] = ACTIONS(1186),
    [sym_subscript] = ACTIONS(1186),
    [sym_active_char] = ACTIONS(1186),
    [sym_text] = ACTIONS(1186),
  },
  [692] = {
    [sym__common] = STATE(618),
    [sym__math_mode_common] = STATE(618),
    [sym__math_mode_at] = STATE(618),
    [sym_parameter] = STATE(618),
    [sym_math_env_at] = STATE(618),
    [sym_tag_at] = STATE(618),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(618),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_end] = STATE(764),
    [sym_end_token] = STATE(437),
    [sym_include_at] = STATE(618),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(618),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(618),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(618),
    [sym_opt_math_group_at] = STATE(618),
    [sym_token_at] = STATE(618),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(618),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [693] = {
    [sym__common] = STATE(766),
    [sym__text_mode_common] = STATE(766),
    [sym_inline_verbatim] = STATE(766),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(766),
    [sym_parameter] = STATE(766),
    [sym_text_env_at] = STATE(766),
    [sym__display_math_at] = STATE(766),
    [sym_tex_display_math_at] = STATE(766),
    [sym_latex_display_math_at] = STATE(766),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(766),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(766),
    [sym_tex_inline_math_at] = STATE(766),
    [sym_latex_inline_math_at] = STATE(766),
    [sym_inline_math_env_at] = STATE(766),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(766),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(766),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(766),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(766),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(766),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(766),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(766),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(766),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(766),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(766),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(766),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(766),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(766),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(766),
    [sym_opt_text_group_at] = STATE(766),
    [sym_token_at] = STATE(766),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(766),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1379),
    [sym_alignment_tab] = ACTIONS(1381),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(1381),
    [sym_text] = ACTIONS(1381),
  },
  [694] = {
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_end_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [695] = {
    [anon_sym_LBRACK] = ACTIONS(1192),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1192),
    [sym_begin_group] = ACTIONS(1192),
    [sym_end_group] = ACTIONS(1192),
    [sym_alignment_tab] = ACTIONS(1192),
    [sym_parameter_char] = ACTIONS(1192),
    [sym_superscript] = ACTIONS(1192),
    [sym_subscript] = ACTIONS(1192),
    [sym_active_char] = ACTIONS(1192),
    [sym_text] = ACTIONS(1192),
  },
  [696] = {
    [sym__common] = STATE(706),
    [sym__math_mode_common] = STATE(706),
    [sym__math_mode_at] = STATE(706),
    [sym_parameter] = STATE(706),
    [sym_math_env_at] = STATE(706),
    [sym_tag_at] = STATE(706),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(706),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(706),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(706),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(706),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(706),
    [sym_opt_math_group_at] = STATE(706),
    [sym_token_at] = STATE(706),
    [sym_begin_opt] = STATE(401),
    [sym_end_opt] = STATE(767),
    [aux_sym_math_mode_at_repeat1] = STATE(706),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_active_char] = ACTIONS(1194),
    [sym_text] = ACTIONS(1194),
  },
  [697] = {
    [sym_implicit_math_shift] = ACTIONS(1383),
    [sym_display_math_shift] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(1383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1383),
    [sym_begin_group] = ACTIONS(1383),
    [sym_alignment_tab] = ACTIONS(1383),
    [sym_parameter_char] = ACTIONS(1383),
    [sym_superscript] = ACTIONS(1383),
    [sym_subscript] = ACTIONS(1383),
    [sym_active_char] = ACTIONS(1383),
    [sym_text] = ACTIONS(1383),
  },
  [698] = {
    [sym__common] = STATE(698),
    [sym__math_mode_common] = STATE(698),
    [sym__math_mode_at] = STATE(698),
    [sym_parameter] = STATE(698),
    [sym_math_env_at] = STATE(698),
    [sym_tag_at] = STATE(698),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(698),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(698),
    [sym_include_token] = STATE(551),
    [sym_storage] = STATE(698),
    [sym_storage_token] = STATE(191),
    [sym_catcode] = STATE(698),
    [sym_catcode_token] = STATE(192),
    [sym_math_group_at] = STATE(698),
    [sym_opt_math_group_at] = STATE(698),
    [sym_token_at] = STATE(698),
    [sym_begin_opt] = STATE(552),
    [aux_sym_math_mode_at_repeat1] = STATE(698),
    [aux_sym_parameter_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(1198),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1385),
    [sym_begin_group] = ACTIONS(1388),
    [sym_end_group] = ACTIONS(1196),
    [sym_alignment_tab] = ACTIONS(1391),
    [sym_parameter_char] = ACTIONS(1394),
    [sym_superscript] = ACTIONS(1391),
    [sym_subscript] = ACTIONS(1391),
    [sym_active_char] = ACTIONS(1391),
    [sym_text] = ACTIONS(1391),
  },
  [699] = {
    [sym_implicit_math_shift] = ACTIONS(1397),
    [sym_display_math_shift] = ACTIONS(1397),
    [anon_sym_LBRACK] = ACTIONS(1397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1397),
    [sym_begin_group] = ACTIONS(1397),
    [sym_alignment_tab] = ACTIONS(1397),
    [sym_parameter_char] = ACTIONS(1397),
    [sym_superscript] = ACTIONS(1397),
    [sym_subscript] = ACTIONS(1397),
    [sym_active_char] = ACTIONS(1397),
    [sym_text] = ACTIONS(1397),
  },
  [700] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1399),
  },
  [701] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(499),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [702] = {
    [sym_implicit_math_shift] = ACTIONS(1401),
    [sym_display_math_shift] = ACTIONS(1401),
    [anon_sym_LBRACK] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1401),
    [sym_begin_group] = ACTIONS(1401),
    [sym_alignment_tab] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1401),
    [sym_superscript] = ACTIONS(1401),
    [sym_subscript] = ACTIONS(1401),
    [sym_active_char] = ACTIONS(1401),
    [sym_text] = ACTIONS(1401),
  },
  [703] = {
    [sym_implicit_math_shift] = ACTIONS(922),
    [sym_display_math_shift] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [704] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1403),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [705] = {
    [sym_implicit_math_shift] = ACTIONS(1405),
    [sym_display_math_shift] = ACTIONS(1405),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1405),
    [sym_begin_group] = ACTIONS(1405),
    [sym_alignment_tab] = ACTIONS(1405),
    [sym_parameter_char] = ACTIONS(1405),
    [sym_superscript] = ACTIONS(1405),
    [sym_subscript] = ACTIONS(1405),
    [sym_active_char] = ACTIONS(1405),
    [sym_text] = ACTIONS(1405),
  },
  [706] = {
    [sym__common] = STATE(706),
    [sym__math_mode_common] = STATE(706),
    [sym__math_mode_at] = STATE(706),
    [sym_parameter] = STATE(706),
    [sym_math_env_at] = STATE(706),
    [sym_tag_at] = STATE(706),
    [sym_tag_token] = STATE(398),
    [sym_escaped] = STATE(706),
    [sym_begin] = STATE(399),
    [sym_begin_token] = STATE(41),
    [sym_include_at] = STATE(706),
    [sym_include_token] = STATE(400),
    [sym_storage] = STATE(706),
    [sym_storage_token] = STATE(113),
    [sym_catcode] = STATE(706),
    [sym_catcode_token] = STATE(114),
    [sym_math_group_at] = STATE(706),
    [sym_opt_math_group_at] = STATE(706),
    [sym_token_at] = STATE(706),
    [sym_begin_opt] = STATE(401),
    [aux_sym_math_mode_at_repeat1] = STATE(706),
    [aux_sym_parameter_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(1198),
    [anon_sym_RBRACK] = ACTIONS(1196),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1293),
    [sym_alignment_tab] = ACTIONS(1407),
    [sym_parameter_char] = ACTIONS(1299),
    [sym_superscript] = ACTIONS(1407),
    [sym_subscript] = ACTIONS(1407),
    [sym_active_char] = ACTIONS(1407),
    [sym_text] = ACTIONS(1407),
  },
  [707] = {
    [sym_implicit_math_shift] = ACTIONS(1239),
    [sym_inline_math_shift] = ACTIONS(1239),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [708] = {
    [sym_implicit_math_shift] = ACTIONS(1383),
    [sym_inline_math_shift] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(1383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1383),
    [sym_begin_group] = ACTIONS(1383),
    [sym_alignment_tab] = ACTIONS(1383),
    [sym_parameter_char] = ACTIONS(1383),
    [sym_superscript] = ACTIONS(1383),
    [sym_subscript] = ACTIONS(1383),
    [sym_active_char] = ACTIONS(1383),
    [sym_text] = ACTIONS(1383),
  },
  [709] = {
    [sym_implicit_math_shift] = ACTIONS(1397),
    [sym_inline_math_shift] = ACTIONS(1397),
    [anon_sym_LBRACK] = ACTIONS(1397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1397),
    [sym_begin_group] = ACTIONS(1397),
    [sym_alignment_tab] = ACTIONS(1397),
    [sym_parameter_char] = ACTIONS(1397),
    [sym_superscript] = ACTIONS(1397),
    [sym_subscript] = ACTIONS(1397),
    [sym_active_char] = ACTIONS(1397),
    [sym_text] = ACTIONS(1397),
  },
  [710] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1410),
  },
  [711] = {
    [sym_implicit_math_shift] = ACTIONS(1401),
    [sym_inline_math_shift] = ACTIONS(1401),
    [anon_sym_LBRACK] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1401),
    [sym_begin_group] = ACTIONS(1401),
    [sym_alignment_tab] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1401),
    [sym_superscript] = ACTIONS(1401),
    [sym_subscript] = ACTIONS(1401),
    [sym_active_char] = ACTIONS(1401),
    [sym_text] = ACTIONS(1401),
  },
  [712] = {
    [sym_implicit_math_shift] = ACTIONS(922),
    [sym_inline_math_shift] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [713] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1412),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [714] = {
    [sym_implicit_math_shift] = ACTIONS(1405),
    [sym_inline_math_shift] = ACTIONS(1405),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1405),
    [sym_begin_group] = ACTIONS(1405),
    [sym_alignment_tab] = ACTIONS(1405),
    [sym_parameter_char] = ACTIONS(1405),
    [sym_superscript] = ACTIONS(1405),
    [sym_subscript] = ACTIONS(1405),
    [sym_active_char] = ACTIONS(1405),
    [sym_text] = ACTIONS(1405),
  },
  [715] = {
    [sym_display_math_shift] = ACTIONS(1178),
    [sym_inline_math_shift] = ACTIONS(1178),
    [anon_sym_LBRACK] = ACTIONS(1178),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1178),
    [sym_begin_group] = ACTIONS(1178),
    [sym_end_group] = ACTIONS(1178),
    [sym_alignment_tab] = ACTIONS(1178),
    [sym_parameter_char] = ACTIONS(1178),
    [sym_superscript] = ACTIONS(1178),
    [sym_subscript] = ACTIONS(1178),
    [sym_active_char] = ACTIONS(1178),
    [sym_text] = ACTIONS(1178),
  },
  [716] = {
    [sym_display_math_shift] = ACTIONS(1217),
    [sym_inline_math_shift] = ACTIONS(1217),
    [anon_sym_LBRACK] = ACTIONS(1217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1217),
    [sym_begin_group] = ACTIONS(1217),
    [sym_end_group] = ACTIONS(1217),
    [sym_alignment_tab] = ACTIONS(1217),
    [sym_parameter_char] = ACTIONS(1217),
    [sym_superscript] = ACTIONS(1217),
    [sym_subscript] = ACTIONS(1217),
    [sym_active_char] = ACTIONS(1217),
    [sym_text] = ACTIONS(1217),
  },
  [717] = {
    [sym_display_math_shift] = ACTIONS(1239),
    [sym_inline_math_shift] = ACTIONS(1239),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_end_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [718] = {
    [sym_display_math_shift] = ACTIONS(1253),
    [sym_inline_math_shift] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_end_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [719] = {
    [sym_display_math_shift] = ACTIONS(1282),
    [sym_inline_math_shift] = ACTIONS(1282),
    [anon_sym_LBRACK] = ACTIONS(1282),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1282),
    [sym_begin_group] = ACTIONS(1282),
    [sym_end_group] = ACTIONS(1282),
    [sym_alignment_tab] = ACTIONS(1282),
    [sym_parameter_char] = ACTIONS(1282),
    [sym_superscript] = ACTIONS(1282),
    [sym_subscript] = ACTIONS(1282),
    [sym_active_char] = ACTIONS(1282),
    [sym_text] = ACTIONS(1282),
  },
  [720] = {
    [sym_display_math_shift] = ACTIONS(1302),
    [sym_inline_math_shift] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1302),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1302),
    [sym_begin_group] = ACTIONS(1302),
    [sym_end_group] = ACTIONS(1302),
    [sym_alignment_tab] = ACTIONS(1302),
    [sym_parameter_char] = ACTIONS(1302),
    [sym_superscript] = ACTIONS(1302),
    [sym_subscript] = ACTIONS(1302),
    [sym_active_char] = ACTIONS(1302),
    [sym_text] = ACTIONS(1302),
  },
  [721] = {
    [sym_display_math_shift] = ACTIONS(1304),
    [sym_inline_math_shift] = ACTIONS(1304),
    [anon_sym_LBRACK] = ACTIONS(1304),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1304),
    [sym_begin_group] = ACTIONS(1304),
    [sym_end_group] = ACTIONS(1304),
    [sym_alignment_tab] = ACTIONS(1304),
    [sym_parameter_char] = ACTIONS(1304),
    [sym_superscript] = ACTIONS(1304),
    [sym_subscript] = ACTIONS(1304),
    [sym_active_char] = ACTIONS(1304),
    [sym_text] = ACTIONS(1304),
  },
  [722] = {
    [sym_display_math_shift] = ACTIONS(1306),
    [sym_inline_math_shift] = ACTIONS(1306),
    [anon_sym_LBRACK] = ACTIONS(1306),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1306),
    [sym_begin_group] = ACTIONS(1306),
    [sym_end_group] = ACTIONS(1306),
    [sym_alignment_tab] = ACTIONS(1306),
    [sym_parameter_char] = ACTIONS(1306),
    [sym_superscript] = ACTIONS(1306),
    [sym_subscript] = ACTIONS(1306),
    [sym_active_char] = ACTIONS(1306),
    [sym_text] = ACTIONS(1306),
  },
  [723] = {
    [sym_display_math_shift] = ACTIONS(1308),
    [sym_inline_math_shift] = ACTIONS(1308),
    [anon_sym_LBRACK] = ACTIONS(1308),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1308),
    [sym_begin_group] = ACTIONS(1308),
    [sym_end_group] = ACTIONS(1308),
    [sym_alignment_tab] = ACTIONS(1308),
    [sym_parameter_char] = ACTIONS(1308),
    [sym_superscript] = ACTIONS(1308),
    [sym_subscript] = ACTIONS(1308),
    [sym_active_char] = ACTIONS(1308),
    [sym_text] = ACTIONS(1308),
  },
  [724] = {
    [sym_text_group_at] = STATE(772),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [725] = {
    [sym_display_math_shift] = ACTIONS(1320),
    [sym_inline_math_shift] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(1320),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1320),
    [sym_begin_group] = ACTIONS(1320),
    [sym_end_group] = ACTIONS(1320),
    [sym_alignment_tab] = ACTIONS(1320),
    [sym_parameter_char] = ACTIONS(1320),
    [sym_superscript] = ACTIONS(1320),
    [sym_subscript] = ACTIONS(1320),
    [sym_active_char] = ACTIONS(1320),
    [sym_text] = ACTIONS(1320),
  },
  [726] = {
    [sym_text_group_at] = STATE(773),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(473),
  },
  [727] = {
    [sym_display_math_shift] = ACTIONS(1322),
    [sym_inline_math_shift] = ACTIONS(1322),
    [anon_sym_LBRACK] = ACTIONS(1322),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1322),
    [sym_begin_group] = ACTIONS(1322),
    [sym_end_group] = ACTIONS(1322),
    [sym_alignment_tab] = ACTIONS(1322),
    [sym_parameter_char] = ACTIONS(1322),
    [sym_superscript] = ACTIONS(1322),
    [sym_subscript] = ACTIONS(1322),
    [sym_active_char] = ACTIONS(1322),
    [sym_text] = ACTIONS(1322),
  },
  [728] = {
    [sym_display_math_shift] = ACTIONS(1324),
    [sym_inline_math_shift] = ACTIONS(1324),
    [anon_sym_LBRACK] = ACTIONS(1324),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1324),
    [sym_begin_group] = ACTIONS(1324),
    [sym_end_group] = ACTIONS(1324),
    [sym_alignment_tab] = ACTIONS(1324),
    [sym_parameter_char] = ACTIONS(1324),
    [sym_superscript] = ACTIONS(1324),
    [sym_subscript] = ACTIONS(1324),
    [sym_active_char] = ACTIONS(1324),
    [sym_text] = ACTIONS(1324),
  },
  [729] = {
    [anon_sym_LBRACK] = ACTIONS(1239),
    [anon_sym_RBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [730] = {
    [anon_sym_LBRACK] = ACTIONS(1383),
    [anon_sym_RBRACK] = ACTIONS(1383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1383),
    [sym_begin_group] = ACTIONS(1383),
    [sym_alignment_tab] = ACTIONS(1383),
    [sym_parameter_char] = ACTIONS(1383),
    [sym_superscript] = ACTIONS(1383),
    [sym_subscript] = ACTIONS(1383),
    [sym_active_char] = ACTIONS(1383),
    [sym_text] = ACTIONS(1383),
  },
  [731] = {
    [anon_sym_LBRACK] = ACTIONS(1397),
    [anon_sym_RBRACK] = ACTIONS(1397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1397),
    [sym_begin_group] = ACTIONS(1397),
    [sym_alignment_tab] = ACTIONS(1397),
    [sym_parameter_char] = ACTIONS(1397),
    [sym_superscript] = ACTIONS(1397),
    [sym_subscript] = ACTIONS(1397),
    [sym_active_char] = ACTIONS(1397),
    [sym_text] = ACTIONS(1397),
  },
  [732] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1414),
  },
  [733] = {
    [anon_sym_LBRACK] = ACTIONS(1401),
    [anon_sym_RBRACK] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1401),
    [sym_begin_group] = ACTIONS(1401),
    [sym_alignment_tab] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1401),
    [sym_superscript] = ACTIONS(1401),
    [sym_subscript] = ACTIONS(1401),
    [sym_active_char] = ACTIONS(1401),
    [sym_text] = ACTIONS(1401),
  },
  [734] = {
    [anon_sym_LBRACK] = ACTIONS(922),
    [anon_sym_RBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [735] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [736] = {
    [anon_sym_LBRACK] = ACTIONS(1405),
    [anon_sym_RBRACK] = ACTIONS(1405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1405),
    [sym_begin_group] = ACTIONS(1405),
    [sym_alignment_tab] = ACTIONS(1405),
    [sym_parameter_char] = ACTIONS(1405),
    [sym_superscript] = ACTIONS(1405),
    [sym_subscript] = ACTIONS(1405),
    [sym_active_char] = ACTIONS(1405),
    [sym_text] = ACTIONS(1405),
  },
  [737] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(922),
  },
  [738] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1418),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [739] = {
    [anon_sym_LBRACK] = ACTIONS(1420),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1420),
    [sym_begin_group] = ACTIONS(1420),
    [sym_alignment_tab] = ACTIONS(1420),
    [sym_parameter_char] = ACTIONS(1420),
    [sym_superscript] = ACTIONS(1420),
    [sym_subscript] = ACTIONS(1420),
    [sym_active_char] = ACTIONS(1420),
    [sym_text] = ACTIONS(1420),
  },
  [740] = {
    [sym_text_group_at] = STATE(778),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(954),
    [sym__end_of_line] = ACTIONS(1422),
  },
  [741] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1422),
  },
  [742] = {
    [sym_display_math_shift] = ACTIONS(1424),
    [sym_inline_math_shift] = ACTIONS(1424),
    [anon_sym_LBRACK] = ACTIONS(1424),
    [anon_sym_RBRACK] = ACTIONS(1424),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1424),
    [sym_begin_group] = ACTIONS(1424),
    [sym_alignment_tab] = ACTIONS(1424),
    [sym_parameter_char] = ACTIONS(1424),
    [sym_superscript] = ACTIONS(1424),
    [sym_subscript] = ACTIONS(1424),
    [sym_active_char] = ACTIONS(1424),
    [sym_text] = ACTIONS(1424),
  },
  [743] = {
    [sym__whitespace] = ACTIONS(1324),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1324),
    [sym__end_of_line] = ACTIONS(1324),
  },
  [744] = {
    [sym_display_math_shift] = ACTIONS(1426),
    [sym_inline_math_shift] = ACTIONS(1426),
    [anon_sym_LBRACK] = ACTIONS(1426),
    [anon_sym_RBRACK] = ACTIONS(1426),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1426),
    [sym_begin_group] = ACTIONS(1426),
    [sym_alignment_tab] = ACTIONS(1426),
    [sym_parameter_char] = ACTIONS(1426),
    [sym_superscript] = ACTIONS(1426),
    [sym_subscript] = ACTIONS(1426),
    [sym_active_char] = ACTIONS(1426),
    [sym_text] = ACTIONS(1426),
  },
  [745] = {
    [anon_sym_LBRACK] = ACTIONS(1337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1337),
    [sym_begin_group] = ACTIONS(1337),
    [sym_end_group] = ACTIONS(1337),
    [sym_alignment_tab] = ACTIONS(1337),
    [sym_parameter_char] = ACTIONS(1337),
    [sym_superscript] = ACTIONS(1337),
    [sym_subscript] = ACTIONS(1337),
    [sym_active_char] = ACTIONS(1337),
    [sym_text] = ACTIONS(1337),
  },
  [746] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1428),
  },
  [747] = {
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [748] = {
    [anon_sym_LBRACK] = ACTIONS(1152),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1152),
    [sym_begin_group] = ACTIONS(1152),
    [sym_end_group] = ACTIONS(1152),
    [sym_alignment_tab] = ACTIONS(1152),
    [sym_parameter_char] = ACTIONS(1152),
    [sym_superscript] = ACTIONS(1152),
    [sym_subscript] = ACTIONS(1152),
    [sym_active_char] = ACTIONS(1152),
    [sym_text] = ACTIONS(1152),
  },
  [749] = {
    [sym_implicit_math_shift] = ACTIONS(1132),
    [sym_display_math_shift] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [750] = {
    [sym_implicit_math_shift] = ACTIONS(1132),
    [sym_inline_math_shift] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [751] = {
    [sym_display_math_shift] = ACTIONS(1355),
    [sym_inline_math_shift] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1355),
    [sym_begin_group] = ACTIONS(1355),
    [sym_end_group] = ACTIONS(1355),
    [sym_alignment_tab] = ACTIONS(1355),
    [sym_parameter_char] = ACTIONS(1355),
    [sym_superscript] = ACTIONS(1355),
    [sym_subscript] = ACTIONS(1355),
    [sym_active_char] = ACTIONS(1355),
    [sym_text] = ACTIONS(1355),
  },
  [752] = {
    [sym_display_math_shift] = ACTIONS(1357),
    [sym_inline_math_shift] = ACTIONS(1357),
    [anon_sym_LBRACK] = ACTIONS(1357),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1357),
    [sym_begin_group] = ACTIONS(1357),
    [sym_end_group] = ACTIONS(1357),
    [sym_alignment_tab] = ACTIONS(1357),
    [sym_parameter_char] = ACTIONS(1357),
    [sym_superscript] = ACTIONS(1357),
    [sym_subscript] = ACTIONS(1357),
    [sym_active_char] = ACTIONS(1357),
    [sym_text] = ACTIONS(1357),
  },
  [753] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1430),
  },
  [754] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1432),
  },
  [755] = {
    [sym_display_math_shift] = ACTIONS(1130),
    [sym_inline_math_shift] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1130),
    [sym_begin_group] = ACTIONS(1130),
    [sym_end_group] = ACTIONS(1130),
    [sym_alignment_tab] = ACTIONS(1130),
    [sym_parameter_char] = ACTIONS(1130),
    [sym_superscript] = ACTIONS(1130),
    [sym_subscript] = ACTIONS(1130),
    [sym_active_char] = ACTIONS(1130),
    [sym_text] = ACTIONS(1130),
  },
  [756] = {
    [sym_display_math_shift] = ACTIONS(1126),
    [sym_inline_math_shift] = ACTIONS(1126),
    [ts_builtin_sym_end] = ACTIONS(1126),
    [anon_sym_LBRACK] = ACTIONS(1126),
    [anon_sym_RBRACK] = ACTIONS(1126),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1126),
    [sym_begin_group] = ACTIONS(1126),
    [sym_alignment_tab] = ACTIONS(1126),
    [sym_parameter_char] = ACTIONS(1126),
    [sym_superscript] = ACTIONS(1126),
    [sym_subscript] = ACTIONS(1126),
    [sym_active_char] = ACTIONS(1126),
    [sym_text] = ACTIONS(1126),
  },
  [757] = {
    [sym_display_math_shift] = ACTIONS(1128),
    [sym_inline_math_shift] = ACTIONS(1128),
    [ts_builtin_sym_end] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1128),
    [sym_begin_group] = ACTIONS(1128),
    [sym_alignment_tab] = ACTIONS(1128),
    [sym_parameter_char] = ACTIONS(1128),
    [sym_superscript] = ACTIONS(1128),
    [sym_subscript] = ACTIONS(1128),
    [sym_active_char] = ACTIONS(1128),
    [sym_text] = ACTIONS(1128),
  },
  [758] = {
    [anon_sym_LBRACK] = ACTIONS(1434),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1434),
    [sym_begin_group] = ACTIONS(1434),
    [sym_alignment_tab] = ACTIONS(1434),
    [sym_parameter_char] = ACTIONS(1434),
    [sym_superscript] = ACTIONS(1434),
    [sym_subscript] = ACTIONS(1434),
    [sym_active_char] = ACTIONS(1434),
    [sym_text] = ACTIONS(1434),
  },
  [759] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1436),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1438),
    [sym__end_of_line] = ACTIONS(1438),
  },
  [760] = {
    [anon_sym_LBRACK] = ACTIONS(1239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_end_group] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1239),
  },
  [761] = {
    [anon_sym_LBRACK] = ACTIONS(1383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1383),
    [sym_begin_group] = ACTIONS(1383),
    [sym_end_group] = ACTIONS(1383),
    [sym_alignment_tab] = ACTIONS(1383),
    [sym_parameter_char] = ACTIONS(1383),
    [sym_superscript] = ACTIONS(1383),
    [sym_subscript] = ACTIONS(1383),
    [sym_active_char] = ACTIONS(1383),
    [sym_text] = ACTIONS(1383),
  },
  [762] = {
    [anon_sym_LBRACK] = ACTIONS(1397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1397),
    [sym_begin_group] = ACTIONS(1397),
    [sym_end_group] = ACTIONS(1397),
    [sym_alignment_tab] = ACTIONS(1397),
    [sym_parameter_char] = ACTIONS(1397),
    [sym_superscript] = ACTIONS(1397),
    [sym_subscript] = ACTIONS(1397),
    [sym_active_char] = ACTIONS(1397),
    [sym_text] = ACTIONS(1397),
  },
  [763] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1440),
  },
  [764] = {
    [anon_sym_LBRACK] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1401),
    [sym_begin_group] = ACTIONS(1401),
    [sym_end_group] = ACTIONS(1401),
    [sym_alignment_tab] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1401),
    [sym_superscript] = ACTIONS(1401),
    [sym_subscript] = ACTIONS(1401),
    [sym_active_char] = ACTIONS(1401),
    [sym_text] = ACTIONS(1401),
  },
  [765] = {
    [anon_sym_LBRACK] = ACTIONS(922),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(922),
    [sym_begin_group] = ACTIONS(922),
    [sym_end_group] = ACTIONS(922),
    [sym_alignment_tab] = ACTIONS(922),
    [sym_parameter_char] = ACTIONS(922),
    [sym_superscript] = ACTIONS(922),
    [sym_subscript] = ACTIONS(922),
    [sym_active_char] = ACTIONS(922),
    [sym_text] = ACTIONS(922),
  },
  [766] = {
    [sym__common] = STATE(605),
    [sym__text_mode_common] = STATE(605),
    [sym_inline_verbatim] = STATE(605),
    [sym_verb_token] = STATE(84),
    [sym__text_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_text_env_at] = STATE(605),
    [sym__display_math_at] = STATE(605),
    [sym_tex_display_math_at] = STATE(605),
    [sym_latex_display_math_at] = STATE(605),
    [sym_begin_display_math] = STATE(379),
    [sym_begin_inline_math] = STATE(380),
    [sym_display_math_env_at] = STATE(605),
    [sym_display_math_begin_at] = STATE(381),
    [sym__inline_math_at] = STATE(605),
    [sym_tex_inline_math_at] = STATE(605),
    [sym_latex_inline_math_at] = STATE(605),
    [sym_inline_math_env_at] = STATE(605),
    [sym_inline_math_begin] = STATE(382),
    [sym_verbatim_env] = STATE(605),
    [sym_verbatim_begin] = STATE(89),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(383),
    [sym_begin_token] = STATE(163),
    [sym_documentclass] = STATE(605),
    [sym_documentclass_token] = STATE(91),
    [sym_usepackage] = STATE(605),
    [sym_usepackage_token] = STATE(92),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(384),
    [sym_section_at] = STATE(605),
    [sym_section_token] = STATE(385),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_emph_at] = STATE(605),
    [sym_emph_token] = STATE(386),
    [sym_footnote_at] = STATE(605),
    [sym_footnote_token] = STATE(387),
    [sym_textbf_at] = STATE(605),
    [sym_textbf_token] = STATE(388),
    [sym_textit_at] = STATE(605),
    [sym_textit_token] = STATE(389),
    [sym_texttt_at] = STATE(605),
    [sym_texttt_token] = STATE(390),
    [sym_text_group_at] = STATE(605),
    [sym_opt_text_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(391),
    [aux_sym_text_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(105),
    [sym_display_math_shift] = ACTIONS(467),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(1442),
    [sym_alignment_tab] = ACTIONS(930),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(930),
    [sym_text] = ACTIONS(930),
  },
  [767] = {
    [anon_sym_LBRACK] = ACTIONS(1405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1405),
    [sym_begin_group] = ACTIONS(1405),
    [sym_end_group] = ACTIONS(1405),
    [sym_alignment_tab] = ACTIONS(1405),
    [sym_parameter_char] = ACTIONS(1405),
    [sym_superscript] = ACTIONS(1405),
    [sym_subscript] = ACTIONS(1405),
    [sym_active_char] = ACTIONS(1405),
    [sym_text] = ACTIONS(1405),
  },
  [768] = {
    [sym_implicit_math_shift] = ACTIONS(1444),
    [sym_display_math_shift] = ACTIONS(1444),
    [anon_sym_LBRACK] = ACTIONS(1444),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1444),
    [sym_begin_group] = ACTIONS(1444),
    [sym_alignment_tab] = ACTIONS(1444),
    [sym_parameter_char] = ACTIONS(1444),
    [sym_superscript] = ACTIONS(1444),
    [sym_subscript] = ACTIONS(1444),
    [sym_active_char] = ACTIONS(1444),
    [sym_text] = ACTIONS(1444),
  },
  [769] = {
    [sym_implicit_math_shift] = ACTIONS(1253),
    [sym_display_math_shift] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [770] = {
    [sym_implicit_math_shift] = ACTIONS(1444),
    [sym_inline_math_shift] = ACTIONS(1444),
    [anon_sym_LBRACK] = ACTIONS(1444),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1444),
    [sym_begin_group] = ACTIONS(1444),
    [sym_alignment_tab] = ACTIONS(1444),
    [sym_parameter_char] = ACTIONS(1444),
    [sym_superscript] = ACTIONS(1444),
    [sym_subscript] = ACTIONS(1444),
    [sym_active_char] = ACTIONS(1444),
    [sym_text] = ACTIONS(1444),
  },
  [771] = {
    [sym_implicit_math_shift] = ACTIONS(1253),
    [sym_inline_math_shift] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [772] = {
    [sym_display_math_shift] = ACTIONS(1424),
    [sym_inline_math_shift] = ACTIONS(1424),
    [anon_sym_LBRACK] = ACTIONS(1424),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1424),
    [sym_begin_group] = ACTIONS(1424),
    [sym_end_group] = ACTIONS(1424),
    [sym_alignment_tab] = ACTIONS(1424),
    [sym_parameter_char] = ACTIONS(1424),
    [sym_superscript] = ACTIONS(1424),
    [sym_subscript] = ACTIONS(1424),
    [sym_active_char] = ACTIONS(1424),
    [sym_text] = ACTIONS(1424),
  },
  [773] = {
    [sym_display_math_shift] = ACTIONS(1426),
    [sym_inline_math_shift] = ACTIONS(1426),
    [anon_sym_LBRACK] = ACTIONS(1426),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1426),
    [sym_begin_group] = ACTIONS(1426),
    [sym_end_group] = ACTIONS(1426),
    [sym_alignment_tab] = ACTIONS(1426),
    [sym_parameter_char] = ACTIONS(1426),
    [sym_superscript] = ACTIONS(1426),
    [sym_subscript] = ACTIONS(1426),
    [sym_active_char] = ACTIONS(1426),
    [sym_text] = ACTIONS(1426),
  },
  [774] = {
    [anon_sym_LBRACK] = ACTIONS(1444),
    [anon_sym_RBRACK] = ACTIONS(1444),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1444),
    [sym_begin_group] = ACTIONS(1444),
    [sym_alignment_tab] = ACTIONS(1444),
    [sym_parameter_char] = ACTIONS(1444),
    [sym_superscript] = ACTIONS(1444),
    [sym_subscript] = ACTIONS(1444),
    [sym_active_char] = ACTIONS(1444),
    [sym_text] = ACTIONS(1444),
  },
  [775] = {
    [anon_sym_LBRACK] = ACTIONS(1253),
    [anon_sym_RBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [776] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1253),
  },
  [777] = {
    [anon_sym_LBRACK] = ACTIONS(1446),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1446),
    [sym_begin_group] = ACTIONS(1446),
    [sym_alignment_tab] = ACTIONS(1446),
    [sym_parameter_char] = ACTIONS(1446),
    [sym_superscript] = ACTIONS(1446),
    [sym_subscript] = ACTIONS(1446),
    [sym_active_char] = ACTIONS(1446),
    [sym_text] = ACTIONS(1446),
  },
  [778] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1448),
  },
  [779] = {
    [anon_sym_LBRACK] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_end_group] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [780] = {
    [sym_display_math_shift] = ACTIONS(1126),
    [sym_inline_math_shift] = ACTIONS(1126),
    [anon_sym_LBRACK] = ACTIONS(1126),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1126),
    [sym_begin_group] = ACTIONS(1126),
    [sym_end_group] = ACTIONS(1126),
    [sym_alignment_tab] = ACTIONS(1126),
    [sym_parameter_char] = ACTIONS(1126),
    [sym_superscript] = ACTIONS(1126),
    [sym_subscript] = ACTIONS(1126),
    [sym_active_char] = ACTIONS(1126),
    [sym_text] = ACTIONS(1126),
  },
  [781] = {
    [sym_display_math_shift] = ACTIONS(1128),
    [sym_inline_math_shift] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1128),
    [sym_begin_group] = ACTIONS(1128),
    [sym_end_group] = ACTIONS(1128),
    [sym_alignment_tab] = ACTIONS(1128),
    [sym_parameter_char] = ACTIONS(1128),
    [sym_superscript] = ACTIONS(1128),
    [sym_subscript] = ACTIONS(1128),
    [sym_active_char] = ACTIONS(1128),
    [sym_text] = ACTIONS(1128),
  },
  [782] = {
    [anon_sym_LBRACK] = ACTIONS(1444),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1444),
    [sym_begin_group] = ACTIONS(1444),
    [sym_end_group] = ACTIONS(1444),
    [sym_alignment_tab] = ACTIONS(1444),
    [sym_parameter_char] = ACTIONS(1444),
    [sym_superscript] = ACTIONS(1444),
    [sym_subscript] = ACTIONS(1444),
    [sym_active_char] = ACTIONS(1444),
    [sym_text] = ACTIONS(1444),
  },
  [783] = {
    [anon_sym_LBRACK] = ACTIONS(1253),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1253),
    [sym_begin_group] = ACTIONS(1253),
    [sym_end_group] = ACTIONS(1253),
    [sym_alignment_tab] = ACTIONS(1253),
    [sym_parameter_char] = ACTIONS(1253),
    [sym_superscript] = ACTIONS(1253),
    [sym_subscript] = ACTIONS(1253),
    [sym_active_char] = ACTIONS(1253),
    [sym_text] = ACTIONS(1253),
  },
  [784] = {
    [anon_sym_LBRACK] = ACTIONS(1450),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1450),
    [sym_begin_group] = ACTIONS(1450),
    [sym_alignment_tab] = ACTIONS(1450),
    [sym_parameter_char] = ACTIONS(1450),
    [sym_superscript] = ACTIONS(1450),
    [sym_subscript] = ACTIONS(1450),
    [sym_active_char] = ACTIONS(1450),
    [sym_text] = ACTIONS(1450),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(32),
  [23] = {.count = 1, .reusable = true}, SHIFT(33),
  [25] = {.count = 1, .reusable = true}, SHIFT(7),
  [27] = {.count = 1, .reusable = true}, SHIFT(34),
  [29] = {.count = 1, .reusable = true}, SHIFT(35),
  [31] = {.count = 1, .reusable = true}, SHIFT(36),
  [33] = {.count = 1, .reusable = true}, SHIFT(37),
  [35] = {.count = 1, .reusable = true}, SHIFT(46),
  [37] = {.count = 1, .reusable = true}, SHIFT(47),
  [39] = {.count = 1, .reusable = true}, SHIFT(48),
  [41] = {.count = 1, .reusable = true}, SHIFT(49),
  [43] = {.count = 1, .reusable = true}, SHIFT(50),
  [45] = {.count = 1, .reusable = true}, SHIFT(58),
  [47] = {.count = 1, .reusable = true}, SHIFT(59),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(60),
  [53] = {.count = 1, .reusable = true}, SHIFT(61),
  [55] = {.count = 1, .reusable = true}, SHIFT(62),
  [57] = {.count = 1, .reusable = false}, SHIFT(63),
  [59] = {.count = 1, .reusable = false}, SHIFT(64),
  [61] = {.count = 1, .reusable = false}, SHIFT(65),
  [63] = {.count = 1, .reusable = false}, SHIFT(66),
  [65] = {.count = 1, .reusable = false}, SHIFT(67),
  [67] = {.count = 1, .reusable = false}, SHIFT(68),
  [69] = {.count = 1, .reusable = false}, SHIFT(69),
  [71] = {.count = 1, .reusable = true}, SHIFT(70),
  [73] = {.count = 1, .reusable = false}, SHIFT(71),
  [75] = {.count = 1, .reusable = false}, SHIFT(72),
  [77] = {.count = 1, .reusable = false}, SHIFT(73),
  [79] = {.count = 1, .reusable = false}, SHIFT(74),
  [81] = {.count = 1, .reusable = false}, SHIFT(75),
  [83] = {.count = 1, .reusable = false}, SHIFT(76),
  [85] = {.count = 1, .reusable = false}, SHIFT(77),
  [87] = {.count = 1, .reusable = true}, SHIFT(78),
  [89] = {.count = 1, .reusable = true}, SHIFT(79),
  [91] = {.count = 1, .reusable = true}, SHIFT(80),
  [93] = {.count = 1, .reusable = true}, SHIFT(81),
  [95] = {.count = 1, .reusable = true}, SHIFT(82),
  [97] = {.count = 1, .reusable = true}, SHIFT(104),
  [99] = {.count = 1, .reusable = true}, SHIFT(105),
  [101] = {.count = 1, .reusable = true}, SHIFT(83),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [105] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [107] = {.count = 1, .reusable = true}, SHIFT(106),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(107),
  [113] = {.count = 1, .reusable = true}, SHIFT(108),
  [115] = {.count = 1, .reusable = true}, SHIFT(116),
  [117] = {.count = 1, .reusable = true}, SHIFT(117),
  [119] = {.count = 1, .reusable = false}, SHIFT(125),
  [121] = {.count = 1, .reusable = true}, SHIFT(121),
  [123] = {.count = 1, .reusable = true}, SHIFT(126),
  [125] = {.count = 1, .reusable = true}, SHIFT(127),
  [127] = {.count = 1, .reusable = true}, SHIFT(130),
  [129] = {.count = 1, .reusable = true}, SHIFT(131),
  [131] = {.count = 1, .reusable = true}, SHIFT(136),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(145),
  [137] = {.count = 1, .reusable = true}, SHIFT(153),
  [139] = {.count = 1, .reusable = true}, SHIFT(154),
  [141] = {.count = 1, .reusable = true}, SHIFT(155),
  [143] = {.count = 1, .reusable = true}, SHIFT(156),
  [145] = {.count = 1, .reusable = true}, SHIFT(174),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(175),
  [151] = {.count = 1, .reusable = true}, SHIFT(177),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(178),
  [157] = {.count = 1, .reusable = true}, SHIFT(180),
  [159] = {.count = 1, .reusable = true}, SHIFT(179),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 2),
  [163] = {.count = 1, .reusable = false}, SHIFT(181),
  [165] = {.count = 1, .reusable = false}, SHIFT(182),
  [167] = {.count = 1, .reusable = false}, SHIFT(183),
  [169] = {.count = 1, .reusable = false}, SHIFT(184),
  [171] = {.count = 1, .reusable = true}, SHIFT(185),
  [173] = {.count = 1, .reusable = true}, SHIFT(186),
  [175] = {.count = 1, .reusable = true}, SHIFT(187),
  [177] = {.count = 1, .reusable = true}, SHIFT(194),
  [179] = {.count = 1, .reusable = true}, SHIFT(195),
  [181] = {.count = 1, .reusable = true}, SHIFT(196),
  [183] = {.count = 1, .reusable = true}, SHIFT(197),
  [185] = {.count = 1, .reusable = true}, SHIFT(199),
  [187] = {.count = 1, .reusable = true}, SHIFT(202),
  [189] = {.count = 1, .reusable = true}, SHIFT(203),
  [191] = {.count = 1, .reusable = true}, SHIFT(205),
  [193] = {.count = 1, .reusable = true}, SHIFT(208),
  [195] = {.count = 1, .reusable = true}, SHIFT(210),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(211),
  [201] = {.count = 1, .reusable = true}, SHIFT(212),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 2),
  [205] = {.count = 1, .reusable = false}, SHIFT(213),
  [207] = {.count = 1, .reusable = false}, SHIFT(214),
  [209] = {.count = 1, .reusable = false}, SHIFT(215),
  [211] = {.count = 1, .reusable = true}, SHIFT(216),
  [213] = {.count = 1, .reusable = true}, SHIFT(217),
  [215] = {.count = 1, .reusable = true}, SHIFT(218),
  [217] = {.count = 1, .reusable = true}, SHIFT(219),
  [219] = {.count = 1, .reusable = true}, SHIFT(223),
  [221] = {.count = 1, .reusable = true}, SHIFT(224),
  [223] = {.count = 1, .reusable = true}, SHIFT(227),
  [225] = {.count = 1, .reusable = true}, SHIFT(229),
  [227] = {.count = 1, .reusable = true}, SHIFT(230),
  [229] = {.count = 1, .reusable = true}, SHIFT(231),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [233] = {.count = 1, .reusable = false}, SHIFT(232),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(233),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(234),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(235),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(236),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(237),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(238),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(239),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [271] = {.count = 1, .reusable = false}, SHIFT(240),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(241),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [281] = {.count = 1, .reusable = true}, SHIFT(242),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(243),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(244),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(245),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(246),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [305] = {.count = 1, .reusable = false}, SHIFT(247),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [309] = {.count = 1, .reusable = true}, SHIFT(248),
  [311] = {.count = 1, .reusable = true}, SHIFT(250),
  [313] = {.count = 1, .reusable = false}, SHIFT(252),
  [315] = {.count = 1, .reusable = false}, SHIFT(253),
  [317] = {.count = 1, .reusable = false}, SHIFT(254),
  [319] = {.count = 1, .reusable = true}, SHIFT(255),
  [321] = {.count = 1, .reusable = true}, SHIFT(256),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [325] = {.count = 1, .reusable = true}, SHIFT(257),
  [327] = {.count = 1, .reusable = true}, SHIFT(267),
  [329] = {.count = 1, .reusable = true}, SHIFT(268),
  [331] = {.count = 1, .reusable = true}, SHIFT(283),
  [333] = {.count = 1, .reusable = true}, SHIFT(287),
  [335] = {.count = 1, .reusable = true}, SHIFT(289),
  [337] = {.count = 1, .reusable = true}, SHIFT(290),
  [339] = {.count = 1, .reusable = true}, SHIFT(291),
  [341] = {.count = 1, .reusable = true}, SHIFT(292),
  [343] = {.count = 1, .reusable = true}, SHIFT(293),
  [345] = {.count = 1, .reusable = false}, SHIFT(294),
  [347] = {.count = 1, .reusable = false}, SHIFT(295),
  [349] = {.count = 1, .reusable = false}, SHIFT(296),
  [351] = {.count = 1, .reusable = true}, SHIFT(297),
  [353] = {.count = 1, .reusable = true}, SHIFT(298),
  [355] = {.count = 1, .reusable = true}, SHIFT(299),
  [357] = {.count = 1, .reusable = true}, SHIFT(301),
  [359] = {.count = 1, .reusable = true}, SHIFT(305),
  [361] = {.count = 1, .reusable = true}, SHIFT(306),
  [363] = {.count = 1, .reusable = true}, SHIFT(309),
  [365] = {.count = 1, .reusable = true}, SHIFT(311),
  [367] = {.count = 1, .reusable = true}, SHIFT(312),
  [369] = {.count = 1, .reusable = true}, SHIFT(313),
  [371] = {.count = 1, .reusable = true}, SHIFT(314),
  [373] = {.count = 1, .reusable = true}, SHIFT(320),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(322),
  [379] = {.count = 1, .reusable = false}, SHIFT(325),
  [381] = {.count = 1, .reusable = true}, SHIFT(324),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [385] = {.count = 1, .reusable = true}, SHIFT(326),
  [387] = {.count = 1, .reusable = false}, SHIFT(320),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [391] = {.count = 1, .reusable = true}, SHIFT(329),
  [393] = {.count = 1, .reusable = false}, SHIFT(330),
  [395] = {.count = 1, .reusable = false}, SHIFT(331),
  [397] = {.count = 1, .reusable = false}, SHIFT(332),
  [399] = {.count = 1, .reusable = false}, SHIFT(333),
  [401] = {.count = 1, .reusable = true}, SHIFT(334),
  [403] = {.count = 1, .reusable = true}, SHIFT(335),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [407] = {.count = 1, .reusable = true}, SHIFT(338),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [411] = {.count = 1, .reusable = true}, SHIFT(333),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [415] = {.count = 1, .reusable = true}, SHIFT(341),
  [417] = {.count = 1, .reusable = true}, SHIFT(343),
  [419] = {.count = 1, .reusable = true}, SHIFT(345),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [423] = {.count = 1, .reusable = true}, SHIFT(346),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(348),
  [431] = {.count = 1, .reusable = false}, SHIFT(350),
  [433] = {.count = 1, .reusable = true}, SHIFT(351),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [439] = {.count = 1, .reusable = true}, SHIFT(352),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [447] = {.count = 1, .reusable = true}, SHIFT(354),
  [449] = {.count = 1, .reusable = true}, SHIFT(355),
  [451] = {.count = 1, .reusable = true}, SHIFT(356),
  [453] = {.count = 1, .reusable = true}, SHIFT(362),
  [455] = {.count = 1, .reusable = true}, SHIFT(363),
  [457] = {.count = 1, .reusable = true}, SHIFT(364),
  [459] = {.count = 1, .reusable = true}, SHIFT(365),
  [461] = {.count = 1, .reusable = true}, SHIFT(371),
  [463] = {.count = 1, .reusable = false}, SHIFT(372),
  [465] = {.count = 1, .reusable = false}, SHIFT(373),
  [467] = {.count = 1, .reusable = true}, SHIFT(374),
  [469] = {.count = 1, .reusable = true}, SHIFT(375),
  [471] = {.count = 1, .reusable = true}, SHIFT(376),
  [473] = {.count = 1, .reusable = true}, SHIFT(377),
  [475] = {.count = 1, .reusable = true}, SHIFT(378),
  [477] = {.count = 1, .reusable = true}, SHIFT(392),
  [479] = {.count = 1, .reusable = true}, SHIFT(393),
  [481] = {.count = 1, .reusable = true}, SHIFT(395),
  [483] = {.count = 1, .reusable = true}, SHIFT(396),
  [485] = {.count = 1, .reusable = true}, SHIFT(402),
  [487] = {.count = 1, .reusable = true}, SHIFT(406),
  [489] = {.count = 1, .reusable = true}, SHIFT(408),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [495] = {.count = 1, .reusable = true}, SHIFT(420),
  [497] = {.count = 1, .reusable = true}, SHIFT(422),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [501] = {.count = 1, .reusable = true}, SHIFT(423),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [507] = {.count = 1, .reusable = true}, SHIFT(425),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(178),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(33),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(180),
  [540] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [542] = {.count = 1, .reusable = true}, SHIFT(426),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [546] = {.count = 1, .reusable = false}, SHIFT(427),
  [548] = {.count = 1, .reusable = false}, SHIFT(428),
  [550] = {.count = 1, .reusable = false}, SHIFT(429),
  [552] = {.count = 1, .reusable = false}, SHIFT(430),
  [554] = {.count = 1, .reusable = false}, SHIFT(431),
  [556] = {.count = 1, .reusable = true}, SHIFT(432),
  [558] = {.count = 1, .reusable = true}, SHIFT(433),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [562] = {.count = 1, .reusable = true}, SHIFT(434),
  [564] = {.count = 1, .reusable = true}, SHIFT(438),
  [566] = {.count = 1, .reusable = true}, SHIFT(439),
  [568] = {.count = 1, .reusable = true}, SHIFT(442),
  [570] = {.count = 1, .reusable = true}, SHIFT(444),
  [572] = {.count = 1, .reusable = true}, SHIFT(445),
  [574] = {.count = 1, .reusable = true}, SHIFT(446),
  [576] = {.count = 1, .reusable = true}, SHIFT(447),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 3),
  [580] = {.count = 1, .reusable = true}, SHIFT(448),
  [582] = {.count = 1, .reusable = true}, SHIFT(450),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(451),
  [590] = {.count = 1, .reusable = true}, SHIFT(454),
  [592] = {.count = 1, .reusable = true}, SHIFT(455),
  [594] = {.count = 1, .reusable = true}, SHIFT(456),
  [596] = {.count = 1, .reusable = true}, SHIFT(457),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [600] = {.count = 1, .reusable = true}, SHIFT(459),
  [602] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(35),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(36),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(37),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(211),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(47),
  [619] = {.count = 1, .reusable = false}, SHIFT(460),
  [621] = {.count = 1, .reusable = false}, SHIFT(461),
  [623] = {.count = 1, .reusable = true}, SHIFT(462),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [627] = {.count = 1, .reusable = true}, SHIFT(463),
  [629] = {.count = 1, .reusable = true}, SHIFT(465),
  [631] = {.count = 1, .reusable = true}, SHIFT(468),
  [633] = {.count = 1, .reusable = true}, SHIFT(469),
  [635] = {.count = 1, .reusable = true}, SHIFT(470),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(49),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(50),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(230),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(59),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [661] = {.count = 1, .reusable = true}, SHIFT(472),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [665] = {.count = 1, .reusable = true}, SHIFT(473),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [683] = {.count = 1, .reusable = true}, SHIFT(474),
  [685] = {.count = 1, .reusable = true}, SHIFT(475),
  [687] = {.count = 1, .reusable = false}, SHIFT(476),
  [689] = {.count = 1, .reusable = false}, SHIFT(477),
  [691] = {.count = 1, .reusable = true}, SHIFT(478),
  [693] = {.count = 1, .reusable = true}, SHIFT(479),
  [695] = {.count = 1, .reusable = true}, SHIFT(480),
  [697] = {.count = 1, .reusable = true}, SHIFT(482),
  [699] = {.count = 1, .reusable = true}, SHIFT(489),
  [701] = {.count = 1, .reusable = true}, SHIFT(493),
  [703] = {.count = 1, .reusable = true}, SHIFT(494),
  [705] = {.count = 1, .reusable = true}, SHIFT(496),
  [707] = {.count = 1, .reusable = true}, SHIFT(498),
  [709] = {.count = 1, .reusable = true}, SHIFT(500),
  [711] = {.count = 1, .reusable = true}, SHIFT(501),
  [713] = {.count = 1, .reusable = false}, SHIFT(503),
  [715] = {.count = 1, .reusable = true}, SHIFT(504),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [719] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(78),
  [722] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(79),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(80),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(81),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(291),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(105),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(83),
  [740] = {.count = 1, .reusable = true}, SHIFT(507),
  [742] = {.count = 1, .reusable = false}, SHIFT(508),
  [744] = {.count = 1, .reusable = false}, SHIFT(509),
  [746] = {.count = 1, .reusable = true}, SHIFT(510),
  [748] = {.count = 1, .reusable = true}, SHIFT(511),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [752] = {.count = 1, .reusable = true}, SHIFT(512),
  [754] = {.count = 1, .reusable = true}, SHIFT(516),
  [756] = {.count = 1, .reusable = true}, SHIFT(517),
  [758] = {.count = 1, .reusable = true}, SHIFT(518),
  [760] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(107),
  [763] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(108),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(312),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(117),
  [772] = {.count = 1, .reusable = true}, SHIFT(520),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [778] = {.count = 1, .reusable = true}, SHIFT(521),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [782] = {.count = 1, .reusable = true}, SHIFT(523),
  [784] = {.count = 1, .reusable = true}, SHIFT(525),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [790] = {.count = 1, .reusable = true}, SHIFT(526),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [794] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [796] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [798] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(325),
  [801] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(125),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(326),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(329),
  [816] = {.count = 1, .reusable = true}, SHIFT(527),
  [818] = {.count = 1, .reusable = true}, SHIFT(528),
  [820] = {.count = 1, .reusable = true}, SHIFT(529),
  [822] = {.count = 1, .reusable = true}, SHIFT(530),
  [824] = {.count = 1, .reusable = true}, SHIFT(531),
  [826] = {.count = 1, .reusable = true}, SHIFT(532),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [830] = {.count = 1, .reusable = true}, SHIFT(533),
  [832] = {.count = 1, .reusable = true}, SHIFT(534),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [838] = {.count = 1, .reusable = true}, SHIFT(536),
  [840] = {.count = 1, .reusable = true}, SHIFT(537),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [848] = {.count = 1, .reusable = true}, SHIFT(543),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 2),
  [854] = {.count = 1, .reusable = false}, SHIFT(545),
  [856] = {.count = 1, .reusable = true}, SHIFT(546),
  [858] = {.count = 1, .reusable = true}, SHIFT(547),
  [860] = {.count = 1, .reusable = true}, SHIFT(548),
  [862] = {.count = 1, .reusable = true}, SHIFT(553),
  [864] = {.count = 1, .reusable = true}, SHIFT(554),
  [866] = {.count = 1, .reusable = true}, SHIFT(555),
  [868] = {.count = 1, .reusable = true}, SHIFT(557),
  [870] = {.count = 1, .reusable = true}, SHIFT(559),
  [872] = {.count = 1, .reusable = true}, SHIFT(560),
  [874] = {.count = 1, .reusable = true}, SHIFT(563),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [878] = {.count = 1, .reusable = true}, SHIFT(564),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 2),
  [882] = {.count = 1, .reusable = false}, SHIFT(565),
  [884] = {.count = 1, .reusable = true}, SHIFT(566),
  [886] = {.count = 1, .reusable = true}, SHIFT(567),
  [888] = {.count = 1, .reusable = true}, SHIFT(568),
  [890] = {.count = 1, .reusable = true}, SHIFT(569),
  [892] = {.count = 1, .reusable = true}, SHIFT(572),
  [894] = {.count = 1, .reusable = true}, SHIFT(573),
  [896] = {.count = 1, .reusable = true}, SHIFT(576),
  [898] = {.count = 1, .reusable = true}, SHIFT(577),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [902] = {.count = 1, .reusable = false}, SHIFT(578),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [908] = {.count = 1, .reusable = false}, SHIFT(579),
  [910] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [912] = {.count = 1, .reusable = true}, SHIFT(580),
  [914] = {.count = 1, .reusable = true}, SHIFT(582),
  [916] = {.count = 1, .reusable = false}, SHIFT(584),
  [918] = {.count = 1, .reusable = true}, SHIFT(585),
  [920] = {.count = 1, .reusable = true}, SHIFT(586),
  [922] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [924] = {.count = 1, .reusable = true}, SHIFT(592),
  [926] = {.count = 1, .reusable = true}, SHIFT(603),
  [928] = {.count = 1, .reusable = true}, SHIFT(604),
  [930] = {.count = 1, .reusable = true}, SHIFT(605),
  [932] = {.count = 1, .reusable = true}, SHIFT(372),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [936] = {.count = 1, .reusable = false}, SHIFT(606),
  [938] = {.count = 1, .reusable = true}, SHIFT(607),
  [940] = {.count = 1, .reusable = true}, SHIFT(608),
  [942] = {.count = 1, .reusable = true}, SHIFT(610),
  [944] = {.count = 1, .reusable = true}, SHIFT(613),
  [946] = {.count = 1, .reusable = true}, SHIFT(614),
  [948] = {.count = 1, .reusable = true}, SHIFT(617),
  [950] = {.count = 1, .reusable = true}, SHIFT(618),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [954] = {.count = 1, .reusable = true}, SHIFT(623),
  [956] = {.count = 1, .reusable = true}, SHIFT(624),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [962] = {.count = 1, .reusable = true}, SHIFT(627),
  [964] = {.count = 1, .reusable = true}, SHIFT(630),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [968] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [970] = {.count = 1, .reusable = true}, SHIFT(631),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [974] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [976] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [980] = {.count = 1, .reusable = true}, SHIFT(634),
  [982] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(153),
  [985] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(154),
  [988] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(4),
  [991] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(420),
  [994] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(156),
  [997] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(423),
  [1000] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(33),
  [1003] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(7),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(425),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [1013] = {.count = 1, .reusable = false}, SHIFT(635),
  [1015] = {.count = 1, .reusable = false}, SHIFT(636),
  [1017] = {.count = 1, .reusable = true}, SHIFT(637),
  [1019] = {.count = 1, .reusable = true}, SHIFT(638),
  [1021] = {.count = 1, .reusable = true}, SHIFT(640),
  [1023] = {.count = 1, .reusable = true}, SHIFT(643),
  [1025] = {.count = 1, .reusable = true}, SHIFT(644),
  [1027] = {.count = 1, .reusable = true}, SHIFT(645),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [1031] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(185),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(186),
  [1037] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(446),
  [1040] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(195),
  [1043] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [1045] = {.count = 1, .reusable = true}, SHIFT(647),
  [1047] = {.count = 1, .reusable = true}, SHIFT(648),
  [1049] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [1051] = {.count = 1, .reusable = true}, SHIFT(649),
  [1053] = {.count = 1, .reusable = true}, SHIFT(650),
  [1055] = {.count = 1, .reusable = true}, SHIFT(651),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(459),
  [1062] = {.count = 1, .reusable = true}, SHIFT(652),
  [1064] = {.count = 1, .reusable = true}, SHIFT(653),
  [1066] = {.count = 1, .reusable = true}, SHIFT(654),
  [1068] = {.count = 1, .reusable = true}, SHIFT(655),
  [1070] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [1072] = {.count = 1, .reusable = true}, SHIFT(656),
  [1074] = {.count = 1, .reusable = true}, SHIFT(657),
  [1076] = {.count = 1, .reusable = true}, SHIFT(658),
  [1078] = {.count = 1, .reusable = true}, SHIFT(659),
  [1080] = {.count = 1, .reusable = true}, SHIFT(660),
  [1082] = {.count = 1, .reusable = true}, SHIFT(662),
  [1084] = {.count = 1, .reusable = true}, SHIFT(664),
  [1086] = {.count = 1, .reusable = true}, SHIFT(665),
  [1088] = {.count = 1, .reusable = true}, SHIFT(669),
  [1090] = {.count = 1, .reusable = false}, SHIFT(671),
  [1092] = {.count = 1, .reusable = true}, SHIFT(503),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [1098] = {.count = 1, .reusable = false}, SHIFT(672),
  [1100] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [1102] = {.count = 1, .reusable = true}, SHIFT(673),
  [1104] = {.count = 1, .reusable = true}, SHIFT(674),
  [1106] = {.count = 1, .reusable = true}, SHIFT(675),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [1110] = {.count = 1, .reusable = false}, SHIFT(676),
  [1112] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [1114] = {.count = 1, .reusable = true}, SHIFT(677),
  [1116] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [1118] = {.count = 1, .reusable = true}, SHIFT(678),
  [1120] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [1122] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [1124] = {.count = 1, .reusable = true}, SHIFT(679),
  [1126] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [1128] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [1130] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [1132] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [1134] = {.count = 1, .reusable = true}, SHIFT(680),
  [1136] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [1138] = {.count = 1, .reusable = true}, SHIFT(681),
  [1140] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [1142] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [1144] = {.count = 1, .reusable = true}, SHIFT(683),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1148] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1150] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1152] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1154] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [1156] = {.count = 1, .reusable = false}, SHIFT(685),
  [1158] = {.count = 1, .reusable = false}, SHIFT(686),
  [1160] = {.count = 1, .reusable = true}, SHIFT(687),
  [1162] = {.count = 1, .reusable = true}, SHIFT(688),
  [1164] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1166] = {.count = 1, .reusable = true}, SHIFT(689),
  [1168] = {.count = 1, .reusable = true}, SHIFT(692),
  [1170] = {.count = 1, .reusable = true}, SHIFT(693),
  [1172] = {.count = 1, .reusable = true}, SHIFT(696),
  [1174] = {.count = 1, .reusable = true}, SHIFT(697),
  [1176] = {.count = 1, .reusable = true}, SHIFT(698),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 3),
  [1180] = {.count = 1, .reusable = true}, SHIFT(699),
  [1182] = {.count = 1, .reusable = true}, SHIFT(701),
  [1184] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1186] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1188] = {.count = 1, .reusable = true}, SHIFT(703),
  [1190] = {.count = 1, .reusable = true}, SHIFT(704),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1194] = {.count = 1, .reusable = true}, SHIFT(706),
  [1196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(35),
  [1201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(355),
  [1204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(356),
  [1207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(564),
  [1210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(47),
  [1213] = {.count = 1, .reusable = false}, SHIFT(707),
  [1215] = {.count = 1, .reusable = true}, SHIFT(708),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1219] = {.count = 1, .reusable = true}, SHIFT(709),
  [1221] = {.count = 1, .reusable = true}, SHIFT(712),
  [1223] = {.count = 1, .reusable = true}, SHIFT(713),
  [1225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(364),
  [1228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(365),
  [1231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(577),
  [1234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(59),
  [1237] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1239] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1241] = {.count = 1, .reusable = true}, SHIFT(715),
  [1243] = {.count = 1, .reusable = true}, SHIFT(716),
  [1245] = {.count = 1, .reusable = false}, SHIFT(717),
  [1247] = {.count = 1, .reusable = true}, SHIFT(718),
  [1249] = {.count = 1, .reusable = true}, SHIFT(724),
  [1251] = {.count = 1, .reusable = true}, SHIFT(726),
  [1253] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(374),
  [1258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(375),
  [1261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(376),
  [1264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(377),
  [1267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(605),
  [1272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(105),
  [1275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(83),
  [1278] = {.count = 1, .reusable = false}, SHIFT(729),
  [1280] = {.count = 1, .reusable = true}, SHIFT(730),
  [1282] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1284] = {.count = 1, .reusable = true}, SHIFT(731),
  [1286] = {.count = 1, .reusable = true}, SHIFT(734),
  [1288] = {.count = 1, .reusable = true}, SHIFT(735),
  [1290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(395),
  [1293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(396),
  [1296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(618),
  [1299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(117),
  [1302] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1304] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1306] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1308] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1310] = {.count = 1, .reusable = true}, SHIFT(737),
  [1312] = {.count = 1, .reusable = true}, SHIFT(738),
  [1314] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1316] = {.count = 1, .reusable = true}, SHIFT(739),
  [1318] = {.count = 1, .reusable = true}, SHIFT(740),
  [1320] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1322] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(634),
  [1329] = {.count = 1, .reusable = true}, SHIFT(745),
  [1331] = {.count = 1, .reusable = true}, SHIFT(746),
  [1333] = {.count = 1, .reusable = true}, SHIFT(747),
  [1335] = {.count = 1, .reusable = true}, SHIFT(748),
  [1337] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1339] = {.count = 1, .reusable = true}, SHIFT(749),
  [1341] = {.count = 1, .reusable = true}, SHIFT(750),
  [1343] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1345] = {.count = 1, .reusable = false}, SHIFT(751),
  [1347] = {.count = 1, .reusable = false}, SHIFT(752),
  [1349] = {.count = 1, .reusable = true}, SHIFT(753),
  [1351] = {.count = 1, .reusable = true}, SHIFT(754),
  [1353] = {.count = 1, .reusable = true}, SHIFT(755),
  [1355] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1357] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1359] = {.count = 1, .reusable = true}, SHIFT(756),
  [1361] = {.count = 1, .reusable = true}, SHIFT(757),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1365] = {.count = 1, .reusable = true}, SHIFT(758),
  [1367] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1369] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1371] = {.count = 1, .reusable = true}, SHIFT(759),
  [1373] = {.count = 1, .reusable = false}, SHIFT(760),
  [1375] = {.count = 1, .reusable = true}, SHIFT(761),
  [1377] = {.count = 1, .reusable = true}, SHIFT(762),
  [1379] = {.count = 1, .reusable = true}, SHIFT(765),
  [1381] = {.count = 1, .reusable = true}, SHIFT(766),
  [1383] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(546),
  [1388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(547),
  [1391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(698),
  [1394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(195),
  [1397] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1399] = {.count = 1, .reusable = true}, SHIFT(768),
  [1401] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1403] = {.count = 1, .reusable = true}, SHIFT(769),
  [1405] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(706),
  [1410] = {.count = 1, .reusable = true}, SHIFT(770),
  [1412] = {.count = 1, .reusable = true}, SHIFT(771),
  [1414] = {.count = 1, .reusable = true}, SHIFT(774),
  [1416] = {.count = 1, .reusable = true}, SHIFT(775),
  [1418] = {.count = 1, .reusable = true}, SHIFT(776),
  [1420] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1422] = {.count = 1, .reusable = true}, SHIFT(777),
  [1424] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1426] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1428] = {.count = 1, .reusable = true}, SHIFT(779),
  [1430] = {.count = 1, .reusable = true}, SHIFT(780),
  [1432] = {.count = 1, .reusable = true}, SHIFT(781),
  [1434] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1436] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1438] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1440] = {.count = 1, .reusable = true}, SHIFT(782),
  [1442] = {.count = 1, .reusable = true}, SHIFT(783),
  [1444] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1446] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1448] = {.count = 1, .reusable = true}, SHIFT(784),
  [1450] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
