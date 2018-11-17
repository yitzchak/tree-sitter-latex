#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 388
#define SYMBOL_COUNT 164
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
  sym_text = 47,
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
  sym_begin = 105,
  sym_begin_token = 106,
  sym_end = 107,
  sym_end_token = 108,
  sym_documentclass = 109,
  sym_documentclass_token = 110,
  sym_usepackage = 111,
  sym_usepackage_token = 112,
  sym_include = 113,
  sym_include_at = 114,
  sym_include_token = 115,
  sym_section = 116,
  sym_section_at = 117,
  sym_section_token = 118,
  sym_storage = 119,
  sym_storage_token = 120,
  sym_catcode = 121,
  sym_catcode_token = 122,
  sym_emph = 123,
  sym_emph_at = 124,
  sym_emph_token = 125,
  sym_footnote = 126,
  sym_footnote_at = 127,
  sym_footnote_token = 128,
  sym_textbf = 129,
  sym_textbf_at = 130,
  sym_textbf_token = 131,
  sym_textit = 132,
  sym_textit_at = 133,
  sym_textit_token = 134,
  sym_texttt = 135,
  sym_texttt_at = 136,
  sym_texttt_token = 137,
  sym_makeatletter = 138,
  sym_makeatletter_token = 139,
  sym_makeatother = 140,
  sym_makeatother_token = 141,
  sym_text_group = 142,
  sym_text_group_at = 143,
  sym_simple_text_group = 144,
  sym_opt_text_group = 145,
  sym_opt_text_group_at = 146,
  sym_math_group = 147,
  sym_math_group_at = 148,
  sym_opt_math_group = 149,
  sym_opt_math_group_at = 150,
  sym_math_text_group = 151,
  sym_math_text_group_at = 152,
  sym_token = 153,
  sym_token_at = 154,
  sym_begin_opt = 155,
  sym_end_opt = 156,
  aux_sym_text_mode_repeat1 = 157,
  aux_sym_text_mode_at_repeat1 = 158,
  aux_sym_math_mode_repeat1 = 159,
  aux_sym_math_mode_at_repeat1 = 160,
  aux_sym_parameter_repeat1 = 161,
  aux_sym_verbatim_text_repeat1 = 162,
  aux_sym_verbatim_text_repeat2 = 163,
  anon_alias_sym_class_name = 164,
  anon_alias_sym_env_name = 165,
  anon_alias_sym_package_name = 166,
  anon_alias_sym_text = 167,
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
        ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_double_circumflex);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 41:
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
        ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(103);
      if (lookahead == 'k')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(114);
      if (lookahead == 'p')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(137);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'u')
        ADVANCE(162);
      if (lookahead == 'v')
        ADVANCE(172);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 43:
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
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(47);
      if (lookahead == 'p')
        ADVANCE(52);
      if (lookahead == 's')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'h')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(76);
      if (lookahead == 'o')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(91);
      if (lookahead == 'm')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(105);
      if (lookahead == 'p')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(115);
      if (lookahead == 'i')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 't')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(145);
      if (lookahead == 's')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(156);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 180:
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
        ADVANCE(40);
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
        ADVANCE(40);
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
      ADVANCE(40);
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
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(40);
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
        ADVANCE(40);
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
      ADVANCE(40);
      END_STATE();
    case 191:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(193);
      if (lookahead == 'i')
        ADVANCE(103);
      if (lookahead == 'k')
        ADVANCE(112);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 197:
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
        ADVANCE(40);
      END_STATE();
    case 198:
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
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'n')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'd')
        ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 204:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(62);
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(103);
      if (lookahead == 'k')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(114);
      if (lookahead == 'p')
        ADVANCE(129);
      if (lookahead == 's')
        ADVANCE(137);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'u')
        ADVANCE(162);
      if (lookahead == 'v')
        ADVANCE(172);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(91);
      if (lookahead == 'm')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 208:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(228);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 'g')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(272);
      if (lookahead == 'm')
        ADVANCE(281);
      if (lookahead == 's')
        ADVANCE(296);
      if (lookahead == 'v')
        ADVANCE(299);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(220);
      if (lookahead == 'l')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(223);
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'g')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'm')
        ADVANCE(246);
      if (lookahead == 's')
        ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(256);
      if (lookahead == 'u')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
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
        ADVANCE(40);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(40);
      END_STATE();
    case 307:
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
    case 308:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 309:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 310:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(311);
      if (lookahead == 'b')
        ADVANCE(324);
      if (lookahead == 'c')
        ADVANCE(329);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead == 'f')
        ADVANCE(361);
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == 'k')
        ADVANCE(378);
      if (lookahead == 'm')
        ADVANCE(380);
      if (lookahead == 'p')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(402);
      if (lookahead == 't')
        ADVANCE(417);
      if (lookahead == 'u')
        ADVANCE(427);
      if (lookahead == 'v')
        ADVANCE(437);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(314);
      if (lookahead == 'p')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(330);
      if (lookahead == 'h')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(69);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(342);
      if (lookahead == 'o')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(357);
      if (lookahead == 'm')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'p')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(381);
      if (lookahead == 'i')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(397);
      if (lookahead == 't')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(403);
      if (lookahead == 'u')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(410);
      if (lookahead == 's')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(403);
      if (lookahead == 'u')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(421);
      if (lookahead == 'i')
        ADVANCE(423);
      if (lookahead == 't')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(438);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(439);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(440);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(176);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 443:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(193);
      if (lookahead == 'e')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(103);
      if (lookahead == 'k')
        ADVANCE(112);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(91);
      if (lookahead == 'n')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      END_STATE();
    case 445:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 446:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(311);
      if (lookahead == 'b')
        ADVANCE(324);
      if (lookahead == 'c')
        ADVANCE(329);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead == 'f')
        ADVANCE(361);
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == 'k')
        ADVANCE(378);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(402);
      if (lookahead == 't')
        ADVANCE(417);
      if (lookahead == 'u')
        ADVANCE(427);
      if (lookahead == 'v')
        ADVANCE(437);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 448:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(324);
      if (lookahead == 'c')
        ADVANCE(449);
      if (lookahead == 'd')
        ADVANCE(450);
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == 'k')
        ADVANCE(378);
      if (lookahead == 't')
        ADVANCE(451);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(452);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(453);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 454:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'a')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'k')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'e')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'a')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 't')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'o')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 't')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'h')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'e')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'r')
        ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 466:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(311);
      if (lookahead == 'b')
        ADVANCE(324);
      if (lookahead == 'c')
        ADVANCE(329);
      if (lookahead == 'd')
        ADVANCE(341);
      if (lookahead == 'e')
        ADVANCE(467);
      if (lookahead == 'f')
        ADVANCE(361);
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == 'k')
        ADVANCE(378);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(402);
      if (lookahead == 't')
        ADVANCE(417);
      if (lookahead == 'u')
        ADVANCE(427);
      if (lookahead == 'v')
        ADVANCE(437);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(357);
      if (lookahead == 'm')
        ADVANCE(358);
      if (lookahead == 'n')
        ADVANCE(468);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(469);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    case 470:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == 'b')
        ADVANCE(324);
      if (lookahead == 'c')
        ADVANCE(449);
      if (lookahead == 'd')
        ADVANCE(450);
      if (lookahead == 'e')
        ADVANCE(471);
      if (lookahead == 'i')
        ADVANCE(369);
      if (lookahead == 'k')
        ADVANCE(378);
      if (lookahead == 't')
        ADVANCE(451);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(179);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(357);
      if (lookahead == 'n')
        ADVANCE(468);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(318);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 180},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 182},
  [7] = {.lex_state = 183},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 183},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 181},
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
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 187},
  [35] = {.lex_state = 187},
  [36] = {.lex_state = 182},
  [37] = {.lex_state = 189},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 189},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 190},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 189},
  [45] = {.lex_state = 189},
  [46] = {.lex_state = 189},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 190},
  [50] = {.lex_state = 190},
  [51] = {.lex_state = 182},
  [52] = {.lex_state = 180},
  [53] = {.lex_state = 181},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 197},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 198},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 185},
  [67] = {.lex_state = 183, .external_lex_state = 3},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 199},
  [74] = {.lex_state = 182},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 203},
  [78] = {.lex_state = 184},
  [79] = {.lex_state = 204},
  [80] = {.lex_state = 182},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 208},
  [84] = {.lex_state = 307},
  [85] = {.lex_state = 181},
  [86] = {.lex_state = 307},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 182},
  [90] = {.lex_state = 189},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 182},
  [93] = {.lex_state = 189},
  [94] = {.lex_state = 182},
  [95] = {.lex_state = 182},
  [96] = {.lex_state = 189},
  [97] = {.lex_state = 308},
  [98] = {.lex_state = 309},
  [99] = {.lex_state = 182},
  [100] = {.lex_state = 182},
  [101] = {.lex_state = 189},
  [102] = {.lex_state = 182},
  [103] = {.lex_state = 182},
  [104] = {.lex_state = 182},
  [105] = {.lex_state = 310},
  [106] = {.lex_state = 180},
  [107] = {.lex_state = 181},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 181},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 182},
  [123] = {.lex_state = 182},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 182},
  [127] = {.lex_state = 182},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 182},
  [131] = {.lex_state = 185},
  [132] = {.lex_state = 181},
  [133] = {.lex_state = 181},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 189},
  [139] = {.lex_state = 189},
  [140] = {.lex_state = 182},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 182},
  [148] = {.lex_state = 182},
  [149] = {.lex_state = 180},
  [150] = {.lex_state = 189},
  [151] = {.lex_state = 198},
  [152] = {.lex_state = 187},
  [153] = {.lex_state = 187},
  [154] = {.lex_state = 198},
  [155] = {.lex_state = 197},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 182},
  [158] = {.lex_state = 180},
  [159] = {.lex_state = 198},
  [160] = {.lex_state = 443},
  [161] = {.lex_state = 198},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 181},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 181},
  [166] = {.lex_state = 180},
  [167] = {.lex_state = 198},
  [168] = {.lex_state = 309},
  [169] = {.lex_state = 198},
  [170] = {.lex_state = 198},
  [171] = {.lex_state = 181},
  [172] = {.lex_state = 181},
  [173] = {.lex_state = 198},
  [174] = {.lex_state = 36, .external_lex_state = 2},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 182},
  [177] = {.lex_state = 181},
  [178] = {.lex_state = 445},
  [179] = {.lex_state = 182},
  [180] = {.lex_state = 182},
  [181] = {.lex_state = 36},
  [182] = {.lex_state = 182},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 189},
  [185] = {.lex_state = 182},
  [186] = {.lex_state = 208},
  [187] = {.lex_state = 182},
  [188] = {.lex_state = 184},
  [189] = {.lex_state = 203},
  [190] = {.lex_state = 184},
  [191] = {.lex_state = 182},
  [192] = {.lex_state = 182},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 180},
  [195] = {.lex_state = 180},
  [196] = {.lex_state = 180},
  [197] = {.lex_state = 180},
  [198] = {.lex_state = 180},
  [199] = {.lex_state = 181},
  [200] = {.lex_state = 307},
  [201] = {.lex_state = 307},
  [202] = {.lex_state = 184},
  [203] = {.lex_state = 307},
  [204] = {.lex_state = 307},
  [205] = {.lex_state = 36},
  [206] = {.lex_state = 182},
  [207] = {.lex_state = 307},
  [208] = {.lex_state = 307},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 182},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 182},
  [214] = {.lex_state = 309},
  [215] = {.lex_state = 185},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 182},
  [218] = {.lex_state = 190},
  [219] = {.lex_state = 190},
  [220] = {.lex_state = 446},
  [221] = {.lex_state = 182},
  [222] = {.lex_state = 180},
  [223] = {.lex_state = 448},
  [224] = {.lex_state = 197},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 36},
  [227] = {.lex_state = 36},
  [228] = {.lex_state = 181},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 454},
  [233] = {.lex_state = 182},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 181},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 466},
  [240] = {.lex_state = 182},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 307},
  [243] = {.lex_state = 182},
  [244] = {.lex_state = 182},
  [245] = {.lex_state = 189},
  [246] = {.lex_state = 41},
  [247] = {.lex_state = 182},
  [248] = {.lex_state = 182},
  [249] = {.lex_state = 189},
  [250] = {.lex_state = 182},
  [251] = {.lex_state = 182},
  [252] = {.lex_state = 182},
  [253] = {.lex_state = 182},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 182},
  [257] = {.lex_state = 41},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 189},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 198},
  [262] = {.lex_state = 198},
  [263] = {.lex_state = 198},
  [264] = {.lex_state = 197},
  [265] = {.lex_state = 36},
  [266] = {.lex_state = 198},
  [267] = {.lex_state = 180},
  [268] = {.lex_state = 180},
  [269] = {.lex_state = 198},
  [270] = {.lex_state = 198},
  [271] = {.lex_state = 180},
  [272] = {.lex_state = 198},
  [273] = {.lex_state = 180},
  [274] = {.lex_state = 185},
  [275] = {.lex_state = 198},
  [276] = {.lex_state = 181},
  [277] = {.lex_state = 182},
  [278] = {.lex_state = 190},
  [279] = {.lex_state = 190},
  [280] = {.lex_state = 208},
  [281] = {.lex_state = 182},
  [282] = {.lex_state = 208},
  [283] = {.lex_state = 182},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 180},
  [286] = {.lex_state = 307},
  [287] = {.lex_state = 181},
  [288] = {.lex_state = 307},
  [289] = {.lex_state = 182},
  [290] = {.lex_state = 307},
  [291] = {.lex_state = 180},
  [292] = {.lex_state = 181},
  [293] = {.lex_state = 307},
  [294] = {.lex_state = 307},
  [295] = {.lex_state = 184},
  [296] = {.lex_state = 307},
  [297] = {.lex_state = 307},
  [298] = {.lex_state = 182},
  [299] = {.lex_state = 307},
  [300] = {.lex_state = 182},
  [301] = {.lex_state = 182},
  [302] = {.lex_state = 182},
  [303] = {.lex_state = 182},
  [304] = {.lex_state = 182},
  [305] = {.lex_state = 182},
  [306] = {.lex_state = 182},
  [307] = {.lex_state = 180},
  [308] = {.lex_state = 187},
  [309] = {.lex_state = 198},
  [310] = {.lex_state = 197},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 182},
  [313] = {.lex_state = 180},
  [314] = {.lex_state = 198},
  [315] = {.lex_state = 470},
  [316] = {.lex_state = 198},
  [317] = {.lex_state = 181},
  [318] = {.lex_state = 180},
  [319] = {.lex_state = 198},
  [320] = {.lex_state = 198},
  [321] = {.lex_state = 181},
  [322] = {.lex_state = 181},
  [323] = {.lex_state = 182},
  [324] = {.lex_state = 181},
  [325] = {.lex_state = 182},
  [326] = {.lex_state = 182},
  [327] = {.lex_state = 182},
  [328] = {.lex_state = 182},
  [329] = {.lex_state = 180},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 307},
  [332] = {.lex_state = 307},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 182},
  [335] = {.lex_state = 307},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 36},
  [338] = {.lex_state = 182},
  [339] = {.lex_state = 182},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 182},
  [343] = {.lex_state = 198},
  [344] = {.lex_state = 198},
  [345] = {.lex_state = 198},
  [346] = {.lex_state = 198},
  [347] = {.lex_state = 182},
  [348] = {.lex_state = 182},
  [349] = {.lex_state = 180},
  [350] = {.lex_state = 180},
  [351] = {.lex_state = 182},
  [352] = {.lex_state = 307},
  [353] = {.lex_state = 181},
  [354] = {.lex_state = 307},
  [355] = {.lex_state = 184},
  [356] = {.lex_state = 307},
  [357] = {.lex_state = 198},
  [358] = {.lex_state = 198},
  [359] = {.lex_state = 197},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 198},
  [362] = {.lex_state = 180},
  [363] = {.lex_state = 180},
  [364] = {.lex_state = 198},
  [365] = {.lex_state = 198},
  [366] = {.lex_state = 180},
  [367] = {.lex_state = 198},
  [368] = {.lex_state = 181},
  [369] = {.lex_state = 307},
  [370] = {.lex_state = 180},
  [371] = {.lex_state = 181},
  [372] = {.lex_state = 307},
  [373] = {.lex_state = 307},
  [374] = {.lex_state = 182},
  [375] = {.lex_state = 307},
  [376] = {.lex_state = 182},
  [377] = {.lex_state = 182},
  [378] = {.lex_state = 182},
  [379] = {.lex_state = 181},
  [380] = {.lex_state = 184},
  [381] = {.lex_state = 182},
  [382] = {.lex_state = 198},
  [383] = {.lex_state = 198},
  [384] = {.lex_state = 307},
  [385] = {.lex_state = 181},
  [386] = {.lex_state = 307},
  [387] = {.lex_state = 181},
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
    [sym_double_circumflex] = ACTIONS(9),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(9),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(9),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_double_circumflex] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(27),
    [sym_begin_group] = ACTIONS(27),
    [sym_math_shift] = ACTIONS(27),
    [sym_alignment_tab] = ACTIONS(27),
    [sym_parameter_char] = ACTIONS(27),
    [sym_superscript] = ACTIONS(29),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
  },
  [3] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_documentclass] = ACTIONS(41),
    [anon_sym_usepackage] = ACTIONS(43),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(49),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_emph] = ACTIONS(53),
    [anon_sym_footnote] = ACTIONS(55),
    [anon_sym_textbf] = ACTIONS(57),
    [anon_sym_textit] = ACTIONS(59),
    [anon_sym_texttt] = ACTIONS(61),
    [anon_sym_makeatletter] = ACTIONS(63),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(65),
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
    [sym_double_circumflex] = ACTIONS(67),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(67),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(67),
    [sym_text] = ACTIONS(67),
  },
  [5] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(57),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_math_shift] = ACTIONS(77),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_double_circumflex] = ACTIONS(83),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(83),
    [sym_end_group] = ACTIONS(83),
    [sym_math_shift] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(89),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [10] = {
    [sym__common] = STATE(69),
    [sym__math_mode_common] = STATE(69),
    [sym__math_mode] = STATE(69),
    [sym_math_mode] = STATE(68),
    [sym_parameter] = STATE(69),
    [sym_math_env] = STATE(69),
    [sym_tag] = STATE(69),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(69),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(69),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(69),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(69),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(69),
    [sym_opt_math_group] = STATE(69),
    [sym_token] = STATE(69),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(69),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [11] = {
    [sym__common] = STATE(69),
    [sym__math_mode_common] = STATE(69),
    [sym__math_mode] = STATE(69),
    [sym_math_mode] = STATE(70),
    [sym_parameter] = STATE(69),
    [sym_math_env] = STATE(69),
    [sym_tag] = STATE(69),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(69),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(69),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(69),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(69),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(69),
    [sym_opt_math_group] = STATE(69),
    [sym_token] = STATE(69),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(69),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [12] = {
    [sym__common] = STATE(69),
    [sym__math_mode_common] = STATE(69),
    [sym__math_mode] = STATE(69),
    [sym_math_mode] = STATE(71),
    [sym_parameter] = STATE(69),
    [sym_math_env] = STATE(69),
    [sym_tag] = STATE(69),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(69),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(69),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(69),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(69),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(69),
    [sym_opt_math_group] = STATE(69),
    [sym_token] = STATE(69),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(69),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [13] = {
    [sym__common] = STATE(69),
    [sym__math_mode_common] = STATE(69),
    [sym__math_mode] = STATE(69),
    [sym_math_mode] = STATE(72),
    [sym_parameter] = STATE(69),
    [sym_math_env] = STATE(69),
    [sym_tag] = STATE(69),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(69),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(69),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(69),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(69),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(69),
    [sym_opt_math_group] = STATE(69),
    [sym_token] = STATE(69),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(69),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [14] = {
    [sym_verbatim_end] = STATE(74),
    [sym_verbatim_text] = STATE(75),
    [sym_end_token] = STATE(76),
    [aux_sym_verbatim_text_repeat1] = STATE(77),
    [aux_sym_verbatim_text_repeat2] = STATE(78),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
    [sym__end_of_line] = ACTIONS(99),
  },
  [15] = {
    [sym__common] = STATE(82),
    [sym__text_mode_common] = STATE(82),
    [sym_inline_verbatim] = STATE(82),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(82),
    [sym_text_mode_at_region] = STATE(82),
    [sym_parameter] = STATE(82),
    [sym_text_env] = STATE(82),
    [sym__display_math] = STATE(82),
    [sym_tex_display_math] = STATE(82),
    [sym_latex_display_math] = STATE(82),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(82),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(82),
    [sym_tex_inline_math] = STATE(82),
    [sym_latex_inline_math] = STATE(82),
    [sym_inline_math_env] = STATE(82),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(82),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(82),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(80),
    [sym_end_token] = STATE(81),
    [sym_documentclass] = STATE(82),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(82),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(82),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(82),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(82),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(82),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(82),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(82),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(82),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(82),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(82),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(82),
    [sym_opt_text_group] = STATE(82),
    [sym_token] = STATE(82),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(82),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(84),
    [sym_inline_math_env_group] = STATE(85),
    [sym_verbatim_env_group] = STATE(86),
    [sym_simple_text_group] = STATE(87),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(105),
  },
  [17] = {
    [sym_simple_text_group] = STATE(89),
    [sym_opt_text_group] = STATE(90),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [18] = {
    [sym_simple_text_group] = STATE(92),
    [sym_opt_text_group] = STATE(93),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [19] = {
    [sym_text_group] = STATE(94),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [20] = {
    [sym_text_group] = STATE(95),
    [sym_opt_text_group] = STATE(96),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_double_circumflex] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(111),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [22] = {
    [sym_escaped] = STATE(98),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(113),
  },
  [23] = {
    [sym_text_group] = STATE(99),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [24] = {
    [sym_text_group] = STATE(100),
    [sym_opt_text_group] = STATE(101),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [25] = {
    [sym_text_group] = STATE(102),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [26] = {
    [sym_text_group] = STATE(103),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [27] = {
    [sym_text_group] = STATE(104),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [28] = {
    [sym__common] = STATE(125),
    [sym__text_mode_common] = STATE(125),
    [sym_inline_verbatim] = STATE(125),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(125),
    [sym_text_mode_at] = STATE(108),
    [sym_parameter] = STATE(125),
    [sym_text_env_at] = STATE(125),
    [sym__display_math_at] = STATE(125),
    [sym_tex_display_math_at] = STATE(125),
    [sym_latex_display_math_at] = STATE(125),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(125),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(125),
    [sym_tex_inline_math_at] = STATE(125),
    [sym_latex_inline_math_at] = STATE(125),
    [sym_inline_math_env_at] = STATE(125),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(125),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(125),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(125),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(125),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(125),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(125),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(125),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(125),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(125),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(125),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(125),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(125),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(125),
    [sym_texttt_token] = STATE(121),
    [sym_makeatother] = STATE(122),
    [sym_makeatother_token] = STATE(123),
    [sym_text_group_at] = STATE(125),
    [sym_opt_text_group_at] = STATE(125),
    [sym_token_at] = STATE(125),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(125),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_double_circumflex] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(123),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(123),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [sym_text] = ACTIONS(123),
  },
  [30] = {
    [sym__common] = STATE(128),
    [sym__text_mode_common] = STATE(128),
    [sym_inline_verbatim] = STATE(128),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(128),
    [sym_text_mode_at_region] = STATE(128),
    [sym_parameter] = STATE(128),
    [sym_text_env] = STATE(128),
    [sym__display_math] = STATE(128),
    [sym_tex_display_math] = STATE(128),
    [sym_latex_display_math] = STATE(128),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(128),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(128),
    [sym_tex_inline_math] = STATE(128),
    [sym_latex_inline_math] = STATE(128),
    [sym_inline_math_env] = STATE(128),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(128),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(128),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(128),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(128),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(128),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(128),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(128),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(128),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(128),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(128),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(128),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(128),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(128),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(128),
    [sym_opt_text_group] = STATE(128),
    [sym_token] = STATE(128),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(127),
    [aux_sym_text_mode_repeat1] = STATE(128),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_double_circumflex] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
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
    [aux_sym_text_mode_repeat1] = STATE(129),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(135),
    [sym_number] = ACTIONS(137),
  },
  [33] = {
    [sym_verb_delim] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_text] = ACTIONS(151),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_double_circumflex] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(159),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(163),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(167),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(171),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(175),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym__whitespace] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_double_circumflex] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(183),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(185),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(187),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(189),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(193),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(195),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(197),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(201),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(205),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_double_circumflex] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(211),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym__whitespace] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym_double_circumflex] = ACTIONS(213),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_end_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(217),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_double_circumflex] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_end_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_text] = ACTIONS(219),
  },
  [52] = {
    [sym__common] = STATE(149),
    [sym__text_mode_common] = STATE(149),
    [sym_inline_verbatim] = STATE(149),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(149),
    [sym_text_mode_at_region] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(149),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(149),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(149),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(149),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(149),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(149),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(149),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(149),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(27),
    [sym_begin_group] = ACTIONS(27),
    [sym_alignment_tab] = ACTIONS(27),
    [sym_parameter_char] = ACTIONS(27),
    [sym_superscript] = ACTIONS(27),
    [sym_subscript] = ACTIONS(27),
    [sym_active_char] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
  },
  [54] = {
    [anon_sym_tag] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_begin] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(231),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(233),
  },
  [55] = {
    [sym__common] = STATE(155),
    [sym__math_mode_common] = STATE(155),
    [sym__math_mode] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_math_env] = STATE(155),
    [sym_tag] = STATE(155),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(155),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(155),
    [sym_opt_math_group] = STATE(155),
    [sym_token] = STATE(155),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_end_group] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_text] = ACTIONS(237),
  },
  [56] = {
    [sym__common] = STATE(65),
    [sym__math_mode_common] = STATE(65),
    [sym__math_mode] = STATE(65),
    [sym_math_mode] = STATE(156),
    [sym_parameter] = STATE(65),
    [sym_math_env] = STATE(65),
    [sym_tag] = STATE(65),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(65),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(65),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(65),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(65),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(65),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(65),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [57] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(239),
  },
  [58] = {
    [sym_math_text_group] = STATE(159),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(241),
  },
  [59] = {
    [sym__common] = STATE(163),
    [sym__math_mode_common] = STATE(163),
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_env] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(163),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_end] = STATE(161),
    [sym_end_token] = STATE(162),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(163),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [60] = {
    [sym_simple_text_group] = STATE(165),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(247),
  },
  [61] = {
    [sym_text_group] = STATE(167),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(249),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [63] = {
    [sym_escaped] = STATE(168),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(113),
  },
  [64] = {
    [sym__common] = STATE(171),
    [sym__math_mode_common] = STATE(171),
    [sym__math_mode] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_math_env] = STATE(171),
    [sym_tag] = STATE(171),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(171),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(171),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(171),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(171),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(171),
    [sym_opt_math_group] = STATE(171),
    [sym_token] = STATE(171),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(170),
    [aux_sym_math_mode_repeat1] = STATE(171),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(253),
    [sym_active_char] = ACTIONS(253),
    [sym_text] = ACTIONS(253),
  },
  [65] = {
    [sym__common] = STATE(172),
    [sym__math_mode_common] = STATE(172),
    [sym__math_mode] = STATE(172),
    [sym_parameter] = STATE(172),
    [sym_math_env] = STATE(172),
    [sym_tag] = STATE(172),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(172),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(172),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(172),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(172),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(172),
    [sym_opt_math_group] = STATE(172),
    [sym_token] = STATE(172),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(172),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_math_shift] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [sym_active_char] = ACTIONS(257),
    [sym_text] = ACTIONS(257),
  },
  [66] = {
    [aux_sym_parameter_repeat1] = STATE(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(135),
    [sym_number] = ACTIONS(259),
  },
  [67] = {
    [sym_verb_body] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [68] = {
    [sym_end_display_math] = STATE(176),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(263),
  },
  [69] = {
    [sym__common] = STATE(177),
    [sym__math_mode_common] = STATE(177),
    [sym__math_mode] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_math_env] = STATE(177),
    [sym_tag] = STATE(177),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(177),
    [sym_opt_math_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [70] = {
    [sym_end_inline_math] = STATE(179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(267),
  },
  [71] = {
    [sym_display_math_end] = STATE(180),
    [sym_end_token] = STATE(181),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
  },
  [72] = {
    [sym_inline_math_end] = STATE(182),
    [sym_end_token] = STATE(183),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
  },
  [73] = {
    [anon_sym_end] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_double_circumflex] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(271),
    [sym_begin_group] = ACTIONS(271),
    [sym_end_group] = ACTIONS(271),
    [sym_math_shift] = ACTIONS(271),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(271),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [75] = {
    [sym_verbatim_end] = STATE(185),
    [sym_end_token] = STATE(76),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
  },
  [76] = {
    [sym_verbatim_env_group] = STATE(187),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(275),
  },
  [77] = {
    [aux_sym_verbatim_text_repeat1] = STATE(189),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(277),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(279),
  },
  [78] = {
    [aux_sym_verbatim_text_repeat1] = STATE(77),
    [aux_sym_verbatim_text_repeat2] = STATE(190),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(281),
    [sym__end_of_line] = ACTIONS(283),
  },
  [79] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_documentclass] = ACTIONS(41),
    [anon_sym_usepackage] = ACTIONS(43),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(49),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_emph] = ACTIONS(53),
    [anon_sym_footnote] = ACTIONS(55),
    [anon_sym_textbf] = ACTIONS(57),
    [anon_sym_textit] = ACTIONS(59),
    [anon_sym_texttt] = ACTIONS(61),
    [anon_sym_makeatletter] = ACTIONS(63),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(65),
  },
  [80] = {
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
    [sym_text] = ACTIONS(287),
  },
  [81] = {
    [sym_simple_text_group] = STATE(191),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [82] = {
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
    [sym_end] = STATE(192),
    [sym_end_token] = STATE(81),
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
    [aux_sym_text_mode_repeat1] = STATE(193),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(291),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [83] = {
    [sym_display_math_env_name] = ACTIONS(293),
    [sym_inline_math_env_name] = ACTIONS(295),
    [sym_verbatim_env_name] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(299),
  },
  [84] = {
    [sym_text_group] = STATE(200),
    [sym_opt_text_group] = STATE(201),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(303),
  },
  [85] = {
    [anon_sym_LBRACK] = ACTIONS(305),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(305),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [86] = {
    [sym_text_group] = STATE(203),
    [sym_opt_text_group] = STATE(204),
    [sym_begin_opt] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(307),
  },
  [87] = {
    [anon_sym_LBRACK] = ACTIONS(309),
    [sym_double_circumflex] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [88] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(313),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_double_circumflex] = ACTIONS(315),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_text] = ACTIONS(315),
  },
  [90] = {
    [sym_simple_text_group] = STATE(206),
    [sym__whitespace] = ACTIONS(319),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [91] = {
    [sym__common] = STATE(209),
    [sym__text_mode_common] = STATE(209),
    [sym_inline_verbatim] = STATE(209),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(209),
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
    [sym_footnote] = STATE(209),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(209),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(209),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(209),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(209),
    [sym_opt_text_group] = STATE(209),
    [sym_token] = STATE(209),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(208),
    [aux_sym_text_mode_repeat1] = STATE(209),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_double_circumflex] = ACTIONS(323),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_double_circumflex] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(325),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(325),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_text] = ACTIONS(325),
  },
  [93] = {
    [sym_simple_text_group] = STATE(211),
    [sym__whitespace] = ACTIONS(329),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_double_circumflex] = ACTIONS(331),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_double_circumflex] = ACTIONS(335),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(335),
    [sym_begin_group] = ACTIONS(335),
    [sym_end_group] = ACTIONS(335),
    [sym_math_shift] = ACTIONS(335),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(335),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(335),
    [sym_active_char] = ACTIONS(335),
    [sym_text] = ACTIONS(335),
  },
  [96] = {
    [sym_text_group] = STATE(213),
    [sym__whitespace] = ACTIONS(339),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [97] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(341),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_double_circumflex] = ACTIONS(345),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [100] = {
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
    [sym_text] = ACTIONS(349),
  },
  [101] = {
    [sym_text_group] = STATE(217),
    [sym__whitespace] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_double_circumflex] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(355),
    [sym_end_group] = ACTIONS(355),
    [sym_math_shift] = ACTIONS(355),
    [sym_alignment_tab] = ACTIONS(355),
    [sym_parameter_char] = ACTIONS(355),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(355),
    [sym_text] = ACTIONS(355),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_double_circumflex] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_double_circumflex] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [105] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_documentclass] = ACTIONS(41),
    [anon_sym_usepackage] = ACTIONS(43),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(49),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_emph] = ACTIONS(53),
    [anon_sym_footnote] = ACTIONS(55),
    [anon_sym_textbf] = ACTIONS(57),
    [anon_sym_textit] = ACTIONS(59),
    [anon_sym_texttt] = ACTIONS(61),
    [anon_sym_makeatother] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(369),
  },
  [106] = {
    [sym__common] = STATE(222),
    [sym__text_mode_common] = STATE(222),
    [sym_inline_verbatim] = STATE(222),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(222),
    [sym_parameter] = STATE(222),
    [sym_text_env_at] = STATE(222),
    [sym__display_math_at] = STATE(222),
    [sym_tex_display_math_at] = STATE(222),
    [sym_latex_display_math_at] = STATE(222),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(222),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(222),
    [sym_tex_inline_math_at] = STATE(222),
    [sym_latex_inline_math_at] = STATE(222),
    [sym_inline_math_env_at] = STATE(222),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(222),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(222),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(222),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(222),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(222),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(222),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(222),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(222),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(222),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(222),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(222),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(222),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(222),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(222),
    [sym_opt_text_group_at] = STATE(222),
    [sym_token_at] = STATE(222),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(222),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(375),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(371),
    [sym_text] = ACTIONS(371),
  },
  [107] = {
    [sym__common] = STATE(231),
    [sym__math_mode_common] = STATE(231),
    [sym__math_mode_at] = STATE(231),
    [sym_math_mode_at] = STATE(226),
    [sym_parameter] = STATE(231),
    [sym_math_env_at] = STATE(231),
    [sym_tag_at] = STATE(231),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(231),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(231),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(231),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(231),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(231),
    [sym_opt_math_group_at] = STATE(231),
    [sym_token_at] = STATE(231),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(231),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [108] = {
    [sym_makeatother] = STATE(233),
    [sym_makeatother_token] = STATE(123),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(385),
  },
  [109] = {
    [sym__common] = STATE(235),
    [sym__math_mode_common] = STATE(235),
    [sym__math_mode_at] = STATE(235),
    [sym_math_mode_at] = STATE(234),
    [sym_parameter] = STATE(235),
    [sym_math_env_at] = STATE(235),
    [sym_tag_at] = STATE(235),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(235),
    [sym_opt_math_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [110] = {
    [sym__common] = STATE(235),
    [sym__math_mode_common] = STATE(235),
    [sym__math_mode_at] = STATE(235),
    [sym_math_mode_at] = STATE(236),
    [sym_parameter] = STATE(235),
    [sym_math_env_at] = STATE(235),
    [sym_tag_at] = STATE(235),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(235),
    [sym_opt_math_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [111] = {
    [sym__common] = STATE(235),
    [sym__math_mode_common] = STATE(235),
    [sym__math_mode_at] = STATE(235),
    [sym_math_mode_at] = STATE(237),
    [sym_parameter] = STATE(235),
    [sym_math_env_at] = STATE(235),
    [sym_tag_at] = STATE(235),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(235),
    [sym_opt_math_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [112] = {
    [sym__common] = STATE(235),
    [sym__math_mode_common] = STATE(235),
    [sym__math_mode_at] = STATE(235),
    [sym_math_mode_at] = STATE(238),
    [sym_parameter] = STATE(235),
    [sym_math_env_at] = STATE(235),
    [sym_tag_at] = STATE(235),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(235),
    [sym_opt_math_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [113] = {
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
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(241),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(241),
    [sym_tex_inline_math_at] = STATE(241),
    [sym_latex_inline_math_at] = STATE(241),
    [sym_inline_math_env_at] = STATE(241),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(241),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(241),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_end] = STATE(240),
    [sym_end_token] = STATE(81),
    [sym_documentclass] = STATE(241),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(241),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(241),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(241),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(241),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(241),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(241),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(241),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(241),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(241),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(241),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(241),
    [sym_opt_text_group_at] = STATE(241),
    [sym_token_at] = STATE(241),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [114] = {
    [sym_display_math_env_group] = STATE(242),
    [sym_inline_math_env_group] = STATE(85),
    [sym_verbatim_env_group] = STATE(86),
    [sym_simple_text_group] = STATE(87),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(105),
  },
  [115] = {
    [sym_text_group_at] = STATE(243),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [116] = {
    [sym_text_group_at] = STATE(244),
    [sym_opt_text_group_at] = STATE(245),
    [sym_begin_opt] = STATE(246),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [117] = {
    [sym_text_group_at] = STATE(247),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [118] = {
    [sym_text_group_at] = STATE(248),
    [sym_opt_text_group_at] = STATE(249),
    [sym_begin_opt] = STATE(246),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [119] = {
    [sym_text_group_at] = STATE(250),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [120] = {
    [sym_text_group_at] = STATE(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [121] = {
    [sym_text_group_at] = STATE(252),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym_double_circumflex] = ACTIONS(393),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(393),
    [sym_begin_group] = ACTIONS(393),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(393),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(393),
    [sym_text] = ACTIONS(393),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym_double_circumflex] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_end_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(397),
    [sym_active_char] = ACTIONS(397),
    [sym_text] = ACTIONS(397),
  },
  [124] = {
    [sym__common] = STATE(254),
    [sym__text_mode_common] = STATE(254),
    [sym_inline_verbatim] = STATE(254),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_env_at] = STATE(254),
    [sym__display_math_at] = STATE(254),
    [sym_tex_display_math_at] = STATE(254),
    [sym_latex_display_math_at] = STATE(254),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(254),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(254),
    [sym_tex_inline_math_at] = STATE(254),
    [sym_latex_inline_math_at] = STATE(254),
    [sym_inline_math_env_at] = STATE(254),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(254),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(254),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(254),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(254),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(254),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(254),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(254),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(254),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(254),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(254),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(254),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(254),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(254),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(254),
    [sym_opt_text_group_at] = STATE(254),
    [sym_token_at] = STATE(254),
    [sym_begin_opt] = STATE(124),
    [sym_end_opt] = STATE(253),
    [aux_sym_text_mode_at_repeat1] = STATE(254),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_double_circumflex] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [125] = {
    [sym__common] = STATE(255),
    [sym__text_mode_common] = STATE(255),
    [sym_inline_verbatim] = STATE(255),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_env_at] = STATE(255),
    [sym__display_math_at] = STATE(255),
    [sym_tex_display_math_at] = STATE(255),
    [sym_latex_display_math_at] = STATE(255),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(255),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(255),
    [sym_tex_inline_math_at] = STATE(255),
    [sym_latex_inline_math_at] = STATE(255),
    [sym_inline_math_env_at] = STATE(255),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(255),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(255),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(255),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(255),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(255),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(255),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(255),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(255),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(255),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(255),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(255),
    [sym_opt_text_group_at] = STATE(255),
    [sym_token_at] = STATE(255),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_double_circumflex] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(407),
    [sym_end_group] = ACTIONS(407),
    [sym_math_shift] = ACTIONS(407),
    [sym_alignment_tab] = ACTIONS(407),
    [sym_parameter_char] = ACTIONS(407),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [sym_text] = ACTIONS(407),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_double_circumflex] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(411),
    [sym_end_group] = ACTIONS(411),
    [sym_math_shift] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(411),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [sym_text] = ACTIONS(411),
  },
  [128] = {
    [sym__common] = STATE(257),
    [sym__text_mode_common] = STATE(257),
    [sym_inline_verbatim] = STATE(257),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(257),
    [sym_text_mode_at_region] = STATE(257),
    [sym_parameter] = STATE(257),
    [sym_text_env] = STATE(257),
    [sym__display_math] = STATE(257),
    [sym_tex_display_math] = STATE(257),
    [sym_latex_display_math] = STATE(257),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(257),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(257),
    [sym_tex_inline_math] = STATE(257),
    [sym_latex_inline_math] = STATE(257),
    [sym_inline_math_env] = STATE(257),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(257),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(257),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(257),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(257),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(257),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(257),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(257),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(257),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(257),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(257),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(257),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(257),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(257),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(257),
    [sym_opt_text_group] = STATE(257),
    [sym_token] = STATE(257),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(256),
    [aux_sym_text_mode_repeat1] = STATE(257),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_double_circumflex] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
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
    [aux_sym_text_mode_repeat1] = STATE(129),
    [aux_sym_parameter_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(419),
    [sym_double_circumflex] = ACTIONS(422),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(422),
    [sym_text] = ACTIONS(422),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_double_circumflex] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [131] = {
    [aux_sym_parameter_repeat1] = STATE(131),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(447),
    [sym_number] = ACTIONS(450),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(452),
    [sym_alignment_tab] = ACTIONS(452),
    [sym_parameter_char] = ACTIONS(452),
    [sym_superscript] = ACTIONS(452),
    [sym_subscript] = ACTIONS(452),
    [sym_active_char] = ACTIONS(452),
    [sym_text] = ACTIONS(452),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(454),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(454),
    [sym_begin_group] = ACTIONS(454),
    [sym_alignment_tab] = ACTIONS(454),
    [sym_parameter_char] = ACTIONS(454),
    [sym_superscript] = ACTIONS(454),
    [sym_subscript] = ACTIONS(454),
    [sym_active_char] = ACTIONS(454),
    [sym_text] = ACTIONS(454),
  },
  [134] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(456),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(458),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(458),
  },
  [136] = {
    [anon_sym_LBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(460),
  },
  [137] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(462),
  },
  [138] = {
    [sym__whitespace] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_STAR] = ACTIONS(468),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(466),
  },
  [139] = {
    [sym__whitespace] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(466),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(466),
  },
  [140] = {
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
    [sym_text] = ACTIONS(470),
  },
  [141] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(474),
  },
  [142] = {
    [anon_sym_LBRACK] = ACTIONS(476),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(476),
  },
  [143] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(478),
  },
  [144] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(480),
  },
  [145] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(482),
  },
  [146] = {
    [anon_sym_LBRACK] = ACTIONS(484),
    [sym_double_circumflex] = ACTIONS(484),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(484),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(484),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(484),
    [sym_active_char] = ACTIONS(484),
    [sym_text] = ACTIONS(484),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [sym_double_circumflex] = ACTIONS(488),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_end_group] = ACTIONS(488),
    [sym_math_shift] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(488),
    [sym_superscript] = ACTIONS(490),
    [sym_subscript] = ACTIONS(488),
    [sym_active_char] = ACTIONS(488),
    [sym_text] = ACTIONS(488),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [sym_double_circumflex] = ACTIONS(492),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(492),
    [sym_begin_group] = ACTIONS(492),
    [sym_end_group] = ACTIONS(492),
    [sym_math_shift] = ACTIONS(492),
    [sym_alignment_tab] = ACTIONS(492),
    [sym_parameter_char] = ACTIONS(492),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(492),
    [sym_active_char] = ACTIONS(492),
    [sym_text] = ACTIONS(492),
  },
  [149] = {
    [sym__common] = STATE(149),
    [sym__text_mode_common] = STATE(149),
    [sym_inline_verbatim] = STATE(149),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(149),
    [sym_text_mode_at_region] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(149),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(149),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(149),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(149),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(149),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(149),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(149),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(149),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(419),
    [sym_double_circumflex] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(428),
    [sym_end_group] = ACTIONS(417),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(496),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(496),
    [sym_text] = ACTIONS(496),
  },
  [150] = {
    [sym__whitespace] = ACTIONS(499),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(501),
  },
  [151] = {
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [152] = {
    [sym__whitespace] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(183),
  },
  [153] = {
    [sym__whitespace] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_end_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(217),
  },
  [154] = {
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [155] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_end_group] = ACTIONS(509),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [sym_text] = ACTIONS(511),
  },
  [156] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(513),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_double_circumflex] = ACTIONS(515),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(515),
    [sym_begin_group] = ACTIONS(515),
    [sym_end_group] = ACTIONS(515),
    [sym_math_shift] = ACTIONS(515),
    [sym_alignment_tab] = ACTIONS(515),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(517),
    [sym_subscript] = ACTIONS(515),
    [sym_active_char] = ACTIONS(515),
    [sym_text] = ACTIONS(515),
  },
  [158] = {
    [sym__common] = STATE(268),
    [sym__text_mode_common] = STATE(268),
    [sym_inline_verbatim] = STATE(268),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(268),
    [sym_text_mode] = STATE(267),
    [sym_text_mode_at_region] = STATE(268),
    [sym_parameter] = STATE(268),
    [sym_text_env] = STATE(268),
    [sym__display_math] = STATE(268),
    [sym_tex_display_math] = STATE(268),
    [sym_latex_display_math] = STATE(268),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(268),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(268),
    [sym_tex_inline_math] = STATE(268),
    [sym_latex_inline_math] = STATE(268),
    [sym_inline_math_env] = STATE(268),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(268),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(268),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(268),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(268),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(268),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(268),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(268),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(268),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(268),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(268),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(268),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(268),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(268),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(268),
    [sym_opt_text_group] = STATE(268),
    [sym_token] = STATE(268),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(268),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [159] = {
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [160] = {
    [anon_sym_tag] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_end] = ACTIONS(285),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(231),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name] = ACTIONS(233),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [162] = {
    [sym_simple_text_group] = STATE(269),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(247),
  },
  [163] = {
    [sym__common] = STATE(177),
    [sym__math_mode_common] = STATE(177),
    [sym__math_mode] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_math_env] = STATE(177),
    [sym_tag] = STATE(177),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_end] = STATE(270),
    [sym_end_token] = STATE(162),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(177),
    [sym_opt_math_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_text] = ACTIONS(527),
  },
  [165] = {
    [anon_sym_LBRACK] = ACTIONS(309),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [166] = {
    [sym__common] = STATE(273),
    [sym__text_mode_common] = STATE(273),
    [sym_inline_verbatim] = STATE(273),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(273),
    [sym_text_mode_at_region] = STATE(273),
    [sym_parameter] = STATE(273),
    [sym_text_env] = STATE(273),
    [sym__display_math] = STATE(273),
    [sym_tex_display_math] = STATE(273),
    [sym_latex_display_math] = STATE(273),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(273),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(273),
    [sym_tex_inline_math] = STATE(273),
    [sym_latex_inline_math] = STATE(273),
    [sym_inline_math_env] = STATE(273),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(273),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(273),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(273),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(273),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(273),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(273),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(273),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(273),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(273),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(273),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(273),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(273),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(273),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(273),
    [sym_opt_text_group] = STATE(273),
    [sym_token] = STATE(273),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(273),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(531),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(529),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(529),
    [sym_text] = ACTIONS(529),
  },
  [167] = {
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [168] = {
    [anon_sym_EQ] = ACTIONS(533),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [171] = {
    [sym__common] = STATE(276),
    [sym__math_mode_common] = STATE(276),
    [sym__math_mode] = STATE(276),
    [sym_parameter] = STATE(276),
    [sym_math_env] = STATE(276),
    [sym_tag] = STATE(276),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(276),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(276),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(276),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(276),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(276),
    [sym_opt_math_group] = STATE(276),
    [sym_token] = STATE(276),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(275),
    [aux_sym_math_mode_repeat1] = STATE(276),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(75),
    [sym_alignment_tab] = ACTIONS(537),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(537),
    [sym_subscript] = ACTIONS(537),
    [sym_active_char] = ACTIONS(537),
    [sym_text] = ACTIONS(537),
  },
  [172] = {
    [sym__common] = STATE(172),
    [sym__math_mode_common] = STATE(172),
    [sym__math_mode] = STATE(172),
    [sym_parameter] = STATE(172),
    [sym_math_env] = STATE(172),
    [sym_tag] = STATE(172),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(172),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(172),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(172),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(172),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(172),
    [sym_opt_math_group] = STATE(172),
    [sym_token] = STATE(172),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(172),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(539),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(545),
    [sym_math_shift] = ACTIONS(548),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(550),
    [sym_subscript] = ACTIONS(550),
    [sym_active_char] = ACTIONS(550),
    [sym_text] = ACTIONS(550),
  },
  [173] = {
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [174] = {
    [sym_verb_delim] = ACTIONS(556),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [175] = {
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym_double_circumflex] = ACTIONS(560),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(560),
    [sym_begin_group] = ACTIONS(560),
    [sym_end_group] = ACTIONS(560),
    [sym_math_shift] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(560),
    [sym_parameter_char] = ACTIONS(560),
    [sym_superscript] = ACTIONS(562),
    [sym_subscript] = ACTIONS(560),
    [sym_active_char] = ACTIONS(560),
    [sym_text] = ACTIONS(560),
  },
  [177] = {
    [sym__common] = STATE(177),
    [sym__math_mode_common] = STATE(177),
    [sym__math_mode] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_math_env] = STATE(177),
    [sym_tag] = STATE(177),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(177),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(177),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(177),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(177),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(177),
    [sym_opt_math_group] = STATE(177),
    [sym_token] = STATE(177),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(177),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(539),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(545),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(564),
    [sym_active_char] = ACTIONS(564),
    [sym_text] = ACTIONS(564),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [sym_double_circumflex] = ACTIONS(569),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(569),
    [sym_begin_group] = ACTIONS(569),
    [sym_end_group] = ACTIONS(569),
    [sym_math_shift] = ACTIONS(569),
    [sym_alignment_tab] = ACTIONS(569),
    [sym_parameter_char] = ACTIONS(569),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(569),
    [sym_active_char] = ACTIONS(569),
    [sym_text] = ACTIONS(569),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [sym_double_circumflex] = ACTIONS(573),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(573),
    [sym_begin_group] = ACTIONS(573),
    [sym_end_group] = ACTIONS(573),
    [sym_math_shift] = ACTIONS(573),
    [sym_alignment_tab] = ACTIONS(573),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(575),
    [sym_subscript] = ACTIONS(573),
    [sym_active_char] = ACTIONS(573),
    [sym_text] = ACTIONS(573),
  },
  [181] = {
    [sym_display_math_env_group] = STATE(281),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(577),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [sym_double_circumflex] = ACTIONS(579),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(579),
    [sym_begin_group] = ACTIONS(579),
    [sym_end_group] = ACTIONS(579),
    [sym_math_shift] = ACTIONS(579),
    [sym_alignment_tab] = ACTIONS(579),
    [sym_parameter_char] = ACTIONS(579),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(579),
    [sym_active_char] = ACTIONS(579),
    [sym_text] = ACTIONS(579),
  },
  [183] = {
    [sym_inline_math_env_group] = STATE(283),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(583),
  },
  [184] = {
    [sym__whitespace] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(587),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [sym_double_circumflex] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(589),
    [sym_end_group] = ACTIONS(589),
    [sym_math_shift] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(589),
    [sym_parameter_char] = ACTIONS(589),
    [sym_superscript] = ACTIONS(591),
    [sym_subscript] = ACTIONS(589),
    [sym_active_char] = ACTIONS(589),
    [sym_text] = ACTIONS(589),
  },
  [186] = {
    [sym_verbatim_env_name] = ACTIONS(593),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_double_circumflex] = ACTIONS(595),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(595),
    [sym_begin_group] = ACTIONS(595),
    [sym_end_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(595),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(597),
    [sym_subscript] = ACTIONS(595),
    [sym_active_char] = ACTIONS(595),
    [sym_text] = ACTIONS(595),
  },
  [188] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(599),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(601),
    [sym__end_of_line] = ACTIONS(601),
  },
  [189] = {
    [aux_sym_verbatim_text_repeat1] = STATE(189),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(606),
  },
  [190] = {
    [aux_sym_verbatim_text_repeat1] = STATE(77),
    [aux_sym_verbatim_text_repeat2] = STATE(190),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(608),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(601),
    [sym__end_of_line] = ACTIONS(611),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [sym_double_circumflex] = ACTIONS(614),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(614),
    [sym_begin_group] = ACTIONS(614),
    [sym_end_group] = ACTIONS(614),
    [sym_math_shift] = ACTIONS(614),
    [sym_alignment_tab] = ACTIONS(614),
    [sym_parameter_char] = ACTIONS(614),
    [sym_superscript] = ACTIONS(616),
    [sym_subscript] = ACTIONS(614),
    [sym_active_char] = ACTIONS(614),
    [sym_text] = ACTIONS(614),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [sym_double_circumflex] = ACTIONS(618),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(618),
    [sym_begin_group] = ACTIONS(618),
    [sym_end_group] = ACTIONS(618),
    [sym_math_shift] = ACTIONS(618),
    [sym_alignment_tab] = ACTIONS(618),
    [sym_parameter_char] = ACTIONS(618),
    [sym_superscript] = ACTIONS(620),
    [sym_subscript] = ACTIONS(618),
    [sym_active_char] = ACTIONS(618),
    [sym_text] = ACTIONS(618),
  },
  [193] = {
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
    [aux_sym_text_mode_repeat1] = STATE(193),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(419),
    [sym_double_circumflex] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(622),
    [sym_text] = ACTIONS(622),
  },
  [194] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(625),
  },
  [195] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(627),
  },
  [196] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(629),
  },
  [197] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(631),
  },
  [198] = {
    [sym__common] = STATE(291),
    [sym__text_mode_common] = STATE(291),
    [sym_inline_verbatim] = STATE(291),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(291),
    [sym_text_mode_at_region] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_text_env] = STATE(291),
    [sym__display_math] = STATE(291),
    [sym_tex_display_math] = STATE(291),
    [sym_latex_display_math] = STATE(291),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(291),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(291),
    [sym_tex_inline_math] = STATE(291),
    [sym_latex_inline_math] = STATE(291),
    [sym_inline_math_env] = STATE(291),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(291),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(291),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(291),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(291),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(291),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(291),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(291),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(291),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(291),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(291),
    [sym_opt_text_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(633),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(635),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(633),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(633),
    [sym_text] = ACTIONS(633),
  },
  [199] = {
    [anon_sym_LBRACK] = ACTIONS(637),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(637),
    [sym_alignment_tab] = ACTIONS(637),
    [sym_parameter_char] = ACTIONS(637),
    [sym_superscript] = ACTIONS(637),
    [sym_subscript] = ACTIONS(637),
    [sym_active_char] = ACTIONS(637),
    [sym_text] = ACTIONS(637),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(639),
  },
  [201] = {
    [sym_text_group] = STATE(294),
    [sym__whitespace] = ACTIONS(641),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(639),
  },
  [202] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(645),
    [sym__end_of_line] = ACTIONS(645),
  },
  [203] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(647),
  },
  [204] = {
    [sym_text_group] = STATE(297),
    [sym__whitespace] = ACTIONS(649),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(647),
  },
  [205] = {
    [sym_simple_text_group] = STATE(298),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [206] = {
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
    [sym_text] = ACTIONS(651),
  },
  [207] = {
    [sym__whitespace] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(407),
    [sym__end_of_line] = ACTIONS(407),
  },
  [208] = {
    [sym__whitespace] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(411),
    [sym__end_of_line] = ACTIONS(411),
  },
  [209] = {
    [sym__common] = STATE(257),
    [sym__text_mode_common] = STATE(257),
    [sym_inline_verbatim] = STATE(257),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(257),
    [sym_text_mode_at_region] = STATE(257),
    [sym_parameter] = STATE(257),
    [sym_text_env] = STATE(257),
    [sym__display_math] = STATE(257),
    [sym_tex_display_math] = STATE(257),
    [sym_latex_display_math] = STATE(257),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(257),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(257),
    [sym_tex_inline_math] = STATE(257),
    [sym_latex_inline_math] = STATE(257),
    [sym_inline_math_env] = STATE(257),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(257),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(257),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(257),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(257),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(257),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(257),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(257),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(257),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(257),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(257),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(257),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(257),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(257),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(257),
    [sym_opt_text_group] = STATE(257),
    [sym_token] = STATE(257),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(299),
    [aux_sym_text_mode_repeat1] = STATE(257),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_double_circumflex] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [210] = {
    [sym_simple_text_group] = STATE(300),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(107),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym_double_circumflex] = ACTIONS(655),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(655),
    [sym_begin_group] = ACTIONS(655),
    [sym_end_group] = ACTIONS(655),
    [sym_math_shift] = ACTIONS(655),
    [sym_alignment_tab] = ACTIONS(655),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(657),
    [sym_subscript] = ACTIONS(655),
    [sym_active_char] = ACTIONS(655),
    [sym_text] = ACTIONS(655),
  },
  [212] = {
    [sym_text_group] = STATE(301),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym_double_circumflex] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_end_group] = ACTIONS(659),
    [sym_math_shift] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(661),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [214] = {
    [anon_sym_EQ] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [215] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(663),
  },
  [216] = {
    [sym_text_group] = STATE(303),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(17),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [sym_double_circumflex] = ACTIONS(665),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(665),
    [sym_begin_group] = ACTIONS(665),
    [sym_end_group] = ACTIONS(665),
    [sym_math_shift] = ACTIONS(665),
    [sym_alignment_tab] = ACTIONS(665),
    [sym_parameter_char] = ACTIONS(665),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(665),
    [sym_active_char] = ACTIONS(665),
    [sym_text] = ACTIONS(665),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [sym__whitespace] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym_double_circumflex] = ACTIONS(669),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(669),
    [sym_begin_group] = ACTIONS(669),
    [sym_end_group] = ACTIONS(669),
    [sym_math_shift] = ACTIONS(669),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(669),
    [sym_superscript] = ACTIONS(673),
    [sym_subscript] = ACTIONS(669),
    [sym_active_char] = ACTIONS(669),
    [sym_text] = ACTIONS(673),
  },
  [219] = {
    [sym__whitespace] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_double_circumflex] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_end_group] = ACTIONS(677),
    [sym_math_shift] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(679),
  },
  [220] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_documentclass] = ACTIONS(41),
    [anon_sym_usepackage] = ACTIONS(43),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(49),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_emph] = ACTIONS(53),
    [anon_sym_footnote] = ACTIONS(55),
    [anon_sym_textbf] = ACTIONS(57),
    [anon_sym_textit] = ACTIONS(59),
    [anon_sym_texttt] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(369),
  },
  [221] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_double_circumflex] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_math_shift] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_text] = ACTIONS(681),
  },
  [222] = {
    [sym__common] = STATE(307),
    [sym__text_mode_common] = STATE(307),
    [sym_inline_verbatim] = STATE(307),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(307),
    [sym_parameter] = STATE(307),
    [sym_text_env_at] = STATE(307),
    [sym__display_math_at] = STATE(307),
    [sym_tex_display_math_at] = STATE(307),
    [sym_latex_display_math_at] = STATE(307),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(307),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(307),
    [sym_tex_inline_math_at] = STATE(307),
    [sym_latex_inline_math_at] = STATE(307),
    [sym_inline_math_env_at] = STATE(307),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(307),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(307),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(307),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(307),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(307),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(307),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(307),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(307),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(307),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(307),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(307),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(307),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(307),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(307),
    [sym_opt_text_group_at] = STATE(307),
    [sym_token_at] = STATE(307),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(307),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(687),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(685),
    [sym_text] = ACTIONS(685),
  },
  [223] = {
    [anon_sym_tag] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_begin] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(231),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(689),
  },
  [224] = {
    [sym__common] = STATE(310),
    [sym__math_mode_common] = STATE(310),
    [sym__math_mode_at] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_math_env_at] = STATE(310),
    [sym_tag_at] = STATE(310),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(310),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(310),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(310),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(310),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(310),
    [sym_opt_math_group_at] = STATE(310),
    [sym_token_at] = STATE(310),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(310),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(693),
    [sym_active_char] = ACTIONS(693),
    [sym_text] = ACTIONS(693),
  },
  [225] = {
    [sym__common] = STATE(231),
    [sym__math_mode_common] = STATE(231),
    [sym__math_mode_at] = STATE(231),
    [sym_math_mode_at] = STATE(311),
    [sym_parameter] = STATE(231),
    [sym_math_env_at] = STATE(231),
    [sym_tag_at] = STATE(231),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(231),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(231),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(231),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(231),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(231),
    [sym_opt_math_group_at] = STATE(231),
    [sym_token_at] = STATE(231),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(231),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [226] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(695),
  },
  [227] = {
    [sym_math_text_group_at] = STATE(314),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(697),
  },
  [228] = {
    [sym__common] = STATE(317),
    [sym__math_mode_common] = STATE(317),
    [sym__math_mode_at] = STATE(317),
    [sym_parameter] = STATE(317),
    [sym_math_env_at] = STATE(317),
    [sym_tag_at] = STATE(317),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(317),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_end] = STATE(316),
    [sym_end_token] = STATE(162),
    [sym_include_at] = STATE(317),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(317),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(317),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(317),
    [sym_opt_math_group_at] = STATE(317),
    [sym_token_at] = STATE(317),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(317),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(699),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(701),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(701),
    [sym_subscript] = ACTIONS(701),
    [sym_active_char] = ACTIONS(701),
    [sym_text] = ACTIONS(701),
  },
  [229] = {
    [sym_text_group_at] = STATE(319),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(703),
  },
  [230] = {
    [sym__common] = STATE(321),
    [sym__math_mode_common] = STATE(321),
    [sym__math_mode_at] = STATE(321),
    [sym_parameter] = STATE(321),
    [sym_math_env_at] = STATE(321),
    [sym_tag_at] = STATE(321),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(321),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(321),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(321),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(321),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(321),
    [sym_opt_math_group_at] = STATE(321),
    [sym_token_at] = STATE(321),
    [sym_begin_opt] = STATE(230),
    [sym_end_opt] = STATE(320),
    [aux_sym_math_mode_at_repeat1] = STATE(321),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(705),
    [sym_active_char] = ACTIONS(705),
    [sym_text] = ACTIONS(705),
  },
  [231] = {
    [sym__common] = STATE(322),
    [sym__math_mode_common] = STATE(322),
    [sym__math_mode_at] = STATE(322),
    [sym_parameter] = STATE(322),
    [sym_math_env_at] = STATE(322),
    [sym_tag_at] = STATE(322),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(322),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(322),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(322),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(322),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(322),
    [sym_opt_math_group_at] = STATE(322),
    [sym_token_at] = STATE(322),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(322),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(707),
    [sym_alignment_tab] = ACTIONS(709),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(709),
    [sym_subscript] = ACTIONS(709),
    [sym_active_char] = ACTIONS(709),
    [sym_text] = ACTIONS(709),
  },
  [232] = {
    [anon_sym_makeatother] = ACTIONS(711),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_double_circumflex] = ACTIONS(713),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(713),
    [sym_end_group] = ACTIONS(713),
    [sym_math_shift] = ACTIONS(713),
    [sym_alignment_tab] = ACTIONS(713),
    [sym_parameter_char] = ACTIONS(713),
    [sym_superscript] = ACTIONS(715),
    [sym_subscript] = ACTIONS(713),
    [sym_active_char] = ACTIONS(713),
    [sym_text] = ACTIONS(713),
  },
  [234] = {
    [sym_end_display_math] = STATE(323),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(263),
  },
  [235] = {
    [sym__common] = STATE(324),
    [sym__math_mode_common] = STATE(324),
    [sym__math_mode_at] = STATE(324),
    [sym_parameter] = STATE(324),
    [sym_math_env_at] = STATE(324),
    [sym_tag_at] = STATE(324),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(324),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(324),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(324),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(324),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(324),
    [sym_opt_math_group_at] = STATE(324),
    [sym_token_at] = STATE(324),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(324),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(707),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [236] = {
    [sym_end_inline_math] = STATE(325),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(267),
  },
  [237] = {
    [sym_display_math_end] = STATE(326),
    [sym_end_token] = STATE(181),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
  },
  [238] = {
    [sym_inline_math_end] = STATE(327),
    [sym_end_token] = STATE(183),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(97),
  },
  [239] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(37),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_documentclass] = ACTIONS(41),
    [anon_sym_usepackage] = ACTIONS(43),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(49),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_emph] = ACTIONS(53),
    [anon_sym_footnote] = ACTIONS(55),
    [anon_sym_textbf] = ACTIONS(57),
    [anon_sym_textit] = ACTIONS(59),
    [anon_sym_texttt] = ACTIONS(61),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(369),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [sym_double_circumflex] = ACTIONS(719),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_end_group] = ACTIONS(719),
    [sym_math_shift] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_parameter_char] = ACTIONS(719),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(719),
    [sym_active_char] = ACTIONS(719),
    [sym_text] = ACTIONS(719),
  },
  [241] = {
    [sym__common] = STATE(255),
    [sym__text_mode_common] = STATE(255),
    [sym_inline_verbatim] = STATE(255),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_env_at] = STATE(255),
    [sym__display_math_at] = STATE(255),
    [sym_tex_display_math_at] = STATE(255),
    [sym_latex_display_math_at] = STATE(255),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(255),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(255),
    [sym_tex_inline_math_at] = STATE(255),
    [sym_latex_inline_math_at] = STATE(255),
    [sym_inline_math_env_at] = STATE(255),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(255),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_end] = STATE(328),
    [sym_end_token] = STATE(81),
    [sym_documentclass] = STATE(255),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(255),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(255),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(255),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(255),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(255),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(255),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(255),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(255),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(255),
    [sym_opt_text_group_at] = STATE(255),
    [sym_token_at] = STATE(255),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [242] = {
    [sym_text_group_at] = STATE(331),
    [sym_opt_text_group_at] = STATE(332),
    [sym_begin_opt] = STATE(246),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(723),
    [sym__end_of_line] = ACTIONS(725),
  },
  [243] = {
    [anon_sym_LBRACK] = ACTIONS(727),
    [anon_sym_RBRACK] = ACTIONS(727),
    [sym_double_circumflex] = ACTIONS(727),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(727),
    [sym_begin_group] = ACTIONS(727),
    [sym_end_group] = ACTIONS(727),
    [sym_math_shift] = ACTIONS(727),
    [sym_alignment_tab] = ACTIONS(727),
    [sym_parameter_char] = ACTIONS(727),
    [sym_superscript] = ACTIONS(729),
    [sym_subscript] = ACTIONS(727),
    [sym_active_char] = ACTIONS(727),
    [sym_text] = ACTIONS(727),
  },
  [244] = {
    [anon_sym_LBRACK] = ACTIONS(731),
    [anon_sym_RBRACK] = ACTIONS(731),
    [sym_double_circumflex] = ACTIONS(731),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(731),
    [sym_begin_group] = ACTIONS(731),
    [sym_end_group] = ACTIONS(731),
    [sym_math_shift] = ACTIONS(731),
    [sym_alignment_tab] = ACTIONS(731),
    [sym_parameter_char] = ACTIONS(731),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(731),
    [sym_active_char] = ACTIONS(731),
    [sym_text] = ACTIONS(731),
  },
  [245] = {
    [sym_text_group_at] = STATE(334),
    [sym__whitespace] = ACTIONS(735),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [246] = {
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
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(336),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(336),
    [sym_tex_inline_math_at] = STATE(336),
    [sym_latex_inline_math_at] = STATE(336),
    [sym_inline_math_env_at] = STATE(336),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(336),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(336),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(336),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(336),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(336),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(336),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(336),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(336),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(336),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(336),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(336),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(336),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(336),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(336),
    [sym_opt_text_group_at] = STATE(336),
    [sym_token_at] = STATE(336),
    [sym_begin_opt] = STATE(124),
    [sym_end_opt] = STATE(335),
    [aux_sym_text_mode_at_repeat1] = STATE(336),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_double_circumflex] = ACTIONS(737),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(737),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(737),
    [sym_text] = ACTIONS(737),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_RBRACK] = ACTIONS(739),
    [sym_double_circumflex] = ACTIONS(739),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(739),
    [sym_begin_group] = ACTIONS(739),
    [sym_end_group] = ACTIONS(739),
    [sym_math_shift] = ACTIONS(739),
    [sym_alignment_tab] = ACTIONS(739),
    [sym_parameter_char] = ACTIONS(739),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(739),
    [sym_active_char] = ACTIONS(739),
    [sym_text] = ACTIONS(739),
  },
  [248] = {
    [anon_sym_LBRACK] = ACTIONS(743),
    [anon_sym_RBRACK] = ACTIONS(743),
    [sym_double_circumflex] = ACTIONS(743),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(743),
    [sym_begin_group] = ACTIONS(743),
    [sym_end_group] = ACTIONS(743),
    [sym_math_shift] = ACTIONS(743),
    [sym_alignment_tab] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(743),
    [sym_superscript] = ACTIONS(745),
    [sym_subscript] = ACTIONS(743),
    [sym_active_char] = ACTIONS(743),
    [sym_text] = ACTIONS(743),
  },
  [249] = {
    [sym_text_group_at] = STATE(338),
    [sym__whitespace] = ACTIONS(747),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym_double_circumflex] = ACTIONS(749),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(749),
    [sym_begin_group] = ACTIONS(749),
    [sym_end_group] = ACTIONS(749),
    [sym_math_shift] = ACTIONS(749),
    [sym_alignment_tab] = ACTIONS(749),
    [sym_parameter_char] = ACTIONS(749),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(749),
    [sym_active_char] = ACTIONS(749),
    [sym_text] = ACTIONS(749),
  },
  [251] = {
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_double_circumflex] = ACTIONS(753),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(753),
    [sym_begin_group] = ACTIONS(753),
    [sym_end_group] = ACTIONS(753),
    [sym_math_shift] = ACTIONS(753),
    [sym_alignment_tab] = ACTIONS(753),
    [sym_parameter_char] = ACTIONS(753),
    [sym_superscript] = ACTIONS(755),
    [sym_subscript] = ACTIONS(753),
    [sym_active_char] = ACTIONS(753),
    [sym_text] = ACTIONS(753),
  },
  [252] = {
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_double_circumflex] = ACTIONS(757),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_end_group] = ACTIONS(757),
    [sym_math_shift] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_superscript] = ACTIONS(759),
    [sym_subscript] = ACTIONS(757),
    [sym_active_char] = ACTIONS(757),
    [sym_text] = ACTIONS(757),
  },
  [253] = {
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_double_circumflex] = ACTIONS(761),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(761),
    [sym_begin_group] = ACTIONS(761),
    [sym_end_group] = ACTIONS(761),
    [sym_math_shift] = ACTIONS(761),
    [sym_alignment_tab] = ACTIONS(761),
    [sym_parameter_char] = ACTIONS(761),
    [sym_superscript] = ACTIONS(763),
    [sym_subscript] = ACTIONS(761),
    [sym_active_char] = ACTIONS(761),
    [sym_text] = ACTIONS(761),
  },
  [254] = {
    [sym__common] = STATE(340),
    [sym__text_mode_common] = STATE(340),
    [sym_inline_verbatim] = STATE(340),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(340),
    [sym_parameter] = STATE(340),
    [sym_text_env_at] = STATE(340),
    [sym__display_math_at] = STATE(340),
    [sym_tex_display_math_at] = STATE(340),
    [sym_latex_display_math_at] = STATE(340),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(340),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(340),
    [sym_tex_inline_math_at] = STATE(340),
    [sym_latex_inline_math_at] = STATE(340),
    [sym_inline_math_env_at] = STATE(340),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(340),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(340),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(340),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(340),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(340),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(340),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(340),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(340),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(340),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(340),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(340),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(340),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(340),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(340),
    [sym_opt_text_group_at] = STATE(340),
    [sym_token_at] = STATE(340),
    [sym_begin_opt] = STATE(124),
    [sym_end_opt] = STATE(339),
    [aux_sym_text_mode_at_repeat1] = STATE(340),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_double_circumflex] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(765),
    [sym_text] = ACTIONS(765),
  },
  [255] = {
    [sym__common] = STATE(255),
    [sym__text_mode_common] = STATE(255),
    [sym_inline_verbatim] = STATE(255),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_env_at] = STATE(255),
    [sym__display_math_at] = STATE(255),
    [sym_tex_display_math_at] = STATE(255),
    [sym_latex_display_math_at] = STATE(255),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(255),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(255),
    [sym_tex_inline_math_at] = STATE(255),
    [sym_latex_inline_math_at] = STATE(255),
    [sym_inline_math_env_at] = STATE(255),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(255),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(255),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(255),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(255),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(255),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(255),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(255),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(255),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(255),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(255),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(255),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(255),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(255),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(255),
    [sym_opt_text_group_at] = STATE(255),
    [sym_token_at] = STATE(255),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(255),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(767),
    [sym_double_circumflex] = ACTIONS(770),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(776),
    [sym_math_shift] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(770),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(770),
    [sym_text] = ACTIONS(770),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(791),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym_double_circumflex] = ACTIONS(791),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(791),
    [sym_begin_group] = ACTIONS(791),
    [sym_end_group] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(791),
    [sym_alignment_tab] = ACTIONS(791),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(791),
    [sym_active_char] = ACTIONS(791),
    [sym_text] = ACTIONS(791),
  },
  [257] = {
    [sym__common] = STATE(257),
    [sym__text_mode_common] = STATE(257),
    [sym_inline_verbatim] = STATE(257),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(257),
    [sym_text_mode_at_region] = STATE(257),
    [sym_parameter] = STATE(257),
    [sym_text_env] = STATE(257),
    [sym__display_math] = STATE(257),
    [sym_tex_display_math] = STATE(257),
    [sym_latex_display_math] = STATE(257),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(257),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(257),
    [sym_tex_inline_math] = STATE(257),
    [sym_latex_inline_math] = STATE(257),
    [sym_inline_math_env] = STATE(257),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(257),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(257),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(257),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(257),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(257),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(257),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(257),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(257),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(257),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(257),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(257),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(257),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(257),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(257),
    [sym_opt_text_group] = STATE(257),
    [sym_token] = STATE(257),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(257),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_double_circumflex] = ACTIONS(795),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(795),
    [sym_parameter_char] = ACTIONS(434),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(795),
    [sym_text] = ACTIONS(795),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
  },
  [259] = {
    [sym__whitespace] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(798),
  },
  [260] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(802),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(470),
    [sym_begin_group] = ACTIONS(470),
    [sym_end_group] = ACTIONS(470),
    [sym_math_shift] = ACTIONS(470),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(470),
    [sym_subscript] = ACTIONS(470),
    [sym_active_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [264] = {
    [sym__common] = STATE(264),
    [sym__math_mode_common] = STATE(264),
    [sym__math_mode] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_math_env] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(264),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(264),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(264),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(264),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(264),
    [sym_opt_math_group] = STATE(264),
    [sym_token] = STATE(264),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(264),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(539),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(545),
    [sym_end_group] = ACTIONS(548),
    [sym_alignment_tab] = ACTIONS(806),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(806),
    [sym_subscript] = ACTIONS(806),
    [sym_active_char] = ACTIONS(806),
    [sym_text] = ACTIONS(806),
  },
  [265] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(809),
  },
  [266] = {
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(811),
    [sym_begin_group] = ACTIONS(811),
    [sym_end_group] = ACTIONS(811),
    [sym_math_shift] = ACTIONS(811),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(811),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(811),
    [sym_active_char] = ACTIONS(811),
    [sym_text] = ACTIONS(811),
  },
  [267] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(813),
  },
  [268] = {
    [sym__common] = STATE(149),
    [sym__text_mode_common] = STATE(149),
    [sym_inline_verbatim] = STATE(149),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(149),
    [sym_text_mode_at_region] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(149),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(149),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(149),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(149),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(149),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(149),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(149),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(149),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [269] = {
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [270] = {
    [anon_sym_LBRACK] = ACTIONS(815),
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [271] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(817),
  },
  [272] = {
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_end_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_text] = ACTIONS(219),
  },
  [273] = {
    [sym__common] = STATE(149),
    [sym__text_mode_common] = STATE(149),
    [sym_inline_verbatim] = STATE(149),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(149),
    [sym_text_mode_at_region] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(149),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(149),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(149),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(149),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(149),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(149),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(149),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(149),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(819),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_number] = ACTIONS(821),
  },
  [275] = {
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(823),
    [sym_begin_group] = ACTIONS(823),
    [sym_end_group] = ACTIONS(823),
    [sym_math_shift] = ACTIONS(823),
    [sym_alignment_tab] = ACTIONS(823),
    [sym_parameter_char] = ACTIONS(823),
    [sym_superscript] = ACTIONS(823),
    [sym_subscript] = ACTIONS(823),
    [sym_active_char] = ACTIONS(823),
    [sym_text] = ACTIONS(823),
  },
  [276] = {
    [sym__common] = STATE(276),
    [sym__math_mode_common] = STATE(276),
    [sym__math_mode] = STATE(276),
    [sym_parameter] = STATE(276),
    [sym_math_env] = STATE(276),
    [sym_tag] = STATE(276),
    [sym_tag_token] = STATE(58),
    [sym_escaped] = STATE(276),
    [sym_begin] = STATE(59),
    [sym_begin_token] = STATE(60),
    [sym_include] = STATE(276),
    [sym_include_token] = STATE(61),
    [sym_storage] = STATE(276),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(276),
    [sym_catcode_token] = STATE(63),
    [sym_math_group] = STATE(276),
    [sym_opt_math_group] = STATE(276),
    [sym_token] = STATE(276),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_mode_repeat1] = STATE(276),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(545),
    [sym_alignment_tab] = ACTIONS(825),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(825),
    [sym_subscript] = ACTIONS(825),
    [sym_active_char] = ACTIONS(825),
    [sym_text] = ACTIONS(825),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(828),
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
    [sym_text] = ACTIONS(828),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [sym__whitespace] = ACTIONS(834),
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
    [sym_superscript] = ACTIONS(836),
    [sym_subscript] = ACTIONS(832),
    [sym_active_char] = ACTIONS(832),
    [sym_text] = ACTIONS(836),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [sym__whitespace] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_RBRACK] = ACTIONS(838),
    [sym_double_circumflex] = ACTIONS(838),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(838),
    [sym_begin_group] = ACTIONS(838),
    [sym_end_group] = ACTIONS(838),
    [sym_math_shift] = ACTIONS(838),
    [sym_alignment_tab] = ACTIONS(838),
    [sym_parameter_char] = ACTIONS(838),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(838),
    [sym_active_char] = ACTIONS(838),
    [sym_text] = ACTIONS(842),
  },
  [280] = {
    [sym_display_math_env_name] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [anon_sym_LBRACK] = ACTIONS(846),
    [anon_sym_RBRACK] = ACTIONS(846),
    [sym_double_circumflex] = ACTIONS(846),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(846),
    [sym_begin_group] = ACTIONS(846),
    [sym_end_group] = ACTIONS(846),
    [sym_math_shift] = ACTIONS(846),
    [sym_alignment_tab] = ACTIONS(846),
    [sym_parameter_char] = ACTIONS(846),
    [sym_superscript] = ACTIONS(848),
    [sym_subscript] = ACTIONS(846),
    [sym_active_char] = ACTIONS(846),
    [sym_text] = ACTIONS(846),
  },
  [282] = {
    [sym_inline_math_env_name] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [sym_double_circumflex] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(852),
    [sym_begin_group] = ACTIONS(852),
    [sym_end_group] = ACTIONS(852),
    [sym_math_shift] = ACTIONS(852),
    [sym_alignment_tab] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(852),
    [sym_superscript] = ACTIONS(854),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(852),
    [sym_text] = ACTIONS(852),
  },
  [284] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(856),
  },
  [285] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(858),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(860),
    [sym__end_of_line] = ACTIONS(860),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(862),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(862),
    [sym_begin_group] = ACTIONS(862),
    [sym_alignment_tab] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(862),
    [sym_superscript] = ACTIONS(862),
    [sym_subscript] = ACTIONS(862),
    [sym_active_char] = ACTIONS(862),
    [sym_text] = ACTIONS(862),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(864),
    [sym__end_of_line] = ACTIONS(864),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(866),
    [anon_sym_LBRACK] = ACTIONS(866),
    [anon_sym_RBRACK] = ACTIONS(866),
    [sym_double_circumflex] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(866),
    [sym_begin_group] = ACTIONS(866),
    [sym_end_group] = ACTIONS(866),
    [sym_math_shift] = ACTIONS(866),
    [sym_alignment_tab] = ACTIONS(866),
    [sym_parameter_char] = ACTIONS(866),
    [sym_superscript] = ACTIONS(868),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(866),
    [sym_text] = ACTIONS(866),
  },
  [290] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(219),
  },
  [291] = {
    [sym__common] = STATE(149),
    [sym__text_mode_common] = STATE(149),
    [sym_inline_verbatim] = STATE(149),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(149),
    [sym_text_mode_at_region] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(149),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(149),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(149),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(149),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(149),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(149),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(149),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(149),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(149),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(149),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(149),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(149),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(149),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(17),
    [sym_end_group] = ACTIONS(870),
    [sym_math_shift] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(872),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(872),
    [sym_begin_group] = ACTIONS(872),
    [sym_alignment_tab] = ACTIONS(872),
    [sym_parameter_char] = ACTIONS(872),
    [sym_superscript] = ACTIONS(872),
    [sym_subscript] = ACTIONS(872),
    [sym_active_char] = ACTIONS(872),
    [sym_text] = ACTIONS(872),
  },
  [293] = {
    [sym_text_group] = STATE(354),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(874),
  },
  [294] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(874),
  },
  [295] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(876),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(878),
    [sym__end_of_line] = ACTIONS(878),
  },
  [296] = {
    [sym_text_group] = STATE(356),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(301),
    [sym__end_of_line] = ACTIONS(880),
  },
  [297] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(880),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(882),
    [anon_sym_RBRACK] = ACTIONS(882),
    [sym_double_circumflex] = ACTIONS(882),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(882),
    [sym_begin_group] = ACTIONS(882),
    [sym_end_group] = ACTIONS(882),
    [sym_math_shift] = ACTIONS(882),
    [sym_alignment_tab] = ACTIONS(882),
    [sym_parameter_char] = ACTIONS(882),
    [sym_superscript] = ACTIONS(884),
    [sym_subscript] = ACTIONS(882),
    [sym_active_char] = ACTIONS(882),
    [sym_text] = ACTIONS(882),
  },
  [299] = {
    [sym__whitespace] = ACTIONS(791),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(791),
    [sym__end_of_line] = ACTIONS(791),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_RBRACK] = ACTIONS(886),
    [sym_double_circumflex] = ACTIONS(886),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(886),
    [sym_begin_group] = ACTIONS(886),
    [sym_end_group] = ACTIONS(886),
    [sym_math_shift] = ACTIONS(886),
    [sym_alignment_tab] = ACTIONS(886),
    [sym_parameter_char] = ACTIONS(886),
    [sym_superscript] = ACTIONS(888),
    [sym_subscript] = ACTIONS(886),
    [sym_active_char] = ACTIONS(886),
    [sym_text] = ACTIONS(886),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(890),
    [anon_sym_LBRACK] = ACTIONS(890),
    [anon_sym_RBRACK] = ACTIONS(890),
    [sym_double_circumflex] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(890),
    [sym_begin_group] = ACTIONS(890),
    [sym_end_group] = ACTIONS(890),
    [sym_math_shift] = ACTIONS(890),
    [sym_alignment_tab] = ACTIONS(890),
    [sym_parameter_char] = ACTIONS(890),
    [sym_superscript] = ACTIONS(892),
    [sym_subscript] = ACTIONS(890),
    [sym_active_char] = ACTIONS(890),
    [sym_text] = ACTIONS(890),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [sym_double_circumflex] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_end_group] = ACTIONS(894),
    [sym_math_shift] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [303] = {
    [ts_builtin_sym_end] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_RBRACK] = ACTIONS(898),
    [sym_double_circumflex] = ACTIONS(898),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(898),
    [sym_begin_group] = ACTIONS(898),
    [sym_end_group] = ACTIONS(898),
    [sym_math_shift] = ACTIONS(898),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(898),
    [sym_superscript] = ACTIONS(900),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [sym_double_circumflex] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_end_group] = ACTIONS(902),
    [sym_math_shift] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_superscript] = ACTIONS(904),
    [sym_subscript] = ACTIONS(902),
    [sym_active_char] = ACTIONS(902),
    [sym_text] = ACTIONS(902),
  },
  [305] = {
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
    [sym_text] = ACTIONS(906),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_RBRACK] = ACTIONS(910),
    [sym_double_circumflex] = ACTIONS(910),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(910),
    [sym_begin_group] = ACTIONS(910),
    [sym_end_group] = ACTIONS(910),
    [sym_math_shift] = ACTIONS(910),
    [sym_alignment_tab] = ACTIONS(910),
    [sym_parameter_char] = ACTIONS(910),
    [sym_superscript] = ACTIONS(912),
    [sym_subscript] = ACTIONS(910),
    [sym_active_char] = ACTIONS(910),
    [sym_text] = ACTIONS(910),
  },
  [307] = {
    [sym__common] = STATE(307),
    [sym__text_mode_common] = STATE(307),
    [sym_inline_verbatim] = STATE(307),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(307),
    [sym_parameter] = STATE(307),
    [sym_text_env_at] = STATE(307),
    [sym__display_math_at] = STATE(307),
    [sym_tex_display_math_at] = STATE(307),
    [sym_latex_display_math_at] = STATE(307),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(307),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(307),
    [sym_tex_inline_math_at] = STATE(307),
    [sym_latex_inline_math_at] = STATE(307),
    [sym_inline_math_env_at] = STATE(307),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(307),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(307),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(307),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(307),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(307),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(307),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(307),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(307),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(307),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(307),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(307),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(307),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(307),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(307),
    [sym_opt_text_group_at] = STATE(307),
    [sym_token_at] = STATE(307),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(307),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(767),
    [sym_double_circumflex] = ACTIONS(914),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(776),
    [sym_end_group] = ACTIONS(917),
    [sym_math_shift] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(914),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(914),
    [sym_text] = ACTIONS(914),
  },
  [308] = {
    [sym__whitespace] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_end_group] = ACTIONS(677),
    [sym_math_shift] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(679),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(921),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(921),
    [sym_begin_group] = ACTIONS(921),
    [sym_end_group] = ACTIONS(921),
    [sym_math_shift] = ACTIONS(921),
    [sym_alignment_tab] = ACTIONS(921),
    [sym_parameter_char] = ACTIONS(921),
    [sym_superscript] = ACTIONS(921),
    [sym_subscript] = ACTIONS(921),
    [sym_active_char] = ACTIONS(921),
    [sym_text] = ACTIONS(921),
  },
  [310] = {
    [sym__common] = STATE(359),
    [sym__math_mode_common] = STATE(359),
    [sym__math_mode_at] = STATE(359),
    [sym_parameter] = STATE(359),
    [sym_math_env_at] = STATE(359),
    [sym_tag_at] = STATE(359),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(359),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(359),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(359),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(359),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(359),
    [sym_opt_math_group_at] = STATE(359),
    [sym_token_at] = STATE(359),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(359),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(923),
    [sym_alignment_tab] = ACTIONS(925),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(925),
    [sym_subscript] = ACTIONS(925),
    [sym_active_char] = ACTIONS(925),
    [sym_text] = ACTIONS(925),
  },
  [311] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(927),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(929),
    [anon_sym_RBRACK] = ACTIONS(929),
    [sym_double_circumflex] = ACTIONS(929),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(929),
    [sym_begin_group] = ACTIONS(929),
    [sym_end_group] = ACTIONS(929),
    [sym_math_shift] = ACTIONS(929),
    [sym_alignment_tab] = ACTIONS(929),
    [sym_parameter_char] = ACTIONS(929),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(929),
    [sym_text] = ACTIONS(929),
  },
  [313] = {
    [sym__common] = STATE(363),
    [sym__text_mode_common] = STATE(363),
    [sym_inline_verbatim] = STATE(363),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(363),
    [sym_text_mode_at] = STATE(362),
    [sym_parameter] = STATE(363),
    [sym_text_env_at] = STATE(363),
    [sym__display_math_at] = STATE(363),
    [sym_tex_display_math_at] = STATE(363),
    [sym_latex_display_math_at] = STATE(363),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(363),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(363),
    [sym_tex_inline_math_at] = STATE(363),
    [sym_latex_inline_math_at] = STATE(363),
    [sym_inline_math_env_at] = STATE(363),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(363),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(363),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(363),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(363),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(363),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(363),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(363),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(363),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(363),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(363),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(363),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(363),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(363),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(363),
    [sym_opt_text_group_at] = STATE(363),
    [sym_token_at] = STATE(363),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(363),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(933),
    [sym_text] = ACTIONS(933),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(937),
    [anon_sym_RBRACK] = ACTIONS(937),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(937),
    [sym_begin_group] = ACTIONS(937),
    [sym_end_group] = ACTIONS(937),
    [sym_math_shift] = ACTIONS(937),
    [sym_alignment_tab] = ACTIONS(937),
    [sym_parameter_char] = ACTIONS(937),
    [sym_superscript] = ACTIONS(937),
    [sym_subscript] = ACTIONS(937),
    [sym_active_char] = ACTIONS(937),
    [sym_text] = ACTIONS(937),
  },
  [315] = {
    [anon_sym_tag] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(229),
    [anon_sym_begin] = ACTIONS(39),
    [anon_sym_end] = ACTIONS(285),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(231),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__name_at] = ACTIONS(689),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(939),
    [anon_sym_RBRACK] = ACTIONS(939),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(939),
    [sym_begin_group] = ACTIONS(939),
    [sym_end_group] = ACTIONS(939),
    [sym_math_shift] = ACTIONS(939),
    [sym_alignment_tab] = ACTIONS(939),
    [sym_parameter_char] = ACTIONS(939),
    [sym_superscript] = ACTIONS(939),
    [sym_subscript] = ACTIONS(939),
    [sym_active_char] = ACTIONS(939),
    [sym_text] = ACTIONS(939),
  },
  [317] = {
    [sym__common] = STATE(324),
    [sym__math_mode_common] = STATE(324),
    [sym__math_mode_at] = STATE(324),
    [sym_parameter] = STATE(324),
    [sym_math_env_at] = STATE(324),
    [sym_tag_at] = STATE(324),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(324),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_end] = STATE(364),
    [sym_end_token] = STATE(162),
    [sym_include_at] = STATE(324),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(324),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(324),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(324),
    [sym_opt_math_group_at] = STATE(324),
    [sym_token_at] = STATE(324),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(324),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(699),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_text] = ACTIONS(717),
  },
  [318] = {
    [sym__common] = STATE(366),
    [sym__text_mode_common] = STATE(366),
    [sym_inline_verbatim] = STATE(366),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(366),
    [sym_parameter] = STATE(366),
    [sym_text_env_at] = STATE(366),
    [sym__display_math_at] = STATE(366),
    [sym_tex_display_math_at] = STATE(366),
    [sym_latex_display_math_at] = STATE(366),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(366),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(366),
    [sym_tex_inline_math_at] = STATE(366),
    [sym_latex_inline_math_at] = STATE(366),
    [sym_inline_math_env_at] = STATE(366),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(366),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(366),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(366),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(366),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(366),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(366),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(366),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(366),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(366),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(366),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(366),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(366),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(366),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(366),
    [sym_opt_text_group_at] = STATE(366),
    [sym_token_at] = STATE(366),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(366),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(941),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(943),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(941),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(941),
    [sym_text] = ACTIONS(941),
  },
  [319] = {
    [anon_sym_LBRACK] = ACTIONS(727),
    [anon_sym_RBRACK] = ACTIONS(727),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(727),
    [sym_begin_group] = ACTIONS(727),
    [sym_end_group] = ACTIONS(727),
    [sym_math_shift] = ACTIONS(727),
    [sym_alignment_tab] = ACTIONS(727),
    [sym_parameter_char] = ACTIONS(727),
    [sym_superscript] = ACTIONS(727),
    [sym_subscript] = ACTIONS(727),
    [sym_active_char] = ACTIONS(727),
    [sym_text] = ACTIONS(727),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_RBRACK] = ACTIONS(945),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(945),
    [sym_begin_group] = ACTIONS(945),
    [sym_end_group] = ACTIONS(945),
    [sym_math_shift] = ACTIONS(945),
    [sym_alignment_tab] = ACTIONS(945),
    [sym_parameter_char] = ACTIONS(945),
    [sym_superscript] = ACTIONS(945),
    [sym_subscript] = ACTIONS(945),
    [sym_active_char] = ACTIONS(945),
    [sym_text] = ACTIONS(945),
  },
  [321] = {
    [sym__common] = STATE(368),
    [sym__math_mode_common] = STATE(368),
    [sym__math_mode_at] = STATE(368),
    [sym_parameter] = STATE(368),
    [sym_math_env_at] = STATE(368),
    [sym_tag_at] = STATE(368),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(368),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(368),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(368),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(368),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(368),
    [sym_opt_math_group_at] = STATE(368),
    [sym_token_at] = STATE(368),
    [sym_begin_opt] = STATE(230),
    [sym_end_opt] = STATE(367),
    [aux_sym_math_mode_at_repeat1] = STATE(368),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(947),
    [sym_parameter_char] = ACTIONS(81),
    [sym_superscript] = ACTIONS(947),
    [sym_subscript] = ACTIONS(947),
    [sym_active_char] = ACTIONS(947),
    [sym_text] = ACTIONS(947),
  },
  [322] = {
    [sym__common] = STATE(322),
    [sym__math_mode_common] = STATE(322),
    [sym__math_mode_at] = STATE(322),
    [sym_parameter] = STATE(322),
    [sym_math_env_at] = STATE(322),
    [sym_tag_at] = STATE(322),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(322),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(322),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(322),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(322),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(322),
    [sym_opt_math_group_at] = STATE(322),
    [sym_token_at] = STATE(322),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(322),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(949),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(955),
    [sym_math_shift] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(960),
    [sym_parameter_char] = ACTIONS(963),
    [sym_superscript] = ACTIONS(960),
    [sym_subscript] = ACTIONS(960),
    [sym_active_char] = ACTIONS(960),
    [sym_text] = ACTIONS(960),
  },
  [323] = {
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
    [sym_text] = ACTIONS(966),
  },
  [324] = {
    [sym__common] = STATE(324),
    [sym__math_mode_common] = STATE(324),
    [sym__math_mode_at] = STATE(324),
    [sym_parameter] = STATE(324),
    [sym_math_env_at] = STATE(324),
    [sym_tag_at] = STATE(324),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(324),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(324),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(324),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(324),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(324),
    [sym_opt_math_group_at] = STATE(324),
    [sym_token_at] = STATE(324),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(324),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(949),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(970),
    [sym_parameter_char] = ACTIONS(963),
    [sym_superscript] = ACTIONS(970),
    [sym_subscript] = ACTIONS(970),
    [sym_active_char] = ACTIONS(970),
    [sym_text] = ACTIONS(970),
  },
  [325] = {
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_RBRACK] = ACTIONS(973),
    [sym_double_circumflex] = ACTIONS(973),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(973),
    [sym_begin_group] = ACTIONS(973),
    [sym_end_group] = ACTIONS(973),
    [sym_math_shift] = ACTIONS(973),
    [sym_alignment_tab] = ACTIONS(973),
    [sym_parameter_char] = ACTIONS(973),
    [sym_superscript] = ACTIONS(975),
    [sym_subscript] = ACTIONS(973),
    [sym_active_char] = ACTIONS(973),
    [sym_text] = ACTIONS(973),
  },
  [326] = {
    [anon_sym_LBRACK] = ACTIONS(977),
    [anon_sym_RBRACK] = ACTIONS(977),
    [sym_double_circumflex] = ACTIONS(977),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(977),
    [sym_begin_group] = ACTIONS(977),
    [sym_end_group] = ACTIONS(977),
    [sym_math_shift] = ACTIONS(977),
    [sym_alignment_tab] = ACTIONS(977),
    [sym_parameter_char] = ACTIONS(977),
    [sym_superscript] = ACTIONS(979),
    [sym_subscript] = ACTIONS(977),
    [sym_active_char] = ACTIONS(977),
    [sym_text] = ACTIONS(977),
  },
  [327] = {
    [anon_sym_LBRACK] = ACTIONS(981),
    [anon_sym_RBRACK] = ACTIONS(981),
    [sym_double_circumflex] = ACTIONS(981),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(981),
    [sym_begin_group] = ACTIONS(981),
    [sym_end_group] = ACTIONS(981),
    [sym_math_shift] = ACTIONS(981),
    [sym_alignment_tab] = ACTIONS(981),
    [sym_parameter_char] = ACTIONS(981),
    [sym_superscript] = ACTIONS(983),
    [sym_subscript] = ACTIONS(981),
    [sym_active_char] = ACTIONS(981),
    [sym_text] = ACTIONS(981),
  },
  [328] = {
    [anon_sym_LBRACK] = ACTIONS(985),
    [anon_sym_RBRACK] = ACTIONS(985),
    [sym_double_circumflex] = ACTIONS(985),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(985),
    [sym_begin_group] = ACTIONS(985),
    [sym_end_group] = ACTIONS(985),
    [sym_math_shift] = ACTIONS(985),
    [sym_alignment_tab] = ACTIONS(985),
    [sym_parameter_char] = ACTIONS(985),
    [sym_superscript] = ACTIONS(987),
    [sym_subscript] = ACTIONS(985),
    [sym_active_char] = ACTIONS(985),
    [sym_text] = ACTIONS(985),
  },
  [329] = {
    [sym__common] = STATE(370),
    [sym__text_mode_common] = STATE(370),
    [sym_inline_verbatim] = STATE(370),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(370),
    [sym_parameter] = STATE(370),
    [sym_text_env_at] = STATE(370),
    [sym__display_math_at] = STATE(370),
    [sym_tex_display_math_at] = STATE(370),
    [sym_latex_display_math_at] = STATE(370),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(370),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(370),
    [sym_tex_inline_math_at] = STATE(370),
    [sym_latex_inline_math_at] = STATE(370),
    [sym_inline_math_env_at] = STATE(370),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(370),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(370),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(370),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(370),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(370),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(370),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(370),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(370),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(370),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(370),
    [sym_opt_text_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(989),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(991),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(989),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(989),
    [sym_text] = ACTIONS(989),
  },
  [330] = {
    [anon_sym_LBRACK] = ACTIONS(993),
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
  [331] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(995),
  },
  [332] = {
    [sym_text_group_at] = STATE(373),
    [sym__whitespace] = ACTIONS(997),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(723),
    [sym__end_of_line] = ACTIONS(995),
  },
  [333] = {
    [sym_text_group_at] = STATE(374),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_RBRACK] = ACTIONS(999),
    [sym_double_circumflex] = ACTIONS(999),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(999),
    [sym_begin_group] = ACTIONS(999),
    [sym_end_group] = ACTIONS(999),
    [sym_math_shift] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(999),
    [sym_parameter_char] = ACTIONS(999),
    [sym_superscript] = ACTIONS(1001),
    [sym_subscript] = ACTIONS(999),
    [sym_active_char] = ACTIONS(999),
    [sym_text] = ACTIONS(999),
  },
  [335] = {
    [sym__whitespace] = ACTIONS(761),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(761),
    [sym__end_of_line] = ACTIONS(761),
  },
  [336] = {
    [sym__common] = STATE(340),
    [sym__text_mode_common] = STATE(340),
    [sym_inline_verbatim] = STATE(340),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(340),
    [sym_parameter] = STATE(340),
    [sym_text_env_at] = STATE(340),
    [sym__display_math_at] = STATE(340),
    [sym_tex_display_math_at] = STATE(340),
    [sym_latex_display_math_at] = STATE(340),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(340),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(340),
    [sym_tex_inline_math_at] = STATE(340),
    [sym_latex_inline_math_at] = STATE(340),
    [sym_inline_math_env_at] = STATE(340),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(340),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(340),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(340),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(340),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(340),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(340),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(340),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(340),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(340),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(340),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(340),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(340),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(340),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(340),
    [sym_opt_text_group_at] = STATE(340),
    [sym_token_at] = STATE(340),
    [sym_begin_opt] = STATE(124),
    [sym_end_opt] = STATE(375),
    [aux_sym_text_mode_at_repeat1] = STATE(340),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_double_circumflex] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(765),
    [sym_text] = ACTIONS(765),
  },
  [337] = {
    [sym_text_group_at] = STATE(376),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(119),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_double_circumflex] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_end_group] = ACTIONS(1003),
    [sym_math_shift] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [339] = {
    [anon_sym_LBRACK] = ACTIONS(1007),
    [anon_sym_RBRACK] = ACTIONS(1007),
    [sym_double_circumflex] = ACTIONS(1007),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1007),
    [sym_begin_group] = ACTIONS(1007),
    [sym_end_group] = ACTIONS(1007),
    [sym_math_shift] = ACTIONS(1007),
    [sym_alignment_tab] = ACTIONS(1007),
    [sym_parameter_char] = ACTIONS(1007),
    [sym_superscript] = ACTIONS(1009),
    [sym_subscript] = ACTIONS(1007),
    [sym_active_char] = ACTIONS(1007),
    [sym_text] = ACTIONS(1007),
  },
  [340] = {
    [sym__common] = STATE(340),
    [sym__text_mode_common] = STATE(340),
    [sym_inline_verbatim] = STATE(340),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(340),
    [sym_parameter] = STATE(340),
    [sym_text_env_at] = STATE(340),
    [sym__display_math_at] = STATE(340),
    [sym_tex_display_math_at] = STATE(340),
    [sym_latex_display_math_at] = STATE(340),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(340),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(340),
    [sym_tex_inline_math_at] = STATE(340),
    [sym_latex_inline_math_at] = STATE(340),
    [sym_inline_math_env_at] = STATE(340),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(340),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(340),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(340),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(340),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(340),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(340),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(340),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(340),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(340),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(340),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(340),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(340),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(340),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(340),
    [sym_opt_text_group_at] = STATE(340),
    [sym_token_at] = STATE(340),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(340),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(767),
    [anon_sym_RBRACK] = ACTIONS(917),
    [sym_double_circumflex] = ACTIONS(1011),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(776),
    [sym_math_shift] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(1011),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(1011),
    [sym_text] = ACTIONS(1011),
  },
  [341] = {
    [anon_sym_LBRACK] = ACTIONS(1014),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1014),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(1016),
    [anon_sym_LBRACK] = ACTIONS(1016),
    [anon_sym_RBRACK] = ACTIONS(1016),
    [sym_double_circumflex] = ACTIONS(1016),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1016),
    [sym_begin_group] = ACTIONS(1016),
    [sym_end_group] = ACTIONS(1016),
    [sym_math_shift] = ACTIONS(1016),
    [sym_alignment_tab] = ACTIONS(1016),
    [sym_parameter_char] = ACTIONS(1016),
    [sym_superscript] = ACTIONS(1018),
    [sym_subscript] = ACTIONS(1016),
    [sym_active_char] = ACTIONS(1016),
    [sym_text] = ACTIONS(1016),
  },
  [343] = {
    [anon_sym_LBRACK] = ACTIONS(1020),
    [anon_sym_RBRACK] = ACTIONS(1020),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1020),
    [sym_begin_group] = ACTIONS(1020),
    [sym_end_group] = ACTIONS(1020),
    [sym_math_shift] = ACTIONS(1020),
    [sym_alignment_tab] = ACTIONS(1020),
    [sym_parameter_char] = ACTIONS(1020),
    [sym_superscript] = ACTIONS(1020),
    [sym_subscript] = ACTIONS(1020),
    [sym_active_char] = ACTIONS(1020),
    [sym_text] = ACTIONS(1020),
  },
  [344] = {
    [anon_sym_LBRACK] = ACTIONS(866),
    [anon_sym_RBRACK] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(866),
    [sym_begin_group] = ACTIONS(866),
    [sym_end_group] = ACTIONS(866),
    [sym_math_shift] = ACTIONS(866),
    [sym_alignment_tab] = ACTIONS(866),
    [sym_parameter_char] = ACTIONS(866),
    [sym_superscript] = ACTIONS(866),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(866),
    [sym_text] = ACTIONS(866),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [346] = {
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_end_group] = ACTIONS(894),
    [sym_math_shift] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(894),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(1022),
    [anon_sym_LBRACK] = ACTIONS(1022),
    [anon_sym_RBRACK] = ACTIONS(1022),
    [sym_double_circumflex] = ACTIONS(1022),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1022),
    [sym_begin_group] = ACTIONS(1022),
    [sym_end_group] = ACTIONS(1022),
    [sym_math_shift] = ACTIONS(1022),
    [sym_alignment_tab] = ACTIONS(1022),
    [sym_parameter_char] = ACTIONS(1022),
    [sym_superscript] = ACTIONS(1024),
    [sym_subscript] = ACTIONS(1022),
    [sym_active_char] = ACTIONS(1022),
    [sym_text] = ACTIONS(1022),
  },
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(1026),
    [anon_sym_LBRACK] = ACTIONS(1026),
    [anon_sym_RBRACK] = ACTIONS(1026),
    [sym_double_circumflex] = ACTIONS(1026),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1026),
    [sym_begin_group] = ACTIONS(1026),
    [sym_end_group] = ACTIONS(1026),
    [sym_math_shift] = ACTIONS(1026),
    [sym_alignment_tab] = ACTIONS(1026),
    [sym_parameter_char] = ACTIONS(1026),
    [sym_superscript] = ACTIONS(1028),
    [sym_subscript] = ACTIONS(1026),
    [sym_active_char] = ACTIONS(1026),
    [sym_text] = ACTIONS(1026),
  },
  [349] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1030),
  },
  [350] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1032),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(864),
    [anon_sym_RBRACK] = ACTIONS(864),
    [sym_double_circumflex] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(864),
    [sym_begin_group] = ACTIONS(864),
    [sym_end_group] = ACTIONS(864),
    [sym_math_shift] = ACTIONS(864),
    [sym_alignment_tab] = ACTIONS(864),
    [sym_parameter_char] = ACTIONS(864),
    [sym_superscript] = ACTIONS(1034),
    [sym_subscript] = ACTIONS(864),
    [sym_active_char] = ACTIONS(864),
    [sym_text] = ACTIONS(864),
  },
  [352] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(492),
  },
  [353] = {
    [anon_sym_LBRACK] = ACTIONS(1036),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1036),
    [sym_begin_group] = ACTIONS(1036),
    [sym_alignment_tab] = ACTIONS(1036),
    [sym_parameter_char] = ACTIONS(1036),
    [sym_superscript] = ACTIONS(1036),
    [sym_subscript] = ACTIONS(1036),
    [sym_active_char] = ACTIONS(1036),
    [sym_text] = ACTIONS(1036),
  },
  [354] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1038),
  },
  [355] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1040),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1042),
    [sym__end_of_line] = ACTIONS(1042),
  },
  [356] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1044),
  },
  [357] = {
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_end_group] = ACTIONS(906),
    [sym_math_shift] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_active_char] = ACTIONS(906),
    [sym_text] = ACTIONS(906),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_RBRACK] = ACTIONS(1046),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1046),
    [sym_begin_group] = ACTIONS(1046),
    [sym_end_group] = ACTIONS(1046),
    [sym_math_shift] = ACTIONS(1046),
    [sym_alignment_tab] = ACTIONS(1046),
    [sym_parameter_char] = ACTIONS(1046),
    [sym_superscript] = ACTIONS(1046),
    [sym_subscript] = ACTIONS(1046),
    [sym_active_char] = ACTIONS(1046),
    [sym_text] = ACTIONS(1046),
  },
  [359] = {
    [sym__common] = STATE(359),
    [sym__math_mode_common] = STATE(359),
    [sym__math_mode_at] = STATE(359),
    [sym_parameter] = STATE(359),
    [sym_math_env_at] = STATE(359),
    [sym_tag_at] = STATE(359),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(359),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(359),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(359),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(359),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(359),
    [sym_opt_math_group_at] = STATE(359),
    [sym_token_at] = STATE(359),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(359),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(949),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(955),
    [sym_end_group] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(1048),
    [sym_parameter_char] = ACTIONS(963),
    [sym_superscript] = ACTIONS(1048),
    [sym_subscript] = ACTIONS(1048),
    [sym_active_char] = ACTIONS(1048),
    [sym_text] = ACTIONS(1048),
  },
  [360] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(1051),
  },
  [361] = {
    [anon_sym_LBRACK] = ACTIONS(1053),
    [anon_sym_RBRACK] = ACTIONS(1053),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1053),
    [sym_begin_group] = ACTIONS(1053),
    [sym_end_group] = ACTIONS(1053),
    [sym_math_shift] = ACTIONS(1053),
    [sym_alignment_tab] = ACTIONS(1053),
    [sym_parameter_char] = ACTIONS(1053),
    [sym_superscript] = ACTIONS(1053),
    [sym_subscript] = ACTIONS(1053),
    [sym_active_char] = ACTIONS(1053),
    [sym_text] = ACTIONS(1053),
  },
  [362] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_end_group] = ACTIONS(1055),
  },
  [363] = {
    [sym__common] = STATE(307),
    [sym__text_mode_common] = STATE(307),
    [sym_inline_verbatim] = STATE(307),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(307),
    [sym_parameter] = STATE(307),
    [sym_text_env_at] = STATE(307),
    [sym__display_math_at] = STATE(307),
    [sym_tex_display_math_at] = STATE(307),
    [sym_latex_display_math_at] = STATE(307),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(307),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(307),
    [sym_tex_inline_math_at] = STATE(307),
    [sym_latex_inline_math_at] = STATE(307),
    [sym_inline_math_env_at] = STATE(307),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(307),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(307),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(307),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(307),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(307),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(307),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(307),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(307),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(307),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(307),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(307),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(307),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(307),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(307),
    [sym_opt_text_group_at] = STATE(307),
    [sym_token_at] = STATE(307),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(307),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(405),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(685),
    [sym_text] = ACTIONS(685),
  },
  [364] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_end_group] = ACTIONS(1057),
    [sym_math_shift] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [365] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
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
  [366] = {
    [sym__common] = STATE(307),
    [sym__text_mode_common] = STATE(307),
    [sym_inline_verbatim] = STATE(307),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(307),
    [sym_parameter] = STATE(307),
    [sym_text_env_at] = STATE(307),
    [sym__display_math_at] = STATE(307),
    [sym_tex_display_math_at] = STATE(307),
    [sym_latex_display_math_at] = STATE(307),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(307),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(307),
    [sym_tex_inline_math_at] = STATE(307),
    [sym_latex_inline_math_at] = STATE(307),
    [sym_inline_math_env_at] = STATE(307),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(307),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(307),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(307),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(307),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(307),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(307),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(307),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(307),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(307),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(307),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(307),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(307),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(307),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(307),
    [sym_opt_text_group_at] = STATE(307),
    [sym_token_at] = STATE(307),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(307),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(1059),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(685),
    [sym_text] = ACTIONS(685),
  },
  [367] = {
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_end_group] = ACTIONS(1061),
    [sym_math_shift] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [368] = {
    [sym__common] = STATE(368),
    [sym__math_mode_common] = STATE(368),
    [sym__math_mode_at] = STATE(368),
    [sym_parameter] = STATE(368),
    [sym_math_env_at] = STATE(368),
    [sym_tag_at] = STATE(368),
    [sym_tag_token] = STATE(227),
    [sym_escaped] = STATE(368),
    [sym_begin] = STATE(228),
    [sym_begin_token] = STATE(60),
    [sym_include_at] = STATE(368),
    [sym_include_token] = STATE(229),
    [sym_storage] = STATE(368),
    [sym_storage_token] = STATE(62),
    [sym_catcode] = STATE(368),
    [sym_catcode_token] = STATE(63),
    [sym_math_group_at] = STATE(368),
    [sym_opt_math_group_at] = STATE(368),
    [sym_token_at] = STATE(368),
    [sym_begin_opt] = STATE(230),
    [aux_sym_math_mode_at_repeat1] = STATE(368),
    [aux_sym_parameter_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(949),
    [anon_sym_RBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(952),
    [sym_begin_group] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(1063),
    [sym_parameter_char] = ACTIONS(963),
    [sym_superscript] = ACTIONS(1063),
    [sym_subscript] = ACTIONS(1063),
    [sym_active_char] = ACTIONS(1063),
    [sym_text] = ACTIONS(1063),
  },
  [369] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(681),
  },
  [370] = {
    [sym__common] = STATE(307),
    [sym__text_mode_common] = STATE(307),
    [sym_inline_verbatim] = STATE(307),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(307),
    [sym_parameter] = STATE(307),
    [sym_text_env_at] = STATE(307),
    [sym__display_math_at] = STATE(307),
    [sym_tex_display_math_at] = STATE(307),
    [sym_latex_display_math_at] = STATE(307),
    [sym_begin_display_math] = STATE(109),
    [sym_begin_inline_math] = STATE(110),
    [sym_display_math_env_at] = STATE(307),
    [sym_display_math_begin_at] = STATE(111),
    [sym__inline_math_at] = STATE(307),
    [sym_tex_inline_math_at] = STATE(307),
    [sym_latex_inline_math_at] = STATE(307),
    [sym_inline_math_env_at] = STATE(307),
    [sym_inline_math_begin] = STATE(112),
    [sym_verbatim_env] = STATE(307),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(307),
    [sym_begin] = STATE(113),
    [sym_begin_token] = STATE(114),
    [sym_documentclass] = STATE(307),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(307),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(307),
    [sym_include_token] = STATE(115),
    [sym_section_at] = STATE(307),
    [sym_section_token] = STATE(116),
    [sym_storage] = STATE(307),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(307),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(307),
    [sym_emph_token] = STATE(117),
    [sym_footnote_at] = STATE(307),
    [sym_footnote_token] = STATE(118),
    [sym_textbf_at] = STATE(307),
    [sym_textbf_token] = STATE(119),
    [sym_textit_at] = STATE(307),
    [sym_textit_token] = STATE(120),
    [sym_texttt_at] = STATE(307),
    [sym_texttt_token] = STATE(121),
    [sym_text_group_at] = STATE(307),
    [sym_opt_text_group_at] = STATE(307),
    [sym_token_at] = STATE(307),
    [sym_begin_opt] = STATE(124),
    [aux_sym_text_mode_at_repeat1] = STATE(307),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_double_circumflex] = ACTIONS(685),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(1066),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(685),
    [sym_text] = ACTIONS(685),
  },
  [371] = {
    [anon_sym_LBRACK] = ACTIONS(1068),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1068),
    [sym_begin_group] = ACTIONS(1068),
    [sym_alignment_tab] = ACTIONS(1068),
    [sym_parameter_char] = ACTIONS(1068),
    [sym_superscript] = ACTIONS(1068),
    [sym_subscript] = ACTIONS(1068),
    [sym_active_char] = ACTIONS(1068),
    [sym_text] = ACTIONS(1068),
  },
  [372] = {
    [sym_text_group_at] = STATE(386),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(723),
    [sym__end_of_line] = ACTIONS(1070),
  },
  [373] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1070),
  },
  [374] = {
    [anon_sym_LBRACK] = ACTIONS(1072),
    [anon_sym_RBRACK] = ACTIONS(1072),
    [sym_double_circumflex] = ACTIONS(1072),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1072),
    [sym_begin_group] = ACTIONS(1072),
    [sym_end_group] = ACTIONS(1072),
    [sym_math_shift] = ACTIONS(1072),
    [sym_alignment_tab] = ACTIONS(1072),
    [sym_parameter_char] = ACTIONS(1072),
    [sym_superscript] = ACTIONS(1074),
    [sym_subscript] = ACTIONS(1072),
    [sym_active_char] = ACTIONS(1072),
    [sym_text] = ACTIONS(1072),
  },
  [375] = {
    [sym__whitespace] = ACTIONS(1007),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(1007),
    [sym__end_of_line] = ACTIONS(1007),
  },
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(1076),
    [anon_sym_RBRACK] = ACTIONS(1076),
    [sym_double_circumflex] = ACTIONS(1076),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1076),
    [sym_begin_group] = ACTIONS(1076),
    [sym_end_group] = ACTIONS(1076),
    [sym_math_shift] = ACTIONS(1076),
    [sym_alignment_tab] = ACTIONS(1076),
    [sym_parameter_char] = ACTIONS(1076),
    [sym_superscript] = ACTIONS(1078),
    [sym_subscript] = ACTIONS(1076),
    [sym_active_char] = ACTIONS(1076),
    [sym_text] = ACTIONS(1076),
  },
  [377] = {
    [ts_builtin_sym_end] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [sym_double_circumflex] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_end_group] = ACTIONS(860),
    [sym_math_shift] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(1080),
    [sym_subscript] = ACTIONS(860),
    [sym_active_char] = ACTIONS(860),
    [sym_text] = ACTIONS(860),
  },
  [378] = {
    [ts_builtin_sym_end] = ACTIONS(862),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [sym_double_circumflex] = ACTIONS(862),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(862),
    [sym_begin_group] = ACTIONS(862),
    [sym_end_group] = ACTIONS(862),
    [sym_math_shift] = ACTIONS(862),
    [sym_alignment_tab] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(862),
    [sym_superscript] = ACTIONS(1082),
    [sym_subscript] = ACTIONS(862),
    [sym_active_char] = ACTIONS(862),
    [sym_text] = ACTIONS(862),
  },
  [379] = {
    [anon_sym_LBRACK] = ACTIONS(1084),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1084),
    [sym_begin_group] = ACTIONS(1084),
    [sym_alignment_tab] = ACTIONS(1084),
    [sym_parameter_char] = ACTIONS(1084),
    [sym_superscript] = ACTIONS(1084),
    [sym_subscript] = ACTIONS(1084),
    [sym_active_char] = ACTIONS(1084),
    [sym_text] = ACTIONS(1084),
  },
  [380] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1086),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1088),
    [sym__end_of_line] = ACTIONS(1088),
  },
  [381] = {
    [anon_sym_LBRACK] = ACTIONS(1090),
    [anon_sym_RBRACK] = ACTIONS(1090),
    [sym_double_circumflex] = ACTIONS(1090),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1090),
    [sym_begin_group] = ACTIONS(1090),
    [sym_end_group] = ACTIONS(1090),
    [sym_math_shift] = ACTIONS(1090),
    [sym_alignment_tab] = ACTIONS(1090),
    [sym_parameter_char] = ACTIONS(1090),
    [sym_superscript] = ACTIONS(1092),
    [sym_subscript] = ACTIONS(1090),
    [sym_active_char] = ACTIONS(1090),
    [sym_text] = ACTIONS(1090),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(1094),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1094),
    [sym_begin_group] = ACTIONS(1094),
    [sym_end_group] = ACTIONS(1094),
    [sym_math_shift] = ACTIONS(1094),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(1094),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1094),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_RBRACK] = ACTIONS(910),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(910),
    [sym_begin_group] = ACTIONS(910),
    [sym_end_group] = ACTIONS(910),
    [sym_math_shift] = ACTIONS(910),
    [sym_alignment_tab] = ACTIONS(910),
    [sym_parameter_char] = ACTIONS(910),
    [sym_superscript] = ACTIONS(910),
    [sym_subscript] = ACTIONS(910),
    [sym_active_char] = ACTIONS(910),
    [sym_text] = ACTIONS(910),
  },
  [384] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(910),
  },
  [385] = {
    [anon_sym_LBRACK] = ACTIONS(1096),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1096),
    [sym_begin_group] = ACTIONS(1096),
    [sym_alignment_tab] = ACTIONS(1096),
    [sym_parameter_char] = ACTIONS(1096),
    [sym_superscript] = ACTIONS(1096),
    [sym_subscript] = ACTIONS(1096),
    [sym_active_char] = ACTIONS(1096),
    [sym_text] = ACTIONS(1096),
  },
  [386] = {
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__end_of_line] = ACTIONS(1098),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(1100),
    [sym_magic_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__escape] = ACTIONS(1100),
    [sym_begin_group] = ACTIONS(1100),
    [sym_alignment_tab] = ACTIONS(1100),
    [sym_parameter_char] = ACTIONS(1100),
    [sym_superscript] = ACTIONS(1100),
    [sym_subscript] = ACTIONS(1100),
    [sym_active_char] = ACTIONS(1100),
    [sym_text] = ACTIONS(1100),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(31),
  [11] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(32),
  [23] = {.count = 1, .reusable = false}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, SHIFT(6),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(33),
  [33] = {.count = 1, .reusable = true}, SHIFT(34),
  [35] = {.count = 1, .reusable = true}, SHIFT(35),
  [37] = {.count = 1, .reusable = false}, SHIFT(36),
  [39] = {.count = 1, .reusable = false}, SHIFT(37),
  [41] = {.count = 1, .reusable = false}, SHIFT(38),
  [43] = {.count = 1, .reusable = false}, SHIFT(39),
  [45] = {.count = 1, .reusable = false}, SHIFT(40),
  [47] = {.count = 1, .reusable = false}, SHIFT(41),
  [49] = {.count = 1, .reusable = false}, SHIFT(42),
  [51] = {.count = 1, .reusable = true}, SHIFT(43),
  [53] = {.count = 1, .reusable = false}, SHIFT(44),
  [55] = {.count = 1, .reusable = false}, SHIFT(45),
  [57] = {.count = 1, .reusable = false}, SHIFT(46),
  [59] = {.count = 1, .reusable = false}, SHIFT(47),
  [61] = {.count = 1, .reusable = false}, SHIFT(48),
  [63] = {.count = 1, .reusable = false}, SHIFT(49),
  [65] = {.count = 1, .reusable = false}, SHIFT(50),
  [67] = {.count = 1, .reusable = true}, SHIFT(52),
  [69] = {.count = 1, .reusable = true}, SHIFT(51),
  [71] = {.count = 1, .reusable = true}, SHIFT(53),
  [73] = {.count = 1, .reusable = true}, SHIFT(54),
  [75] = {.count = 1, .reusable = true}, SHIFT(55),
  [77] = {.count = 1, .reusable = true}, SHIFT(56),
  [79] = {.count = 1, .reusable = true}, SHIFT(65),
  [81] = {.count = 1, .reusable = true}, SHIFT(66),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [87] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [89] = {.count = 1, .reusable = true}, SHIFT(67),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(69),
  [95] = {.count = 1, .reusable = false}, SHIFT(77),
  [97] = {.count = 1, .reusable = true}, SHIFT(73),
  [99] = {.count = 1, .reusable = true}, SHIFT(78),
  [101] = {.count = 1, .reusable = true}, SHIFT(82),
  [103] = {.count = 1, .reusable = true}, SHIFT(79),
  [105] = {.count = 1, .reusable = true}, SHIFT(83),
  [107] = {.count = 1, .reusable = true}, SHIFT(88),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(97),
  [115] = {.count = 1, .reusable = true}, SHIFT(125),
  [117] = {.count = 1, .reusable = true}, SHIFT(105),
  [119] = {.count = 1, .reusable = true}, SHIFT(106),
  [121] = {.count = 1, .reusable = true}, SHIFT(107),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(126),
  [129] = {.count = 1, .reusable = true}, SHIFT(128),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(129),
  [135] = {.count = 1, .reusable = true}, SHIFT(131),
  [137] = {.count = 1, .reusable = true}, SHIFT(130),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(132),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [147] = {.count = 1, .reusable = false}, SHIFT(133),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(134),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(135),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [165] = {.count = 1, .reusable = true}, SHIFT(136),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(137),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(138),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(139),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [181] = {.count = 1, .reusable = false}, SHIFT(140),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(141),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(142),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(143),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(144),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(145),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [207] = {.count = 1, .reusable = false}, SHIFT(146),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(147),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(149),
  [225] = {.count = 1, .reusable = true}, SHIFT(148),
  [227] = {.count = 1, .reusable = false}, SHIFT(150),
  [229] = {.count = 1, .reusable = false}, SHIFT(151),
  [231] = {.count = 1, .reusable = false}, SHIFT(152),
  [233] = {.count = 1, .reusable = false}, SHIFT(153),
  [235] = {.count = 1, .reusable = true}, SHIFT(154),
  [237] = {.count = 1, .reusable = true}, SHIFT(155),
  [239] = {.count = 1, .reusable = true}, SHIFT(157),
  [241] = {.count = 1, .reusable = true}, SHIFT(158),
  [243] = {.count = 1, .reusable = true}, SHIFT(160),
  [245] = {.count = 1, .reusable = true}, SHIFT(163),
  [247] = {.count = 1, .reusable = true}, SHIFT(164),
  [249] = {.count = 1, .reusable = true}, SHIFT(166),
  [251] = {.count = 1, .reusable = true}, SHIFT(169),
  [253] = {.count = 1, .reusable = true}, SHIFT(171),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(172),
  [259] = {.count = 1, .reusable = true}, SHIFT(173),
  [261] = {.count = 1, .reusable = true}, SHIFT(174),
  [263] = {.count = 1, .reusable = true}, SHIFT(175),
  [265] = {.count = 1, .reusable = true}, SHIFT(177),
  [267] = {.count = 1, .reusable = true}, SHIFT(178),
  [269] = {.count = 1, .reusable = true}, SHIFT(184),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(186),
  [277] = {.count = 1, .reusable = false}, SHIFT(189),
  [279] = {.count = 1, .reusable = true}, SHIFT(188),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(190),
  [285] = {.count = 1, .reusable = false}, SHIFT(184),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(193),
  [293] = {.count = 1, .reusable = false}, SHIFT(194),
  [295] = {.count = 1, .reusable = false}, SHIFT(195),
  [297] = {.count = 1, .reusable = false}, SHIFT(196),
  [299] = {.count = 1, .reusable = false}, SHIFT(197),
  [301] = {.count = 1, .reusable = true}, SHIFT(198),
  [303] = {.count = 1, .reusable = true}, SHIFT(199),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [307] = {.count = 1, .reusable = true}, SHIFT(202),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(197),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [319] = {.count = 1, .reusable = true}, SHIFT(205),
  [321] = {.count = 1, .reusable = true}, SHIFT(207),
  [323] = {.count = 1, .reusable = true}, SHIFT(209),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [329] = {.count = 1, .reusable = true}, SHIFT(210),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(212),
  [341] = {.count = 1, .reusable = false}, SHIFT(214),
  [343] = {.count = 1, .reusable = true}, SHIFT(215),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_emph, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(216),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_textbf, 2),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_textit, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_texttt, 2),
  [367] = {.count = 1, .reusable = false}, SHIFT(218),
  [369] = {.count = 1, .reusable = false}, SHIFT(219),
  [371] = {.count = 1, .reusable = true}, SHIFT(222),
  [373] = {.count = 1, .reusable = true}, SHIFT(220),
  [375] = {.count = 1, .reusable = true}, SHIFT(221),
  [377] = {.count = 1, .reusable = true}, SHIFT(223),
  [379] = {.count = 1, .reusable = true}, SHIFT(224),
  [381] = {.count = 1, .reusable = true}, SHIFT(225),
  [383] = {.count = 1, .reusable = true}, SHIFT(231),
  [385] = {.count = 1, .reusable = true}, SHIFT(232),
  [387] = {.count = 1, .reusable = true}, SHIFT(235),
  [389] = {.count = 1, .reusable = true}, SHIFT(241),
  [391] = {.count = 1, .reusable = true}, SHIFT(239),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [401] = {.count = 1, .reusable = true}, SHIFT(254),
  [403] = {.count = 1, .reusable = true}, SHIFT(255),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [415] = {.count = 1, .reusable = true}, SHIFT(257),
  [417] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(129),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(131),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [464] = {.count = 1, .reusable = true}, SHIFT(258),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [468] = {.count = 1, .reusable = true}, SHIFT(259),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 3),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_token, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(149),
  [499] = {.count = 1, .reusable = true}, SHIFT(260),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [503] = {.count = 1, .reusable = false}, SHIFT(261),
  [505] = {.count = 1, .reusable = false}, SHIFT(262),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [509] = {.count = 1, .reusable = true}, SHIFT(263),
  [511] = {.count = 1, .reusable = true}, SHIFT(264),
  [513] = {.count = 1, .reusable = true}, SHIFT(265),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [519] = {.count = 1, .reusable = true}, SHIFT(268),
  [521] = {.count = 1, .reusable = true}, SHIFT(266),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [527] = {.count = 1, .reusable = true}, SHIFT(271),
  [529] = {.count = 1, .reusable = true}, SHIFT(273),
  [531] = {.count = 1, .reusable = true}, SHIFT(272),
  [533] = {.count = 1, .reusable = true}, SHIFT(274),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [537] = {.count = 1, .reusable = true}, SHIFT(276),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(55),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(172),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(66),
  [556] = {.count = 1, .reusable = true}, SHIFT(277),
  [558] = {.count = 1, .reusable = true}, SHIFT(278),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(177),
  [567] = {.count = 1, .reusable = true}, SHIFT(279),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [577] = {.count = 1, .reusable = true}, SHIFT(280),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [583] = {.count = 1, .reusable = true}, SHIFT(282),
  [585] = {.count = 1, .reusable = true}, SHIFT(284),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 3),
  [593] = {.count = 1, .reusable = true}, SHIFT(285),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_end, 2),
  [599] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [601] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [603] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(189),
  [606] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(77),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(190),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 3),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(193),
  [625] = {.count = 1, .reusable = true}, SHIFT(286),
  [627] = {.count = 1, .reusable = true}, SHIFT(287),
  [629] = {.count = 1, .reusable = true}, SHIFT(288),
  [631] = {.count = 1, .reusable = true}, SHIFT(289),
  [633] = {.count = 1, .reusable = true}, SHIFT(291),
  [635] = {.count = 1, .reusable = true}, SHIFT(290),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [639] = {.count = 1, .reusable = true}, SHIFT(292),
  [641] = {.count = 1, .reusable = true}, SHIFT(293),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [647] = {.count = 1, .reusable = true}, SHIFT(295),
  [649] = {.count = 1, .reusable = true}, SHIFT(296),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [663] = {.count = 1, .reusable = true}, SHIFT(302),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [671] = {.count = 1, .reusable = false}, SHIFT(304),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [675] = {.count = 1, .reusable = false}, SHIFT(305),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 2),
  [685] = {.count = 1, .reusable = true}, SHIFT(307),
  [687] = {.count = 1, .reusable = true}, SHIFT(306),
  [689] = {.count = 1, .reusable = false}, SHIFT(308),
  [691] = {.count = 1, .reusable = true}, SHIFT(309),
  [693] = {.count = 1, .reusable = true}, SHIFT(310),
  [695] = {.count = 1, .reusable = true}, SHIFT(312),
  [697] = {.count = 1, .reusable = true}, SHIFT(313),
  [699] = {.count = 1, .reusable = true}, SHIFT(315),
  [701] = {.count = 1, .reusable = true}, SHIFT(317),
  [703] = {.count = 1, .reusable = true}, SHIFT(318),
  [705] = {.count = 1, .reusable = true}, SHIFT(321),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [709] = {.count = 1, .reusable = true}, SHIFT(322),
  [711] = {.count = 1, .reusable = true}, SHIFT(218),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode_at_region, 3),
  [717] = {.count = 1, .reusable = true}, SHIFT(324),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 2),
  [723] = {.count = 1, .reusable = true}, SHIFT(329),
  [725] = {.count = 1, .reusable = true}, SHIFT(330),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_include_at, 2),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 2),
  [735] = {.count = 1, .reusable = true}, SHIFT(333),
  [737] = {.count = 1, .reusable = true}, SHIFT(336),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_emph_at, 2),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 2),
  [747] = {.count = 1, .reusable = true}, SHIFT(337),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_textbf_at, 2),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [755] = {.count = 1, .reusable = false}, REDUCE(sym_textit_at, 2),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_texttt_at, 2),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [763] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 2),
  [765] = {.count = 1, .reusable = true}, SHIFT(340),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(255),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(220),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(106),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(107),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [785] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(257),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [800] = {.count = 1, .reusable = true}, SHIFT(341),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(264),
  [809] = {.count = 1, .reusable = true}, SHIFT(342),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [813] = {.count = 1, .reusable = true}, SHIFT(343),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [817] = {.count = 1, .reusable = true}, SHIFT(344),
  [819] = {.count = 1, .reusable = true}, SHIFT(345),
  [821] = {.count = 1, .reusable = true}, SHIFT(346),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(276),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym_inline_verbatim, 4),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [834] = {.count = 1, .reusable = false}, SHIFT(347),
  [836] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [840] = {.count = 1, .reusable = false}, SHIFT(348),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [844] = {.count = 1, .reusable = true}, SHIFT(349),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [848] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [850] = {.count = 1, .reusable = true}, SHIFT(350),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [858] = {.count = 1, .reusable = true}, SHIFT(351),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [868] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [870] = {.count = 1, .reusable = true}, SHIFT(352),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [874] = {.count = 1, .reusable = true}, SHIFT(353),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [880] = {.count = 1, .reusable = true}, SHIFT(355),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [884] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym_section, 4),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [900] = {.count = 1, .reusable = false}, REDUCE(sym_footnote, 4),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 3),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 3),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym_text_group_at, 3),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(307),
  [917] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [919] = {.count = 1, .reusable = false}, SHIFT(357),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [923] = {.count = 1, .reusable = true}, SHIFT(358),
  [925] = {.count = 1, .reusable = true}, SHIFT(359),
  [927] = {.count = 1, .reusable = true}, SHIFT(360),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [931] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math_at, 3),
  [933] = {.count = 1, .reusable = true}, SHIFT(363),
  [935] = {.count = 1, .reusable = true}, SHIFT(361),
  [937] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [941] = {.count = 1, .reusable = true}, SHIFT(366),
  [943] = {.count = 1, .reusable = true}, SHIFT(365),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [947] = {.count = 1, .reusable = true}, SHIFT(368),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(53),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(223),
  [955] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(224),
  [958] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [960] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(322),
  [963] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(66),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [968] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math_at, 3),
  [970] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(324),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [975] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math_at, 3),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [979] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_at, 3),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [983] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_at, 3),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_text_env_at, 3),
  [989] = {.count = 1, .reusable = true}, SHIFT(370),
  [991] = {.count = 1, .reusable = true}, SHIFT(369),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [995] = {.count = 1, .reusable = true}, SHIFT(371),
  [997] = {.count = 1, .reusable = true}, SHIFT(372),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1001] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 3),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1005] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 3),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1009] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group_at, 3),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(340),
  [1014] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1018] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1024] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 3),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1028] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 3),
  [1030] = {.count = 1, .reusable = true}, SHIFT(377),
  [1032] = {.count = 1, .reusable = true}, SHIFT(378),
  [1034] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env_group, 3),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1038] = {.count = 1, .reusable = true}, SHIFT(379),
  [1040] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1044] = {.count = 1, .reusable = true}, SHIFT(380),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1048] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(359),
  [1051] = {.count = 1, .reusable = true}, SHIFT(381),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1055] = {.count = 1, .reusable = true}, SHIFT(382),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1059] = {.count = 1, .reusable = true}, SHIFT(383),
  [1061] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1063] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(368),
  [1066] = {.count = 1, .reusable = true}, SHIFT(384),
  [1068] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1070] = {.count = 1, .reusable = true}, SHIFT(385),
  [1072] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1074] = {.count = 1, .reusable = false}, REDUCE(sym_section_at, 4),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1078] = {.count = 1, .reusable = false}, REDUCE(sym_footnote_at, 4),
  [1080] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [1082] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [1084] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1086] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1088] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1092] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math_at, 5),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1098] = {.count = 1, .reusable = true}, SHIFT(387),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
