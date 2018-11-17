#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 675
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 4
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  sym_math_shift = 3,
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
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 15,
  anon_sym_begin = 16,
  anon_sym_end = 17,
  anon_sym_documentclass = 18,
  anon_sym_usepackage = 19,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 20,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 21,
  anon_sym_STAR = 22,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 23,
  anon_sym_EQ = 24,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 25,
  anon_sym_emph = 26,
  anon_sym_footnote = 27,
  anon_sym_textbf = 28,
  anon_sym_textit = 29,
  anon_sym_texttt = 30,
  anon_sym_makeatletter = 31,
  anon_sym_makeatother = 32,
  sym_magic_comment = 33,
  sym_comment = 34,
  sym__escape = 35,
  sym_begin_group = 36,
  sym_end_group = 37,
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
  [sym_math_shift] = "math_shift",
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
  [sym_math_shift] = {
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
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead == '!')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '!')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'T')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'X')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead == '\n')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_magic_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead == '!')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
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
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '&')
        ADVANCE(20);
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
      if ((lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '&')
        ADVANCE(20);
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
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(21);
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
      if (lookahead == 'f')
        ADVANCE(91);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 'm')
        ADVANCE(110);
      if (lookahead == 'p')
        ADVANCE(125);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(148);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == 'v')
        ADVANCE(168);
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
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(5);
      if (lookahead == '!')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(18);
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
      if (lookahead == 'o')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(101);
      if (lookahead == 'p')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
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
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(111);
      if (lookahead == 'i')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(134);
      if (lookahead == 'u')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(141);
      if (lookahead == 's')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(134);
      if (lookahead == 'u')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'i')
        ADVANCE(154);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 176:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '&')
        ADVANCE(20);
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
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(36);
      END_STATE();
    case 177:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(19);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'd')
        ADVANCE(183);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(184);
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
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 187:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '&')
        ADVANCE(20);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(188);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 189:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 190:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'd')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 194:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 195:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(21);
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
        ADVANCE(196);
      if (lookahead == 'f')
        ADVANCE(91);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 'm')
        ADVANCE(110);
      if (lookahead == 'p')
        ADVANCE(125);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(148);
      if (lookahead == 'u')
        ADVANCE(158);
      if (lookahead == 'v')
        ADVANCE(168);
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
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'm')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == 'V')
        ADVANCE(200);
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
        ADVANCE(36);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(205);
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
      if (lookahead == 'i')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
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
        ADVANCE(36);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(212);
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
      if (lookahead == 'n')
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
        ADVANCE(36);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
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
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(208);
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
        ADVANCE(36);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
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
      if (lookahead == 'r')
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
      if (lookahead == 'y')
        ADVANCE(216);
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
      if (lookahead == 'r')
        ADVANCE(225);
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(216);
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
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
        ADVANCE(233);
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
        ADVANCE(235);
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
      if (lookahead == 't')
        ADVANCE(236);
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
      if (lookahead == 'h')
        ADVANCE(214);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(216);
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
      if (lookahead == 'e')
        ADVANCE(241);
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(216);
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
      if (lookahead == 'q')
        ADVANCE(246);
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
        ADVANCE(36);
      END_STATE();
    case 247:
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
        ADVANCE(36);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
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
      if (lookahead == 'i')
        ADVANCE(251);
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(216);
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(252);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
        ADVANCE(260);
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
      if (lookahead == 'h')
        ADVANCE(261);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(264);
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
        ADVANCE(268);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(208);
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
        ADVANCE(36);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
        ADVANCE(278);
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
      if (lookahead == 'd')
        ADVANCE(208);
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(285);
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
      if (lookahead == 'n')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 298:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 299:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 300:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 301:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'b')
        ADVANCE(315);
      if (lookahead == 'c')
        ADVANCE(320);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(347);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'k')
        ADVANCE(369);
      if (lookahead == 'm')
        ADVANCE(371);
      if (lookahead == 'p')
        ADVANCE(385);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead == 't')
        ADVANCE(408);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(428);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(305);
      if (lookahead == 'p')
        ADVANCE(310);
      if (lookahead == 's')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(321);
      if (lookahead == 'h')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(65);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'o')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(348);
      if (lookahead == 'm')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(362);
      if (lookahead == 'p')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 't')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(401);
      if (lookahead == 's')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(412);
      if (lookahead == 'i')
        ADVANCE(414);
      if (lookahead == 't')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(172);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 434:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'd')
        ADVANCE(183);
      if (lookahead == 'e')
        ADVANCE(435);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(184);
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
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 436:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == '&')
        ADVANCE(20);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(36);
      END_STATE();
    case 437:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(22);
      END_STATE();
    case 438:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(315);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == 'd')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'k')
        ADVANCE(369);
      if (lookahead == 't')
        ADVANCE(441);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(442);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(443);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 444:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'b')
        ADVANCE(315);
      if (lookahead == 'c')
        ADVANCE(320);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(347);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'k')
        ADVANCE(369);
      if (lookahead == 'm')
        ADVANCE(445);
      if (lookahead == 'p')
        ADVANCE(385);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead == 't')
        ADVANCE(408);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(428);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 446:
      if (lookahead == '%')
        ADVANCE(19);
      if (lookahead == 'm')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'a')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'k')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'e')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'a')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 't')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'o')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 't')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'h')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'e')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'r')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 458:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'b')
        ADVANCE(315);
      if (lookahead == 'c')
        ADVANCE(320);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'k')
        ADVANCE(369);
      if (lookahead == 'm')
        ADVANCE(445);
      if (lookahead == 'p')
        ADVANCE(385);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead == 't')
        ADVANCE(408);
      if (lookahead == 'u')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(428);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(348);
      if (lookahead == 'm')
        ADVANCE(349);
      if (lookahead == 'n')
        ADVANCE(460);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(461);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    case 462:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(315);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == 'd')
        ADVANCE(440);
      if (lookahead == 'e')
        ADVANCE(463);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'k')
        ADVANCE(369);
      if (lookahead == 't')
        ADVANCE(441);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(348);
      if (lookahead == 'n')
        ADVANCE(460);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(309);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35, .external_lex_state = 2},
  [2] = {.lex_state = 35, .external_lex_state = 2},
  [3] = {.lex_state = 37, .external_lex_state = 2},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 176, .external_lex_state = 3},
  [6] = {.lex_state = 37, .external_lex_state = 2},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 35, .external_lex_state = 4},
  [9] = {.lex_state = 177},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 178},
  [15] = {.lex_state = 35, .external_lex_state = 2},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 37, .external_lex_state = 2},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35, .external_lex_state = 2},
  [29] = {.lex_state = 35, .external_lex_state = 2},
  [30] = {.lex_state = 37, .external_lex_state = 2},
  [31] = {.lex_state = 35, .external_lex_state = 2},
  [32] = {.lex_state = 179},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 176, .external_lex_state = 5},
  [37] = {.lex_state = 177, .external_lex_state = 2},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 35, .external_lex_state = 2},
  [43] = {.lex_state = 35, .external_lex_state = 4},
  [44] = {.lex_state = 187},
  [45] = {.lex_state = 187},
  [46] = {.lex_state = 37, .external_lex_state = 2},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 187, .external_lex_state = 2},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 187, .external_lex_state = 2},
  [60] = {.lex_state = 187, .external_lex_state = 2},
  [61] = {.lex_state = 35, .external_lex_state = 2},
  [62] = {.lex_state = 38},
  [63] = {.lex_state = 176, .external_lex_state = 3},
  [64] = {.lex_state = 37, .external_lex_state = 2},
  [65] = {.lex_state = 176, .external_lex_state = 3},
  [66] = {.lex_state = 35, .external_lex_state = 4},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 178},
  [72] = {.lex_state = 35, .external_lex_state = 2},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 176, .external_lex_state = 3},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35, .external_lex_state = 2},
  [85] = {.lex_state = 37, .external_lex_state = 2},
  [86] = {.lex_state = 176, .external_lex_state = 3},
  [87] = {.lex_state = 179},
  [88] = {.lex_state = 177, .external_lex_state = 6},
  [89] = {.lex_state = 181},
  [90] = {.lex_state = 176, .external_lex_state = 5},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 35},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 179},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 190},
  [104] = {.lex_state = 37, .external_lex_state = 2},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 194},
  [108] = {.lex_state = 178},
  [109] = {.lex_state = 195},
  [110] = {.lex_state = 37, .external_lex_state = 2},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 35, .external_lex_state = 2},
  [113] = {.lex_state = 199},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 298},
  [117] = {.lex_state = 35, .external_lex_state = 2},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 37, .external_lex_state = 2},
  [120] = {.lex_state = 189},
  [121] = {.lex_state = 37, .external_lex_state = 2},
  [122] = {.lex_state = 37, .external_lex_state = 2},
  [123] = {.lex_state = 189},
  [124] = {.lex_state = 37, .external_lex_state = 2},
  [125] = {.lex_state = 37, .external_lex_state = 2},
  [126] = {.lex_state = 189},
  [127] = {.lex_state = 299},
  [128] = {.lex_state = 300},
  [129] = {.lex_state = 37, .external_lex_state = 2},
  [130] = {.lex_state = 37, .external_lex_state = 2},
  [131] = {.lex_state = 189},
  [132] = {.lex_state = 37, .external_lex_state = 2},
  [133] = {.lex_state = 37, .external_lex_state = 2},
  [134] = {.lex_state = 37, .external_lex_state = 2},
  [135] = {.lex_state = 35, .external_lex_state = 2},
  [136] = {.lex_state = 301},
  [137] = {.lex_state = 176, .external_lex_state = 3},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35, .external_lex_state = 2},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 37, .external_lex_state = 2},
  [153] = {.lex_state = 37, .external_lex_state = 2},
  [154] = {.lex_state = 37, .external_lex_state = 2},
  [155] = {.lex_state = 35, .external_lex_state = 2},
  [156] = {.lex_state = 37, .external_lex_state = 2},
  [157] = {.lex_state = 37, .external_lex_state = 2},
  [158] = {.lex_state = 37, .external_lex_state = 2},
  [159] = {.lex_state = 35, .external_lex_state = 2},
  [160] = {.lex_state = 37, .external_lex_state = 2},
  [161] = {.lex_state = 179},
  [162] = {.lex_state = 177, .external_lex_state = 2},
  [163] = {.lex_state = 189},
  [164] = {.lex_state = 181},
  [165] = {.lex_state = 176, .external_lex_state = 5},
  [166] = {.lex_state = 35, .external_lex_state = 2},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 35},
  [170] = {.lex_state = 176, .external_lex_state = 5},
  [171] = {.lex_state = 35},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 176, .external_lex_state = 5},
  [174] = {.lex_state = 179},
  [175] = {.lex_state = 37, .external_lex_state = 2},
  [176] = {.lex_state = 176, .external_lex_state = 3},
  [177] = {.lex_state = 35, .external_lex_state = 2},
  [178] = {.lex_state = 434},
  [179] = {.lex_state = 35, .external_lex_state = 2},
  [180] = {.lex_state = 35},
  [181] = {.lex_state = 35},
  [182] = {.lex_state = 35},
  [183] = {.lex_state = 35, .external_lex_state = 2},
  [184] = {.lex_state = 37},
  [185] = {.lex_state = 35, .external_lex_state = 2},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 35},
  [188] = {.lex_state = 35},
  [189] = {.lex_state = 35},
  [190] = {.lex_state = 35},
  [191] = {.lex_state = 35},
  [192] = {.lex_state = 189},
  [193] = {.lex_state = 189},
  [194] = {.lex_state = 37, .external_lex_state = 2},
  [195] = {.lex_state = 35},
  [196] = {.lex_state = 35},
  [197] = {.lex_state = 35},
  [198] = {.lex_state = 35},
  [199] = {.lex_state = 35},
  [200] = {.lex_state = 35, .external_lex_state = 2},
  [201] = {.lex_state = 37, .external_lex_state = 2},
  [202] = {.lex_state = 35},
  [203] = {.lex_state = 177, .external_lex_state = 2},
  [204] = {.lex_state = 176, .external_lex_state = 3},
  [205] = {.lex_state = 436, .external_lex_state = 3},
  [206] = {.lex_state = 436, .external_lex_state = 3},
  [207] = {.lex_state = 176, .external_lex_state = 3},
  [208] = {.lex_state = 176, .external_lex_state = 3},
  [209] = {.lex_state = 177, .external_lex_state = 6},
  [210] = {.lex_state = 35},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 176, .external_lex_state = 3},
  [215] = {.lex_state = 35},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 176, .external_lex_state = 3},
  [218] = {.lex_state = 35},
  [219] = {.lex_state = 35, .external_lex_state = 2},
  [220] = {.lex_state = 35},
  [221] = {.lex_state = 176, .external_lex_state = 3},
  [222] = {.lex_state = 189},
  [223] = {.lex_state = 176, .external_lex_state = 3},
  [224] = {.lex_state = 189},
  [225] = {.lex_state = 176, .external_lex_state = 3},
  [226] = {.lex_state = 176, .external_lex_state = 3},
  [227] = {.lex_state = 189},
  [228] = {.lex_state = 300},
  [229] = {.lex_state = 176, .external_lex_state = 3},
  [230] = {.lex_state = 176, .external_lex_state = 3},
  [231] = {.lex_state = 189},
  [232] = {.lex_state = 176, .external_lex_state = 3},
  [233] = {.lex_state = 176, .external_lex_state = 3},
  [234] = {.lex_state = 176, .external_lex_state = 3},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 35},
  [237] = {.lex_state = 176, .external_lex_state = 3},
  [238] = {.lex_state = 176, .external_lex_state = 3},
  [239] = {.lex_state = 176, .external_lex_state = 3},
  [240] = {.lex_state = 176, .external_lex_state = 3},
  [241] = {.lex_state = 37, .external_lex_state = 2},
  [242] = {.lex_state = 37, .external_lex_state = 2},
  [243] = {.lex_state = 176, .external_lex_state = 3},
  [244] = {.lex_state = 176, .external_lex_state = 3},
  [245] = {.lex_state = 35, .external_lex_state = 4},
  [246] = {.lex_state = 37},
  [247] = {.lex_state = 187},
  [248] = {.lex_state = 187},
  [249] = {.lex_state = 37},
  [250] = {.lex_state = 176, .external_lex_state = 5},
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 37, .external_lex_state = 2},
  [253] = {.lex_state = 176, .external_lex_state = 3},
  [254] = {.lex_state = 37},
  [255] = {.lex_state = 37},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 35},
  [258] = {.lex_state = 176, .external_lex_state = 3},
  [259] = {.lex_state = 37},
  [260] = {.lex_state = 300},
  [261] = {.lex_state = 37},
  [262] = {.lex_state = 37},
  [263] = {.lex_state = 37},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 37},
  [266] = {.lex_state = 437},
  [267] = {.lex_state = 37, .external_lex_state = 2},
  [268] = {.lex_state = 37, .external_lex_state = 2},
  [269] = {.lex_state = 35},
  [270] = {.lex_state = 37, .external_lex_state = 2},
  [271] = {.lex_state = 35},
  [272] = {.lex_state = 189},
  [273] = {.lex_state = 37, .external_lex_state = 2},
  [274] = {.lex_state = 199},
  [275] = {.lex_state = 37, .external_lex_state = 2},
  [276] = {.lex_state = 178},
  [277] = {.lex_state = 194},
  [278] = {.lex_state = 178},
  [279] = {.lex_state = 37, .external_lex_state = 2},
  [280] = {.lex_state = 37, .external_lex_state = 2},
  [281] = {.lex_state = 35, .external_lex_state = 2},
  [282] = {.lex_state = 176, .external_lex_state = 5},
  [283] = {.lex_state = 176, .external_lex_state = 5},
  [284] = {.lex_state = 176, .external_lex_state = 5},
  [285] = {.lex_state = 176, .external_lex_state = 5},
  [286] = {.lex_state = 176, .external_lex_state = 3},
  [287] = {.lex_state = 35},
  [288] = {.lex_state = 298},
  [289] = {.lex_state = 298},
  [290] = {.lex_state = 178},
  [291] = {.lex_state = 298},
  [292] = {.lex_state = 298},
  [293] = {.lex_state = 35},
  [294] = {.lex_state = 37, .external_lex_state = 2},
  [295] = {.lex_state = 298},
  [296] = {.lex_state = 298},
  [297] = {.lex_state = 37, .external_lex_state = 2},
  [298] = {.lex_state = 35},
  [299] = {.lex_state = 37, .external_lex_state = 2},
  [300] = {.lex_state = 35},
  [301] = {.lex_state = 37, .external_lex_state = 2},
  [302] = {.lex_state = 300},
  [303] = {.lex_state = 179},
  [304] = {.lex_state = 35},
  [305] = {.lex_state = 37, .external_lex_state = 2},
  [306] = {.lex_state = 35},
  [307] = {.lex_state = 438},
  [308] = {.lex_state = 176, .external_lex_state = 5},
  [309] = {.lex_state = 177, .external_lex_state = 2},
  [310] = {.lex_state = 35},
  [311] = {.lex_state = 35},
  [312] = {.lex_state = 37},
  [313] = {.lex_state = 35, .external_lex_state = 2},
  [314] = {.lex_state = 187, .external_lex_state = 2},
  [315] = {.lex_state = 187, .external_lex_state = 2},
  [316] = {.lex_state = 35, .external_lex_state = 2},
  [317] = {.lex_state = 444},
  [318] = {.lex_state = 176, .external_lex_state = 3},
  [319] = {.lex_state = 37, .external_lex_state = 2},
  [320] = {.lex_state = 35},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 35},
  [323] = {.lex_state = 35},
  [324] = {.lex_state = 35, .external_lex_state = 2},
  [325] = {.lex_state = 35},
  [326] = {.lex_state = 35},
  [327] = {.lex_state = 35},
  [328] = {.lex_state = 35},
  [329] = {.lex_state = 35},
  [330] = {.lex_state = 35},
  [331] = {.lex_state = 35},
  [332] = {.lex_state = 37, .external_lex_state = 2},
  [333] = {.lex_state = 176, .external_lex_state = 3},
  [334] = {.lex_state = 446},
  [335] = {.lex_state = 37, .external_lex_state = 2},
  [336] = {.lex_state = 438},
  [337] = {.lex_state = 176, .external_lex_state = 5},
  [338] = {.lex_state = 35},
  [339] = {.lex_state = 35},
  [340] = {.lex_state = 35},
  [341] = {.lex_state = 35},
  [342] = {.lex_state = 37},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 35},
  [345] = {.lex_state = 35},
  [346] = {.lex_state = 35},
  [347] = {.lex_state = 458},
  [348] = {.lex_state = 37, .external_lex_state = 2},
  [349] = {.lex_state = 35, .external_lex_state = 2},
  [350] = {.lex_state = 298},
  [351] = {.lex_state = 37, .external_lex_state = 2},
  [352] = {.lex_state = 37, .external_lex_state = 2},
  [353] = {.lex_state = 189},
  [354] = {.lex_state = 37, .external_lex_state = 2},
  [355] = {.lex_state = 37, .external_lex_state = 2},
  [356] = {.lex_state = 37, .external_lex_state = 2},
  [357] = {.lex_state = 189},
  [358] = {.lex_state = 37, .external_lex_state = 2},
  [359] = {.lex_state = 37, .external_lex_state = 2},
  [360] = {.lex_state = 37, .external_lex_state = 2},
  [361] = {.lex_state = 444},
  [362] = {.lex_state = 37, .external_lex_state = 2},
  [363] = {.lex_state = 37, .external_lex_state = 2},
  [364] = {.lex_state = 35, .external_lex_state = 2},
  [365] = {.lex_state = 37, .external_lex_state = 2},
  [366] = {.lex_state = 37, .external_lex_state = 2},
  [367] = {.lex_state = 177, .external_lex_state = 2},
  [368] = {.lex_state = 35},
  [369] = {.lex_state = 176, .external_lex_state = 5},
  [370] = {.lex_state = 436, .external_lex_state = 5},
  [371] = {.lex_state = 436, .external_lex_state = 5},
  [372] = {.lex_state = 176, .external_lex_state = 5},
  [373] = {.lex_state = 176, .external_lex_state = 5},
  [374] = {.lex_state = 176, .external_lex_state = 3},
  [375] = {.lex_state = 176, .external_lex_state = 5},
  [376] = {.lex_state = 176, .external_lex_state = 5},
  [377] = {.lex_state = 35},
  [378] = {.lex_state = 35},
  [379] = {.lex_state = 176, .external_lex_state = 3},
  [380] = {.lex_state = 176, .external_lex_state = 5},
  [381] = {.lex_state = 300},
  [382] = {.lex_state = 176, .external_lex_state = 5},
  [383] = {.lex_state = 176, .external_lex_state = 5},
  [384] = {.lex_state = 37},
  [385] = {.lex_state = 35, .external_lex_state = 2},
  [386] = {.lex_state = 176, .external_lex_state = 5},
  [387] = {.lex_state = 176, .external_lex_state = 5},
  [388] = {.lex_state = 35, .external_lex_state = 2},
  [389] = {.lex_state = 176, .external_lex_state = 5},
  [390] = {.lex_state = 176, .external_lex_state = 3},
  [391] = {.lex_state = 35, .external_lex_state = 2},
  [392] = {.lex_state = 176, .external_lex_state = 5},
  [393] = {.lex_state = 35, .external_lex_state = 2},
  [394] = {.lex_state = 37},
  [395] = {.lex_state = 35},
  [396] = {.lex_state = 189},
  [397] = {.lex_state = 177, .external_lex_state = 2},
  [398] = {.lex_state = 176, .external_lex_state = 3},
  [399] = {.lex_state = 176, .external_lex_state = 3},
  [400] = {.lex_state = 176, .external_lex_state = 3},
  [401] = {.lex_state = 176, .external_lex_state = 3},
  [402] = {.lex_state = 35, .external_lex_state = 4},
  [403] = {.lex_state = 37},
  [404] = {.lex_state = 176, .external_lex_state = 3},
  [405] = {.lex_state = 437},
  [406] = {.lex_state = 176, .external_lex_state = 3},
  [407] = {.lex_state = 176, .external_lex_state = 3},
  [408] = {.lex_state = 35},
  [409] = {.lex_state = 176, .external_lex_state = 3},
  [410] = {.lex_state = 35},
  [411] = {.lex_state = 176, .external_lex_state = 3},
  [412] = {.lex_state = 199},
  [413] = {.lex_state = 176, .external_lex_state = 3},
  [414] = {.lex_state = 176, .external_lex_state = 3},
  [415] = {.lex_state = 176, .external_lex_state = 3},
  [416] = {.lex_state = 176, .external_lex_state = 5},
  [417] = {.lex_state = 35},
  [418] = {.lex_state = 176, .external_lex_state = 3},
  [419] = {.lex_state = 35},
  [420] = {.lex_state = 176, .external_lex_state = 3},
  [421] = {.lex_state = 35},
  [422] = {.lex_state = 176, .external_lex_state = 3},
  [423] = {.lex_state = 179},
  [424] = {.lex_state = 35},
  [425] = {.lex_state = 176, .external_lex_state = 3},
  [426] = {.lex_state = 436, .external_lex_state = 3},
  [427] = {.lex_state = 446},
  [428] = {.lex_state = 176, .external_lex_state = 3},
  [429] = {.lex_state = 176, .external_lex_state = 3},
  [430] = {.lex_state = 37, .external_lex_state = 2},
  [431] = {.lex_state = 37},
  [432] = {.lex_state = 37},
  [433] = {.lex_state = 37},
  [434] = {.lex_state = 187, .external_lex_state = 2},
  [435] = {.lex_state = 37},
  [436] = {.lex_state = 176, .external_lex_state = 5},
  [437] = {.lex_state = 37},
  [438] = {.lex_state = 37},
  [439] = {.lex_state = 37},
  [440] = {.lex_state = 176, .external_lex_state = 3},
  [441] = {.lex_state = 179},
  [442] = {.lex_state = 37},
  [443] = {.lex_state = 187, .external_lex_state = 2},
  [444] = {.lex_state = 199},
  [445] = {.lex_state = 37, .external_lex_state = 2},
  [446] = {.lex_state = 199},
  [447] = {.lex_state = 37, .external_lex_state = 2},
  [448] = {.lex_state = 35},
  [449] = {.lex_state = 176, .external_lex_state = 5},
  [450] = {.lex_state = 298},
  [451] = {.lex_state = 35},
  [452] = {.lex_state = 298},
  [453] = {.lex_state = 37, .external_lex_state = 2},
  [454] = {.lex_state = 298},
  [455] = {.lex_state = 176, .external_lex_state = 3},
  [456] = {.lex_state = 35},
  [457] = {.lex_state = 298},
  [458] = {.lex_state = 298},
  [459] = {.lex_state = 178},
  [460] = {.lex_state = 298},
  [461] = {.lex_state = 298},
  [462] = {.lex_state = 37, .external_lex_state = 2},
  [463] = {.lex_state = 298},
  [464] = {.lex_state = 37, .external_lex_state = 2},
  [465] = {.lex_state = 37, .external_lex_state = 2},
  [466] = {.lex_state = 37, .external_lex_state = 2},
  [467] = {.lex_state = 37, .external_lex_state = 2},
  [468] = {.lex_state = 177, .external_lex_state = 2},
  [469] = {.lex_state = 438},
  [470] = {.lex_state = 176, .external_lex_state = 5},
  [471] = {.lex_state = 35, .external_lex_state = 2},
  [472] = {.lex_state = 35},
  [473] = {.lex_state = 35},
  [474] = {.lex_state = 35},
  [475] = {.lex_state = 37},
  [476] = {.lex_state = 176, .external_lex_state = 5},
  [477] = {.lex_state = 37, .external_lex_state = 2},
  [478] = {.lex_state = 176, .external_lex_state = 3},
  [479] = {.lex_state = 35, .external_lex_state = 2},
  [480] = {.lex_state = 462},
  [481] = {.lex_state = 35, .external_lex_state = 2},
  [482] = {.lex_state = 35},
  [483] = {.lex_state = 35, .external_lex_state = 2},
  [484] = {.lex_state = 37},
  [485] = {.lex_state = 35, .external_lex_state = 2},
  [486] = {.lex_state = 37, .external_lex_state = 2},
  [487] = {.lex_state = 37, .external_lex_state = 2},
  [488] = {.lex_state = 35},
  [489] = {.lex_state = 177, .external_lex_state = 2},
  [490] = {.lex_state = 436, .external_lex_state = 3},
  [491] = {.lex_state = 176, .external_lex_state = 3},
  [492] = {.lex_state = 176, .external_lex_state = 3},
  [493] = {.lex_state = 35},
  [494] = {.lex_state = 35},
  [495] = {.lex_state = 35},
  [496] = {.lex_state = 35},
  [497] = {.lex_state = 176, .external_lex_state = 3},
  [498] = {.lex_state = 35, .external_lex_state = 2},
  [499] = {.lex_state = 176, .external_lex_state = 3},
  [500] = {.lex_state = 176, .external_lex_state = 3},
  [501] = {.lex_state = 189},
  [502] = {.lex_state = 176, .external_lex_state = 3},
  [503] = {.lex_state = 176, .external_lex_state = 3},
  [504] = {.lex_state = 189},
  [505] = {.lex_state = 176, .external_lex_state = 3},
  [506] = {.lex_state = 176, .external_lex_state = 3},
  [507] = {.lex_state = 176, .external_lex_state = 3},
  [508] = {.lex_state = 176, .external_lex_state = 3},
  [509] = {.lex_state = 37, .external_lex_state = 2},
  [510] = {.lex_state = 37, .external_lex_state = 2},
  [511] = {.lex_state = 176, .external_lex_state = 3},
  [512] = {.lex_state = 187},
  [513] = {.lex_state = 37},
  [514] = {.lex_state = 176, .external_lex_state = 5},
  [515] = {.lex_state = 37, .external_lex_state = 2},
  [516] = {.lex_state = 176, .external_lex_state = 3},
  [517] = {.lex_state = 37},
  [518] = {.lex_state = 37},
  [519] = {.lex_state = 35},
  [520] = {.lex_state = 176, .external_lex_state = 3},
  [521] = {.lex_state = 37},
  [522] = {.lex_state = 37},
  [523] = {.lex_state = 37},
  [524] = {.lex_state = 35},
  [525] = {.lex_state = 37, .external_lex_state = 2},
  [526] = {.lex_state = 37, .external_lex_state = 2},
  [527] = {.lex_state = 37, .external_lex_state = 2},
  [528] = {.lex_state = 37, .external_lex_state = 2},
  [529] = {.lex_state = 176, .external_lex_state = 3},
  [530] = {.lex_state = 35},
  [531] = {.lex_state = 298},
  [532] = {.lex_state = 298},
  [533] = {.lex_state = 35},
  [534] = {.lex_state = 37, .external_lex_state = 2},
  [535] = {.lex_state = 298},
  [536] = {.lex_state = 37, .external_lex_state = 2},
  [537] = {.lex_state = 35},
  [538] = {.lex_state = 37, .external_lex_state = 2},
  [539] = {.lex_state = 37, .external_lex_state = 2},
  [540] = {.lex_state = 37, .external_lex_state = 2},
  [541] = {.lex_state = 37, .external_lex_state = 2},
  [542] = {.lex_state = 176, .external_lex_state = 5},
  [543] = {.lex_state = 176, .external_lex_state = 5},
  [544] = {.lex_state = 176, .external_lex_state = 5},
  [545] = {.lex_state = 176, .external_lex_state = 5},
  [546] = {.lex_state = 176, .external_lex_state = 5},
  [547] = {.lex_state = 35},
  [548] = {.lex_state = 176, .external_lex_state = 5},
  [549] = {.lex_state = 176, .external_lex_state = 5},
  [550] = {.lex_state = 176, .external_lex_state = 5},
  [551] = {.lex_state = 176, .external_lex_state = 3},
  [552] = {.lex_state = 179},
  [553] = {.lex_state = 176, .external_lex_state = 5},
  [554] = {.lex_state = 35, .external_lex_state = 2},
  [555] = {.lex_state = 37},
  [556] = {.lex_state = 35},
  [557] = {.lex_state = 177, .external_lex_state = 2},
  [558] = {.lex_state = 176, .external_lex_state = 3},
  [559] = {.lex_state = 436, .external_lex_state = 3},
  [560] = {.lex_state = 436, .external_lex_state = 3},
  [561] = {.lex_state = 199},
  [562] = {.lex_state = 176, .external_lex_state = 3},
  [563] = {.lex_state = 199},
  [564] = {.lex_state = 176, .external_lex_state = 3},
  [565] = {.lex_state = 176, .external_lex_state = 5},
  [566] = {.lex_state = 176, .external_lex_state = 3},
  [567] = {.lex_state = 176, .external_lex_state = 3},
  [568] = {.lex_state = 176, .external_lex_state = 3},
  [569] = {.lex_state = 176, .external_lex_state = 3},
  [570] = {.lex_state = 176, .external_lex_state = 3},
  [571] = {.lex_state = 176, .external_lex_state = 3},
  [572] = {.lex_state = 176, .external_lex_state = 3},
  [573] = {.lex_state = 37, .external_lex_state = 2},
  [574] = {.lex_state = 37},
  [575] = {.lex_state = 37},
  [576] = {.lex_state = 37},
  [577] = {.lex_state = 37, .external_lex_state = 2},
  [578] = {.lex_state = 176, .external_lex_state = 5},
  [579] = {.lex_state = 176, .external_lex_state = 5},
  [580] = {.lex_state = 37, .external_lex_state = 2},
  [581] = {.lex_state = 298},
  [582] = {.lex_state = 35},
  [583] = {.lex_state = 298},
  [584] = {.lex_state = 178},
  [585] = {.lex_state = 298},
  [586] = {.lex_state = 177, .external_lex_state = 2},
  [587] = {.lex_state = 436, .external_lex_state = 5},
  [588] = {.lex_state = 176, .external_lex_state = 5},
  [589] = {.lex_state = 176, .external_lex_state = 5},
  [590] = {.lex_state = 176, .external_lex_state = 3},
  [591] = {.lex_state = 176, .external_lex_state = 5},
  [592] = {.lex_state = 176, .external_lex_state = 5},
  [593] = {.lex_state = 35},
  [594] = {.lex_state = 176, .external_lex_state = 3},
  [595] = {.lex_state = 176, .external_lex_state = 5},
  [596] = {.lex_state = 176, .external_lex_state = 5},
  [597] = {.lex_state = 37},
  [598] = {.lex_state = 35, .external_lex_state = 2},
  [599] = {.lex_state = 176, .external_lex_state = 5},
  [600] = {.lex_state = 35, .external_lex_state = 2},
  [601] = {.lex_state = 176, .external_lex_state = 5},
  [602] = {.lex_state = 176, .external_lex_state = 3},
  [603] = {.lex_state = 35, .external_lex_state = 2},
  [604] = {.lex_state = 35, .external_lex_state = 2},
  [605] = {.lex_state = 37},
  [606] = {.lex_state = 177, .external_lex_state = 2},
  [607] = {.lex_state = 176, .external_lex_state = 3},
  [608] = {.lex_state = 176, .external_lex_state = 3},
  [609] = {.lex_state = 176, .external_lex_state = 3},
  [610] = {.lex_state = 176, .external_lex_state = 3},
  [611] = {.lex_state = 176, .external_lex_state = 3},
  [612] = {.lex_state = 176, .external_lex_state = 3},
  [613] = {.lex_state = 176, .external_lex_state = 3},
  [614] = {.lex_state = 176, .external_lex_state = 3},
  [615] = {.lex_state = 35},
  [616] = {.lex_state = 176, .external_lex_state = 3},
  [617] = {.lex_state = 35},
  [618] = {.lex_state = 176, .external_lex_state = 3},
  [619] = {.lex_state = 176, .external_lex_state = 3},
  [620] = {.lex_state = 37},
  [621] = {.lex_state = 37},
  [622] = {.lex_state = 37},
  [623] = {.lex_state = 176, .external_lex_state = 5},
  [624] = {.lex_state = 37},
  [625] = {.lex_state = 37},
  [626] = {.lex_state = 176, .external_lex_state = 3},
  [627] = {.lex_state = 37},
  [628] = {.lex_state = 298},
  [629] = {.lex_state = 176, .external_lex_state = 3},
  [630] = {.lex_state = 35},
  [631] = {.lex_state = 298},
  [632] = {.lex_state = 298},
  [633] = {.lex_state = 37, .external_lex_state = 2},
  [634] = {.lex_state = 298},
  [635] = {.lex_state = 37, .external_lex_state = 2},
  [636] = {.lex_state = 176, .external_lex_state = 5},
  [637] = {.lex_state = 176, .external_lex_state = 5},
  [638] = {.lex_state = 176, .external_lex_state = 5},
  [639] = {.lex_state = 176, .external_lex_state = 5},
  [640] = {.lex_state = 176, .external_lex_state = 3},
  [641] = {.lex_state = 176, .external_lex_state = 3},
  [642] = {.lex_state = 176, .external_lex_state = 3},
  [643] = {.lex_state = 176, .external_lex_state = 5},
  [644] = {.lex_state = 176, .external_lex_state = 5},
  [645] = {.lex_state = 176, .external_lex_state = 3},
  [646] = {.lex_state = 37, .external_lex_state = 2},
  [647] = {.lex_state = 37, .external_lex_state = 2},
  [648] = {.lex_state = 35},
  [649] = {.lex_state = 178},
  [650] = {.lex_state = 37, .external_lex_state = 2},
  [651] = {.lex_state = 176, .external_lex_state = 5},
  [652] = {.lex_state = 176, .external_lex_state = 5},
  [653] = {.lex_state = 176, .external_lex_state = 5},
  [654] = {.lex_state = 176, .external_lex_state = 5},
  [655] = {.lex_state = 176, .external_lex_state = 5},
  [656] = {.lex_state = 176, .external_lex_state = 5},
  [657] = {.lex_state = 176, .external_lex_state = 3},
  [658] = {.lex_state = 176, .external_lex_state = 5},
  [659] = {.lex_state = 35, .external_lex_state = 2},
  [660] = {.lex_state = 177, .external_lex_state = 2},
  [661] = {.lex_state = 176, .external_lex_state = 3},
  [662] = {.lex_state = 176, .external_lex_state = 3},
  [663] = {.lex_state = 37},
  [664] = {.lex_state = 37},
  [665] = {.lex_state = 298},
  [666] = {.lex_state = 35},
  [667] = {.lex_state = 298},
  [668] = {.lex_state = 176, .external_lex_state = 5},
  [669] = {.lex_state = 176, .external_lex_state = 3},
  [670] = {.lex_state = 176, .external_lex_state = 3},
  [671] = {.lex_state = 176, .external_lex_state = 5},
  [672] = {.lex_state = 176, .external_lex_state = 5},
  [673] = {.lex_state = 176, .external_lex_state = 3},
  [674] = {.lex_state = 35},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
  ts_external_token_math_shift,
  ts_external_token_end_group,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
  [ts_external_token_math_shift] = sym_math_shift,
  [ts_external_token_end_group] = sym_end_group,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
    [ts_external_token_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [2] = {
    [ts_external_token_math_shift] = true,
  },
  [3] = {
    [ts_external_token_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [4] = {
    [ts_external_token_verb_delim] = true,
  },
  [5] = {
    [ts_external_token_end_group] = true,
  },
  [6] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
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
    [sym_math_shift] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(19),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(19),
    [sym_text] = ACTIONS(19),
  },
  [2] = {
    [sym__common] = STATE(42),
    [sym__math_mode_common] = STATE(42),
    [sym__math_mode] = STATE(42),
    [sym_math_mode] = STATE(37),
    [sym_parameter] = STATE(42),
    [sym_math_env] = STATE(42),
    [sym_tag] = STATE(42),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(42),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(42),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(42),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(42),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(42),
    [sym_opt_math_group] = STATE(42),
    [sym_token] = STATE(42),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(42),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(31),
    [sym_alignment_tab] = ACTIONS(33),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_text] = ACTIONS(33),
  },
  [3] = {
    [sym_math_shift] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(35),
    [sym_begin_group] = ACTIONS(35),
    [sym_alignment_tab] = ACTIONS(35),
    [sym_parameter_char] = ACTIONS(35),
    [sym_superscript] = ACTIONS(35),
    [sym_subscript] = ACTIONS(35),
    [sym_active_char] = ACTIONS(35),
    [sym_text] = ACTIONS(35),
  },
  [4] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [anon_sym_makeatletter] = ACTIONS(69),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(71),
  },
  [5] = {
    [sym__common] = STATE(86),
    [sym__text_mode_common] = STATE(86),
    [sym_inline_verbatim] = STATE(86),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(86),
    [sym_text_mode_at_region] = STATE(86),
    [sym_parameter] = STATE(86),
    [sym_text_env] = STATE(86),
    [sym__display_math] = STATE(86),
    [sym_tex_display_math] = STATE(86),
    [sym_latex_display_math] = STATE(86),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(86),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(86),
    [sym_tex_inline_math] = STATE(86),
    [sym_latex_inline_math] = STATE(86),
    [sym_inline_math_env] = STATE(86),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(86),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(86),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(86),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(86),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(86),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(86),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(86),
    [sym_opt_text_group] = STATE(86),
    [sym_token] = STATE(86),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(86),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(79),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [6] = {
    [sym_math_shift] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(87),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [sym_text] = ACTIONS(87),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(91),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(91),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [11] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(100),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [12] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(101),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [13] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(102),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [14] = {
    [sym_verbatim_end] = STATE(104),
    [sym_verbatim_text] = STATE(105),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(108),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
    [sym__end_of_line] = ACTIONS(107),
  },
  [15] = {
    [sym__common] = STATE(112),
    [sym__text_mode_common] = STATE(112),
    [sym_inline_verbatim] = STATE(112),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(112),
    [sym_text_mode_at_region] = STATE(112),
    [sym_parameter] = STATE(112),
    [sym_text_env] = STATE(112),
    [sym__display_math] = STATE(112),
    [sym_tex_display_math] = STATE(112),
    [sym_latex_display_math] = STATE(112),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(112),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(112),
    [sym_tex_inline_math] = STATE(112),
    [sym_latex_inline_math] = STATE(112),
    [sym_inline_math_env] = STATE(112),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(112),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(112),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(110),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(112),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(112),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(112),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(112),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(112),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(112),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(112),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(112),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(112),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(112),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(112),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(112),
    [sym_opt_text_group] = STATE(112),
    [sym_token] = STATE(112),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(112),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(114),
    [sym_inline_math_env_group] = STATE(115),
    [sym_verbatim_env_group] = STATE(116),
    [sym_simple_text_group] = STATE(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(113),
  },
  [17] = {
    [sym_simple_text_group] = STATE(119),
    [sym_opt_text_group] = STATE(120),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [18] = {
    [sym_simple_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(123),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [19] = {
    [sym_text_group] = STATE(124),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [20] = {
    [sym_text_group] = STATE(125),
    [sym_opt_text_group] = STATE(126),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [21] = {
    [sym_math_shift] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [22] = {
    [sym_escaped] = STATE(128),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(119),
  },
  [23] = {
    [sym_text_group] = STATE(129),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [24] = {
    [sym_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [25] = {
    [sym_text_group] = STATE(132),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [26] = {
    [sym_text_group] = STATE(133),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [27] = {
    [sym_text_group] = STATE(134),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [28] = {
    [sym__common] = STATE(155),
    [sym__text_mode_common] = STATE(155),
    [sym_inline_verbatim] = STATE(155),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(155),
    [sym_text_mode_at] = STATE(138),
    [sym_parameter] = STATE(155),
    [sym_text_env_at] = STATE(155),
    [sym__display_math_at] = STATE(155),
    [sym_tex_display_math_at] = STATE(155),
    [sym_latex_display_math_at] = STATE(155),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(155),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(155),
    [sym_tex_inline_math_at] = STATE(155),
    [sym_latex_inline_math_at] = STATE(155),
    [sym_inline_math_env_at] = STATE(155),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(155),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(155),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(155),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(155),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(155),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(155),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(155),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(155),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(155),
    [sym_texttt_token] = STATE(151),
    [sym_makeatother] = STATE(152),
    [sym_makeatother_token] = STATE(153),
    [sym_text_group_at] = STATE(155),
    [sym_opt_text_group_at] = STATE(155),
    [sym_token_at] = STATE(155),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [29] = {
    [sym_math_shift] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [30] = {
    [sym__common] = STATE(158),
    [sym__text_mode_common] = STATE(158),
    [sym_inline_verbatim] = STATE(158),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(158),
    [sym_text_mode_at_region] = STATE(158),
    [sym_parameter] = STATE(158),
    [sym_text_env] = STATE(158),
    [sym__display_math] = STATE(158),
    [sym_tex_display_math] = STATE(158),
    [sym_latex_display_math] = STATE(158),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(158),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(158),
    [sym_tex_inline_math] = STATE(158),
    [sym_latex_inline_math] = STATE(158),
    [sym_inline_math_env] = STATE(158),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(158),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(158),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(158),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(158),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(158),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(158),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(158),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(158),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(158),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(158),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(158),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(158),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(158),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(158),
    [sym_opt_text_group] = STATE(158),
    [sym_token] = STATE(158),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(157),
    [aux_sym_text_mode_repeat1] = STATE(158),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [31] = {
    [sym__common] = STATE(159),
    [sym__text_mode_common] = STATE(159),
    [sym_inline_verbatim] = STATE(159),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(159),
    [sym_text_mode_at_region] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_text_env] = STATE(159),
    [sym__display_math] = STATE(159),
    [sym_tex_display_math] = STATE(159),
    [sym_latex_display_math] = STATE(159),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(159),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(159),
    [sym_tex_inline_math] = STATE(159),
    [sym_latex_inline_math] = STATE(159),
    [sym_inline_math_env] = STATE(159),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(159),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(159),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(159),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(159),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(159),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(159),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(159),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(159),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(159),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(137),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(141),
  },
  [33] = {
    [sym__common] = STATE(42),
    [sym__math_mode_common] = STATE(42),
    [sym__math_mode] = STATE(42),
    [sym_math_mode] = STATE(162),
    [sym_parameter] = STATE(42),
    [sym_math_env] = STATE(42),
    [sym_tag] = STATE(42),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(42),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(42),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(42),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(42),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(42),
    [sym_opt_math_group] = STATE(42),
    [sym_token] = STATE(42),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(42),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(31),
    [sym_alignment_tab] = ACTIONS(33),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_text] = ACTIONS(33),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(35),
    [sym_begin_group] = ACTIONS(35),
    [sym_alignment_tab] = ACTIONS(35),
    [sym_parameter_char] = ACTIONS(35),
    [sym_superscript] = ACTIONS(35),
    [sym_subscript] = ACTIONS(35),
    [sym_active_char] = ACTIONS(35),
    [sym_text] = ACTIONS(35),
  },
  [35] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(71),
  },
  [36] = {
    [sym__common] = STATE(173),
    [sym__math_mode_common] = STATE(173),
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_env] = STATE(173),
    [sym_tag] = STATE(173),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(173),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(173),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(173),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(173),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(173),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(173),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_text] = ACTIONS(151),
  },
  [37] = {
    [sym_math_shift] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [38] = {
    [sym_math_text_group] = STATE(177),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(157),
  },
  [39] = {
    [sym__common] = STATE(180),
    [sym__math_mode_common] = STATE(180),
    [sym__math_mode] = STATE(180),
    [sym_parameter] = STATE(180),
    [sym_math_env] = STATE(180),
    [sym_tag] = STATE(180),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(180),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(179),
    [sym_end_token] = STATE(111),
    [sym_include] = STATE(180),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(180),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(180),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(180),
    [sym_opt_math_group] = STATE(180),
    [sym_token] = STATE(180),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(180),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [40] = {
    [sym_simple_text_group] = STATE(182),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(163),
  },
  [41] = {
    [sym__common] = STATE(184),
    [sym__math_mode_common] = STATE(184),
    [sym__math_mode] = STATE(184),
    [sym_parameter] = STATE(184),
    [sym_math_env] = STATE(184),
    [sym_tag] = STATE(184),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(184),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(184),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(184),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(184),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(184),
    [sym_opt_math_group] = STATE(184),
    [sym_token] = STATE(184),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(183),
    [aux_sym_math_mode_repeat1] = STATE(184),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_text] = ACTIONS(165),
  },
  [42] = {
    [sym__common] = STATE(185),
    [sym__math_mode_common] = STATE(185),
    [sym__math_mode] = STATE(185),
    [sym_parameter] = STATE(185),
    [sym_math_env] = STATE(185),
    [sym_tag] = STATE(185),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(185),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(185),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(185),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(185),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(185),
    [sym_opt_math_group] = STATE(185),
    [sym_token] = STATE(185),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(185),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(31),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [43] = {
    [sym_verb_delim] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_text] = ACTIONS(177),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(183),
  },
  [46] = {
    [sym_math_shift] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(185),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(187),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(189),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(193),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(197),
  },
  [50] = {
    [sym__whitespace] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(201),
  },
  [51] = {
    [sym__whitespace] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(205),
  },
  [52] = {
    [sym_math_shift] = ACTIONS(209),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym__whitespace] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(213),
  },
  [53] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(215),
  },
  [54] = {
    [sym__whitespace] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(219),
  },
  [55] = {
    [sym__whitespace] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(223),
  },
  [56] = {
    [sym__whitespace] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(227),
  },
  [57] = {
    [sym__whitespace] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(231),
  },
  [58] = {
    [sym__whitespace] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(235),
  },
  [59] = {
    [sym_math_shift] = ACTIONS(237),
    [sym__whitespace] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_text] = ACTIONS(241),
  },
  [60] = {
    [sym_math_shift] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym__whitespace] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(247),
  },
  [61] = {
    [sym__common] = STATE(42),
    [sym__math_mode_common] = STATE(42),
    [sym__math_mode] = STATE(42),
    [sym_math_mode] = STATE(203),
    [sym_parameter] = STATE(42),
    [sym_math_env] = STATE(42),
    [sym_tag] = STATE(42),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(42),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(42),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(42),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(42),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(42),
    [sym_opt_math_group] = STATE(42),
    [sym_token] = STATE(42),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(42),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(31),
    [sym_alignment_tab] = ACTIONS(33),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_text] = ACTIONS(33),
  },
  [62] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(251),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(253),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [anon_sym_makeatletter] = ACTIONS(69),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(255),
  },
  [63] = {
    [sym__common] = STATE(208),
    [sym__text_mode_common] = STATE(208),
    [sym_inline_verbatim] = STATE(208),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(208),
    [sym_text_mode_at_region] = STATE(208),
    [sym_parameter] = STATE(208),
    [sym_text_env] = STATE(208),
    [sym__display_math] = STATE(208),
    [sym_tex_display_math] = STATE(208),
    [sym_latex_display_math] = STATE(208),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(208),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(208),
    [sym_tex_inline_math] = STATE(208),
    [sym_latex_inline_math] = STATE(208),
    [sym_inline_math_env] = STATE(208),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(208),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(208),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(208),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(208),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(208),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(208),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(208),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(208),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(208),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(208),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(208),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(208),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(208),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(208),
    [sym_opt_text_group] = STATE(208),
    [sym_token] = STATE(208),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(208),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(257),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [64] = {
    [sym_math_shift] = ACTIONS(261),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [65] = {
    [sym_math_shift] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(87),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [sym_text] = ACTIONS(87),
  },
  [66] = {
    [sym_verb_delim] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [67] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(210),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [68] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(211),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [69] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(212),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [70] = {
    [sym__common] = STATE(98),
    [sym__math_mode_common] = STATE(98),
    [sym__math_mode] = STATE(98),
    [sym_math_mode] = STATE(213),
    [sym_parameter] = STATE(98),
    [sym_math_env] = STATE(98),
    [sym_tag] = STATE(98),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(98),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(98),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(98),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(98),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(98),
    [sym_opt_math_group] = STATE(98),
    [sym_token] = STATE(98),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(98),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [71] = {
    [sym_verbatim_end] = STATE(214),
    [sym_verbatim_text] = STATE(215),
    [sym_end_token] = STATE(216),
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(108),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
    [sym__end_of_line] = ACTIONS(107),
  },
  [72] = {
    [sym__common] = STATE(219),
    [sym__text_mode_common] = STATE(219),
    [sym_inline_verbatim] = STATE(219),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(219),
    [sym_text_mode_at_region] = STATE(219),
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
    [sym_end] = STATE(217),
    [sym_end_token] = STATE(218),
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
    [sym_footnote] = STATE(219),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(219),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(219),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(219),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(219),
    [sym_opt_text_group] = STATE(219),
    [sym_token] = STATE(219),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(219),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [73] = {
    [sym_simple_text_group] = STATE(221),
    [sym_opt_text_group] = STATE(222),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [74] = {
    [sym_simple_text_group] = STATE(223),
    [sym_opt_text_group] = STATE(224),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [75] = {
    [sym_text_group] = STATE(225),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [76] = {
    [sym_text_group] = STATE(226),
    [sym_opt_text_group] = STATE(227),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [77] = {
    [sym_math_shift] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_end_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [78] = {
    [sym_escaped] = STATE(228),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(119),
  },
  [79] = {
    [sym_text_group] = STATE(229),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [80] = {
    [sym_text_group] = STATE(230),
    [sym_opt_text_group] = STATE(231),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [81] = {
    [sym_text_group] = STATE(232),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [82] = {
    [sym_text_group] = STATE(233),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [83] = {
    [sym_text_group] = STATE(234),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [84] = {
    [sym__common] = STATE(155),
    [sym__text_mode_common] = STATE(155),
    [sym_inline_verbatim] = STATE(155),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(155),
    [sym_text_mode_at] = STATE(236),
    [sym_parameter] = STATE(155),
    [sym_text_env_at] = STATE(155),
    [sym__display_math_at] = STATE(155),
    [sym_tex_display_math_at] = STATE(155),
    [sym_latex_display_math_at] = STATE(155),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(155),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(155),
    [sym_tex_inline_math_at] = STATE(155),
    [sym_latex_inline_math_at] = STATE(155),
    [sym_inline_math_env_at] = STATE(155),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(155),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(155),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(155),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(155),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(155),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(155),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(155),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(155),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(155),
    [sym_texttt_token] = STATE(151),
    [sym_makeatother] = STATE(237),
    [sym_makeatother_token] = STATE(238),
    [sym_text_group_at] = STATE(155),
    [sym_opt_text_group_at] = STATE(155),
    [sym_token_at] = STATE(155),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [85] = {
    [sym__common] = STATE(241),
    [sym__text_mode_common] = STATE(241),
    [sym_inline_verbatim] = STATE(241),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(241),
    [sym_text_mode_at_region] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_env] = STATE(241),
    [sym__display_math] = STATE(241),
    [sym_tex_display_math] = STATE(241),
    [sym_latex_display_math] = STATE(241),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(241),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(241),
    [sym_tex_inline_math] = STATE(241),
    [sym_latex_inline_math] = STATE(241),
    [sym_inline_math_env] = STATE(241),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(241),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(241),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(241),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(241),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(241),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(241),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(241),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(241),
    [sym_opt_text_group] = STATE(241),
    [sym_token] = STATE(241),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(240),
    [aux_sym_text_mode_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(273),
    [sym_text] = ACTIONS(273),
  },
  [86] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [87] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(279),
  },
  [88] = {
    [sym_verb_body] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [89] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(283),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(285),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(287),
  },
  [90] = {
    [sym__common] = STATE(250),
    [sym__math_mode_common] = STATE(250),
    [sym__math_mode] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_math_env] = STATE(250),
    [sym_tag] = STATE(250),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(250),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(250),
    [sym_opt_math_group] = STATE(250),
    [sym_token] = STATE(250),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(289),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [91] = {
    [sym_end_display_math] = STATE(252),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(293),
  },
  [92] = {
    [sym_math_text_group] = STATE(254),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(295),
  },
  [93] = {
    [sym__common] = STATE(257),
    [sym__math_mode_common] = STATE(257),
    [sym__math_mode] = STATE(257),
    [sym_parameter] = STATE(257),
    [sym_math_env] = STATE(257),
    [sym_tag] = STATE(257),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(257),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(255),
    [sym_end_token] = STATE(256),
    [sym_include] = STATE(257),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(257),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(257),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(257),
    [sym_opt_math_group] = STATE(257),
    [sym_token] = STATE(257),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(257),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [94] = {
    [sym_text_group] = STATE(259),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(299),
  },
  [95] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [96] = {
    [sym_escaped] = STATE(260),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(119),
  },
  [97] = {
    [sym__common] = STATE(263),
    [sym__math_mode_common] = STATE(263),
    [sym__math_mode] = STATE(263),
    [sym_parameter] = STATE(263),
    [sym_math_env] = STATE(263),
    [sym_tag] = STATE(263),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(263),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(263),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(263),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(263),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(263),
    [sym_opt_math_group] = STATE(263),
    [sym_token] = STATE(263),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(262),
    [aux_sym_math_mode_repeat1] = STATE(263),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(303),
  },
  [98] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [99] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(307),
  },
  [100] = {
    [sym_end_inline_math] = STATE(267),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(309),
  },
  [101] = {
    [sym_display_math_end] = STATE(268),
    [sym_end_token] = STATE(269),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [102] = {
    [sym_inline_math_end] = STATE(270),
    [sym_end_token] = STATE(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [103] = {
    [anon_sym_end] = ACTIONS(311),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [104] = {
    [sym_math_shift] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [105] = {
    [sym_verbatim_end] = STATE(273),
    [sym_end_token] = STATE(106),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [106] = {
    [sym_verbatim_env_group] = STATE(275),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(315),
  },
  [107] = {
    [aux_sym_verbatim_text_repeat1] = STATE(277),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(319),
  },
  [108] = {
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(278),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(321),
    [sym__end_of_line] = ACTIONS(323),
  },
  [109] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(325),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [anon_sym_makeatletter] = ACTIONS(69),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(71),
  },
  [110] = {
    [sym_math_shift] = ACTIONS(327),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [111] = {
    [sym_simple_text_group] = STATE(279),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [112] = {
    [sym__common] = STATE(281),
    [sym__text_mode_common] = STATE(281),
    [sym_inline_verbatim] = STATE(281),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(281),
    [sym_text_mode_at_region] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_text_env] = STATE(281),
    [sym__display_math] = STATE(281),
    [sym_tex_display_math] = STATE(281),
    [sym_latex_display_math] = STATE(281),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(281),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(281),
    [sym_tex_inline_math] = STATE(281),
    [sym_latex_inline_math] = STATE(281),
    [sym_inline_math_env] = STATE(281),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(281),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(280),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(281),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(281),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(281),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(281),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(281),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(281),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(281),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(281),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(281),
    [sym_opt_text_group] = STATE(281),
    [sym_token] = STATE(281),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [113] = {
    [sym_display_math_env_name] = ACTIONS(331),
    [sym_inline_math_env_name] = ACTIONS(333),
    [sym_verbatim_env_name] = ACTIONS(335),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(337),
  },
  [114] = {
    [sym_text_group] = STATE(288),
    [sym_opt_text_group] = STATE(289),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(341),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_text] = ACTIONS(343),
  },
  [116] = {
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(292),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(345),
  },
  [117] = {
    [sym_math_shift] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [118] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(349),
  },
  [119] = {
    [sym_math_shift] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [120] = {
    [sym_simple_text_group] = STATE(294),
    [sym__whitespace] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [121] = {
    [sym__common] = STATE(297),
    [sym__text_mode_common] = STATE(297),
    [sym_inline_verbatim] = STATE(297),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(297),
    [sym_text_mode_at_region] = STATE(297),
    [sym_parameter] = STATE(297),
    [sym_text_env] = STATE(297),
    [sym__display_math] = STATE(297),
    [sym_tex_display_math] = STATE(297),
    [sym_latex_display_math] = STATE(297),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(297),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(297),
    [sym_tex_inline_math] = STATE(297),
    [sym_latex_inline_math] = STATE(297),
    [sym_inline_math_env] = STATE(297),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(297),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(297),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(297),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(297),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(297),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(297),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(297),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(297),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(297),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(297),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(297),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(297),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(297),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(297),
    [sym_opt_text_group] = STATE(297),
    [sym_token] = STATE(297),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(296),
    [aux_sym_text_mode_repeat1] = STATE(297),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(357),
    [sym_text] = ACTIONS(357),
  },
  [122] = {
    [sym_math_shift] = ACTIONS(359),
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [123] = {
    [sym_simple_text_group] = STATE(299),
    [sym__whitespace] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [124] = {
    [sym_math_shift] = ACTIONS(363),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [125] = {
    [sym_math_shift] = ACTIONS(365),
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [126] = {
    [sym_text_group] = STATE(301),
    [sym__whitespace] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [127] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [128] = {
    [anon_sym_EQ] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [129] = {
    [sym_math_shift] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [130] = {
    [sym_math_shift] = ACTIONS(375),
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [131] = {
    [sym_text_group] = STATE(305),
    [sym__whitespace] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [132] = {
    [sym_math_shift] = ACTIONS(379),
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [133] = {
    [sym_math_shift] = ACTIONS(381),
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [134] = {
    [sym_math_shift] = ACTIONS(383),
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [135] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_math_mode_at] = STATE(309),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [136] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [anon_sym_makeatother] = ACTIONS(393),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(395),
  },
  [137] = {
    [sym__common] = STATE(333),
    [sym__text_mode_common] = STATE(333),
    [sym_inline_verbatim] = STATE(333),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(333),
    [sym_parameter] = STATE(333),
    [sym_text_env_at] = STATE(333),
    [sym__display_math_at] = STATE(333),
    [sym_tex_display_math_at] = STATE(333),
    [sym_latex_display_math_at] = STATE(333),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(333),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(333),
    [sym_tex_inline_math_at] = STATE(333),
    [sym_latex_inline_math_at] = STATE(333),
    [sym_inline_math_env_at] = STATE(333),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(333),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(333),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(333),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(333),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(333),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(333),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(333),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(333),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(333),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(333),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(333),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(333),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(333),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(333),
    [sym_opt_text_group_at] = STATE(333),
    [sym_token_at] = STATE(333),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(333),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [138] = {
    [sym_makeatother] = STATE(335),
    [sym_makeatother_token] = STATE(153),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(407),
  },
  [139] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(338),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [140] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(344),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [141] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(345),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [142] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(346),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [143] = {
    [sym__common] = STATE(349),
    [sym__text_mode_common] = STATE(349),
    [sym_inline_verbatim] = STATE(349),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(349),
    [sym_parameter] = STATE(349),
    [sym_text_env_at] = STATE(349),
    [sym__display_math_at] = STATE(349),
    [sym_tex_display_math_at] = STATE(349),
    [sym_latex_display_math_at] = STATE(349),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(349),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(349),
    [sym_tex_inline_math_at] = STATE(349),
    [sym_latex_inline_math_at] = STATE(349),
    [sym_inline_math_env_at] = STATE(349),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(349),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(349),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(348),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(349),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(349),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(349),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(349),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(349),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(349),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(349),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(349),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(349),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(349),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(349),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(349),
    [sym_opt_text_group_at] = STATE(349),
    [sym_token_at] = STATE(349),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(349),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [144] = {
    [sym_display_math_env_group] = STATE(350),
    [sym_inline_math_env_group] = STATE(115),
    [sym_verbatim_env_group] = STATE(116),
    [sym_simple_text_group] = STATE(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(113),
  },
  [145] = {
    [sym_text_group_at] = STATE(351),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [146] = {
    [sym_text_group_at] = STATE(352),
    [sym_opt_text_group_at] = STATE(353),
    [sym_begin_opt] = STATE(354),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [147] = {
    [sym_text_group_at] = STATE(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [148] = {
    [sym_text_group_at] = STATE(356),
    [sym_opt_text_group_at] = STATE(357),
    [sym_begin_opt] = STATE(354),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [149] = {
    [sym_text_group_at] = STATE(358),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [150] = {
    [sym_text_group_at] = STATE(359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [151] = {
    [sym_text_group_at] = STATE(360),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [152] = {
    [sym_math_shift] = ACTIONS(419),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(419),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [153] = {
    [sym_math_shift] = ACTIONS(421),
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(421),
    [sym_begin_group] = ACTIONS(421),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [154] = {
    [sym__common] = STATE(363),
    [sym__text_mode_common] = STATE(363),
    [sym_inline_verbatim] = STATE(363),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(363),
    [sym_parameter] = STATE(363),
    [sym_text_env_at] = STATE(363),
    [sym__display_math_at] = STATE(363),
    [sym_tex_display_math_at] = STATE(363),
    [sym_latex_display_math_at] = STATE(363),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(363),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(363),
    [sym_tex_inline_math_at] = STATE(363),
    [sym_latex_inline_math_at] = STATE(363),
    [sym_inline_math_env_at] = STATE(363),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(363),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(363),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(363),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(363),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(363),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(363),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(363),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(363),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(363),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(363),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(363),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(363),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(363),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(363),
    [sym_opt_text_group_at] = STATE(363),
    [sym_token_at] = STATE(363),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(362),
    [aux_sym_text_mode_at_repeat1] = STATE(363),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [155] = {
    [sym__common] = STATE(364),
    [sym__text_mode_common] = STATE(364),
    [sym_inline_verbatim] = STATE(364),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(364),
    [sym_parameter] = STATE(364),
    [sym_text_env_at] = STATE(364),
    [sym__display_math_at] = STATE(364),
    [sym_tex_display_math_at] = STATE(364),
    [sym_latex_display_math_at] = STATE(364),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(364),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(364),
    [sym_tex_inline_math_at] = STATE(364),
    [sym_latex_inline_math_at] = STATE(364),
    [sym_inline_math_env_at] = STATE(364),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(364),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(364),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(364),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(364),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(364),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(364),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(364),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(364),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(364),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(364),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(364),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(364),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(364),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(364),
    [sym_opt_text_group_at] = STATE(364),
    [sym_token_at] = STATE(364),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(364),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(429),
    [sym_text] = ACTIONS(429),
  },
  [156] = {
    [sym_math_shift] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [157] = {
    [sym_math_shift] = ACTIONS(433),
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(433),
    [sym_begin_group] = ACTIONS(433),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(433),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(433),
    [sym_active_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [158] = {
    [sym__common] = STATE(366),
    [sym__text_mode_common] = STATE(366),
    [sym_inline_verbatim] = STATE(366),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(366),
    [sym_text_mode_at_region] = STATE(366),
    [sym_parameter] = STATE(366),
    [sym_text_env] = STATE(366),
    [sym__display_math] = STATE(366),
    [sym_tex_display_math] = STATE(366),
    [sym_latex_display_math] = STATE(366),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(366),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(366),
    [sym_tex_inline_math] = STATE(366),
    [sym_latex_inline_math] = STATE(366),
    [sym_inline_math_env] = STATE(366),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(366),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(366),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(366),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(366),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(366),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(366),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(366),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(366),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(366),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(366),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(366),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(366),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(366),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(366),
    [sym_opt_text_group] = STATE(366),
    [sym_token] = STATE(366),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(365),
    [aux_sym_text_mode_repeat1] = STATE(366),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [159] = {
    [sym__common] = STATE(159),
    [sym__text_mode_common] = STATE(159),
    [sym_inline_verbatim] = STATE(159),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(159),
    [sym_text_mode_at_region] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_text_env] = STATE(159),
    [sym__display_math] = STATE(159),
    [sym_tex_display_math] = STATE(159),
    [sym_latex_display_math] = STATE(159),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(159),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(159),
    [sym_tex_inline_math] = STATE(159),
    [sym_latex_inline_math] = STATE(159),
    [sym_inline_math_env] = STATE(159),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(159),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(159),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(159),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(159),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(159),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(159),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(159),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(159),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(159),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(159),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(159),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(159),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(159),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(159),
    [sym_token] = STATE(159),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(159),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(437),
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(448),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(451),
    [sym_text] = ACTIONS(451),
  },
  [160] = {
    [sym_math_shift] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [161] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(462),
    [sym_number] = ACTIONS(465),
  },
  [162] = {
    [sym_math_shift] = ACTIONS(467),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [163] = {
    [sym__whitespace] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(471),
  },
  [164] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(473),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(475),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(477),
  },
  [165] = {
    [sym__common] = STATE(373),
    [sym__math_mode_common] = STATE(373),
    [sym__math_mode] = STATE(373),
    [sym_parameter] = STATE(373),
    [sym_math_env] = STATE(373),
    [sym_tag] = STATE(373),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(373),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(373),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(373),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(373),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(373),
    [sym_opt_math_group] = STATE(373),
    [sym_token] = STATE(373),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(373),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_text] = ACTIONS(481),
  },
  [166] = {
    [sym_math_shift] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_text] = ACTIONS(483),
  },
  [167] = {
    [sym_math_text_group] = STATE(375),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(485),
  },
  [168] = {
    [sym__common] = STATE(378),
    [sym__math_mode_common] = STATE(378),
    [sym__math_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_math_env] = STATE(378),
    [sym_tag] = STATE(378),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(378),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(376),
    [sym_end_token] = STATE(377),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(378),
    [sym_opt_math_group] = STATE(378),
    [sym_token] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(487),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(487),
    [sym_subscript] = ACTIONS(487),
    [sym_active_char] = ACTIONS(487),
    [sym_text] = ACTIONS(487),
  },
  [169] = {
    [sym_text_group] = STATE(380),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(489),
  },
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_end_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [171] = {
    [sym_escaped] = STATE(381),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(119),
  },
  [172] = {
    [sym__common] = STATE(384),
    [sym__math_mode_common] = STATE(384),
    [sym__math_mode] = STATE(384),
    [sym_parameter] = STATE(384),
    [sym_math_env] = STATE(384),
    [sym_tag] = STATE(384),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(384),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(384),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(384),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(384),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(384),
    [sym_opt_math_group] = STATE(384),
    [sym_token] = STATE(384),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(383),
    [aux_sym_math_mode_repeat1] = STATE(384),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [173] = {
    [sym__common] = STATE(386),
    [sym__math_mode_common] = STATE(386),
    [sym__math_mode] = STATE(386),
    [sym_parameter] = STATE(386),
    [sym_math_env] = STATE(386),
    [sym_tag] = STATE(386),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(386),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(386),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(386),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(386),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(386),
    [sym_opt_math_group] = STATE(386),
    [sym_token] = STATE(386),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(386),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(495),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [174] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(499),
  },
  [175] = {
    [sym_math_shift] = ACTIONS(501),
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [176] = {
    [sym__common] = STATE(390),
    [sym__text_mode_common] = STATE(390),
    [sym_inline_verbatim] = STATE(390),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(390),
    [sym_text_mode] = STATE(389),
    [sym_text_mode_at_region] = STATE(390),
    [sym_parameter] = STATE(390),
    [sym_text_env] = STATE(390),
    [sym__display_math] = STATE(390),
    [sym_tex_display_math] = STATE(390),
    [sym_latex_display_math] = STATE(390),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(390),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(390),
    [sym_tex_inline_math] = STATE(390),
    [sym_latex_inline_math] = STATE(390),
    [sym_inline_math_env] = STATE(390),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(390),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(390),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(390),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(390),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(390),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(390),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(390),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(390),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(390),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(390),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(390),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(390),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(390),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(390),
    [sym_opt_text_group] = STATE(390),
    [sym_token] = STATE(390),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(390),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [177] = {
    [sym_math_shift] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(507),
    [sym_begin_group] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [178] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(283),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(325),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(285),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(287),
  },
  [179] = {
    [sym_math_shift] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(509),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [sym_text] = ACTIONS(509),
  },
  [180] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(391),
    [sym_end_token] = STATE(111),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(511),
  },
  [182] = {
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [183] = {
    [sym_math_shift] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [184] = {
    [sym__common] = STATE(394),
    [sym__math_mode_common] = STATE(394),
    [sym__math_mode] = STATE(394),
    [sym_parameter] = STATE(394),
    [sym_math_env] = STATE(394),
    [sym_tag] = STATE(394),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(394),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(394),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(394),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(394),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(394),
    [sym_opt_math_group] = STATE(394),
    [sym_token] = STATE(394),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(393),
    [aux_sym_math_mode_repeat1] = STATE(394),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(515),
    [sym_subscript] = ACTIONS(515),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [185] = {
    [sym__common] = STATE(185),
    [sym__math_mode_common] = STATE(185),
    [sym__math_mode] = STATE(185),
    [sym_parameter] = STATE(185),
    [sym_math_env] = STATE(185),
    [sym_tag] = STATE(185),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(185),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(185),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(185),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(185),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(185),
    [sym_opt_math_group] = STATE(185),
    [sym_token] = STATE(185),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(185),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(522),
    [sym_begin_group] = ACTIONS(525),
    [sym_alignment_tab] = ACTIONS(528),
    [sym_parameter_char] = ACTIONS(531),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(528),
    [sym_text] = ACTIONS(528),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(534),
    [sym_begin_group] = ACTIONS(534),
    [sym_alignment_tab] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(534),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_text] = ACTIONS(534),
  },
  [187] = {
    [anon_sym_LBRACK] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(536),
    [sym_begin_group] = ACTIONS(536),
    [sym_alignment_tab] = ACTIONS(536),
    [sym_parameter_char] = ACTIONS(536),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(536),
    [sym_text] = ACTIONS(536),
  },
  [188] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(538),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(540),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(540),
  },
  [190] = {
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(542),
  },
  [191] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(544),
  },
  [192] = {
    [sym__whitespace] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_STAR] = ACTIONS(550),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(548),
  },
  [193] = {
    [sym__whitespace] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(548),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(548),
  },
  [194] = {
    [sym_math_shift] = ACTIONS(552),
    [ts_builtin_sym_end] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [195] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(554),
  },
  [196] = {
    [anon_sym_LBRACK] = ACTIONS(556),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(556),
  },
  [197] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(558),
  },
  [198] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(560),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(562),
  },
  [200] = {
    [sym_math_shift] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(564),
    [sym_begin_group] = ACTIONS(564),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(564),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_text] = ACTIONS(564),
  },
  [201] = {
    [sym_math_shift] = ACTIONS(566),
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [202] = {
    [sym__common] = STATE(42),
    [sym__math_mode_common] = STATE(42),
    [sym__math_mode] = STATE(42),
    [sym_math_mode] = STATE(397),
    [sym_parameter] = STATE(42),
    [sym_math_env] = STATE(42),
    [sym_tag] = STATE(42),
    [sym_tag_token] = STATE(38),
    [sym_escaped] = STATE(42),
    [sym_begin] = STATE(39),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(42),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(42),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(42),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(42),
    [sym_opt_math_group] = STATE(42),
    [sym_token] = STATE(42),
    [sym_begin_opt] = STATE(41),
    [aux_sym_math_mode_repeat1] = STATE(42),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(29),
    [sym_begin_group] = ACTIONS(31),
    [sym_alignment_tab] = ACTIONS(33),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_text] = ACTIONS(33),
  },
  [203] = {
    [sym_math_shift] = ACTIONS(568),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [204] = {
    [sym_math_shift] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_end_group] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(185),
  },
  [205] = {
    [sym_math_shift] = ACTIONS(209),
    [sym__whitespace] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(213),
  },
  [206] = {
    [sym_math_shift] = ACTIONS(243),
    [sym__whitespace] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(247),
  },
  [207] = {
    [sym_math_shift] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_end_group] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [208] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(574),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [209] = {
    [sym_verb_body] = ACTIONS(576),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [210] = {
    [sym_end_display_math] = STATE(404),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(578),
  },
  [211] = {
    [sym_end_inline_math] = STATE(406),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(580),
  },
  [212] = {
    [sym_display_math_end] = STATE(407),
    [sym_end_token] = STATE(408),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [213] = {
    [sym_inline_math_end] = STATE(409),
    [sym_end_token] = STATE(410),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [214] = {
    [sym_math_shift] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_end_group] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [215] = {
    [sym_verbatim_end] = STATE(411),
    [sym_end_token] = STATE(216),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [216] = {
    [sym_verbatim_env_group] = STATE(413),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(582),
  },
  [217] = {
    [sym_math_shift] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_end_group] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [218] = {
    [sym_simple_text_group] = STATE(414),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [219] = {
    [sym__common] = STATE(281),
    [sym__text_mode_common] = STATE(281),
    [sym_inline_verbatim] = STATE(281),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(281),
    [sym_text_mode_at_region] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_text_env] = STATE(281),
    [sym__display_math] = STATE(281),
    [sym_tex_display_math] = STATE(281),
    [sym_latex_display_math] = STATE(281),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(281),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(281),
    [sym_tex_inline_math] = STATE(281),
    [sym_latex_inline_math] = STATE(281),
    [sym_inline_math_env] = STATE(281),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(281),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(415),
    [sym_end_token] = STATE(218),
    [sym_documentclass] = STATE(281),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(281),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(281),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(281),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(281),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(281),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(281),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(281),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(281),
    [sym_opt_text_group] = STATE(281),
    [sym_token] = STATE(281),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [220] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(584),
  },
  [221] = {
    [sym_math_shift] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_end_group] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [222] = {
    [sym_simple_text_group] = STATE(418),
    [sym__whitespace] = ACTIONS(586),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [223] = {
    [sym_math_shift] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [224] = {
    [sym_simple_text_group] = STATE(420),
    [sym__whitespace] = ACTIONS(588),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [225] = {
    [sym_math_shift] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [226] = {
    [sym_math_shift] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_end_group] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [227] = {
    [sym_text_group] = STATE(422),
    [sym__whitespace] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [228] = {
    [anon_sym_EQ] = ACTIONS(592),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [229] = {
    [sym_math_shift] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_end_group] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [230] = {
    [sym_math_shift] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [231] = {
    [sym_text_group] = STATE(425),
    [sym__whitespace] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [232] = {
    [sym_math_shift] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [233] = {
    [sym_math_shift] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [234] = {
    [sym_math_shift] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_end_group] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [235] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [anon_sym_makeatother] = ACTIONS(596),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(395),
  },
  [236] = {
    [sym_makeatother] = STATE(428),
    [sym_makeatother_token] = STATE(238),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(598),
  },
  [237] = {
    [sym_math_shift] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(419),
    [sym_end_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(419),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [238] = {
    [sym_math_shift] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [239] = {
    [sym_math_shift] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_end_group] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [240] = {
    [sym_math_shift] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(433),
    [sym_begin_group] = ACTIONS(433),
    [sym_end_group] = ACTIONS(433),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(433),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(433),
    [sym_active_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [241] = {
    [sym__common] = STATE(366),
    [sym__text_mode_common] = STATE(366),
    [sym_inline_verbatim] = STATE(366),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(366),
    [sym_text_mode_at_region] = STATE(366),
    [sym_parameter] = STATE(366),
    [sym_text_env] = STATE(366),
    [sym__display_math] = STATE(366),
    [sym_tex_display_math] = STATE(366),
    [sym_latex_display_math] = STATE(366),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(366),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(366),
    [sym_tex_inline_math] = STATE(366),
    [sym_latex_inline_math] = STATE(366),
    [sym_inline_math_env] = STATE(366),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(366),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(366),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(366),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(366),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(366),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(366),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(366),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(366),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(366),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(366),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(366),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(366),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(366),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(366),
    [sym_opt_text_group] = STATE(366),
    [sym_token] = STATE(366),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(429),
    [aux_sym_text_mode_repeat1] = STATE(366),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [242] = {
    [sym_math_shift] = ACTIONS(600),
    [ts_builtin_sym_end] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [243] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(608),
    [sym_end_group] = ACTIONS(440),
    [sym_alignment_tab] = ACTIONS(611),
    [sym_parameter_char] = ACTIONS(614),
    [sym_superscript] = ACTIONS(617),
    [sym_subscript] = ACTIONS(617),
    [sym_active_char] = ACTIONS(611),
    [sym_text] = ACTIONS(611),
  },
  [244] = {
    [sym_math_shift] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_end_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [245] = {
    [sym_verb_delim] = ACTIONS(620),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(185),
  },
  [247] = {
    [sym__whitespace] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(213),
  },
  [248] = {
    [sym__whitespace] = ACTIONS(624),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(247),
  },
  [249] = {
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_text] = ACTIONS(483),
  },
  [250] = {
    [sym__common] = STATE(386),
    [sym__math_mode_common] = STATE(386),
    [sym__math_mode] = STATE(386),
    [sym_parameter] = STATE(386),
    [sym_math_env] = STATE(386),
    [sym_tag] = STATE(386),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(386),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(386),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(386),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(386),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(386),
    [sym_opt_math_group] = STATE(386),
    [sym_token] = STATE(386),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(386),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(626),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [251] = {
    [anon_sym_RBRACK] = ACTIONS(628),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [252] = {
    [sym_math_shift] = ACTIONS(630),
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(630),
    [sym_begin_group] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(630),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(630),
    [sym_active_char] = ACTIONS(630),
    [sym_text] = ACTIONS(630),
  },
  [253] = {
    [sym__common] = STATE(390),
    [sym__text_mode_common] = STATE(390),
    [sym_inline_verbatim] = STATE(390),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(390),
    [sym_text_mode] = STATE(436),
    [sym_text_mode_at_region] = STATE(390),
    [sym_parameter] = STATE(390),
    [sym_text_env] = STATE(390),
    [sym__display_math] = STATE(390),
    [sym_tex_display_math] = STATE(390),
    [sym_latex_display_math] = STATE(390),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(390),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(390),
    [sym_tex_inline_math] = STATE(390),
    [sym_latex_inline_math] = STATE(390),
    [sym_inline_math_env] = STATE(390),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(390),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(390),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(390),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(390),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(390),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(390),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(390),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(390),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(390),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(390),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(390),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(390),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(390),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(390),
    [sym_opt_text_group] = STATE(390),
    [sym_token] = STATE(390),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(390),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(632),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [254] = {
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(507),
    [sym_begin_group] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(509),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [sym_text] = ACTIONS(509),
  },
  [256] = {
    [sym_simple_text_group] = STATE(437),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(163),
  },
  [257] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(438),
    [sym_end_token] = STATE(256),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [258] = {
    [sym__common] = STATE(440),
    [sym__text_mode_common] = STATE(440),
    [sym_inline_verbatim] = STATE(440),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(440),
    [sym_text_mode_at_region] = STATE(440),
    [sym_parameter] = STATE(440),
    [sym_text_env] = STATE(440),
    [sym__display_math] = STATE(440),
    [sym_tex_display_math] = STATE(440),
    [sym_latex_display_math] = STATE(440),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(440),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(440),
    [sym_tex_inline_math] = STATE(440),
    [sym_latex_inline_math] = STATE(440),
    [sym_inline_math_env] = STATE(440),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(440),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(440),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(440),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(440),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(440),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(440),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(440),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(440),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(440),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(440),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(440),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(440),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(440),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(440),
    [sym_opt_text_group] = STATE(440),
    [sym_token] = STATE(440),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(440),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(634),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(636),
    [sym_text] = ACTIONS(636),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [260] = {
    [anon_sym_EQ] = ACTIONS(638),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [263] = {
    [sym__common] = STATE(394),
    [sym__math_mode_common] = STATE(394),
    [sym__math_mode] = STATE(394),
    [sym_parameter] = STATE(394),
    [sym_math_env] = STATE(394),
    [sym_tag] = STATE(394),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(394),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(394),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(394),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(394),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(394),
    [sym_opt_math_group] = STATE(394),
    [sym_token] = STATE(394),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(442),
    [aux_sym_math_mode_repeat1] = STATE(394),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(515),
    [sym_subscript] = ACTIONS(515),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [264] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(640),
    [sym_begin_group] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_active_char] = ACTIONS(646),
    [sym_text] = ACTIONS(646),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [267] = {
    [sym_math_shift] = ACTIONS(654),
    [ts_builtin_sym_end] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(654),
    [sym_begin_group] = ACTIONS(654),
    [sym_alignment_tab] = ACTIONS(654),
    [sym_parameter_char] = ACTIONS(654),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(654),
    [sym_text] = ACTIONS(654),
  },
  [268] = {
    [sym_math_shift] = ACTIONS(656),
    [ts_builtin_sym_end] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(656),
  },
  [269] = {
    [sym_display_math_env_group] = STATE(445),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(658),
  },
  [270] = {
    [sym_math_shift] = ACTIONS(660),
    [ts_builtin_sym_end] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_RBRACK] = ACTIONS(660),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(660),
    [sym_begin_group] = ACTIONS(660),
    [sym_alignment_tab] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(660),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_text] = ACTIONS(660),
  },
  [271] = {
    [sym_inline_math_env_group] = STATE(447),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(662),
  },
  [272] = {
    [sym__whitespace] = ACTIONS(664),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(666),
  },
  [273] = {
    [sym_math_shift] = ACTIONS(668),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_alignment_tab] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_text] = ACTIONS(668),
  },
  [274] = {
    [sym_verbatim_env_name] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [275] = {
    [sym_math_shift] = ACTIONS(672),
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_text] = ACTIONS(672),
  },
  [276] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(676),
    [sym__end_of_line] = ACTIONS(676),
  },
  [277] = {
    [aux_sym_verbatim_text_repeat1] = STATE(277),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(678),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(681),
  },
  [278] = {
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(278),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(683),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(676),
    [sym__end_of_line] = ACTIONS(686),
  },
  [279] = {
    [sym_math_shift] = ACTIONS(689),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [280] = {
    [sym_math_shift] = ACTIONS(691),
    [ts_builtin_sym_end] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(691),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [sym_text] = ACTIONS(691),
  },
  [281] = {
    [sym__common] = STATE(281),
    [sym__text_mode_common] = STATE(281),
    [sym_inline_verbatim] = STATE(281),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(281),
    [sym_text_mode_at_region] = STATE(281),
    [sym_parameter] = STATE(281),
    [sym_text_env] = STATE(281),
    [sym__display_math] = STATE(281),
    [sym_tex_display_math] = STATE(281),
    [sym_latex_display_math] = STATE(281),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(281),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(281),
    [sym_tex_inline_math] = STATE(281),
    [sym_latex_inline_math] = STATE(281),
    [sym_inline_math_env] = STATE(281),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(281),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(281),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(281),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(281),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(281),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(281),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(281),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(281),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(281),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(281),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(281),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(281),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(281),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(281),
    [sym_opt_text_group] = STATE(281),
    [sym_token] = STATE(281),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(281),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(442),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(448),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(693),
    [sym_text] = ACTIONS(693),
  },
  [282] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(696),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(698),
  },
  [284] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(700),
  },
  [285] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(702),
  },
  [286] = {
    [sym__common] = STATE(455),
    [sym__text_mode_common] = STATE(455),
    [sym_inline_verbatim] = STATE(455),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(455),
    [sym_text_mode_at_region] = STATE(455),
    [sym_parameter] = STATE(455),
    [sym_text_env] = STATE(455),
    [sym__display_math] = STATE(455),
    [sym_tex_display_math] = STATE(455),
    [sym_latex_display_math] = STATE(455),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(455),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(455),
    [sym_tex_inline_math] = STATE(455),
    [sym_latex_inline_math] = STATE(455),
    [sym_inline_math_env] = STATE(455),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(455),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(455),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(455),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(455),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(455),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(455),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(455),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(455),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(455),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(455),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(455),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(455),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(455),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(455),
    [sym_opt_text_group] = STATE(455),
    [sym_token] = STATE(455),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(455),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(704),
    [sym_alignment_tab] = ACTIONS(706),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(706),
    [sym_text] = ACTIONS(706),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(708),
    [sym_begin_group] = ACTIONS(708),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(708),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [288] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(710),
  },
  [289] = {
    [sym_text_group] = STATE(458),
    [sym__whitespace] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(710),
  },
  [290] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(716),
    [sym__end_of_line] = ACTIONS(716),
  },
  [291] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(718),
  },
  [292] = {
    [sym_text_group] = STATE(461),
    [sym__whitespace] = ACTIONS(720),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(718),
  },
  [293] = {
    [sym_simple_text_group] = STATE(462),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [294] = {
    [sym_math_shift] = ACTIONS(722),
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(722),
    [sym_begin_group] = ACTIONS(722),
    [sym_alignment_tab] = ACTIONS(722),
    [sym_parameter_char] = ACTIONS(722),
    [sym_superscript] = ACTIONS(722),
    [sym_subscript] = ACTIONS(722),
    [sym_active_char] = ACTIONS(722),
    [sym_text] = ACTIONS(722),
  },
  [295] = {
    [sym__whitespace] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(431),
    [sym__end_of_line] = ACTIONS(431),
  },
  [296] = {
    [sym__whitespace] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(433),
    [sym__end_of_line] = ACTIONS(433),
  },
  [297] = {
    [sym__common] = STATE(366),
    [sym__text_mode_common] = STATE(366),
    [sym_inline_verbatim] = STATE(366),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(366),
    [sym_text_mode_at_region] = STATE(366),
    [sym_parameter] = STATE(366),
    [sym_text_env] = STATE(366),
    [sym__display_math] = STATE(366),
    [sym_tex_display_math] = STATE(366),
    [sym_latex_display_math] = STATE(366),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(366),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(366),
    [sym_tex_inline_math] = STATE(366),
    [sym_latex_inline_math] = STATE(366),
    [sym_inline_math_env] = STATE(366),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(366),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(366),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(366),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(366),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(366),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(366),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(366),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(366),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(366),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(366),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(366),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(366),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(366),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(366),
    [sym_opt_text_group] = STATE(366),
    [sym_token] = STATE(366),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(463),
    [aux_sym_text_mode_repeat1] = STATE(366),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [298] = {
    [sym_simple_text_group] = STATE(464),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(115),
  },
  [299] = {
    [sym_math_shift] = ACTIONS(724),
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(724),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [sym_text] = ACTIONS(724),
  },
  [300] = {
    [sym_text_group] = STATE(465),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [301] = {
    [sym_math_shift] = ACTIONS(726),
    [ts_builtin_sym_end] = ACTIONS(726),
    [anon_sym_LBRACK] = ACTIONS(726),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(726),
    [sym_begin_group] = ACTIONS(726),
    [sym_alignment_tab] = ACTIONS(726),
    [sym_parameter_char] = ACTIONS(726),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(726),
    [sym_active_char] = ACTIONS(726),
    [sym_text] = ACTIONS(726),
  },
  [302] = {
    [anon_sym_EQ] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [303] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(728),
  },
  [304] = {
    [sym_text_group] = STATE(467),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [305] = {
    [sym_math_shift] = ACTIONS(730),
    [ts_builtin_sym_end] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(730),
    [sym_begin_group] = ACTIONS(730),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(730),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [306] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_math_mode_at] = STATE(468),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [307] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(395),
  },
  [308] = {
    [sym__common] = STATE(476),
    [sym__math_mode_common] = STATE(476),
    [sym__math_mode_at] = STATE(476),
    [sym_parameter] = STATE(476),
    [sym_math_env_at] = STATE(476),
    [sym_tag_at] = STATE(476),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(476),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(476),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(476),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(476),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(476),
    [sym_opt_math_group_at] = STATE(476),
    [sym_token_at] = STATE(476),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(476),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(738),
    [sym_subscript] = ACTIONS(738),
    [sym_active_char] = ACTIONS(738),
    [sym_text] = ACTIONS(738),
  },
  [309] = {
    [sym_math_shift] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [310] = {
    [sym_math_text_group_at] = STATE(479),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(742),
  },
  [311] = {
    [sym__common] = STATE(482),
    [sym__math_mode_common] = STATE(482),
    [sym__math_mode_at] = STATE(482),
    [sym_parameter] = STATE(482),
    [sym_math_env_at] = STATE(482),
    [sym_tag_at] = STATE(482),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(482),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(481),
    [sym_end_token] = STATE(111),
    [sym_include_at] = STATE(482),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(482),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(482),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(482),
    [sym_opt_math_group_at] = STATE(482),
    [sym_token_at] = STATE(482),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(482),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [312] = {
    [sym__common] = STATE(484),
    [sym__math_mode_common] = STATE(484),
    [sym__math_mode_at] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_math_env_at] = STATE(484),
    [sym_tag_at] = STATE(484),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(484),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(484),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(484),
    [sym_opt_math_group_at] = STATE(484),
    [sym_token_at] = STATE(484),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(483),
    [aux_sym_math_mode_at_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(748),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(748),
    [sym_subscript] = ACTIONS(748),
    [sym_active_char] = ACTIONS(748),
    [sym_text] = ACTIONS(748),
  },
  [313] = {
    [sym__common] = STATE(485),
    [sym__math_mode_common] = STATE(485),
    [sym__math_mode_at] = STATE(485),
    [sym_parameter] = STATE(485),
    [sym_math_env_at] = STATE(485),
    [sym_tag_at] = STATE(485),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(485),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(485),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(485),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(485),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(485),
    [sym_opt_math_group_at] = STATE(485),
    [sym_token_at] = STATE(485),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(485),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(752),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(752),
    [sym_subscript] = ACTIONS(752),
    [sym_active_char] = ACTIONS(752),
    [sym_text] = ACTIONS(752),
  },
  [314] = {
    [sym_math_shift] = ACTIONS(754),
    [ts_builtin_sym_end] = ACTIONS(754),
    [sym__whitespace] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(754),
    [anon_sym_RBRACK] = ACTIONS(754),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(754),
    [sym_begin_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(754),
    [sym_parameter_char] = ACTIONS(754),
    [sym_superscript] = ACTIONS(754),
    [sym_subscript] = ACTIONS(754),
    [sym_active_char] = ACTIONS(754),
    [sym_text] = ACTIONS(758),
  },
  [315] = {
    [sym_math_shift] = ACTIONS(760),
    [sym__whitespace] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(760),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(760),
    [sym_superscript] = ACTIONS(760),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [sym_text] = ACTIONS(764),
  },
  [316] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_math_mode_at] = STATE(489),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(766),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [317] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(251),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(253),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(768),
  },
  [318] = {
    [sym__common] = STATE(492),
    [sym__text_mode_common] = STATE(492),
    [sym_inline_verbatim] = STATE(492),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(492),
    [sym_parameter] = STATE(492),
    [sym_text_env_at] = STATE(492),
    [sym__display_math_at] = STATE(492),
    [sym_tex_display_math_at] = STATE(492),
    [sym_latex_display_math_at] = STATE(492),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(492),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(492),
    [sym_tex_inline_math_at] = STATE(492),
    [sym_latex_inline_math_at] = STATE(492),
    [sym_inline_math_env_at] = STATE(492),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(492),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(492),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(492),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(492),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(492),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(492),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(492),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(492),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(492),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(492),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(492),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(492),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(492),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(492),
    [sym_opt_text_group_at] = STATE(492),
    [sym_token_at] = STATE(492),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(492),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(770),
    [sym_alignment_tab] = ACTIONS(772),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(772),
    [sym_text] = ACTIONS(772),
  },
  [319] = {
    [sym_math_shift] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(774),
    [sym_begin_group] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(774),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [320] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(493),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [321] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(494),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [322] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(495),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [323] = {
    [sym__common] = STATE(343),
    [sym__math_mode_common] = STATE(343),
    [sym__math_mode_at] = STATE(343),
    [sym_math_mode_at] = STATE(496),
    [sym_parameter] = STATE(343),
    [sym_math_env_at] = STATE(343),
    [sym_tag_at] = STATE(343),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(343),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(343),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(343),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(343),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(343),
    [sym_opt_math_group_at] = STATE(343),
    [sym_token_at] = STATE(343),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(343),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [324] = {
    [sym__common] = STATE(498),
    [sym__text_mode_common] = STATE(498),
    [sym_inline_verbatim] = STATE(498),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(498),
    [sym_parameter] = STATE(498),
    [sym_text_env_at] = STATE(498),
    [sym__display_math_at] = STATE(498),
    [sym_tex_display_math_at] = STATE(498),
    [sym_latex_display_math_at] = STATE(498),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(498),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(498),
    [sym_tex_inline_math_at] = STATE(498),
    [sym_latex_inline_math_at] = STATE(498),
    [sym_inline_math_env_at] = STATE(498),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(498),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(498),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(497),
    [sym_end_token] = STATE(218),
    [sym_documentclass] = STATE(498),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(498),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(498),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(498),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(498),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(498),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(498),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(498),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(498),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(498),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(498),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(498),
    [sym_opt_text_group_at] = STATE(498),
    [sym_token_at] = STATE(498),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(498),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [325] = {
    [sym_text_group_at] = STATE(499),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [326] = {
    [sym_text_group_at] = STATE(500),
    [sym_opt_text_group_at] = STATE(501),
    [sym_begin_opt] = STATE(354),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [327] = {
    [sym_text_group_at] = STATE(502),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [328] = {
    [sym_text_group_at] = STATE(503),
    [sym_opt_text_group_at] = STATE(504),
    [sym_begin_opt] = STATE(354),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [329] = {
    [sym_text_group_at] = STATE(505),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [330] = {
    [sym_text_group_at] = STATE(506),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [331] = {
    [sym_text_group_at] = STATE(507),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [332] = {
    [sym__common] = STATE(509),
    [sym__text_mode_common] = STATE(509),
    [sym_inline_verbatim] = STATE(509),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(509),
    [sym_parameter] = STATE(509),
    [sym_text_env_at] = STATE(509),
    [sym__display_math_at] = STATE(509),
    [sym_tex_display_math_at] = STATE(509),
    [sym_latex_display_math_at] = STATE(509),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(509),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(509),
    [sym_tex_inline_math_at] = STATE(509),
    [sym_latex_inline_math_at] = STATE(509),
    [sym_inline_math_env_at] = STATE(509),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(509),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(509),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(509),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(509),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(509),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(509),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(509),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(509),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(509),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(509),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(509),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(509),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(509),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(509),
    [sym_opt_text_group_at] = STATE(509),
    [sym_token_at] = STATE(509),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(508),
    [aux_sym_text_mode_at_repeat1] = STATE(509),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(778),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(778),
    [sym_text] = ACTIONS(778),
  },
  [333] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(780),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [334] = {
    [anon_sym_makeatother] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [335] = {
    [sym_math_shift] = ACTIONS(786),
    [ts_builtin_sym_end] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(786),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [336] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(283),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(285),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(788),
  },
  [337] = {
    [sym__common] = STATE(514),
    [sym__math_mode_common] = STATE(514),
    [sym__math_mode_at] = STATE(514),
    [sym_parameter] = STATE(514),
    [sym_math_env_at] = STATE(514),
    [sym_tag_at] = STATE(514),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(514),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(514),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(514),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(514),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(514),
    [sym_opt_math_group_at] = STATE(514),
    [sym_token_at] = STATE(514),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(514),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(790),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(792),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [338] = {
    [sym_end_display_math] = STATE(515),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(293),
  },
  [339] = {
    [sym_math_text_group_at] = STATE(517),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(794),
  },
  [340] = {
    [sym__common] = STATE(519),
    [sym__math_mode_common] = STATE(519),
    [sym__math_mode_at] = STATE(519),
    [sym_parameter] = STATE(519),
    [sym_math_env_at] = STATE(519),
    [sym_tag_at] = STATE(519),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(519),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(518),
    [sym_end_token] = STATE(256),
    [sym_include_at] = STATE(519),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(519),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(519),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(519),
    [sym_opt_math_group_at] = STATE(519),
    [sym_token_at] = STATE(519),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(519),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(796),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(796),
    [sym_active_char] = ACTIONS(796),
    [sym_text] = ACTIONS(796),
  },
  [341] = {
    [sym_text_group_at] = STATE(521),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
  },
  [342] = {
    [sym__common] = STATE(523),
    [sym__math_mode_common] = STATE(523),
    [sym__math_mode_at] = STATE(523),
    [sym_parameter] = STATE(523),
    [sym_math_env_at] = STATE(523),
    [sym_tag_at] = STATE(523),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(523),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(523),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(523),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(523),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(523),
    [sym_opt_math_group_at] = STATE(523),
    [sym_token_at] = STATE(523),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(522),
    [aux_sym_math_mode_at_repeat1] = STATE(523),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(800),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(800),
    [sym_subscript] = ACTIONS(800),
    [sym_active_char] = ACTIONS(800),
    [sym_text] = ACTIONS(800),
  },
  [343] = {
    [sym__common] = STATE(524),
    [sym__math_mode_common] = STATE(524),
    [sym__math_mode_at] = STATE(524),
    [sym_parameter] = STATE(524),
    [sym_math_env_at] = STATE(524),
    [sym_tag_at] = STATE(524),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(524),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(524),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(524),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(524),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(524),
    [sym_opt_math_group_at] = STATE(524),
    [sym_token_at] = STATE(524),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(524),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [344] = {
    [sym_end_inline_math] = STATE(525),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(309),
  },
  [345] = {
    [sym_display_math_end] = STATE(526),
    [sym_end_token] = STATE(269),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [346] = {
    [sym_inline_math_end] = STATE(527),
    [sym_end_token] = STATE(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [347] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(325),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(395),
  },
  [348] = {
    [sym_math_shift] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(804),
    [sym_begin_group] = ACTIONS(804),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(804),
    [sym_superscript] = ACTIONS(804),
    [sym_subscript] = ACTIONS(804),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [349] = {
    [sym__common] = STATE(364),
    [sym__text_mode_common] = STATE(364),
    [sym_inline_verbatim] = STATE(364),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(364),
    [sym_parameter] = STATE(364),
    [sym_text_env_at] = STATE(364),
    [sym__display_math_at] = STATE(364),
    [sym_tex_display_math_at] = STATE(364),
    [sym_latex_display_math_at] = STATE(364),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(364),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(364),
    [sym_tex_inline_math_at] = STATE(364),
    [sym_latex_inline_math_at] = STATE(364),
    [sym_inline_math_env_at] = STATE(364),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(364),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(364),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(528),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(364),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(364),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(364),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(364),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(364),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(364),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(364),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(364),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(364),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(364),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(364),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(364),
    [sym_opt_text_group_at] = STATE(364),
    [sym_token_at] = STATE(364),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(364),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(429),
    [sym_text] = ACTIONS(429),
  },
  [350] = {
    [sym_text_group_at] = STATE(531),
    [sym_opt_text_group_at] = STATE(532),
    [sym_begin_opt] = STATE(354),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(806),
    [sym__end_of_line] = ACTIONS(808),
  },
  [351] = {
    [sym_math_shift] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(810),
    [sym_begin_group] = ACTIONS(810),
    [sym_alignment_tab] = ACTIONS(810),
    [sym_parameter_char] = ACTIONS(810),
    [sym_superscript] = ACTIONS(810),
    [sym_subscript] = ACTIONS(810),
    [sym_active_char] = ACTIONS(810),
    [sym_text] = ACTIONS(810),
  },
  [352] = {
    [sym_math_shift] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [anon_sym_RBRACK] = ACTIONS(812),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(812),
    [sym_begin_group] = ACTIONS(812),
    [sym_alignment_tab] = ACTIONS(812),
    [sym_parameter_char] = ACTIONS(812),
    [sym_superscript] = ACTIONS(812),
    [sym_subscript] = ACTIONS(812),
    [sym_active_char] = ACTIONS(812),
    [sym_text] = ACTIONS(812),
  },
  [353] = {
    [sym_text_group_at] = STATE(534),
    [sym__whitespace] = ACTIONS(814),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [354] = {
    [sym__common] = STATE(536),
    [sym__text_mode_common] = STATE(536),
    [sym_inline_verbatim] = STATE(536),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(536),
    [sym_parameter] = STATE(536),
    [sym_text_env_at] = STATE(536),
    [sym__display_math_at] = STATE(536),
    [sym_tex_display_math_at] = STATE(536),
    [sym_latex_display_math_at] = STATE(536),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(536),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(536),
    [sym_tex_inline_math_at] = STATE(536),
    [sym_latex_inline_math_at] = STATE(536),
    [sym_inline_math_env_at] = STATE(536),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(536),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(536),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(536),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(536),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(536),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(536),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(536),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(536),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(536),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(536),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(536),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(536),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(536),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(536),
    [sym_opt_text_group_at] = STATE(536),
    [sym_token_at] = STATE(536),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(535),
    [aux_sym_text_mode_at_repeat1] = STATE(536),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(816),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(816),
    [sym_text] = ACTIONS(816),
  },
  [355] = {
    [sym_math_shift] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(818),
    [sym_begin_group] = ACTIONS(818),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(818),
    [sym_superscript] = ACTIONS(818),
    [sym_subscript] = ACTIONS(818),
    [sym_active_char] = ACTIONS(818),
    [sym_text] = ACTIONS(818),
  },
  [356] = {
    [sym_math_shift] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [anon_sym_RBRACK] = ACTIONS(820),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(820),
    [sym_begin_group] = ACTIONS(820),
    [sym_alignment_tab] = ACTIONS(820),
    [sym_parameter_char] = ACTIONS(820),
    [sym_superscript] = ACTIONS(820),
    [sym_subscript] = ACTIONS(820),
    [sym_active_char] = ACTIONS(820),
    [sym_text] = ACTIONS(820),
  },
  [357] = {
    [sym_text_group_at] = STATE(538),
    [sym__whitespace] = ACTIONS(822),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [358] = {
    [sym_math_shift] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(824),
    [sym_begin_group] = ACTIONS(824),
    [sym_alignment_tab] = ACTIONS(824),
    [sym_parameter_char] = ACTIONS(824),
    [sym_superscript] = ACTIONS(824),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(824),
    [sym_text] = ACTIONS(824),
  },
  [359] = {
    [sym_math_shift] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(826),
    [anon_sym_RBRACK] = ACTIONS(826),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(826),
    [sym_begin_group] = ACTIONS(826),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(826),
    [sym_superscript] = ACTIONS(826),
    [sym_subscript] = ACTIONS(826),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [360] = {
    [sym_math_shift] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_RBRACK] = ACTIONS(828),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(828),
    [sym_alignment_tab] = ACTIONS(828),
    [sym_parameter_char] = ACTIONS(828),
    [sym_superscript] = ACTIONS(828),
    [sym_subscript] = ACTIONS(828),
    [sym_active_char] = ACTIONS(828),
    [sym_text] = ACTIONS(828),
  },
  [361] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_documentclass] = ACTIONS(47),
    [anon_sym_usepackage] = ACTIONS(49),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(55),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [anon_sym_emph] = ACTIONS(59),
    [anon_sym_footnote] = ACTIONS(61),
    [anon_sym_textbf] = ACTIONS(63),
    [anon_sym_textit] = ACTIONS(65),
    [anon_sym_texttt] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(395),
  },
  [362] = {
    [sym_math_shift] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(830),
    [anon_sym_RBRACK] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(830),
    [sym_begin_group] = ACTIONS(830),
    [sym_alignment_tab] = ACTIONS(830),
    [sym_parameter_char] = ACTIONS(830),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(830),
    [sym_active_char] = ACTIONS(830),
    [sym_text] = ACTIONS(830),
  },
  [363] = {
    [sym__common] = STATE(540),
    [sym__text_mode_common] = STATE(540),
    [sym_inline_verbatim] = STATE(540),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(540),
    [sym_parameter] = STATE(540),
    [sym_text_env_at] = STATE(540),
    [sym__display_math_at] = STATE(540),
    [sym_tex_display_math_at] = STATE(540),
    [sym_latex_display_math_at] = STATE(540),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(540),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(540),
    [sym_tex_inline_math_at] = STATE(540),
    [sym_latex_inline_math_at] = STATE(540),
    [sym_inline_math_env_at] = STATE(540),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(540),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(540),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(540),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(540),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(540),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(540),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(540),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(540),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(540),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(540),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(540),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(540),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(540),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(540),
    [sym_opt_text_group_at] = STATE(540),
    [sym_token_at] = STATE(540),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(539),
    [aux_sym_text_mode_at_repeat1] = STATE(540),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(832),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(832),
    [sym_text] = ACTIONS(832),
  },
  [364] = {
    [sym__common] = STATE(364),
    [sym__text_mode_common] = STATE(364),
    [sym_inline_verbatim] = STATE(364),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(364),
    [sym_parameter] = STATE(364),
    [sym_text_env_at] = STATE(364),
    [sym__display_math_at] = STATE(364),
    [sym_tex_display_math_at] = STATE(364),
    [sym_latex_display_math_at] = STATE(364),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(364),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(364),
    [sym_tex_inline_math_at] = STATE(364),
    [sym_latex_inline_math_at] = STATE(364),
    [sym_inline_math_env_at] = STATE(364),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(364),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(364),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(364),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(364),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(364),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(364),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(364),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(364),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(364),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(364),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(364),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(364),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(364),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(364),
    [sym_opt_text_group_at] = STATE(364),
    [sym_token_at] = STATE(364),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(364),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(834),
    [anon_sym_LBRACK] = ACTIONS(837),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(846),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(846),
    [sym_text] = ACTIONS(846),
  },
  [365] = {
    [sym_math_shift] = ACTIONS(855),
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_active_char] = ACTIONS(855),
    [sym_text] = ACTIONS(855),
  },
  [366] = {
    [sym__common] = STATE(366),
    [sym__text_mode_common] = STATE(366),
    [sym_inline_verbatim] = STATE(366),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(366),
    [sym_text_mode_at_region] = STATE(366),
    [sym_parameter] = STATE(366),
    [sym_text_env] = STATE(366),
    [sym__display_math] = STATE(366),
    [sym_tex_display_math] = STATE(366),
    [sym_latex_display_math] = STATE(366),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(366),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(366),
    [sym_tex_inline_math] = STATE(366),
    [sym_latex_inline_math] = STATE(366),
    [sym_inline_math_env] = STATE(366),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(366),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(366),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(366),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(366),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(366),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(366),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(366),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(366),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(366),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(366),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(366),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(366),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(366),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(366),
    [sym_opt_text_group] = STATE(366),
    [sym_token] = STATE(366),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(366),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(440),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(448),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(857),
    [sym_text] = ACTIONS(857),
  },
  [367] = {
    [sym_math_shift] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [368] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(862),
  },
  [369] = {
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_end_group] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(185),
  },
  [370] = {
    [sym__whitespace] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(213),
  },
  [371] = {
    [sym__whitespace] = ACTIONS(866),
    [anon_sym_LBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(247),
  },
  [372] = {
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_end_group] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_text] = ACTIONS(483),
  },
  [373] = {
    [sym__common] = STATE(386),
    [sym__math_mode_common] = STATE(386),
    [sym__math_mode] = STATE(386),
    [sym_parameter] = STATE(386),
    [sym_math_env] = STATE(386),
    [sym_tag] = STATE(386),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(386),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(386),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(386),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(386),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(386),
    [sym_opt_math_group] = STATE(386),
    [sym_token] = STATE(386),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(386),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(147),
    [sym_end_group] = ACTIONS(868),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [374] = {
    [sym__common] = STATE(390),
    [sym__text_mode_common] = STATE(390),
    [sym_inline_verbatim] = STATE(390),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(390),
    [sym_text_mode] = STATE(546),
    [sym_text_mode_at_region] = STATE(390),
    [sym_parameter] = STATE(390),
    [sym_text_env] = STATE(390),
    [sym__display_math] = STATE(390),
    [sym_tex_display_math] = STATE(390),
    [sym_latex_display_math] = STATE(390),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(390),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(390),
    [sym_tex_inline_math] = STATE(390),
    [sym_latex_inline_math] = STATE(390),
    [sym_inline_math_env] = STATE(390),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(390),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(390),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(390),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(390),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(390),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(390),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(390),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(390),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(390),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(390),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(390),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(390),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(390),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(390),
    [sym_opt_text_group] = STATE(390),
    [sym_token] = STATE(390),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(390),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(870),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(505),
    [sym_text] = ACTIONS(505),
  },
  [375] = {
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(507),
    [sym_begin_group] = ACTIONS(507),
    [sym_end_group] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [sym_active_char] = ACTIONS(507),
    [sym_text] = ACTIONS(507),
  },
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(509),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(509),
    [sym_begin_group] = ACTIONS(509),
    [sym_end_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(509),
    [sym_parameter_char] = ACTIONS(509),
    [sym_superscript] = ACTIONS(509),
    [sym_subscript] = ACTIONS(509),
    [sym_active_char] = ACTIONS(509),
    [sym_text] = ACTIONS(509),
  },
  [377] = {
    [sym_simple_text_group] = STATE(548),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(872),
  },
  [378] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(549),
    [sym_end_token] = STATE(377),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [379] = {
    [sym__common] = STATE(551),
    [sym__text_mode_common] = STATE(551),
    [sym_inline_verbatim] = STATE(551),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(551),
    [sym_text_mode_at_region] = STATE(551),
    [sym_parameter] = STATE(551),
    [sym_text_env] = STATE(551),
    [sym__display_math] = STATE(551),
    [sym_tex_display_math] = STATE(551),
    [sym_latex_display_math] = STATE(551),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(551),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(551),
    [sym_tex_inline_math] = STATE(551),
    [sym_latex_inline_math] = STATE(551),
    [sym_inline_math_env] = STATE(551),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(551),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(551),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(551),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(551),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(551),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(551),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(551),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(551),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(551),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(551),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(551),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(551),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(551),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(551),
    [sym_opt_text_group] = STATE(551),
    [sym_token] = STATE(551),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(551),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(874),
    [sym_alignment_tab] = ACTIONS(876),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(876),
    [sym_text] = ACTIONS(876),
  },
  [380] = {
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [381] = {
    [anon_sym_EQ] = ACTIONS(878),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(431),
    [sym_begin_group] = ACTIONS(431),
    [sym_end_group] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(431),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(513),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_end_group] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [384] = {
    [sym__common] = STATE(394),
    [sym__math_mode_common] = STATE(394),
    [sym__math_mode] = STATE(394),
    [sym_parameter] = STATE(394),
    [sym_math_env] = STATE(394),
    [sym_tag] = STATE(394),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(394),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(394),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(394),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(394),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(394),
    [sym_opt_math_group] = STATE(394),
    [sym_token] = STATE(394),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(553),
    [aux_sym_math_mode_repeat1] = STATE(394),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(515),
    [sym_subscript] = ACTIONS(515),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [385] = {
    [sym_math_shift] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [386] = {
    [sym__common] = STATE(386),
    [sym__math_mode_common] = STATE(386),
    [sym__math_mode] = STATE(386),
    [sym_parameter] = STATE(386),
    [sym_math_env] = STATE(386),
    [sym_tag] = STATE(386),
    [sym_tag_token] = STATE(167),
    [sym_escaped] = STATE(386),
    [sym_begin] = STATE(168),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(386),
    [sym_include_token] = STATE(169),
    [sym_storage] = STATE(386),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(386),
    [sym_catcode_token] = STATE(171),
    [sym_math_group] = STATE(386),
    [sym_opt_math_group] = STATE(386),
    [sym_token] = STATE(386),
    [sym_begin_opt] = STATE(172),
    [aux_sym_math_mode_repeat1] = STATE(386),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(882),
    [sym_begin_group] = ACTIONS(885),
    [sym_end_group] = ACTIONS(517),
    [sym_alignment_tab] = ACTIONS(888),
    [sym_parameter_char] = ACTIONS(891),
    [sym_superscript] = ACTIONS(888),
    [sym_subscript] = ACTIONS(888),
    [sym_active_char] = ACTIONS(888),
    [sym_text] = ACTIONS(888),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_end_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [388] = {
    [sym_math_shift] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(894),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [389] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(896),
  },
  [390] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [391] = {
    [sym_math_shift] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(898),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(898),
    [sym_begin_group] = ACTIONS(898),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(898),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [392] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(900),
  },
  [393] = {
    [sym_math_shift] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_active_char] = ACTIONS(902),
    [sym_text] = ACTIONS(902),
  },
  [394] = {
    [sym__common] = STATE(394),
    [sym__math_mode_common] = STATE(394),
    [sym__math_mode] = STATE(394),
    [sym_parameter] = STATE(394),
    [sym_math_env] = STATE(394),
    [sym_tag] = STATE(394),
    [sym_tag_token] = STATE(92),
    [sym_escaped] = STATE(394),
    [sym_begin] = STATE(93),
    [sym_begin_token] = STATE(40),
    [sym_include] = STATE(394),
    [sym_include_token] = STATE(94),
    [sym_storage] = STATE(394),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(394),
    [sym_catcode_token] = STATE(96),
    [sym_math_group] = STATE(394),
    [sym_opt_math_group] = STATE(394),
    [sym_token] = STATE(394),
    [sym_begin_opt] = STATE(97),
    [aux_sym_math_mode_repeat1] = STATE(394),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(640),
    [sym_begin_group] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(904),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(904),
    [sym_subscript] = ACTIONS(904),
    [sym_active_char] = ACTIONS(904),
    [sym_text] = ACTIONS(904),
  },
  [395] = {
    [anon_sym_LBRACK] = ACTIONS(907),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(907),
  },
  [396] = {
    [sym__whitespace] = ACTIONS(909),
    [anon_sym_LBRACK] = ACTIONS(907),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(907),
  },
  [397] = {
    [sym_math_shift] = ACTIONS(911),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [398] = {
    [sym_math_shift] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_end_group] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [399] = {
    [sym_math_shift] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_end_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [400] = {
    [sym_math_shift] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_end_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [401] = {
    [sym_math_shift] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_end_group] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [402] = {
    [sym_verb_delim] = ACTIONS(913),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [403] = {
    [anon_sym_RBRACK] = ACTIONS(915),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [404] = {
    [sym_math_shift] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(630),
    [sym_begin_group] = ACTIONS(630),
    [sym_end_group] = ACTIONS(630),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(630),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(630),
    [sym_active_char] = ACTIONS(630),
    [sym_text] = ACTIONS(630),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(917),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [406] = {
    [sym_math_shift] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(654),
    [sym_begin_group] = ACTIONS(654),
    [sym_end_group] = ACTIONS(654),
    [sym_alignment_tab] = ACTIONS(654),
    [sym_parameter_char] = ACTIONS(654),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(654),
    [sym_text] = ACTIONS(654),
  },
  [407] = {
    [sym_math_shift] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(656),
    [sym_end_group] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_parameter_char] = ACTIONS(656),
    [sym_superscript] = ACTIONS(656),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(656),
    [sym_text] = ACTIONS(656),
  },
  [408] = {
    [sym_display_math_env_group] = STATE(562),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(919),
  },
  [409] = {
    [sym_math_shift] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(660),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(660),
    [sym_begin_group] = ACTIONS(660),
    [sym_end_group] = ACTIONS(660),
    [sym_alignment_tab] = ACTIONS(660),
    [sym_parameter_char] = ACTIONS(660),
    [sym_superscript] = ACTIONS(660),
    [sym_subscript] = ACTIONS(660),
    [sym_active_char] = ACTIONS(660),
    [sym_text] = ACTIONS(660),
  },
  [410] = {
    [sym_inline_math_env_group] = STATE(564),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(921),
  },
  [411] = {
    [sym_math_shift] = ACTIONS(668),
    [anon_sym_LBRACK] = ACTIONS(668),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(668),
    [sym_begin_group] = ACTIONS(668),
    [sym_end_group] = ACTIONS(668),
    [sym_alignment_tab] = ACTIONS(668),
    [sym_parameter_char] = ACTIONS(668),
    [sym_superscript] = ACTIONS(668),
    [sym_subscript] = ACTIONS(668),
    [sym_active_char] = ACTIONS(668),
    [sym_text] = ACTIONS(668),
  },
  [412] = {
    [sym_verbatim_env_name] = ACTIONS(923),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [413] = {
    [sym_math_shift] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_end_group] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_text] = ACTIONS(672),
  },
  [414] = {
    [sym_math_shift] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_end_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [415] = {
    [sym_math_shift] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_end_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(691),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [sym_text] = ACTIONS(691),
  },
  [416] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(925),
  },
  [417] = {
    [sym_simple_text_group] = STATE(567),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [418] = {
    [sym_math_shift] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(722),
    [sym_begin_group] = ACTIONS(722),
    [sym_end_group] = ACTIONS(722),
    [sym_alignment_tab] = ACTIONS(722),
    [sym_parameter_char] = ACTIONS(722),
    [sym_superscript] = ACTIONS(722),
    [sym_subscript] = ACTIONS(722),
    [sym_active_char] = ACTIONS(722),
    [sym_text] = ACTIONS(722),
  },
  [419] = {
    [sym_simple_text_group] = STATE(568),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(267),
  },
  [420] = {
    [sym_math_shift] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_end_group] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(724),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [sym_text] = ACTIONS(724),
  },
  [421] = {
    [sym_text_group] = STATE(569),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [422] = {
    [sym_math_shift] = ACTIONS(726),
    [anon_sym_LBRACK] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(726),
    [sym_begin_group] = ACTIONS(726),
    [sym_end_group] = ACTIONS(726),
    [sym_alignment_tab] = ACTIONS(726),
    [sym_parameter_char] = ACTIONS(726),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(726),
    [sym_active_char] = ACTIONS(726),
    [sym_text] = ACTIONS(726),
  },
  [423] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(927),
  },
  [424] = {
    [sym_text_group] = STATE(571),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(77),
  },
  [425] = {
    [sym_math_shift] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(730),
    [sym_begin_group] = ACTIONS(730),
    [sym_end_group] = ACTIONS(730),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(730),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [426] = {
    [sym_math_shift] = ACTIONS(754),
    [sym__whitespace] = ACTIONS(929),
    [anon_sym_LBRACK] = ACTIONS(754),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(754),
    [sym_begin_group] = ACTIONS(754),
    [sym_end_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(754),
    [sym_parameter_char] = ACTIONS(754),
    [sym_superscript] = ACTIONS(754),
    [sym_subscript] = ACTIONS(754),
    [sym_active_char] = ACTIONS(754),
    [sym_text] = ACTIONS(758),
  },
  [427] = {
    [anon_sym_makeatother] = ACTIONS(931),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [428] = {
    [sym_math_shift] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_end_group] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(786),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [429] = {
    [sym_math_shift] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_end_group] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_active_char] = ACTIONS(855),
    [sym_text] = ACTIONS(855),
  },
  [430] = {
    [sym_math_shift] = ACTIONS(933),
    [ts_builtin_sym_end] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_active_char] = ACTIONS(933),
    [sym_text] = ACTIONS(933),
  },
  [431] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [432] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [433] = {
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_RBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [434] = {
    [sym_math_shift] = ACTIONS(935),
    [ts_builtin_sym_end] = ACTIONS(935),
    [sym__whitespace] = ACTIONS(937),
    [anon_sym_LBRACK] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(935),
    [sym_begin_group] = ACTIONS(935),
    [sym_alignment_tab] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(935),
    [sym_superscript] = ACTIONS(935),
    [sym_subscript] = ACTIONS(935),
    [sym_active_char] = ACTIONS(935),
    [sym_text] = ACTIONS(939),
  },
  [435] = {
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(894),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [436] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(941),
  },
  [437] = {
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [438] = {
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_RBRACK] = ACTIONS(898),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(898),
    [sym_begin_group] = ACTIONS(898),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(898),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [439] = {
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [440] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(943),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [441] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(945),
  },
  [442] = {
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_active_char] = ACTIONS(902),
    [sym_text] = ACTIONS(902),
  },
  [443] = {
    [sym_math_shift] = ACTIONS(947),
    [ts_builtin_sym_end] = ACTIONS(947),
    [sym__whitespace] = ACTIONS(949),
    [anon_sym_LBRACK] = ACTIONS(947),
    [anon_sym_RBRACK] = ACTIONS(947),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(947),
    [sym_begin_group] = ACTIONS(947),
    [sym_alignment_tab] = ACTIONS(947),
    [sym_parameter_char] = ACTIONS(947),
    [sym_superscript] = ACTIONS(947),
    [sym_subscript] = ACTIONS(947),
    [sym_active_char] = ACTIONS(947),
    [sym_text] = ACTIONS(951),
  },
  [444] = {
    [sym_display_math_env_name] = ACTIONS(953),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [445] = {
    [sym_math_shift] = ACTIONS(955),
    [ts_builtin_sym_end] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(955),
    [anon_sym_RBRACK] = ACTIONS(955),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(955),
    [sym_begin_group] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(955),
    [sym_parameter_char] = ACTIONS(955),
    [sym_superscript] = ACTIONS(955),
    [sym_subscript] = ACTIONS(955),
    [sym_active_char] = ACTIONS(955),
    [sym_text] = ACTIONS(955),
  },
  [446] = {
    [sym_inline_math_env_name] = ACTIONS(957),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [447] = {
    [sym_math_shift] = ACTIONS(959),
    [ts_builtin_sym_end] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(959),
    [anon_sym_RBRACK] = ACTIONS(959),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(959),
    [sym_begin_group] = ACTIONS(959),
    [sym_alignment_tab] = ACTIONS(959),
    [sym_parameter_char] = ACTIONS(959),
    [sym_superscript] = ACTIONS(959),
    [sym_subscript] = ACTIONS(959),
    [sym_active_char] = ACTIONS(959),
    [sym_text] = ACTIONS(959),
  },
  [448] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(961),
  },
  [449] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(963),
  },
  [450] = {
    [anon_sym_LBRACK] = ACTIONS(965),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(965),
    [sym__end_of_line] = ACTIONS(965),
  },
  [451] = {
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(967),
    [sym_begin_group] = ACTIONS(967),
    [sym_alignment_tab] = ACTIONS(967),
    [sym_parameter_char] = ACTIONS(967),
    [sym_superscript] = ACTIONS(967),
    [sym_subscript] = ACTIONS(967),
    [sym_active_char] = ACTIONS(967),
    [sym_text] = ACTIONS(967),
  },
  [452] = {
    [anon_sym_LBRACK] = ACTIONS(969),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(969),
    [sym__end_of_line] = ACTIONS(969),
  },
  [453] = {
    [sym_math_shift] = ACTIONS(971),
    [ts_builtin_sym_end] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_RBRACK] = ACTIONS(971),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(971),
    [sym_begin_group] = ACTIONS(971),
    [sym_alignment_tab] = ACTIONS(971),
    [sym_parameter_char] = ACTIONS(971),
    [sym_superscript] = ACTIONS(971),
    [sym_subscript] = ACTIONS(971),
    [sym_active_char] = ACTIONS(971),
    [sym_text] = ACTIONS(971),
  },
  [454] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(261),
  },
  [455] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(973),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [456] = {
    [anon_sym_LBRACK] = ACTIONS(975),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(975),
    [sym_begin_group] = ACTIONS(975),
    [sym_alignment_tab] = ACTIONS(975),
    [sym_parameter_char] = ACTIONS(975),
    [sym_superscript] = ACTIONS(975),
    [sym_subscript] = ACTIONS(975),
    [sym_active_char] = ACTIONS(975),
    [sym_text] = ACTIONS(975),
  },
  [457] = {
    [sym_text_group] = STATE(583),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(977),
  },
  [458] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(977),
  },
  [459] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(979),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(981),
    [sym__end_of_line] = ACTIONS(981),
  },
  [460] = {
    [sym_text_group] = STATE(585),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(983),
  },
  [461] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(983),
  },
  [462] = {
    [sym_math_shift] = ACTIONS(985),
    [ts_builtin_sym_end] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(985),
    [anon_sym_RBRACK] = ACTIONS(985),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(985),
    [sym_begin_group] = ACTIONS(985),
    [sym_alignment_tab] = ACTIONS(985),
    [sym_parameter_char] = ACTIONS(985),
    [sym_superscript] = ACTIONS(985),
    [sym_subscript] = ACTIONS(985),
    [sym_active_char] = ACTIONS(985),
    [sym_text] = ACTIONS(985),
  },
  [463] = {
    [sym__whitespace] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(855),
    [sym__end_of_line] = ACTIONS(855),
  },
  [464] = {
    [sym_math_shift] = ACTIONS(987),
    [ts_builtin_sym_end] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(987),
    [anon_sym_RBRACK] = ACTIONS(987),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(987),
    [sym_begin_group] = ACTIONS(987),
    [sym_alignment_tab] = ACTIONS(987),
    [sym_parameter_char] = ACTIONS(987),
    [sym_superscript] = ACTIONS(987),
    [sym_subscript] = ACTIONS(987),
    [sym_active_char] = ACTIONS(987),
    [sym_text] = ACTIONS(987),
  },
  [465] = {
    [sym_math_shift] = ACTIONS(989),
    [ts_builtin_sym_end] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(989),
    [anon_sym_RBRACK] = ACTIONS(989),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(989),
    [sym_begin_group] = ACTIONS(989),
    [sym_alignment_tab] = ACTIONS(989),
    [sym_parameter_char] = ACTIONS(989),
    [sym_superscript] = ACTIONS(989),
    [sym_subscript] = ACTIONS(989),
    [sym_active_char] = ACTIONS(989),
    [sym_text] = ACTIONS(989),
  },
  [466] = {
    [sym_math_shift] = ACTIONS(991),
    [ts_builtin_sym_end] = ACTIONS(991),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(991),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_text] = ACTIONS(991),
  },
  [467] = {
    [sym_math_shift] = ACTIONS(993),
    [ts_builtin_sym_end] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_RBRACK] = ACTIONS(993),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(993),
    [sym_begin_group] = ACTIONS(993),
    [sym_alignment_tab] = ACTIONS(993),
    [sym_parameter_char] = ACTIONS(993),
    [sym_superscript] = ACTIONS(993),
    [sym_subscript] = ACTIONS(993),
    [sym_active_char] = ACTIONS(993),
    [sym_text] = ACTIONS(993),
  },
  [468] = {
    [sym_math_shift] = ACTIONS(995),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [469] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(473),
    [anon_sym_begin] = ACTIONS(45),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(475),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(997),
  },
  [470] = {
    [sym__common] = STATE(589),
    [sym__math_mode_common] = STATE(589),
    [sym__math_mode_at] = STATE(589),
    [sym_parameter] = STATE(589),
    [sym_math_env_at] = STATE(589),
    [sym_tag_at] = STATE(589),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(589),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(589),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(589),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(589),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(589),
    [sym_opt_math_group_at] = STATE(589),
    [sym_token_at] = STATE(589),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(589),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(1001),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(1001),
    [sym_subscript] = ACTIONS(1001),
    [sym_active_char] = ACTIONS(1001),
    [sym_text] = ACTIONS(1001),
  },
  [471] = {
    [sym_math_shift] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [472] = {
    [sym_math_text_group_at] = STATE(591),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1005),
  },
  [473] = {
    [sym__common] = STATE(593),
    [sym__math_mode_common] = STATE(593),
    [sym__math_mode_at] = STATE(593),
    [sym_parameter] = STATE(593),
    [sym_math_env_at] = STATE(593),
    [sym_tag_at] = STATE(593),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(593),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(592),
    [sym_end_token] = STATE(377),
    [sym_include_at] = STATE(593),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(593),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(593),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(593),
    [sym_opt_math_group_at] = STATE(593),
    [sym_token_at] = STATE(593),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(593),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(1007),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(1007),
    [sym_subscript] = ACTIONS(1007),
    [sym_active_char] = ACTIONS(1007),
    [sym_text] = ACTIONS(1007),
  },
  [474] = {
    [sym_text_group_at] = STATE(595),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1009),
  },
  [475] = {
    [sym__common] = STATE(597),
    [sym__math_mode_common] = STATE(597),
    [sym__math_mode_at] = STATE(597),
    [sym_parameter] = STATE(597),
    [sym_math_env_at] = STATE(597),
    [sym_tag_at] = STATE(597),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(597),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(597),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(597),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(597),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(597),
    [sym_opt_math_group_at] = STATE(597),
    [sym_token_at] = STATE(597),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(596),
    [aux_sym_math_mode_at_repeat1] = STATE(597),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(1011),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(1011),
    [sym_subscript] = ACTIONS(1011),
    [sym_active_char] = ACTIONS(1011),
    [sym_text] = ACTIONS(1011),
  },
  [476] = {
    [sym__common] = STATE(599),
    [sym__math_mode_common] = STATE(599),
    [sym__math_mode_at] = STATE(599),
    [sym_parameter] = STATE(599),
    [sym_math_env_at] = STATE(599),
    [sym_tag_at] = STATE(599),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(599),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(599),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(599),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(599),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(599),
    [sym_opt_math_group_at] = STATE(599),
    [sym_token_at] = STATE(599),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(599),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(1015),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(1015),
    [sym_text] = ACTIONS(1015),
  },
  [477] = {
    [sym_math_shift] = ACTIONS(1017),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1017),
  },
  [478] = {
    [sym__common] = STATE(602),
    [sym__text_mode_common] = STATE(602),
    [sym_inline_verbatim] = STATE(602),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(602),
    [sym_text_mode_at] = STATE(601),
    [sym_parameter] = STATE(602),
    [sym_text_env_at] = STATE(602),
    [sym__display_math_at] = STATE(602),
    [sym_tex_display_math_at] = STATE(602),
    [sym_latex_display_math_at] = STATE(602),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(602),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(602),
    [sym_tex_inline_math_at] = STATE(602),
    [sym_latex_inline_math_at] = STATE(602),
    [sym_inline_math_env_at] = STATE(602),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(602),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(602),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(602),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(602),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(602),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(602),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(602),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(602),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(602),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(602),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(602),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(602),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(602),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(602),
    [sym_opt_text_group_at] = STATE(602),
    [sym_token_at] = STATE(602),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(602),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1019),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1021),
  },
  [479] = {
    [sym_math_shift] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1023),
    [sym_begin_group] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1023),
    [sym_parameter_char] = ACTIONS(1023),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1023),
    [sym_active_char] = ACTIONS(1023),
    [sym_text] = ACTIONS(1023),
  },
  [480] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(283),
    [anon_sym_begin] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(325),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(285),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(788),
  },
  [481] = {
    [sym_math_shift] = ACTIONS(1025),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [482] = {
    [sym__common] = STATE(524),
    [sym__math_mode_common] = STATE(524),
    [sym__math_mode_at] = STATE(524),
    [sym_parameter] = STATE(524),
    [sym_math_env_at] = STATE(524),
    [sym_tag_at] = STATE(524),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(524),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(603),
    [sym_end_token] = STATE(111),
    [sym_include_at] = STATE(524),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(524),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(524),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(524),
    [sym_opt_math_group_at] = STATE(524),
    [sym_token_at] = STATE(524),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(524),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [483] = {
    [sym_math_shift] = ACTIONS(1027),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1027),
    [sym_begin_group] = ACTIONS(1027),
    [sym_alignment_tab] = ACTIONS(1027),
    [sym_parameter_char] = ACTIONS(1027),
    [sym_superscript] = ACTIONS(1027),
    [sym_subscript] = ACTIONS(1027),
    [sym_active_char] = ACTIONS(1027),
    [sym_text] = ACTIONS(1027),
  },
  [484] = {
    [sym__common] = STATE(605),
    [sym__math_mode_common] = STATE(605),
    [sym__math_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_math_env_at] = STATE(605),
    [sym_tag_at] = STATE(605),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(605),
    [sym_opt_math_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(604),
    [aux_sym_math_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [485] = {
    [sym__common] = STATE(485),
    [sym__math_mode_common] = STATE(485),
    [sym__math_mode_at] = STATE(485),
    [sym_parameter] = STATE(485),
    [sym_math_env_at] = STATE(485),
    [sym_tag_at] = STATE(485),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(485),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(485),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(485),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(485),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(485),
    [sym_opt_math_group_at] = STATE(485),
    [sym_token_at] = STATE(485),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(485),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1036),
    [sym_begin_group] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1042),
    [sym_parameter_char] = ACTIONS(1045),
    [sym_superscript] = ACTIONS(1042),
    [sym_subscript] = ACTIONS(1042),
    [sym_active_char] = ACTIONS(1042),
    [sym_text] = ACTIONS(1042),
  },
  [486] = {
    [sym_math_shift] = ACTIONS(1048),
    [ts_builtin_sym_end] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1048),
    [anon_sym_RBRACK] = ACTIONS(1048),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1048),
    [sym_begin_group] = ACTIONS(1048),
    [sym_alignment_tab] = ACTIONS(1048),
    [sym_parameter_char] = ACTIONS(1048),
    [sym_superscript] = ACTIONS(1048),
    [sym_subscript] = ACTIONS(1048),
    [sym_active_char] = ACTIONS(1048),
    [sym_text] = ACTIONS(1048),
  },
  [487] = {
    [sym_math_shift] = ACTIONS(1050),
    [anon_sym_LBRACK] = ACTIONS(1050),
    [anon_sym_RBRACK] = ACTIONS(1050),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1050),
    [sym_begin_group] = ACTIONS(1050),
    [sym_alignment_tab] = ACTIONS(1050),
    [sym_parameter_char] = ACTIONS(1050),
    [sym_superscript] = ACTIONS(1050),
    [sym_subscript] = ACTIONS(1050),
    [sym_active_char] = ACTIONS(1050),
    [sym_text] = ACTIONS(1050),
  },
  [488] = {
    [sym__common] = STATE(313),
    [sym__math_mode_common] = STATE(313),
    [sym__math_mode_at] = STATE(313),
    [sym_math_mode_at] = STATE(606),
    [sym_parameter] = STATE(313),
    [sym_math_env_at] = STATE(313),
    [sym_tag_at] = STATE(313),
    [sym_tag_token] = STATE(310),
    [sym_escaped] = STATE(313),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(313),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(313),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(313),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(313),
    [sym_opt_math_group_at] = STATE(313),
    [sym_token_at] = STATE(313),
    [sym_begin_opt] = STATE(312),
    [aux_sym_math_mode_at_repeat1] = STATE(313),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [489] = {
    [sym_math_shift] = ACTIONS(1052),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [490] = {
    [sym_math_shift] = ACTIONS(760),
    [sym__whitespace] = ACTIONS(1054),
    [anon_sym_LBRACK] = ACTIONS(760),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(760),
    [sym_end_group] = ACTIONS(760),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(760),
    [sym_superscript] = ACTIONS(760),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [sym_text] = ACTIONS(764),
  },
  [491] = {
    [sym_math_shift] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [492] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1056),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [493] = {
    [sym_end_display_math] = STATE(610),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(578),
  },
  [494] = {
    [sym_end_inline_math] = STATE(611),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(580),
  },
  [495] = {
    [sym_display_math_end] = STATE(612),
    [sym_end_token] = STATE(408),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [496] = {
    [sym_inline_math_end] = STATE(613),
    [sym_end_token] = STATE(410),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(105),
  },
  [497] = {
    [sym_math_shift] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(804),
    [sym_begin_group] = ACTIONS(804),
    [sym_end_group] = ACTIONS(804),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(804),
    [sym_superscript] = ACTIONS(804),
    [sym_subscript] = ACTIONS(804),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [498] = {
    [sym__common] = STATE(364),
    [sym__text_mode_common] = STATE(364),
    [sym_inline_verbatim] = STATE(364),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(364),
    [sym_parameter] = STATE(364),
    [sym_text_env_at] = STATE(364),
    [sym__display_math_at] = STATE(364),
    [sym_tex_display_math_at] = STATE(364),
    [sym_latex_display_math_at] = STATE(364),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(364),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(364),
    [sym_tex_inline_math_at] = STATE(364),
    [sym_latex_inline_math_at] = STATE(364),
    [sym_inline_math_env_at] = STATE(364),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(364),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(364),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(614),
    [sym_end_token] = STATE(218),
    [sym_documentclass] = STATE(364),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(364),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(364),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(364),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(364),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(364),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(364),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(364),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(364),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(364),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(364),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(364),
    [sym_opt_text_group_at] = STATE(364),
    [sym_token_at] = STATE(364),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(364),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(429),
    [sym_text] = ACTIONS(429),
  },
  [499] = {
    [sym_math_shift] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(810),
    [sym_begin_group] = ACTIONS(810),
    [sym_end_group] = ACTIONS(810),
    [sym_alignment_tab] = ACTIONS(810),
    [sym_parameter_char] = ACTIONS(810),
    [sym_superscript] = ACTIONS(810),
    [sym_subscript] = ACTIONS(810),
    [sym_active_char] = ACTIONS(810),
    [sym_text] = ACTIONS(810),
  },
  [500] = {
    [sym_math_shift] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(812),
    [sym_begin_group] = ACTIONS(812),
    [sym_end_group] = ACTIONS(812),
    [sym_alignment_tab] = ACTIONS(812),
    [sym_parameter_char] = ACTIONS(812),
    [sym_superscript] = ACTIONS(812),
    [sym_subscript] = ACTIONS(812),
    [sym_active_char] = ACTIONS(812),
    [sym_text] = ACTIONS(812),
  },
  [501] = {
    [sym_text_group_at] = STATE(616),
    [sym__whitespace] = ACTIONS(1058),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [502] = {
    [sym_math_shift] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(818),
    [sym_begin_group] = ACTIONS(818),
    [sym_end_group] = ACTIONS(818),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(818),
    [sym_superscript] = ACTIONS(818),
    [sym_subscript] = ACTIONS(818),
    [sym_active_char] = ACTIONS(818),
    [sym_text] = ACTIONS(818),
  },
  [503] = {
    [sym_math_shift] = ACTIONS(820),
    [anon_sym_LBRACK] = ACTIONS(820),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(820),
    [sym_begin_group] = ACTIONS(820),
    [sym_end_group] = ACTIONS(820),
    [sym_alignment_tab] = ACTIONS(820),
    [sym_parameter_char] = ACTIONS(820),
    [sym_superscript] = ACTIONS(820),
    [sym_subscript] = ACTIONS(820),
    [sym_active_char] = ACTIONS(820),
    [sym_text] = ACTIONS(820),
  },
  [504] = {
    [sym_text_group_at] = STATE(618),
    [sym__whitespace] = ACTIONS(1060),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [505] = {
    [sym_math_shift] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(824),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(824),
    [sym_begin_group] = ACTIONS(824),
    [sym_end_group] = ACTIONS(824),
    [sym_alignment_tab] = ACTIONS(824),
    [sym_parameter_char] = ACTIONS(824),
    [sym_superscript] = ACTIONS(824),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(824),
    [sym_text] = ACTIONS(824),
  },
  [506] = {
    [sym_math_shift] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(826),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(826),
    [sym_begin_group] = ACTIONS(826),
    [sym_end_group] = ACTIONS(826),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(826),
    [sym_superscript] = ACTIONS(826),
    [sym_subscript] = ACTIONS(826),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [507] = {
    [sym_math_shift] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(828),
    [sym_end_group] = ACTIONS(828),
    [sym_alignment_tab] = ACTIONS(828),
    [sym_parameter_char] = ACTIONS(828),
    [sym_superscript] = ACTIONS(828),
    [sym_subscript] = ACTIONS(828),
    [sym_active_char] = ACTIONS(828),
    [sym_text] = ACTIONS(828),
  },
  [508] = {
    [sym_math_shift] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(830),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(830),
    [sym_alignment_tab] = ACTIONS(830),
    [sym_parameter_char] = ACTIONS(830),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(830),
    [sym_active_char] = ACTIONS(830),
    [sym_text] = ACTIONS(830),
  },
  [509] = {
    [sym__common] = STATE(540),
    [sym__text_mode_common] = STATE(540),
    [sym_inline_verbatim] = STATE(540),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(540),
    [sym_parameter] = STATE(540),
    [sym_text_env_at] = STATE(540),
    [sym__display_math_at] = STATE(540),
    [sym_tex_display_math_at] = STATE(540),
    [sym_latex_display_math_at] = STATE(540),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(540),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(540),
    [sym_tex_inline_math_at] = STATE(540),
    [sym_latex_inline_math_at] = STATE(540),
    [sym_inline_math_env_at] = STATE(540),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(540),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(540),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(540),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(540),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(540),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(540),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(540),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(540),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(540),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(540),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(540),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(540),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(540),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(540),
    [sym_opt_text_group_at] = STATE(540),
    [sym_token_at] = STATE(540),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(619),
    [aux_sym_text_mode_at_repeat1] = STATE(540),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(832),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(832),
    [sym_text] = ACTIONS(832),
  },
  [510] = {
    [sym_math_shift] = ACTIONS(1062),
    [anon_sym_LBRACK] = ACTIONS(1062),
    [anon_sym_RBRACK] = ACTIONS(1062),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1062),
    [sym_begin_group] = ACTIONS(1062),
    [sym_alignment_tab] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(1062),
    [sym_superscript] = ACTIONS(1062),
    [sym_subscript] = ACTIONS(1062),
    [sym_active_char] = ACTIONS(1062),
    [sym_text] = ACTIONS(1062),
  },
  [511] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(1064),
    [anon_sym_LBRACK] = ACTIONS(837),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1070),
    [sym_end_group] = ACTIONS(1073),
    [sym_alignment_tab] = ACTIONS(1075),
    [sym_parameter_char] = ACTIONS(1078),
    [sym_superscript] = ACTIONS(1081),
    [sym_subscript] = ACTIONS(1081),
    [sym_active_char] = ACTIONS(1075),
    [sym_text] = ACTIONS(1075),
  },
  [512] = {
    [sym__whitespace] = ACTIONS(1084),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(760),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(760),
    [sym_superscript] = ACTIONS(760),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [sym_text] = ACTIONS(764),
  },
  [513] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [514] = {
    [sym__common] = STATE(599),
    [sym__math_mode_common] = STATE(599),
    [sym__math_mode_at] = STATE(599),
    [sym_parameter] = STATE(599),
    [sym_math_env_at] = STATE(599),
    [sym_tag_at] = STATE(599),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(599),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(599),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(599),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(599),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(599),
    [sym_opt_math_group_at] = STATE(599),
    [sym_token_at] = STATE(599),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(599),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(1086),
    [sym_alignment_tab] = ACTIONS(1015),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(1015),
    [sym_text] = ACTIONS(1015),
  },
  [515] = {
    [sym_math_shift] = ACTIONS(1088),
    [anon_sym_LBRACK] = ACTIONS(1088),
    [anon_sym_RBRACK] = ACTIONS(1088),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1088),
    [sym_begin_group] = ACTIONS(1088),
    [sym_alignment_tab] = ACTIONS(1088),
    [sym_parameter_char] = ACTIONS(1088),
    [sym_superscript] = ACTIONS(1088),
    [sym_subscript] = ACTIONS(1088),
    [sym_active_char] = ACTIONS(1088),
    [sym_text] = ACTIONS(1088),
  },
  [516] = {
    [sym__common] = STATE(602),
    [sym__text_mode_common] = STATE(602),
    [sym_inline_verbatim] = STATE(602),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(602),
    [sym_text_mode_at] = STATE(623),
    [sym_parameter] = STATE(602),
    [sym_text_env_at] = STATE(602),
    [sym__display_math_at] = STATE(602),
    [sym_tex_display_math_at] = STATE(602),
    [sym_latex_display_math_at] = STATE(602),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(602),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(602),
    [sym_tex_inline_math_at] = STATE(602),
    [sym_latex_inline_math_at] = STATE(602),
    [sym_inline_math_env_at] = STATE(602),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(602),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(602),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(602),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(602),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(602),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(602),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(602),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(602),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(602),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(602),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(602),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(602),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(602),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(602),
    [sym_opt_text_group_at] = STATE(602),
    [sym_token_at] = STATE(602),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(602),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1090),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1021),
  },
  [517] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [anon_sym_RBRACK] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1023),
    [sym_begin_group] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1023),
    [sym_parameter_char] = ACTIONS(1023),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1023),
    [sym_active_char] = ACTIONS(1023),
    [sym_text] = ACTIONS(1023),
  },
  [518] = {
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_RBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [519] = {
    [sym__common] = STATE(524),
    [sym__math_mode_common] = STATE(524),
    [sym__math_mode_at] = STATE(524),
    [sym_parameter] = STATE(524),
    [sym_math_env_at] = STATE(524),
    [sym_tag_at] = STATE(524),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(524),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(624),
    [sym_end_token] = STATE(256),
    [sym_include_at] = STATE(524),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(524),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(524),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(524),
    [sym_opt_math_group_at] = STATE(524),
    [sym_token_at] = STATE(524),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(524),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [520] = {
    [sym__common] = STATE(626),
    [sym__text_mode_common] = STATE(626),
    [sym_inline_verbatim] = STATE(626),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(626),
    [sym_parameter] = STATE(626),
    [sym_text_env_at] = STATE(626),
    [sym__display_math_at] = STATE(626),
    [sym_tex_display_math_at] = STATE(626),
    [sym_latex_display_math_at] = STATE(626),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(626),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(626),
    [sym_tex_inline_math_at] = STATE(626),
    [sym_latex_inline_math_at] = STATE(626),
    [sym_inline_math_env_at] = STATE(626),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(626),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(626),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(626),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(626),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(626),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(626),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(626),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(626),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(626),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(626),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(626),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(626),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(626),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(626),
    [sym_opt_text_group_at] = STATE(626),
    [sym_token_at] = STATE(626),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(626),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1092),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [521] = {
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(810),
    [sym_begin_group] = ACTIONS(810),
    [sym_alignment_tab] = ACTIONS(810),
    [sym_parameter_char] = ACTIONS(810),
    [sym_superscript] = ACTIONS(810),
    [sym_subscript] = ACTIONS(810),
    [sym_active_char] = ACTIONS(810),
    [sym_text] = ACTIONS(810),
  },
  [522] = {
    [anon_sym_LBRACK] = ACTIONS(1027),
    [anon_sym_RBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1027),
    [sym_begin_group] = ACTIONS(1027),
    [sym_alignment_tab] = ACTIONS(1027),
    [sym_parameter_char] = ACTIONS(1027),
    [sym_superscript] = ACTIONS(1027),
    [sym_subscript] = ACTIONS(1027),
    [sym_active_char] = ACTIONS(1027),
    [sym_text] = ACTIONS(1027),
  },
  [523] = {
    [sym__common] = STATE(605),
    [sym__math_mode_common] = STATE(605),
    [sym__math_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_math_env_at] = STATE(605),
    [sym_tag_at] = STATE(605),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(605),
    [sym_opt_math_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(627),
    [aux_sym_math_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [524] = {
    [sym__common] = STATE(524),
    [sym__math_mode_common] = STATE(524),
    [sym__math_mode_at] = STATE(524),
    [sym_parameter] = STATE(524),
    [sym_math_env_at] = STATE(524),
    [sym_tag_at] = STATE(524),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(524),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(524),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(524),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(524),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(524),
    [sym_opt_math_group_at] = STATE(524),
    [sym_token_at] = STATE(524),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(524),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1096),
    [sym_begin_group] = ACTIONS(1099),
    [sym_alignment_tab] = ACTIONS(1102),
    [sym_parameter_char] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1102),
    [sym_subscript] = ACTIONS(1102),
    [sym_active_char] = ACTIONS(1102),
    [sym_text] = ACTIONS(1102),
  },
  [525] = {
    [sym_math_shift] = ACTIONS(1108),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1108),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1108),
    [sym_begin_group] = ACTIONS(1108),
    [sym_alignment_tab] = ACTIONS(1108),
    [sym_parameter_char] = ACTIONS(1108),
    [sym_superscript] = ACTIONS(1108),
    [sym_subscript] = ACTIONS(1108),
    [sym_active_char] = ACTIONS(1108),
    [sym_text] = ACTIONS(1108),
  },
  [526] = {
    [sym_math_shift] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1110),
    [anon_sym_RBRACK] = ACTIONS(1110),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1110),
    [sym_begin_group] = ACTIONS(1110),
    [sym_alignment_tab] = ACTIONS(1110),
    [sym_parameter_char] = ACTIONS(1110),
    [sym_superscript] = ACTIONS(1110),
    [sym_subscript] = ACTIONS(1110),
    [sym_active_char] = ACTIONS(1110),
    [sym_text] = ACTIONS(1110),
  },
  [527] = {
    [sym_math_shift] = ACTIONS(1112),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [anon_sym_RBRACK] = ACTIONS(1112),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1112),
    [sym_begin_group] = ACTIONS(1112),
    [sym_alignment_tab] = ACTIONS(1112),
    [sym_parameter_char] = ACTIONS(1112),
    [sym_superscript] = ACTIONS(1112),
    [sym_subscript] = ACTIONS(1112),
    [sym_active_char] = ACTIONS(1112),
    [sym_text] = ACTIONS(1112),
  },
  [528] = {
    [sym_math_shift] = ACTIONS(1114),
    [anon_sym_LBRACK] = ACTIONS(1114),
    [anon_sym_RBRACK] = ACTIONS(1114),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1114),
    [sym_begin_group] = ACTIONS(1114),
    [sym_alignment_tab] = ACTIONS(1114),
    [sym_parameter_char] = ACTIONS(1114),
    [sym_superscript] = ACTIONS(1114),
    [sym_subscript] = ACTIONS(1114),
    [sym_active_char] = ACTIONS(1114),
    [sym_text] = ACTIONS(1114),
  },
  [529] = {
    [sym__common] = STATE(629),
    [sym__text_mode_common] = STATE(629),
    [sym_inline_verbatim] = STATE(629),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(629),
    [sym_parameter] = STATE(629),
    [sym_text_env_at] = STATE(629),
    [sym__display_math_at] = STATE(629),
    [sym_tex_display_math_at] = STATE(629),
    [sym_latex_display_math_at] = STATE(629),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(629),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(629),
    [sym_tex_inline_math_at] = STATE(629),
    [sym_latex_inline_math_at] = STATE(629),
    [sym_inline_math_env_at] = STATE(629),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(629),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(629),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(629),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(629),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(629),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(629),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(629),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(629),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(629),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(629),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(629),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(629),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(629),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(629),
    [sym_opt_text_group_at] = STATE(629),
    [sym_token_at] = STATE(629),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(629),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1116),
    [sym_alignment_tab] = ACTIONS(1118),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1118),
    [sym_text] = ACTIONS(1118),
  },
  [530] = {
    [anon_sym_LBRACK] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_active_char] = ACTIONS(1120),
    [sym_text] = ACTIONS(1120),
  },
  [531] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1122),
  },
  [532] = {
    [sym_text_group_at] = STATE(632),
    [sym__whitespace] = ACTIONS(1124),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(806),
    [sym__end_of_line] = ACTIONS(1122),
  },
  [533] = {
    [sym_text_group_at] = STATE(633),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [534] = {
    [sym_math_shift] = ACTIONS(1126),
    [anon_sym_LBRACK] = ACTIONS(1126),
    [anon_sym_RBRACK] = ACTIONS(1126),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1126),
    [sym_begin_group] = ACTIONS(1126),
    [sym_alignment_tab] = ACTIONS(1126),
    [sym_parameter_char] = ACTIONS(1126),
    [sym_superscript] = ACTIONS(1126),
    [sym_subscript] = ACTIONS(1126),
    [sym_active_char] = ACTIONS(1126),
    [sym_text] = ACTIONS(1126),
  },
  [535] = {
    [sym__whitespace] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(830),
    [sym__end_of_line] = ACTIONS(830),
  },
  [536] = {
    [sym__common] = STATE(540),
    [sym__text_mode_common] = STATE(540),
    [sym_inline_verbatim] = STATE(540),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(540),
    [sym_parameter] = STATE(540),
    [sym_text_env_at] = STATE(540),
    [sym__display_math_at] = STATE(540),
    [sym_tex_display_math_at] = STATE(540),
    [sym_latex_display_math_at] = STATE(540),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(540),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(540),
    [sym_tex_inline_math_at] = STATE(540),
    [sym_latex_inline_math_at] = STATE(540),
    [sym_inline_math_env_at] = STATE(540),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(540),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(540),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(540),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(540),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(540),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(540),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(540),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(540),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(540),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(540),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(540),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(540),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(540),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(540),
    [sym_opt_text_group_at] = STATE(540),
    [sym_token_at] = STATE(540),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(634),
    [aux_sym_text_mode_at_repeat1] = STATE(540),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(832),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(832),
    [sym_text] = ACTIONS(832),
  },
  [537] = {
    [sym_text_group_at] = STATE(635),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(125),
  },
  [538] = {
    [sym_math_shift] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1128),
    [sym_begin_group] = ACTIONS(1128),
    [sym_alignment_tab] = ACTIONS(1128),
    [sym_parameter_char] = ACTIONS(1128),
    [sym_superscript] = ACTIONS(1128),
    [sym_subscript] = ACTIONS(1128),
    [sym_active_char] = ACTIONS(1128),
    [sym_text] = ACTIONS(1128),
  },
  [539] = {
    [sym_math_shift] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [anon_sym_RBRACK] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1130),
    [sym_begin_group] = ACTIONS(1130),
    [sym_alignment_tab] = ACTIONS(1130),
    [sym_parameter_char] = ACTIONS(1130),
    [sym_superscript] = ACTIONS(1130),
    [sym_subscript] = ACTIONS(1130),
    [sym_active_char] = ACTIONS(1130),
    [sym_text] = ACTIONS(1130),
  },
  [540] = {
    [sym__common] = STATE(540),
    [sym__text_mode_common] = STATE(540),
    [sym_inline_verbatim] = STATE(540),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(540),
    [sym_parameter] = STATE(540),
    [sym_text_env_at] = STATE(540),
    [sym__display_math_at] = STATE(540),
    [sym_tex_display_math_at] = STATE(540),
    [sym_latex_display_math_at] = STATE(540),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(540),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(540),
    [sym_tex_inline_math_at] = STATE(540),
    [sym_latex_inline_math_at] = STATE(540),
    [sym_inline_math_env_at] = STATE(540),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(540),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(540),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(540),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(540),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(540),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(540),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(540),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(540),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(540),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(540),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(540),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(540),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(540),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(540),
    [sym_opt_text_group_at] = STATE(540),
    [sym_token_at] = STATE(540),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(540),
    [aux_sym_parameter_repeat1] = STATE(32),
    [sym_math_shift] = ACTIONS(834),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(1132),
    [sym_text] = ACTIONS(1132),
  },
  [541] = {
    [sym_math_shift] = ACTIONS(1135),
    [ts_builtin_sym_end] = ACTIONS(1135),
    [anon_sym_LBRACK] = ACTIONS(1135),
    [anon_sym_RBRACK] = ACTIONS(1135),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1135),
    [sym_begin_group] = ACTIONS(1135),
    [sym_alignment_tab] = ACTIONS(1135),
    [sym_parameter_char] = ACTIONS(1135),
    [sym_superscript] = ACTIONS(1135),
    [sym_subscript] = ACTIONS(1135),
    [sym_active_char] = ACTIONS(1135),
    [sym_text] = ACTIONS(1135),
  },
  [542] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_end_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [543] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_end_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [544] = {
    [anon_sym_LBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [545] = {
    [anon_sym_LBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_end_group] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(894),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [546] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1137),
  },
  [547] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(1139),
  },
  [548] = {
    [anon_sym_LBRACK] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_end_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_text] = ACTIONS(689),
  },
  [549] = {
    [anon_sym_LBRACK] = ACTIONS(898),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(898),
    [sym_begin_group] = ACTIONS(898),
    [sym_end_group] = ACTIONS(898),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(898),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [550] = {
    [anon_sym_LBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_end_group] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [551] = {
    [sym__common] = STATE(243),
    [sym__text_mode_common] = STATE(243),
    [sym_inline_verbatim] = STATE(243),
    [sym_verb_token] = STATE(66),
    [sym__text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(243),
    [sym_parameter] = STATE(243),
    [sym_text_env] = STATE(243),
    [sym__display_math] = STATE(243),
    [sym_tex_display_math] = STATE(243),
    [sym_latex_display_math] = STATE(243),
    [sym_begin_display_math] = STATE(67),
    [sym_begin_inline_math] = STATE(68),
    [sym_display_math_env] = STATE(243),
    [sym_display_math_begin] = STATE(69),
    [sym__inline_math] = STATE(243),
    [sym_tex_inline_math] = STATE(243),
    [sym_latex_inline_math] = STATE(243),
    [sym_inline_math_env] = STATE(243),
    [sym_inline_math_begin] = STATE(70),
    [sym_verbatim_env] = STATE(243),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(243),
    [sym_begin] = STATE(72),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(243),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(243),
    [sym_usepackage_token] = STATE(74),
    [sym_include] = STATE(243),
    [sym_include_token] = STATE(75),
    [sym_section] = STATE(243),
    [sym_section_token] = STATE(76),
    [sym_storage] = STATE(243),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(243),
    [sym_catcode_token] = STATE(78),
    [sym_emph] = STATE(243),
    [sym_emph_token] = STATE(79),
    [sym_footnote] = STATE(243),
    [sym_footnote_token] = STATE(80),
    [sym_textbf] = STATE(243),
    [sym_textbf_token] = STATE(81),
    [sym_textit] = STATE(243),
    [sym_textit_token] = STATE(82),
    [sym_texttt] = STATE(243),
    [sym_texttt_token] = STATE(83),
    [sym_makeatletter] = STATE(84),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(243),
    [sym_opt_text_group] = STATE(243),
    [sym_token] = STATE(243),
    [sym_begin_opt] = STATE(85),
    [aux_sym_text_mode_repeat1] = STATE(243),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(1141),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(277),
    [sym_text] = ACTIONS(277),
  },
  [552] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(1143),
  },
  [553] = {
    [anon_sym_LBRACK] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_end_group] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_active_char] = ACTIONS(902),
    [sym_text] = ACTIONS(902),
  },
  [554] = {
    [sym_math_shift] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(1145),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1145),
    [sym_begin_group] = ACTIONS(1145),
    [sym_alignment_tab] = ACTIONS(1145),
    [sym_parameter_char] = ACTIONS(1145),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1145),
    [sym_active_char] = ACTIONS(1145),
    [sym_text] = ACTIONS(1145),
  },
  [555] = {
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_RBRACK] = ACTIONS(971),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(971),
    [sym_begin_group] = ACTIONS(971),
    [sym_alignment_tab] = ACTIONS(971),
    [sym_parameter_char] = ACTIONS(971),
    [sym_superscript] = ACTIONS(971),
    [sym_subscript] = ACTIONS(971),
    [sym_active_char] = ACTIONS(971),
    [sym_text] = ACTIONS(971),
  },
  [556] = {
    [anon_sym_LBRACK] = ACTIONS(1147),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1147),
  },
  [557] = {
    [sym_math_shift] = ACTIONS(1149),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [558] = {
    [sym_math_shift] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_end_group] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_active_char] = ACTIONS(933),
    [sym_text] = ACTIONS(933),
  },
  [559] = {
    [sym_math_shift] = ACTIONS(935),
    [sym__whitespace] = ACTIONS(1151),
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(935),
    [sym_begin_group] = ACTIONS(935),
    [sym_end_group] = ACTIONS(935),
    [sym_alignment_tab] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(935),
    [sym_superscript] = ACTIONS(935),
    [sym_subscript] = ACTIONS(935),
    [sym_active_char] = ACTIONS(935),
    [sym_text] = ACTIONS(939),
  },
  [560] = {
    [sym_math_shift] = ACTIONS(947),
    [sym__whitespace] = ACTIONS(1153),
    [anon_sym_LBRACK] = ACTIONS(947),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(947),
    [sym_begin_group] = ACTIONS(947),
    [sym_end_group] = ACTIONS(947),
    [sym_alignment_tab] = ACTIONS(947),
    [sym_parameter_char] = ACTIONS(947),
    [sym_superscript] = ACTIONS(947),
    [sym_subscript] = ACTIONS(947),
    [sym_active_char] = ACTIONS(947),
    [sym_text] = ACTIONS(951),
  },
  [561] = {
    [sym_display_math_env_name] = ACTIONS(1155),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [562] = {
    [sym_math_shift] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(955),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(955),
    [sym_begin_group] = ACTIONS(955),
    [sym_end_group] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(955),
    [sym_parameter_char] = ACTIONS(955),
    [sym_superscript] = ACTIONS(955),
    [sym_subscript] = ACTIONS(955),
    [sym_active_char] = ACTIONS(955),
    [sym_text] = ACTIONS(955),
  },
  [563] = {
    [sym_inline_math_env_name] = ACTIONS(1157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [564] = {
    [sym_math_shift] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(959),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(959),
    [sym_begin_group] = ACTIONS(959),
    [sym_end_group] = ACTIONS(959),
    [sym_alignment_tab] = ACTIONS(959),
    [sym_parameter_char] = ACTIONS(959),
    [sym_superscript] = ACTIONS(959),
    [sym_subscript] = ACTIONS(959),
    [sym_active_char] = ACTIONS(959),
    [sym_text] = ACTIONS(959),
  },
  [565] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1159),
  },
  [566] = {
    [sym_math_shift] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(971),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(971),
    [sym_begin_group] = ACTIONS(971),
    [sym_end_group] = ACTIONS(971),
    [sym_alignment_tab] = ACTIONS(971),
    [sym_parameter_char] = ACTIONS(971),
    [sym_superscript] = ACTIONS(971),
    [sym_subscript] = ACTIONS(971),
    [sym_active_char] = ACTIONS(971),
    [sym_text] = ACTIONS(971),
  },
  [567] = {
    [sym_math_shift] = ACTIONS(985),
    [anon_sym_LBRACK] = ACTIONS(985),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(985),
    [sym_begin_group] = ACTIONS(985),
    [sym_end_group] = ACTIONS(985),
    [sym_alignment_tab] = ACTIONS(985),
    [sym_parameter_char] = ACTIONS(985),
    [sym_superscript] = ACTIONS(985),
    [sym_subscript] = ACTIONS(985),
    [sym_active_char] = ACTIONS(985),
    [sym_text] = ACTIONS(985),
  },
  [568] = {
    [sym_math_shift] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(987),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(987),
    [sym_begin_group] = ACTIONS(987),
    [sym_end_group] = ACTIONS(987),
    [sym_alignment_tab] = ACTIONS(987),
    [sym_parameter_char] = ACTIONS(987),
    [sym_superscript] = ACTIONS(987),
    [sym_subscript] = ACTIONS(987),
    [sym_active_char] = ACTIONS(987),
    [sym_text] = ACTIONS(987),
  },
  [569] = {
    [sym_math_shift] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(989),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(989),
    [sym_begin_group] = ACTIONS(989),
    [sym_end_group] = ACTIONS(989),
    [sym_alignment_tab] = ACTIONS(989),
    [sym_parameter_char] = ACTIONS(989),
    [sym_superscript] = ACTIONS(989),
    [sym_subscript] = ACTIONS(989),
    [sym_active_char] = ACTIONS(989),
    [sym_text] = ACTIONS(989),
  },
  [570] = {
    [sym_math_shift] = ACTIONS(991),
    [anon_sym_LBRACK] = ACTIONS(991),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_end_group] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_text] = ACTIONS(991),
  },
  [571] = {
    [sym_math_shift] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(993),
    [sym_begin_group] = ACTIONS(993),
    [sym_end_group] = ACTIONS(993),
    [sym_alignment_tab] = ACTIONS(993),
    [sym_parameter_char] = ACTIONS(993),
    [sym_superscript] = ACTIONS(993),
    [sym_subscript] = ACTIONS(993),
    [sym_active_char] = ACTIONS(993),
    [sym_text] = ACTIONS(993),
  },
  [572] = {
    [sym_math_shift] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1048),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1048),
    [sym_begin_group] = ACTIONS(1048),
    [sym_end_group] = ACTIONS(1048),
    [sym_alignment_tab] = ACTIONS(1048),
    [sym_parameter_char] = ACTIONS(1048),
    [sym_superscript] = ACTIONS(1048),
    [sym_subscript] = ACTIONS(1048),
    [sym_active_char] = ACTIONS(1048),
    [sym_text] = ACTIONS(1048),
  },
  [573] = {
    [sym_math_shift] = ACTIONS(1161),
    [ts_builtin_sym_end] = ACTIONS(1161),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_RBRACK] = ACTIONS(1161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1161),
    [sym_begin_group] = ACTIONS(1161),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1161),
    [sym_subscript] = ACTIONS(1161),
    [sym_active_char] = ACTIONS(1161),
    [sym_text] = ACTIONS(1161),
  },
  [574] = {
    [anon_sym_LBRACK] = ACTIONS(1145),
    [anon_sym_RBRACK] = ACTIONS(1145),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1145),
    [sym_begin_group] = ACTIONS(1145),
    [sym_alignment_tab] = ACTIONS(1145),
    [sym_parameter_char] = ACTIONS(1145),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1145),
    [sym_active_char] = ACTIONS(1145),
    [sym_text] = ACTIONS(1145),
  },
  [575] = {
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [576] = {
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(991),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_text] = ACTIONS(991),
  },
  [577] = {
    [sym_math_shift] = ACTIONS(1163),
    [ts_builtin_sym_end] = ACTIONS(1163),
    [anon_sym_LBRACK] = ACTIONS(1163),
    [anon_sym_RBRACK] = ACTIONS(1163),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1163),
    [sym_begin_group] = ACTIONS(1163),
    [sym_alignment_tab] = ACTIONS(1163),
    [sym_parameter_char] = ACTIONS(1163),
    [sym_superscript] = ACTIONS(1163),
    [sym_subscript] = ACTIONS(1163),
    [sym_active_char] = ACTIONS(1163),
    [sym_text] = ACTIONS(1163),
  },
  [578] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1165),
  },
  [579] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1167),
  },
  [580] = {
    [sym_math_shift] = ACTIONS(969),
    [ts_builtin_sym_end] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_RBRACK] = ACTIONS(969),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(969),
    [sym_begin_group] = ACTIONS(969),
    [sym_alignment_tab] = ACTIONS(969),
    [sym_parameter_char] = ACTIONS(969),
    [sym_superscript] = ACTIONS(969),
    [sym_subscript] = ACTIONS(969),
    [sym_active_char] = ACTIONS(969),
    [sym_text] = ACTIONS(969),
  },
  [581] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(600),
  },
  [582] = {
    [anon_sym_LBRACK] = ACTIONS(1169),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1169),
    [sym_begin_group] = ACTIONS(1169),
    [sym_alignment_tab] = ACTIONS(1169),
    [sym_parameter_char] = ACTIONS(1169),
    [sym_superscript] = ACTIONS(1169),
    [sym_subscript] = ACTIONS(1169),
    [sym_active_char] = ACTIONS(1169),
    [sym_text] = ACTIONS(1169),
  },
  [583] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1171),
  },
  [584] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1173),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1175),
    [sym__end_of_line] = ACTIONS(1175),
  },
  [585] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1177),
  },
  [586] = {
    [sym_math_shift] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [587] = {
    [sym__whitespace] = ACTIONS(1181),
    [anon_sym_LBRACK] = ACTIONS(760),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(760),
    [sym_end_group] = ACTIONS(760),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(760),
    [sym_superscript] = ACTIONS(760),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [sym_text] = ACTIONS(764),
  },
  [588] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_end_group] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [589] = {
    [sym__common] = STATE(599),
    [sym__math_mode_common] = STATE(599),
    [sym__math_mode_at] = STATE(599),
    [sym_parameter] = STATE(599),
    [sym_math_env_at] = STATE(599),
    [sym_tag_at] = STATE(599),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(599),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(599),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(599),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(599),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(599),
    [sym_opt_math_group_at] = STATE(599),
    [sym_token_at] = STATE(599),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(599),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(732),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(1183),
    [sym_alignment_tab] = ACTIONS(1015),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(1015),
    [sym_text] = ACTIONS(1015),
  },
  [590] = {
    [sym__common] = STATE(602),
    [sym__text_mode_common] = STATE(602),
    [sym_inline_verbatim] = STATE(602),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(602),
    [sym_text_mode_at] = STATE(654),
    [sym_parameter] = STATE(602),
    [sym_text_env_at] = STATE(602),
    [sym__display_math_at] = STATE(602),
    [sym_tex_display_math_at] = STATE(602),
    [sym_latex_display_math_at] = STATE(602),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(602),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(602),
    [sym_tex_inline_math_at] = STATE(602),
    [sym_latex_inline_math_at] = STATE(602),
    [sym_inline_math_env_at] = STATE(602),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(602),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(602),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(602),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(602),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(602),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(602),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(602),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(602),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(602),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(602),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(602),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(602),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(602),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(602),
    [sym_opt_text_group_at] = STATE(602),
    [sym_token_at] = STATE(602),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(602),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1185),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1021),
  },
  [591] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1023),
    [sym_begin_group] = ACTIONS(1023),
    [sym_end_group] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1023),
    [sym_parameter_char] = ACTIONS(1023),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1023),
    [sym_active_char] = ACTIONS(1023),
    [sym_text] = ACTIONS(1023),
  },
  [592] = {
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_end_group] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [593] = {
    [sym__common] = STATE(524),
    [sym__math_mode_common] = STATE(524),
    [sym__math_mode_at] = STATE(524),
    [sym_parameter] = STATE(524),
    [sym_math_env_at] = STATE(524),
    [sym_tag_at] = STATE(524),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(524),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_end] = STATE(655),
    [sym_end_token] = STATE(377),
    [sym_include_at] = STATE(524),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(524),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(524),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(524),
    [sym_opt_math_group_at] = STATE(524),
    [sym_token_at] = STATE(524),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(524),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(744),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [594] = {
    [sym__common] = STATE(657),
    [sym__text_mode_common] = STATE(657),
    [sym_inline_verbatim] = STATE(657),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(657),
    [sym_parameter] = STATE(657),
    [sym_text_env_at] = STATE(657),
    [sym__display_math_at] = STATE(657),
    [sym_tex_display_math_at] = STATE(657),
    [sym_latex_display_math_at] = STATE(657),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(657),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(657),
    [sym_tex_inline_math_at] = STATE(657),
    [sym_latex_inline_math_at] = STATE(657),
    [sym_inline_math_env_at] = STATE(657),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(657),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(657),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(657),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(657),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(657),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(657),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(657),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(657),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(657),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(657),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(657),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(657),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(657),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(657),
    [sym_opt_text_group_at] = STATE(657),
    [sym_token_at] = STATE(657),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(657),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1187),
    [sym_alignment_tab] = ACTIONS(1189),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(1189),
    [sym_text] = ACTIONS(1189),
  },
  [595] = {
    [anon_sym_LBRACK] = ACTIONS(810),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(810),
    [sym_begin_group] = ACTIONS(810),
    [sym_end_group] = ACTIONS(810),
    [sym_alignment_tab] = ACTIONS(810),
    [sym_parameter_char] = ACTIONS(810),
    [sym_superscript] = ACTIONS(810),
    [sym_subscript] = ACTIONS(810),
    [sym_active_char] = ACTIONS(810),
    [sym_text] = ACTIONS(810),
  },
  [596] = {
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1027),
    [sym_begin_group] = ACTIONS(1027),
    [sym_end_group] = ACTIONS(1027),
    [sym_alignment_tab] = ACTIONS(1027),
    [sym_parameter_char] = ACTIONS(1027),
    [sym_superscript] = ACTIONS(1027),
    [sym_subscript] = ACTIONS(1027),
    [sym_active_char] = ACTIONS(1027),
    [sym_text] = ACTIONS(1027),
  },
  [597] = {
    [sym__common] = STATE(605),
    [sym__math_mode_common] = STATE(605),
    [sym__math_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_math_env_at] = STATE(605),
    [sym_tag_at] = STATE(605),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(605),
    [sym_opt_math_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(342),
    [sym_end_opt] = STATE(658),
    [aux_sym_math_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [598] = {
    [sym_math_shift] = ACTIONS(1191),
    [anon_sym_LBRACK] = ACTIONS(1191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1191),
    [sym_begin_group] = ACTIONS(1191),
    [sym_alignment_tab] = ACTIONS(1191),
    [sym_parameter_char] = ACTIONS(1191),
    [sym_superscript] = ACTIONS(1191),
    [sym_subscript] = ACTIONS(1191),
    [sym_active_char] = ACTIONS(1191),
    [sym_text] = ACTIONS(1191),
  },
  [599] = {
    [sym__common] = STATE(599),
    [sym__math_mode_common] = STATE(599),
    [sym__math_mode_at] = STATE(599),
    [sym_parameter] = STATE(599),
    [sym_math_env_at] = STATE(599),
    [sym_tag_at] = STATE(599),
    [sym_tag_token] = STATE(472),
    [sym_escaped] = STATE(599),
    [sym_begin] = STATE(473),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(599),
    [sym_include_token] = STATE(474),
    [sym_storage] = STATE(599),
    [sym_storage_token] = STATE(170),
    [sym_catcode] = STATE(599),
    [sym_catcode_token] = STATE(171),
    [sym_math_group_at] = STATE(599),
    [sym_opt_math_group_at] = STATE(599),
    [sym_token_at] = STATE(599),
    [sym_begin_opt] = STATE(475),
    [aux_sym_math_mode_at_repeat1] = STATE(599),
    [aux_sym_parameter_repeat1] = STATE(174),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1193),
    [sym_begin_group] = ACTIONS(1196),
    [sym_end_group] = ACTIONS(1031),
    [sym_alignment_tab] = ACTIONS(1199),
    [sym_parameter_char] = ACTIONS(1202),
    [sym_superscript] = ACTIONS(1199),
    [sym_subscript] = ACTIONS(1199),
    [sym_active_char] = ACTIONS(1199),
    [sym_text] = ACTIONS(1199),
  },
  [600] = {
    [sym_math_shift] = ACTIONS(1205),
    [anon_sym_LBRACK] = ACTIONS(1205),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1205),
    [sym_begin_group] = ACTIONS(1205),
    [sym_alignment_tab] = ACTIONS(1205),
    [sym_parameter_char] = ACTIONS(1205),
    [sym_superscript] = ACTIONS(1205),
    [sym_subscript] = ACTIONS(1205),
    [sym_active_char] = ACTIONS(1205),
    [sym_text] = ACTIONS(1205),
  },
  [601] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1207),
  },
  [602] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [603] = {
    [sym_math_shift] = ACTIONS(1209),
    [anon_sym_LBRACK] = ACTIONS(1209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1209),
    [sym_begin_group] = ACTIONS(1209),
    [sym_alignment_tab] = ACTIONS(1209),
    [sym_parameter_char] = ACTIONS(1209),
    [sym_superscript] = ACTIONS(1209),
    [sym_subscript] = ACTIONS(1209),
    [sym_active_char] = ACTIONS(1209),
    [sym_text] = ACTIONS(1209),
  },
  [604] = {
    [sym_math_shift] = ACTIONS(1211),
    [anon_sym_LBRACK] = ACTIONS(1211),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1211),
    [sym_begin_group] = ACTIONS(1211),
    [sym_alignment_tab] = ACTIONS(1211),
    [sym_parameter_char] = ACTIONS(1211),
    [sym_superscript] = ACTIONS(1211),
    [sym_subscript] = ACTIONS(1211),
    [sym_active_char] = ACTIONS(1211),
    [sym_text] = ACTIONS(1211),
  },
  [605] = {
    [sym__common] = STATE(605),
    [sym__math_mode_common] = STATE(605),
    [sym__math_mode_at] = STATE(605),
    [sym_parameter] = STATE(605),
    [sym_math_env_at] = STATE(605),
    [sym_tag_at] = STATE(605),
    [sym_tag_token] = STATE(339),
    [sym_escaped] = STATE(605),
    [sym_begin] = STATE(340),
    [sym_begin_token] = STATE(40),
    [sym_include_at] = STATE(605),
    [sym_include_token] = STATE(341),
    [sym_storage] = STATE(605),
    [sym_storage_token] = STATE(95),
    [sym_catcode] = STATE(605),
    [sym_catcode_token] = STATE(96),
    [sym_math_group_at] = STATE(605),
    [sym_opt_math_group_at] = STATE(605),
    [sym_token_at] = STATE(605),
    [sym_begin_opt] = STATE(342),
    [aux_sym_math_mode_at_repeat1] = STATE(605),
    [aux_sym_parameter_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [anon_sym_RBRACK] = ACTIONS(1031),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1096),
    [sym_begin_group] = ACTIONS(1099),
    [sym_alignment_tab] = ACTIONS(1213),
    [sym_parameter_char] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1213),
    [sym_subscript] = ACTIONS(1213),
    [sym_active_char] = ACTIONS(1213),
    [sym_text] = ACTIONS(1213),
  },
  [606] = {
    [sym_math_shift] = ACTIONS(1216),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [607] = {
    [sym_math_shift] = ACTIONS(1017),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1017),
  },
  [608] = {
    [sym_math_shift] = ACTIONS(1050),
    [anon_sym_LBRACK] = ACTIONS(1050),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1050),
    [sym_begin_group] = ACTIONS(1050),
    [sym_end_group] = ACTIONS(1050),
    [sym_alignment_tab] = ACTIONS(1050),
    [sym_parameter_char] = ACTIONS(1050),
    [sym_superscript] = ACTIONS(1050),
    [sym_subscript] = ACTIONS(1050),
    [sym_active_char] = ACTIONS(1050),
    [sym_text] = ACTIONS(1050),
  },
  [609] = {
    [sym_math_shift] = ACTIONS(1062),
    [anon_sym_LBRACK] = ACTIONS(1062),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1062),
    [sym_begin_group] = ACTIONS(1062),
    [sym_end_group] = ACTIONS(1062),
    [sym_alignment_tab] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(1062),
    [sym_superscript] = ACTIONS(1062),
    [sym_subscript] = ACTIONS(1062),
    [sym_active_char] = ACTIONS(1062),
    [sym_text] = ACTIONS(1062),
  },
  [610] = {
    [sym_math_shift] = ACTIONS(1088),
    [anon_sym_LBRACK] = ACTIONS(1088),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1088),
    [sym_begin_group] = ACTIONS(1088),
    [sym_end_group] = ACTIONS(1088),
    [sym_alignment_tab] = ACTIONS(1088),
    [sym_parameter_char] = ACTIONS(1088),
    [sym_superscript] = ACTIONS(1088),
    [sym_subscript] = ACTIONS(1088),
    [sym_active_char] = ACTIONS(1088),
    [sym_text] = ACTIONS(1088),
  },
  [611] = {
    [sym_math_shift] = ACTIONS(1108),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1108),
    [sym_begin_group] = ACTIONS(1108),
    [sym_end_group] = ACTIONS(1108),
    [sym_alignment_tab] = ACTIONS(1108),
    [sym_parameter_char] = ACTIONS(1108),
    [sym_superscript] = ACTIONS(1108),
    [sym_subscript] = ACTIONS(1108),
    [sym_active_char] = ACTIONS(1108),
    [sym_text] = ACTIONS(1108),
  },
  [612] = {
    [sym_math_shift] = ACTIONS(1110),
    [anon_sym_LBRACK] = ACTIONS(1110),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1110),
    [sym_begin_group] = ACTIONS(1110),
    [sym_end_group] = ACTIONS(1110),
    [sym_alignment_tab] = ACTIONS(1110),
    [sym_parameter_char] = ACTIONS(1110),
    [sym_superscript] = ACTIONS(1110),
    [sym_subscript] = ACTIONS(1110),
    [sym_active_char] = ACTIONS(1110),
    [sym_text] = ACTIONS(1110),
  },
  [613] = {
    [sym_math_shift] = ACTIONS(1112),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1112),
    [sym_begin_group] = ACTIONS(1112),
    [sym_end_group] = ACTIONS(1112),
    [sym_alignment_tab] = ACTIONS(1112),
    [sym_parameter_char] = ACTIONS(1112),
    [sym_superscript] = ACTIONS(1112),
    [sym_subscript] = ACTIONS(1112),
    [sym_active_char] = ACTIONS(1112),
    [sym_text] = ACTIONS(1112),
  },
  [614] = {
    [sym_math_shift] = ACTIONS(1114),
    [anon_sym_LBRACK] = ACTIONS(1114),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1114),
    [sym_begin_group] = ACTIONS(1114),
    [sym_end_group] = ACTIONS(1114),
    [sym_alignment_tab] = ACTIONS(1114),
    [sym_parameter_char] = ACTIONS(1114),
    [sym_superscript] = ACTIONS(1114),
    [sym_subscript] = ACTIONS(1114),
    [sym_active_char] = ACTIONS(1114),
    [sym_text] = ACTIONS(1114),
  },
  [615] = {
    [sym_text_group_at] = STATE(661),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [616] = {
    [sym_math_shift] = ACTIONS(1126),
    [anon_sym_LBRACK] = ACTIONS(1126),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [617] = {
    [sym_text_group_at] = STATE(662),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(401),
  },
  [618] = {
    [sym_math_shift] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [619] = {
    [sym_math_shift] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [620] = {
    [anon_sym_LBRACK] = ACTIONS(1050),
    [anon_sym_RBRACK] = ACTIONS(1050),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1050),
    [sym_begin_group] = ACTIONS(1050),
    [sym_alignment_tab] = ACTIONS(1050),
    [sym_parameter_char] = ACTIONS(1050),
    [sym_superscript] = ACTIONS(1050),
    [sym_subscript] = ACTIONS(1050),
    [sym_active_char] = ACTIONS(1050),
    [sym_text] = ACTIONS(1050),
  },
  [621] = {
    [anon_sym_LBRACK] = ACTIONS(1191),
    [anon_sym_RBRACK] = ACTIONS(1191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1191),
    [sym_begin_group] = ACTIONS(1191),
    [sym_alignment_tab] = ACTIONS(1191),
    [sym_parameter_char] = ACTIONS(1191),
    [sym_superscript] = ACTIONS(1191),
    [sym_subscript] = ACTIONS(1191),
    [sym_active_char] = ACTIONS(1191),
    [sym_text] = ACTIONS(1191),
  },
  [622] = {
    [anon_sym_LBRACK] = ACTIONS(1205),
    [anon_sym_RBRACK] = ACTIONS(1205),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1205),
    [sym_begin_group] = ACTIONS(1205),
    [sym_alignment_tab] = ACTIONS(1205),
    [sym_parameter_char] = ACTIONS(1205),
    [sym_superscript] = ACTIONS(1205),
    [sym_subscript] = ACTIONS(1205),
    [sym_active_char] = ACTIONS(1205),
    [sym_text] = ACTIONS(1205),
  },
  [623] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1218),
  },
  [624] = {
    [anon_sym_LBRACK] = ACTIONS(1209),
    [anon_sym_RBRACK] = ACTIONS(1209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1209),
    [sym_begin_group] = ACTIONS(1209),
    [sym_alignment_tab] = ACTIONS(1209),
    [sym_parameter_char] = ACTIONS(1209),
    [sym_superscript] = ACTIONS(1209),
    [sym_subscript] = ACTIONS(1209),
    [sym_active_char] = ACTIONS(1209),
    [sym_text] = ACTIONS(1209),
  },
  [625] = {
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(774),
    [sym_begin_group] = ACTIONS(774),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(774),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [626] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1220),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [627] = {
    [anon_sym_LBRACK] = ACTIONS(1211),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1211),
    [sym_begin_group] = ACTIONS(1211),
    [sym_alignment_tab] = ACTIONS(1211),
    [sym_parameter_char] = ACTIONS(1211),
    [sym_superscript] = ACTIONS(1211),
    [sym_subscript] = ACTIONS(1211),
    [sym_active_char] = ACTIONS(1211),
    [sym_text] = ACTIONS(1211),
  },
  [628] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(774),
  },
  [629] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1222),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [630] = {
    [anon_sym_LBRACK] = ACTIONS(1224),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1224),
    [sym_begin_group] = ACTIONS(1224),
    [sym_alignment_tab] = ACTIONS(1224),
    [sym_parameter_char] = ACTIONS(1224),
    [sym_superscript] = ACTIONS(1224),
    [sym_subscript] = ACTIONS(1224),
    [sym_active_char] = ACTIONS(1224),
    [sym_text] = ACTIONS(1224),
  },
  [631] = {
    [sym_text_group_at] = STATE(667),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(806),
    [sym__end_of_line] = ACTIONS(1226),
  },
  [632] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1226),
  },
  [633] = {
    [sym_math_shift] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_RBRACK] = ACTIONS(1228),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1228),
    [sym_begin_group] = ACTIONS(1228),
    [sym_alignment_tab] = ACTIONS(1228),
    [sym_parameter_char] = ACTIONS(1228),
    [sym_superscript] = ACTIONS(1228),
    [sym_subscript] = ACTIONS(1228),
    [sym_active_char] = ACTIONS(1228),
    [sym_text] = ACTIONS(1228),
  },
  [634] = {
    [sym__whitespace] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1130),
    [sym__end_of_line] = ACTIONS(1130),
  },
  [635] = {
    [sym_math_shift] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1230),
    [anon_sym_RBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1230),
    [sym_begin_group] = ACTIONS(1230),
    [sym_alignment_tab] = ACTIONS(1230),
    [sym_parameter_char] = ACTIONS(1230),
    [sym_superscript] = ACTIONS(1230),
    [sym_subscript] = ACTIONS(1230),
    [sym_active_char] = ACTIONS(1230),
    [sym_text] = ACTIONS(1230),
  },
  [636] = {
    [anon_sym_LBRACK] = ACTIONS(1145),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1145),
    [sym_begin_group] = ACTIONS(1145),
    [sym_end_group] = ACTIONS(1145),
    [sym_alignment_tab] = ACTIONS(1145),
    [sym_parameter_char] = ACTIONS(1145),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1145),
    [sym_active_char] = ACTIONS(1145),
    [sym_text] = ACTIONS(1145),
  },
  [637] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1232),
  },
  [638] = {
    [anon_sym_LBRACK] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_end_group] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [639] = {
    [anon_sym_LBRACK] = ACTIONS(991),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_end_group] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_text] = ACTIONS(991),
  },
  [640] = {
    [sym_math_shift] = ACTIONS(1135),
    [anon_sym_LBRACK] = ACTIONS(1135),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1135),
    [sym_begin_group] = ACTIONS(1135),
    [sym_end_group] = ACTIONS(1135),
    [sym_alignment_tab] = ACTIONS(1135),
    [sym_parameter_char] = ACTIONS(1135),
    [sym_superscript] = ACTIONS(1135),
    [sym_subscript] = ACTIONS(1135),
    [sym_active_char] = ACTIONS(1135),
    [sym_text] = ACTIONS(1135),
  },
  [641] = {
    [sym_math_shift] = ACTIONS(1161),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1161),
    [sym_begin_group] = ACTIONS(1161),
    [sym_end_group] = ACTIONS(1161),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1161),
    [sym_subscript] = ACTIONS(1161),
    [sym_active_char] = ACTIONS(1161),
    [sym_text] = ACTIONS(1161),
  },
  [642] = {
    [sym_math_shift] = ACTIONS(1163),
    [anon_sym_LBRACK] = ACTIONS(1163),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1163),
    [sym_begin_group] = ACTIONS(1163),
    [sym_end_group] = ACTIONS(1163),
    [sym_alignment_tab] = ACTIONS(1163),
    [sym_parameter_char] = ACTIONS(1163),
    [sym_superscript] = ACTIONS(1163),
    [sym_subscript] = ACTIONS(1163),
    [sym_active_char] = ACTIONS(1163),
    [sym_text] = ACTIONS(1163),
  },
  [643] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1234),
  },
  [644] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1236),
  },
  [645] = {
    [sym_math_shift] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(969),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(969),
    [sym_begin_group] = ACTIONS(969),
    [sym_end_group] = ACTIONS(969),
    [sym_alignment_tab] = ACTIONS(969),
    [sym_parameter_char] = ACTIONS(969),
    [sym_superscript] = ACTIONS(969),
    [sym_subscript] = ACTIONS(969),
    [sym_active_char] = ACTIONS(969),
    [sym_text] = ACTIONS(969),
  },
  [646] = {
    [sym_math_shift] = ACTIONS(965),
    [ts_builtin_sym_end] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_RBRACK] = ACTIONS(965),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(965),
    [sym_begin_group] = ACTIONS(965),
    [sym_alignment_tab] = ACTIONS(965),
    [sym_parameter_char] = ACTIONS(965),
    [sym_superscript] = ACTIONS(965),
    [sym_subscript] = ACTIONS(965),
    [sym_active_char] = ACTIONS(965),
    [sym_text] = ACTIONS(965),
  },
  [647] = {
    [sym_math_shift] = ACTIONS(967),
    [ts_builtin_sym_end] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(967),
    [anon_sym_RBRACK] = ACTIONS(967),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(967),
    [sym_begin_group] = ACTIONS(967),
    [sym_alignment_tab] = ACTIONS(967),
    [sym_parameter_char] = ACTIONS(967),
    [sym_superscript] = ACTIONS(967),
    [sym_subscript] = ACTIONS(967),
    [sym_active_char] = ACTIONS(967),
    [sym_text] = ACTIONS(967),
  },
  [648] = {
    [anon_sym_LBRACK] = ACTIONS(1238),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1238),
    [sym_begin_group] = ACTIONS(1238),
    [sym_alignment_tab] = ACTIONS(1238),
    [sym_parameter_char] = ACTIONS(1238),
    [sym_superscript] = ACTIONS(1238),
    [sym_subscript] = ACTIONS(1238),
    [sym_active_char] = ACTIONS(1238),
    [sym_text] = ACTIONS(1238),
  },
  [649] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1240),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1242),
    [sym__end_of_line] = ACTIONS(1242),
  },
  [650] = {
    [sym_math_shift] = ACTIONS(1244),
    [anon_sym_LBRACK] = ACTIONS(1244),
    [anon_sym_RBRACK] = ACTIONS(1244),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1244),
    [sym_begin_group] = ACTIONS(1244),
    [sym_alignment_tab] = ACTIONS(1244),
    [sym_parameter_char] = ACTIONS(1244),
    [sym_superscript] = ACTIONS(1244),
    [sym_subscript] = ACTIONS(1244),
    [sym_active_char] = ACTIONS(1244),
    [sym_text] = ACTIONS(1244),
  },
  [651] = {
    [anon_sym_LBRACK] = ACTIONS(1050),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1050),
    [sym_begin_group] = ACTIONS(1050),
    [sym_end_group] = ACTIONS(1050),
    [sym_alignment_tab] = ACTIONS(1050),
    [sym_parameter_char] = ACTIONS(1050),
    [sym_superscript] = ACTIONS(1050),
    [sym_subscript] = ACTIONS(1050),
    [sym_active_char] = ACTIONS(1050),
    [sym_text] = ACTIONS(1050),
  },
  [652] = {
    [anon_sym_LBRACK] = ACTIONS(1191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1191),
    [sym_begin_group] = ACTIONS(1191),
    [sym_end_group] = ACTIONS(1191),
    [sym_alignment_tab] = ACTIONS(1191),
    [sym_parameter_char] = ACTIONS(1191),
    [sym_superscript] = ACTIONS(1191),
    [sym_subscript] = ACTIONS(1191),
    [sym_active_char] = ACTIONS(1191),
    [sym_text] = ACTIONS(1191),
  },
  [653] = {
    [anon_sym_LBRACK] = ACTIONS(1205),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1205),
    [sym_begin_group] = ACTIONS(1205),
    [sym_end_group] = ACTIONS(1205),
    [sym_alignment_tab] = ACTIONS(1205),
    [sym_parameter_char] = ACTIONS(1205),
    [sym_superscript] = ACTIONS(1205),
    [sym_subscript] = ACTIONS(1205),
    [sym_active_char] = ACTIONS(1205),
    [sym_text] = ACTIONS(1205),
  },
  [654] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1246),
  },
  [655] = {
    [anon_sym_LBRACK] = ACTIONS(1209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1209),
    [sym_begin_group] = ACTIONS(1209),
    [sym_end_group] = ACTIONS(1209),
    [sym_alignment_tab] = ACTIONS(1209),
    [sym_parameter_char] = ACTIONS(1209),
    [sym_superscript] = ACTIONS(1209),
    [sym_subscript] = ACTIONS(1209),
    [sym_active_char] = ACTIONS(1209),
    [sym_text] = ACTIONS(1209),
  },
  [656] = {
    [anon_sym_LBRACK] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [657] = {
    [sym__common] = STATE(511),
    [sym__text_mode_common] = STATE(511),
    [sym_inline_verbatim] = STATE(511),
    [sym_verb_token] = STATE(66),
    [sym__text_mode_at] = STATE(511),
    [sym_parameter] = STATE(511),
    [sym_text_env_at] = STATE(511),
    [sym__display_math_at] = STATE(511),
    [sym_tex_display_math_at] = STATE(511),
    [sym_latex_display_math_at] = STATE(511),
    [sym_begin_display_math] = STATE(320),
    [sym_begin_inline_math] = STATE(321),
    [sym_display_math_env_at] = STATE(511),
    [sym_display_math_begin_at] = STATE(322),
    [sym__inline_math_at] = STATE(511),
    [sym_tex_inline_math_at] = STATE(511),
    [sym_latex_inline_math_at] = STATE(511),
    [sym_inline_math_env_at] = STATE(511),
    [sym_inline_math_begin] = STATE(323),
    [sym_verbatim_env] = STATE(511),
    [sym_verbatim_begin] = STATE(71),
    [sym_escaped] = STATE(511),
    [sym_begin] = STATE(324),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(511),
    [sym_documentclass_token] = STATE(73),
    [sym_usepackage] = STATE(511),
    [sym_usepackage_token] = STATE(74),
    [sym_include_at] = STATE(511),
    [sym_include_token] = STATE(325),
    [sym_section_at] = STATE(511),
    [sym_section_token] = STATE(326),
    [sym_storage] = STATE(511),
    [sym_storage_token] = STATE(77),
    [sym_catcode] = STATE(511),
    [sym_catcode_token] = STATE(78),
    [sym_emph_at] = STATE(511),
    [sym_emph_token] = STATE(327),
    [sym_footnote_at] = STATE(511),
    [sym_footnote_token] = STATE(328),
    [sym_textbf_at] = STATE(511),
    [sym_textbf_token] = STATE(329),
    [sym_textit_at] = STATE(511),
    [sym_textit_token] = STATE(330),
    [sym_texttt_at] = STATE(511),
    [sym_texttt_token] = STATE(331),
    [sym_text_group_at] = STATE(511),
    [sym_opt_text_group_at] = STATE(511),
    [sym_token_at] = STATE(511),
    [sym_begin_opt] = STATE(332),
    [aux_sym_text_mode_at_repeat1] = STATE(511),
    [aux_sym_parameter_repeat1] = STATE(87),
    [sym_math_shift] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(1248),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [658] = {
    [anon_sym_LBRACK] = ACTIONS(1211),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1211),
    [sym_begin_group] = ACTIONS(1211),
    [sym_end_group] = ACTIONS(1211),
    [sym_alignment_tab] = ACTIONS(1211),
    [sym_parameter_char] = ACTIONS(1211),
    [sym_superscript] = ACTIONS(1211),
    [sym_subscript] = ACTIONS(1211),
    [sym_active_char] = ACTIONS(1211),
    [sym_text] = ACTIONS(1211),
  },
  [659] = {
    [sym_math_shift] = ACTIONS(1250),
    [anon_sym_LBRACK] = ACTIONS(1250),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1250),
    [sym_begin_group] = ACTIONS(1250),
    [sym_alignment_tab] = ACTIONS(1250),
    [sym_parameter_char] = ACTIONS(1250),
    [sym_superscript] = ACTIONS(1250),
    [sym_subscript] = ACTIONS(1250),
    [sym_active_char] = ACTIONS(1250),
    [sym_text] = ACTIONS(1250),
  },
  [660] = {
    [sym_math_shift] = ACTIONS(1252),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [661] = {
    [sym_math_shift] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1228),
    [sym_begin_group] = ACTIONS(1228),
    [sym_end_group] = ACTIONS(1228),
    [sym_alignment_tab] = ACTIONS(1228),
    [sym_parameter_char] = ACTIONS(1228),
    [sym_superscript] = ACTIONS(1228),
    [sym_subscript] = ACTIONS(1228),
    [sym_active_char] = ACTIONS(1228),
    [sym_text] = ACTIONS(1228),
  },
  [662] = {
    [sym_math_shift] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1230),
    [sym_begin_group] = ACTIONS(1230),
    [sym_end_group] = ACTIONS(1230),
    [sym_alignment_tab] = ACTIONS(1230),
    [sym_parameter_char] = ACTIONS(1230),
    [sym_superscript] = ACTIONS(1230),
    [sym_subscript] = ACTIONS(1230),
    [sym_active_char] = ACTIONS(1230),
    [sym_text] = ACTIONS(1230),
  },
  [663] = {
    [anon_sym_LBRACK] = ACTIONS(1250),
    [anon_sym_RBRACK] = ACTIONS(1250),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1250),
    [sym_begin_group] = ACTIONS(1250),
    [sym_alignment_tab] = ACTIONS(1250),
    [sym_parameter_char] = ACTIONS(1250),
    [sym_superscript] = ACTIONS(1250),
    [sym_subscript] = ACTIONS(1250),
    [sym_active_char] = ACTIONS(1250),
    [sym_text] = ACTIONS(1250),
  },
  [664] = {
    [anon_sym_LBRACK] = ACTIONS(1062),
    [anon_sym_RBRACK] = ACTIONS(1062),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1062),
    [sym_begin_group] = ACTIONS(1062),
    [sym_alignment_tab] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(1062),
    [sym_superscript] = ACTIONS(1062),
    [sym_subscript] = ACTIONS(1062),
    [sym_active_char] = ACTIONS(1062),
    [sym_text] = ACTIONS(1062),
  },
  [665] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1062),
  },
  [666] = {
    [anon_sym_LBRACK] = ACTIONS(1254),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1254),
    [sym_begin_group] = ACTIONS(1254),
    [sym_alignment_tab] = ACTIONS(1254),
    [sym_parameter_char] = ACTIONS(1254),
    [sym_superscript] = ACTIONS(1254),
    [sym_subscript] = ACTIONS(1254),
    [sym_active_char] = ACTIONS(1254),
    [sym_text] = ACTIONS(1254),
  },
  [667] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1256),
  },
  [668] = {
    [anon_sym_LBRACK] = ACTIONS(971),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(971),
    [sym_begin_group] = ACTIONS(971),
    [sym_end_group] = ACTIONS(971),
    [sym_alignment_tab] = ACTIONS(971),
    [sym_parameter_char] = ACTIONS(971),
    [sym_superscript] = ACTIONS(971),
    [sym_subscript] = ACTIONS(971),
    [sym_active_char] = ACTIONS(971),
    [sym_text] = ACTIONS(971),
  },
  [669] = {
    [sym_math_shift] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(965),
    [sym_begin_group] = ACTIONS(965),
    [sym_end_group] = ACTIONS(965),
    [sym_alignment_tab] = ACTIONS(965),
    [sym_parameter_char] = ACTIONS(965),
    [sym_superscript] = ACTIONS(965),
    [sym_subscript] = ACTIONS(965),
    [sym_active_char] = ACTIONS(965),
    [sym_text] = ACTIONS(965),
  },
  [670] = {
    [sym_math_shift] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(967),
    [sym_begin_group] = ACTIONS(967),
    [sym_end_group] = ACTIONS(967),
    [sym_alignment_tab] = ACTIONS(967),
    [sym_parameter_char] = ACTIONS(967),
    [sym_superscript] = ACTIONS(967),
    [sym_subscript] = ACTIONS(967),
    [sym_active_char] = ACTIONS(967),
    [sym_text] = ACTIONS(967),
  },
  [671] = {
    [anon_sym_LBRACK] = ACTIONS(1250),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1250),
    [sym_begin_group] = ACTIONS(1250),
    [sym_end_group] = ACTIONS(1250),
    [sym_alignment_tab] = ACTIONS(1250),
    [sym_parameter_char] = ACTIONS(1250),
    [sym_superscript] = ACTIONS(1250),
    [sym_subscript] = ACTIONS(1250),
    [sym_active_char] = ACTIONS(1250),
    [sym_text] = ACTIONS(1250),
  },
  [672] = {
    [anon_sym_LBRACK] = ACTIONS(1062),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1062),
    [sym_begin_group] = ACTIONS(1062),
    [sym_end_group] = ACTIONS(1062),
    [sym_alignment_tab] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(1062),
    [sym_superscript] = ACTIONS(1062),
    [sym_subscript] = ACTIONS(1062),
    [sym_active_char] = ACTIONS(1062),
    [sym_text] = ACTIONS(1062),
  },
  [673] = {
    [sym_math_shift] = ACTIONS(1244),
    [anon_sym_LBRACK] = ACTIONS(1244),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1244),
    [sym_begin_group] = ACTIONS(1244),
    [sym_end_group] = ACTIONS(1244),
    [sym_alignment_tab] = ACTIONS(1244),
    [sym_parameter_char] = ACTIONS(1244),
    [sym_superscript] = ACTIONS(1244),
    [sym_subscript] = ACTIONS(1244),
    [sym_active_char] = ACTIONS(1244),
    [sym_text] = ACTIONS(1244),
  },
  [674] = {
    [anon_sym_LBRACK] = ACTIONS(1258),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1258),
    [sym_begin_group] = ACTIONS(1258),
    [sym_alignment_tab] = ACTIONS(1258),
    [sym_parameter_char] = ACTIONS(1258),
    [sym_superscript] = ACTIONS(1258),
    [sym_subscript] = ACTIONS(1258),
    [sym_active_char] = ACTIONS(1258),
    [sym_text] = ACTIONS(1258),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, SHIFT(31),
  [21] = {.count = 1, .reusable = true}, SHIFT(32),
  [23] = {.count = 1, .reusable = true}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, SHIFT(33),
  [27] = {.count = 1, .reusable = true}, SHIFT(34),
  [29] = {.count = 1, .reusable = true}, SHIFT(35),
  [31] = {.count = 1, .reusable = true}, SHIFT(36),
  [33] = {.count = 1, .reusable = true}, SHIFT(42),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(43),
  [39] = {.count = 1, .reusable = true}, SHIFT(44),
  [41] = {.count = 1, .reusable = true}, SHIFT(45),
  [43] = {.count = 1, .reusable = false}, SHIFT(46),
  [45] = {.count = 1, .reusable = false}, SHIFT(47),
  [47] = {.count = 1, .reusable = false}, SHIFT(48),
  [49] = {.count = 1, .reusable = false}, SHIFT(49),
  [51] = {.count = 1, .reusable = false}, SHIFT(50),
  [53] = {.count = 1, .reusable = false}, SHIFT(51),
  [55] = {.count = 1, .reusable = false}, SHIFT(52),
  [57] = {.count = 1, .reusable = true}, SHIFT(53),
  [59] = {.count = 1, .reusable = false}, SHIFT(54),
  [61] = {.count = 1, .reusable = false}, SHIFT(55),
  [63] = {.count = 1, .reusable = false}, SHIFT(56),
  [65] = {.count = 1, .reusable = false}, SHIFT(57),
  [67] = {.count = 1, .reusable = false}, SHIFT(58),
  [69] = {.count = 1, .reusable = false}, SHIFT(59),
  [71] = {.count = 1, .reusable = false}, SHIFT(60),
  [73] = {.count = 1, .reusable = true}, SHIFT(61),
  [75] = {.count = 1, .reusable = true}, SHIFT(62),
  [77] = {.count = 1, .reusable = true}, SHIFT(63),
  [79] = {.count = 1, .reusable = true}, SHIFT(64),
  [81] = {.count = 1, .reusable = true}, SHIFT(86),
  [83] = {.count = 1, .reusable = true}, SHIFT(87),
  [85] = {.count = 1, .reusable = true}, SHIFT(65),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [89] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [91] = {.count = 1, .reusable = true}, SHIFT(88),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(89),
  [97] = {.count = 1, .reusable = true}, SHIFT(90),
  [99] = {.count = 1, .reusable = true}, SHIFT(98),
  [101] = {.count = 1, .reusable = true}, SHIFT(99),
  [103] = {.count = 1, .reusable = false}, SHIFT(107),
  [105] = {.count = 1, .reusable = true}, SHIFT(103),
  [107] = {.count = 1, .reusable = true}, SHIFT(108),
  [109] = {.count = 1, .reusable = true}, SHIFT(109),
  [111] = {.count = 1, .reusable = true}, SHIFT(112),
  [113] = {.count = 1, .reusable = true}, SHIFT(113),
  [115] = {.count = 1, .reusable = true}, SHIFT(118),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(127),
  [121] = {.count = 1, .reusable = true}, SHIFT(135),
  [123] = {.count = 1, .reusable = true}, SHIFT(136),
  [125] = {.count = 1, .reusable = true}, SHIFT(137),
  [127] = {.count = 1, .reusable = true}, SHIFT(155),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(156),
  [133] = {.count = 1, .reusable = true}, SHIFT(158),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(159),
  [139] = {.count = 1, .reusable = true}, SHIFT(161),
  [141] = {.count = 1, .reusable = true}, SHIFT(160),
  [143] = {.count = 1, .reusable = false}, SHIFT(163),
  [145] = {.count = 1, .reusable = true}, SHIFT(164),
  [147] = {.count = 1, .reusable = true}, SHIFT(165),
  [149] = {.count = 1, .reusable = true}, SHIFT(166),
  [151] = {.count = 1, .reusable = true}, SHIFT(173),
  [153] = {.count = 1, .reusable = true}, SHIFT(174),
  [155] = {.count = 1, .reusable = true}, SHIFT(175),
  [157] = {.count = 1, .reusable = true}, SHIFT(176),
  [159] = {.count = 1, .reusable = true}, SHIFT(178),
  [161] = {.count = 1, .reusable = true}, SHIFT(180),
  [163] = {.count = 1, .reusable = true}, SHIFT(181),
  [165] = {.count = 1, .reusable = true}, SHIFT(184),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(185),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [173] = {.count = 1, .reusable = false}, SHIFT(186),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [179] = {.count = 1, .reusable = false}, SHIFT(187),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(188),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(189),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(190),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(191),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(192),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(193),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [211] = {.count = 1, .reusable = false}, SHIFT(194),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(195),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(196),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(197),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(198),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [233] = {.count = 1, .reusable = true}, SHIFT(199),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(200),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [245] = {.count = 1, .reusable = false}, SHIFT(201),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(202),
  [251] = {.count = 1, .reusable = false}, SHIFT(204),
  [253] = {.count = 1, .reusable = false}, SHIFT(205),
  [255] = {.count = 1, .reusable = false}, SHIFT(206),
  [257] = {.count = 1, .reusable = true}, SHIFT(207),
  [259] = {.count = 1, .reusable = true}, SHIFT(208),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(209),
  [265] = {.count = 1, .reusable = true}, SHIFT(219),
  [267] = {.count = 1, .reusable = true}, SHIFT(220),
  [269] = {.count = 1, .reusable = true}, SHIFT(235),
  [271] = {.count = 1, .reusable = true}, SHIFT(239),
  [273] = {.count = 1, .reusable = true}, SHIFT(241),
  [275] = {.count = 1, .reusable = true}, SHIFT(242),
  [277] = {.count = 1, .reusable = true}, SHIFT(243),
  [279] = {.count = 1, .reusable = true}, SHIFT(244),
  [281] = {.count = 1, .reusable = true}, SHIFT(245),
  [283] = {.count = 1, .reusable = false}, SHIFT(246),
  [285] = {.count = 1, .reusable = false}, SHIFT(247),
  [287] = {.count = 1, .reusable = false}, SHIFT(248),
  [289] = {.count = 1, .reusable = true}, SHIFT(249),
  [291] = {.count = 1, .reusable = true}, SHIFT(250),
  [293] = {.count = 1, .reusable = true}, SHIFT(251),
  [295] = {.count = 1, .reusable = true}, SHIFT(253),
  [297] = {.count = 1, .reusable = true}, SHIFT(257),
  [299] = {.count = 1, .reusable = true}, SHIFT(258),
  [301] = {.count = 1, .reusable = true}, SHIFT(261),
  [303] = {.count = 1, .reusable = true}, SHIFT(263),
  [305] = {.count = 1, .reusable = true}, SHIFT(264),
  [307] = {.count = 1, .reusable = true}, SHIFT(265),
  [309] = {.count = 1, .reusable = true}, SHIFT(266),
  [311] = {.count = 1, .reusable = true}, SHIFT(272),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(274),
  [317] = {.count = 1, .reusable = false}, SHIFT(277),
  [319] = {.count = 1, .reusable = true}, SHIFT(276),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(278),
  [325] = {.count = 1, .reusable = false}, SHIFT(272),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(281),
  [331] = {.count = 1, .reusable = false}, SHIFT(282),
  [333] = {.count = 1, .reusable = false}, SHIFT(283),
  [335] = {.count = 1, .reusable = false}, SHIFT(284),
  [337] = {.count = 1, .reusable = false}, SHIFT(285),
  [339] = {.count = 1, .reusable = true}, SHIFT(286),
  [341] = {.count = 1, .reusable = true}, SHIFT(287),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [345] = {.count = 1, .reusable = true}, SHIFT(290),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [349] = {.count = 1, .reusable = true}, SHIFT(285),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [353] = {.count = 1, .reusable = true}, SHIFT(293),
  [355] = {.count = 1, .reusable = true}, SHIFT(295),
  [357] = {.count = 1, .reusable = true}, SHIFT(297),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [361] = {.count = 1, .reusable = true}, SHIFT(298),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(300),
  [369] = {.count = 1, .reusable = false}, SHIFT(302),
  [371] = {.count = 1, .reusable = true}, SHIFT(303),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(304),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(306),
  [387] = {.count = 1, .reusable = true}, SHIFT(307),
  [389] = {.count = 1, .reusable = true}, SHIFT(308),
  [391] = {.count = 1, .reusable = true}, SHIFT(313),
  [393] = {.count = 1, .reusable = false}, SHIFT(314),
  [395] = {.count = 1, .reusable = false}, SHIFT(315),
  [397] = {.count = 1, .reusable = true}, SHIFT(316),
  [399] = {.count = 1, .reusable = true}, SHIFT(317),
  [401] = {.count = 1, .reusable = true}, SHIFT(318),
  [403] = {.count = 1, .reusable = true}, SHIFT(319),
  [405] = {.count = 1, .reusable = true}, SHIFT(333),
  [407] = {.count = 1, .reusable = true}, SHIFT(334),
  [409] = {.count = 1, .reusable = true}, SHIFT(336),
  [411] = {.count = 1, .reusable = true}, SHIFT(337),
  [413] = {.count = 1, .reusable = true}, SHIFT(343),
  [415] = {.count = 1, .reusable = true}, SHIFT(347),
  [417] = {.count = 1, .reusable = true}, SHIFT(349),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(361),
  [425] = {.count = 1, .reusable = true}, SHIFT(363),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [429] = {.count = 1, .reusable = true}, SHIFT(364),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(366),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [440] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [451] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(159),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(161),
  [465] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [467] = {.count = 1, .reusable = true}, SHIFT(367),
  [469] = {.count = 1, .reusable = true}, SHIFT(368),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [473] = {.count = 1, .reusable = false}, SHIFT(369),
  [475] = {.count = 1, .reusable = false}, SHIFT(370),
  [477] = {.count = 1, .reusable = false}, SHIFT(371),
  [479] = {.count = 1, .reusable = true}, SHIFT(372),
  [481] = {.count = 1, .reusable = true}, SHIFT(373),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [485] = {.count = 1, .reusable = true}, SHIFT(374),
  [487] = {.count = 1, .reusable = true}, SHIFT(378),
  [489] = {.count = 1, .reusable = true}, SHIFT(379),
  [491] = {.count = 1, .reusable = true}, SHIFT(382),
  [493] = {.count = 1, .reusable = true}, SHIFT(384),
  [495] = {.count = 1, .reusable = true}, SHIFT(385),
  [497] = {.count = 1, .reusable = true}, SHIFT(386),
  [499] = {.count = 1, .reusable = true}, SHIFT(387),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [503] = {.count = 1, .reusable = true}, SHIFT(388),
  [505] = {.count = 1, .reusable = true}, SHIFT(390),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [511] = {.count = 1, .reusable = true}, SHIFT(392),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [515] = {.count = 1, .reusable = true}, SHIFT(394),
  [517] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(34),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(35),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(36),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(185),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [546] = {.count = 1, .reusable = true}, SHIFT(395),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [550] = {.count = 1, .reusable = true}, SHIFT(396),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [568] = {.count = 1, .reusable = true}, SHIFT(398),
  [570] = {.count = 1, .reusable = false}, SHIFT(399),
  [572] = {.count = 1, .reusable = false}, SHIFT(400),
  [574] = {.count = 1, .reusable = true}, SHIFT(401),
  [576] = {.count = 1, .reusable = true}, SHIFT(402),
  [578] = {.count = 1, .reusable = true}, SHIFT(403),
  [580] = {.count = 1, .reusable = true}, SHIFT(405),
  [582] = {.count = 1, .reusable = true}, SHIFT(412),
  [584] = {.count = 1, .reusable = true}, SHIFT(416),
  [586] = {.count = 1, .reusable = true}, SHIFT(417),
  [588] = {.count = 1, .reusable = true}, SHIFT(419),
  [590] = {.count = 1, .reusable = true}, SHIFT(421),
  [592] = {.count = 1, .reusable = true}, SHIFT(423),
  [594] = {.count = 1, .reusable = true}, SHIFT(424),
  [596] = {.count = 1, .reusable = false}, SHIFT(426),
  [598] = {.count = 1, .reusable = true}, SHIFT(427),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(61),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(62),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(63),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(243),
  [614] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(87),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(65),
  [620] = {.count = 1, .reusable = true}, SHIFT(430),
  [622] = {.count = 1, .reusable = false}, SHIFT(431),
  [624] = {.count = 1, .reusable = false}, SHIFT(432),
  [626] = {.count = 1, .reusable = true}, SHIFT(433),
  [628] = {.count = 1, .reusable = true}, SHIFT(434),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [632] = {.count = 1, .reusable = true}, SHIFT(435),
  [634] = {.count = 1, .reusable = true}, SHIFT(439),
  [636] = {.count = 1, .reusable = true}, SHIFT(440),
  [638] = {.count = 1, .reusable = true}, SHIFT(441),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(89),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(90),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(264),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(99),
  [652] = {.count = 1, .reusable = true}, SHIFT(443),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [658] = {.count = 1, .reusable = true}, SHIFT(444),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [662] = {.count = 1, .reusable = true}, SHIFT(446),
  [664] = {.count = 1, .reusable = true}, SHIFT(448),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [670] = {.count = 1, .reusable = true}, SHIFT(449),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [674] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [676] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [678] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(277),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [683] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(107),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(278),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(281),
  [696] = {.count = 1, .reusable = true}, SHIFT(450),
  [698] = {.count = 1, .reusable = true}, SHIFT(451),
  [700] = {.count = 1, .reusable = true}, SHIFT(452),
  [702] = {.count = 1, .reusable = true}, SHIFT(453),
  [704] = {.count = 1, .reusable = true}, SHIFT(454),
  [706] = {.count = 1, .reusable = true}, SHIFT(455),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [710] = {.count = 1, .reusable = true}, SHIFT(456),
  [712] = {.count = 1, .reusable = true}, SHIFT(457),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [718] = {.count = 1, .reusable = true}, SHIFT(459),
  [720] = {.count = 1, .reusable = true}, SHIFT(460),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [728] = {.count = 1, .reusable = true}, SHIFT(466),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [732] = {.count = 1, .reusable = true}, SHIFT(469),
  [734] = {.count = 1, .reusable = true}, SHIFT(470),
  [736] = {.count = 1, .reusable = true}, SHIFT(471),
  [738] = {.count = 1, .reusable = true}, SHIFT(476),
  [740] = {.count = 1, .reusable = true}, SHIFT(477),
  [742] = {.count = 1, .reusable = true}, SHIFT(478),
  [744] = {.count = 1, .reusable = true}, SHIFT(480),
  [746] = {.count = 1, .reusable = true}, SHIFT(482),
  [748] = {.count = 1, .reusable = true}, SHIFT(484),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [752] = {.count = 1, .reusable = true}, SHIFT(485),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [756] = {.count = 1, .reusable = false}, SHIFT(486),
  [758] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [762] = {.count = 1, .reusable = false}, SHIFT(487),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [766] = {.count = 1, .reusable = true}, SHIFT(488),
  [768] = {.count = 1, .reusable = false}, SHIFT(490),
  [770] = {.count = 1, .reusable = true}, SHIFT(491),
  [772] = {.count = 1, .reusable = true}, SHIFT(492),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [776] = {.count = 1, .reusable = true}, SHIFT(498),
  [778] = {.count = 1, .reusable = true}, SHIFT(509),
  [780] = {.count = 1, .reusable = true}, SHIFT(510),
  [782] = {.count = 1, .reusable = true}, SHIFT(511),
  [784] = {.count = 1, .reusable = true}, SHIFT(314),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [788] = {.count = 1, .reusable = false}, SHIFT(512),
  [790] = {.count = 1, .reusable = true}, SHIFT(513),
  [792] = {.count = 1, .reusable = true}, SHIFT(514),
  [794] = {.count = 1, .reusable = true}, SHIFT(516),
  [796] = {.count = 1, .reusable = true}, SHIFT(519),
  [798] = {.count = 1, .reusable = true}, SHIFT(520),
  [800] = {.count = 1, .reusable = true}, SHIFT(523),
  [802] = {.count = 1, .reusable = true}, SHIFT(524),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [806] = {.count = 1, .reusable = true}, SHIFT(529),
  [808] = {.count = 1, .reusable = true}, SHIFT(530),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [814] = {.count = 1, .reusable = true}, SHIFT(533),
  [816] = {.count = 1, .reusable = true}, SHIFT(536),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [822] = {.count = 1, .reusable = true}, SHIFT(537),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [832] = {.count = 1, .reusable = true}, SHIFT(540),
  [834] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(135),
  [837] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(3),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(361),
  [843] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(137),
  [846] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(364),
  [849] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [852] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [857] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(366),
  [860] = {.count = 1, .reusable = true}, SHIFT(541),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [864] = {.count = 1, .reusable = false}, SHIFT(542),
  [866] = {.count = 1, .reusable = false}, SHIFT(543),
  [868] = {.count = 1, .reusable = true}, SHIFT(544),
  [870] = {.count = 1, .reusable = true}, SHIFT(545),
  [872] = {.count = 1, .reusable = true}, SHIFT(547),
  [874] = {.count = 1, .reusable = true}, SHIFT(550),
  [876] = {.count = 1, .reusable = true}, SHIFT(551),
  [878] = {.count = 1, .reusable = true}, SHIFT(552),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [882] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [885] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(165),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(386),
  [891] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(174),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [896] = {.count = 1, .reusable = true}, SHIFT(554),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [900] = {.count = 1, .reusable = true}, SHIFT(555),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [904] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(394),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [909] = {.count = 1, .reusable = true}, SHIFT(556),
  [911] = {.count = 1, .reusable = true}, SHIFT(557),
  [913] = {.count = 1, .reusable = true}, SHIFT(558),
  [915] = {.count = 1, .reusable = true}, SHIFT(559),
  [917] = {.count = 1, .reusable = true}, SHIFT(560),
  [919] = {.count = 1, .reusable = true}, SHIFT(561),
  [921] = {.count = 1, .reusable = true}, SHIFT(563),
  [923] = {.count = 1, .reusable = true}, SHIFT(565),
  [925] = {.count = 1, .reusable = true}, SHIFT(566),
  [927] = {.count = 1, .reusable = true}, SHIFT(570),
  [929] = {.count = 1, .reusable = false}, SHIFT(572),
  [931] = {.count = 1, .reusable = true}, SHIFT(426),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [937] = {.count = 1, .reusable = false}, SHIFT(573),
  [939] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [941] = {.count = 1, .reusable = true}, SHIFT(574),
  [943] = {.count = 1, .reusable = true}, SHIFT(575),
  [945] = {.count = 1, .reusable = true}, SHIFT(576),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [949] = {.count = 1, .reusable = false}, SHIFT(577),
  [951] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [953] = {.count = 1, .reusable = true}, SHIFT(578),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [957] = {.count = 1, .reusable = true}, SHIFT(579),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [961] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [963] = {.count = 1, .reusable = true}, SHIFT(580),
  [965] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [969] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [973] = {.count = 1, .reusable = true}, SHIFT(581),
  [975] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [977] = {.count = 1, .reusable = true}, SHIFT(582),
  [979] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [983] = {.count = 1, .reusable = true}, SHIFT(584),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [995] = {.count = 1, .reusable = true}, SHIFT(586),
  [997] = {.count = 1, .reusable = false}, SHIFT(587),
  [999] = {.count = 1, .reusable = true}, SHIFT(588),
  [1001] = {.count = 1, .reusable = true}, SHIFT(589),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1005] = {.count = 1, .reusable = true}, SHIFT(590),
  [1007] = {.count = 1, .reusable = true}, SHIFT(593),
  [1009] = {.count = 1, .reusable = true}, SHIFT(594),
  [1011] = {.count = 1, .reusable = true}, SHIFT(597),
  [1013] = {.count = 1, .reusable = true}, SHIFT(598),
  [1015] = {.count = 1, .reusable = true}, SHIFT(599),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1019] = {.count = 1, .reusable = true}, SHIFT(600),
  [1021] = {.count = 1, .reusable = true}, SHIFT(602),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1025] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1027] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1029] = {.count = 1, .reusable = true}, SHIFT(605),
  [1031] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(34),
  [1036] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(307),
  [1039] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(308),
  [1042] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(485),
  [1045] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1050] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1052] = {.count = 1, .reusable = true}, SHIFT(607),
  [1054] = {.count = 1, .reusable = false}, SHIFT(608),
  [1056] = {.count = 1, .reusable = true}, SHIFT(609),
  [1058] = {.count = 1, .reusable = true}, SHIFT(615),
  [1060] = {.count = 1, .reusable = true}, SHIFT(617),
  [1062] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1064] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(316),
  [1067] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(317),
  [1070] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(318),
  [1073] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1075] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(511),
  [1078] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(87),
  [1081] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(65),
  [1084] = {.count = 1, .reusable = false}, SHIFT(620),
  [1086] = {.count = 1, .reusable = true}, SHIFT(621),
  [1088] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1090] = {.count = 1, .reusable = true}, SHIFT(622),
  [1092] = {.count = 1, .reusable = true}, SHIFT(625),
  [1094] = {.count = 1, .reusable = true}, SHIFT(626),
  [1096] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(336),
  [1099] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(337),
  [1102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(524),
  [1105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(99),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1110] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1112] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1114] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1116] = {.count = 1, .reusable = true}, SHIFT(628),
  [1118] = {.count = 1, .reusable = true}, SHIFT(629),
  [1120] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1122] = {.count = 1, .reusable = true}, SHIFT(630),
  [1124] = {.count = 1, .reusable = true}, SHIFT(631),
  [1126] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1128] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1130] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(540),
  [1135] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1137] = {.count = 1, .reusable = true}, SHIFT(636),
  [1139] = {.count = 1, .reusable = true}, SHIFT(637),
  [1141] = {.count = 1, .reusable = true}, SHIFT(638),
  [1143] = {.count = 1, .reusable = true}, SHIFT(639),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1147] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1149] = {.count = 1, .reusable = true}, SHIFT(640),
  [1151] = {.count = 1, .reusable = false}, SHIFT(641),
  [1153] = {.count = 1, .reusable = false}, SHIFT(642),
  [1155] = {.count = 1, .reusable = true}, SHIFT(643),
  [1157] = {.count = 1, .reusable = true}, SHIFT(644),
  [1159] = {.count = 1, .reusable = true}, SHIFT(645),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1165] = {.count = 1, .reusable = true}, SHIFT(646),
  [1167] = {.count = 1, .reusable = true}, SHIFT(647),
  [1169] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1171] = {.count = 1, .reusable = true}, SHIFT(648),
  [1173] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1175] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1177] = {.count = 1, .reusable = true}, SHIFT(649),
  [1179] = {.count = 1, .reusable = true}, SHIFT(650),
  [1181] = {.count = 1, .reusable = false}, SHIFT(651),
  [1183] = {.count = 1, .reusable = true}, SHIFT(652),
  [1185] = {.count = 1, .reusable = true}, SHIFT(653),
  [1187] = {.count = 1, .reusable = true}, SHIFT(656),
  [1189] = {.count = 1, .reusable = true}, SHIFT(657),
  [1191] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(469),
  [1196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(470),
  [1199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(599),
  [1202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(174),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1207] = {.count = 1, .reusable = true}, SHIFT(659),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1211] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(605),
  [1216] = {.count = 1, .reusable = true}, SHIFT(660),
  [1218] = {.count = 1, .reusable = true}, SHIFT(663),
  [1220] = {.count = 1, .reusable = true}, SHIFT(664),
  [1222] = {.count = 1, .reusable = true}, SHIFT(665),
  [1224] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1226] = {.count = 1, .reusable = true}, SHIFT(666),
  [1228] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1230] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1232] = {.count = 1, .reusable = true}, SHIFT(668),
  [1234] = {.count = 1, .reusable = true}, SHIFT(669),
  [1236] = {.count = 1, .reusable = true}, SHIFT(670),
  [1238] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1240] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1242] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1244] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1246] = {.count = 1, .reusable = true}, SHIFT(671),
  [1248] = {.count = 1, .reusable = true}, SHIFT(672),
  [1250] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1252] = {.count = 1, .reusable = true}, SHIFT(673),
  [1254] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1256] = {.count = 1, .reusable = true}, SHIFT(674),
  [1258] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
