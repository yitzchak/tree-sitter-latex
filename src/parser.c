#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 352
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 4
#define TOKEN_COUNT 48
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
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 14,
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
    case 178:
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
    case 179:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
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
        ADVANCE(184);
      ADVANCE(37);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 185:
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
    case 186:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(187);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(189);
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
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
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
        ADVANCE(187);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(437);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(189);
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
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 439:
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
        ADVANCE(440);
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
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 441:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(442);
      if (lookahead == 'd')
        ADVANCE(443);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(444);
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
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(445);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
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
        ADVANCE(460);
      if (lookahead == 'f')
        ADVANCE(354);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 'm')
        ADVANCE(440);
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
    case 460:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == 'm')
        ADVANCE(351);
      if (lookahead == 'n')
        ADVANCE(461);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(462);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 463:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(442);
      if (lookahead == 'd')
        ADVANCE(443);
      if (lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(444);
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
    case 464:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead == 'n')
        ADVANCE(461);
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
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 177},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 178},
  [7] = {.lex_state = 179},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 179},
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
  [21] = {.lex_state = 178},
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
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 183},
  [35] = {.lex_state = 183},
  [36] = {.lex_state = 178},
  [37] = {.lex_state = 185},
  [38] = {.lex_state = 185},
  [39] = {.lex_state = 185},
  [40] = {.lex_state = 185},
  [41] = {.lex_state = 185},
  [42] = {.lex_state = 183},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 185},
  [45] = {.lex_state = 185},
  [46] = {.lex_state = 185},
  [47] = {.lex_state = 185},
  [48] = {.lex_state = 185},
  [49] = {.lex_state = 183},
  [50] = {.lex_state = 183},
  [51] = {.lex_state = 178},
  [52] = {.lex_state = 177},
  [53] = {.lex_state = 186},
  [54] = {.lex_state = 177},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 179, .external_lex_state = 3},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 192},
  [69] = {.lex_state = 178},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 196},
  [73] = {.lex_state = 180},
  [74] = {.lex_state = 197},
  [75] = {.lex_state = 178},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 201},
  [79] = {.lex_state = 300},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 300},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 178},
  [85] = {.lex_state = 185},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 178},
  [88] = {.lex_state = 185},
  [89] = {.lex_state = 178},
  [90] = {.lex_state = 178},
  [91] = {.lex_state = 185},
  [92] = {.lex_state = 301},
  [93] = {.lex_state = 302},
  [94] = {.lex_state = 178},
  [95] = {.lex_state = 178},
  [96] = {.lex_state = 185},
  [97] = {.lex_state = 178},
  [98] = {.lex_state = 178},
  [99] = {.lex_state = 178},
  [100] = {.lex_state = 303},
  [101] = {.lex_state = 177},
  [102] = {.lex_state = 36},
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
  [117] = {.lex_state = 178},
  [118] = {.lex_state = 178},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 178},
  [122] = {.lex_state = 178},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 178},
  [126] = {.lex_state = 181},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 185},
  [134] = {.lex_state = 185},
  [135] = {.lex_state = 178},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 178},
  [143] = {.lex_state = 178},
  [144] = {.lex_state = 177},
  [145] = {.lex_state = 185},
  [146] = {.lex_state = 178},
  [147] = {.lex_state = 177},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 178},
  [150] = {.lex_state = 177},
  [151] = {.lex_state = 178},
  [152] = {.lex_state = 436},
  [153] = {.lex_state = 178},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 178},
  [156] = {.lex_state = 38},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36, .external_lex_state = 2},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 178},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 438},
  [163] = {.lex_state = 178},
  [164] = {.lex_state = 178},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 178},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 185},
  [169] = {.lex_state = 178},
  [170] = {.lex_state = 201},
  [171] = {.lex_state = 178},
  [172] = {.lex_state = 180},
  [173] = {.lex_state = 196},
  [174] = {.lex_state = 180},
  [175] = {.lex_state = 178},
  [176] = {.lex_state = 178},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 177},
  [179] = {.lex_state = 177},
  [180] = {.lex_state = 177},
  [181] = {.lex_state = 177},
  [182] = {.lex_state = 177},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 300},
  [185] = {.lex_state = 300},
  [186] = {.lex_state = 180},
  [187] = {.lex_state = 300},
  [188] = {.lex_state = 300},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 178},
  [191] = {.lex_state = 300},
  [192] = {.lex_state = 300},
  [193] = {.lex_state = 38},
  [194] = {.lex_state = 36},
  [195] = {.lex_state = 178},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 178},
  [198] = {.lex_state = 302},
  [199] = {.lex_state = 181},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 178},
  [202] = {.lex_state = 183},
  [203] = {.lex_state = 183},
  [204] = {.lex_state = 439},
  [205] = {.lex_state = 178},
  [206] = {.lex_state = 177},
  [207] = {.lex_state = 441},
  [208] = {.lex_state = 177},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 38},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 447},
  [216] = {.lex_state = 178},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 459},
  [223] = {.lex_state = 178},
  [224] = {.lex_state = 36},
  [225] = {.lex_state = 300},
  [226] = {.lex_state = 178},
  [227] = {.lex_state = 178},
  [228] = {.lex_state = 185},
  [229] = {.lex_state = 38},
  [230] = {.lex_state = 178},
  [231] = {.lex_state = 178},
  [232] = {.lex_state = 185},
  [233] = {.lex_state = 178},
  [234] = {.lex_state = 178},
  [235] = {.lex_state = 178},
  [236] = {.lex_state = 178},
  [237] = {.lex_state = 38},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 178},
  [240] = {.lex_state = 38},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 185},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 178},
  [245] = {.lex_state = 177},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 178},
  [248] = {.lex_state = 177},
  [249] = {.lex_state = 177},
  [250] = {.lex_state = 178},
  [251] = {.lex_state = 178},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 178},
  [254] = {.lex_state = 183},
  [255] = {.lex_state = 183},
  [256] = {.lex_state = 201},
  [257] = {.lex_state = 178},
  [258] = {.lex_state = 201},
  [259] = {.lex_state = 178},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 177},
  [262] = {.lex_state = 300},
  [263] = {.lex_state = 178},
  [264] = {.lex_state = 300},
  [265] = {.lex_state = 178},
  [266] = {.lex_state = 300},
  [267] = {.lex_state = 177},
  [268] = {.lex_state = 36},
  [269] = {.lex_state = 300},
  [270] = {.lex_state = 300},
  [271] = {.lex_state = 180},
  [272] = {.lex_state = 300},
  [273] = {.lex_state = 300},
  [274] = {.lex_state = 178},
  [275] = {.lex_state = 300},
  [276] = {.lex_state = 178},
  [277] = {.lex_state = 178},
  [278] = {.lex_state = 178},
  [279] = {.lex_state = 178},
  [280] = {.lex_state = 178},
  [281] = {.lex_state = 178},
  [282] = {.lex_state = 178},
  [283] = {.lex_state = 177},
  [284] = {.lex_state = 178},
  [285] = {.lex_state = 177},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 178},
  [288] = {.lex_state = 177},
  [289] = {.lex_state = 178},
  [290] = {.lex_state = 463},
  [291] = {.lex_state = 178},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 178},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 178},
  [297] = {.lex_state = 36},
  [298] = {.lex_state = 178},
  [299] = {.lex_state = 178},
  [300] = {.lex_state = 178},
  [301] = {.lex_state = 178},
  [302] = {.lex_state = 177},
  [303] = {.lex_state = 36},
  [304] = {.lex_state = 300},
  [305] = {.lex_state = 300},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 178},
  [308] = {.lex_state = 300},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 178},
  [312] = {.lex_state = 178},
  [313] = {.lex_state = 38},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 178},
  [316] = {.lex_state = 178},
  [317] = {.lex_state = 178},
  [318] = {.lex_state = 178},
  [319] = {.lex_state = 177},
  [320] = {.lex_state = 178},
  [321] = {.lex_state = 300},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 300},
  [324] = {.lex_state = 180},
  [325] = {.lex_state = 300},
  [326] = {.lex_state = 178},
  [327] = {.lex_state = 177},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 178},
  [330] = {.lex_state = 177},
  [331] = {.lex_state = 177},
  [332] = {.lex_state = 178},
  [333] = {.lex_state = 178},
  [334] = {.lex_state = 38},
  [335] = {.lex_state = 300},
  [336] = {.lex_state = 177},
  [337] = {.lex_state = 36},
  [338] = {.lex_state = 300},
  [339] = {.lex_state = 300},
  [340] = {.lex_state = 178},
  [341] = {.lex_state = 300},
  [342] = {.lex_state = 178},
  [343] = {.lex_state = 178},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 180},
  [346] = {.lex_state = 178},
  [347] = {.lex_state = 178},
  [348] = {.lex_state = 300},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 300},
  [351] = {.lex_state = 36},
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
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [11] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [12] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [13] = {
    [sym__common] = STATE(64),
    [sym__math_mode_common] = STATE(64),
    [sym__math_mode] = STATE(64),
    [sym_math_mode] = STATE(67),
    [sym_parameter] = STATE(64),
    [sym_math_env] = STATE(64),
    [sym_tag] = STATE(64),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(64),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(64),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(64),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(64),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(64),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(64),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [14] = {
    [sym_verbatim_end] = STATE(69),
    [sym_verbatim_text] = STATE(70),
    [sym_end_token] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(73),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
    [sym__end_of_line] = ACTIONS(89),
  },
  [15] = {
    [sym__common] = STATE(77),
    [sym__text_mode_common] = STATE(77),
    [sym_inline_verbatim] = STATE(77),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(77),
    [sym_text_mode_at_region] = STATE(77),
    [sym_parameter] = STATE(77),
    [sym_text_env] = STATE(77),
    [sym__display_math] = STATE(77),
    [sym_tex_display_math] = STATE(77),
    [sym_latex_display_math] = STATE(77),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(77),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(77),
    [sym_tex_inline_math] = STATE(77),
    [sym_latex_inline_math] = STATE(77),
    [sym_inline_math_env] = STATE(77),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(77),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(77),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(75),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(77),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(77),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(77),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(77),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(77),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(77),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(77),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(77),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(77),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(77),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(77),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(77),
    [sym_opt_text_group] = STATE(77),
    [sym_token] = STATE(77),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(77),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(79),
    [sym_inline_math_env_group] = STATE(80),
    [sym_verbatim_env_group] = STATE(81),
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [17] = {
    [sym_simple_text_group] = STATE(84),
    [sym_opt_text_group] = STATE(85),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [18] = {
    [sym_simple_text_group] = STATE(87),
    [sym_opt_text_group] = STATE(88),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [19] = {
    [sym_text_group] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(90),
    [sym_opt_text_group] = STATE(91),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(99),
    [sym_end_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [22] = {
    [sym_escaped] = STATE(93),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
  },
  [23] = {
    [sym_text_group] = STATE(94),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(95),
    [sym_opt_text_group] = STATE(96),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(97),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(98),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(99),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [28] = {
    [sym__common] = STATE(120),
    [sym__text_mode_common] = STATE(120),
    [sym_inline_verbatim] = STATE(120),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(120),
    [sym_text_mode_at] = STATE(103),
    [sym_parameter] = STATE(120),
    [sym_text_env_at] = STATE(120),
    [sym__display_math_at] = STATE(120),
    [sym_tex_display_math_at] = STATE(120),
    [sym_latex_display_math_at] = STATE(120),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(120),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(120),
    [sym_tex_inline_math_at] = STATE(120),
    [sym_latex_inline_math_at] = STATE(120),
    [sym_inline_math_env_at] = STATE(120),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(120),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(120),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(120),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(120),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(120),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(120),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(120),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(120),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(120),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(120),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(120),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(120),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(120),
    [sym_texttt_token] = STATE(116),
    [sym_makeatother] = STATE(117),
    [sym_makeatother_token] = STATE(118),
    [sym_text_group_at] = STATE(120),
    [sym_opt_text_group_at] = STATE(120),
    [sym_token_at] = STATE(120),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(120),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(111),
    [sym_math_shift] = ACTIONS(111),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(111),
    [sym_subscript] = ACTIONS(111),
    [sym_active_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [30] = {
    [sym__common] = STATE(123),
    [sym__text_mode_common] = STATE(123),
    [sym_inline_verbatim] = STATE(123),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(123),
    [sym_text_mode_at_region] = STATE(123),
    [sym_parameter] = STATE(123),
    [sym_text_env] = STATE(123),
    [sym__display_math] = STATE(123),
    [sym_tex_display_math] = STATE(123),
    [sym_latex_display_math] = STATE(123),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(123),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(123),
    [sym_tex_inline_math] = STATE(123),
    [sym_latex_inline_math] = STATE(123),
    [sym_inline_math_env] = STATE(123),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(123),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(123),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(123),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(123),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(123),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(123),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(123),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(123),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(123),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(123),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(123),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(123),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(123),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(123),
    [sym_opt_text_group] = STATE(123),
    [sym_token] = STATE(123),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(122),
    [aux_sym_text_mode_repeat1] = STATE(123),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
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
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(126),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
  },
  [33] = {
    [sym_verb_delim] = ACTIONS(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(127),
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
    [sym_text] = ACTIONS(131),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(135),
    [sym_begin_group] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(135),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(135),
    [sym_active_char] = ACTIONS(135),
    [sym_text] = ACTIONS(137),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_end_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_text] = ACTIONS(139),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(143),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(147),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(151),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(155),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(159),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_end_group] = ACTIONS(163),
    [sym_math_shift] = ACTIONS(163),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_text] = ACTIONS(167),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(169),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(173),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(177),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(181),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(183),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(185),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(187),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(189),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(193),
    [sym_begin_group] = ACTIONS(193),
    [sym_math_shift] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_text] = ACTIONS(195),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym__whitespace] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(197),
    [sym_end_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(197),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_text] = ACTIONS(201),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_end_group] = ACTIONS(203),
    [sym_math_shift] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [52] = {
    [sym__common] = STATE(144),
    [sym__text_mode_common] = STATE(144),
    [sym_inline_verbatim] = STATE(144),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(144),
    [sym_text_mode_at_region] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_text_env] = STATE(144),
    [sym__display_math] = STATE(144),
    [sym_tex_display_math] = STATE(144),
    [sym_latex_display_math] = STATE(144),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(144),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(144),
    [sym_tex_inline_math] = STATE(144),
    [sym_latex_inline_math] = STATE(144),
    [sym_inline_math_env] = STATE(144),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(144),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(144),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(144),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(144),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(144),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(144),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(144),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(144),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(144),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(144),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(144),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(144),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(144),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(144),
    [sym_opt_text_group] = STATE(144),
    [sym_token] = STATE(144),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(144),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(205),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
  },
  [53] = {
    [anon_sym_tag] = ACTIONS(209),
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
    [sym__common] = STATE(147),
    [sym__math_mode_common] = STATE(147),
    [sym__math_mode] = STATE(147),
    [sym_parameter] = STATE(147),
    [sym_math_env] = STATE(147),
    [sym_tag] = STATE(147),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(147),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(147),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(147),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(147),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(147),
    [sym_opt_math_group] = STATE(147),
    [sym_token] = STATE(147),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(147),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(213),
  },
  [55] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(148),
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
    [sym_math_shift] = ACTIONS(215),
  },
  [57] = {
    [sym_math_text_group] = STATE(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(217),
  },
  [58] = {
    [sym__common] = STATE(154),
    [sym__math_mode_common] = STATE(154),
    [sym__math_mode] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_math_env] = STATE(154),
    [sym_tag] = STATE(154),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(154),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(153),
    [sym_end_token] = STATE(76),
    [sym_include] = STATE(154),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(154),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(154),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(154),
    [sym_opt_math_group] = STATE(154),
    [sym_token] = STATE(154),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(154),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [sym_text] = ACTIONS(221),
  },
  [59] = {
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [60] = {
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
    [sym_end_opt] = STATE(155),
    [aux_sym_math_mode_repeat1] = STATE(156),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [61] = {
    [sym__common] = STATE(157),
    [sym__math_mode_common] = STATE(157),
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_env] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(157),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(157),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(157),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(157),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(157),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [62] = {
    [sym_verb_body] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [63] = {
    [sym_end_display_math] = STATE(160),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
  },
  [64] = {
    [sym__common] = STATE(161),
    [sym__math_mode_common] = STATE(161),
    [sym__math_mode] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_math_env] = STATE(161),
    [sym_tag] = STATE(161),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(161),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(161),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(161),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(161),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(161),
    [sym_opt_math_group] = STATE(161),
    [sym_token] = STATE(161),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(161),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_text] = ACTIONS(233),
  },
  [65] = {
    [sym_end_inline_math] = STATE(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(235),
  },
  [66] = {
    [sym_display_math_end] = STATE(164),
    [sym_end_token] = STATE(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [67] = {
    [sym_inline_math_end] = STATE(166),
    [sym_end_token] = STATE(167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(237),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [69] = {
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
  [70] = {
    [sym_verbatim_end] = STATE(169),
    [sym_end_token] = STATE(71),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [71] = {
    [sym_verbatim_env_group] = STATE(171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [72] = {
    [aux_sym_verbatim_text_repeat1] = STATE(173),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(245),
  },
  [73] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(174),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym__end_of_line] = ACTIONS(249),
  },
  [74] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(251),
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
  [75] = {
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
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(253),
    [sym_active_char] = ACTIONS(253),
    [sym_text] = ACTIONS(253),
  },
  [76] = {
    [sym_simple_text_group] = STATE(175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [77] = {
    [sym__common] = STATE(177),
    [sym__text_mode_common] = STATE(177),
    [sym_inline_verbatim] = STATE(177),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(177),
    [sym_text_mode_at_region] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_text_env] = STATE(177),
    [sym__display_math] = STATE(177),
    [sym_tex_display_math] = STATE(177),
    [sym_latex_display_math] = STATE(177),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(177),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(177),
    [sym_tex_inline_math] = STATE(177),
    [sym_latex_inline_math] = STATE(177),
    [sym_inline_math_env] = STATE(177),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(177),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(176),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(177),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(177),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(177),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(177),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(177),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(177),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(177),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(177),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(177),
    [sym_opt_text_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(255),
    [sym_text] = ACTIONS(255),
  },
  [78] = {
    [sym_display_math_env_name] = ACTIONS(257),
    [sym_inline_math_env_name] = ACTIONS(259),
    [sym_verbatim_env_name] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(263),
  },
  [79] = {
    [sym_text_group] = STATE(184),
    [sym_opt_text_group] = STATE(185),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(267),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [81] = {
    [sym_text_group] = STATE(187),
    [sym_opt_text_group] = STATE(188),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(271),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(273),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [83] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(275),
  },
  [84] = {
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
  [85] = {
    [sym_simple_text_group] = STATE(190),
    [sym__whitespace] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [86] = {
    [sym__common] = STATE(193),
    [sym__text_mode_common] = STATE(193),
    [sym_inline_verbatim] = STATE(193),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(193),
    [sym_text_mode_at_region] = STATE(193),
    [sym_parameter] = STATE(193),
    [sym_text_env] = STATE(193),
    [sym__display_math] = STATE(193),
    [sym_tex_display_math] = STATE(193),
    [sym_latex_display_math] = STATE(193),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(193),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(193),
    [sym_tex_inline_math] = STATE(193),
    [sym_latex_inline_math] = STATE(193),
    [sym_inline_math_env] = STATE(193),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(193),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(193),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(193),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(193),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(193),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(193),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(193),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(193),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(193),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(193),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(193),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(193),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(193),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(193),
    [sym_opt_text_group] = STATE(193),
    [sym_token] = STATE(193),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(192),
    [aux_sym_text_mode_repeat1] = STATE(193),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(281),
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
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(285),
    [sym_end_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(285),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(285),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(285),
    [sym_active_char] = ACTIONS(285),
    [sym_text] = ACTIONS(285),
  },
  [88] = {
    [sym_simple_text_group] = STATE(195),
    [sym__whitespace] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [89] = {
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
  [90] = {
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
  [91] = {
    [sym_text_group] = STATE(197),
    [sym__whitespace] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [92] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(299),
    [sym_begin_group] = ACTIONS(299),
    [sym_end_group] = ACTIONS(299),
    [sym_math_shift] = ACTIONS(299),
    [sym_alignment_tab] = ACTIONS(299),
    [sym_parameter_char] = ACTIONS(299),
    [sym_superscript] = ACTIONS(299),
    [sym_subscript] = ACTIONS(299),
    [sym_active_char] = ACTIONS(299),
    [sym_text] = ACTIONS(299),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(301),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [sym_active_char] = ACTIONS(301),
    [sym_text] = ACTIONS(301),
  },
  [96] = {
    [sym_text_group] = STATE(201),
    [sym__whitespace] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [97] = {
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
  [98] = {
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
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_end_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [100] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
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
    [anon_sym_makeatother] = ACTIONS(311),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(313),
  },
  [101] = {
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
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(206),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(206),
    [sym_tex_inline_math_at] = STATE(206),
    [sym_latex_inline_math_at] = STATE(206),
    [sym_inline_math_env_at] = STATE(206),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(206),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(206),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(206),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(206),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(206),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(206),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(206),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(206),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(206),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(206),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(206),
    [sym_opt_text_group_at] = STATE(206),
    [sym_token_at] = STATE(206),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(206),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [102] = {
    [sym__common] = STATE(214),
    [sym__math_mode_common] = STATE(214),
    [sym__math_mode_at] = STATE(214),
    [sym_math_mode_at] = STATE(210),
    [sym_parameter] = STATE(214),
    [sym_math_env_at] = STATE(214),
    [sym_tag_at] = STATE(214),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(214),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(214),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(214),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(214),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(214),
    [sym_opt_math_group_at] = STATE(214),
    [sym_token_at] = STATE(214),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(214),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [103] = {
    [sym_makeatother] = STATE(216),
    [sym_makeatother_token] = STATE(118),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(329),
  },
  [104] = {
    [sym__common] = STATE(218),
    [sym__math_mode_common] = STATE(218),
    [sym__math_mode_at] = STATE(218),
    [sym_math_mode_at] = STATE(217),
    [sym_parameter] = STATE(218),
    [sym_math_env_at] = STATE(218),
    [sym_tag_at] = STATE(218),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(218),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(218),
    [sym_opt_math_group_at] = STATE(218),
    [sym_token_at] = STATE(218),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [105] = {
    [sym__common] = STATE(218),
    [sym__math_mode_common] = STATE(218),
    [sym__math_mode_at] = STATE(218),
    [sym_math_mode_at] = STATE(219),
    [sym_parameter] = STATE(218),
    [sym_math_env_at] = STATE(218),
    [sym_tag_at] = STATE(218),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(218),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(218),
    [sym_opt_math_group_at] = STATE(218),
    [sym_token_at] = STATE(218),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [106] = {
    [sym__common] = STATE(218),
    [sym__math_mode_common] = STATE(218),
    [sym__math_mode_at] = STATE(218),
    [sym_math_mode_at] = STATE(220),
    [sym_parameter] = STATE(218),
    [sym_math_env_at] = STATE(218),
    [sym_tag_at] = STATE(218),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(218),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(218),
    [sym_opt_math_group_at] = STATE(218),
    [sym_token_at] = STATE(218),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [107] = {
    [sym__common] = STATE(218),
    [sym__math_mode_common] = STATE(218),
    [sym__math_mode_at] = STATE(218),
    [sym_math_mode_at] = STATE(221),
    [sym_parameter] = STATE(218),
    [sym_math_env_at] = STATE(218),
    [sym_tag_at] = STATE(218),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(218),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(218),
    [sym_opt_math_group_at] = STATE(218),
    [sym_token_at] = STATE(218),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [108] = {
    [sym__common] = STATE(224),
    [sym__text_mode_common] = STATE(224),
    [sym_inline_verbatim] = STATE(224),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(224),
    [sym_parameter] = STATE(224),
    [sym_text_env_at] = STATE(224),
    [sym__display_math_at] = STATE(224),
    [sym_tex_display_math_at] = STATE(224),
    [sym_latex_display_math_at] = STATE(224),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(224),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(224),
    [sym_tex_inline_math_at] = STATE(224),
    [sym_latex_inline_math_at] = STATE(224),
    [sym_inline_math_env_at] = STATE(224),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(224),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(224),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(223),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(224),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(224),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(224),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(224),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(224),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(224),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(224),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(224),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(224),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(224),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(224),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(224),
    [sym_opt_text_group_at] = STATE(224),
    [sym_token_at] = STATE(224),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(224),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(335),
    [sym_text] = ACTIONS(335),
  },
  [109] = {
    [sym_display_math_env_group] = STATE(225),
    [sym_inline_math_env_group] = STATE(80),
    [sym_verbatim_env_group] = STATE(81),
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [110] = {
    [sym_text_group_at] = STATE(226),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [111] = {
    [sym_text_group_at] = STATE(227),
    [sym_opt_text_group_at] = STATE(228),
    [sym_begin_opt] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [112] = {
    [sym_text_group_at] = STATE(230),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [113] = {
    [sym_text_group_at] = STATE(231),
    [sym_opt_text_group_at] = STATE(232),
    [sym_begin_opt] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [114] = {
    [sym_text_group_at] = STATE(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [115] = {
    [sym_text_group_at] = STATE(234),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [116] = {
    [sym_text_group_at] = STATE(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(337),
    [sym_begin_group] = ACTIONS(337),
    [sym_end_group] = ACTIONS(337),
    [sym_math_shift] = ACTIONS(337),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(337),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(339),
    [sym_begin_group] = ACTIONS(339),
    [sym_end_group] = ACTIONS(339),
    [sym_math_shift] = ACTIONS(339),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [119] = {
    [sym__common] = STATE(237),
    [sym__text_mode_common] = STATE(237),
    [sym_inline_verbatim] = STATE(237),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_text_env_at] = STATE(237),
    [sym__display_math_at] = STATE(237),
    [sym_tex_display_math_at] = STATE(237),
    [sym_latex_display_math_at] = STATE(237),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(237),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(237),
    [sym_tex_inline_math_at] = STATE(237),
    [sym_latex_inline_math_at] = STATE(237),
    [sym_inline_math_env_at] = STATE(237),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(237),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(237),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(237),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(237),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(237),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(237),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(237),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(237),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(237),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(237),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(237),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(237),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(237),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(237),
    [sym_opt_text_group_at] = STATE(237),
    [sym_token_at] = STATE(237),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(236),
    [aux_sym_text_mode_at_repeat1] = STATE(237),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [120] = {
    [sym__common] = STATE(238),
    [sym__text_mode_common] = STATE(238),
    [sym_inline_verbatim] = STATE(238),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym_text_env_at] = STATE(238),
    [sym__display_math_at] = STATE(238),
    [sym_tex_display_math_at] = STATE(238),
    [sym_latex_display_math_at] = STATE(238),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(238),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(238),
    [sym_tex_inline_math_at] = STATE(238),
    [sym_latex_inline_math_at] = STATE(238),
    [sym_inline_math_env_at] = STATE(238),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(238),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(238),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(238),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(238),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(238),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(238),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(238),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(238),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(238),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(238),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(238),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(238),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(238),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(238),
    [sym_opt_text_group_at] = STATE(238),
    [sym_token_at] = STATE(238),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(238),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_end_group] = ACTIONS(347),
    [sym_math_shift] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_end_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_text] = ACTIONS(349),
  },
  [123] = {
    [sym__common] = STATE(240),
    [sym__text_mode_common] = STATE(240),
    [sym_inline_verbatim] = STATE(240),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(240),
    [sym_text_mode_at_region] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_text_env] = STATE(240),
    [sym__display_math] = STATE(240),
    [sym_tex_display_math] = STATE(240),
    [sym_latex_display_math] = STATE(240),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(240),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(240),
    [sym_tex_inline_math] = STATE(240),
    [sym_latex_inline_math] = STATE(240),
    [sym_inline_math_env] = STATE(240),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(240),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(240),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(240),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(240),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(240),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(240),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(240),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(240),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(240),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(240),
    [sym_opt_text_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(239),
    [aux_sym_text_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
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
    [aux_sym_text_mode_repeat1] = STATE(124),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(370),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(376),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(376),
    [sym_begin_group] = ACTIONS(376),
    [sym_end_group] = ACTIONS(376),
    [sym_math_shift] = ACTIONS(376),
    [sym_alignment_tab] = ACTIONS(376),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(376),
    [sym_subscript] = ACTIONS(376),
    [sym_active_char] = ACTIONS(376),
    [sym_text] = ACTIONS(376),
  },
  [126] = {
    [aux_sym_parameter_repeat1] = STATE(126),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(378),
    [sym_number] = ACTIONS(381),
  },
  [127] = {
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [128] = {
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(385),
    [sym_begin_group] = ACTIONS(385),
    [sym_alignment_tab] = ACTIONS(385),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(385),
    [sym_subscript] = ACTIONS(385),
    [sym_active_char] = ACTIONS(385),
    [sym_text] = ACTIONS(385),
  },
  [129] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(387),
  },
  [130] = {
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(389),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [132] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(393),
  },
  [133] = {
    [sym__whitespace] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(397),
  },
  [134] = {
    [sym__whitespace] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(397),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [136] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(403),
  },
  [137] = {
    [anon_sym_LBRACK] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(405),
  },
  [138] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(407),
  },
  [139] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(409),
  },
  [140] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(411),
  },
  [141] = {
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_math_shift] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [142] = {
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
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(417),
    [sym_end_group] = ACTIONS(417),
    [sym_math_shift] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(417),
    [sym_superscript] = ACTIONS(417),
    [sym_subscript] = ACTIONS(417),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [144] = {
    [sym__common] = STATE(144),
    [sym__text_mode_common] = STATE(144),
    [sym_inline_verbatim] = STATE(144),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(144),
    [sym_text_mode_at_region] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_text_env] = STATE(144),
    [sym__display_math] = STATE(144),
    [sym_tex_display_math] = STATE(144),
    [sym_latex_display_math] = STATE(144),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(144),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(144),
    [sym_tex_inline_math] = STATE(144),
    [sym_latex_inline_math] = STATE(144),
    [sym_inline_math_env] = STATE(144),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(144),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(144),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(144),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(144),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(144),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(144),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(144),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(144),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(144),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(144),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(144),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(144),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(144),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(144),
    [sym_opt_text_group] = STATE(144),
    [sym_token] = STATE(144),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(144),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_end_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(370),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [145] = {
    [sym__whitespace] = ACTIONS(422),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(424),
  },
  [146] = {
    [anon_sym_LBRACK] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(426),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(426),
    [sym_begin_group] = ACTIONS(426),
    [sym_end_group] = ACTIONS(426),
    [sym_math_shift] = ACTIONS(426),
    [sym_alignment_tab] = ACTIONS(426),
    [sym_parameter_char] = ACTIONS(426),
    [sym_superscript] = ACTIONS(426),
    [sym_subscript] = ACTIONS(426),
    [sym_active_char] = ACTIONS(426),
    [sym_text] = ACTIONS(426),
  },
  [147] = {
    [sym__common] = STATE(245),
    [sym__math_mode_common] = STATE(245),
    [sym__math_mode] = STATE(245),
    [sym_parameter] = STATE(245),
    [sym_math_env] = STATE(245),
    [sym_tag] = STATE(245),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(245),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(245),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(245),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(245),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(245),
    [sym_opt_math_group] = STATE(245),
    [sym_token] = STATE(245),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(245),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(428),
    [sym_alignment_tab] = ACTIONS(430),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(430),
    [sym_subscript] = ACTIONS(430),
    [sym_active_char] = ACTIONS(430),
    [sym_text] = ACTIONS(430),
  },
  [148] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(432),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(434),
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
  [150] = {
    [sym__common] = STATE(249),
    [sym__text_mode_common] = STATE(249),
    [sym_inline_verbatim] = STATE(249),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(249),
    [sym_text_mode] = STATE(248),
    [sym_text_mode_at_region] = STATE(249),
    [sym_parameter] = STATE(249),
    [sym_text_env] = STATE(249),
    [sym__display_math] = STATE(249),
    [sym_tex_display_math] = STATE(249),
    [sym_latex_display_math] = STATE(249),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(249),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(249),
    [sym_tex_inline_math] = STATE(249),
    [sym_latex_inline_math] = STATE(249),
    [sym_inline_math_env] = STATE(249),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(249),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(249),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(249),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(249),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(249),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(249),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(249),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(249),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(249),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(249),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(249),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(249),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(249),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(249),
    [sym_opt_text_group] = STATE(249),
    [sym_token] = STATE(249),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(249),
    [aux_sym_parameter_repeat1] = STATE(32),
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
  [151] = {
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(440),
    [sym_begin_group] = ACTIONS(440),
    [sym_end_group] = ACTIONS(440),
    [sym_math_shift] = ACTIONS(440),
    [sym_alignment_tab] = ACTIONS(440),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(440),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(440),
    [sym_text] = ACTIONS(440),
  },
  [152] = {
    [anon_sym_tag] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(251),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [153] = {
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
  [154] = {
    [sym__common] = STATE(161),
    [sym__math_mode_common] = STATE(161),
    [sym__math_mode] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_math_env] = STATE(161),
    [sym_tag] = STATE(161),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(161),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(250),
    [sym_end_token] = STATE(76),
    [sym_include] = STATE(161),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(161),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(161),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(161),
    [sym_opt_math_group] = STATE(161),
    [sym_token] = STATE(161),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(161),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_text] = ACTIONS(233),
  },
  [155] = {
    [anon_sym_LBRACK] = ACTIONS(444),
    [anon_sym_RBRACK] = ACTIONS(444),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(444),
    [sym_begin_group] = ACTIONS(444),
    [sym_end_group] = ACTIONS(444),
    [sym_math_shift] = ACTIONS(444),
    [sym_alignment_tab] = ACTIONS(444),
    [sym_parameter_char] = ACTIONS(444),
    [sym_superscript] = ACTIONS(444),
    [sym_subscript] = ACTIONS(444),
    [sym_active_char] = ACTIONS(444),
    [sym_text] = ACTIONS(444),
  },
  [156] = {
    [sym__common] = STATE(252),
    [sym__math_mode_common] = STATE(252),
    [sym__math_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_math_env] = STATE(252),
    [sym_tag] = STATE(252),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(252),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(252),
    [sym_opt_math_group] = STATE(252),
    [sym_token] = STATE(252),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(251),
    [aux_sym_math_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_text] = ACTIONS(446),
  },
  [157] = {
    [sym__common] = STATE(157),
    [sym__math_mode_common] = STATE(157),
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_env] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(157),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(157),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(157),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(157),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(157),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(454),
    [sym_math_shift] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(459),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(459),
    [sym_subscript] = ACTIONS(459),
    [sym_active_char] = ACTIONS(459),
    [sym_text] = ACTIONS(459),
  },
  [158] = {
    [sym_verb_delim] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [159] = {
    [anon_sym_RBRACK] = ACTIONS(467),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(469),
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
  [161] = {
    [sym__common] = STATE(161),
    [sym__math_mode_common] = STATE(161),
    [sym__math_mode] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_math_env] = STATE(161),
    [sym_tag] = STATE(161),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(161),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(161),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(161),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(161),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(161),
    [sym_opt_math_group] = STATE(161),
    [sym_token] = STATE(161),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(161),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(454),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(471),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(471),
    [sym_text] = ACTIONS(471),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [163] = {
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
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(478),
    [sym_begin_group] = ACTIONS(478),
    [sym_end_group] = ACTIONS(478),
    [sym_math_shift] = ACTIONS(478),
    [sym_alignment_tab] = ACTIONS(478),
    [sym_parameter_char] = ACTIONS(478),
    [sym_superscript] = ACTIONS(478),
    [sym_subscript] = ACTIONS(478),
    [sym_active_char] = ACTIONS(478),
    [sym_text] = ACTIONS(478),
  },
  [165] = {
    [sym_display_math_env_group] = STATE(257),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(480),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(482),
    [sym_begin_group] = ACTIONS(482),
    [sym_end_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(482),
    [sym_alignment_tab] = ACTIONS(482),
    [sym_parameter_char] = ACTIONS(482),
    [sym_superscript] = ACTIONS(482),
    [sym_subscript] = ACTIONS(482),
    [sym_active_char] = ACTIONS(482),
    [sym_text] = ACTIONS(482),
  },
  [167] = {
    [sym_inline_math_env_group] = STATE(259),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(484),
  },
  [168] = {
    [sym__whitespace] = ACTIONS(486),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(488),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(490),
    [sym_begin_group] = ACTIONS(490),
    [sym_end_group] = ACTIONS(490),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(490),
    [sym_subscript] = ACTIONS(490),
    [sym_active_char] = ACTIONS(490),
    [sym_text] = ACTIONS(490),
  },
  [170] = {
    [sym_verbatim_env_name] = ACTIONS(492),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(494),
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
  [172] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(498),
    [sym__end_of_line] = ACTIONS(498),
  },
  [173] = {
    [aux_sym_verbatim_text_repeat1] = STATE(173),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(500),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(503),
  },
  [174] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(174),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(505),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(498),
    [sym__end_of_line] = ACTIONS(508),
  },
  [175] = {
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
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_end_group] = ACTIONS(513),
    [sym_math_shift] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [177] = {
    [sym__common] = STATE(177),
    [sym__text_mode_common] = STATE(177),
    [sym_inline_verbatim] = STATE(177),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(177),
    [sym_text_mode_at_region] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_text_env] = STATE(177),
    [sym__display_math] = STATE(177),
    [sym_tex_display_math] = STATE(177),
    [sym_latex_display_math] = STATE(177),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(177),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(177),
    [sym_tex_inline_math] = STATE(177),
    [sym_latex_inline_math] = STATE(177),
    [sym_inline_math_env] = STATE(177),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(177),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(177),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(177),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(177),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(177),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(177),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(177),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(177),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(177),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(177),
    [sym_opt_text_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(370),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [178] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(518),
  },
  [179] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(520),
  },
  [180] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(522),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(524),
  },
  [182] = {
    [sym__common] = STATE(267),
    [sym__text_mode_common] = STATE(267),
    [sym_inline_verbatim] = STATE(267),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(267),
    [sym_text_mode_at_region] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_text_env] = STATE(267),
    [sym__display_math] = STATE(267),
    [sym_tex_display_math] = STATE(267),
    [sym_latex_display_math] = STATE(267),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(267),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(267),
    [sym_tex_inline_math] = STATE(267),
    [sym_latex_inline_math] = STATE(267),
    [sym_inline_math_env] = STATE(267),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(267),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(267),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(267),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(267),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(267),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(267),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(267),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(267),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(267),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(267),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(267),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(267),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(267),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(267),
    [sym_opt_text_group] = STATE(267),
    [sym_token] = STATE(267),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(267),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(526),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(528),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(528),
    [sym_text] = ACTIONS(528),
  },
  [183] = {
    [anon_sym_LBRACK] = ACTIONS(530),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_text] = ACTIONS(530),
  },
  [184] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(532),
  },
  [185] = {
    [sym_text_group] = STATE(270),
    [sym__whitespace] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(532),
  },
  [186] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(538),
    [sym__end_of_line] = ACTIONS(538),
  },
  [187] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(540),
  },
  [188] = {
    [sym_text_group] = STATE(273),
    [sym__whitespace] = ACTIONS(542),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(540),
  },
  [189] = {
    [sym_simple_text_group] = STATE(274),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(544),
    [sym_begin_group] = ACTIONS(544),
    [sym_end_group] = ACTIONS(544),
    [sym_math_shift] = ACTIONS(544),
    [sym_alignment_tab] = ACTIONS(544),
    [sym_parameter_char] = ACTIONS(544),
    [sym_superscript] = ACTIONS(544),
    [sym_subscript] = ACTIONS(544),
    [sym_active_char] = ACTIONS(544),
    [sym_text] = ACTIONS(544),
  },
  [191] = {
    [sym__whitespace] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(347),
    [sym__end_of_line] = ACTIONS(347),
  },
  [192] = {
    [sym__whitespace] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(349),
  },
  [193] = {
    [sym__common] = STATE(240),
    [sym__text_mode_common] = STATE(240),
    [sym_inline_verbatim] = STATE(240),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(240),
    [sym_text_mode_at_region] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_text_env] = STATE(240),
    [sym__display_math] = STATE(240),
    [sym_tex_display_math] = STATE(240),
    [sym_latex_display_math] = STATE(240),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(240),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(240),
    [sym_tex_inline_math] = STATE(240),
    [sym_latex_inline_math] = STATE(240),
    [sym_inline_math_env] = STATE(240),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(240),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(240),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(240),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(240),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(240),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(240),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(240),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(240),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(240),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(240),
    [sym_opt_text_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(275),
    [aux_sym_text_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [194] = {
    [sym_simple_text_group] = STATE(276),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_RBRACK] = ACTIONS(546),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(546),
    [sym_begin_group] = ACTIONS(546),
    [sym_end_group] = ACTIONS(546),
    [sym_math_shift] = ACTIONS(546),
    [sym_alignment_tab] = ACTIONS(546),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(546),
    [sym_active_char] = ACTIONS(546),
    [sym_text] = ACTIONS(546),
  },
  [196] = {
    [sym_text_group] = STATE(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(548),
    [sym_begin_group] = ACTIONS(548),
    [sym_end_group] = ACTIONS(548),
    [sym_math_shift] = ACTIONS(548),
    [sym_alignment_tab] = ACTIONS(548),
    [sym_parameter_char] = ACTIONS(548),
    [sym_superscript] = ACTIONS(548),
    [sym_subscript] = ACTIONS(548),
    [sym_active_char] = ACTIONS(548),
    [sym_text] = ACTIONS(548),
  },
  [198] = {
    [anon_sym_EQ] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(550),
  },
  [200] = {
    [sym_text_group] = STATE(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_end_group] = ACTIONS(552),
    [sym_math_shift] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [sym__whitespace] = ACTIONS(556),
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
    [sym_text] = ACTIONS(558),
  },
  [203] = {
    [sym__whitespace] = ACTIONS(560),
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
    [sym_text] = ACTIONS(564),
  },
  [204] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
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
    [sym__name_at] = ACTIONS(313),
  },
  [205] = {
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
  [206] = {
    [sym__common] = STATE(283),
    [sym__text_mode_common] = STATE(283),
    [sym_inline_verbatim] = STATE(283),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_text_env_at] = STATE(283),
    [sym__display_math_at] = STATE(283),
    [sym_tex_display_math_at] = STATE(283),
    [sym_latex_display_math_at] = STATE(283),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(283),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(283),
    [sym_tex_inline_math_at] = STATE(283),
    [sym_latex_inline_math_at] = STATE(283),
    [sym_inline_math_env_at] = STATE(283),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(283),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(283),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(283),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(283),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(283),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(283),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(283),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(283),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(283),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(283),
    [sym_opt_text_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(283),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(568),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [207] = {
    [anon_sym_tag] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(313),
  },
  [208] = {
    [sym__common] = STATE(285),
    [sym__math_mode_common] = STATE(285),
    [sym__math_mode_at] = STATE(285),
    [sym_parameter] = STATE(285),
    [sym_math_env_at] = STATE(285),
    [sym_tag_at] = STATE(285),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(285),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(285),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(285),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(285),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(285),
    [sym_opt_math_group_at] = STATE(285),
    [sym_token_at] = STATE(285),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(285),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(572),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [209] = {
    [sym__common] = STATE(214),
    [sym__math_mode_common] = STATE(214),
    [sym__math_mode_at] = STATE(214),
    [sym_math_mode_at] = STATE(286),
    [sym_parameter] = STATE(214),
    [sym_math_env_at] = STATE(214),
    [sym_tag_at] = STATE(214),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(214),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(214),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(214),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(214),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(214),
    [sym_opt_math_group_at] = STATE(214),
    [sym_token_at] = STATE(214),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(214),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [210] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(576),
  },
  [211] = {
    [sym_math_text_group_at] = STATE(289),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(578),
  },
  [212] = {
    [sym__common] = STATE(292),
    [sym__math_mode_common] = STATE(292),
    [sym__math_mode_at] = STATE(292),
    [sym_parameter] = STATE(292),
    [sym_math_env_at] = STATE(292),
    [sym_tag_at] = STATE(292),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(292),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(291),
    [sym_end_token] = STATE(76),
    [sym_include_at] = STATE(292),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(292),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(292),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(292),
    [sym_opt_math_group_at] = STATE(292),
    [sym_token_at] = STATE(292),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(292),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_active_char] = ACTIONS(582),
    [sym_text] = ACTIONS(582),
  },
  [213] = {
    [sym__common] = STATE(294),
    [sym__math_mode_common] = STATE(294),
    [sym__math_mode_at] = STATE(294),
    [sym_parameter] = STATE(294),
    [sym_math_env_at] = STATE(294),
    [sym_tag_at] = STATE(294),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(294),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(294),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(294),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(294),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(294),
    [sym_opt_math_group_at] = STATE(294),
    [sym_token_at] = STATE(294),
    [sym_begin_opt] = STATE(213),
    [sym_end_opt] = STATE(293),
    [aux_sym_math_mode_at_repeat1] = STATE(294),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(584),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(584),
    [sym_subscript] = ACTIONS(584),
    [sym_active_char] = ACTIONS(584),
    [sym_text] = ACTIONS(584),
  },
  [214] = {
    [sym__common] = STATE(295),
    [sym__math_mode_common] = STATE(295),
    [sym__math_mode_at] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_math_env_at] = STATE(295),
    [sym_tag_at] = STATE(295),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(295),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(295),
    [sym_opt_math_group_at] = STATE(295),
    [sym_token_at] = STATE(295),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(586),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_text] = ACTIONS(588),
  },
  [215] = {
    [anon_sym_makeatother] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(592),
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
  [217] = {
    [sym_end_display_math] = STATE(296),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
  },
  [218] = {
    [sym__common] = STATE(297),
    [sym__math_mode_common] = STATE(297),
    [sym__math_mode_at] = STATE(297),
    [sym_parameter] = STATE(297),
    [sym_math_env_at] = STATE(297),
    [sym_tag_at] = STATE(297),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(297),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(297),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(297),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(297),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(297),
    [sym_opt_math_group_at] = STATE(297),
    [sym_token_at] = STATE(297),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(297),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(586),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [219] = {
    [sym_end_inline_math] = STATE(298),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(235),
  },
  [220] = {
    [sym_display_math_end] = STATE(299),
    [sym_end_token] = STATE(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [221] = {
    [sym_inline_math_end] = STATE(300),
    [sym_end_token] = STATE(167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [222] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(251),
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
    [sym__name_at] = ACTIONS(313),
  },
  [223] = {
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
  [224] = {
    [sym__common] = STATE(238),
    [sym__text_mode_common] = STATE(238),
    [sym_inline_verbatim] = STATE(238),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym_text_env_at] = STATE(238),
    [sym__display_math_at] = STATE(238),
    [sym_tex_display_math_at] = STATE(238),
    [sym_latex_display_math_at] = STATE(238),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(238),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(238),
    [sym_tex_inline_math_at] = STATE(238),
    [sym_latex_inline_math_at] = STATE(238),
    [sym_inline_math_env_at] = STATE(238),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(238),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(238),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(301),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(238),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(238),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(238),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(238),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(238),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(238),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(238),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(238),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(238),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(238),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(238),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(238),
    [sym_opt_text_group_at] = STATE(238),
    [sym_token_at] = STATE(238),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(238),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [225] = {
    [sym_text_group_at] = STATE(304),
    [sym_opt_text_group_at] = STATE(305),
    [sym_begin_opt] = STATE(229),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(598),
    [sym__end_of_line] = ACTIONS(600),
  },
  [226] = {
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
  [227] = {
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
    [sym_superscript] = ACTIONS(604),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [sym_text] = ACTIONS(604),
  },
  [228] = {
    [sym_text_group_at] = STATE(307),
    [sym__whitespace] = ACTIONS(606),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [229] = {
    [sym__common] = STATE(309),
    [sym__text_mode_common] = STATE(309),
    [sym_inline_verbatim] = STATE(309),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(309),
    [sym_parameter] = STATE(309),
    [sym_text_env_at] = STATE(309),
    [sym__display_math_at] = STATE(309),
    [sym_tex_display_math_at] = STATE(309),
    [sym_latex_display_math_at] = STATE(309),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(309),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(309),
    [sym_tex_inline_math_at] = STATE(309),
    [sym_latex_inline_math_at] = STATE(309),
    [sym_inline_math_env_at] = STATE(309),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(309),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(309),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(309),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(309),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(309),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(309),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(309),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(309),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(309),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(309),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(309),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(309),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(309),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(309),
    [sym_opt_text_group_at] = STATE(309),
    [sym_token_at] = STATE(309),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(308),
    [aux_sym_text_mode_at_repeat1] = STATE(309),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(608),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(608),
    [sym_text] = ACTIONS(608),
  },
  [230] = {
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
  [232] = {
    [sym_text_group_at] = STATE(311),
    [sym__whitespace] = ACTIONS(614),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [233] = {
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
  [234] = {
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(618),
    [sym_begin_group] = ACTIONS(618),
    [sym_end_group] = ACTIONS(618),
    [sym_math_shift] = ACTIONS(618),
    [sym_alignment_tab] = ACTIONS(618),
    [sym_parameter_char] = ACTIONS(618),
    [sym_superscript] = ACTIONS(618),
    [sym_subscript] = ACTIONS(618),
    [sym_active_char] = ACTIONS(618),
    [sym_text] = ACTIONS(618),
  },
  [235] = {
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
  [236] = {
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
  [237] = {
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
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(313),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(313),
    [sym_tex_inline_math_at] = STATE(313),
    [sym_latex_inline_math_at] = STATE(313),
    [sym_inline_math_env_at] = STATE(313),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(313),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(313),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(313),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(313),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(313),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(313),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(313),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(313),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(313),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(313),
    [sym_opt_text_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(312),
    [aux_sym_text_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(624),
    [sym_text] = ACTIONS(624),
  },
  [238] = {
    [sym__common] = STATE(238),
    [sym__text_mode_common] = STATE(238),
    [sym_inline_verbatim] = STATE(238),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(238),
    [sym_parameter] = STATE(238),
    [sym_text_env_at] = STATE(238),
    [sym__display_math_at] = STATE(238),
    [sym_tex_display_math_at] = STATE(238),
    [sym_latex_display_math_at] = STATE(238),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(238),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(238),
    [sym_tex_inline_math_at] = STATE(238),
    [sym_latex_inline_math_at] = STATE(238),
    [sym_inline_math_env_at] = STATE(238),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(238),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(238),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(238),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(238),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(238),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(238),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(238),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(238),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(238),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(238),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(238),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(238),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(238),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(238),
    [sym_opt_text_group_at] = STATE(238),
    [sym_token_at] = STATE(238),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(238),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(638),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(638),
    [sym_text] = ACTIONS(638),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(647),
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
  [240] = {
    [sym__common] = STATE(240),
    [sym__text_mode_common] = STATE(240),
    [sym_inline_verbatim] = STATE(240),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(240),
    [sym_text_mode_at_region] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_text_env] = STATE(240),
    [sym__display_math] = STATE(240),
    [sym_tex_display_math] = STATE(240),
    [sym_latex_display_math] = STATE(240),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(240),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(240),
    [sym_tex_inline_math] = STATE(240),
    [sym_latex_inline_math] = STATE(240),
    [sym_inline_math_env] = STATE(240),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(240),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(240),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(240),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(240),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(240),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(240),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(240),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(240),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(240),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(240),
    [sym_opt_text_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(358),
    [sym_begin_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(364),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(370),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(649),
    [sym_text] = ACTIONS(649),
  },
  [241] = {
    [anon_sym_LBRACK] = ACTIONS(652),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(652),
  },
  [242] = {
    [sym__whitespace] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(652),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(652),
  },
  [243] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(656),
  },
  [244] = {
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
  [245] = {
    [sym__common] = STATE(245),
    [sym__math_mode_common] = STATE(245),
    [sym__math_mode] = STATE(245),
    [sym_parameter] = STATE(245),
    [sym_math_env] = STATE(245),
    [sym_tag] = STATE(245),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(245),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(245),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(245),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(245),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(245),
    [sym_opt_math_group] = STATE(245),
    [sym_token] = STATE(245),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(245),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(454),
    [sym_end_group] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_text] = ACTIONS(660),
  },
  [246] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(663),
  },
  [247] = {
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
  [248] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(667),
  },
  [249] = {
    [sym__common] = STATE(144),
    [sym__text_mode_common] = STATE(144),
    [sym_inline_verbatim] = STATE(144),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(144),
    [sym_text_mode_at_region] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_text_env] = STATE(144),
    [sym__display_math] = STATE(144),
    [sym_tex_display_math] = STATE(144),
    [sym_latex_display_math] = STATE(144),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(144),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(144),
    [sym_tex_inline_math] = STATE(144),
    [sym_latex_inline_math] = STATE(144),
    [sym_inline_math_env] = STATE(144),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(144),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(144),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(144),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(144),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(144),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(144),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(144),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(144),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(144),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(144),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(144),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(144),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(144),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(144),
    [sym_opt_text_group] = STATE(144),
    [sym_token] = STATE(144),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(144),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(669),
    [sym_begin_group] = ACTIONS(669),
    [sym_end_group] = ACTIONS(669),
    [sym_math_shift] = ACTIONS(669),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(669),
    [sym_superscript] = ACTIONS(669),
    [sym_subscript] = ACTIONS(669),
    [sym_active_char] = ACTIONS(669),
    [sym_text] = ACTIONS(669),
  },
  [251] = {
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(671),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(671),
    [sym_begin_group] = ACTIONS(671),
    [sym_end_group] = ACTIONS(671),
    [sym_math_shift] = ACTIONS(671),
    [sym_alignment_tab] = ACTIONS(671),
    [sym_parameter_char] = ACTIONS(671),
    [sym_superscript] = ACTIONS(671),
    [sym_subscript] = ACTIONS(671),
    [sym_active_char] = ACTIONS(671),
    [sym_text] = ACTIONS(671),
  },
  [252] = {
    [sym__common] = STATE(252),
    [sym__math_mode_common] = STATE(252),
    [sym__math_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_math_env] = STATE(252),
    [sym_tag] = STATE(252),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(252),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(252),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(252),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(252),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(252),
    [sym_opt_math_group] = STATE(252),
    [sym_token] = STATE(252),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(252),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(454),
    [sym_alignment_tab] = ACTIONS(673),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(673),
    [sym_subscript] = ACTIONS(673),
    [sym_active_char] = ACTIONS(673),
    [sym_text] = ACTIONS(673),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(676),
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
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [sym__whitespace] = ACTIONS(680),
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
    [sym_superscript] = ACTIONS(678),
    [sym_subscript] = ACTIONS(678),
    [sym_active_char] = ACTIONS(678),
    [sym_text] = ACTIONS(682),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [sym__whitespace] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(684),
    [sym_begin_group] = ACTIONS(684),
    [sym_end_group] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(684),
    [sym_alignment_tab] = ACTIONS(684),
    [sym_parameter_char] = ACTIONS(684),
    [sym_superscript] = ACTIONS(684),
    [sym_subscript] = ACTIONS(684),
    [sym_active_char] = ACTIONS(684),
    [sym_text] = ACTIONS(688),
  },
  [256] = {
    [sym_display_math_env_name] = ACTIONS(690),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_end_group] = ACTIONS(692),
    [sym_math_shift] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_active_char] = ACTIONS(692),
    [sym_text] = ACTIONS(692),
  },
  [258] = {
    [sym_inline_math_env_name] = ACTIONS(694),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(696),
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
    [sym_text] = ACTIONS(696),
  },
  [260] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(698),
  },
  [261] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(700),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(702),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(702),
    [sym__end_of_line] = ACTIONS(702),
  },
  [263] = {
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
  [264] = {
    [anon_sym_LBRACK] = ACTIONS(706),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(706),
    [sym__end_of_line] = ACTIONS(706),
  },
  [265] = {
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
  [266] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(203),
  },
  [267] = {
    [sym__common] = STATE(144),
    [sym__text_mode_common] = STATE(144),
    [sym_inline_verbatim] = STATE(144),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(144),
    [sym_text_mode_at_region] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_text_env] = STATE(144),
    [sym__display_math] = STATE(144),
    [sym_tex_display_math] = STATE(144),
    [sym_latex_display_math] = STATE(144),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(144),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(144),
    [sym_tex_inline_math] = STATE(144),
    [sym_latex_inline_math] = STATE(144),
    [sym_inline_math_env] = STATE(144),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(144),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(144),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(144),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(144),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(144),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(144),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(144),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(144),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(144),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(144),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(144),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(144),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(144),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(144),
    [sym_opt_text_group] = STATE(144),
    [sym_token] = STATE(144),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(144),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(710),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
  },
  [268] = {
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_active_char] = ACTIONS(712),
    [sym_text] = ACTIONS(712),
  },
  [269] = {
    [sym_text_group] = STATE(323),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(714),
  },
  [270] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(714),
  },
  [271] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(718),
    [sym__end_of_line] = ACTIONS(718),
  },
  [272] = {
    [sym_text_group] = STATE(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(265),
    [sym__end_of_line] = ACTIONS(720),
  },
  [273] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(720),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(722),
    [sym_begin_group] = ACTIONS(722),
    [sym_end_group] = ACTIONS(722),
    [sym_math_shift] = ACTIONS(722),
    [sym_alignment_tab] = ACTIONS(722),
    [sym_parameter_char] = ACTIONS(722),
    [sym_superscript] = ACTIONS(722),
    [sym_subscript] = ACTIONS(722),
    [sym_active_char] = ACTIONS(722),
    [sym_text] = ACTIONS(722),
  },
  [275] = {
    [sym__whitespace] = ACTIONS(647),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(647),
    [sym__end_of_line] = ACTIONS(647),
  },
  [276] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_end_group] = ACTIONS(724),
    [sym_math_shift] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(724),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [sym_text] = ACTIONS(724),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(726),
    [anon_sym_LBRACK] = ACTIONS(726),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(726),
    [sym_begin_group] = ACTIONS(726),
    [sym_end_group] = ACTIONS(726),
    [sym_math_shift] = ACTIONS(726),
    [sym_alignment_tab] = ACTIONS(726),
    [sym_parameter_char] = ACTIONS(726),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(726),
    [sym_active_char] = ACTIONS(726),
    [sym_text] = ACTIONS(726),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(728),
    [sym_begin_group] = ACTIONS(728),
    [sym_end_group] = ACTIONS(728),
    [sym_math_shift] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(728),
    [sym_parameter_char] = ACTIONS(728),
    [sym_superscript] = ACTIONS(728),
    [sym_subscript] = ACTIONS(728),
    [sym_active_char] = ACTIONS(728),
    [sym_text] = ACTIONS(728),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(730),
    [sym_begin_group] = ACTIONS(730),
    [sym_end_group] = ACTIONS(730),
    [sym_math_shift] = ACTIONS(730),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(730),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [anon_sym_LBRACK] = ACTIONS(732),
    [anon_sym_RBRACK] = ACTIONS(732),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(732),
    [sym_end_group] = ACTIONS(732),
    [sym_math_shift] = ACTIONS(732),
    [sym_alignment_tab] = ACTIONS(732),
    [sym_parameter_char] = ACTIONS(732),
    [sym_superscript] = ACTIONS(732),
    [sym_subscript] = ACTIONS(732),
    [sym_active_char] = ACTIONS(732),
    [sym_text] = ACTIONS(732),
  },
  [281] = {
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
  [282] = {
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
  [283] = {
    [sym__common] = STATE(283),
    [sym__text_mode_common] = STATE(283),
    [sym_inline_verbatim] = STATE(283),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_text_env_at] = STATE(283),
    [sym__display_math_at] = STATE(283),
    [sym_tex_display_math_at] = STATE(283),
    [sym_latex_display_math_at] = STATE(283),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(283),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(283),
    [sym_tex_inline_math_at] = STATE(283),
    [sym_latex_inline_math_at] = STATE(283),
    [sym_inline_math_env_at] = STATE(283),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(283),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(283),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(283),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(283),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(283),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(283),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(283),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(283),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(283),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(283),
    [sym_opt_text_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(283),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(632),
    [sym_end_group] = ACTIONS(738),
    [sym_math_shift] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(740),
    [sym_text] = ACTIONS(740),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(743),
    [anon_sym_RBRACK] = ACTIONS(743),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(743),
    [sym_begin_group] = ACTIONS(743),
    [sym_end_group] = ACTIONS(743),
    [sym_math_shift] = ACTIONS(743),
    [sym_alignment_tab] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(743),
    [sym_superscript] = ACTIONS(743),
    [sym_subscript] = ACTIONS(743),
    [sym_active_char] = ACTIONS(743),
    [sym_text] = ACTIONS(743),
  },
  [285] = {
    [sym__common] = STATE(327),
    [sym__math_mode_common] = STATE(327),
    [sym__math_mode_at] = STATE(327),
    [sym_parameter] = STATE(327),
    [sym_math_env_at] = STATE(327),
    [sym_tag_at] = STATE(327),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(327),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(327),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(327),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(327),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(327),
    [sym_opt_math_group_at] = STATE(327),
    [sym_token_at] = STATE(327),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(327),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(745),
    [sym_alignment_tab] = ACTIONS(747),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(747),
    [sym_subscript] = ACTIONS(747),
    [sym_active_char] = ACTIONS(747),
    [sym_text] = ACTIONS(747),
  },
  [286] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(749),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_end_group] = ACTIONS(751),
    [sym_math_shift] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [288] = {
    [sym__common] = STATE(331),
    [sym__text_mode_common] = STATE(331),
    [sym_inline_verbatim] = STATE(331),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(331),
    [sym_text_mode_at] = STATE(330),
    [sym_parameter] = STATE(331),
    [sym_text_env_at] = STATE(331),
    [sym__display_math_at] = STATE(331),
    [sym_tex_display_math_at] = STATE(331),
    [sym_latex_display_math_at] = STATE(331),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(331),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(331),
    [sym_tex_inline_math_at] = STATE(331),
    [sym_latex_inline_math_at] = STATE(331),
    [sym_inline_math_env_at] = STATE(331),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(331),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(331),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(331),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(331),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(331),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(331),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(331),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(331),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(331),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(331),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(331),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(331),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(331),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(331),
    [sym_opt_text_group_at] = STATE(331),
    [sym_token_at] = STATE(331),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(331),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(753),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(755),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(755),
    [sym_text] = ACTIONS(755),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_end_group] = ACTIONS(757),
    [sym_math_shift] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_active_char] = ACTIONS(757),
    [sym_text] = ACTIONS(757),
  },
  [290] = {
    [anon_sym_tag] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(251),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(313),
  },
  [291] = {
    [anon_sym_LBRACK] = ACTIONS(759),
    [anon_sym_RBRACK] = ACTIONS(759),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(759),
    [sym_begin_group] = ACTIONS(759),
    [sym_end_group] = ACTIONS(759),
    [sym_math_shift] = ACTIONS(759),
    [sym_alignment_tab] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(759),
    [sym_subscript] = ACTIONS(759),
    [sym_active_char] = ACTIONS(759),
    [sym_text] = ACTIONS(759),
  },
  [292] = {
    [sym__common] = STATE(297),
    [sym__math_mode_common] = STATE(297),
    [sym__math_mode_at] = STATE(297),
    [sym_parameter] = STATE(297),
    [sym_math_env_at] = STATE(297),
    [sym_tag_at] = STATE(297),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(297),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(332),
    [sym_end_token] = STATE(76),
    [sym_include_at] = STATE(297),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(297),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(297),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(297),
    [sym_opt_math_group_at] = STATE(297),
    [sym_token_at] = STATE(297),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(297),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(761),
    [sym_begin_group] = ACTIONS(761),
    [sym_end_group] = ACTIONS(761),
    [sym_math_shift] = ACTIONS(761),
    [sym_alignment_tab] = ACTIONS(761),
    [sym_parameter_char] = ACTIONS(761),
    [sym_superscript] = ACTIONS(761),
    [sym_subscript] = ACTIONS(761),
    [sym_active_char] = ACTIONS(761),
    [sym_text] = ACTIONS(761),
  },
  [294] = {
    [sym__common] = STATE(334),
    [sym__math_mode_common] = STATE(334),
    [sym__math_mode_at] = STATE(334),
    [sym_parameter] = STATE(334),
    [sym_math_env_at] = STATE(334),
    [sym_tag_at] = STATE(334),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(334),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(334),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(334),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(334),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(334),
    [sym_opt_math_group_at] = STATE(334),
    [sym_token_at] = STATE(334),
    [sym_begin_opt] = STATE(213),
    [sym_end_opt] = STATE(333),
    [aux_sym_math_mode_at_repeat1] = STATE(334),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(763),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(763),
    [sym_subscript] = ACTIONS(763),
    [sym_active_char] = ACTIONS(763),
    [sym_text] = ACTIONS(763),
  },
  [295] = {
    [sym__common] = STATE(295),
    [sym__math_mode_common] = STATE(295),
    [sym__math_mode_at] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_math_env_at] = STATE(295),
    [sym_tag_at] = STATE(295),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(295),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(295),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(295),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(295),
    [sym_opt_math_group_at] = STATE(295),
    [sym_token_at] = STATE(295),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(771),
    [sym_math_shift] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(782),
    [sym_begin_group] = ACTIONS(782),
    [sym_end_group] = ACTIONS(782),
    [sym_math_shift] = ACTIONS(782),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(782),
    [sym_subscript] = ACTIONS(782),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [297] = {
    [sym__common] = STATE(297),
    [sym__math_mode_common] = STATE(297),
    [sym__math_mode_at] = STATE(297),
    [sym_parameter] = STATE(297),
    [sym_math_env_at] = STATE(297),
    [sym_tag_at] = STATE(297),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(297),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(297),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(297),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(297),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(297),
    [sym_opt_math_group_at] = STATE(297),
    [sym_token_at] = STATE(297),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(297),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_active_char] = ACTIONS(784),
    [sym_text] = ACTIONS(784),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(787),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(787),
    [sym_begin_group] = ACTIONS(787),
    [sym_end_group] = ACTIONS(787),
    [sym_math_shift] = ACTIONS(787),
    [sym_alignment_tab] = ACTIONS(787),
    [sym_parameter_char] = ACTIONS(787),
    [sym_superscript] = ACTIONS(787),
    [sym_subscript] = ACTIONS(787),
    [sym_active_char] = ACTIONS(787),
    [sym_text] = ACTIONS(787),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(789),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(789),
    [sym_begin_group] = ACTIONS(789),
    [sym_end_group] = ACTIONS(789),
    [sym_math_shift] = ACTIONS(789),
    [sym_alignment_tab] = ACTIONS(789),
    [sym_parameter_char] = ACTIONS(789),
    [sym_superscript] = ACTIONS(789),
    [sym_subscript] = ACTIONS(789),
    [sym_active_char] = ACTIONS(789),
    [sym_text] = ACTIONS(789),
  },
  [300] = {
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
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(793),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(793),
    [sym_begin_group] = ACTIONS(793),
    [sym_end_group] = ACTIONS(793),
    [sym_math_shift] = ACTIONS(793),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(793),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(793),
    [sym_active_char] = ACTIONS(793),
    [sym_text] = ACTIONS(793),
  },
  [302] = {
    [sym__common] = STATE(336),
    [sym__text_mode_common] = STATE(336),
    [sym_inline_verbatim] = STATE(336),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(336),
    [sym_parameter] = STATE(336),
    [sym_text_env_at] = STATE(336),
    [sym__display_math_at] = STATE(336),
    [sym_tex_display_math_at] = STATE(336),
    [sym_latex_display_math_at] = STATE(336),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(336),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(336),
    [sym_tex_inline_math_at] = STATE(336),
    [sym_latex_inline_math_at] = STATE(336),
    [sym_inline_math_env_at] = STATE(336),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(336),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(336),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(336),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(336),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(336),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(336),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(336),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(336),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(336),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(336),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(336),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(336),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(336),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(336),
    [sym_opt_text_group_at] = STATE(336),
    [sym_token_at] = STATE(336),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(336),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(795),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(797),
    [sym_text] = ACTIONS(797),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(799),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(799),
    [sym_begin_group] = ACTIONS(799),
    [sym_alignment_tab] = ACTIONS(799),
    [sym_parameter_char] = ACTIONS(799),
    [sym_superscript] = ACTIONS(799),
    [sym_subscript] = ACTIONS(799),
    [sym_active_char] = ACTIONS(799),
    [sym_text] = ACTIONS(799),
  },
  [304] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(801),
  },
  [305] = {
    [sym_text_group_at] = STATE(339),
    [sym__whitespace] = ACTIONS(803),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(598),
    [sym__end_of_line] = ACTIONS(801),
  },
  [306] = {
    [sym_text_group_at] = STATE(340),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [307] = {
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
  [308] = {
    [sym__whitespace] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(622),
    [sym__end_of_line] = ACTIONS(622),
  },
  [309] = {
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
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(313),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(313),
    [sym_tex_inline_math_at] = STATE(313),
    [sym_latex_inline_math_at] = STATE(313),
    [sym_inline_math_env_at] = STATE(313),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(313),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(313),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(313),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(313),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(313),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(313),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(313),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(313),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(313),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(313),
    [sym_opt_text_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(341),
    [aux_sym_text_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(624),
    [sym_text] = ACTIONS(624),
  },
  [310] = {
    [sym_text_group_at] = STATE(342),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [311] = {
    [anon_sym_LBRACK] = ACTIONS(807),
    [anon_sym_RBRACK] = ACTIONS(807),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(807),
    [sym_begin_group] = ACTIONS(807),
    [sym_end_group] = ACTIONS(807),
    [sym_math_shift] = ACTIONS(807),
    [sym_alignment_tab] = ACTIONS(807),
    [sym_parameter_char] = ACTIONS(807),
    [sym_superscript] = ACTIONS(807),
    [sym_subscript] = ACTIONS(807),
    [sym_active_char] = ACTIONS(807),
    [sym_text] = ACTIONS(807),
  },
  [312] = {
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
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_text] = ACTIONS(809),
  },
  [313] = {
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
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(313),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(313),
    [sym_tex_inline_math_at] = STATE(313),
    [sym_latex_inline_math_at] = STATE(313),
    [sym_inline_math_env_at] = STATE(313),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(313),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(313),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(313),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(313),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(313),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(313),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(313),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(313),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(313),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(313),
    [sym_opt_text_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(644),
    [sym_subscript] = ACTIONS(644),
    [sym_active_char] = ACTIONS(811),
    [sym_text] = ACTIONS(811),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(814),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(814),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(816),
    [sym_begin_group] = ACTIONS(816),
    [sym_end_group] = ACTIONS(816),
    [sym_math_shift] = ACTIONS(816),
    [sym_alignment_tab] = ACTIONS(816),
    [sym_parameter_char] = ACTIONS(816),
    [sym_superscript] = ACTIONS(816),
    [sym_subscript] = ACTIONS(816),
    [sym_active_char] = ACTIONS(816),
    [sym_text] = ACTIONS(816),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(818),
    [sym_begin_group] = ACTIONS(818),
    [sym_end_group] = ACTIONS(818),
    [sym_math_shift] = ACTIONS(818),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(818),
    [sym_superscript] = ACTIONS(818),
    [sym_subscript] = ACTIONS(818),
    [sym_active_char] = ACTIONS(818),
    [sym_text] = ACTIONS(818),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_RBRACK] = ACTIONS(820),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(820),
    [sym_begin_group] = ACTIONS(820),
    [sym_end_group] = ACTIONS(820),
    [sym_math_shift] = ACTIONS(820),
    [sym_alignment_tab] = ACTIONS(820),
    [sym_parameter_char] = ACTIONS(820),
    [sym_superscript] = ACTIONS(820),
    [sym_subscript] = ACTIONS(820),
    [sym_active_char] = ACTIONS(820),
    [sym_text] = ACTIONS(820),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_RBRACK] = ACTIONS(822),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(822),
    [sym_begin_group] = ACTIONS(822),
    [sym_end_group] = ACTIONS(822),
    [sym_math_shift] = ACTIONS(822),
    [sym_alignment_tab] = ACTIONS(822),
    [sym_parameter_char] = ACTIONS(822),
    [sym_superscript] = ACTIONS(822),
    [sym_subscript] = ACTIONS(822),
    [sym_active_char] = ACTIONS(822),
    [sym_text] = ACTIONS(822),
  },
  [319] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(824),
  },
  [320] = {
    [ts_builtin_sym_end] = ACTIONS(706),
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
  [321] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(417),
  },
  [322] = {
    [anon_sym_LBRACK] = ACTIONS(826),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(826),
    [sym_begin_group] = ACTIONS(826),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(826),
    [sym_superscript] = ACTIONS(826),
    [sym_subscript] = ACTIONS(826),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [323] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(828),
  },
  [324] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(832),
    [sym__end_of_line] = ACTIONS(832),
  },
  [325] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(834),
  },
  [326] = {
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
  [327] = {
    [sym__common] = STATE(327),
    [sym__math_mode_common] = STATE(327),
    [sym__math_mode_at] = STATE(327),
    [sym_parameter] = STATE(327),
    [sym_math_env_at] = STATE(327),
    [sym_tag_at] = STATE(327),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(327),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(327),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(327),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(327),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(327),
    [sym_opt_math_group_at] = STATE(327),
    [sym_token_at] = STATE(327),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(327),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(771),
    [sym_end_group] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(838),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(838),
    [sym_subscript] = ACTIONS(838),
    [sym_active_char] = ACTIONS(838),
    [sym_text] = ACTIONS(838),
  },
  [328] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(841),
  },
  [329] = {
    [anon_sym_LBRACK] = ACTIONS(843),
    [anon_sym_RBRACK] = ACTIONS(843),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(843),
    [sym_begin_group] = ACTIONS(843),
    [sym_end_group] = ACTIONS(843),
    [sym_math_shift] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(843),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [sym_text] = ACTIONS(843),
  },
  [330] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(845),
  },
  [331] = {
    [sym__common] = STATE(283),
    [sym__text_mode_common] = STATE(283),
    [sym_inline_verbatim] = STATE(283),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_text_env_at] = STATE(283),
    [sym__display_math_at] = STATE(283),
    [sym_tex_display_math_at] = STATE(283),
    [sym_latex_display_math_at] = STATE(283),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(283),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(283),
    [sym_tex_inline_math_at] = STATE(283),
    [sym_latex_inline_math_at] = STATE(283),
    [sym_inline_math_env_at] = STATE(283),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(283),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(283),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(283),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(283),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(283),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(283),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(283),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(283),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(283),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(283),
    [sym_opt_text_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(283),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [332] = {
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_RBRACK] = ACTIONS(847),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(847),
    [sym_begin_group] = ACTIONS(847),
    [sym_end_group] = ACTIONS(847),
    [sym_math_shift] = ACTIONS(847),
    [sym_alignment_tab] = ACTIONS(847),
    [sym_parameter_char] = ACTIONS(847),
    [sym_superscript] = ACTIONS(847),
    [sym_subscript] = ACTIONS(847),
    [sym_active_char] = ACTIONS(847),
    [sym_text] = ACTIONS(847),
  },
  [333] = {
    [anon_sym_LBRACK] = ACTIONS(849),
    [anon_sym_RBRACK] = ACTIONS(849),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(849),
    [sym_end_group] = ACTIONS(849),
    [sym_math_shift] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(849),
    [sym_subscript] = ACTIONS(849),
    [sym_active_char] = ACTIONS(849),
    [sym_text] = ACTIONS(849),
  },
  [334] = {
    [sym__common] = STATE(334),
    [sym__math_mode_common] = STATE(334),
    [sym__math_mode_at] = STATE(334),
    [sym_parameter] = STATE(334),
    [sym_math_env_at] = STATE(334),
    [sym_tag_at] = STATE(334),
    [sym_tag_token] = STATE(211),
    [sym_escaped] = STATE(334),
    [sym_begin] = STATE(212),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(334),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(334),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(334),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(334),
    [sym_opt_math_group_at] = STATE(334),
    [sym_token_at] = STATE(334),
    [sym_begin_opt] = STATE(213),
    [aux_sym_math_mode_at_repeat1] = STATE(334),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(768),
    [sym_begin_group] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(851),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(851),
    [sym_subscript] = ACTIONS(851),
    [sym_active_char] = ACTIONS(851),
    [sym_text] = ACTIONS(851),
  },
  [335] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(566),
  },
  [336] = {
    [sym__common] = STATE(283),
    [sym__text_mode_common] = STATE(283),
    [sym_inline_verbatim] = STATE(283),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(283),
    [sym_parameter] = STATE(283),
    [sym_text_env_at] = STATE(283),
    [sym__display_math_at] = STATE(283),
    [sym_tex_display_math_at] = STATE(283),
    [sym_latex_display_math_at] = STATE(283),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(283),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(283),
    [sym_tex_inline_math_at] = STATE(283),
    [sym_latex_inline_math_at] = STATE(283),
    [sym_inline_math_env_at] = STATE(283),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(283),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(283),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(283),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(283),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(283),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(283),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(283),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(283),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(283),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(283),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(283),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(283),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(283),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(283),
    [sym_opt_text_group_at] = STATE(283),
    [sym_token_at] = STATE(283),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(283),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(854),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [337] = {
    [anon_sym_LBRACK] = ACTIONS(856),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(856),
    [sym_begin_group] = ACTIONS(856),
    [sym_alignment_tab] = ACTIONS(856),
    [sym_parameter_char] = ACTIONS(856),
    [sym_superscript] = ACTIONS(856),
    [sym_subscript] = ACTIONS(856),
    [sym_active_char] = ACTIONS(856),
    [sym_text] = ACTIONS(856),
  },
  [338] = {
    [sym_text_group_at] = STATE(350),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(598),
    [sym__end_of_line] = ACTIONS(858),
  },
  [339] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(858),
  },
  [340] = {
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_end_group] = ACTIONS(860),
    [sym_math_shift] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_active_char] = ACTIONS(860),
    [sym_text] = ACTIONS(860),
  },
  [341] = {
    [sym__whitespace] = ACTIONS(809),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(809),
    [sym__end_of_line] = ACTIONS(809),
  },
  [342] = {
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(862),
    [sym_begin_group] = ACTIONS(862),
    [sym_end_group] = ACTIONS(862),
    [sym_math_shift] = ACTIONS(862),
    [sym_alignment_tab] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(862),
    [sym_superscript] = ACTIONS(862),
    [sym_subscript] = ACTIONS(862),
    [sym_active_char] = ACTIONS(862),
    [sym_text] = ACTIONS(862),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(702),
    [sym_begin_group] = ACTIONS(702),
    [sym_end_group] = ACTIONS(702),
    [sym_math_shift] = ACTIONS(702),
    [sym_alignment_tab] = ACTIONS(702),
    [sym_parameter_char] = ACTIONS(702),
    [sym_superscript] = ACTIONS(702),
    [sym_subscript] = ACTIONS(702),
    [sym_active_char] = ACTIONS(702),
    [sym_text] = ACTIONS(702),
  },
  [344] = {
    [anon_sym_LBRACK] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(864),
    [sym_begin_group] = ACTIONS(864),
    [sym_alignment_tab] = ACTIONS(864),
    [sym_parameter_char] = ACTIONS(864),
    [sym_superscript] = ACTIONS(864),
    [sym_subscript] = ACTIONS(864),
    [sym_active_char] = ACTIONS(864),
    [sym_text] = ACTIONS(864),
  },
  [345] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(868),
    [sym__end_of_line] = ACTIONS(868),
  },
  [346] = {
    [anon_sym_LBRACK] = ACTIONS(870),
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(870),
    [sym_begin_group] = ACTIONS(870),
    [sym_end_group] = ACTIONS(870),
    [sym_math_shift] = ACTIONS(870),
    [sym_alignment_tab] = ACTIONS(870),
    [sym_parameter_char] = ACTIONS(870),
    [sym_superscript] = ACTIONS(870),
    [sym_subscript] = ACTIONS(870),
    [sym_active_char] = ACTIONS(870),
    [sym_text] = ACTIONS(870),
  },
  [347] = {
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_RBRACK] = ACTIONS(872),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(872),
    [sym_begin_group] = ACTIONS(872),
    [sym_end_group] = ACTIONS(872),
    [sym_math_shift] = ACTIONS(872),
    [sym_alignment_tab] = ACTIONS(872),
    [sym_parameter_char] = ACTIONS(872),
    [sym_superscript] = ACTIONS(872),
    [sym_subscript] = ACTIONS(872),
    [sym_active_char] = ACTIONS(872),
    [sym_text] = ACTIONS(872),
  },
  [348] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(736),
  },
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(874),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(874),
    [sym_begin_group] = ACTIONS(874),
    [sym_alignment_tab] = ACTIONS(874),
    [sym_parameter_char] = ACTIONS(874),
    [sym_superscript] = ACTIONS(874),
    [sym_subscript] = ACTIONS(874),
    [sym_active_char] = ACTIONS(874),
    [sym_text] = ACTIONS(874),
  },
  [350] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(876),
  },
  [351] = {
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
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(64),
  [85] = {.count = 1, .reusable = false}, SHIFT(72),
  [87] = {.count = 1, .reusable = true}, SHIFT(68),
  [89] = {.count = 1, .reusable = true}, SHIFT(73),
  [91] = {.count = 1, .reusable = true}, SHIFT(74),
  [93] = {.count = 1, .reusable = true}, SHIFT(77),
  [95] = {.count = 1, .reusable = true}, SHIFT(78),
  [97] = {.count = 1, .reusable = true}, SHIFT(83),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(92),
  [103] = {.count = 1, .reusable = true}, SHIFT(100),
  [105] = {.count = 1, .reusable = true}, SHIFT(101),
  [107] = {.count = 1, .reusable = true}, SHIFT(102),
  [109] = {.count = 1, .reusable = true}, SHIFT(120),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(121),
  [115] = {.count = 1, .reusable = true}, SHIFT(123),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(124),
  [121] = {.count = 1, .reusable = true}, SHIFT(126),
  [123] = {.count = 1, .reusable = true}, SHIFT(125),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(127),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [133] = {.count = 1, .reusable = false}, SHIFT(128),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(129),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(130),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(131),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(132),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(133),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(134),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [165] = {.count = 1, .reusable = false}, SHIFT(135),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(136),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(137),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(138),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(139),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(140),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [191] = {.count = 1, .reusable = false}, SHIFT(141),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [199] = {.count = 1, .reusable = false}, SHIFT(142),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(143),
  [207] = {.count = 1, .reusable = true}, SHIFT(144),
  [209] = {.count = 1, .reusable = false}, SHIFT(145),
  [211] = {.count = 1, .reusable = true}, SHIFT(146),
  [213] = {.count = 1, .reusable = true}, SHIFT(147),
  [215] = {.count = 1, .reusable = true}, SHIFT(149),
  [217] = {.count = 1, .reusable = true}, SHIFT(150),
  [219] = {.count = 1, .reusable = true}, SHIFT(152),
  [221] = {.count = 1, .reusable = true}, SHIFT(154),
  [223] = {.count = 1, .reusable = true}, SHIFT(156),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [227] = {.count = 1, .reusable = true}, SHIFT(157),
  [229] = {.count = 1, .reusable = true}, SHIFT(158),
  [231] = {.count = 1, .reusable = true}, SHIFT(159),
  [233] = {.count = 1, .reusable = true}, SHIFT(161),
  [235] = {.count = 1, .reusable = true}, SHIFT(162),
  [237] = {.count = 1, .reusable = true}, SHIFT(168),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(170),
  [243] = {.count = 1, .reusable = false}, SHIFT(173),
  [245] = {.count = 1, .reusable = true}, SHIFT(172),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [249] = {.count = 1, .reusable = true}, SHIFT(174),
  [251] = {.count = 1, .reusable = false}, SHIFT(168),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(177),
  [257] = {.count = 1, .reusable = false}, SHIFT(178),
  [259] = {.count = 1, .reusable = false}, SHIFT(179),
  [261] = {.count = 1, .reusable = false}, SHIFT(180),
  [263] = {.count = 1, .reusable = false}, SHIFT(181),
  [265] = {.count = 1, .reusable = true}, SHIFT(182),
  [267] = {.count = 1, .reusable = true}, SHIFT(183),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(186),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(181),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [279] = {.count = 1, .reusable = true}, SHIFT(189),
  [281] = {.count = 1, .reusable = true}, SHIFT(191),
  [283] = {.count = 1, .reusable = true}, SHIFT(193),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [287] = {.count = 1, .reusable = true}, SHIFT(194),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(196),
  [295] = {.count = 1, .reusable = false}, SHIFT(198),
  [297] = {.count = 1, .reusable = true}, SHIFT(199),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(200),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [311] = {.count = 1, .reusable = false}, SHIFT(202),
  [313] = {.count = 1, .reusable = false}, SHIFT(203),
  [315] = {.count = 1, .reusable = true}, SHIFT(204),
  [317] = {.count = 1, .reusable = true}, SHIFT(205),
  [319] = {.count = 1, .reusable = true}, SHIFT(206),
  [321] = {.count = 1, .reusable = true}, SHIFT(207),
  [323] = {.count = 1, .reusable = true}, SHIFT(208),
  [325] = {.count = 1, .reusable = true}, SHIFT(209),
  [327] = {.count = 1, .reusable = true}, SHIFT(214),
  [329] = {.count = 1, .reusable = true}, SHIFT(215),
  [331] = {.count = 1, .reusable = true}, SHIFT(218),
  [333] = {.count = 1, .reusable = true}, SHIFT(222),
  [335] = {.count = 1, .reusable = true}, SHIFT(224),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [341] = {.count = 1, .reusable = true}, SHIFT(237),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(238),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(240),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(126),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [395] = {.count = 1, .reusable = true}, SHIFT(241),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(242),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(144),
  [422] = {.count = 1, .reusable = true}, SHIFT(243),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [428] = {.count = 1, .reusable = true}, SHIFT(244),
  [430] = {.count = 1, .reusable = true}, SHIFT(245),
  [432] = {.count = 1, .reusable = true}, SHIFT(246),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [436] = {.count = 1, .reusable = true}, SHIFT(247),
  [438] = {.count = 1, .reusable = true}, SHIFT(249),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [446] = {.count = 1, .reusable = true}, SHIFT(252),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [451] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [465] = {.count = 1, .reusable = true}, SHIFT(253),
  [467] = {.count = 1, .reusable = true}, SHIFT(254),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(161),
  [474] = {.count = 1, .reusable = true}, SHIFT(255),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [480] = {.count = 1, .reusable = true}, SHIFT(256),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [484] = {.count = 1, .reusable = true}, SHIFT(258),
  [486] = {.count = 1, .reusable = true}, SHIFT(260),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [492] = {.count = 1, .reusable = true}, SHIFT(261),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(173),
  [503] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(72),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(174),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(177),
  [518] = {.count = 1, .reusable = true}, SHIFT(262),
  [520] = {.count = 1, .reusable = true}, SHIFT(263),
  [522] = {.count = 1, .reusable = true}, SHIFT(264),
  [524] = {.count = 1, .reusable = true}, SHIFT(265),
  [526] = {.count = 1, .reusable = true}, SHIFT(266),
  [528] = {.count = 1, .reusable = true}, SHIFT(267),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [532] = {.count = 1, .reusable = true}, SHIFT(268),
  [534] = {.count = 1, .reusable = true}, SHIFT(269),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [540] = {.count = 1, .reusable = true}, SHIFT(271),
  [542] = {.count = 1, .reusable = true}, SHIFT(272),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [550] = {.count = 1, .reusable = true}, SHIFT(278),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [556] = {.count = 1, .reusable = false}, SHIFT(280),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [560] = {.count = 1, .reusable = false}, SHIFT(281),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [568] = {.count = 1, .reusable = true}, SHIFT(282),
  [570] = {.count = 1, .reusable = true}, SHIFT(283),
  [572] = {.count = 1, .reusable = true}, SHIFT(284),
  [574] = {.count = 1, .reusable = true}, SHIFT(285),
  [576] = {.count = 1, .reusable = true}, SHIFT(287),
  [578] = {.count = 1, .reusable = true}, SHIFT(288),
  [580] = {.count = 1, .reusable = true}, SHIFT(290),
  [582] = {.count = 1, .reusable = true}, SHIFT(292),
  [584] = {.count = 1, .reusable = true}, SHIFT(294),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [588] = {.count = 1, .reusable = true}, SHIFT(295),
  [590] = {.count = 1, .reusable = true}, SHIFT(202),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(297),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [598] = {.count = 1, .reusable = true}, SHIFT(302),
  [600] = {.count = 1, .reusable = true}, SHIFT(303),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [606] = {.count = 1, .reusable = true}, SHIFT(306),
  [608] = {.count = 1, .reusable = true}, SHIFT(309),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [614] = {.count = 1, .reusable = true}, SHIFT(310),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [624] = {.count = 1, .reusable = true}, SHIFT(313),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(204),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(101),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(102),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(238),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(240),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [654] = {.count = 1, .reusable = true}, SHIFT(314),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(245),
  [663] = {.count = 1, .reusable = true}, SHIFT(315),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [667] = {.count = 1, .reusable = true}, SHIFT(316),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(252),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [680] = {.count = 1, .reusable = false}, SHIFT(317),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [686] = {.count = 1, .reusable = false}, SHIFT(318),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [690] = {.count = 1, .reusable = true}, SHIFT(319),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [694] = {.count = 1, .reusable = true}, SHIFT(179),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [700] = {.count = 1, .reusable = true}, SHIFT(320),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [710] = {.count = 1, .reusable = true}, SHIFT(321),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [714] = {.count = 1, .reusable = true}, SHIFT(322),
  [716] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [720] = {.count = 1, .reusable = true}, SHIFT(324),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [738] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(283),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [745] = {.count = 1, .reusable = true}, SHIFT(326),
  [747] = {.count = 1, .reusable = true}, SHIFT(327),
  [749] = {.count = 1, .reusable = true}, SHIFT(328),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [753] = {.count = 1, .reusable = true}, SHIFT(329),
  [755] = {.count = 1, .reusable = true}, SHIFT(331),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [763] = {.count = 1, .reusable = true}, SHIFT(334),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(207),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(208),
  [774] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(295),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [784] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(297),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [795] = {.count = 1, .reusable = true}, SHIFT(335),
  [797] = {.count = 1, .reusable = true}, SHIFT(336),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [801] = {.count = 1, .reusable = true}, SHIFT(337),
  [803] = {.count = 1, .reusable = true}, SHIFT(338),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [811] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(313),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [824] = {.count = 1, .reusable = true}, SHIFT(343),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [828] = {.count = 1, .reusable = true}, SHIFT(344),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [834] = {.count = 1, .reusable = true}, SHIFT(345),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(327),
  [841] = {.count = 1, .reusable = true}, SHIFT(346),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [845] = {.count = 1, .reusable = true}, SHIFT(347),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [851] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(334),
  [854] = {.count = 1, .reusable = true}, SHIFT(348),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [858] = {.count = 1, .reusable = true}, SHIFT(349),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [876] = {.count = 1, .reusable = true}, SHIFT(351),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
