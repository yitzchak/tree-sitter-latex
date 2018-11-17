#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 755
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
    case 40:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'f')
        ADVANCE(93);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == 'k')
        ADVANCE(110);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(127);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'u')
        ADVANCE(160);
      if (lookahead == 'v')
        ADVANCE(170);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 41:
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
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(45);
      if (lookahead == 'p')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'h')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'm')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(103);
      if (lookahead == 'p')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(136);
      if (lookahead == 'u')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(143);
      if (lookahead == 's')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(136);
      if (lookahead == 'u')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 178:
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
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == 'k')
        ADVANCE(110);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 189:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
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
        ADVANCE(191);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 192:
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
    case 193:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 194:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'd')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 198:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(42);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(60);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(93);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == 'k')
        ADVANCE(110);
      if (lookahead == 'm')
        ADVANCE(112);
      if (lookahead == 'p')
        ADVANCE(127);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'u')
        ADVANCE(160);
      if (lookahead == 'v')
        ADVANCE(170);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'm')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 203:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(204);
      if (lookahead == 'a')
        ADVANCE(213);
      if (lookahead == 'd')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'g')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(276);
      if (lookahead == 's')
        ADVANCE(291);
      if (lookahead == 'v')
        ADVANCE(294);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(301);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
    case 211:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(221);
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
      if (lookahead == 'g')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(217);
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
      if (lookahead == '*')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(219);
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(218);
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
        ADVANCE(222);
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
      if (lookahead == 't')
        ADVANCE(212);
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
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead == 'g')
        ADVANCE(228);
      if (lookahead == 'i')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 's')
        ADVANCE(244);
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
      if (lookahead == 'r')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
        ADVANCE(220);
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
      if (lookahead == 'r')
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
        ADVANCE(220);
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
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(220);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(220);
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
      if (lookahead == 'q')
        ADVANCE(250);
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
      if (lookahead == 'n')
        ADVANCE(251);
      if (lookahead == 'u')
        ADVANCE(252);
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
        ADVANCE(224);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(220);
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(256);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(220);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
        ADVANCE(275);
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
      if (lookahead == 'g')
        ADVANCE(212);
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
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(280);
      if (lookahead == 'u')
        ADVANCE(284);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(212);
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(220);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(219);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
        ADVANCE(300);
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
      if (lookahead == 'm')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 302:
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
    case 303:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 304:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 305:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'b')
        ADVANCE(319);
      if (lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'e')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'k')
        ADVANCE(373);
      if (lookahead == 'm')
        ADVANCE(375);
      if (lookahead == 'p')
        ADVANCE(389);
      if (lookahead == 's')
        ADVANCE(397);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(422);
      if (lookahead == 'v')
        ADVANCE(432);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'p')
        ADVANCE(314);
      if (lookahead == 's')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead == 'h')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(67);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(337);
      if (lookahead == 'o')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'm')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(366);
      if (lookahead == 'p')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(398);
      if (lookahead == 'u')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead == 's')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(398);
      if (lookahead == 'u')
        ADVANCE(409);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(415);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(416);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 't')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(434);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(435);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH);
      if (lookahead == '*')
        ADVANCE(174);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 438:
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
    case 439:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(55);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == 'k')
        ADVANCE(110);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 441:
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
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(37);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 443:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'b')
        ADVANCE(319);
      if (lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'e')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'k')
        ADVANCE(373);
      if (lookahead == 'm')
        ADVANCE(444);
      if (lookahead == 'p')
        ADVANCE(389);
      if (lookahead == 's')
        ADVANCE(397);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(422);
      if (lookahead == 'v')
        ADVANCE(432);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 445:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(319);
      if (lookahead == 'c')
        ADVANCE(446);
      if (lookahead == 'd')
        ADVANCE(447);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'k')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(448);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(449);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(450);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 451:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'a')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'k')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'a')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 't')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'o')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 't')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'h')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'e')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'r')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 463:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'b')
        ADVANCE(319);
      if (lookahead == 'c')
        ADVANCE(324);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'f')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'k')
        ADVANCE(373);
      if (lookahead == 'm')
        ADVANCE(444);
      if (lookahead == 'p')
        ADVANCE(389);
      if (lookahead == 's')
        ADVANCE(397);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(422);
      if (lookahead == 'v')
        ADVANCE(432);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'm')
        ADVANCE(353);
      if (lookahead == 'n')
        ADVANCE(465);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(466);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 467:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(37);
      END_STATE();
    case 468:
      if (lookahead == '%')
        ADVANCE(41);
      if (lookahead == 'b')
        ADVANCE(319);
      if (lookahead == 'c')
        ADVANCE(446);
      if (lookahead == 'd')
        ADVANCE(447);
      if (lookahead == 'e')
        ADVANCE(469);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 'k')
        ADVANCE(373);
      if (lookahead == 't')
        ADVANCE(448);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(436);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(177);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'n')
        ADVANCE(465);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 38, .external_lex_state = 3},
  [3] = {.lex_state = 38, .external_lex_state = 3},
  [4] = {.lex_state = 39, .external_lex_state = 2},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 178, .external_lex_state = 4},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 179},
  [9] = {.lex_state = 36, .external_lex_state = 5},
  [10] = {.lex_state = 179},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 180},
  [16] = {.lex_state = 36, .external_lex_state = 2},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 39, .external_lex_state = 2},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 39, .external_lex_state = 2},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 181},
  [34] = {.lex_state = 39, .external_lex_state = 2},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 183},
  [37] = {.lex_state = 178, .external_lex_state = 6},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 189, .external_lex_state = 3},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 38, .external_lex_state = 3},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38, .external_lex_state = 3},
  [48] = {.lex_state = 181},
  [49] = {.lex_state = 39, .external_lex_state = 2},
  [50] = {.lex_state = 189, .external_lex_state = 3},
  [51] = {.lex_state = 36, .external_lex_state = 5},
  [52] = {.lex_state = 190},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 39, .external_lex_state = 2},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 192},
  [57] = {.lex_state = 192},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 192},
  [60] = {.lex_state = 190, .external_lex_state = 2},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 192},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 189},
  [67] = {.lex_state = 193},
  [68] = {.lex_state = 190, .external_lex_state = 2},
  [69] = {.lex_state = 38, .external_lex_state = 3},
  [70] = {.lex_state = 38, .external_lex_state = 3},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 178, .external_lex_state = 4},
  [73] = {.lex_state = 39, .external_lex_state = 2},
  [74] = {.lex_state = 178, .external_lex_state = 4},
  [75] = {.lex_state = 36, .external_lex_state = 5},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 180},
  [81] = {.lex_state = 36, .external_lex_state = 2},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 178, .external_lex_state = 4},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 38},
  [94] = {.lex_state = 39, .external_lex_state = 2},
  [95] = {.lex_state = 178, .external_lex_state = 4},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 179, .external_lex_state = 7},
  [98] = {.lex_state = 183},
  [99] = {.lex_state = 178, .external_lex_state = 6},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 181},
  [109] = {.lex_state = 36},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 194},
  [113] = {.lex_state = 39, .external_lex_state = 2},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 198},
  [117] = {.lex_state = 180},
  [118] = {.lex_state = 199},
  [119] = {.lex_state = 39, .external_lex_state = 2},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36, .external_lex_state = 2},
  [122] = {.lex_state = 203},
  [123] = {.lex_state = 302},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 302},
  [126] = {.lex_state = 36, .external_lex_state = 2},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 39, .external_lex_state = 2},
  [129] = {.lex_state = 189},
  [130] = {.lex_state = 39, .external_lex_state = 2},
  [131] = {.lex_state = 39, .external_lex_state = 2},
  [132] = {.lex_state = 189},
  [133] = {.lex_state = 39, .external_lex_state = 2},
  [134] = {.lex_state = 39, .external_lex_state = 2},
  [135] = {.lex_state = 189},
  [136] = {.lex_state = 303},
  [137] = {.lex_state = 304},
  [138] = {.lex_state = 39, .external_lex_state = 2},
  [139] = {.lex_state = 39, .external_lex_state = 2},
  [140] = {.lex_state = 189},
  [141] = {.lex_state = 39, .external_lex_state = 2},
  [142] = {.lex_state = 39, .external_lex_state = 2},
  [143] = {.lex_state = 39, .external_lex_state = 2},
  [144] = {.lex_state = 305},
  [145] = {.lex_state = 438, .external_lex_state = 6},
  [146] = {.lex_state = 38},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 36, .external_lex_state = 5},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 36},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 180},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 36},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 39, .external_lex_state = 2},
  [167] = {.lex_state = 39, .external_lex_state = 2},
  [168] = {.lex_state = 38},
  [169] = {.lex_state = 38},
  [170] = {.lex_state = 39, .external_lex_state = 2},
  [171] = {.lex_state = 39, .external_lex_state = 2},
  [172] = {.lex_state = 39, .external_lex_state = 2},
  [173] = {.lex_state = 36, .external_lex_state = 2},
  [174] = {.lex_state = 39, .external_lex_state = 2},
  [175] = {.lex_state = 181},
  [176] = {.lex_state = 189},
  [177] = {.lex_state = 38, .external_lex_state = 3},
  [178] = {.lex_state = 193, .external_lex_state = 3},
  [179] = {.lex_state = 193, .external_lex_state = 3},
  [180] = {.lex_state = 183},
  [181] = {.lex_state = 178, .external_lex_state = 6},
  [182] = {.lex_state = 38, .external_lex_state = 3},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 36},
  [186] = {.lex_state = 438, .external_lex_state = 6},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 38},
  [189] = {.lex_state = 178, .external_lex_state = 6},
  [190] = {.lex_state = 181},
  [191] = {.lex_state = 39, .external_lex_state = 2},
  [192] = {.lex_state = 38},
  [193] = {.lex_state = 178, .external_lex_state = 4},
  [194] = {.lex_state = 38, .external_lex_state = 3},
  [195] = {.lex_state = 439},
  [196] = {.lex_state = 38, .external_lex_state = 3},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 36},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 38},
  [201] = {.lex_state = 178, .external_lex_state = 4},
  [202] = {.lex_state = 38, .external_lex_state = 3},
  [203] = {.lex_state = 304},
  [204] = {.lex_state = 38, .external_lex_state = 3},
  [205] = {.lex_state = 38, .external_lex_state = 3},
  [206] = {.lex_state = 38},
  [207] = {.lex_state = 38, .external_lex_state = 3},
  [208] = {.lex_state = 38, .external_lex_state = 3},
  [209] = {.lex_state = 39, .external_lex_state = 2},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 192},
  [217] = {.lex_state = 192},
  [218] = {.lex_state = 39, .external_lex_state = 2},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 38},
  [225] = {.lex_state = 39, .external_lex_state = 2},
  [226] = {.lex_state = 178, .external_lex_state = 4},
  [227] = {.lex_state = 38},
  [228] = {.lex_state = 189, .external_lex_state = 3},
  [229] = {.lex_state = 178, .external_lex_state = 4},
  [230] = {.lex_state = 189, .external_lex_state = 3},
  [231] = {.lex_state = 178, .external_lex_state = 4},
  [232] = {.lex_state = 441, .external_lex_state = 4},
  [233] = {.lex_state = 441, .external_lex_state = 4},
  [234] = {.lex_state = 178, .external_lex_state = 4},
  [235] = {.lex_state = 178, .external_lex_state = 4},
  [236] = {.lex_state = 179, .external_lex_state = 7},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 178, .external_lex_state = 4},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 36},
  [244] = {.lex_state = 178, .external_lex_state = 4},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 36, .external_lex_state = 2},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 178, .external_lex_state = 4},
  [249] = {.lex_state = 189},
  [250] = {.lex_state = 178, .external_lex_state = 4},
  [251] = {.lex_state = 189},
  [252] = {.lex_state = 178, .external_lex_state = 4},
  [253] = {.lex_state = 178, .external_lex_state = 4},
  [254] = {.lex_state = 189},
  [255] = {.lex_state = 304},
  [256] = {.lex_state = 178, .external_lex_state = 4},
  [257] = {.lex_state = 178, .external_lex_state = 4},
  [258] = {.lex_state = 189},
  [259] = {.lex_state = 178, .external_lex_state = 4},
  [260] = {.lex_state = 178, .external_lex_state = 4},
  [261] = {.lex_state = 178, .external_lex_state = 4},
  [262] = {.lex_state = 305},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 178, .external_lex_state = 4},
  [265] = {.lex_state = 178, .external_lex_state = 4},
  [266] = {.lex_state = 178, .external_lex_state = 4},
  [267] = {.lex_state = 178, .external_lex_state = 4},
  [268] = {.lex_state = 39, .external_lex_state = 2},
  [269] = {.lex_state = 39, .external_lex_state = 2},
  [270] = {.lex_state = 178, .external_lex_state = 4},
  [271] = {.lex_state = 178, .external_lex_state = 4},
  [272] = {.lex_state = 36, .external_lex_state = 5},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 193},
  [275] = {.lex_state = 190},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 178, .external_lex_state = 6},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 39, .external_lex_state = 2},
  [280] = {.lex_state = 178, .external_lex_state = 4},
  [281] = {.lex_state = 38},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 36},
  [284] = {.lex_state = 36},
  [285] = {.lex_state = 178, .external_lex_state = 4},
  [286] = {.lex_state = 38},
  [287] = {.lex_state = 304},
  [288] = {.lex_state = 38},
  [289] = {.lex_state = 38},
  [290] = {.lex_state = 38},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 442},
  [294] = {.lex_state = 39, .external_lex_state = 2},
  [295] = {.lex_state = 39, .external_lex_state = 2},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 39, .external_lex_state = 2},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 189},
  [300] = {.lex_state = 39, .external_lex_state = 2},
  [301] = {.lex_state = 203},
  [302] = {.lex_state = 39, .external_lex_state = 2},
  [303] = {.lex_state = 180},
  [304] = {.lex_state = 198},
  [305] = {.lex_state = 180},
  [306] = {.lex_state = 39, .external_lex_state = 2},
  [307] = {.lex_state = 39, .external_lex_state = 2},
  [308] = {.lex_state = 36, .external_lex_state = 2},
  [309] = {.lex_state = 178, .external_lex_state = 6},
  [310] = {.lex_state = 178, .external_lex_state = 6},
  [311] = {.lex_state = 178, .external_lex_state = 6},
  [312] = {.lex_state = 178, .external_lex_state = 6},
  [313] = {.lex_state = 178, .external_lex_state = 4},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 302},
  [316] = {.lex_state = 302},
  [317] = {.lex_state = 180},
  [318] = {.lex_state = 302},
  [319] = {.lex_state = 302},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 39, .external_lex_state = 2},
  [322] = {.lex_state = 302},
  [323] = {.lex_state = 302},
  [324] = {.lex_state = 39, .external_lex_state = 2},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 39, .external_lex_state = 2},
  [327] = {.lex_state = 36},
  [328] = {.lex_state = 39, .external_lex_state = 2},
  [329] = {.lex_state = 304},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 39, .external_lex_state = 2},
  [333] = {.lex_state = 190, .external_lex_state = 2},
  [334] = {.lex_state = 193},
  [335] = {.lex_state = 443},
  [336] = {.lex_state = 438, .external_lex_state = 6},
  [337] = {.lex_state = 38},
  [338] = {.lex_state = 38},
  [339] = {.lex_state = 438, .external_lex_state = 6},
  [340] = {.lex_state = 36, .external_lex_state = 5},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 36},
  [343] = {.lex_state = 36},
  [344] = {.lex_state = 36},
  [345] = {.lex_state = 180},
  [346] = {.lex_state = 38},
  [347] = {.lex_state = 36},
  [348] = {.lex_state = 36},
  [349] = {.lex_state = 36},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 36},
  [352] = {.lex_state = 36},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 36},
  [355] = {.lex_state = 36},
  [356] = {.lex_state = 38},
  [357] = {.lex_state = 438, .external_lex_state = 6},
  [358] = {.lex_state = 445},
  [359] = {.lex_state = 178, .external_lex_state = 6},
  [360] = {.lex_state = 36},
  [361] = {.lex_state = 38},
  [362] = {.lex_state = 36},
  [363] = {.lex_state = 36},
  [364] = {.lex_state = 38},
  [365] = {.lex_state = 38},
  [366] = {.lex_state = 179, .external_lex_state = 7},
  [367] = {.lex_state = 451},
  [368] = {.lex_state = 39, .external_lex_state = 2},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 36},
  [371] = {.lex_state = 36},
  [372] = {.lex_state = 36},
  [373] = {.lex_state = 36},
  [374] = {.lex_state = 38},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 36},
  [377] = {.lex_state = 463},
  [378] = {.lex_state = 38},
  [379] = {.lex_state = 38},
  [380] = {.lex_state = 203},
  [381] = {.lex_state = 302},
  [382] = {.lex_state = 38},
  [383] = {.lex_state = 189},
  [384] = {.lex_state = 38},
  [385] = {.lex_state = 189},
  [386] = {.lex_state = 38},
  [387] = {.lex_state = 38},
  [388] = {.lex_state = 189},
  [389] = {.lex_state = 38},
  [390] = {.lex_state = 38},
  [391] = {.lex_state = 38},
  [392] = {.lex_state = 189},
  [393] = {.lex_state = 38},
  [394] = {.lex_state = 38},
  [395] = {.lex_state = 38},
  [396] = {.lex_state = 443},
  [397] = {.lex_state = 38},
  [398] = {.lex_state = 38},
  [399] = {.lex_state = 38},
  [400] = {.lex_state = 39, .external_lex_state = 2},
  [401] = {.lex_state = 39, .external_lex_state = 2},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 38, .external_lex_state = 3},
  [404] = {.lex_state = 38, .external_lex_state = 3},
  [405] = {.lex_state = 438, .external_lex_state = 6},
  [406] = {.lex_state = 467, .external_lex_state = 6},
  [407] = {.lex_state = 441, .external_lex_state = 6},
  [408] = {.lex_state = 178, .external_lex_state = 6},
  [409] = {.lex_state = 178, .external_lex_state = 6},
  [410] = {.lex_state = 178, .external_lex_state = 4},
  [411] = {.lex_state = 178, .external_lex_state = 6},
  [412] = {.lex_state = 178, .external_lex_state = 6},
  [413] = {.lex_state = 36},
  [414] = {.lex_state = 36},
  [415] = {.lex_state = 178, .external_lex_state = 4},
  [416] = {.lex_state = 178, .external_lex_state = 6},
  [417] = {.lex_state = 304},
  [418] = {.lex_state = 438, .external_lex_state = 6},
  [419] = {.lex_state = 178, .external_lex_state = 6},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 38, .external_lex_state = 3},
  [422] = {.lex_state = 178, .external_lex_state = 6},
  [423] = {.lex_state = 438, .external_lex_state = 6},
  [424] = {.lex_state = 39, .external_lex_state = 2},
  [425] = {.lex_state = 38, .external_lex_state = 3},
  [426] = {.lex_state = 178, .external_lex_state = 6},
  [427] = {.lex_state = 178, .external_lex_state = 4},
  [428] = {.lex_state = 36},
  [429] = {.lex_state = 38, .external_lex_state = 3},
  [430] = {.lex_state = 38, .external_lex_state = 3},
  [431] = {.lex_state = 178, .external_lex_state = 6},
  [432] = {.lex_state = 38, .external_lex_state = 3},
  [433] = {.lex_state = 178, .external_lex_state = 4},
  [434] = {.lex_state = 181},
  [435] = {.lex_state = 38, .external_lex_state = 3},
  [436] = {.lex_state = 38},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 192},
  [439] = {.lex_state = 178, .external_lex_state = 4},
  [440] = {.lex_state = 38},
  [441] = {.lex_state = 178, .external_lex_state = 4},
  [442] = {.lex_state = 178, .external_lex_state = 4},
  [443] = {.lex_state = 178, .external_lex_state = 4},
  [444] = {.lex_state = 178, .external_lex_state = 4},
  [445] = {.lex_state = 36, .external_lex_state = 5},
  [446] = {.lex_state = 38},
  [447] = {.lex_state = 178, .external_lex_state = 4},
  [448] = {.lex_state = 442},
  [449] = {.lex_state = 178, .external_lex_state = 4},
  [450] = {.lex_state = 178, .external_lex_state = 4},
  [451] = {.lex_state = 36},
  [452] = {.lex_state = 178, .external_lex_state = 4},
  [453] = {.lex_state = 36},
  [454] = {.lex_state = 178, .external_lex_state = 4},
  [455] = {.lex_state = 203},
  [456] = {.lex_state = 178, .external_lex_state = 4},
  [457] = {.lex_state = 178, .external_lex_state = 4},
  [458] = {.lex_state = 178, .external_lex_state = 4},
  [459] = {.lex_state = 178, .external_lex_state = 6},
  [460] = {.lex_state = 36},
  [461] = {.lex_state = 178, .external_lex_state = 4},
  [462] = {.lex_state = 36},
  [463] = {.lex_state = 178, .external_lex_state = 4},
  [464] = {.lex_state = 36},
  [465] = {.lex_state = 178, .external_lex_state = 4},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 36},
  [468] = {.lex_state = 178, .external_lex_state = 4},
  [469] = {.lex_state = 441, .external_lex_state = 4},
  [470] = {.lex_state = 451},
  [471] = {.lex_state = 178, .external_lex_state = 4},
  [472] = {.lex_state = 178, .external_lex_state = 4},
  [473] = {.lex_state = 39, .external_lex_state = 2},
  [474] = {.lex_state = 38},
  [475] = {.lex_state = 38},
  [476] = {.lex_state = 38},
  [477] = {.lex_state = 190, .external_lex_state = 2},
  [478] = {.lex_state = 38},
  [479] = {.lex_state = 178, .external_lex_state = 6},
  [480] = {.lex_state = 38},
  [481] = {.lex_state = 38},
  [482] = {.lex_state = 38},
  [483] = {.lex_state = 178, .external_lex_state = 4},
  [484] = {.lex_state = 181},
  [485] = {.lex_state = 38},
  [486] = {.lex_state = 190, .external_lex_state = 2},
  [487] = {.lex_state = 203},
  [488] = {.lex_state = 39, .external_lex_state = 2},
  [489] = {.lex_state = 203},
  [490] = {.lex_state = 39, .external_lex_state = 2},
  [491] = {.lex_state = 36},
  [492] = {.lex_state = 178, .external_lex_state = 6},
  [493] = {.lex_state = 302},
  [494] = {.lex_state = 38},
  [495] = {.lex_state = 302},
  [496] = {.lex_state = 39, .external_lex_state = 2},
  [497] = {.lex_state = 302},
  [498] = {.lex_state = 178, .external_lex_state = 4},
  [499] = {.lex_state = 36},
  [500] = {.lex_state = 302},
  [501] = {.lex_state = 302},
  [502] = {.lex_state = 180},
  [503] = {.lex_state = 302},
  [504] = {.lex_state = 302},
  [505] = {.lex_state = 39, .external_lex_state = 2},
  [506] = {.lex_state = 302},
  [507] = {.lex_state = 39, .external_lex_state = 2},
  [508] = {.lex_state = 39, .external_lex_state = 2},
  [509] = {.lex_state = 39, .external_lex_state = 2},
  [510] = {.lex_state = 39, .external_lex_state = 2},
  [511] = {.lex_state = 39, .external_lex_state = 2},
  [512] = {.lex_state = 38},
  [513] = {.lex_state = 467, .external_lex_state = 6},
  [514] = {.lex_state = 438, .external_lex_state = 6},
  [515] = {.lex_state = 438, .external_lex_state = 6},
  [516] = {.lex_state = 36},
  [517] = {.lex_state = 38},
  [518] = {.lex_state = 179, .external_lex_state = 7},
  [519] = {.lex_state = 36},
  [520] = {.lex_state = 36},
  [521] = {.lex_state = 36},
  [522] = {.lex_state = 36},
  [523] = {.lex_state = 438, .external_lex_state = 6},
  [524] = {.lex_state = 36},
  [525] = {.lex_state = 36},
  [526] = {.lex_state = 438, .external_lex_state = 6},
  [527] = {.lex_state = 38},
  [528] = {.lex_state = 36},
  [529] = {.lex_state = 438, .external_lex_state = 6},
  [530] = {.lex_state = 189},
  [531] = {.lex_state = 438, .external_lex_state = 6},
  [532] = {.lex_state = 189},
  [533] = {.lex_state = 438, .external_lex_state = 6},
  [534] = {.lex_state = 438, .external_lex_state = 6},
  [535] = {.lex_state = 189},
  [536] = {.lex_state = 438, .external_lex_state = 6},
  [537] = {.lex_state = 438, .external_lex_state = 6},
  [538] = {.lex_state = 189},
  [539] = {.lex_state = 438, .external_lex_state = 6},
  [540] = {.lex_state = 438, .external_lex_state = 6},
  [541] = {.lex_state = 438, .external_lex_state = 6},
  [542] = {.lex_state = 438, .external_lex_state = 6},
  [543] = {.lex_state = 38},
  [544] = {.lex_state = 38},
  [545] = {.lex_state = 438, .external_lex_state = 6},
  [546] = {.lex_state = 445},
  [547] = {.lex_state = 178, .external_lex_state = 6},
  [548] = {.lex_state = 38},
  [549] = {.lex_state = 36},
  [550] = {.lex_state = 36},
  [551] = {.lex_state = 38},
  [552] = {.lex_state = 178, .external_lex_state = 6},
  [553] = {.lex_state = 38},
  [554] = {.lex_state = 38},
  [555] = {.lex_state = 438, .external_lex_state = 6},
  [556] = {.lex_state = 38},
  [557] = {.lex_state = 468},
  [558] = {.lex_state = 38},
  [559] = {.lex_state = 36},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 38},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 36, .external_lex_state = 5},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 38},
  [566] = {.lex_state = 36},
  [567] = {.lex_state = 442},
  [568] = {.lex_state = 38},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 36},
  [571] = {.lex_state = 38},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 38},
  [574] = {.lex_state = 203},
  [575] = {.lex_state = 38},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 438, .external_lex_state = 6},
  [578] = {.lex_state = 36},
  [579] = {.lex_state = 302},
  [580] = {.lex_state = 302},
  [581] = {.lex_state = 36},
  [582] = {.lex_state = 38},
  [583] = {.lex_state = 36},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 36},
  [586] = {.lex_state = 38},
  [587] = {.lex_state = 302},
  [588] = {.lex_state = 38},
  [589] = {.lex_state = 36},
  [590] = {.lex_state = 38},
  [591] = {.lex_state = 38},
  [592] = {.lex_state = 38},
  [593] = {.lex_state = 438, .external_lex_state = 6},
  [594] = {.lex_state = 178, .external_lex_state = 6},
  [595] = {.lex_state = 178, .external_lex_state = 6},
  [596] = {.lex_state = 178, .external_lex_state = 6},
  [597] = {.lex_state = 178, .external_lex_state = 6},
  [598] = {.lex_state = 438, .external_lex_state = 6},
  [599] = {.lex_state = 178, .external_lex_state = 6},
  [600] = {.lex_state = 178, .external_lex_state = 6},
  [601] = {.lex_state = 178, .external_lex_state = 4},
  [602] = {.lex_state = 181},
  [603] = {.lex_state = 178, .external_lex_state = 6},
  [604] = {.lex_state = 38, .external_lex_state = 3},
  [605] = {.lex_state = 178, .external_lex_state = 6},
  [606] = {.lex_state = 38},
  [607] = {.lex_state = 38, .external_lex_state = 3},
  [608] = {.lex_state = 38, .external_lex_state = 3},
  [609] = {.lex_state = 36},
  [610] = {.lex_state = 178, .external_lex_state = 4},
  [611] = {.lex_state = 178, .external_lex_state = 4},
  [612] = {.lex_state = 441, .external_lex_state = 4},
  [613] = {.lex_state = 441, .external_lex_state = 4},
  [614] = {.lex_state = 203},
  [615] = {.lex_state = 178, .external_lex_state = 4},
  [616] = {.lex_state = 203},
  [617] = {.lex_state = 178, .external_lex_state = 4},
  [618] = {.lex_state = 178, .external_lex_state = 6},
  [619] = {.lex_state = 178, .external_lex_state = 4},
  [620] = {.lex_state = 178, .external_lex_state = 4},
  [621] = {.lex_state = 178, .external_lex_state = 4},
  [622] = {.lex_state = 178, .external_lex_state = 4},
  [623] = {.lex_state = 178, .external_lex_state = 4},
  [624] = {.lex_state = 178, .external_lex_state = 4},
  [625] = {.lex_state = 178, .external_lex_state = 4},
  [626] = {.lex_state = 39, .external_lex_state = 2},
  [627] = {.lex_state = 38},
  [628] = {.lex_state = 38},
  [629] = {.lex_state = 38},
  [630] = {.lex_state = 39, .external_lex_state = 2},
  [631] = {.lex_state = 178, .external_lex_state = 6},
  [632] = {.lex_state = 178, .external_lex_state = 6},
  [633] = {.lex_state = 39, .external_lex_state = 2},
  [634] = {.lex_state = 302},
  [635] = {.lex_state = 36},
  [636] = {.lex_state = 302},
  [637] = {.lex_state = 180},
  [638] = {.lex_state = 302},
  [639] = {.lex_state = 438, .external_lex_state = 6},
  [640] = {.lex_state = 438, .external_lex_state = 6},
  [641] = {.lex_state = 38},
  [642] = {.lex_state = 438, .external_lex_state = 6},
  [643] = {.lex_state = 36, .external_lex_state = 5},
  [644] = {.lex_state = 38},
  [645] = {.lex_state = 438, .external_lex_state = 6},
  [646] = {.lex_state = 442},
  [647] = {.lex_state = 438, .external_lex_state = 6},
  [648] = {.lex_state = 438, .external_lex_state = 6},
  [649] = {.lex_state = 36},
  [650] = {.lex_state = 438, .external_lex_state = 6},
  [651] = {.lex_state = 36},
  [652] = {.lex_state = 438, .external_lex_state = 6},
  [653] = {.lex_state = 203},
  [654] = {.lex_state = 438, .external_lex_state = 6},
  [655] = {.lex_state = 438, .external_lex_state = 6},
  [656] = {.lex_state = 178, .external_lex_state = 6},
  [657] = {.lex_state = 36},
  [658] = {.lex_state = 438, .external_lex_state = 6},
  [659] = {.lex_state = 36},
  [660] = {.lex_state = 438, .external_lex_state = 6},
  [661] = {.lex_state = 36},
  [662] = {.lex_state = 438, .external_lex_state = 6},
  [663] = {.lex_state = 36},
  [664] = {.lex_state = 438, .external_lex_state = 6},
  [665] = {.lex_state = 438, .external_lex_state = 6},
  [666] = {.lex_state = 178, .external_lex_state = 6},
  [667] = {.lex_state = 178, .external_lex_state = 6},
  [668] = {.lex_state = 438, .external_lex_state = 6},
  [669] = {.lex_state = 178, .external_lex_state = 6},
  [670] = {.lex_state = 178, .external_lex_state = 6},
  [671] = {.lex_state = 36},
  [672] = {.lex_state = 178, .external_lex_state = 6},
  [673] = {.lex_state = 38},
  [674] = {.lex_state = 38},
  [675] = {.lex_state = 178, .external_lex_state = 6},
  [676] = {.lex_state = 38},
  [677] = {.lex_state = 38},
  [678] = {.lex_state = 178, .external_lex_state = 6},
  [679] = {.lex_state = 438, .external_lex_state = 6},
  [680] = {.lex_state = 38},
  [681] = {.lex_state = 38},
  [682] = {.lex_state = 38},
  [683] = {.lex_state = 38},
  [684] = {.lex_state = 193},
  [685] = {.lex_state = 193},
  [686] = {.lex_state = 203},
  [687] = {.lex_state = 38},
  [688] = {.lex_state = 203},
  [689] = {.lex_state = 38},
  [690] = {.lex_state = 178, .external_lex_state = 6},
  [691] = {.lex_state = 302},
  [692] = {.lex_state = 438, .external_lex_state = 6},
  [693] = {.lex_state = 36},
  [694] = {.lex_state = 302},
  [695] = {.lex_state = 302},
  [696] = {.lex_state = 38},
  [697] = {.lex_state = 38},
  [698] = {.lex_state = 38},
  [699] = {.lex_state = 302},
  [700] = {.lex_state = 38},
  [701] = {.lex_state = 178, .external_lex_state = 6},
  [702] = {.lex_state = 178, .external_lex_state = 6},
  [703] = {.lex_state = 438, .external_lex_state = 6},
  [704] = {.lex_state = 38, .external_lex_state = 3},
  [705] = {.lex_state = 178, .external_lex_state = 4},
  [706] = {.lex_state = 178, .external_lex_state = 4},
  [707] = {.lex_state = 178, .external_lex_state = 6},
  [708] = {.lex_state = 178, .external_lex_state = 6},
  [709] = {.lex_state = 178, .external_lex_state = 4},
  [710] = {.lex_state = 39, .external_lex_state = 2},
  [711] = {.lex_state = 39, .external_lex_state = 2},
  [712] = {.lex_state = 36},
  [713] = {.lex_state = 180},
  [714] = {.lex_state = 38},
  [715] = {.lex_state = 438, .external_lex_state = 6},
  [716] = {.lex_state = 467, .external_lex_state = 6},
  [717] = {.lex_state = 467, .external_lex_state = 6},
  [718] = {.lex_state = 203},
  [719] = {.lex_state = 438, .external_lex_state = 6},
  [720] = {.lex_state = 203},
  [721] = {.lex_state = 438, .external_lex_state = 6},
  [722] = {.lex_state = 178, .external_lex_state = 6},
  [723] = {.lex_state = 438, .external_lex_state = 6},
  [724] = {.lex_state = 438, .external_lex_state = 6},
  [725] = {.lex_state = 438, .external_lex_state = 6},
  [726] = {.lex_state = 438, .external_lex_state = 6},
  [727] = {.lex_state = 438, .external_lex_state = 6},
  [728] = {.lex_state = 178, .external_lex_state = 6},
  [729] = {.lex_state = 178, .external_lex_state = 6},
  [730] = {.lex_state = 178, .external_lex_state = 6},
  [731] = {.lex_state = 178, .external_lex_state = 6},
  [732] = {.lex_state = 178, .external_lex_state = 6},
  [733] = {.lex_state = 38},
  [734] = {.lex_state = 38},
  [735] = {.lex_state = 38},
  [736] = {.lex_state = 38},
  [737] = {.lex_state = 178, .external_lex_state = 6},
  [738] = {.lex_state = 38},
  [739] = {.lex_state = 302},
  [740] = {.lex_state = 36},
  [741] = {.lex_state = 302},
  [742] = {.lex_state = 178, .external_lex_state = 4},
  [743] = {.lex_state = 178, .external_lex_state = 4},
  [744] = {.lex_state = 438, .external_lex_state = 6},
  [745] = {.lex_state = 438, .external_lex_state = 6},
  [746] = {.lex_state = 438, .external_lex_state = 6},
  [747] = {.lex_state = 178, .external_lex_state = 6},
  [748] = {.lex_state = 178, .external_lex_state = 6},
  [749] = {.lex_state = 438, .external_lex_state = 6},
  [750] = {.lex_state = 178, .external_lex_state = 6},
  [751] = {.lex_state = 38},
  [752] = {.lex_state = 36},
  [753] = {.lex_state = 438, .external_lex_state = 6},
  [754] = {.lex_state = 438, .external_lex_state = 6},
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

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [4] = {
    [ts_external_token_display_math_shift] = true,
    [ts_external_token_inline_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [5] = {
    [ts_external_token_verb_delim] = true,
  },
  [6] = {
    [ts_external_token_end_group] = true,
  },
  [7] = {
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
    [sym__common] = STATE(47),
    [sym__math_mode_common] = STATE(47),
    [sym__math_mode] = STATE(47),
    [sym_math_mode] = STATE(39),
    [sym_parameter] = STATE(47),
    [sym_math_env] = STATE(47),
    [sym_tag] = STATE(47),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(47),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(47),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(47),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(47),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(47),
    [sym_opt_math_group] = STATE(47),
    [sym_token] = STATE(47),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(47),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_math_shift] = ACTIONS(35),
    [sym_alignment_tab] = ACTIONS(37),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(37),
    [sym_subscript] = ACTIONS(37),
    [sym_active_char] = ACTIONS(37),
    [sym_text] = ACTIONS(37),
  },
  [3] = {
    [sym__common] = STATE(47),
    [sym__math_mode_common] = STATE(47),
    [sym__math_mode] = STATE(47),
    [sym_math_mode] = STATE(50),
    [sym_parameter] = STATE(47),
    [sym_math_env] = STATE(47),
    [sym_tag] = STATE(47),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(47),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(47),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(47),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(47),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(47),
    [sym_opt_math_group] = STATE(47),
    [sym_token] = STATE(47),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(47),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_math_shift] = ACTIONS(41),
    [sym_alignment_tab] = ACTIONS(37),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(37),
    [sym_subscript] = ACTIONS(37),
    [sym_active_char] = ACTIONS(37),
    [sym_text] = ACTIONS(37),
  },
  [4] = {
    [sym_display_math_shift] = ACTIONS(43),
    [sym_inline_math_shift] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(43),
    [sym_begin_group] = ACTIONS(43),
    [sym_alignment_tab] = ACTIONS(43),
    [sym_parameter_char] = ACTIONS(43),
    [sym_superscript] = ACTIONS(43),
    [sym_subscript] = ACTIONS(43),
    [sym_active_char] = ACTIONS(43),
    [sym_text] = ACTIONS(43),
  },
  [5] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(51),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(63),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [anon_sym_makeatletter] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(79),
  },
  [6] = {
    [sym__common] = STATE(95),
    [sym__text_mode_common] = STATE(95),
    [sym_inline_verbatim] = STATE(95),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(95),
    [sym_text_mode_at_region] = STATE(95),
    [sym_parameter] = STATE(95),
    [sym_text_env] = STATE(95),
    [sym__display_math] = STATE(95),
    [sym_tex_display_math] = STATE(95),
    [sym_latex_display_math] = STATE(95),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(95),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(95),
    [sym_tex_inline_math] = STATE(95),
    [sym_latex_inline_math] = STATE(95),
    [sym_inline_math_env] = STATE(95),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(95),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(95),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(95),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(95),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(95),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(95),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(95),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(95),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(95),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(95),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(95),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(95),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(95),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(95),
    [sym_opt_text_group] = STATE(95),
    [sym_token] = STATE(95),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(95),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(89),
    [sym_alignment_tab] = ACTIONS(91),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(91),
    [sym_text] = ACTIONS(91),
  },
  [7] = {
    [sym_display_math_shift] = ACTIONS(97),
    [sym_inline_math_shift] = ACTIONS(97),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [9] = {
    [sym_verb_delim] = ACTIONS(101),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [11] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(100),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [12] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(109),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [13] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(110),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [14] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(111),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [15] = {
    [sym_verbatim_end] = STATE(113),
    [sym_verbatim_text] = STATE(114),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(117),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
    [sym__end_of_line] = ACTIONS(117),
  },
  [16] = {
    [sym__common] = STATE(121),
    [sym__text_mode_common] = STATE(121),
    [sym_inline_verbatim] = STATE(121),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(121),
    [sym_text_mode_at_region] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_text_env] = STATE(121),
    [sym__display_math] = STATE(121),
    [sym_tex_display_math] = STATE(121),
    [sym_latex_display_math] = STATE(121),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(121),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(121),
    [sym_tex_inline_math] = STATE(121),
    [sym_latex_inline_math] = STATE(121),
    [sym_inline_math_env] = STATE(121),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(121),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(121),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(119),
    [sym_end_token] = STATE(120),
    [sym_documentclass] = STATE(121),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(121),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(121),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(121),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(121),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(121),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(121),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(121),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(121),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(121),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(121),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(121),
    [sym_opt_text_group] = STATE(121),
    [sym_token] = STATE(121),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(121),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(123),
    [sym_inline_math_env_group] = STATE(124),
    [sym_verbatim_env_group] = STATE(125),
    [sym_simple_text_group] = STATE(126),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(123),
  },
  [18] = {
    [sym_simple_text_group] = STATE(128),
    [sym_opt_text_group] = STATE(129),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [19] = {
    [sym_simple_text_group] = STATE(131),
    [sym_opt_text_group] = STATE(132),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [20] = {
    [sym_text_group] = STATE(133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [21] = {
    [sym_text_group] = STATE(134),
    [sym_opt_text_group] = STATE(135),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [22] = {
    [sym_display_math_shift] = ACTIONS(127),
    [sym_inline_math_shift] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [23] = {
    [sym_escaped] = STATE(137),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(129),
  },
  [24] = {
    [sym_text_group] = STATE(138),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [25] = {
    [sym_text_group] = STATE(139),
    [sym_opt_text_group] = STATE(140),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [26] = {
    [sym_text_group] = STATE(141),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [27] = {
    [sym_text_group] = STATE(142),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [28] = {
    [sym_text_group] = STATE(143),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [29] = {
    [sym__common] = STATE(169),
    [sym__text_mode_common] = STATE(169),
    [sym_inline_verbatim] = STATE(169),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(169),
    [sym_text_mode_at] = STATE(149),
    [sym_parameter] = STATE(169),
    [sym_text_env_at] = STATE(169),
    [sym__display_math_at] = STATE(169),
    [sym_tex_display_math_at] = STATE(169),
    [sym_latex_display_math_at] = STATE(169),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(169),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(169),
    [sym_tex_inline_math_at] = STATE(169),
    [sym_latex_inline_math_at] = STATE(169),
    [sym_inline_math_env_at] = STATE(169),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(169),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(169),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(169),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(169),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(169),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(169),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(169),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(169),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(169),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(169),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(169),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(169),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(169),
    [sym_texttt_token] = STATE(165),
    [sym_makeatother] = STATE(166),
    [sym_makeatother_token] = STATE(167),
    [sym_text_group_at] = STATE(169),
    [sym_opt_text_group_at] = STATE(169),
    [sym_token_at] = STATE(169),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(169),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(137),
  },
  [30] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(141),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(141),
    [sym_active_char] = ACTIONS(141),
    [sym_text] = ACTIONS(141),
  },
  [31] = {
    [sym__common] = STATE(172),
    [sym__text_mode_common] = STATE(172),
    [sym_inline_verbatim] = STATE(172),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(172),
    [sym_text_mode_at_region] = STATE(172),
    [sym_parameter] = STATE(172),
    [sym_text_env] = STATE(172),
    [sym__display_math] = STATE(172),
    [sym_tex_display_math] = STATE(172),
    [sym_latex_display_math] = STATE(172),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(172),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(172),
    [sym_tex_inline_math] = STATE(172),
    [sym_latex_inline_math] = STATE(172),
    [sym_inline_math_env] = STATE(172),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(172),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(172),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(172),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(172),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(172),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(172),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(172),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(172),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(172),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(172),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(172),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(172),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(172),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(172),
    [sym_opt_text_group] = STATE(172),
    [sym_token] = STATE(172),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(171),
    [aux_sym_text_mode_repeat1] = STATE(172),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
  },
  [32] = {
    [sym__common] = STATE(173),
    [sym__text_mode_common] = STATE(173),
    [sym_inline_verbatim] = STATE(173),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(173),
    [sym_text_mode_at_region] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_env] = STATE(173),
    [sym__display_math] = STATE(173),
    [sym_tex_display_math] = STATE(173),
    [sym_latex_display_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(173),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(173),
    [sym_tex_inline_math] = STATE(173),
    [sym_latex_inline_math] = STATE(173),
    [sym_inline_math_env] = STATE(173),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(173),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(173),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(173),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(173),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(173),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(173),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(173),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(173),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(173),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(173),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(173),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(173),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(173),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(173),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(149),
    [sym_text] = ACTIONS(149),
  },
  [33] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
  },
  [34] = {
    [sym_display_math_shift] = ACTIONS(155),
    [sym_inline_math_shift] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(43),
    [sym_begin_group] = ACTIONS(43),
    [sym_math_shift] = ACTIONS(43),
    [sym_alignment_tab] = ACTIONS(43),
    [sym_parameter_char] = ACTIONS(43),
    [sym_superscript] = ACTIONS(43),
    [sym_subscript] = ACTIONS(43),
    [sym_active_char] = ACTIONS(43),
    [sym_text] = ACTIONS(43),
  },
  [36] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(159),
    [anon_sym_begin] = ACTIONS(53),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(161),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(163),
  },
  [37] = {
    [sym__common] = STATE(189),
    [sym__math_mode_common] = STATE(189),
    [sym__math_mode] = STATE(189),
    [sym_parameter] = STATE(189),
    [sym_math_env] = STATE(189),
    [sym_tag] = STATE(189),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(189),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(189),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(189),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(189),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(189),
    [sym_opt_math_group] = STATE(189),
    [sym_token] = STATE(189),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(189),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(171),
    [sym_active_char] = ACTIONS(171),
    [sym_text] = ACTIONS(171),
  },
  [38] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(175),
  },
  [39] = {
    [sym_implicit_math_shift] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(177),
  },
  [40] = {
    [sym_math_text_group] = STATE(194),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(179),
  },
  [41] = {
    [sym__common] = STATE(198),
    [sym__math_mode_common] = STATE(198),
    [sym__math_mode] = STATE(198),
    [sym_parameter] = STATE(198),
    [sym_math_env] = STATE(198),
    [sym_tag] = STATE(198),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(198),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(196),
    [sym_end_token] = STATE(197),
    [sym_include] = STATE(198),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(198),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(198),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(198),
    [sym_opt_math_group] = STATE(198),
    [sym_token] = STATE(198),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(198),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_text] = ACTIONS(183),
  },
  [42] = {
    [sym_simple_text_group] = STATE(200),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [43] = {
    [sym_text_group] = STATE(202),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(187),
  },
  [44] = {
    [sym_implicit_math_shift] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [45] = {
    [sym_escaped] = STATE(203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(129),
  },
  [46] = {
    [sym__common] = STATE(206),
    [sym__math_mode_common] = STATE(206),
    [sym__math_mode] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_math_env] = STATE(206),
    [sym_tag] = STATE(206),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(206),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(206),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(206),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(206),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(206),
    [sym_opt_math_group] = STATE(206),
    [sym_token] = STATE(206),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(205),
    [aux_sym_math_mode_repeat1] = STATE(206),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(191),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(191),
    [sym_subscript] = ACTIONS(191),
    [sym_active_char] = ACTIONS(191),
    [sym_text] = ACTIONS(191),
  },
  [47] = {
    [sym__common] = STATE(207),
    [sym__math_mode_common] = STATE(207),
    [sym__math_mode] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_math_env] = STATE(207),
    [sym_tag] = STATE(207),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(207),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(207),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(207),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(207),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(207),
    [sym_opt_math_group] = STATE(207),
    [sym_token] = STATE(207),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(207),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_math_shift] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [48] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(151),
    [sym_number] = ACTIONS(197),
  },
  [49] = {
    [sym_display_math_shift] = ACTIONS(199),
    [sym_inline_math_shift] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [50] = {
    [sym_implicit_math_shift] = ACTIONS(201),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(201),
  },
  [51] = {
    [sym_verb_delim] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [52] = {
    [sym__whitespace] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_text] = ACTIONS(209),
  },
  [53] = {
    [sym__whitespace] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(215),
  },
  [54] = {
    [sym_display_math_shift] = ACTIONS(217),
    [sym_inline_math_shift] = ACTIONS(217),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [55] = {
    [sym__whitespace] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(221),
  },
  [56] = {
    [sym__whitespace] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(225),
  },
  [57] = {
    [sym__whitespace] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(229),
  },
  [58] = {
    [sym__whitespace] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(233),
  },
  [59] = {
    [sym__whitespace] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(239),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(237),
  },
  [60] = {
    [sym_display_math_shift] = ACTIONS(241),
    [sym_inline_math_shift] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__whitespace] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(245),
  },
  [61] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(247),
  },
  [62] = {
    [sym__whitespace] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(251),
  },
  [63] = {
    [sym__whitespace] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(255),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(255),
  },
  [64] = {
    [sym__whitespace] = ACTIONS(257),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(259),
  },
  [65] = {
    [sym__whitespace] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(263),
  },
  [66] = {
    [sym__whitespace] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(267),
  },
  [67] = {
    [sym__whitespace] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(271),
    [sym_begin_group] = ACTIONS(271),
    [sym_math_shift] = ACTIONS(271),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(273),
  },
  [68] = {
    [sym_display_math_shift] = ACTIONS(275),
    [sym_inline_math_shift] = ACTIONS(275),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym__whitespace] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(279),
  },
  [69] = {
    [sym__common] = STATE(47),
    [sym__math_mode_common] = STATE(47),
    [sym__math_mode] = STATE(47),
    [sym_math_mode] = STATE(228),
    [sym_parameter] = STATE(47),
    [sym_math_env] = STATE(47),
    [sym_tag] = STATE(47),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(47),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(47),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(47),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(47),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(47),
    [sym_opt_math_group] = STATE(47),
    [sym_token] = STATE(47),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(47),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_math_shift] = ACTIONS(283),
    [sym_alignment_tab] = ACTIONS(37),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(37),
    [sym_subscript] = ACTIONS(37),
    [sym_active_char] = ACTIONS(37),
    [sym_text] = ACTIONS(37),
  },
  [70] = {
    [sym__common] = STATE(47),
    [sym__math_mode_common] = STATE(47),
    [sym__math_mode] = STATE(47),
    [sym_math_mode] = STATE(230),
    [sym_parameter] = STATE(47),
    [sym_math_env] = STATE(47),
    [sym_tag] = STATE(47),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(47),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(47),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(47),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(47),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(47),
    [sym_opt_math_group] = STATE(47),
    [sym_token] = STATE(47),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(47),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(31),
    [sym_begin_group] = ACTIONS(33),
    [sym_math_shift] = ACTIONS(285),
    [sym_alignment_tab] = ACTIONS(37),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(37),
    [sym_subscript] = ACTIONS(37),
    [sym_active_char] = ACTIONS(37),
    [sym_text] = ACTIONS(37),
  },
  [71] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(287),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(289),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [anon_sym_makeatletter] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(291),
  },
  [72] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym_inline_verbatim] = STATE(235),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(235),
    [sym_text_mode_at_region] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env] = STATE(235),
    [sym__display_math] = STATE(235),
    [sym_tex_display_math] = STATE(235),
    [sym_latex_display_math] = STATE(235),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(235),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(235),
    [sym_tex_inline_math] = STATE(235),
    [sym_latex_inline_math] = STATE(235),
    [sym_inline_math_env] = STATE(235),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(235),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(235),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(235),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(235),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(235),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(235),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(235),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(235),
    [sym_opt_text_group] = STATE(235),
    [sym_token] = STATE(235),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [73] = {
    [sym_display_math_shift] = ACTIONS(297),
    [sym_inline_math_shift] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [74] = {
    [sym_display_math_shift] = ACTIONS(97),
    [sym_inline_math_shift] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_end_group] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
  },
  [75] = {
    [sym_verb_delim] = ACTIONS(299),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [76] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(237),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [77] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(238),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [78] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(239),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [79] = {
    [sym__common] = STATE(107),
    [sym__math_mode_common] = STATE(107),
    [sym__math_mode] = STATE(107),
    [sym_math_mode] = STATE(240),
    [sym_parameter] = STATE(107),
    [sym_math_env] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(107),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(107),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(107),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(107),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(107),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [80] = {
    [sym_verbatim_end] = STATE(241),
    [sym_verbatim_text] = STATE(242),
    [sym_end_token] = STATE(243),
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(117),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
    [sym__end_of_line] = ACTIONS(117),
  },
  [81] = {
    [sym__common] = STATE(246),
    [sym__text_mode_common] = STATE(246),
    [sym_inline_verbatim] = STATE(246),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(246),
    [sym_text_mode_at_region] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_text_env] = STATE(246),
    [sym__display_math] = STATE(246),
    [sym_tex_display_math] = STATE(246),
    [sym_latex_display_math] = STATE(246),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(246),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(246),
    [sym_tex_inline_math] = STATE(246),
    [sym_latex_inline_math] = STATE(246),
    [sym_inline_math_env] = STATE(246),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(246),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(244),
    [sym_end_token] = STATE(245),
    [sym_documentclass] = STATE(246),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(246),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(246),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(246),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(246),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(246),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(246),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(246),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(246),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(246),
    [sym_opt_text_group] = STATE(246),
    [sym_token] = STATE(246),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(301),
    [sym_text] = ACTIONS(301),
  },
  [82] = {
    [sym_simple_text_group] = STATE(248),
    [sym_opt_text_group] = STATE(249),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [83] = {
    [sym_simple_text_group] = STATE(250),
    [sym_opt_text_group] = STATE(251),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [84] = {
    [sym_text_group] = STATE(252),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [85] = {
    [sym_text_group] = STATE(253),
    [sym_opt_text_group] = STATE(254),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [86] = {
    [sym_display_math_shift] = ACTIONS(127),
    [sym_inline_math_shift] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [87] = {
    [sym_escaped] = STATE(255),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(129),
  },
  [88] = {
    [sym_text_group] = STATE(256),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [89] = {
    [sym_text_group] = STATE(257),
    [sym_opt_text_group] = STATE(258),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [90] = {
    [sym_text_group] = STATE(259),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [91] = {
    [sym_text_group] = STATE(260),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [92] = {
    [sym_text_group] = STATE(261),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [93] = {
    [sym__common] = STATE(169),
    [sym__text_mode_common] = STATE(169),
    [sym_inline_verbatim] = STATE(169),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(169),
    [sym_text_mode_at] = STATE(263),
    [sym_parameter] = STATE(169),
    [sym_text_env_at] = STATE(169),
    [sym__display_math_at] = STATE(169),
    [sym_tex_display_math_at] = STATE(169),
    [sym_latex_display_math_at] = STATE(169),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(169),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(169),
    [sym_tex_inline_math_at] = STATE(169),
    [sym_latex_inline_math_at] = STATE(169),
    [sym_inline_math_env_at] = STATE(169),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(169),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(169),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(169),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(169),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(169),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(169),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(169),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(169),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(169),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(169),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(169),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(169),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(169),
    [sym_texttt_token] = STATE(165),
    [sym_makeatother] = STATE(264),
    [sym_makeatother_token] = STATE(265),
    [sym_text_group_at] = STATE(169),
    [sym_opt_text_group_at] = STATE(169),
    [sym_token_at] = STATE(169),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(169),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(137),
  },
  [94] = {
    [sym__common] = STATE(268),
    [sym__text_mode_common] = STATE(268),
    [sym_inline_verbatim] = STATE(268),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(268),
    [sym_text_mode_at_region] = STATE(268),
    [sym_parameter] = STATE(268),
    [sym_text_env] = STATE(268),
    [sym__display_math] = STATE(268),
    [sym_tex_display_math] = STATE(268),
    [sym_latex_display_math] = STATE(268),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(268),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(268),
    [sym_tex_inline_math] = STATE(268),
    [sym_latex_inline_math] = STATE(268),
    [sym_inline_math_env] = STATE(268),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(268),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(268),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(268),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(268),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(268),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(268),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(268),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(268),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(268),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(268),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(268),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(268),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(268),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(268),
    [sym_opt_text_group] = STATE(268),
    [sym_token] = STATE(268),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(267),
    [aux_sym_text_mode_repeat1] = STATE(268),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(309),
    [sym_text] = ACTIONS(309),
  },
  [95] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(311),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [96] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(151),
    [sym_number] = ACTIONS(315),
  },
  [97] = {
    [sym_verb_body] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [98] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(323),
  },
  [99] = {
    [sym__common] = STATE(277),
    [sym__math_mode_common] = STATE(277),
    [sym__math_mode] = STATE(277),
    [sym_parameter] = STATE(277),
    [sym_math_env] = STATE(277),
    [sym_tag] = STATE(277),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(277),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(277),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(277),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(277),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(277),
    [sym_opt_math_group] = STATE(277),
    [sym_token] = STATE(277),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(277),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [100] = {
    [sym_end_display_math] = STATE(279),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(329),
  },
  [101] = {
    [sym_math_text_group] = STATE(281),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(331),
  },
  [102] = {
    [sym__common] = STATE(284),
    [sym__math_mode_common] = STATE(284),
    [sym__math_mode] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_math_env] = STATE(284),
    [sym_tag] = STATE(284),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(282),
    [sym_end_token] = STATE(283),
    [sym_include] = STATE(284),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(284),
    [sym_opt_math_group] = STATE(284),
    [sym_token] = STATE(284),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [103] = {
    [sym_text_group] = STATE(286),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(335),
  },
  [104] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [105] = {
    [sym_escaped] = STATE(287),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(129),
  },
  [106] = {
    [sym__common] = STATE(290),
    [sym__math_mode_common] = STATE(290),
    [sym__math_mode] = STATE(290),
    [sym_parameter] = STATE(290),
    [sym_math_env] = STATE(290),
    [sym_tag] = STATE(290),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(290),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(290),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(290),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(290),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(290),
    [sym_opt_math_group] = STATE(290),
    [sym_token] = STATE(290),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(289),
    [aux_sym_math_mode_repeat1] = STATE(290),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [107] = {
    [sym__common] = STATE(291),
    [sym__math_mode_common] = STATE(291),
    [sym__math_mode] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_math_env] = STATE(291),
    [sym_tag] = STATE(291),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(291),
    [sym_opt_math_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(193),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [108] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(151),
    [sym_number] = ACTIONS(343),
  },
  [109] = {
    [sym_end_inline_math] = STATE(294),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(345),
  },
  [110] = {
    [sym_display_math_end] = STATE(295),
    [sym_end_token] = STATE(296),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [111] = {
    [sym_inline_math_end] = STATE(297),
    [sym_end_token] = STATE(298),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [112] = {
    [anon_sym_end] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [113] = {
    [sym_display_math_shift] = ACTIONS(349),
    [sym_inline_math_shift] = ACTIONS(349),
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_text] = ACTIONS(349),
  },
  [114] = {
    [sym_verbatim_end] = STATE(300),
    [sym_end_token] = STATE(115),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [115] = {
    [sym_verbatim_env_group] = STATE(302),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(351),
  },
  [116] = {
    [aux_sym_verbatim_text_repeat1] = STATE(304),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(355),
  },
  [117] = {
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(305),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(357),
    [sym__end_of_line] = ACTIONS(359),
  },
  [118] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(51),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(361),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(63),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [anon_sym_makeatletter] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(79),
  },
  [119] = {
    [sym_display_math_shift] = ACTIONS(363),
    [sym_inline_math_shift] = ACTIONS(363),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [120] = {
    [sym_simple_text_group] = STATE(306),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [121] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(308),
    [sym_text_mode_at_region] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env] = STATE(308),
    [sym__display_math] = STATE(308),
    [sym_tex_display_math] = STATE(308),
    [sym_latex_display_math] = STATE(308),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(308),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(308),
    [sym_tex_inline_math] = STATE(308),
    [sym_latex_inline_math] = STATE(308),
    [sym_inline_math_env] = STATE(308),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(307),
    [sym_end_token] = STATE(120),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(308),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(308),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(308),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(308),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(308),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(308),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(308),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(308),
    [sym_opt_text_group] = STATE(308),
    [sym_token] = STATE(308),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [122] = {
    [sym_display_math_env_name] = ACTIONS(367),
    [sym_inline_math_env_name] = ACTIONS(369),
    [sym_verbatim_env_name] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(373),
  },
  [123] = {
    [sym_text_group] = STATE(315),
    [sym_opt_text_group] = STATE(316),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(377),
  },
  [124] = {
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [125] = {
    [sym_text_group] = STATE(318),
    [sym_opt_text_group] = STATE(319),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(381),
  },
  [126] = {
    [sym_display_math_shift] = ACTIONS(383),
    [sym_inline_math_shift] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [127] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(385),
  },
  [128] = {
    [sym_display_math_shift] = ACTIONS(387),
    [sym_inline_math_shift] = ACTIONS(387),
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [129] = {
    [sym_simple_text_group] = STATE(321),
    [sym__whitespace] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [130] = {
    [sym__common] = STATE(324),
    [sym__text_mode_common] = STATE(324),
    [sym_inline_verbatim] = STATE(324),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(324),
    [sym_text_mode_at_region] = STATE(324),
    [sym_parameter] = STATE(324),
    [sym_text_env] = STATE(324),
    [sym__display_math] = STATE(324),
    [sym_tex_display_math] = STATE(324),
    [sym_latex_display_math] = STATE(324),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(324),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(324),
    [sym_tex_inline_math] = STATE(324),
    [sym_latex_inline_math] = STATE(324),
    [sym_inline_math_env] = STATE(324),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(324),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(324),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(324),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(324),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(324),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(324),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(324),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(324),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(324),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(324),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(324),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(324),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(324),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(324),
    [sym_opt_text_group] = STATE(324),
    [sym_token] = STATE(324),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(323),
    [aux_sym_text_mode_repeat1] = STATE(324),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(393),
    [sym_text] = ACTIONS(393),
  },
  [131] = {
    [sym_display_math_shift] = ACTIONS(395),
    [sym_inline_math_shift] = ACTIONS(395),
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [132] = {
    [sym_simple_text_group] = STATE(326),
    [sym__whitespace] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [133] = {
    [sym_display_math_shift] = ACTIONS(399),
    [sym_inline_math_shift] = ACTIONS(399),
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [134] = {
    [sym_display_math_shift] = ACTIONS(401),
    [sym_inline_math_shift] = ACTIONS(401),
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [135] = {
    [sym_text_group] = STATE(328),
    [sym__whitespace] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [136] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(405),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [137] = {
    [anon_sym_EQ] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [138] = {
    [sym_display_math_shift] = ACTIONS(409),
    [sym_inline_math_shift] = ACTIONS(409),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
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
  [139] = {
    [sym_display_math_shift] = ACTIONS(411),
    [sym_inline_math_shift] = ACTIONS(411),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(411),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [sym_text] = ACTIONS(411),
  },
  [140] = {
    [sym_text_group] = STATE(332),
    [sym__whitespace] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [141] = {
    [sym_display_math_shift] = ACTIONS(415),
    [sym_inline_math_shift] = ACTIONS(415),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [142] = {
    [sym_display_math_shift] = ACTIONS(417),
    [sym_inline_math_shift] = ACTIONS(417),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(417),
    [sym_superscript] = ACTIONS(417),
    [sym_subscript] = ACTIONS(417),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [143] = {
    [sym_display_math_shift] = ACTIONS(419),
    [sym_inline_math_shift] = ACTIONS(419),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(419),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [144] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [anon_sym_makeatother] = ACTIONS(421),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [145] = {
    [sym__common] = STATE(357),
    [sym__text_mode_common] = STATE(357),
    [sym_inline_verbatim] = STATE(357),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(357),
    [sym_parameter] = STATE(357),
    [sym_text_env_at] = STATE(357),
    [sym__display_math_at] = STATE(357),
    [sym_tex_display_math_at] = STATE(357),
    [sym_latex_display_math_at] = STATE(357),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(357),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(357),
    [sym_tex_inline_math_at] = STATE(357),
    [sym_latex_inline_math_at] = STATE(357),
    [sym_inline_math_env_at] = STATE(357),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(357),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(357),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(357),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(357),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(357),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(357),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(357),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(357),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(357),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(357),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(357),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(357),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(357),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(357),
    [sym_opt_text_group_at] = STATE(357),
    [sym_token_at] = STATE(357),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(357),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(429),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [146] = {
    [sym__common] = STATE(365),
    [sym__math_mode_common] = STATE(365),
    [sym__math_mode_at] = STATE(365),
    [sym_math_mode_at] = STATE(361),
    [sym_parameter] = STATE(365),
    [sym_math_env_at] = STATE(365),
    [sym_tag_at] = STATE(365),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(365),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(365),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(365),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(365),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(365),
    [sym_opt_math_group_at] = STATE(365),
    [sym_token_at] = STATE(365),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(365),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_math_shift] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
  },
  [148] = {
    [sym_verb_delim] = ACTIONS(445),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [149] = {
    [sym_makeatother] = STATE(368),
    [sym_makeatother_token] = STATE(167),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(447),
  },
  [150] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(369),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [151] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(371),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [152] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(372),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [153] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(373),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [154] = {
    [sym_verbatim_end] = STATE(374),
    [sym_verbatim_text] = STATE(375),
    [sym_end_token] = STATE(376),
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(117),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
    [sym__end_of_line] = ACTIONS(117),
  },
  [155] = {
    [sym__common] = STATE(379),
    [sym__text_mode_common] = STATE(379),
    [sym_inline_verbatim] = STATE(379),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(379),
    [sym_parameter] = STATE(379),
    [sym_text_env_at] = STATE(379),
    [sym__display_math_at] = STATE(379),
    [sym_tex_display_math_at] = STATE(379),
    [sym_latex_display_math_at] = STATE(379),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(379),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(379),
    [sym_tex_inline_math_at] = STATE(379),
    [sym_latex_inline_math_at] = STATE(379),
    [sym_inline_math_env_at] = STATE(379),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(379),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(379),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_end] = STATE(378),
    [sym_end_token] = STATE(283),
    [sym_documentclass] = STATE(379),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(379),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(379),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(379),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(379),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(379),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(379),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(379),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(379),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(379),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(379),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(379),
    [sym_opt_text_group_at] = STATE(379),
    [sym_token_at] = STATE(379),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(379),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(453),
    [sym_text] = ACTIONS(453),
  },
  [156] = {
    [sym_display_math_env_group] = STATE(381),
    [sym_inline_math_env_group] = STATE(124),
    [sym_verbatim_env_group] = STATE(125),
    [sym_simple_text_group] = STATE(200),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(455),
  },
  [157] = {
    [sym_simple_text_group] = STATE(382),
    [sym_opt_text_group] = STATE(383),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [158] = {
    [sym_simple_text_group] = STATE(384),
    [sym_opt_text_group] = STATE(385),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [159] = {
    [sym_text_group_at] = STATE(386),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [160] = {
    [sym_text_group_at] = STATE(387),
    [sym_opt_text_group_at] = STATE(388),
    [sym_begin_opt] = STATE(389),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [161] = {
    [sym_text_group_at] = STATE(390),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [162] = {
    [sym_text_group_at] = STATE(391),
    [sym_opt_text_group_at] = STATE(392),
    [sym_begin_opt] = STATE(389),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [163] = {
    [sym_text_group_at] = STATE(393),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [164] = {
    [sym_text_group_at] = STATE(394),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [165] = {
    [sym_text_group_at] = STATE(395),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [166] = {
    [sym_display_math_shift] = ACTIONS(457),
    [sym_inline_math_shift] = ACTIONS(457),
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [167] = {
    [sym_display_math_shift] = ACTIONS(459),
    [sym_inline_math_shift] = ACTIONS(459),
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(459),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(459),
    [sym_parameter_char] = ACTIONS(459),
    [sym_superscript] = ACTIONS(459),
    [sym_subscript] = ACTIONS(459),
    [sym_active_char] = ACTIONS(459),
    [sym_text] = ACTIONS(459),
  },
  [168] = {
    [sym__common] = STATE(398),
    [sym__text_mode_common] = STATE(398),
    [sym_inline_verbatim] = STATE(398),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(398),
    [sym_parameter] = STATE(398),
    [sym_text_env_at] = STATE(398),
    [sym__display_math_at] = STATE(398),
    [sym_tex_display_math_at] = STATE(398),
    [sym_latex_display_math_at] = STATE(398),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(398),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(398),
    [sym_tex_inline_math_at] = STATE(398),
    [sym_latex_inline_math_at] = STATE(398),
    [sym_inline_math_env_at] = STATE(398),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(398),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(398),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(398),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(398),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(398),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(398),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(398),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(398),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(398),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(398),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(398),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(398),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(398),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(398),
    [sym_opt_text_group_at] = STATE(398),
    [sym_token_at] = STATE(398),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(397),
    [aux_sym_text_mode_at_repeat1] = STATE(398),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(463),
    [sym_text] = ACTIONS(463),
  },
  [169] = {
    [sym__common] = STATE(399),
    [sym__text_mode_common] = STATE(399),
    [sym_inline_verbatim] = STATE(399),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(399),
    [sym_parameter] = STATE(399),
    [sym_text_env_at] = STATE(399),
    [sym__display_math_at] = STATE(399),
    [sym_tex_display_math_at] = STATE(399),
    [sym_latex_display_math_at] = STATE(399),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(399),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(399),
    [sym_tex_inline_math_at] = STATE(399),
    [sym_latex_inline_math_at] = STATE(399),
    [sym_inline_math_env_at] = STATE(399),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(399),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(399),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(399),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(399),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(399),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(399),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(399),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(399),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(399),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(399),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(399),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(399),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(399),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(399),
    [sym_opt_text_group_at] = STATE(399),
    [sym_token_at] = STATE(399),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(399),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(467),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(467),
    [sym_text] = ACTIONS(467),
  },
  [170] = {
    [sym_display_math_shift] = ACTIONS(469),
    [sym_inline_math_shift] = ACTIONS(469),
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(469),
    [sym_begin_group] = ACTIONS(469),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [171] = {
    [sym_display_math_shift] = ACTIONS(471),
    [sym_inline_math_shift] = ACTIONS(471),
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(471),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(471),
    [sym_superscript] = ACTIONS(471),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(471),
    [sym_text] = ACTIONS(471),
  },
  [172] = {
    [sym__common] = STATE(401),
    [sym__text_mode_common] = STATE(401),
    [sym_inline_verbatim] = STATE(401),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(401),
    [sym_text_mode_at_region] = STATE(401),
    [sym_parameter] = STATE(401),
    [sym_text_env] = STATE(401),
    [sym__display_math] = STATE(401),
    [sym_tex_display_math] = STATE(401),
    [sym_latex_display_math] = STATE(401),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(401),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(401),
    [sym_tex_inline_math] = STATE(401),
    [sym_latex_inline_math] = STATE(401),
    [sym_inline_math_env] = STATE(401),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(401),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(401),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(401),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(401),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(401),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(401),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(401),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(401),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(401),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(401),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(401),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(401),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(401),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(401),
    [sym_opt_text_group] = STATE(401),
    [sym_token] = STATE(401),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(400),
    [aux_sym_text_mode_repeat1] = STATE(401),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(473),
    [sym_text] = ACTIONS(473),
  },
  [173] = {
    [sym__common] = STATE(173),
    [sym__text_mode_common] = STATE(173),
    [sym_inline_verbatim] = STATE(173),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(173),
    [sym_text_mode_at_region] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_env] = STATE(173),
    [sym__display_math] = STATE(173),
    [sym_tex_display_math] = STATE(173),
    [sym_latex_display_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(173),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(173),
    [sym_tex_inline_math] = STATE(173),
    [sym_latex_inline_math] = STATE(173),
    [sym_inline_math_env] = STATE(173),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(173),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(173),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(173),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(173),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(173),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(173),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(173),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(173),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(173),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(173),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(173),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(173),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(173),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(173),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(475),
    [sym_inline_math_shift] = ACTIONS(478),
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(492),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(492),
    [sym_text] = ACTIONS(492),
  },
  [174] = {
    [sym_display_math_shift] = ACTIONS(501),
    [sym_inline_math_shift] = ACTIONS(501),
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [175] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(503),
    [sym_number] = ACTIONS(506),
  },
  [176] = {
    [sym__whitespace] = ACTIONS(508),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(510),
  },
  [177] = {
    [sym_implicit_math_shift] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [178] = {
    [sym_implicit_math_shift] = ACTIONS(241),
    [sym__whitespace] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(245),
  },
  [179] = {
    [sym_implicit_math_shift] = ACTIONS(275),
    [sym__whitespace] = ACTIONS(514),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_math_shift] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(279),
  },
  [180] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(516),
    [anon_sym_begin] = ACTIONS(53),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(518),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(520),
  },
  [181] = {
    [sym__common] = STATE(409),
    [sym__math_mode_common] = STATE(409),
    [sym__math_mode] = STATE(409),
    [sym_parameter] = STATE(409),
    [sym_math_env] = STATE(409),
    [sym_tag] = STATE(409),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(409),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(409),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(409),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(409),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(409),
    [sym_opt_math_group] = STATE(409),
    [sym_token] = STATE(409),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(409),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(522),
    [sym_alignment_tab] = ACTIONS(524),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(524),
    [sym_subscript] = ACTIONS(524),
    [sym_active_char] = ACTIONS(524),
    [sym_text] = ACTIONS(524),
  },
  [182] = {
    [sym_implicit_math_shift] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_math_shift] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_text] = ACTIONS(526),
  },
  [183] = {
    [sym_math_text_group] = STATE(411),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(528),
  },
  [184] = {
    [sym__common] = STATE(414),
    [sym__math_mode_common] = STATE(414),
    [sym__math_mode] = STATE(414),
    [sym_parameter] = STATE(414),
    [sym_math_env] = STATE(414),
    [sym_tag] = STATE(414),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(414),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(412),
    [sym_end_token] = STATE(413),
    [sym_include] = STATE(414),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(414),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(414),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(414),
    [sym_opt_math_group] = STATE(414),
    [sym_token] = STATE(414),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(414),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_text] = ACTIONS(530),
  },
  [185] = {
    [sym_text_group] = STATE(416),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(532),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [187] = {
    [sym_escaped] = STATE(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(129),
  },
  [188] = {
    [sym__common] = STATE(420),
    [sym__math_mode_common] = STATE(420),
    [sym__math_mode] = STATE(420),
    [sym_parameter] = STATE(420),
    [sym_math_env] = STATE(420),
    [sym_tag] = STATE(420),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(420),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(420),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(420),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(420),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(420),
    [sym_opt_math_group] = STATE(420),
    [sym_token] = STATE(420),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(419),
    [aux_sym_math_mode_repeat1] = STATE(420),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(536),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(536),
    [sym_text] = ACTIONS(536),
  },
  [189] = {
    [sym__common] = STATE(422),
    [sym__math_mode_common] = STATE(422),
    [sym__math_mode] = STATE(422),
    [sym_parameter] = STATE(422),
    [sym_math_env] = STATE(422),
    [sym_tag] = STATE(422),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(422),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(422),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(422),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(422),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(422),
    [sym_opt_math_group] = STATE(422),
    [sym_token] = STATE(422),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(422),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_text] = ACTIONS(540),
  },
  [190] = {
    [aux_sym_parameter_repeat1] = STATE(175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(151),
    [sym_number] = ACTIONS(542),
  },
  [191] = {
    [sym_display_math_shift] = ACTIONS(544),
    [sym_inline_math_shift] = ACTIONS(544),
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(544),
    [sym_begin_group] = ACTIONS(544),
    [sym_alignment_tab] = ACTIONS(544),
    [sym_parameter_char] = ACTIONS(544),
    [sym_superscript] = ACTIONS(544),
    [sym_subscript] = ACTIONS(544),
    [sym_active_char] = ACTIONS(544),
    [sym_text] = ACTIONS(544),
  },
  [192] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(546),
  },
  [193] = {
    [sym__common] = STATE(427),
    [sym__text_mode_common] = STATE(427),
    [sym_inline_verbatim] = STATE(427),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(427),
    [sym_text_mode] = STATE(426),
    [sym_text_mode_at_region] = STATE(427),
    [sym_parameter] = STATE(427),
    [sym_text_env] = STATE(427),
    [sym__display_math] = STATE(427),
    [sym_tex_display_math] = STATE(427),
    [sym_latex_display_math] = STATE(427),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(427),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(427),
    [sym_tex_inline_math] = STATE(427),
    [sym_latex_inline_math] = STATE(427),
    [sym_inline_math_env] = STATE(427),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(427),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(427),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(427),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(427),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(427),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(427),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(427),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(427),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(427),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(427),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(427),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(427),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(427),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(427),
    [sym_opt_text_group] = STATE(427),
    [sym_token] = STATE(427),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(427),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(548),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(550),
    [sym_text] = ACTIONS(550),
  },
  [194] = {
    [sym_implicit_math_shift] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_math_shift] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [195] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(361),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name] = ACTIONS(323),
  },
  [196] = {
    [sym_implicit_math_shift] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(554),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_math_shift] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [197] = {
    [sym_simple_text_group] = STATE(429),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(556),
  },
  [198] = {
    [sym__common] = STATE(291),
    [sym__math_mode_common] = STATE(291),
    [sym__math_mode] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_math_env] = STATE(291),
    [sym_tag] = STATE(291),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(430),
    [sym_end_token] = STATE(197),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(291),
    [sym_opt_math_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(558),
  },
  [200] = {
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_math_shift] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [201] = {
    [sym__common] = STATE(433),
    [sym__text_mode_common] = STATE(433),
    [sym_inline_verbatim] = STATE(433),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(433),
    [sym_text_mode_at_region] = STATE(433),
    [sym_parameter] = STATE(433),
    [sym_text_env] = STATE(433),
    [sym__display_math] = STATE(433),
    [sym_tex_display_math] = STATE(433),
    [sym_latex_display_math] = STATE(433),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(433),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(433),
    [sym_tex_inline_math] = STATE(433),
    [sym_latex_inline_math] = STATE(433),
    [sym_inline_math_env] = STATE(433),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(433),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(433),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(433),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(433),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(433),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(433),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(433),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(433),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(433),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(433),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(433),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(433),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(433),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(433),
    [sym_opt_text_group] = STATE(433),
    [sym_token] = STATE(433),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(433),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(560),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(562),
    [sym_text] = ACTIONS(562),
  },
  [202] = {
    [sym_implicit_math_shift] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [203] = {
    [anon_sym_EQ] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [204] = {
    [sym_implicit_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(469),
    [sym_begin_group] = ACTIONS(469),
    [sym_math_shift] = ACTIONS(469),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [205] = {
    [sym_implicit_math_shift] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_math_shift] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [206] = {
    [sym__common] = STATE(436),
    [sym__math_mode_common] = STATE(436),
    [sym__math_mode] = STATE(436),
    [sym_parameter] = STATE(436),
    [sym_math_env] = STATE(436),
    [sym_tag] = STATE(436),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(436),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(436),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(436),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(436),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(436),
    [sym_opt_math_group] = STATE(436),
    [sym_token] = STATE(436),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(435),
    [aux_sym_math_mode_repeat1] = STATE(436),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_text] = ACTIONS(568),
  },
  [207] = {
    [sym__common] = STATE(207),
    [sym__math_mode_common] = STATE(207),
    [sym__math_mode] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_math_env] = STATE(207),
    [sym_tag] = STATE(207),
    [sym_tag_token] = STATE(40),
    [sym_escaped] = STATE(207),
    [sym_begin] = STATE(41),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(207),
    [sym_include_token] = STATE(43),
    [sym_storage] = STATE(207),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(207),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(207),
    [sym_opt_math_group] = STATE(207),
    [sym_token] = STATE(207),
    [sym_begin_opt] = STATE(46),
    [aux_sym_math_mode_repeat1] = STATE(207),
    [aux_sym_parameter_repeat1] = STATE(48),
    [sym_implicit_math_shift] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(578),
    [sym_math_shift] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(584),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(581),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [208] = {
    [sym_implicit_math_shift] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_math_shift] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [209] = {
    [sym_display_math_shift] = ACTIONS(587),
    [sym_inline_math_shift] = ACTIONS(587),
    [ts_builtin_sym_end] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(587),
    [sym_begin_group] = ACTIONS(587),
    [sym_alignment_tab] = ACTIONS(587),
    [sym_parameter_char] = ACTIONS(587),
    [sym_superscript] = ACTIONS(587),
    [sym_subscript] = ACTIONS(587),
    [sym_active_char] = ACTIONS(587),
    [sym_text] = ACTIONS(587),
  },
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(589),
    [sym_parameter_char] = ACTIONS(589),
    [sym_superscript] = ACTIONS(589),
    [sym_subscript] = ACTIONS(589),
    [sym_active_char] = ACTIONS(589),
    [sym_text] = ACTIONS(589),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(591),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(591),
    [sym_begin_group] = ACTIONS(591),
    [sym_alignment_tab] = ACTIONS(591),
    [sym_parameter_char] = ACTIONS(591),
    [sym_superscript] = ACTIONS(591),
    [sym_subscript] = ACTIONS(591),
    [sym_active_char] = ACTIONS(591),
    [sym_text] = ACTIONS(591),
  },
  [212] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(593),
  },
  [213] = {
    [anon_sym_LBRACK] = ACTIONS(595),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(595),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(597),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(597),
  },
  [215] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(599),
  },
  [216] = {
    [sym__whitespace] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(605),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(603),
  },
  [217] = {
    [sym__whitespace] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(603),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(603),
  },
  [218] = {
    [sym_display_math_shift] = ACTIONS(607),
    [sym_inline_math_shift] = ACTIONS(607),
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(607),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(607),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_text] = ACTIONS(607),
  },
  [219] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(609),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(611),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(611),
  },
  [221] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(613),
  },
  [222] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(615),
  },
  [223] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(617),
  },
  [224] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(619),
    [sym_begin_group] = ACTIONS(619),
    [sym_math_shift] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(619),
    [sym_parameter_char] = ACTIONS(619),
    [sym_superscript] = ACTIONS(619),
    [sym_subscript] = ACTIONS(619),
    [sym_active_char] = ACTIONS(619),
    [sym_text] = ACTIONS(619),
  },
  [225] = {
    [sym_display_math_shift] = ACTIONS(621),
    [sym_inline_math_shift] = ACTIONS(621),
    [ts_builtin_sym_end] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [226] = {
    [sym_display_math_shift] = ACTIONS(155),
    [sym_inline_math_shift] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_end_group] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [227] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(623),
  },
  [228] = {
    [sym_implicit_math_shift] = ACTIONS(623),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(625),
  },
  [229] = {
    [sym_display_math_shift] = ACTIONS(199),
    [sym_inline_math_shift] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_end_group] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [230] = {
    [sym_implicit_math_shift] = ACTIONS(627),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(627),
  },
  [231] = {
    [sym_display_math_shift] = ACTIONS(217),
    [sym_inline_math_shift] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_end_group] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [232] = {
    [sym_display_math_shift] = ACTIONS(241),
    [sym_inline_math_shift] = ACTIONS(241),
    [sym__whitespace] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(245),
  },
  [233] = {
    [sym_display_math_shift] = ACTIONS(275),
    [sym_inline_math_shift] = ACTIONS(275),
    [sym__whitespace] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_end_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(279),
  },
  [234] = {
    [sym_display_math_shift] = ACTIONS(297),
    [sym_inline_math_shift] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_end_group] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [235] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(633),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [236] = {
    [sym_verb_body] = ACTIONS(635),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [237] = {
    [sym_end_display_math] = STATE(447),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(637),
  },
  [238] = {
    [sym_end_inline_math] = STATE(449),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(639),
  },
  [239] = {
    [sym_display_math_end] = STATE(450),
    [sym_end_token] = STATE(451),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [240] = {
    [sym_inline_math_end] = STATE(452),
    [sym_end_token] = STATE(453),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [241] = {
    [sym_display_math_shift] = ACTIONS(349),
    [sym_inline_math_shift] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_end_group] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_text] = ACTIONS(349),
  },
  [242] = {
    [sym_verbatim_end] = STATE(454),
    [sym_end_token] = STATE(243),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [243] = {
    [sym_verbatim_env_group] = STATE(456),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(641),
  },
  [244] = {
    [sym_display_math_shift] = ACTIONS(363),
    [sym_inline_math_shift] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [245] = {
    [sym_simple_text_group] = STATE(457),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [246] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(308),
    [sym_text_mode_at_region] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env] = STATE(308),
    [sym__display_math] = STATE(308),
    [sym_tex_display_math] = STATE(308),
    [sym_latex_display_math] = STATE(308),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(308),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(308),
    [sym_tex_inline_math] = STATE(308),
    [sym_latex_inline_math] = STATE(308),
    [sym_inline_math_env] = STATE(308),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(458),
    [sym_end_token] = STATE(245),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(308),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(308),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(308),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(308),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(308),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(308),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(308),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(308),
    [sym_opt_text_group] = STATE(308),
    [sym_token] = STATE(308),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [247] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(643),
  },
  [248] = {
    [sym_display_math_shift] = ACTIONS(387),
    [sym_inline_math_shift] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [249] = {
    [sym_simple_text_group] = STATE(461),
    [sym__whitespace] = ACTIONS(645),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [250] = {
    [sym_display_math_shift] = ACTIONS(395),
    [sym_inline_math_shift] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_end_group] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [251] = {
    [sym_simple_text_group] = STATE(463),
    [sym__whitespace] = ACTIONS(647),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [252] = {
    [sym_display_math_shift] = ACTIONS(399),
    [sym_inline_math_shift] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_end_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [253] = {
    [sym_display_math_shift] = ACTIONS(401),
    [sym_inline_math_shift] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [254] = {
    [sym_text_group] = STATE(465),
    [sym__whitespace] = ACTIONS(649),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [255] = {
    [anon_sym_EQ] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [256] = {
    [sym_display_math_shift] = ACTIONS(409),
    [sym_inline_math_shift] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [257] = {
    [sym_display_math_shift] = ACTIONS(411),
    [sym_inline_math_shift] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(411),
    [sym_end_group] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(411),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [sym_text] = ACTIONS(411),
  },
  [258] = {
    [sym_text_group] = STATE(468),
    [sym__whitespace] = ACTIONS(653),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [259] = {
    [sym_display_math_shift] = ACTIONS(415),
    [sym_inline_math_shift] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_end_group] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [260] = {
    [sym_display_math_shift] = ACTIONS(417),
    [sym_inline_math_shift] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(417),
    [sym_end_group] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(417),
    [sym_superscript] = ACTIONS(417),
    [sym_subscript] = ACTIONS(417),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [261] = {
    [sym_display_math_shift] = ACTIONS(419),
    [sym_inline_math_shift] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [262] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [anon_sym_makeatother] = ACTIONS(655),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [263] = {
    [sym_makeatother] = STATE(471),
    [sym_makeatother_token] = STATE(265),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(657),
  },
  [264] = {
    [sym_display_math_shift] = ACTIONS(457),
    [sym_inline_math_shift] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_end_group] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [265] = {
    [sym_display_math_shift] = ACTIONS(459),
    [sym_inline_math_shift] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(459),
    [sym_begin_group] = ACTIONS(459),
    [sym_end_group] = ACTIONS(459),
    [sym_alignment_tab] = ACTIONS(459),
    [sym_parameter_char] = ACTIONS(459),
    [sym_superscript] = ACTIONS(459),
    [sym_subscript] = ACTIONS(459),
    [sym_active_char] = ACTIONS(459),
    [sym_text] = ACTIONS(459),
  },
  [266] = {
    [sym_display_math_shift] = ACTIONS(469),
    [sym_inline_math_shift] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(469),
    [sym_begin_group] = ACTIONS(469),
    [sym_end_group] = ACTIONS(469),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [267] = {
    [sym_display_math_shift] = ACTIONS(471),
    [sym_inline_math_shift] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(471),
    [sym_end_group] = ACTIONS(471),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(471),
    [sym_superscript] = ACTIONS(471),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(471),
    [sym_text] = ACTIONS(471),
  },
  [268] = {
    [sym__common] = STATE(401),
    [sym__text_mode_common] = STATE(401),
    [sym_inline_verbatim] = STATE(401),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(401),
    [sym_text_mode_at_region] = STATE(401),
    [sym_parameter] = STATE(401),
    [sym_text_env] = STATE(401),
    [sym__display_math] = STATE(401),
    [sym_tex_display_math] = STATE(401),
    [sym_latex_display_math] = STATE(401),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(401),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(401),
    [sym_tex_inline_math] = STATE(401),
    [sym_latex_inline_math] = STATE(401),
    [sym_inline_math_env] = STATE(401),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(401),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(401),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(401),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(401),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(401),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(401),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(401),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(401),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(401),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(401),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(401),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(401),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(401),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(401),
    [sym_opt_text_group] = STATE(401),
    [sym_token] = STATE(401),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(472),
    [aux_sym_text_mode_repeat1] = STATE(401),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(473),
    [sym_text] = ACTIONS(473),
  },
  [269] = {
    [sym_display_math_shift] = ACTIONS(659),
    [sym_inline_math_shift] = ACTIONS(659),
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [270] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(661),
    [sym_inline_math_shift] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(670),
    [sym_end_group] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(673),
    [sym_parameter_char] = ACTIONS(676),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(673),
    [sym_text] = ACTIONS(673),
  },
  [271] = {
    [sym_display_math_shift] = ACTIONS(501),
    [sym_inline_math_shift] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [272] = {
    [sym_verb_delim] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [273] = {
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [274] = {
    [sym__whitespace] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(245),
  },
  [275] = {
    [sym__whitespace] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(279),
  },
  [276] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_text] = ACTIONS(526),
  },
  [277] = {
    [sym__common] = STATE(422),
    [sym__math_mode_common] = STATE(422),
    [sym__math_mode] = STATE(422),
    [sym_parameter] = STATE(422),
    [sym_math_env] = STATE(422),
    [sym_tag] = STATE(422),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(422),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(422),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(422),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(422),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(422),
    [sym_opt_math_group] = STATE(422),
    [sym_token] = STATE(422),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(422),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(688),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_text] = ACTIONS(540),
  },
  [278] = {
    [anon_sym_RBRACK] = ACTIONS(690),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [279] = {
    [sym_display_math_shift] = ACTIONS(692),
    [sym_inline_math_shift] = ACTIONS(692),
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_active_char] = ACTIONS(692),
    [sym_text] = ACTIONS(692),
  },
  [280] = {
    [sym__common] = STATE(427),
    [sym__text_mode_common] = STATE(427),
    [sym_inline_verbatim] = STATE(427),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(427),
    [sym_text_mode] = STATE(479),
    [sym_text_mode_at_region] = STATE(427),
    [sym_parameter] = STATE(427),
    [sym_text_env] = STATE(427),
    [sym__display_math] = STATE(427),
    [sym_tex_display_math] = STATE(427),
    [sym_latex_display_math] = STATE(427),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(427),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(427),
    [sym_tex_inline_math] = STATE(427),
    [sym_latex_inline_math] = STATE(427),
    [sym_inline_math_env] = STATE(427),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(427),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(427),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(427),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(427),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(427),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(427),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(427),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(427),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(427),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(427),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(427),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(427),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(427),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(427),
    [sym_opt_text_group] = STATE(427),
    [sym_token] = STATE(427),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(427),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(694),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(550),
    [sym_text] = ACTIONS(550),
  },
  [281] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_text] = ACTIONS(552),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [283] = {
    [sym_simple_text_group] = STATE(480),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [284] = {
    [sym__common] = STATE(291),
    [sym__math_mode_common] = STATE(291),
    [sym__math_mode] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_math_env] = STATE(291),
    [sym_tag] = STATE(291),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(481),
    [sym_end_token] = STATE(283),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(291),
    [sym_opt_math_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [285] = {
    [sym__common] = STATE(483),
    [sym__text_mode_common] = STATE(483),
    [sym_inline_verbatim] = STATE(483),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(483),
    [sym_text_mode_at_region] = STATE(483),
    [sym_parameter] = STATE(483),
    [sym_text_env] = STATE(483),
    [sym__display_math] = STATE(483),
    [sym_tex_display_math] = STATE(483),
    [sym_latex_display_math] = STATE(483),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(483),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(483),
    [sym_tex_inline_math] = STATE(483),
    [sym_latex_inline_math] = STATE(483),
    [sym_inline_math_env] = STATE(483),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(483),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(483),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(483),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(483),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(483),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(483),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(483),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(483),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(483),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(483),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(483),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(483),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(483),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(483),
    [sym_opt_text_group] = STATE(483),
    [sym_token] = STATE(483),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(483),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(696),
    [sym_alignment_tab] = ACTIONS(698),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(698),
    [sym_text] = ACTIONS(698),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [287] = {
    [anon_sym_EQ] = ACTIONS(700),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(469),
    [sym_begin_group] = ACTIONS(469),
    [sym_math_shift] = ACTIONS(469),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_text] = ACTIONS(469),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(566),
    [sym_begin_group] = ACTIONS(566),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(566),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [290] = {
    [sym__common] = STATE(436),
    [sym__math_mode_common] = STATE(436),
    [sym__math_mode] = STATE(436),
    [sym_parameter] = STATE(436),
    [sym_math_env] = STATE(436),
    [sym_tag] = STATE(436),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(436),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(436),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(436),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(436),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(436),
    [sym_opt_math_group] = STATE(436),
    [sym_token] = STATE(436),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(485),
    [aux_sym_math_mode_repeat1] = STATE(436),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_text] = ACTIONS(568),
  },
  [291] = {
    [sym__common] = STATE(291),
    [sym__math_mode_common] = STATE(291),
    [sym__math_mode] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_math_env] = STATE(291),
    [sym_tag] = STATE(291),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(291),
    [sym_opt_math_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(702),
    [sym_begin_group] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(711),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_math_shift] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [294] = {
    [sym_display_math_shift] = ACTIONS(716),
    [sym_inline_math_shift] = ACTIONS(716),
    [ts_builtin_sym_end] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_RBRACK] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_text] = ACTIONS(716),
  },
  [295] = {
    [sym_display_math_shift] = ACTIONS(718),
    [sym_inline_math_shift] = ACTIONS(718),
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(718),
    [sym_begin_group] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(718),
    [sym_parameter_char] = ACTIONS(718),
    [sym_superscript] = ACTIONS(718),
    [sym_subscript] = ACTIONS(718),
    [sym_active_char] = ACTIONS(718),
    [sym_text] = ACTIONS(718),
  },
  [296] = {
    [sym_display_math_env_group] = STATE(488),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(720),
  },
  [297] = {
    [sym_display_math_shift] = ACTIONS(722),
    [sym_inline_math_shift] = ACTIONS(722),
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(722),
    [sym_begin_group] = ACTIONS(722),
    [sym_alignment_tab] = ACTIONS(722),
    [sym_parameter_char] = ACTIONS(722),
    [sym_superscript] = ACTIONS(722),
    [sym_subscript] = ACTIONS(722),
    [sym_active_char] = ACTIONS(722),
    [sym_text] = ACTIONS(722),
  },
  [298] = {
    [sym_inline_math_env_group] = STATE(490),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(724),
  },
  [299] = {
    [sym__whitespace] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(728),
  },
  [300] = {
    [sym_display_math_shift] = ACTIONS(730),
    [sym_inline_math_shift] = ACTIONS(730),
    [ts_builtin_sym_end] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(730),
    [sym_begin_group] = ACTIONS(730),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(730),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [301] = {
    [sym_verbatim_env_name] = ACTIONS(732),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [302] = {
    [sym_display_math_shift] = ACTIONS(734),
    [sym_inline_math_shift] = ACTIONS(734),
    [ts_builtin_sym_end] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [303] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(738),
    [sym__end_of_line] = ACTIONS(738),
  },
  [304] = {
    [aux_sym_verbatim_text_repeat1] = STATE(304),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(740),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(743),
  },
  [305] = {
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(305),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(745),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(738),
    [sym__end_of_line] = ACTIONS(748),
  },
  [306] = {
    [sym_display_math_shift] = ACTIONS(751),
    [sym_inline_math_shift] = ACTIONS(751),
    [ts_builtin_sym_end] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [307] = {
    [sym_display_math_shift] = ACTIONS(753),
    [sym_inline_math_shift] = ACTIONS(753),
    [ts_builtin_sym_end] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(753),
    [sym_begin_group] = ACTIONS(753),
    [sym_alignment_tab] = ACTIONS(753),
    [sym_parameter_char] = ACTIONS(753),
    [sym_superscript] = ACTIONS(753),
    [sym_subscript] = ACTIONS(753),
    [sym_active_char] = ACTIONS(753),
    [sym_text] = ACTIONS(753),
  },
  [308] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(308),
    [sym_text_mode_at_region] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env] = STATE(308),
    [sym__display_math] = STATE(308),
    [sym_tex_display_math] = STATE(308),
    [sym_latex_display_math] = STATE(308),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(308),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(308),
    [sym_tex_inline_math] = STATE(308),
    [sym_latex_inline_math] = STATE(308),
    [sym_inline_math_env] = STATE(308),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(308),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(308),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(308),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(308),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(308),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(308),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(308),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(308),
    [sym_opt_text_group] = STATE(308),
    [sym_token] = STATE(308),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(475),
    [sym_inline_math_shift] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(755),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(755),
    [sym_text] = ACTIONS(755),
  },
  [309] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(758),
  },
  [310] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(760),
  },
  [311] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(762),
  },
  [312] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(764),
  },
  [313] = {
    [sym__common] = STATE(498),
    [sym__text_mode_common] = STATE(498),
    [sym_inline_verbatim] = STATE(498),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(498),
    [sym_text_mode_at_region] = STATE(498),
    [sym_parameter] = STATE(498),
    [sym_text_env] = STATE(498),
    [sym__display_math] = STATE(498),
    [sym_tex_display_math] = STATE(498),
    [sym_latex_display_math] = STATE(498),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(498),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(498),
    [sym_tex_inline_math] = STATE(498),
    [sym_latex_inline_math] = STATE(498),
    [sym_inline_math_env] = STATE(498),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(498),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(498),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(498),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(498),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(498),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(498),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(498),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(498),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(498),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(498),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(498),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(498),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(498),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(498),
    [sym_opt_text_group] = STATE(498),
    [sym_token] = STATE(498),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(498),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(766),
    [sym_alignment_tab] = ACTIONS(768),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(768),
    [sym_text] = ACTIONS(768),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(770),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(770),
    [sym_begin_group] = ACTIONS(770),
    [sym_alignment_tab] = ACTIONS(770),
    [sym_parameter_char] = ACTIONS(770),
    [sym_superscript] = ACTIONS(770),
    [sym_subscript] = ACTIONS(770),
    [sym_active_char] = ACTIONS(770),
    [sym_text] = ACTIONS(770),
  },
  [315] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(772),
  },
  [316] = {
    [sym_text_group] = STATE(501),
    [sym__whitespace] = ACTIONS(774),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(772),
  },
  [317] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(778),
    [sym__end_of_line] = ACTIONS(778),
  },
  [318] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(780),
  },
  [319] = {
    [sym_text_group] = STATE(504),
    [sym__whitespace] = ACTIONS(782),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(780),
  },
  [320] = {
    [sym_simple_text_group] = STATE(505),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [321] = {
    [sym_display_math_shift] = ACTIONS(784),
    [sym_inline_math_shift] = ACTIONS(784),
    [ts_builtin_sym_end] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_active_char] = ACTIONS(784),
    [sym_text] = ACTIONS(784),
  },
  [322] = {
    [sym__whitespace] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(469),
    [sym__end_of_line] = ACTIONS(469),
  },
  [323] = {
    [sym__whitespace] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(471),
    [sym__end_of_line] = ACTIONS(471),
  },
  [324] = {
    [sym__common] = STATE(401),
    [sym__text_mode_common] = STATE(401),
    [sym_inline_verbatim] = STATE(401),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(401),
    [sym_text_mode_at_region] = STATE(401),
    [sym_parameter] = STATE(401),
    [sym_text_env] = STATE(401),
    [sym__display_math] = STATE(401),
    [sym_tex_display_math] = STATE(401),
    [sym_latex_display_math] = STATE(401),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(401),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(401),
    [sym_tex_inline_math] = STATE(401),
    [sym_latex_inline_math] = STATE(401),
    [sym_inline_math_env] = STATE(401),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(401),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(401),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(401),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(401),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(401),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(401),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(401),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(401),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(401),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(401),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(401),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(401),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(401),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(401),
    [sym_opt_text_group] = STATE(401),
    [sym_token] = STATE(401),
    [sym_begin_opt] = STATE(31),
    [sym_end_opt] = STATE(506),
    [aux_sym_text_mode_repeat1] = STATE(401),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(5),
    [sym_inline_math_shift] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(17),
    [sym_begin_group] = ACTIONS(19),
    [sym_alignment_tab] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(473),
    [sym_text] = ACTIONS(473),
  },
  [325] = {
    [sym_simple_text_group] = STATE(507),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(125),
  },
  [326] = {
    [sym_display_math_shift] = ACTIONS(786),
    [sym_inline_math_shift] = ACTIONS(786),
    [ts_builtin_sym_end] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(786),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [327] = {
    [sym_text_group] = STATE(508),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [328] = {
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
  [329] = {
    [anon_sym_EQ] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [330] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(790),
  },
  [331] = {
    [sym_text_group] = STATE(510),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(19),
  },
  [332] = {
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
  [333] = {
    [sym_display_math_shift] = ACTIONS(794),
    [sym_inline_math_shift] = ACTIONS(794),
    [ts_builtin_sym_end] = ACTIONS(794),
    [sym__whitespace] = ACTIONS(796),
    [anon_sym_LBRACK] = ACTIONS(794),
    [anon_sym_RBRACK] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(794),
    [sym_begin_group] = ACTIONS(794),
    [sym_alignment_tab] = ACTIONS(794),
    [sym_parameter_char] = ACTIONS(794),
    [sym_superscript] = ACTIONS(794),
    [sym_subscript] = ACTIONS(794),
    [sym_active_char] = ACTIONS(794),
    [sym_text] = ACTIONS(798),
  },
  [334] = {
    [sym__whitespace] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(804),
  },
  [335] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(516),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(518),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(806),
  },
  [336] = {
    [sym__common] = STATE(515),
    [sym__text_mode_common] = STATE(515),
    [sym_inline_verbatim] = STATE(515),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(515),
    [sym_parameter] = STATE(515),
    [sym_text_env_at] = STATE(515),
    [sym__display_math_at] = STATE(515),
    [sym_tex_display_math_at] = STATE(515),
    [sym_latex_display_math_at] = STATE(515),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(515),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(515),
    [sym_tex_inline_math_at] = STATE(515),
    [sym_latex_inline_math_at] = STATE(515),
    [sym_inline_math_env_at] = STATE(515),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(515),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(515),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(515),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(515),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(515),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(515),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(515),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(515),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(515),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(515),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(515),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(515),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(515),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(515),
    [sym_opt_text_group_at] = STATE(515),
    [sym_token_at] = STATE(515),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(515),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(808),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(810),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(810),
    [sym_text] = ACTIONS(810),
  },
  [337] = {
    [anon_sym_LBRACK] = ACTIONS(812),
    [anon_sym_RBRACK] = ACTIONS(812),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(812),
    [sym_begin_group] = ACTIONS(812),
    [sym_math_shift] = ACTIONS(812),
    [sym_alignment_tab] = ACTIONS(812),
    [sym_parameter_char] = ACTIONS(812),
    [sym_superscript] = ACTIONS(812),
    [sym_subscript] = ACTIONS(812),
    [sym_active_char] = ACTIONS(812),
    [sym_text] = ACTIONS(812),
  },
  [338] = {
    [sym__common] = STATE(365),
    [sym__math_mode_common] = STATE(365),
    [sym__math_mode_at] = STATE(365),
    [sym_math_mode_at] = STATE(517),
    [sym_parameter] = STATE(365),
    [sym_math_env_at] = STATE(365),
    [sym_tag_at] = STATE(365),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(365),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(365),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(365),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(365),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(365),
    [sym_opt_math_group_at] = STATE(365),
    [sym_token_at] = STATE(365),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(365),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(814),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [339] = {
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [340] = {
    [sym_verb_delim] = ACTIONS(816),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [341] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(519),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [342] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(520),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [343] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(521),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [344] = {
    [sym__common] = STATE(370),
    [sym__math_mode_common] = STATE(370),
    [sym__math_mode_at] = STATE(370),
    [sym_math_mode_at] = STATE(522),
    [sym_parameter] = STATE(370),
    [sym_math_env_at] = STATE(370),
    [sym_tag_at] = STATE(370),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(370),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(370),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(370),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(370),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(370),
    [sym_opt_math_group_at] = STATE(370),
    [sym_token_at] = STATE(370),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(370),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [345] = {
    [sym_verbatim_end] = STATE(523),
    [sym_verbatim_text] = STATE(524),
    [sym_end_token] = STATE(525),
    [aux_sym_verbatim_text_repeat1] = STATE(116),
    [aux_sym_verbatim_text_repeat2] = STATE(117),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
    [sym__end_of_line] = ACTIONS(117),
  },
  [346] = {
    [sym__common] = STATE(527),
    [sym__text_mode_common] = STATE(527),
    [sym_inline_verbatim] = STATE(527),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(527),
    [sym_parameter] = STATE(527),
    [sym_text_env_at] = STATE(527),
    [sym__display_math_at] = STATE(527),
    [sym_tex_display_math_at] = STATE(527),
    [sym_latex_display_math_at] = STATE(527),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(527),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(527),
    [sym_tex_inline_math_at] = STATE(527),
    [sym_latex_inline_math_at] = STATE(527),
    [sym_inline_math_env_at] = STATE(527),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(527),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(527),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_end] = STATE(526),
    [sym_end_token] = STATE(413),
    [sym_documentclass] = STATE(527),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(527),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(527),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(527),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(527),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(527),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(527),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(527),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(527),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(527),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(527),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(527),
    [sym_opt_text_group_at] = STATE(527),
    [sym_token_at] = STATE(527),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(527),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(818),
    [sym_text] = ACTIONS(818),
  },
  [347] = {
    [sym_simple_text_group] = STATE(529),
    [sym_opt_text_group] = STATE(530),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [348] = {
    [sym_simple_text_group] = STATE(531),
    [sym_opt_text_group] = STATE(532),
    [sym_begin_opt] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [349] = {
    [sym_text_group_at] = STATE(533),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [350] = {
    [sym_text_group_at] = STATE(534),
    [sym_opt_text_group_at] = STATE(535),
    [sym_begin_opt] = STATE(389),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [351] = {
    [sym_text_group_at] = STATE(536),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [352] = {
    [sym_text_group_at] = STATE(537),
    [sym_opt_text_group_at] = STATE(538),
    [sym_begin_opt] = STATE(389),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [353] = {
    [sym_text_group_at] = STATE(539),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [354] = {
    [sym_text_group_at] = STATE(540),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [355] = {
    [sym_text_group_at] = STATE(541),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [356] = {
    [sym__common] = STATE(543),
    [sym__text_mode_common] = STATE(543),
    [sym_inline_verbatim] = STATE(543),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(543),
    [sym_parameter] = STATE(543),
    [sym_text_env_at] = STATE(543),
    [sym__display_math_at] = STATE(543),
    [sym_tex_display_math_at] = STATE(543),
    [sym_latex_display_math_at] = STATE(543),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(543),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(543),
    [sym_tex_inline_math_at] = STATE(543),
    [sym_latex_inline_math_at] = STATE(543),
    [sym_inline_math_env_at] = STATE(543),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(543),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(543),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(543),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(543),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(543),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(543),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(543),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(543),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(543),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(543),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(543),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(543),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(543),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(543),
    [sym_opt_text_group_at] = STATE(543),
    [sym_token_at] = STATE(543),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(542),
    [aux_sym_text_mode_at_repeat1] = STATE(543),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(822),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(822),
    [sym_text] = ACTIONS(822),
  },
  [357] = {
    [sym__common] = STATE(545),
    [sym__text_mode_common] = STATE(545),
    [sym_inline_verbatim] = STATE(545),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(545),
    [sym_parameter] = STATE(545),
    [sym_text_env_at] = STATE(545),
    [sym__display_math_at] = STATE(545),
    [sym_tex_display_math_at] = STATE(545),
    [sym_latex_display_math_at] = STATE(545),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(545),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(545),
    [sym_tex_inline_math_at] = STATE(545),
    [sym_latex_inline_math_at] = STATE(545),
    [sym_inline_math_env_at] = STATE(545),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(545),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(545),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(545),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(545),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(545),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(545),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(545),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(545),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(545),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(545),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(545),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(545),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(545),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(545),
    [sym_opt_text_group_at] = STATE(545),
    [sym_token_at] = STATE(545),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(545),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(824),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [358] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [359] = {
    [sym__common] = STATE(552),
    [sym__math_mode_common] = STATE(552),
    [sym__math_mode_at] = STATE(552),
    [sym_parameter] = STATE(552),
    [sym_math_env_at] = STATE(552),
    [sym_tag_at] = STATE(552),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(552),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(552),
    [sym_include_token] = STATE(349),
    [sym_storage] = STATE(552),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(552),
    [sym_catcode_token] = STATE(187),
    [sym_math_group_at] = STATE(552),
    [sym_opt_math_group_at] = STATE(552),
    [sym_token_at] = STATE(552),
    [sym_begin_opt] = STATE(551),
    [aux_sym_math_mode_at_repeat1] = STATE(552),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(832),
    [sym_alignment_tab] = ACTIONS(834),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(834),
    [sym_subscript] = ACTIONS(834),
    [sym_active_char] = ACTIONS(834),
    [sym_text] = ACTIONS(834),
  },
  [360] = {
    [sym__common] = STATE(365),
    [sym__math_mode_common] = STATE(365),
    [sym__math_mode_at] = STATE(365),
    [sym_math_mode_at] = STATE(553),
    [sym_parameter] = STATE(365),
    [sym_math_env_at] = STATE(365),
    [sym_tag_at] = STATE(365),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(365),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(365),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(365),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(365),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(365),
    [sym_opt_math_group_at] = STATE(365),
    [sym_token_at] = STATE(365),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(365),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [361] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(836),
  },
  [362] = {
    [sym_math_text_group_at] = STATE(556),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(838),
  },
  [363] = {
    [sym__common] = STATE(559),
    [sym__math_mode_common] = STATE(559),
    [sym__math_mode_at] = STATE(559),
    [sym_parameter] = STATE(559),
    [sym_math_env_at] = STATE(559),
    [sym_tag_at] = STATE(559),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(559),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(558),
    [sym_end_token] = STATE(283),
    [sym_include_at] = STATE(559),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(559),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(559),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(559),
    [sym_opt_math_group_at] = STATE(559),
    [sym_token_at] = STATE(559),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(559),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(842),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(842),
    [sym_active_char] = ACTIONS(842),
    [sym_text] = ACTIONS(842),
  },
  [364] = {
    [sym__common] = STATE(561),
    [sym__math_mode_common] = STATE(561),
    [sym__math_mode_at] = STATE(561),
    [sym_parameter] = STATE(561),
    [sym_math_env_at] = STATE(561),
    [sym_tag_at] = STATE(561),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(561),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(561),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(561),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(561),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(561),
    [sym_opt_math_group_at] = STATE(561),
    [sym_token_at] = STATE(561),
    [sym_begin_opt] = STATE(364),
    [sym_end_opt] = STATE(560),
    [aux_sym_math_mode_at_repeat1] = STATE(561),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(844),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(844),
    [sym_subscript] = ACTIONS(844),
    [sym_active_char] = ACTIONS(844),
    [sym_text] = ACTIONS(844),
  },
  [365] = {
    [sym__common] = STATE(562),
    [sym__math_mode_common] = STATE(562),
    [sym__math_mode_at] = STATE(562),
    [sym_parameter] = STATE(562),
    [sym_math_env_at] = STATE(562),
    [sym_tag_at] = STATE(562),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(562),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(562),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(562),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(562),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(562),
    [sym_opt_math_group_at] = STATE(562),
    [sym_token_at] = STATE(562),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(562),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(846),
    [sym_alignment_tab] = ACTIONS(848),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(848),
    [sym_subscript] = ACTIONS(848),
    [sym_active_char] = ACTIONS(848),
    [sym_text] = ACTIONS(848),
  },
  [366] = {
    [sym_verb_body] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [367] = {
    [anon_sym_makeatother] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [368] = {
    [sym_display_math_shift] = ACTIONS(854),
    [sym_inline_math_shift] = ACTIONS(854),
    [ts_builtin_sym_end] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(854),
    [anon_sym_RBRACK] = ACTIONS(854),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(854),
    [sym_begin_group] = ACTIONS(854),
    [sym_alignment_tab] = ACTIONS(854),
    [sym_parameter_char] = ACTIONS(854),
    [sym_superscript] = ACTIONS(854),
    [sym_subscript] = ACTIONS(854),
    [sym_active_char] = ACTIONS(854),
    [sym_text] = ACTIONS(854),
  },
  [369] = {
    [sym_end_display_math] = STATE(565),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(856),
  },
  [370] = {
    [sym__common] = STATE(566),
    [sym__math_mode_common] = STATE(566),
    [sym__math_mode_at] = STATE(566),
    [sym_parameter] = STATE(566),
    [sym_math_env_at] = STATE(566),
    [sym_tag_at] = STATE(566),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(566),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(566),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(566),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(566),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(566),
    [sym_opt_math_group_at] = STATE(566),
    [sym_token_at] = STATE(566),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(566),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(846),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(858),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(858),
    [sym_subscript] = ACTIONS(858),
    [sym_active_char] = ACTIONS(858),
    [sym_text] = ACTIONS(858),
  },
  [371] = {
    [sym_end_inline_math] = STATE(568),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(860),
  },
  [372] = {
    [sym_display_math_end] = STATE(569),
    [sym_end_token] = STATE(570),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [373] = {
    [sym_inline_math_end] = STATE(571),
    [sym_end_token] = STATE(572),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [374] = {
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_text] = ACTIONS(349),
  },
  [375] = {
    [sym_verbatim_end] = STATE(573),
    [sym_end_token] = STATE(376),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [376] = {
    [sym_verbatim_env_group] = STATE(575),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(862),
  },
  [377] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(361),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [378] = {
    [anon_sym_LBRACK] = ACTIONS(864),
    [anon_sym_RBRACK] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(864),
    [sym_begin_group] = ACTIONS(864),
    [sym_math_shift] = ACTIONS(864),
    [sym_alignment_tab] = ACTIONS(864),
    [sym_parameter_char] = ACTIONS(864),
    [sym_superscript] = ACTIONS(864),
    [sym_subscript] = ACTIONS(864),
    [sym_active_char] = ACTIONS(864),
    [sym_text] = ACTIONS(864),
  },
  [379] = {
    [sym__common] = STATE(399),
    [sym__text_mode_common] = STATE(399),
    [sym_inline_verbatim] = STATE(399),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(399),
    [sym_parameter] = STATE(399),
    [sym_text_env_at] = STATE(399),
    [sym__display_math_at] = STATE(399),
    [sym_tex_display_math_at] = STATE(399),
    [sym_latex_display_math_at] = STATE(399),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(399),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(399),
    [sym_tex_inline_math_at] = STATE(399),
    [sym_latex_inline_math_at] = STATE(399),
    [sym_inline_math_env_at] = STATE(399),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(399),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(399),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_end] = STATE(576),
    [sym_end_token] = STATE(283),
    [sym_documentclass] = STATE(399),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(399),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(399),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(399),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(399),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(399),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(399),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(399),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(399),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(399),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(399),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(399),
    [sym_opt_text_group_at] = STATE(399),
    [sym_token_at] = STATE(399),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(399),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(467),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(467),
    [sym_text] = ACTIONS(467),
  },
  [380] = {
    [sym_display_math_env_name] = ACTIONS(367),
    [sym_inline_math_env_name] = ACTIONS(369),
    [sym_verbatim_env_name] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(866),
  },
  [381] = {
    [sym_text_group_at] = STATE(579),
    [sym_opt_text_group_at] = STATE(580),
    [sym_begin_opt] = STATE(389),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(868),
    [sym__end_of_line] = ACTIONS(870),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [383] = {
    [sym_simple_text_group] = STATE(582),
    [sym__whitespace] = ACTIONS(872),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [384] = {
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [385] = {
    [sym_simple_text_group] = STATE(584),
    [sym__whitespace] = ACTIONS(874),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [386] = {
    [anon_sym_LBRACK] = ACTIONS(876),
    [anon_sym_RBRACK] = ACTIONS(876),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(876),
    [sym_begin_group] = ACTIONS(876),
    [sym_math_shift] = ACTIONS(876),
    [sym_alignment_tab] = ACTIONS(876),
    [sym_parameter_char] = ACTIONS(876),
    [sym_superscript] = ACTIONS(876),
    [sym_subscript] = ACTIONS(876),
    [sym_active_char] = ACTIONS(876),
    [sym_text] = ACTIONS(876),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(878),
    [anon_sym_RBRACK] = ACTIONS(878),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(878),
    [sym_begin_group] = ACTIONS(878),
    [sym_math_shift] = ACTIONS(878),
    [sym_alignment_tab] = ACTIONS(878),
    [sym_parameter_char] = ACTIONS(878),
    [sym_superscript] = ACTIONS(878),
    [sym_subscript] = ACTIONS(878),
    [sym_active_char] = ACTIONS(878),
    [sym_text] = ACTIONS(878),
  },
  [388] = {
    [sym_text_group_at] = STATE(586),
    [sym__whitespace] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [389] = {
    [sym__common] = STATE(588),
    [sym__text_mode_common] = STATE(588),
    [sym_inline_verbatim] = STATE(588),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(588),
    [sym_parameter] = STATE(588),
    [sym_text_env_at] = STATE(588),
    [sym__display_math_at] = STATE(588),
    [sym_tex_display_math_at] = STATE(588),
    [sym_latex_display_math_at] = STATE(588),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(588),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(588),
    [sym_tex_inline_math_at] = STATE(588),
    [sym_latex_inline_math_at] = STATE(588),
    [sym_inline_math_env_at] = STATE(588),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(588),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(588),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(588),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(588),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(588),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(588),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(588),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(588),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(588),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(588),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(588),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(588),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(588),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(588),
    [sym_opt_text_group_at] = STATE(588),
    [sym_token_at] = STATE(588),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(587),
    [aux_sym_text_mode_at_repeat1] = STATE(588),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(882),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(882),
    [sym_text] = ACTIONS(882),
  },
  [390] = {
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_RBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(884),
    [sym_begin_group] = ACTIONS(884),
    [sym_math_shift] = ACTIONS(884),
    [sym_alignment_tab] = ACTIONS(884),
    [sym_parameter_char] = ACTIONS(884),
    [sym_superscript] = ACTIONS(884),
    [sym_subscript] = ACTIONS(884),
    [sym_active_char] = ACTIONS(884),
    [sym_text] = ACTIONS(884),
  },
  [391] = {
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_RBRACK] = ACTIONS(886),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(886),
    [sym_begin_group] = ACTIONS(886),
    [sym_math_shift] = ACTIONS(886),
    [sym_alignment_tab] = ACTIONS(886),
    [sym_parameter_char] = ACTIONS(886),
    [sym_superscript] = ACTIONS(886),
    [sym_subscript] = ACTIONS(886),
    [sym_active_char] = ACTIONS(886),
    [sym_text] = ACTIONS(886),
  },
  [392] = {
    [sym_text_group_at] = STATE(590),
    [sym__whitespace] = ACTIONS(888),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [393] = {
    [anon_sym_LBRACK] = ACTIONS(890),
    [anon_sym_RBRACK] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(890),
    [sym_begin_group] = ACTIONS(890),
    [sym_math_shift] = ACTIONS(890),
    [sym_alignment_tab] = ACTIONS(890),
    [sym_parameter_char] = ACTIONS(890),
    [sym_superscript] = ACTIONS(890),
    [sym_subscript] = ACTIONS(890),
    [sym_active_char] = ACTIONS(890),
    [sym_text] = ACTIONS(890),
  },
  [394] = {
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_RBRACK] = ACTIONS(892),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(892),
    [sym_begin_group] = ACTIONS(892),
    [sym_math_shift] = ACTIONS(892),
    [sym_alignment_tab] = ACTIONS(892),
    [sym_parameter_char] = ACTIONS(892),
    [sym_superscript] = ACTIONS(892),
    [sym_subscript] = ACTIONS(892),
    [sym_active_char] = ACTIONS(892),
    [sym_text] = ACTIONS(892),
  },
  [395] = {
    [anon_sym_LBRACK] = ACTIONS(894),
    [anon_sym_RBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(894),
    [sym_begin_group] = ACTIONS(894),
    [sym_math_shift] = ACTIONS(894),
    [sym_alignment_tab] = ACTIONS(894),
    [sym_parameter_char] = ACTIONS(894),
    [sym_superscript] = ACTIONS(894),
    [sym_subscript] = ACTIONS(894),
    [sym_active_char] = ACTIONS(894),
    [sym_text] = ACTIONS(894),
  },
  [396] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_documentclass] = ACTIONS(55),
    [anon_sym_usepackage] = ACTIONS(57),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [anon_sym_emph] = ACTIONS(67),
    [anon_sym_footnote] = ACTIONS(69),
    [anon_sym_textbf] = ACTIONS(71),
    [anon_sym_textit] = ACTIONS(73),
    [anon_sym_texttt] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [397] = {
    [anon_sym_LBRACK] = ACTIONS(896),
    [anon_sym_RBRACK] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(896),
    [sym_begin_group] = ACTIONS(896),
    [sym_math_shift] = ACTIONS(896),
    [sym_alignment_tab] = ACTIONS(896),
    [sym_parameter_char] = ACTIONS(896),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(896),
    [sym_active_char] = ACTIONS(896),
    [sym_text] = ACTIONS(896),
  },
  [398] = {
    [sym__common] = STATE(592),
    [sym__text_mode_common] = STATE(592),
    [sym_inline_verbatim] = STATE(592),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(592),
    [sym_parameter] = STATE(592),
    [sym_text_env_at] = STATE(592),
    [sym__display_math_at] = STATE(592),
    [sym_tex_display_math_at] = STATE(592),
    [sym_latex_display_math_at] = STATE(592),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(592),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(592),
    [sym_tex_inline_math_at] = STATE(592),
    [sym_latex_inline_math_at] = STATE(592),
    [sym_inline_math_env_at] = STATE(592),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(592),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(592),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(592),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(592),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(592),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(592),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(592),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(592),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(592),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(592),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(592),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(592),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(592),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(592),
    [sym_opt_text_group_at] = STATE(592),
    [sym_token_at] = STATE(592),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(591),
    [aux_sym_text_mode_at_repeat1] = STATE(592),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [399] = {
    [sym__common] = STATE(399),
    [sym__text_mode_common] = STATE(399),
    [sym_inline_verbatim] = STATE(399),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(399),
    [sym_parameter] = STATE(399),
    [sym_text_env_at] = STATE(399),
    [sym__display_math_at] = STATE(399),
    [sym_tex_display_math_at] = STATE(399),
    [sym_latex_display_math_at] = STATE(399),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(399),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(399),
    [sym_tex_inline_math_at] = STATE(399),
    [sym_latex_inline_math_at] = STATE(399),
    [sym_inline_math_env_at] = STATE(399),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(399),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(399),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(399),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(399),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(399),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(399),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(399),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(399),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(399),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(399),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(399),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(399),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(399),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(399),
    [sym_opt_text_group_at] = STATE(399),
    [sym_token_at] = STATE(399),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(399),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(903),
    [sym_begin_group] = ACTIONS(906),
    [sym_math_shift] = ACTIONS(909),
    [sym_alignment_tab] = ACTIONS(912),
    [sym_parameter_char] = ACTIONS(915),
    [sym_superscript] = ACTIONS(918),
    [sym_subscript] = ACTIONS(918),
    [sym_active_char] = ACTIONS(912),
    [sym_text] = ACTIONS(912),
  },
  [400] = {
    [sym_display_math_shift] = ACTIONS(921),
    [sym_inline_math_shift] = ACTIONS(921),
    [ts_builtin_sym_end] = ACTIONS(921),
    [anon_sym_LBRACK] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(921),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(921),
    [sym_begin_group] = ACTIONS(921),
    [sym_alignment_tab] = ACTIONS(921),
    [sym_parameter_char] = ACTIONS(921),
    [sym_superscript] = ACTIONS(921),
    [sym_subscript] = ACTIONS(921),
    [sym_active_char] = ACTIONS(921),
    [sym_text] = ACTIONS(921),
  },
  [401] = {
    [sym__common] = STATE(401),
    [sym__text_mode_common] = STATE(401),
    [sym_inline_verbatim] = STATE(401),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(401),
    [sym_text_mode_at_region] = STATE(401),
    [sym_parameter] = STATE(401),
    [sym_text_env] = STATE(401),
    [sym__display_math] = STATE(401),
    [sym_tex_display_math] = STATE(401),
    [sym_latex_display_math] = STATE(401),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(401),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(401),
    [sym_tex_inline_math] = STATE(401),
    [sym_latex_inline_math] = STATE(401),
    [sym_inline_math_env] = STATE(401),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(401),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(401),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(401),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(401),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(401),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(401),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(401),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(401),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(401),
    [sym_emph_token] = STATE(24),
    [sym_footnote] = STATE(401),
    [sym_footnote_token] = STATE(25),
    [sym_textbf] = STATE(401),
    [sym_textbf_token] = STATE(26),
    [sym_textit] = STATE(401),
    [sym_textit_token] = STATE(27),
    [sym_texttt] = STATE(401),
    [sym_texttt_token] = STATE(28),
    [sym_makeatletter] = STATE(29),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(401),
    [sym_opt_text_group] = STATE(401),
    [sym_token] = STATE(401),
    [sym_begin_opt] = STATE(31),
    [aux_sym_text_mode_repeat1] = STATE(401),
    [aux_sym_parameter_repeat1] = STATE(33),
    [sym_display_math_shift] = ACTIONS(475),
    [sym_inline_math_shift] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(486),
    [sym_begin_group] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(923),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(923),
    [sym_text] = ACTIONS(923),
  },
  [402] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(926),
  },
  [403] = {
    [sym_implicit_math_shift] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(607),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(607),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_text] = ACTIONS(607),
  },
  [404] = {
    [sym_implicit_math_shift] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_math_shift] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [405] = {
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_end_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [406] = {
    [sym__whitespace] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(245),
  },
  [407] = {
    [sym__whitespace] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_end_group] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(279),
  },
  [408] = {
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_end_group] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_text] = ACTIONS(526),
  },
  [409] = {
    [sym__common] = STATE(422),
    [sym__math_mode_common] = STATE(422),
    [sym__math_mode] = STATE(422),
    [sym_parameter] = STATE(422),
    [sym_math_env] = STATE(422),
    [sym_tag] = STATE(422),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(422),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(422),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(422),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(422),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(422),
    [sym_opt_math_group] = STATE(422),
    [sym_token] = STATE(422),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(422),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(932),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_text] = ACTIONS(540),
  },
  [410] = {
    [sym__common] = STATE(427),
    [sym__text_mode_common] = STATE(427),
    [sym_inline_verbatim] = STATE(427),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(427),
    [sym_text_mode] = STATE(597),
    [sym_text_mode_at_region] = STATE(427),
    [sym_parameter] = STATE(427),
    [sym_text_env] = STATE(427),
    [sym__display_math] = STATE(427),
    [sym_tex_display_math] = STATE(427),
    [sym_latex_display_math] = STATE(427),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(427),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(427),
    [sym_tex_inline_math] = STATE(427),
    [sym_latex_inline_math] = STATE(427),
    [sym_inline_math_env] = STATE(427),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(427),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(427),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(427),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(427),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(427),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(427),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(427),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(427),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(427),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(427),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(427),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(427),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(427),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(427),
    [sym_opt_text_group] = STATE(427),
    [sym_token] = STATE(427),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(427),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(934),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(550),
    [sym_text] = ACTIONS(550),
  },
  [411] = {
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [412] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_end_group] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [413] = {
    [sym_simple_text_group] = STATE(598),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [414] = {
    [sym__common] = STATE(291),
    [sym__math_mode_common] = STATE(291),
    [sym__math_mode] = STATE(291),
    [sym_parameter] = STATE(291),
    [sym_math_env] = STATE(291),
    [sym_tag] = STATE(291),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(291),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(599),
    [sym_end_token] = STATE(413),
    [sym_include] = STATE(291),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(291),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(291),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(291),
    [sym_opt_math_group] = STATE(291),
    [sym_token] = STATE(291),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(291),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [415] = {
    [sym__common] = STATE(601),
    [sym__text_mode_common] = STATE(601),
    [sym_inline_verbatim] = STATE(601),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(601),
    [sym_text_mode_at_region] = STATE(601),
    [sym_parameter] = STATE(601),
    [sym_text_env] = STATE(601),
    [sym__display_math] = STATE(601),
    [sym_tex_display_math] = STATE(601),
    [sym_latex_display_math] = STATE(601),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(601),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(601),
    [sym_tex_inline_math] = STATE(601),
    [sym_latex_inline_math] = STATE(601),
    [sym_inline_math_env] = STATE(601),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(601),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(601),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(601),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(601),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(601),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(601),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(601),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(601),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(601),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(601),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(601),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(601),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(601),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(601),
    [sym_opt_text_group] = STATE(601),
    [sym_token] = STATE(601),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(601),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(936),
    [sym_alignment_tab] = ACTIONS(938),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(938),
    [sym_text] = ACTIONS(938),
  },
  [416] = {
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(399),
    [sym_end_group] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_text] = ACTIONS(399),
  },
  [417] = {
    [anon_sym_EQ] = ACTIONS(940),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [418] = {
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [419] = {
    [anon_sym_LBRACK] = ACTIONS(566),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [420] = {
    [sym__common] = STATE(436),
    [sym__math_mode_common] = STATE(436),
    [sym__math_mode] = STATE(436),
    [sym_parameter] = STATE(436),
    [sym_math_env] = STATE(436),
    [sym_tag] = STATE(436),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(436),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(436),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(436),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(436),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(436),
    [sym_opt_math_group] = STATE(436),
    [sym_token] = STATE(436),
    [sym_begin_opt] = STATE(106),
    [sym_end_opt] = STATE(603),
    [aux_sym_math_mode_repeat1] = STATE(436),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_text] = ACTIONS(568),
  },
  [421] = {
    [sym_implicit_math_shift] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(942),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(942),
    [sym_begin_group] = ACTIONS(942),
    [sym_math_shift] = ACTIONS(942),
    [sym_alignment_tab] = ACTIONS(942),
    [sym_parameter_char] = ACTIONS(942),
    [sym_superscript] = ACTIONS(942),
    [sym_subscript] = ACTIONS(942),
    [sym_active_char] = ACTIONS(942),
    [sym_text] = ACTIONS(942),
  },
  [422] = {
    [sym__common] = STATE(422),
    [sym__math_mode_common] = STATE(422),
    [sym__math_mode] = STATE(422),
    [sym_parameter] = STATE(422),
    [sym_math_env] = STATE(422),
    [sym_tag] = STATE(422),
    [sym_tag_token] = STATE(183),
    [sym_escaped] = STATE(422),
    [sym_begin] = STATE(184),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(422),
    [sym_include_token] = STATE(185),
    [sym_storage] = STATE(422),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(422),
    [sym_catcode_token] = STATE(187),
    [sym_math_group] = STATE(422),
    [sym_opt_math_group] = STATE(422),
    [sym_token] = STATE(422),
    [sym_begin_opt] = STATE(188),
    [aux_sym_math_mode_repeat1] = STATE(422),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(944),
    [sym_begin_group] = ACTIONS(947),
    [sym_end_group] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(950),
    [sym_parameter_char] = ACTIONS(953),
    [sym_superscript] = ACTIONS(950),
    [sym_subscript] = ACTIONS(950),
    [sym_active_char] = ACTIONS(950),
    [sym_text] = ACTIONS(950),
  },
  [423] = {
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(501),
    [sym_begin_group] = ACTIONS(501),
    [sym_end_group] = ACTIONS(501),
    [sym_math_shift] = ACTIONS(501),
    [sym_alignment_tab] = ACTIONS(501),
    [sym_parameter_char] = ACTIONS(501),
    [sym_superscript] = ACTIONS(501),
    [sym_subscript] = ACTIONS(501),
    [sym_active_char] = ACTIONS(501),
    [sym_text] = ACTIONS(501),
  },
  [424] = {
    [sym_display_math_shift] = ACTIONS(956),
    [sym_inline_math_shift] = ACTIONS(956),
    [ts_builtin_sym_end] = ACTIONS(956),
    [anon_sym_LBRACK] = ACTIONS(956),
    [anon_sym_RBRACK] = ACTIONS(956),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(956),
    [sym_begin_group] = ACTIONS(956),
    [sym_alignment_tab] = ACTIONS(956),
    [sym_parameter_char] = ACTIONS(956),
    [sym_superscript] = ACTIONS(956),
    [sym_subscript] = ACTIONS(956),
    [sym_active_char] = ACTIONS(956),
    [sym_text] = ACTIONS(956),
  },
  [425] = {
    [sym_implicit_math_shift] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(958),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(958),
    [sym_begin_group] = ACTIONS(958),
    [sym_math_shift] = ACTIONS(958),
    [sym_alignment_tab] = ACTIONS(958),
    [sym_parameter_char] = ACTIONS(958),
    [sym_superscript] = ACTIONS(958),
    [sym_subscript] = ACTIONS(958),
    [sym_active_char] = ACTIONS(958),
    [sym_text] = ACTIONS(958),
  },
  [426] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(960),
  },
  [427] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [428] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(962),
  },
  [429] = {
    [sym_implicit_math_shift] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_math_shift] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [430] = {
    [sym_implicit_math_shift] = ACTIONS(964),
    [anon_sym_LBRACK] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(964),
    [sym_begin_group] = ACTIONS(964),
    [sym_math_shift] = ACTIONS(964),
    [sym_alignment_tab] = ACTIONS(964),
    [sym_parameter_char] = ACTIONS(964),
    [sym_superscript] = ACTIONS(964),
    [sym_subscript] = ACTIONS(964),
    [sym_active_char] = ACTIONS(964),
    [sym_text] = ACTIONS(964),
  },
  [431] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(966),
  },
  [432] = {
    [sym_implicit_math_shift] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_math_shift] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [433] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(968),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [434] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(970),
  },
  [435] = {
    [sym_implicit_math_shift] = ACTIONS(972),
    [anon_sym_LBRACK] = ACTIONS(972),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(972),
    [sym_begin_group] = ACTIONS(972),
    [sym_math_shift] = ACTIONS(972),
    [sym_alignment_tab] = ACTIONS(972),
    [sym_parameter_char] = ACTIONS(972),
    [sym_superscript] = ACTIONS(972),
    [sym_subscript] = ACTIONS(972),
    [sym_active_char] = ACTIONS(972),
    [sym_text] = ACTIONS(972),
  },
  [436] = {
    [sym__common] = STATE(436),
    [sym__math_mode_common] = STATE(436),
    [sym__math_mode] = STATE(436),
    [sym_parameter] = STATE(436),
    [sym_math_env] = STATE(436),
    [sym_tag] = STATE(436),
    [sym_tag_token] = STATE(101),
    [sym_escaped] = STATE(436),
    [sym_begin] = STATE(102),
    [sym_begin_token] = STATE(42),
    [sym_include] = STATE(436),
    [sym_include_token] = STATE(103),
    [sym_storage] = STATE(436),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(436),
    [sym_catcode_token] = STATE(105),
    [sym_math_group] = STATE(436),
    [sym_opt_math_group] = STATE(436),
    [sym_token] = STATE(436),
    [sym_begin_opt] = STATE(106),
    [aux_sym_math_mode_repeat1] = STATE(436),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(570),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(702),
    [sym_begin_group] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(974),
    [sym_parameter_char] = ACTIONS(711),
    [sym_superscript] = ACTIONS(974),
    [sym_subscript] = ACTIONS(974),
    [sym_active_char] = ACTIONS(974),
    [sym_text] = ACTIONS(974),
  },
  [437] = {
    [anon_sym_LBRACK] = ACTIONS(977),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(977),
  },
  [438] = {
    [sym__whitespace] = ACTIONS(979),
    [anon_sym_LBRACK] = ACTIONS(977),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(977),
  },
  [439] = {
    [sym_display_math_shift] = ACTIONS(544),
    [sym_inline_math_shift] = ACTIONS(544),
    [anon_sym_LBRACK] = ACTIONS(544),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(544),
    [sym_begin_group] = ACTIONS(544),
    [sym_end_group] = ACTIONS(544),
    [sym_alignment_tab] = ACTIONS(544),
    [sym_parameter_char] = ACTIONS(544),
    [sym_superscript] = ACTIONS(544),
    [sym_subscript] = ACTIONS(544),
    [sym_active_char] = ACTIONS(544),
    [sym_text] = ACTIONS(544),
  },
  [440] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(981),
  },
  [441] = {
    [sym_display_math_shift] = ACTIONS(587),
    [sym_inline_math_shift] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(587),
    [sym_begin_group] = ACTIONS(587),
    [sym_end_group] = ACTIONS(587),
    [sym_alignment_tab] = ACTIONS(587),
    [sym_parameter_char] = ACTIONS(587),
    [sym_superscript] = ACTIONS(587),
    [sym_subscript] = ACTIONS(587),
    [sym_active_char] = ACTIONS(587),
    [sym_text] = ACTIONS(587),
  },
  [442] = {
    [sym_display_math_shift] = ACTIONS(607),
    [sym_inline_math_shift] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(607),
    [sym_end_group] = ACTIONS(607),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(607),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_text] = ACTIONS(607),
  },
  [443] = {
    [sym_display_math_shift] = ACTIONS(621),
    [sym_inline_math_shift] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_end_group] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [444] = {
    [sym_display_math_shift] = ACTIONS(659),
    [sym_inline_math_shift] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_end_group] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [445] = {
    [sym_verb_delim] = ACTIONS(983),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [446] = {
    [anon_sym_RBRACK] = ACTIONS(985),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [447] = {
    [sym_display_math_shift] = ACTIONS(692),
    [sym_inline_math_shift] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_end_group] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_active_char] = ACTIONS(692),
    [sym_text] = ACTIONS(692),
  },
  [448] = {
    [anon_sym_RPAREN] = ACTIONS(987),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [449] = {
    [sym_display_math_shift] = ACTIONS(716),
    [sym_inline_math_shift] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_end_group] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_text] = ACTIONS(716),
  },
  [450] = {
    [sym_display_math_shift] = ACTIONS(718),
    [sym_inline_math_shift] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(718),
    [sym_begin_group] = ACTIONS(718),
    [sym_end_group] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(718),
    [sym_parameter_char] = ACTIONS(718),
    [sym_superscript] = ACTIONS(718),
    [sym_subscript] = ACTIONS(718),
    [sym_active_char] = ACTIONS(718),
    [sym_text] = ACTIONS(718),
  },
  [451] = {
    [sym_display_math_env_group] = STATE(615),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(989),
  },
  [452] = {
    [sym_display_math_shift] = ACTIONS(722),
    [sym_inline_math_shift] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [453] = {
    [sym_inline_math_env_group] = STATE(617),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(991),
  },
  [454] = {
    [sym_display_math_shift] = ACTIONS(730),
    [sym_inline_math_shift] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [455] = {
    [sym_verbatim_env_name] = ACTIONS(993),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [456] = {
    [sym_display_math_shift] = ACTIONS(734),
    [sym_inline_math_shift] = ACTIONS(734),
    [anon_sym_LBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [457] = {
    [sym_display_math_shift] = ACTIONS(751),
    [sym_inline_math_shift] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_end_group] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [458] = {
    [sym_display_math_shift] = ACTIONS(753),
    [sym_inline_math_shift] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(753),
    [sym_begin_group] = ACTIONS(753),
    [sym_end_group] = ACTIONS(753),
    [sym_alignment_tab] = ACTIONS(753),
    [sym_parameter_char] = ACTIONS(753),
    [sym_superscript] = ACTIONS(753),
    [sym_subscript] = ACTIONS(753),
    [sym_active_char] = ACTIONS(753),
    [sym_text] = ACTIONS(753),
  },
  [459] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(995),
  },
  [460] = {
    [sym_simple_text_group] = STATE(620),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [461] = {
    [sym_display_math_shift] = ACTIONS(784),
    [sym_inline_math_shift] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_end_group] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_active_char] = ACTIONS(784),
    [sym_text] = ACTIONS(784),
  },
  [462] = {
    [sym_simple_text_group] = STATE(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(303),
  },
  [463] = {
    [sym_display_math_shift] = ACTIONS(786),
    [sym_inline_math_shift] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [464] = {
    [sym_text_group] = STATE(622),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [465] = {
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
  [466] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(997),
  },
  [467] = {
    [sym_text_group] = STATE(624),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(87),
  },
  [468] = {
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
  [469] = {
    [sym_display_math_shift] = ACTIONS(794),
    [sym_inline_math_shift] = ACTIONS(794),
    [sym__whitespace] = ACTIONS(999),
    [anon_sym_LBRACK] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(794),
    [sym_begin_group] = ACTIONS(794),
    [sym_end_group] = ACTIONS(794),
    [sym_alignment_tab] = ACTIONS(794),
    [sym_parameter_char] = ACTIONS(794),
    [sym_superscript] = ACTIONS(794),
    [sym_subscript] = ACTIONS(794),
    [sym_active_char] = ACTIONS(794),
    [sym_text] = ACTIONS(798),
  },
  [470] = {
    [anon_sym_makeatother] = ACTIONS(1001),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [471] = {
    [sym_display_math_shift] = ACTIONS(854),
    [sym_inline_math_shift] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(854),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(854),
    [sym_begin_group] = ACTIONS(854),
    [sym_end_group] = ACTIONS(854),
    [sym_alignment_tab] = ACTIONS(854),
    [sym_parameter_char] = ACTIONS(854),
    [sym_superscript] = ACTIONS(854),
    [sym_subscript] = ACTIONS(854),
    [sym_active_char] = ACTIONS(854),
    [sym_text] = ACTIONS(854),
  },
  [472] = {
    [sym_display_math_shift] = ACTIONS(921),
    [sym_inline_math_shift] = ACTIONS(921),
    [anon_sym_LBRACK] = ACTIONS(921),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(921),
    [sym_begin_group] = ACTIONS(921),
    [sym_end_group] = ACTIONS(921),
    [sym_alignment_tab] = ACTIONS(921),
    [sym_parameter_char] = ACTIONS(921),
    [sym_superscript] = ACTIONS(921),
    [sym_subscript] = ACTIONS(921),
    [sym_active_char] = ACTIONS(921),
    [sym_text] = ACTIONS(921),
  },
  [473] = {
    [sym_display_math_shift] = ACTIONS(1003),
    [sym_inline_math_shift] = ACTIONS(1003),
    [ts_builtin_sym_end] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [474] = {
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(607),
    [sym_begin_group] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(607),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(607),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_text] = ACTIONS(607),
  },
  [475] = {
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [476] = {
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(942),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(942),
    [sym_begin_group] = ACTIONS(942),
    [sym_alignment_tab] = ACTIONS(942),
    [sym_parameter_char] = ACTIONS(942),
    [sym_superscript] = ACTIONS(942),
    [sym_subscript] = ACTIONS(942),
    [sym_active_char] = ACTIONS(942),
    [sym_text] = ACTIONS(942),
  },
  [477] = {
    [sym_display_math_shift] = ACTIONS(1005),
    [sym_inline_math_shift] = ACTIONS(1005),
    [ts_builtin_sym_end] = ACTIONS(1005),
    [sym__whitespace] = ACTIONS(1007),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_RBRACK] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1009),
  },
  [478] = {
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
  [479] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1011),
  },
  [480] = {
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_math_shift] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [481] = {
    [anon_sym_LBRACK] = ACTIONS(964),
    [anon_sym_RBRACK] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(964),
    [sym_begin_group] = ACTIONS(964),
    [sym_alignment_tab] = ACTIONS(964),
    [sym_parameter_char] = ACTIONS(964),
    [sym_superscript] = ACTIONS(964),
    [sym_subscript] = ACTIONS(964),
    [sym_active_char] = ACTIONS(964),
    [sym_text] = ACTIONS(964),
  },
  [482] = {
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [483] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [484] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1015),
  },
  [485] = {
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
  [486] = {
    [sym_display_math_shift] = ACTIONS(1017),
    [sym_inline_math_shift] = ACTIONS(1017),
    [ts_builtin_sym_end] = ACTIONS(1017),
    [sym__whitespace] = ACTIONS(1019),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1021),
  },
  [487] = {
    [sym_display_math_env_name] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [488] = {
    [sym_display_math_shift] = ACTIONS(1025),
    [sym_inline_math_shift] = ACTIONS(1025),
    [ts_builtin_sym_end] = ACTIONS(1025),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_RBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [489] = {
    [sym_inline_math_env_name] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [490] = {
    [sym_display_math_shift] = ACTIONS(1029),
    [sym_inline_math_shift] = ACTIONS(1029),
    [ts_builtin_sym_end] = ACTIONS(1029),
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
  [491] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1031),
  },
  [492] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1033),
  },
  [493] = {
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1035),
    [sym__end_of_line] = ACTIONS(1035),
  },
  [494] = {
    [anon_sym_LBRACK] = ACTIONS(1037),
    [anon_sym_RBRACK] = ACTIONS(1037),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_math_shift] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1037),
  },
  [495] = {
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1039),
    [sym__end_of_line] = ACTIONS(1039),
  },
  [496] = {
    [sym_display_math_shift] = ACTIONS(1041),
    [sym_inline_math_shift] = ACTIONS(1041),
    [ts_builtin_sym_end] = ACTIONS(1041),
    [anon_sym_LBRACK] = ACTIONS(1041),
    [anon_sym_RBRACK] = ACTIONS(1041),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1041),
  },
  [497] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(297),
  },
  [498] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [499] = {
    [anon_sym_LBRACK] = ACTIONS(1045),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1045),
    [sym_begin_group] = ACTIONS(1045),
    [sym_alignment_tab] = ACTIONS(1045),
    [sym_parameter_char] = ACTIONS(1045),
    [sym_superscript] = ACTIONS(1045),
    [sym_subscript] = ACTIONS(1045),
    [sym_active_char] = ACTIONS(1045),
    [sym_text] = ACTIONS(1045),
  },
  [500] = {
    [sym_text_group] = STATE(636),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(1047),
  },
  [501] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1047),
  },
  [502] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1051),
    [sym__end_of_line] = ACTIONS(1051),
  },
  [503] = {
    [sym_text_group] = STATE(638),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(375),
    [sym__end_of_line] = ACTIONS(1053),
  },
  [504] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1053),
  },
  [505] = {
    [sym_display_math_shift] = ACTIONS(1055),
    [sym_inline_math_shift] = ACTIONS(1055),
    [ts_builtin_sym_end] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_RBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1055),
    [sym_begin_group] = ACTIONS(1055),
    [sym_alignment_tab] = ACTIONS(1055),
    [sym_parameter_char] = ACTIONS(1055),
    [sym_superscript] = ACTIONS(1055),
    [sym_subscript] = ACTIONS(1055),
    [sym_active_char] = ACTIONS(1055),
    [sym_text] = ACTIONS(1055),
  },
  [506] = {
    [sym__whitespace] = ACTIONS(921),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(921),
    [sym__end_of_line] = ACTIONS(921),
  },
  [507] = {
    [sym_display_math_shift] = ACTIONS(1057),
    [sym_inline_math_shift] = ACTIONS(1057),
    [ts_builtin_sym_end] = ACTIONS(1057),
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
  [508] = {
    [sym_display_math_shift] = ACTIONS(1059),
    [sym_inline_math_shift] = ACTIONS(1059),
    [ts_builtin_sym_end] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [anon_sym_RBRACK] = ACTIONS(1059),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1059),
    [sym_begin_group] = ACTIONS(1059),
    [sym_alignment_tab] = ACTIONS(1059),
    [sym_parameter_char] = ACTIONS(1059),
    [sym_superscript] = ACTIONS(1059),
    [sym_subscript] = ACTIONS(1059),
    [sym_active_char] = ACTIONS(1059),
    [sym_text] = ACTIONS(1059),
  },
  [509] = {
    [sym_display_math_shift] = ACTIONS(1061),
    [sym_inline_math_shift] = ACTIONS(1061),
    [ts_builtin_sym_end] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [510] = {
    [sym_display_math_shift] = ACTIONS(1063),
    [sym_inline_math_shift] = ACTIONS(1063),
    [ts_builtin_sym_end] = ACTIONS(1063),
    [anon_sym_LBRACK] = ACTIONS(1063),
    [anon_sym_RBRACK] = ACTIONS(1063),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1063),
    [sym_begin_group] = ACTIONS(1063),
    [sym_alignment_tab] = ACTIONS(1063),
    [sym_parameter_char] = ACTIONS(1063),
    [sym_superscript] = ACTIONS(1063),
    [sym_subscript] = ACTIONS(1063),
    [sym_active_char] = ACTIONS(1063),
    [sym_text] = ACTIONS(1063),
  },
  [511] = {
    [sym_display_math_shift] = ACTIONS(1065),
    [sym_inline_math_shift] = ACTIONS(1065),
    [ts_builtin_sym_end] = ACTIONS(1065),
    [anon_sym_LBRACK] = ACTIONS(1065),
    [anon_sym_RBRACK] = ACTIONS(1065),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1065),
    [sym_begin_group] = ACTIONS(1065),
    [sym_alignment_tab] = ACTIONS(1065),
    [sym_parameter_char] = ACTIONS(1065),
    [sym_superscript] = ACTIONS(1065),
    [sym_subscript] = ACTIONS(1065),
    [sym_active_char] = ACTIONS(1065),
    [sym_text] = ACTIONS(1065),
  },
  [512] = {
    [anon_sym_LBRACK] = ACTIONS(1067),
    [anon_sym_RBRACK] = ACTIONS(1067),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1067),
    [sym_math_shift] = ACTIONS(1067),
    [sym_alignment_tab] = ACTIONS(1067),
    [sym_parameter_char] = ACTIONS(1067),
    [sym_superscript] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1067),
    [sym_active_char] = ACTIONS(1067),
    [sym_text] = ACTIONS(1067),
  },
  [513] = {
    [sym__whitespace] = ACTIONS(1069),
    [anon_sym_LBRACK] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_end_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(804),
  },
  [514] = {
    [anon_sym_LBRACK] = ACTIONS(812),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(812),
    [sym_begin_group] = ACTIONS(812),
    [sym_end_group] = ACTIONS(812),
    [sym_math_shift] = ACTIONS(812),
    [sym_alignment_tab] = ACTIONS(812),
    [sym_parameter_char] = ACTIONS(812),
    [sym_superscript] = ACTIONS(812),
    [sym_subscript] = ACTIONS(812),
    [sym_active_char] = ACTIONS(812),
    [sym_text] = ACTIONS(812),
  },
  [515] = {
    [sym__common] = STATE(545),
    [sym__text_mode_common] = STATE(545),
    [sym_inline_verbatim] = STATE(545),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(545),
    [sym_parameter] = STATE(545),
    [sym_text_env_at] = STATE(545),
    [sym__display_math_at] = STATE(545),
    [sym_tex_display_math_at] = STATE(545),
    [sym_latex_display_math_at] = STATE(545),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(545),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(545),
    [sym_tex_inline_math_at] = STATE(545),
    [sym_latex_inline_math_at] = STATE(545),
    [sym_inline_math_env_at] = STATE(545),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(545),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(545),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(545),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(545),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(545),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(545),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(545),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(545),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(545),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(545),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(545),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(545),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(545),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(545),
    [sym_opt_text_group_at] = STATE(545),
    [sym_token_at] = STATE(545),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(545),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1071),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [516] = {
    [sym__common] = STATE(365),
    [sym__math_mode_common] = STATE(365),
    [sym__math_mode_at] = STATE(365),
    [sym_math_mode_at] = STATE(641),
    [sym_parameter] = STATE(365),
    [sym_math_env_at] = STATE(365),
    [sym_tag_at] = STATE(365),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(365),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(365),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(365),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(365),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(365),
    [sym_opt_math_group_at] = STATE(365),
    [sym_token_at] = STATE(365),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(365),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [517] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(1073),
  },
  [518] = {
    [sym_verb_body] = ACTIONS(1075),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [519] = {
    [sym_end_display_math] = STATE(645),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1077),
  },
  [520] = {
    [sym_end_inline_math] = STATE(647),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1079),
  },
  [521] = {
    [sym_display_math_end] = STATE(648),
    [sym_end_token] = STATE(649),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [522] = {
    [sym_inline_math_end] = STATE(650),
    [sym_end_token] = STATE(651),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [523] = {
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [524] = {
    [sym_verbatim_end] = STATE(652),
    [sym_end_token] = STATE(525),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(115),
  },
  [525] = {
    [sym_verbatim_env_group] = STATE(654),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1081),
  },
  [526] = {
    [anon_sym_LBRACK] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(864),
    [sym_begin_group] = ACTIONS(864),
    [sym_end_group] = ACTIONS(864),
    [sym_math_shift] = ACTIONS(864),
    [sym_alignment_tab] = ACTIONS(864),
    [sym_parameter_char] = ACTIONS(864),
    [sym_superscript] = ACTIONS(864),
    [sym_subscript] = ACTIONS(864),
    [sym_active_char] = ACTIONS(864),
    [sym_text] = ACTIONS(864),
  },
  [527] = {
    [sym__common] = STATE(399),
    [sym__text_mode_common] = STATE(399),
    [sym_inline_verbatim] = STATE(399),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(399),
    [sym_parameter] = STATE(399),
    [sym_text_env_at] = STATE(399),
    [sym__display_math_at] = STATE(399),
    [sym_tex_display_math_at] = STATE(399),
    [sym_latex_display_math_at] = STATE(399),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(399),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(399),
    [sym_tex_inline_math_at] = STATE(399),
    [sym_latex_inline_math_at] = STATE(399),
    [sym_inline_math_env_at] = STATE(399),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(399),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(399),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_end] = STATE(655),
    [sym_end_token] = STATE(413),
    [sym_documentclass] = STATE(399),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(399),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(399),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(399),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(399),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(399),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(399),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(399),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(399),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(399),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(399),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(399),
    [sym_opt_text_group_at] = STATE(399),
    [sym_token_at] = STATE(399),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(399),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(467),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(467),
    [sym_text] = ACTIONS(467),
  },
  [528] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_text] = ACTIONS(1083),
  },
  [529] = {
    [anon_sym_LBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [530] = {
    [sym_simple_text_group] = STATE(658),
    [sym__whitespace] = ACTIONS(1085),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [531] = {
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_end_group] = ACTIONS(395),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [532] = {
    [sym_simple_text_group] = STATE(660),
    [sym__whitespace] = ACTIONS(1087),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [533] = {
    [anon_sym_LBRACK] = ACTIONS(876),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [534] = {
    [anon_sym_LBRACK] = ACTIONS(878),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(878),
    [sym_begin_group] = ACTIONS(878),
    [sym_end_group] = ACTIONS(878),
    [sym_math_shift] = ACTIONS(878),
    [sym_alignment_tab] = ACTIONS(878),
    [sym_parameter_char] = ACTIONS(878),
    [sym_superscript] = ACTIONS(878),
    [sym_subscript] = ACTIONS(878),
    [sym_active_char] = ACTIONS(878),
    [sym_text] = ACTIONS(878),
  },
  [535] = {
    [sym_text_group_at] = STATE(662),
    [sym__whitespace] = ACTIONS(1089),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [536] = {
    [anon_sym_LBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [537] = {
    [anon_sym_LBRACK] = ACTIONS(886),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [538] = {
    [sym_text_group_at] = STATE(664),
    [sym__whitespace] = ACTIONS(1091),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [539] = {
    [anon_sym_LBRACK] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(890),
    [sym_begin_group] = ACTIONS(890),
    [sym_end_group] = ACTIONS(890),
    [sym_math_shift] = ACTIONS(890),
    [sym_alignment_tab] = ACTIONS(890),
    [sym_parameter_char] = ACTIONS(890),
    [sym_superscript] = ACTIONS(890),
    [sym_subscript] = ACTIONS(890),
    [sym_active_char] = ACTIONS(890),
    [sym_text] = ACTIONS(890),
  },
  [540] = {
    [anon_sym_LBRACK] = ACTIONS(892),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(892),
    [sym_begin_group] = ACTIONS(892),
    [sym_end_group] = ACTIONS(892),
    [sym_math_shift] = ACTIONS(892),
    [sym_alignment_tab] = ACTIONS(892),
    [sym_parameter_char] = ACTIONS(892),
    [sym_superscript] = ACTIONS(892),
    [sym_subscript] = ACTIONS(892),
    [sym_active_char] = ACTIONS(892),
    [sym_text] = ACTIONS(892),
  },
  [541] = {
    [anon_sym_LBRACK] = ACTIONS(894),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [542] = {
    [anon_sym_LBRACK] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(896),
    [sym_begin_group] = ACTIONS(896),
    [sym_end_group] = ACTIONS(896),
    [sym_math_shift] = ACTIONS(896),
    [sym_alignment_tab] = ACTIONS(896),
    [sym_parameter_char] = ACTIONS(896),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(896),
    [sym_active_char] = ACTIONS(896),
    [sym_text] = ACTIONS(896),
  },
  [543] = {
    [sym__common] = STATE(592),
    [sym__text_mode_common] = STATE(592),
    [sym_inline_verbatim] = STATE(592),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(592),
    [sym_parameter] = STATE(592),
    [sym_text_env_at] = STATE(592),
    [sym__display_math_at] = STATE(592),
    [sym_tex_display_math_at] = STATE(592),
    [sym_latex_display_math_at] = STATE(592),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(592),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(592),
    [sym_tex_inline_math_at] = STATE(592),
    [sym_latex_inline_math_at] = STATE(592),
    [sym_inline_math_env_at] = STATE(592),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(592),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(592),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(592),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(592),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(592),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(592),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(592),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(592),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(592),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(592),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(592),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(592),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(592),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(592),
    [sym_opt_text_group_at] = STATE(592),
    [sym_token_at] = STATE(592),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(665),
    [aux_sym_text_mode_at_repeat1] = STATE(592),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [544] = {
    [anon_sym_LBRACK] = ACTIONS(1093),
    [anon_sym_RBRACK] = ACTIONS(1093),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1093),
    [sym_begin_group] = ACTIONS(1093),
    [sym_math_shift] = ACTIONS(1093),
    [sym_alignment_tab] = ACTIONS(1093),
    [sym_parameter_char] = ACTIONS(1093),
    [sym_superscript] = ACTIONS(1093),
    [sym_subscript] = ACTIONS(1093),
    [sym_active_char] = ACTIONS(1093),
    [sym_text] = ACTIONS(1093),
  },
  [545] = {
    [sym__common] = STATE(545),
    [sym__text_mode_common] = STATE(545),
    [sym_inline_verbatim] = STATE(545),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(545),
    [sym_parameter] = STATE(545),
    [sym_text_env_at] = STATE(545),
    [sym__display_math_at] = STATE(545),
    [sym_tex_display_math_at] = STATE(545),
    [sym_latex_display_math_at] = STATE(545),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(545),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(545),
    [sym_tex_inline_math_at] = STATE(545),
    [sym_latex_inline_math_at] = STATE(545),
    [sym_inline_math_env_at] = STATE(545),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(545),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(545),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(545),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(545),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(545),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(545),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(545),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(545),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(545),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(545),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(545),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(545),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(545),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(545),
    [sym_opt_text_group_at] = STATE(545),
    [sym_token_at] = STATE(545),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(545),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1095),
    [sym_begin_group] = ACTIONS(1098),
    [sym_end_group] = ACTIONS(1101),
    [sym_math_shift] = ACTIONS(1103),
    [sym_alignment_tab] = ACTIONS(1106),
    [sym_parameter_char] = ACTIONS(1109),
    [sym_superscript] = ACTIONS(1112),
    [sym_subscript] = ACTIONS(1112),
    [sym_active_char] = ACTIONS(1106),
    [sym_text] = ACTIONS(1106),
  },
  [546] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(516),
    [anon_sym_begin] = ACTIONS(53),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(518),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(806),
  },
  [547] = {
    [sym__common] = STATE(667),
    [sym__math_mode_common] = STATE(667),
    [sym__math_mode_at] = STATE(667),
    [sym_parameter] = STATE(667),
    [sym_math_env_at] = STATE(667),
    [sym_tag_at] = STATE(667),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(667),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(667),
    [sym_include_token] = STATE(349),
    [sym_storage] = STATE(667),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(667),
    [sym_catcode_token] = STATE(187),
    [sym_math_group_at] = STATE(667),
    [sym_opt_math_group_at] = STATE(667),
    [sym_token_at] = STATE(667),
    [sym_begin_opt] = STATE(551),
    [aux_sym_math_mode_at_repeat1] = STATE(667),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(1115),
    [sym_alignment_tab] = ACTIONS(1117),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(1117),
    [sym_subscript] = ACTIONS(1117),
    [sym_active_char] = ACTIONS(1117),
    [sym_text] = ACTIONS(1117),
  },
  [548] = {
    [anon_sym_LBRACK] = ACTIONS(1119),
    [anon_sym_RBRACK] = ACTIONS(1119),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1119),
    [sym_begin_group] = ACTIONS(1119),
    [sym_math_shift] = ACTIONS(1119),
    [sym_alignment_tab] = ACTIONS(1119),
    [sym_parameter_char] = ACTIONS(1119),
    [sym_superscript] = ACTIONS(1119),
    [sym_subscript] = ACTIONS(1119),
    [sym_active_char] = ACTIONS(1119),
    [sym_text] = ACTIONS(1119),
  },
  [549] = {
    [sym_math_text_group_at] = STATE(669),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1121),
  },
  [550] = {
    [sym__common] = STATE(671),
    [sym__math_mode_common] = STATE(671),
    [sym__math_mode_at] = STATE(671),
    [sym_parameter] = STATE(671),
    [sym_math_env_at] = STATE(671),
    [sym_tag_at] = STATE(671),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(671),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(670),
    [sym_end_token] = STATE(413),
    [sym_include_at] = STATE(671),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(671),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(671),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(671),
    [sym_opt_math_group_at] = STATE(671),
    [sym_token_at] = STATE(671),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(671),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(1123),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(1123),
    [sym_subscript] = ACTIONS(1123),
    [sym_active_char] = ACTIONS(1123),
    [sym_text] = ACTIONS(1123),
  },
  [551] = {
    [sym__common] = STATE(673),
    [sym__math_mode_common] = STATE(673),
    [sym__math_mode_at] = STATE(673),
    [sym_parameter] = STATE(673),
    [sym_math_env_at] = STATE(673),
    [sym_tag_at] = STATE(673),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(673),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(673),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(673),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(673),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(673),
    [sym_opt_math_group_at] = STATE(673),
    [sym_token_at] = STATE(673),
    [sym_begin_opt] = STATE(364),
    [sym_end_opt] = STATE(672),
    [aux_sym_math_mode_at_repeat1] = STATE(673),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(1125),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(1125),
    [sym_subscript] = ACTIONS(1125),
    [sym_active_char] = ACTIONS(1125),
    [sym_text] = ACTIONS(1125),
  },
  [552] = {
    [sym__common] = STATE(675),
    [sym__math_mode_common] = STATE(675),
    [sym__math_mode_at] = STATE(675),
    [sym_parameter] = STATE(675),
    [sym_math_env_at] = STATE(675),
    [sym_tag_at] = STATE(675),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(675),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(675),
    [sym_include_token] = STATE(349),
    [sym_storage] = STATE(675),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(675),
    [sym_catcode_token] = STATE(187),
    [sym_math_group_at] = STATE(675),
    [sym_opt_math_group_at] = STATE(675),
    [sym_token_at] = STATE(675),
    [sym_begin_opt] = STATE(551),
    [aux_sym_math_mode_at_repeat1] = STATE(675),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(1127),
    [sym_alignment_tab] = ACTIONS(1129),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(1129),
    [sym_subscript] = ACTIONS(1129),
    [sym_active_char] = ACTIONS(1129),
    [sym_text] = ACTIONS(1129),
  },
  [553] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(1131),
  },
  [554] = {
    [anon_sym_LBRACK] = ACTIONS(1133),
    [anon_sym_RBRACK] = ACTIONS(1133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1133),
    [sym_begin_group] = ACTIONS(1133),
    [sym_math_shift] = ACTIONS(1133),
    [sym_alignment_tab] = ACTIONS(1133),
    [sym_parameter_char] = ACTIONS(1133),
    [sym_superscript] = ACTIONS(1133),
    [sym_subscript] = ACTIONS(1133),
    [sym_active_char] = ACTIONS(1133),
    [sym_text] = ACTIONS(1133),
  },
  [555] = {
    [sym__common] = STATE(679),
    [sym__text_mode_common] = STATE(679),
    [sym_inline_verbatim] = STATE(679),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(679),
    [sym_text_mode_at] = STATE(678),
    [sym_parameter] = STATE(679),
    [sym_text_env_at] = STATE(679),
    [sym__display_math_at] = STATE(679),
    [sym_tex_display_math_at] = STATE(679),
    [sym_latex_display_math_at] = STATE(679),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(679),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(679),
    [sym_tex_inline_math_at] = STATE(679),
    [sym_latex_inline_math_at] = STATE(679),
    [sym_inline_math_env_at] = STATE(679),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(679),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(679),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(679),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(679),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(679),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(679),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(679),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(679),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(679),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(679),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(679),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(679),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(679),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(679),
    [sym_opt_text_group_at] = STATE(679),
    [sym_token_at] = STATE(679),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(679),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1135),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(1137),
    [sym_text] = ACTIONS(1137),
  },
  [556] = {
    [anon_sym_LBRACK] = ACTIONS(1139),
    [anon_sym_RBRACK] = ACTIONS(1139),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1139),
    [sym_begin_group] = ACTIONS(1139),
    [sym_math_shift] = ACTIONS(1139),
    [sym_alignment_tab] = ACTIONS(1139),
    [sym_parameter_char] = ACTIONS(1139),
    [sym_superscript] = ACTIONS(1139),
    [sym_subscript] = ACTIONS(1139),
    [sym_active_char] = ACTIONS(1139),
    [sym_text] = ACTIONS(1139),
  },
  [557] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(319),
    [anon_sym_begin] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(361),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(321),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__name_at] = ACTIONS(423),
  },
  [558] = {
    [anon_sym_LBRACK] = ACTIONS(1141),
    [anon_sym_RBRACK] = ACTIONS(1141),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1141),
    [sym_begin_group] = ACTIONS(1141),
    [sym_math_shift] = ACTIONS(1141),
    [sym_alignment_tab] = ACTIONS(1141),
    [sym_parameter_char] = ACTIONS(1141),
    [sym_superscript] = ACTIONS(1141),
    [sym_subscript] = ACTIONS(1141),
    [sym_active_char] = ACTIONS(1141),
    [sym_text] = ACTIONS(1141),
  },
  [559] = {
    [sym__common] = STATE(566),
    [sym__math_mode_common] = STATE(566),
    [sym__math_mode_at] = STATE(566),
    [sym_parameter] = STATE(566),
    [sym_math_env_at] = STATE(566),
    [sym_tag_at] = STATE(566),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(566),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(680),
    [sym_end_token] = STATE(283),
    [sym_include_at] = STATE(566),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(566),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(566),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(566),
    [sym_opt_math_group_at] = STATE(566),
    [sym_token_at] = STATE(566),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(566),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(858),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(858),
    [sym_subscript] = ACTIONS(858),
    [sym_active_char] = ACTIONS(858),
    [sym_text] = ACTIONS(858),
  },
  [560] = {
    [anon_sym_LBRACK] = ACTIONS(1143),
    [anon_sym_RBRACK] = ACTIONS(1143),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1143),
    [sym_begin_group] = ACTIONS(1143),
    [sym_math_shift] = ACTIONS(1143),
    [sym_alignment_tab] = ACTIONS(1143),
    [sym_parameter_char] = ACTIONS(1143),
    [sym_superscript] = ACTIONS(1143),
    [sym_subscript] = ACTIONS(1143),
    [sym_active_char] = ACTIONS(1143),
    [sym_text] = ACTIONS(1143),
  },
  [561] = {
    [sym__common] = STATE(682),
    [sym__math_mode_common] = STATE(682),
    [sym__math_mode_at] = STATE(682),
    [sym_parameter] = STATE(682),
    [sym_math_env_at] = STATE(682),
    [sym_tag_at] = STATE(682),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(682),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(682),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(682),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(682),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(682),
    [sym_opt_math_group_at] = STATE(682),
    [sym_token_at] = STATE(682),
    [sym_begin_opt] = STATE(364),
    [sym_end_opt] = STATE(681),
    [aux_sym_math_mode_at_repeat1] = STATE(682),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(1145),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1145),
    [sym_active_char] = ACTIONS(1145),
    [sym_text] = ACTIONS(1145),
  },
  [562] = {
    [sym__common] = STATE(562),
    [sym__math_mode_common] = STATE(562),
    [sym__math_mode_at] = STATE(562),
    [sym_parameter] = STATE(562),
    [sym_math_env_at] = STATE(562),
    [sym_tag_at] = STATE(562),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(562),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(562),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(562),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(562),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(562),
    [sym_opt_math_group_at] = STATE(562),
    [sym_token_at] = STATE(562),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(562),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(1147),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1150),
    [sym_begin_group] = ACTIONS(1153),
    [sym_math_shift] = ACTIONS(1156),
    [sym_alignment_tab] = ACTIONS(1158),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1158),
    [sym_subscript] = ACTIONS(1158),
    [sym_active_char] = ACTIONS(1158),
    [sym_text] = ACTIONS(1158),
  },
  [563] = {
    [sym_verb_delim] = ACTIONS(1164),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [564] = {
    [anon_sym_RBRACK] = ACTIONS(1166),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [565] = {
    [anon_sym_LBRACK] = ACTIONS(1168),
    [anon_sym_RBRACK] = ACTIONS(1168),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1168),
    [sym_begin_group] = ACTIONS(1168),
    [sym_math_shift] = ACTIONS(1168),
    [sym_alignment_tab] = ACTIONS(1168),
    [sym_parameter_char] = ACTIONS(1168),
    [sym_superscript] = ACTIONS(1168),
    [sym_subscript] = ACTIONS(1168),
    [sym_active_char] = ACTIONS(1168),
    [sym_text] = ACTIONS(1168),
  },
  [566] = {
    [sym__common] = STATE(566),
    [sym__math_mode_common] = STATE(566),
    [sym__math_mode_at] = STATE(566),
    [sym_parameter] = STATE(566),
    [sym_math_env_at] = STATE(566),
    [sym_tag_at] = STATE(566),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(566),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(566),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(566),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(566),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(566),
    [sym_opt_math_group_at] = STATE(566),
    [sym_token_at] = STATE(566),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(566),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(1147),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1150),
    [sym_begin_group] = ACTIONS(1153),
    [sym_alignment_tab] = ACTIONS(1170),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1170),
    [sym_subscript] = ACTIONS(1170),
    [sym_active_char] = ACTIONS(1170),
    [sym_text] = ACTIONS(1170),
  },
  [567] = {
    [anon_sym_RPAREN] = ACTIONS(1173),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [568] = {
    [anon_sym_LBRACK] = ACTIONS(1175),
    [anon_sym_RBRACK] = ACTIONS(1175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1175),
    [sym_begin_group] = ACTIONS(1175),
    [sym_math_shift] = ACTIONS(1175),
    [sym_alignment_tab] = ACTIONS(1175),
    [sym_parameter_char] = ACTIONS(1175),
    [sym_superscript] = ACTIONS(1175),
    [sym_subscript] = ACTIONS(1175),
    [sym_active_char] = ACTIONS(1175),
    [sym_text] = ACTIONS(1175),
  },
  [569] = {
    [anon_sym_LBRACK] = ACTIONS(1177),
    [anon_sym_RBRACK] = ACTIONS(1177),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1177),
    [sym_begin_group] = ACTIONS(1177),
    [sym_math_shift] = ACTIONS(1177),
    [sym_alignment_tab] = ACTIONS(1177),
    [sym_parameter_char] = ACTIONS(1177),
    [sym_superscript] = ACTIONS(1177),
    [sym_subscript] = ACTIONS(1177),
    [sym_active_char] = ACTIONS(1177),
    [sym_text] = ACTIONS(1177),
  },
  [570] = {
    [sym_display_math_env_group] = STATE(687),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1179),
  },
  [571] = {
    [anon_sym_LBRACK] = ACTIONS(1181),
    [anon_sym_RBRACK] = ACTIONS(1181),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1181),
    [sym_begin_group] = ACTIONS(1181),
    [sym_math_shift] = ACTIONS(1181),
    [sym_alignment_tab] = ACTIONS(1181),
    [sym_parameter_char] = ACTIONS(1181),
    [sym_superscript] = ACTIONS(1181),
    [sym_subscript] = ACTIONS(1181),
    [sym_active_char] = ACTIONS(1181),
    [sym_text] = ACTIONS(1181),
  },
  [572] = {
    [sym_inline_math_env_group] = STATE(689),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1183),
  },
  [573] = {
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_RBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(730),
    [sym_begin_group] = ACTIONS(730),
    [sym_math_shift] = ACTIONS(730),
    [sym_alignment_tab] = ACTIONS(730),
    [sym_parameter_char] = ACTIONS(730),
    [sym_superscript] = ACTIONS(730),
    [sym_subscript] = ACTIONS(730),
    [sym_active_char] = ACTIONS(730),
    [sym_text] = ACTIONS(730),
  },
  [574] = {
    [sym_verbatim_env_name] = ACTIONS(1185),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [575] = {
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_math_shift] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [576] = {
    [anon_sym_LBRACK] = ACTIONS(1187),
    [anon_sym_RBRACK] = ACTIONS(1187),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1187),
    [sym_begin_group] = ACTIONS(1187),
    [sym_math_shift] = ACTIONS(1187),
    [sym_alignment_tab] = ACTIONS(1187),
    [sym_parameter_char] = ACTIONS(1187),
    [sym_superscript] = ACTIONS(1187),
    [sym_subscript] = ACTIONS(1187),
    [sym_active_char] = ACTIONS(1187),
    [sym_text] = ACTIONS(1187),
  },
  [577] = {
    [sym__common] = STATE(692),
    [sym__text_mode_common] = STATE(692),
    [sym_inline_verbatim] = STATE(692),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(692),
    [sym_parameter] = STATE(692),
    [sym_text_env_at] = STATE(692),
    [sym__display_math_at] = STATE(692),
    [sym_tex_display_math_at] = STATE(692),
    [sym_latex_display_math_at] = STATE(692),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(692),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(692),
    [sym_tex_inline_math_at] = STATE(692),
    [sym_latex_inline_math_at] = STATE(692),
    [sym_inline_math_env_at] = STATE(692),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(692),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(692),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(692),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(692),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(692),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(692),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(692),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(692),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(692),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(692),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(692),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(692),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(692),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(692),
    [sym_opt_text_group_at] = STATE(692),
    [sym_token_at] = STATE(692),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(692),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1189),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(1191),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(1191),
    [sym_text] = ACTIONS(1191),
  },
  [578] = {
    [anon_sym_LBRACK] = ACTIONS(1193),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1193),
    [sym_begin_group] = ACTIONS(1193),
    [sym_alignment_tab] = ACTIONS(1193),
    [sym_parameter_char] = ACTIONS(1193),
    [sym_superscript] = ACTIONS(1193),
    [sym_subscript] = ACTIONS(1193),
    [sym_active_char] = ACTIONS(1193),
    [sym_text] = ACTIONS(1193),
  },
  [579] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1195),
  },
  [580] = {
    [sym_text_group_at] = STATE(695),
    [sym__whitespace] = ACTIONS(1197),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(868),
    [sym__end_of_line] = ACTIONS(1195),
  },
  [581] = {
    [sym_simple_text_group] = STATE(696),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [582] = {
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_math_shift] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_active_char] = ACTIONS(784),
    [sym_text] = ACTIONS(784),
  },
  [583] = {
    [sym_simple_text_group] = STATE(697),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(185),
  },
  [584] = {
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_math_shift] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(786),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [585] = {
    [sym_text_group_at] = STATE(698),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [586] = {
    [anon_sym_LBRACK] = ACTIONS(1199),
    [anon_sym_RBRACK] = ACTIONS(1199),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1199),
    [sym_begin_group] = ACTIONS(1199),
    [sym_math_shift] = ACTIONS(1199),
    [sym_alignment_tab] = ACTIONS(1199),
    [sym_parameter_char] = ACTIONS(1199),
    [sym_superscript] = ACTIONS(1199),
    [sym_subscript] = ACTIONS(1199),
    [sym_active_char] = ACTIONS(1199),
    [sym_text] = ACTIONS(1199),
  },
  [587] = {
    [sym__whitespace] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(896),
    [sym__end_of_line] = ACTIONS(896),
  },
  [588] = {
    [sym__common] = STATE(592),
    [sym__text_mode_common] = STATE(592),
    [sym_inline_verbatim] = STATE(592),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(592),
    [sym_parameter] = STATE(592),
    [sym_text_env_at] = STATE(592),
    [sym__display_math_at] = STATE(592),
    [sym_tex_display_math_at] = STATE(592),
    [sym_latex_display_math_at] = STATE(592),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(592),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(592),
    [sym_tex_inline_math_at] = STATE(592),
    [sym_latex_inline_math_at] = STATE(592),
    [sym_inline_math_env_at] = STATE(592),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(592),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(592),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(592),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(592),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(592),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(592),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(592),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(592),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(592),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(592),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(592),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(592),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(592),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(592),
    [sym_opt_text_group_at] = STATE(592),
    [sym_token_at] = STATE(592),
    [sym_begin_opt] = STATE(168),
    [sym_end_opt] = STATE(699),
    [aux_sym_text_mode_at_repeat1] = STATE(592),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [589] = {
    [sym_text_group_at] = STATE(700),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(133),
  },
  [590] = {
    [anon_sym_LBRACK] = ACTIONS(1201),
    [anon_sym_RBRACK] = ACTIONS(1201),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1201),
    [sym_begin_group] = ACTIONS(1201),
    [sym_math_shift] = ACTIONS(1201),
    [sym_alignment_tab] = ACTIONS(1201),
    [sym_parameter_char] = ACTIONS(1201),
    [sym_superscript] = ACTIONS(1201),
    [sym_subscript] = ACTIONS(1201),
    [sym_active_char] = ACTIONS(1201),
    [sym_text] = ACTIONS(1201),
  },
  [591] = {
    [anon_sym_LBRACK] = ACTIONS(1203),
    [anon_sym_RBRACK] = ACTIONS(1203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1203),
    [sym_begin_group] = ACTIONS(1203),
    [sym_math_shift] = ACTIONS(1203),
    [sym_alignment_tab] = ACTIONS(1203),
    [sym_parameter_char] = ACTIONS(1203),
    [sym_superscript] = ACTIONS(1203),
    [sym_subscript] = ACTIONS(1203),
    [sym_active_char] = ACTIONS(1203),
    [sym_text] = ACTIONS(1203),
  },
  [592] = {
    [sym__common] = STATE(592),
    [sym__text_mode_common] = STATE(592),
    [sym_inline_verbatim] = STATE(592),
    [sym_verb_token] = STATE(148),
    [sym__text_mode_at] = STATE(592),
    [sym_parameter] = STATE(592),
    [sym_text_env_at] = STATE(592),
    [sym__display_math_at] = STATE(592),
    [sym_tex_display_math_at] = STATE(592),
    [sym_latex_display_math_at] = STATE(592),
    [sym_begin_display_math] = STATE(150),
    [sym_begin_inline_math] = STATE(151),
    [sym_display_math_env_at] = STATE(592),
    [sym_display_math_begin_at] = STATE(152),
    [sym__inline_math_at] = STATE(592),
    [sym_tex_inline_math_at] = STATE(592),
    [sym_latex_inline_math_at] = STATE(592),
    [sym_inline_math_env_at] = STATE(592),
    [sym_inline_math_begin] = STATE(153),
    [sym_verbatim_env] = STATE(592),
    [sym_verbatim_begin] = STATE(154),
    [sym_escaped] = STATE(592),
    [sym_begin] = STATE(155),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(592),
    [sym_documentclass_token] = STATE(157),
    [sym_usepackage] = STATE(592),
    [sym_usepackage_token] = STATE(158),
    [sym_include_at] = STATE(592),
    [sym_include_token] = STATE(159),
    [sym_section_at] = STATE(592),
    [sym_section_token] = STATE(160),
    [sym_storage] = STATE(592),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(592),
    [sym_catcode_token] = STATE(105),
    [sym_emph_at] = STATE(592),
    [sym_emph_token] = STATE(161),
    [sym_footnote_at] = STATE(592),
    [sym_footnote_token] = STATE(162),
    [sym_textbf_at] = STATE(592),
    [sym_textbf_token] = STATE(163),
    [sym_textit_at] = STATE(592),
    [sym_textit_token] = STATE(164),
    [sym_texttt_at] = STATE(592),
    [sym_texttt_token] = STATE(165),
    [sym_text_group_at] = STATE(592),
    [sym_opt_text_group_at] = STATE(592),
    [sym_token_at] = STATE(592),
    [sym_begin_opt] = STATE(168),
    [aux_sym_text_mode_at_repeat1] = STATE(592),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(1101),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(903),
    [sym_begin_group] = ACTIONS(906),
    [sym_math_shift] = ACTIONS(909),
    [sym_alignment_tab] = ACTIONS(1205),
    [sym_parameter_char] = ACTIONS(915),
    [sym_superscript] = ACTIONS(918),
    [sym_subscript] = ACTIONS(918),
    [sym_active_char] = ACTIONS(1205),
    [sym_text] = ACTIONS(1205),
  },
  [593] = {
    [anon_sym_LBRACK] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [594] = {
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_end_group] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_text] = ACTIONS(621),
  },
  [595] = {
    [anon_sym_LBRACK] = ACTIONS(942),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(942),
    [sym_begin_group] = ACTIONS(942),
    [sym_end_group] = ACTIONS(942),
    [sym_alignment_tab] = ACTIONS(942),
    [sym_parameter_char] = ACTIONS(942),
    [sym_superscript] = ACTIONS(942),
    [sym_subscript] = ACTIONS(942),
    [sym_active_char] = ACTIONS(942),
    [sym_text] = ACTIONS(942),
  },
  [596] = {
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
  [597] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1208),
  },
  [598] = {
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [599] = {
    [anon_sym_LBRACK] = ACTIONS(964),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(964),
    [sym_begin_group] = ACTIONS(964),
    [sym_end_group] = ACTIONS(964),
    [sym_alignment_tab] = ACTIONS(964),
    [sym_parameter_char] = ACTIONS(964),
    [sym_superscript] = ACTIONS(964),
    [sym_subscript] = ACTIONS(964),
    [sym_active_char] = ACTIONS(964),
    [sym_text] = ACTIONS(964),
  },
  [600] = {
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_end_group] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [601] = {
    [sym__common] = STATE(270),
    [sym__text_mode_common] = STATE(270),
    [sym_inline_verbatim] = STATE(270),
    [sym_verb_token] = STATE(75),
    [sym__text_mode] = STATE(270),
    [sym_text_mode_at_region] = STATE(270),
    [sym_parameter] = STATE(270),
    [sym_text_env] = STATE(270),
    [sym__display_math] = STATE(270),
    [sym_tex_display_math] = STATE(270),
    [sym_latex_display_math] = STATE(270),
    [sym_begin_display_math] = STATE(76),
    [sym_begin_inline_math] = STATE(77),
    [sym_display_math_env] = STATE(270),
    [sym_display_math_begin] = STATE(78),
    [sym__inline_math] = STATE(270),
    [sym_tex_inline_math] = STATE(270),
    [sym_latex_inline_math] = STATE(270),
    [sym_inline_math_env] = STATE(270),
    [sym_inline_math_begin] = STATE(79),
    [sym_verbatim_env] = STATE(270),
    [sym_verbatim_begin] = STATE(80),
    [sym_escaped] = STATE(270),
    [sym_begin] = STATE(81),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(270),
    [sym_documentclass_token] = STATE(82),
    [sym_usepackage] = STATE(270),
    [sym_usepackage_token] = STATE(83),
    [sym_include] = STATE(270),
    [sym_include_token] = STATE(84),
    [sym_section] = STATE(270),
    [sym_section_token] = STATE(85),
    [sym_storage] = STATE(270),
    [sym_storage_token] = STATE(86),
    [sym_catcode] = STATE(270),
    [sym_catcode_token] = STATE(87),
    [sym_emph] = STATE(270),
    [sym_emph_token] = STATE(88),
    [sym_footnote] = STATE(270),
    [sym_footnote_token] = STATE(89),
    [sym_textbf] = STATE(270),
    [sym_textbf_token] = STATE(90),
    [sym_textit] = STATE(270),
    [sym_textit_token] = STATE(91),
    [sym_texttt] = STATE(270),
    [sym_texttt_token] = STATE(92),
    [sym_makeatletter] = STATE(93),
    [sym_makeatletter_token] = STATE(30),
    [sym_text_group] = STATE(270),
    [sym_opt_text_group] = STATE(270),
    [sym_token] = STATE(270),
    [sym_begin_opt] = STATE(94),
    [aux_sym_text_mode_repeat1] = STATE(270),
    [aux_sym_parameter_repeat1] = STATE(96),
    [sym_display_math_shift] = ACTIONS(81),
    [sym_inline_math_shift] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(1210),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [602] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_number] = ACTIONS(1212),
  },
  [603] = {
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
  [604] = {
    [sym_implicit_math_shift] = ACTIONS(1214),
    [anon_sym_LBRACK] = ACTIONS(1214),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1214),
    [sym_begin_group] = ACTIONS(1214),
    [sym_math_shift] = ACTIONS(1214),
    [sym_alignment_tab] = ACTIONS(1214),
    [sym_parameter_char] = ACTIONS(1214),
    [sym_superscript] = ACTIONS(1214),
    [sym_subscript] = ACTIONS(1214),
    [sym_active_char] = ACTIONS(1214),
    [sym_text] = ACTIONS(1214),
  },
  [605] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1216),
  },
  [606] = {
    [anon_sym_LBRACK] = ACTIONS(1041),
    [anon_sym_RBRACK] = ACTIONS(1041),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_math_shift] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1041),
  },
  [607] = {
    [sym_implicit_math_shift] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_math_shift] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [608] = {
    [sym_implicit_math_shift] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_math_shift] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [609] = {
    [anon_sym_LBRACK] = ACTIONS(1218),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1218),
  },
  [610] = {
    [sym_display_math_shift] = ACTIONS(956),
    [sym_inline_math_shift] = ACTIONS(956),
    [anon_sym_LBRACK] = ACTIONS(956),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(956),
    [sym_begin_group] = ACTIONS(956),
    [sym_end_group] = ACTIONS(956),
    [sym_alignment_tab] = ACTIONS(956),
    [sym_parameter_char] = ACTIONS(956),
    [sym_superscript] = ACTIONS(956),
    [sym_subscript] = ACTIONS(956),
    [sym_active_char] = ACTIONS(956),
    [sym_text] = ACTIONS(956),
  },
  [611] = {
    [sym_display_math_shift] = ACTIONS(1003),
    [sym_inline_math_shift] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [612] = {
    [sym_display_math_shift] = ACTIONS(1005),
    [sym_inline_math_shift] = ACTIONS(1005),
    [sym__whitespace] = ACTIONS(1220),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1009),
  },
  [613] = {
    [sym_display_math_shift] = ACTIONS(1017),
    [sym_inline_math_shift] = ACTIONS(1017),
    [sym__whitespace] = ACTIONS(1222),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1021),
  },
  [614] = {
    [sym_display_math_env_name] = ACTIONS(1224),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [615] = {
    [sym_display_math_shift] = ACTIONS(1025),
    [sym_inline_math_shift] = ACTIONS(1025),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [616] = {
    [sym_inline_math_env_name] = ACTIONS(1226),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [617] = {
    [sym_display_math_shift] = ACTIONS(1029),
    [sym_inline_math_shift] = ACTIONS(1029),
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
  [618] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1228),
  },
  [619] = {
    [sym_display_math_shift] = ACTIONS(1041),
    [sym_inline_math_shift] = ACTIONS(1041),
    [anon_sym_LBRACK] = ACTIONS(1041),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_end_group] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1041),
  },
  [620] = {
    [sym_display_math_shift] = ACTIONS(1055),
    [sym_inline_math_shift] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1055),
    [sym_begin_group] = ACTIONS(1055),
    [sym_end_group] = ACTIONS(1055),
    [sym_alignment_tab] = ACTIONS(1055),
    [sym_parameter_char] = ACTIONS(1055),
    [sym_superscript] = ACTIONS(1055),
    [sym_subscript] = ACTIONS(1055),
    [sym_active_char] = ACTIONS(1055),
    [sym_text] = ACTIONS(1055),
  },
  [621] = {
    [sym_display_math_shift] = ACTIONS(1057),
    [sym_inline_math_shift] = ACTIONS(1057),
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
  [622] = {
    [sym_display_math_shift] = ACTIONS(1059),
    [sym_inline_math_shift] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1059),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1059),
    [sym_begin_group] = ACTIONS(1059),
    [sym_end_group] = ACTIONS(1059),
    [sym_alignment_tab] = ACTIONS(1059),
    [sym_parameter_char] = ACTIONS(1059),
    [sym_superscript] = ACTIONS(1059),
    [sym_subscript] = ACTIONS(1059),
    [sym_active_char] = ACTIONS(1059),
    [sym_text] = ACTIONS(1059),
  },
  [623] = {
    [sym_display_math_shift] = ACTIONS(1061),
    [sym_inline_math_shift] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_end_group] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [624] = {
    [sym_display_math_shift] = ACTIONS(1063),
    [sym_inline_math_shift] = ACTIONS(1063),
    [anon_sym_LBRACK] = ACTIONS(1063),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1063),
    [sym_begin_group] = ACTIONS(1063),
    [sym_end_group] = ACTIONS(1063),
    [sym_alignment_tab] = ACTIONS(1063),
    [sym_parameter_char] = ACTIONS(1063),
    [sym_superscript] = ACTIONS(1063),
    [sym_subscript] = ACTIONS(1063),
    [sym_active_char] = ACTIONS(1063),
    [sym_text] = ACTIONS(1063),
  },
  [625] = {
    [sym_display_math_shift] = ACTIONS(1065),
    [sym_inline_math_shift] = ACTIONS(1065),
    [anon_sym_LBRACK] = ACTIONS(1065),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1065),
    [sym_begin_group] = ACTIONS(1065),
    [sym_end_group] = ACTIONS(1065),
    [sym_alignment_tab] = ACTIONS(1065),
    [sym_parameter_char] = ACTIONS(1065),
    [sym_superscript] = ACTIONS(1065),
    [sym_subscript] = ACTIONS(1065),
    [sym_active_char] = ACTIONS(1065),
    [sym_text] = ACTIONS(1065),
  },
  [626] = {
    [sym_display_math_shift] = ACTIONS(1230),
    [sym_inline_math_shift] = ACTIONS(1230),
    [ts_builtin_sym_end] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1230),
    [anon_sym_RBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1230),
    [sym_begin_group] = ACTIONS(1230),
    [sym_alignment_tab] = ACTIONS(1230),
    [sym_parameter_char] = ACTIONS(1230),
    [sym_superscript] = ACTIONS(1230),
    [sym_subscript] = ACTIONS(1230),
    [sym_active_char] = ACTIONS(1230),
    [sym_text] = ACTIONS(1230),
  },
  [627] = {
    [anon_sym_LBRACK] = ACTIONS(1214),
    [anon_sym_RBRACK] = ACTIONS(1214),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1214),
    [sym_begin_group] = ACTIONS(1214),
    [sym_alignment_tab] = ACTIONS(1214),
    [sym_parameter_char] = ACTIONS(1214),
    [sym_superscript] = ACTIONS(1214),
    [sym_subscript] = ACTIONS(1214),
    [sym_active_char] = ACTIONS(1214),
    [sym_text] = ACTIONS(1214),
  },
  [628] = {
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [629] = {
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_math_shift] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [630] = {
    [sym_display_math_shift] = ACTIONS(1232),
    [sym_inline_math_shift] = ACTIONS(1232),
    [ts_builtin_sym_end] = ACTIONS(1232),
    [anon_sym_LBRACK] = ACTIONS(1232),
    [anon_sym_RBRACK] = ACTIONS(1232),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1232),
    [sym_begin_group] = ACTIONS(1232),
    [sym_alignment_tab] = ACTIONS(1232),
    [sym_parameter_char] = ACTIONS(1232),
    [sym_superscript] = ACTIONS(1232),
    [sym_subscript] = ACTIONS(1232),
    [sym_active_char] = ACTIONS(1232),
    [sym_text] = ACTIONS(1232),
  },
  [631] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1234),
  },
  [632] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1236),
  },
  [633] = {
    [sym_display_math_shift] = ACTIONS(1039),
    [sym_inline_math_shift] = ACTIONS(1039),
    [ts_builtin_sym_end] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [anon_sym_RBRACK] = ACTIONS(1039),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1039),
    [sym_begin_group] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(1039),
    [sym_superscript] = ACTIONS(1039),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [sym_text] = ACTIONS(1039),
  },
  [634] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(659),
  },
  [635] = {
    [anon_sym_LBRACK] = ACTIONS(1238),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1238),
    [sym_begin_group] = ACTIONS(1238),
    [sym_alignment_tab] = ACTIONS(1238),
    [sym_parameter_char] = ACTIONS(1238),
    [sym_superscript] = ACTIONS(1238),
    [sym_subscript] = ACTIONS(1238),
    [sym_active_char] = ACTIONS(1238),
    [sym_text] = ACTIONS(1238),
  },
  [636] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1240),
  },
  [637] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1242),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1244),
    [sym__end_of_line] = ACTIONS(1244),
  },
  [638] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1246),
  },
  [639] = {
    [anon_sym_LBRACK] = ACTIONS(1067),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1067),
    [sym_end_group] = ACTIONS(1067),
    [sym_math_shift] = ACTIONS(1067),
    [sym_alignment_tab] = ACTIONS(1067),
    [sym_parameter_char] = ACTIONS(1067),
    [sym_superscript] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1067),
    [sym_active_char] = ACTIONS(1067),
    [sym_text] = ACTIONS(1067),
  },
  [640] = {
    [anon_sym_LBRACK] = ACTIONS(1093),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1093),
    [sym_begin_group] = ACTIONS(1093),
    [sym_end_group] = ACTIONS(1093),
    [sym_math_shift] = ACTIONS(1093),
    [sym_alignment_tab] = ACTIONS(1093),
    [sym_parameter_char] = ACTIONS(1093),
    [sym_superscript] = ACTIONS(1093),
    [sym_subscript] = ACTIONS(1093),
    [sym_active_char] = ACTIONS(1093),
    [sym_text] = ACTIONS(1093),
  },
  [641] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(1248),
  },
  [642] = {
    [anon_sym_LBRACK] = ACTIONS(1133),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1133),
    [sym_begin_group] = ACTIONS(1133),
    [sym_end_group] = ACTIONS(1133),
    [sym_math_shift] = ACTIONS(1133),
    [sym_alignment_tab] = ACTIONS(1133),
    [sym_parameter_char] = ACTIONS(1133),
    [sym_superscript] = ACTIONS(1133),
    [sym_subscript] = ACTIONS(1133),
    [sym_active_char] = ACTIONS(1133),
    [sym_text] = ACTIONS(1133),
  },
  [643] = {
    [sym_verb_delim] = ACTIONS(1250),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [644] = {
    [anon_sym_RBRACK] = ACTIONS(1252),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [645] = {
    [anon_sym_LBRACK] = ACTIONS(1168),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1168),
    [sym_begin_group] = ACTIONS(1168),
    [sym_end_group] = ACTIONS(1168),
    [sym_math_shift] = ACTIONS(1168),
    [sym_alignment_tab] = ACTIONS(1168),
    [sym_parameter_char] = ACTIONS(1168),
    [sym_superscript] = ACTIONS(1168),
    [sym_subscript] = ACTIONS(1168),
    [sym_active_char] = ACTIONS(1168),
    [sym_text] = ACTIONS(1168),
  },
  [646] = {
    [anon_sym_RPAREN] = ACTIONS(1254),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [647] = {
    [anon_sym_LBRACK] = ACTIONS(1175),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1175),
    [sym_begin_group] = ACTIONS(1175),
    [sym_end_group] = ACTIONS(1175),
    [sym_math_shift] = ACTIONS(1175),
    [sym_alignment_tab] = ACTIONS(1175),
    [sym_parameter_char] = ACTIONS(1175),
    [sym_superscript] = ACTIONS(1175),
    [sym_subscript] = ACTIONS(1175),
    [sym_active_char] = ACTIONS(1175),
    [sym_text] = ACTIONS(1175),
  },
  [648] = {
    [anon_sym_LBRACK] = ACTIONS(1177),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1177),
    [sym_begin_group] = ACTIONS(1177),
    [sym_end_group] = ACTIONS(1177),
    [sym_math_shift] = ACTIONS(1177),
    [sym_alignment_tab] = ACTIONS(1177),
    [sym_parameter_char] = ACTIONS(1177),
    [sym_superscript] = ACTIONS(1177),
    [sym_subscript] = ACTIONS(1177),
    [sym_active_char] = ACTIONS(1177),
    [sym_text] = ACTIONS(1177),
  },
  [649] = {
    [sym_display_math_env_group] = STATE(719),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1256),
  },
  [650] = {
    [anon_sym_LBRACK] = ACTIONS(1181),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1181),
    [sym_begin_group] = ACTIONS(1181),
    [sym_end_group] = ACTIONS(1181),
    [sym_math_shift] = ACTIONS(1181),
    [sym_alignment_tab] = ACTIONS(1181),
    [sym_parameter_char] = ACTIONS(1181),
    [sym_superscript] = ACTIONS(1181),
    [sym_subscript] = ACTIONS(1181),
    [sym_active_char] = ACTIONS(1181),
    [sym_text] = ACTIONS(1181),
  },
  [651] = {
    [sym_inline_math_env_group] = STATE(721),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1258),
  },
  [652] = {
    [anon_sym_LBRACK] = ACTIONS(730),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [653] = {
    [sym_verbatim_env_name] = ACTIONS(1260),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [654] = {
    [anon_sym_LBRACK] = ACTIONS(734),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [655] = {
    [anon_sym_LBRACK] = ACTIONS(1187),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1187),
    [sym_begin_group] = ACTIONS(1187),
    [sym_end_group] = ACTIONS(1187),
    [sym_math_shift] = ACTIONS(1187),
    [sym_alignment_tab] = ACTIONS(1187),
    [sym_parameter_char] = ACTIONS(1187),
    [sym_superscript] = ACTIONS(1187),
    [sym_subscript] = ACTIONS(1187),
    [sym_active_char] = ACTIONS(1187),
    [sym_text] = ACTIONS(1187),
  },
  [656] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1262),
  },
  [657] = {
    [sym_simple_text_group] = STATE(724),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [658] = {
    [anon_sym_LBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_end_group] = ACTIONS(784),
    [sym_math_shift] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_active_char] = ACTIONS(784),
    [sym_text] = ACTIONS(784),
  },
  [659] = {
    [sym_simple_text_group] = STATE(725),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(820),
  },
  [660] = {
    [anon_sym_LBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(786),
    [sym_begin_group] = ACTIONS(786),
    [sym_end_group] = ACTIONS(786),
    [sym_math_shift] = ACTIONS(786),
    [sym_alignment_tab] = ACTIONS(786),
    [sym_parameter_char] = ACTIONS(786),
    [sym_superscript] = ACTIONS(786),
    [sym_subscript] = ACTIONS(786),
    [sym_active_char] = ACTIONS(786),
    [sym_text] = ACTIONS(786),
  },
  [661] = {
    [sym_text_group_at] = STATE(726),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [662] = {
    [anon_sym_LBRACK] = ACTIONS(1199),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1199),
    [sym_begin_group] = ACTIONS(1199),
    [sym_end_group] = ACTIONS(1199),
    [sym_math_shift] = ACTIONS(1199),
    [sym_alignment_tab] = ACTIONS(1199),
    [sym_parameter_char] = ACTIONS(1199),
    [sym_superscript] = ACTIONS(1199),
    [sym_subscript] = ACTIONS(1199),
    [sym_active_char] = ACTIONS(1199),
    [sym_text] = ACTIONS(1199),
  },
  [663] = {
    [sym_text_group_at] = STATE(727),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(427),
  },
  [664] = {
    [anon_sym_LBRACK] = ACTIONS(1201),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1201),
    [sym_begin_group] = ACTIONS(1201),
    [sym_end_group] = ACTIONS(1201),
    [sym_math_shift] = ACTIONS(1201),
    [sym_alignment_tab] = ACTIONS(1201),
    [sym_parameter_char] = ACTIONS(1201),
    [sym_superscript] = ACTIONS(1201),
    [sym_subscript] = ACTIONS(1201),
    [sym_active_char] = ACTIONS(1201),
    [sym_text] = ACTIONS(1201),
  },
  [665] = {
    [anon_sym_LBRACK] = ACTIONS(1203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1203),
    [sym_begin_group] = ACTIONS(1203),
    [sym_end_group] = ACTIONS(1203),
    [sym_math_shift] = ACTIONS(1203),
    [sym_alignment_tab] = ACTIONS(1203),
    [sym_parameter_char] = ACTIONS(1203),
    [sym_superscript] = ACTIONS(1203),
    [sym_subscript] = ACTIONS(1203),
    [sym_active_char] = ACTIONS(1203),
    [sym_text] = ACTIONS(1203),
  },
  [666] = {
    [anon_sym_LBRACK] = ACTIONS(1119),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1119),
    [sym_begin_group] = ACTIONS(1119),
    [sym_end_group] = ACTIONS(1119),
    [sym_alignment_tab] = ACTIONS(1119),
    [sym_parameter_char] = ACTIONS(1119),
    [sym_superscript] = ACTIONS(1119),
    [sym_subscript] = ACTIONS(1119),
    [sym_active_char] = ACTIONS(1119),
    [sym_text] = ACTIONS(1119),
  },
  [667] = {
    [sym__common] = STATE(675),
    [sym__math_mode_common] = STATE(675),
    [sym__math_mode_at] = STATE(675),
    [sym_parameter] = STATE(675),
    [sym_math_env_at] = STATE(675),
    [sym_tag_at] = STATE(675),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(675),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(675),
    [sym_include_token] = STATE(349),
    [sym_storage] = STATE(675),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(675),
    [sym_catcode_token] = STATE(187),
    [sym_math_group_at] = STATE(675),
    [sym_opt_math_group_at] = STATE(675),
    [sym_token_at] = STATE(675),
    [sym_begin_opt] = STATE(551),
    [aux_sym_math_mode_at_repeat1] = STATE(675),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(828),
    [sym_begin_group] = ACTIONS(830),
    [sym_end_group] = ACTIONS(1264),
    [sym_alignment_tab] = ACTIONS(1129),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(1129),
    [sym_subscript] = ACTIONS(1129),
    [sym_active_char] = ACTIONS(1129),
    [sym_text] = ACTIONS(1129),
  },
  [668] = {
    [sym__common] = STATE(679),
    [sym__text_mode_common] = STATE(679),
    [sym_inline_verbatim] = STATE(679),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(679),
    [sym_text_mode_at] = STATE(730),
    [sym_parameter] = STATE(679),
    [sym_text_env_at] = STATE(679),
    [sym__display_math_at] = STATE(679),
    [sym_tex_display_math_at] = STATE(679),
    [sym_latex_display_math_at] = STATE(679),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(679),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(679),
    [sym_tex_inline_math_at] = STATE(679),
    [sym_latex_inline_math_at] = STATE(679),
    [sym_inline_math_env_at] = STATE(679),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(679),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(679),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(679),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(679),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(679),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(679),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(679),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(679),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(679),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(679),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(679),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(679),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(679),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(679),
    [sym_opt_text_group_at] = STATE(679),
    [sym_token_at] = STATE(679),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(679),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1266),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(1137),
    [sym_text] = ACTIONS(1137),
  },
  [669] = {
    [anon_sym_LBRACK] = ACTIONS(1139),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1139),
    [sym_begin_group] = ACTIONS(1139),
    [sym_end_group] = ACTIONS(1139),
    [sym_alignment_tab] = ACTIONS(1139),
    [sym_parameter_char] = ACTIONS(1139),
    [sym_superscript] = ACTIONS(1139),
    [sym_subscript] = ACTIONS(1139),
    [sym_active_char] = ACTIONS(1139),
    [sym_text] = ACTIONS(1139),
  },
  [670] = {
    [anon_sym_LBRACK] = ACTIONS(1141),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1141),
    [sym_begin_group] = ACTIONS(1141),
    [sym_end_group] = ACTIONS(1141),
    [sym_alignment_tab] = ACTIONS(1141),
    [sym_parameter_char] = ACTIONS(1141),
    [sym_superscript] = ACTIONS(1141),
    [sym_subscript] = ACTIONS(1141),
    [sym_active_char] = ACTIONS(1141),
    [sym_text] = ACTIONS(1141),
  },
  [671] = {
    [sym__common] = STATE(566),
    [sym__math_mode_common] = STATE(566),
    [sym__math_mode_at] = STATE(566),
    [sym_parameter] = STATE(566),
    [sym_math_env_at] = STATE(566),
    [sym_tag_at] = STATE(566),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(566),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_end] = STATE(731),
    [sym_end_token] = STATE(413),
    [sym_include_at] = STATE(566),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(566),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(566),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(566),
    [sym_opt_math_group_at] = STATE(566),
    [sym_token_at] = STATE(566),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(566),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(858),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(858),
    [sym_subscript] = ACTIONS(858),
    [sym_active_char] = ACTIONS(858),
    [sym_text] = ACTIONS(858),
  },
  [672] = {
    [anon_sym_LBRACK] = ACTIONS(1143),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1143),
    [sym_begin_group] = ACTIONS(1143),
    [sym_end_group] = ACTIONS(1143),
    [sym_alignment_tab] = ACTIONS(1143),
    [sym_parameter_char] = ACTIONS(1143),
    [sym_superscript] = ACTIONS(1143),
    [sym_subscript] = ACTIONS(1143),
    [sym_active_char] = ACTIONS(1143),
    [sym_text] = ACTIONS(1143),
  },
  [673] = {
    [sym__common] = STATE(682),
    [sym__math_mode_common] = STATE(682),
    [sym__math_mode_at] = STATE(682),
    [sym_parameter] = STATE(682),
    [sym_math_env_at] = STATE(682),
    [sym_tag_at] = STATE(682),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(682),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(682),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(682),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(682),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(682),
    [sym_opt_math_group_at] = STATE(682),
    [sym_token_at] = STATE(682),
    [sym_begin_opt] = STATE(364),
    [sym_end_opt] = STATE(732),
    [aux_sym_math_mode_at_repeat1] = STATE(682),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(1145),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(1145),
    [sym_subscript] = ACTIONS(1145),
    [sym_active_char] = ACTIONS(1145),
    [sym_text] = ACTIONS(1145),
  },
  [674] = {
    [anon_sym_LBRACK] = ACTIONS(1268),
    [anon_sym_RBRACK] = ACTIONS(1268),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1268),
    [sym_begin_group] = ACTIONS(1268),
    [sym_math_shift] = ACTIONS(1268),
    [sym_alignment_tab] = ACTIONS(1268),
    [sym_parameter_char] = ACTIONS(1268),
    [sym_superscript] = ACTIONS(1268),
    [sym_subscript] = ACTIONS(1268),
    [sym_active_char] = ACTIONS(1268),
    [sym_text] = ACTIONS(1268),
  },
  [675] = {
    [sym__common] = STATE(675),
    [sym__math_mode_common] = STATE(675),
    [sym__math_mode_at] = STATE(675),
    [sym_parameter] = STATE(675),
    [sym_math_env_at] = STATE(675),
    [sym_tag_at] = STATE(675),
    [sym_tag_token] = STATE(549),
    [sym_escaped] = STATE(675),
    [sym_begin] = STATE(550),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(675),
    [sym_include_token] = STATE(349),
    [sym_storage] = STATE(675),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(675),
    [sym_catcode_token] = STATE(187),
    [sym_math_group_at] = STATE(675),
    [sym_opt_math_group_at] = STATE(675),
    [sym_token_at] = STATE(675),
    [sym_begin_opt] = STATE(551),
    [aux_sym_math_mode_at_repeat1] = STATE(675),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(1147),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1270),
    [sym_begin_group] = ACTIONS(1273),
    [sym_end_group] = ACTIONS(1156),
    [sym_alignment_tab] = ACTIONS(1276),
    [sym_parameter_char] = ACTIONS(1279),
    [sym_superscript] = ACTIONS(1276),
    [sym_subscript] = ACTIONS(1276),
    [sym_active_char] = ACTIONS(1276),
    [sym_text] = ACTIONS(1276),
  },
  [676] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(1282),
  },
  [677] = {
    [anon_sym_LBRACK] = ACTIONS(1284),
    [anon_sym_RBRACK] = ACTIONS(1284),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1284),
    [sym_begin_group] = ACTIONS(1284),
    [sym_math_shift] = ACTIONS(1284),
    [sym_alignment_tab] = ACTIONS(1284),
    [sym_parameter_char] = ACTIONS(1284),
    [sym_superscript] = ACTIONS(1284),
    [sym_subscript] = ACTIONS(1284),
    [sym_active_char] = ACTIONS(1284),
    [sym_text] = ACTIONS(1284),
  },
  [678] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1286),
  },
  [679] = {
    [sym__common] = STATE(545),
    [sym__text_mode_common] = STATE(545),
    [sym_inline_verbatim] = STATE(545),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(545),
    [sym_parameter] = STATE(545),
    [sym_text_env_at] = STATE(545),
    [sym__display_math_at] = STATE(545),
    [sym_tex_display_math_at] = STATE(545),
    [sym_latex_display_math_at] = STATE(545),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(545),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(545),
    [sym_tex_inline_math_at] = STATE(545),
    [sym_latex_inline_math_at] = STATE(545),
    [sym_inline_math_env_at] = STATE(545),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(545),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(545),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(545),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(545),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(545),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(545),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(545),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(545),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(545),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(545),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(545),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(545),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(545),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(545),
    [sym_opt_text_group_at] = STATE(545),
    [sym_token_at] = STATE(545),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(545),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(465),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [680] = {
    [anon_sym_LBRACK] = ACTIONS(1288),
    [anon_sym_RBRACK] = ACTIONS(1288),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1288),
    [sym_begin_group] = ACTIONS(1288),
    [sym_math_shift] = ACTIONS(1288),
    [sym_alignment_tab] = ACTIONS(1288),
    [sym_parameter_char] = ACTIONS(1288),
    [sym_superscript] = ACTIONS(1288),
    [sym_subscript] = ACTIONS(1288),
    [sym_active_char] = ACTIONS(1288),
    [sym_text] = ACTIONS(1288),
  },
  [681] = {
    [anon_sym_LBRACK] = ACTIONS(1290),
    [anon_sym_RBRACK] = ACTIONS(1290),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1290),
    [sym_math_shift] = ACTIONS(1290),
    [sym_alignment_tab] = ACTIONS(1290),
    [sym_parameter_char] = ACTIONS(1290),
    [sym_superscript] = ACTIONS(1290),
    [sym_subscript] = ACTIONS(1290),
    [sym_active_char] = ACTIONS(1290),
    [sym_text] = ACTIONS(1290),
  },
  [682] = {
    [sym__common] = STATE(682),
    [sym__math_mode_common] = STATE(682),
    [sym__math_mode_at] = STATE(682),
    [sym_parameter] = STATE(682),
    [sym_math_env_at] = STATE(682),
    [sym_tag_at] = STATE(682),
    [sym_tag_token] = STATE(362),
    [sym_escaped] = STATE(682),
    [sym_begin] = STATE(363),
    [sym_begin_token] = STATE(42),
    [sym_include_at] = STATE(682),
    [sym_include_token] = STATE(159),
    [sym_storage] = STATE(682),
    [sym_storage_token] = STATE(104),
    [sym_catcode] = STATE(682),
    [sym_catcode_token] = STATE(105),
    [sym_math_group_at] = STATE(682),
    [sym_opt_math_group_at] = STATE(682),
    [sym_token_at] = STATE(682),
    [sym_begin_opt] = STATE(364),
    [aux_sym_math_mode_at_repeat1] = STATE(682),
    [aux_sym_parameter_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(1147),
    [anon_sym_RBRACK] = ACTIONS(1156),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1150),
    [sym_begin_group] = ACTIONS(1153),
    [sym_alignment_tab] = ACTIONS(1292),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1292),
    [sym_subscript] = ACTIONS(1292),
    [sym_active_char] = ACTIONS(1292),
    [sym_text] = ACTIONS(1292),
  },
  [683] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_math_shift] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [684] = {
    [sym__whitespace] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_RBRACK] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1009),
  },
  [685] = {
    [sym__whitespace] = ACTIONS(1297),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_math_shift] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1021),
  },
  [686] = {
    [sym_display_math_env_name] = ACTIONS(1299),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [687] = {
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_RBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_math_shift] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [688] = {
    [sym_inline_math_env_name] = ACTIONS(1301),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [689] = {
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_RBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_math_shift] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [690] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1303),
  },
  [691] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(812),
  },
  [692] = {
    [sym__common] = STATE(545),
    [sym__text_mode_common] = STATE(545),
    [sym_inline_verbatim] = STATE(545),
    [sym_verb_token] = STATE(340),
    [sym__text_mode_at] = STATE(545),
    [sym_parameter] = STATE(545),
    [sym_text_env_at] = STATE(545),
    [sym__display_math_at] = STATE(545),
    [sym_tex_display_math_at] = STATE(545),
    [sym_latex_display_math_at] = STATE(545),
    [sym_begin_display_math] = STATE(341),
    [sym_begin_inline_math] = STATE(342),
    [sym_display_math_env_at] = STATE(545),
    [sym_display_math_begin_at] = STATE(343),
    [sym__inline_math_at] = STATE(545),
    [sym_tex_inline_math_at] = STATE(545),
    [sym_latex_inline_math_at] = STATE(545),
    [sym_inline_math_env_at] = STATE(545),
    [sym_inline_math_begin] = STATE(344),
    [sym_verbatim_env] = STATE(545),
    [sym_verbatim_begin] = STATE(345),
    [sym_escaped] = STATE(545),
    [sym_begin] = STATE(346),
    [sym_begin_token] = STATE(156),
    [sym_documentclass] = STATE(545),
    [sym_documentclass_token] = STATE(347),
    [sym_usepackage] = STATE(545),
    [sym_usepackage_token] = STATE(348),
    [sym_include_at] = STATE(545),
    [sym_include_token] = STATE(349),
    [sym_section_at] = STATE(545),
    [sym_section_token] = STATE(350),
    [sym_storage] = STATE(545),
    [sym_storage_token] = STATE(186),
    [sym_catcode] = STATE(545),
    [sym_catcode_token] = STATE(187),
    [sym_emph_at] = STATE(545),
    [sym_emph_token] = STATE(351),
    [sym_footnote_at] = STATE(545),
    [sym_footnote_token] = STATE(352),
    [sym_textbf_at] = STATE(545),
    [sym_textbf_token] = STATE(353),
    [sym_textit_at] = STATE(545),
    [sym_textit_token] = STATE(354),
    [sym_texttt_at] = STATE(545),
    [sym_texttt_token] = STATE(355),
    [sym_text_group_at] = STATE(545),
    [sym_opt_text_group_at] = STATE(545),
    [sym_token_at] = STATE(545),
    [sym_begin_opt] = STATE(356),
    [aux_sym_text_mode_at_repeat1] = STATE(545),
    [aux_sym_parameter_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(1305),
    [sym_math_shift] = ACTIONS(431),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [693] = {
    [anon_sym_LBRACK] = ACTIONS(1307),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1307),
    [sym_begin_group] = ACTIONS(1307),
    [sym_alignment_tab] = ACTIONS(1307),
    [sym_parameter_char] = ACTIONS(1307),
    [sym_superscript] = ACTIONS(1307),
    [sym_subscript] = ACTIONS(1307),
    [sym_active_char] = ACTIONS(1307),
    [sym_text] = ACTIONS(1307),
  },
  [694] = {
    [sym_text_group_at] = STATE(741),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(868),
    [sym__end_of_line] = ACTIONS(1309),
  },
  [695] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1309),
  },
  [696] = {
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_RBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1055),
    [sym_begin_group] = ACTIONS(1055),
    [sym_math_shift] = ACTIONS(1055),
    [sym_alignment_tab] = ACTIONS(1055),
    [sym_parameter_char] = ACTIONS(1055),
    [sym_superscript] = ACTIONS(1055),
    [sym_subscript] = ACTIONS(1055),
    [sym_active_char] = ACTIONS(1055),
    [sym_text] = ACTIONS(1055),
  },
  [697] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_math_shift] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1057),
  },
  [698] = {
    [anon_sym_LBRACK] = ACTIONS(1311),
    [anon_sym_RBRACK] = ACTIONS(1311),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1311),
    [sym_begin_group] = ACTIONS(1311),
    [sym_math_shift] = ACTIONS(1311),
    [sym_alignment_tab] = ACTIONS(1311),
    [sym_parameter_char] = ACTIONS(1311),
    [sym_superscript] = ACTIONS(1311),
    [sym_subscript] = ACTIONS(1311),
    [sym_active_char] = ACTIONS(1311),
    [sym_text] = ACTIONS(1311),
  },
  [699] = {
    [sym__whitespace] = ACTIONS(1203),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_begin_group] = ACTIONS(1203),
    [sym__end_of_line] = ACTIONS(1203),
  },
  [700] = {
    [anon_sym_LBRACK] = ACTIONS(1313),
    [anon_sym_RBRACK] = ACTIONS(1313),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1313),
    [sym_begin_group] = ACTIONS(1313),
    [sym_math_shift] = ACTIONS(1313),
    [sym_alignment_tab] = ACTIONS(1313),
    [sym_parameter_char] = ACTIONS(1313),
    [sym_superscript] = ACTIONS(1313),
    [sym_subscript] = ACTIONS(1313),
    [sym_active_char] = ACTIONS(1313),
    [sym_text] = ACTIONS(1313),
  },
  [701] = {
    [anon_sym_LBRACK] = ACTIONS(1214),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1214),
    [sym_begin_group] = ACTIONS(1214),
    [sym_end_group] = ACTIONS(1214),
    [sym_alignment_tab] = ACTIONS(1214),
    [sym_parameter_char] = ACTIONS(1214),
    [sym_superscript] = ACTIONS(1214),
    [sym_subscript] = ACTIONS(1214),
    [sym_active_char] = ACTIONS(1214),
    [sym_text] = ACTIONS(1214),
  },
  [702] = {
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_end_group] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_text] = ACTIONS(659),
  },
  [703] = {
    [anon_sym_LBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [704] = {
    [sym_implicit_math_shift] = ACTIONS(1041),
    [anon_sym_LBRACK] = ACTIONS(1041),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_math_shift] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1041),
  },
  [705] = {
    [sym_display_math_shift] = ACTIONS(1230),
    [sym_inline_math_shift] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [706] = {
    [sym_display_math_shift] = ACTIONS(1232),
    [sym_inline_math_shift] = ACTIONS(1232),
    [anon_sym_LBRACK] = ACTIONS(1232),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1232),
    [sym_begin_group] = ACTIONS(1232),
    [sym_end_group] = ACTIONS(1232),
    [sym_alignment_tab] = ACTIONS(1232),
    [sym_parameter_char] = ACTIONS(1232),
    [sym_superscript] = ACTIONS(1232),
    [sym_subscript] = ACTIONS(1232),
    [sym_active_char] = ACTIONS(1232),
    [sym_text] = ACTIONS(1232),
  },
  [707] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1315),
  },
  [708] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1317),
  },
  [709] = {
    [sym_display_math_shift] = ACTIONS(1039),
    [sym_inline_math_shift] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1039),
    [sym_begin_group] = ACTIONS(1039),
    [sym_end_group] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(1039),
    [sym_superscript] = ACTIONS(1039),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [sym_text] = ACTIONS(1039),
  },
  [710] = {
    [sym_display_math_shift] = ACTIONS(1035),
    [sym_inline_math_shift] = ACTIONS(1035),
    [ts_builtin_sym_end] = ACTIONS(1035),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [anon_sym_RBRACK] = ACTIONS(1035),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1035),
    [sym_begin_group] = ACTIONS(1035),
    [sym_alignment_tab] = ACTIONS(1035),
    [sym_parameter_char] = ACTIONS(1035),
    [sym_superscript] = ACTIONS(1035),
    [sym_subscript] = ACTIONS(1035),
    [sym_active_char] = ACTIONS(1035),
    [sym_text] = ACTIONS(1035),
  },
  [711] = {
    [sym_display_math_shift] = ACTIONS(1037),
    [sym_inline_math_shift] = ACTIONS(1037),
    [ts_builtin_sym_end] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [anon_sym_RBRACK] = ACTIONS(1037),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1037),
  },
  [712] = {
    [anon_sym_LBRACK] = ACTIONS(1319),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1319),
    [sym_begin_group] = ACTIONS(1319),
    [sym_alignment_tab] = ACTIONS(1319),
    [sym_parameter_char] = ACTIONS(1319),
    [sym_superscript] = ACTIONS(1319),
    [sym_subscript] = ACTIONS(1319),
    [sym_active_char] = ACTIONS(1319),
    [sym_text] = ACTIONS(1319),
  },
  [713] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1321),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1323),
    [sym__end_of_line] = ACTIONS(1323),
  },
  [714] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(1325),
  },
  [715] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_end_group] = ACTIONS(1003),
    [sym_math_shift] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [716] = {
    [sym__whitespace] = ACTIONS(1327),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1009),
  },
  [717] = {
    [sym__whitespace] = ACTIONS(1329),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(1017),
    [sym_math_shift] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1021),
  },
  [718] = {
    [sym_display_math_env_name] = ACTIONS(1331),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [719] = {
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_end_group] = ACTIONS(1025),
    [sym_math_shift] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [720] = {
    [sym_inline_math_env_name] = ACTIONS(1333),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [721] = {
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_end_group] = ACTIONS(1029),
    [sym_math_shift] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1029),
  },
  [722] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1335),
  },
  [723] = {
    [anon_sym_LBRACK] = ACTIONS(1041),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_end_group] = ACTIONS(1041),
    [sym_math_shift] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1041),
  },
  [724] = {
    [anon_sym_LBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1055),
    [sym_begin_group] = ACTIONS(1055),
    [sym_end_group] = ACTIONS(1055),
    [sym_math_shift] = ACTIONS(1055),
    [sym_alignment_tab] = ACTIONS(1055),
    [sym_parameter_char] = ACTIONS(1055),
    [sym_superscript] = ACTIONS(1055),
    [sym_subscript] = ACTIONS(1055),
    [sym_active_char] = ACTIONS(1055),
    [sym_text] = ACTIONS(1055),
  },
  [725] = {
    [anon_sym_LBRACK] = ACTIONS(1057),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
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
  [726] = {
    [anon_sym_LBRACK] = ACTIONS(1311),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1311),
    [sym_begin_group] = ACTIONS(1311),
    [sym_end_group] = ACTIONS(1311),
    [sym_math_shift] = ACTIONS(1311),
    [sym_alignment_tab] = ACTIONS(1311),
    [sym_parameter_char] = ACTIONS(1311),
    [sym_superscript] = ACTIONS(1311),
    [sym_subscript] = ACTIONS(1311),
    [sym_active_char] = ACTIONS(1311),
    [sym_text] = ACTIONS(1311),
  },
  [727] = {
    [anon_sym_LBRACK] = ACTIONS(1313),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1313),
    [sym_begin_group] = ACTIONS(1313),
    [sym_end_group] = ACTIONS(1313),
    [sym_math_shift] = ACTIONS(1313),
    [sym_alignment_tab] = ACTIONS(1313),
    [sym_parameter_char] = ACTIONS(1313),
    [sym_superscript] = ACTIONS(1313),
    [sym_subscript] = ACTIONS(1313),
    [sym_active_char] = ACTIONS(1313),
    [sym_text] = ACTIONS(1313),
  },
  [728] = {
    [anon_sym_LBRACK] = ACTIONS(1268),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1268),
    [sym_begin_group] = ACTIONS(1268),
    [sym_end_group] = ACTIONS(1268),
    [sym_alignment_tab] = ACTIONS(1268),
    [sym_parameter_char] = ACTIONS(1268),
    [sym_superscript] = ACTIONS(1268),
    [sym_subscript] = ACTIONS(1268),
    [sym_active_char] = ACTIONS(1268),
    [sym_text] = ACTIONS(1268),
  },
  [729] = {
    [anon_sym_LBRACK] = ACTIONS(1284),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1284),
    [sym_begin_group] = ACTIONS(1284),
    [sym_end_group] = ACTIONS(1284),
    [sym_alignment_tab] = ACTIONS(1284),
    [sym_parameter_char] = ACTIONS(1284),
    [sym_superscript] = ACTIONS(1284),
    [sym_subscript] = ACTIONS(1284),
    [sym_active_char] = ACTIONS(1284),
    [sym_text] = ACTIONS(1284),
  },
  [730] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1337),
  },
  [731] = {
    [anon_sym_LBRACK] = ACTIONS(1288),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1288),
    [sym_begin_group] = ACTIONS(1288),
    [sym_end_group] = ACTIONS(1288),
    [sym_alignment_tab] = ACTIONS(1288),
    [sym_parameter_char] = ACTIONS(1288),
    [sym_superscript] = ACTIONS(1288),
    [sym_subscript] = ACTIONS(1288),
    [sym_active_char] = ACTIONS(1288),
    [sym_text] = ACTIONS(1288),
  },
  [732] = {
    [anon_sym_LBRACK] = ACTIONS(1290),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1290),
    [sym_end_group] = ACTIONS(1290),
    [sym_alignment_tab] = ACTIONS(1290),
    [sym_parameter_char] = ACTIONS(1290),
    [sym_superscript] = ACTIONS(1290),
    [sym_subscript] = ACTIONS(1290),
    [sym_active_char] = ACTIONS(1290),
    [sym_text] = ACTIONS(1290),
  },
  [733] = {
    [anon_sym_LBRACK] = ACTIONS(1339),
    [anon_sym_RBRACK] = ACTIONS(1339),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1339),
    [sym_begin_group] = ACTIONS(1339),
    [sym_math_shift] = ACTIONS(1339),
    [sym_alignment_tab] = ACTIONS(1339),
    [sym_parameter_char] = ACTIONS(1339),
    [sym_superscript] = ACTIONS(1339),
    [sym_subscript] = ACTIONS(1339),
    [sym_active_char] = ACTIONS(1339),
    [sym_text] = ACTIONS(1339),
  },
  [734] = {
    [anon_sym_LBRACK] = ACTIONS(1341),
    [anon_sym_RBRACK] = ACTIONS(1341),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1341),
    [sym_begin_group] = ACTIONS(1341),
    [sym_math_shift] = ACTIONS(1341),
    [sym_alignment_tab] = ACTIONS(1341),
    [sym_parameter_char] = ACTIONS(1341),
    [sym_superscript] = ACTIONS(1341),
    [sym_subscript] = ACTIONS(1341),
    [sym_active_char] = ACTIONS(1341),
    [sym_text] = ACTIONS(1341),
  },
  [735] = {
    [anon_sym_LBRACK] = ACTIONS(1230),
    [anon_sym_RBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1230),
    [sym_begin_group] = ACTIONS(1230),
    [sym_math_shift] = ACTIONS(1230),
    [sym_alignment_tab] = ACTIONS(1230),
    [sym_parameter_char] = ACTIONS(1230),
    [sym_superscript] = ACTIONS(1230),
    [sym_subscript] = ACTIONS(1230),
    [sym_active_char] = ACTIONS(1230),
    [sym_text] = ACTIONS(1230),
  },
  [736] = {
    [anon_sym_LBRACK] = ACTIONS(1232),
    [anon_sym_RBRACK] = ACTIONS(1232),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1232),
    [sym_begin_group] = ACTIONS(1232),
    [sym_math_shift] = ACTIONS(1232),
    [sym_alignment_tab] = ACTIONS(1232),
    [sym_parameter_char] = ACTIONS(1232),
    [sym_superscript] = ACTIONS(1232),
    [sym_subscript] = ACTIONS(1232),
    [sym_active_char] = ACTIONS(1232),
    [sym_text] = ACTIONS(1232),
  },
  [737] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1343),
  },
  [738] = {
    [anon_sym_LBRACK] = ACTIONS(1039),
    [anon_sym_RBRACK] = ACTIONS(1039),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1039),
    [sym_begin_group] = ACTIONS(1039),
    [sym_math_shift] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(1039),
    [sym_superscript] = ACTIONS(1039),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [sym_text] = ACTIONS(1039),
  },
  [739] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1093),
  },
  [740] = {
    [anon_sym_LBRACK] = ACTIONS(1345),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1345),
    [sym_begin_group] = ACTIONS(1345),
    [sym_alignment_tab] = ACTIONS(1345),
    [sym_parameter_char] = ACTIONS(1345),
    [sym_superscript] = ACTIONS(1345),
    [sym_subscript] = ACTIONS(1345),
    [sym_active_char] = ACTIONS(1345),
    [sym_text] = ACTIONS(1345),
  },
  [741] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__end_of_line] = ACTIONS(1347),
  },
  [742] = {
    [sym_display_math_shift] = ACTIONS(1035),
    [sym_inline_math_shift] = ACTIONS(1035),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1035),
    [sym_begin_group] = ACTIONS(1035),
    [sym_end_group] = ACTIONS(1035),
    [sym_alignment_tab] = ACTIONS(1035),
    [sym_parameter_char] = ACTIONS(1035),
    [sym_superscript] = ACTIONS(1035),
    [sym_subscript] = ACTIONS(1035),
    [sym_active_char] = ACTIONS(1035),
    [sym_text] = ACTIONS(1035),
  },
  [743] = {
    [sym_display_math_shift] = ACTIONS(1037),
    [sym_inline_math_shift] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_end_group] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1037),
  },
  [744] = {
    [anon_sym_LBRACK] = ACTIONS(1339),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1339),
    [sym_begin_group] = ACTIONS(1339),
    [sym_end_group] = ACTIONS(1339),
    [sym_math_shift] = ACTIONS(1339),
    [sym_alignment_tab] = ACTIONS(1339),
    [sym_parameter_char] = ACTIONS(1339),
    [sym_superscript] = ACTIONS(1339),
    [sym_subscript] = ACTIONS(1339),
    [sym_active_char] = ACTIONS(1339),
    [sym_text] = ACTIONS(1339),
  },
  [745] = {
    [anon_sym_LBRACK] = ACTIONS(1230),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1230),
    [sym_begin_group] = ACTIONS(1230),
    [sym_end_group] = ACTIONS(1230),
    [sym_math_shift] = ACTIONS(1230),
    [sym_alignment_tab] = ACTIONS(1230),
    [sym_parameter_char] = ACTIONS(1230),
    [sym_superscript] = ACTIONS(1230),
    [sym_subscript] = ACTIONS(1230),
    [sym_active_char] = ACTIONS(1230),
    [sym_text] = ACTIONS(1230),
  },
  [746] = {
    [anon_sym_LBRACK] = ACTIONS(1232),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1232),
    [sym_begin_group] = ACTIONS(1232),
    [sym_end_group] = ACTIONS(1232),
    [sym_math_shift] = ACTIONS(1232),
    [sym_alignment_tab] = ACTIONS(1232),
    [sym_parameter_char] = ACTIONS(1232),
    [sym_superscript] = ACTIONS(1232),
    [sym_subscript] = ACTIONS(1232),
    [sym_active_char] = ACTIONS(1232),
    [sym_text] = ACTIONS(1232),
  },
  [747] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1349),
  },
  [748] = {
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_end_group] = ACTIONS(1351),
  },
  [749] = {
    [anon_sym_LBRACK] = ACTIONS(1039),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1039),
    [sym_begin_group] = ACTIONS(1039),
    [sym_end_group] = ACTIONS(1039),
    [sym_math_shift] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(1039),
    [sym_superscript] = ACTIONS(1039),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [sym_text] = ACTIONS(1039),
  },
  [750] = {
    [anon_sym_LBRACK] = ACTIONS(1341),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1341),
    [sym_begin_group] = ACTIONS(1341),
    [sym_end_group] = ACTIONS(1341),
    [sym_alignment_tab] = ACTIONS(1341),
    [sym_parameter_char] = ACTIONS(1341),
    [sym_superscript] = ACTIONS(1341),
    [sym_subscript] = ACTIONS(1341),
    [sym_active_char] = ACTIONS(1341),
    [sym_text] = ACTIONS(1341),
  },
  [751] = {
    [anon_sym_LBRACK] = ACTIONS(1035),
    [anon_sym_RBRACK] = ACTIONS(1035),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1035),
    [sym_begin_group] = ACTIONS(1035),
    [sym_math_shift] = ACTIONS(1035),
    [sym_alignment_tab] = ACTIONS(1035),
    [sym_parameter_char] = ACTIONS(1035),
    [sym_superscript] = ACTIONS(1035),
    [sym_subscript] = ACTIONS(1035),
    [sym_active_char] = ACTIONS(1035),
    [sym_text] = ACTIONS(1035),
  },
  [752] = {
    [anon_sym_LBRACK] = ACTIONS(1353),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1353),
    [sym_begin_group] = ACTIONS(1353),
    [sym_alignment_tab] = ACTIONS(1353),
    [sym_parameter_char] = ACTIONS(1353),
    [sym_superscript] = ACTIONS(1353),
    [sym_subscript] = ACTIONS(1353),
    [sym_active_char] = ACTIONS(1353),
    [sym_text] = ACTIONS(1353),
  },
  [753] = {
    [anon_sym_LBRACK] = ACTIONS(1035),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1035),
    [sym_begin_group] = ACTIONS(1035),
    [sym_end_group] = ACTIONS(1035),
    [sym_math_shift] = ACTIONS(1035),
    [sym_alignment_tab] = ACTIONS(1035),
    [sym_parameter_char] = ACTIONS(1035),
    [sym_superscript] = ACTIONS(1035),
    [sym_subscript] = ACTIONS(1035),
    [sym_active_char] = ACTIONS(1035),
    [sym_text] = ACTIONS(1035),
  },
  [754] = {
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym_magic_comment] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_end_group] = ACTIONS(1037),
    [sym_math_shift] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1037),
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
  [35] = {.count = 1, .reusable = true}, SHIFT(38),
  [37] = {.count = 1, .reusable = true}, SHIFT(47),
  [39] = {.count = 1, .reusable = true}, SHIFT(48),
  [41] = {.count = 1, .reusable = true}, SHIFT(49),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [45] = {.count = 1, .reusable = false}, SHIFT(51),
  [47] = {.count = 1, .reusable = true}, SHIFT(52),
  [49] = {.count = 1, .reusable = true}, SHIFT(53),
  [51] = {.count = 1, .reusable = false}, SHIFT(54),
  [53] = {.count = 1, .reusable = false}, SHIFT(55),
  [55] = {.count = 1, .reusable = false}, SHIFT(56),
  [57] = {.count = 1, .reusable = false}, SHIFT(57),
  [59] = {.count = 1, .reusable = false}, SHIFT(58),
  [61] = {.count = 1, .reusable = false}, SHIFT(59),
  [63] = {.count = 1, .reusable = false}, SHIFT(60),
  [65] = {.count = 1, .reusable = true}, SHIFT(61),
  [67] = {.count = 1, .reusable = false}, SHIFT(62),
  [69] = {.count = 1, .reusable = false}, SHIFT(63),
  [71] = {.count = 1, .reusable = false}, SHIFT(64),
  [73] = {.count = 1, .reusable = false}, SHIFT(65),
  [75] = {.count = 1, .reusable = false}, SHIFT(66),
  [77] = {.count = 1, .reusable = false}, SHIFT(67),
  [79] = {.count = 1, .reusable = false}, SHIFT(68),
  [81] = {.count = 1, .reusable = true}, SHIFT(69),
  [83] = {.count = 1, .reusable = true}, SHIFT(70),
  [85] = {.count = 1, .reusable = true}, SHIFT(71),
  [87] = {.count = 1, .reusable = true}, SHIFT(72),
  [89] = {.count = 1, .reusable = true}, SHIFT(73),
  [91] = {.count = 1, .reusable = true}, SHIFT(95),
  [93] = {.count = 1, .reusable = true}, SHIFT(96),
  [95] = {.count = 1, .reusable = true}, SHIFT(74),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [99] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [101] = {.count = 1, .reusable = true}, SHIFT(97),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(98),
  [107] = {.count = 1, .reusable = true}, SHIFT(99),
  [109] = {.count = 1, .reusable = true}, SHIFT(107),
  [111] = {.count = 1, .reusable = true}, SHIFT(108),
  [113] = {.count = 1, .reusable = false}, SHIFT(116),
  [115] = {.count = 1, .reusable = true}, SHIFT(112),
  [117] = {.count = 1, .reusable = true}, SHIFT(117),
  [119] = {.count = 1, .reusable = true}, SHIFT(118),
  [121] = {.count = 1, .reusable = true}, SHIFT(121),
  [123] = {.count = 1, .reusable = true}, SHIFT(122),
  [125] = {.count = 1, .reusable = true}, SHIFT(127),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(136),
  [131] = {.count = 1, .reusable = true}, SHIFT(144),
  [133] = {.count = 1, .reusable = true}, SHIFT(145),
  [135] = {.count = 1, .reusable = true}, SHIFT(146),
  [137] = {.count = 1, .reusable = true}, SHIFT(169),
  [139] = {.count = 1, .reusable = true}, SHIFT(147),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(170),
  [145] = {.count = 1, .reusable = true}, SHIFT(172),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(173),
  [151] = {.count = 1, .reusable = true}, SHIFT(175),
  [153] = {.count = 1, .reusable = true}, SHIFT(174),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 2),
  [157] = {.count = 1, .reusable = false}, SHIFT(176),
  [159] = {.count = 1, .reusable = false}, SHIFT(177),
  [161] = {.count = 1, .reusable = false}, SHIFT(178),
  [163] = {.count = 1, .reusable = false}, SHIFT(179),
  [165] = {.count = 1, .reusable = true}, SHIFT(180),
  [167] = {.count = 1, .reusable = true}, SHIFT(181),
  [169] = {.count = 1, .reusable = true}, SHIFT(182),
  [171] = {.count = 1, .reusable = true}, SHIFT(189),
  [173] = {.count = 1, .reusable = true}, SHIFT(190),
  [175] = {.count = 1, .reusable = true}, SHIFT(191),
  [177] = {.count = 1, .reusable = true}, SHIFT(192),
  [179] = {.count = 1, .reusable = true}, SHIFT(193),
  [181] = {.count = 1, .reusable = true}, SHIFT(195),
  [183] = {.count = 1, .reusable = true}, SHIFT(198),
  [185] = {.count = 1, .reusable = true}, SHIFT(199),
  [187] = {.count = 1, .reusable = true}, SHIFT(201),
  [189] = {.count = 1, .reusable = true}, SHIFT(204),
  [191] = {.count = 1, .reusable = true}, SHIFT(206),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(207),
  [197] = {.count = 1, .reusable = true}, SHIFT(208),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(209),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [205] = {.count = 1, .reusable = false}, SHIFT(210),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [211] = {.count = 1, .reusable = false}, SHIFT(211),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(212),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(213),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [227] = {.count = 1, .reusable = true}, SHIFT(214),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(215),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(216),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [239] = {.count = 1, .reusable = true}, SHIFT(217),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [243] = {.count = 1, .reusable = false}, SHIFT(218),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(219),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(220),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(221),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [261] = {.count = 1, .reusable = true}, SHIFT(222),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(223),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(224),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [277] = {.count = 1, .reusable = false}, SHIFT(225),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [281] = {.count = 1, .reusable = true}, SHIFT(226),
  [283] = {.count = 1, .reusable = true}, SHIFT(227),
  [285] = {.count = 1, .reusable = true}, SHIFT(229),
  [287] = {.count = 1, .reusable = false}, SHIFT(231),
  [289] = {.count = 1, .reusable = false}, SHIFT(232),
  [291] = {.count = 1, .reusable = false}, SHIFT(233),
  [293] = {.count = 1, .reusable = true}, SHIFT(234),
  [295] = {.count = 1, .reusable = true}, SHIFT(235),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(236),
  [301] = {.count = 1, .reusable = true}, SHIFT(246),
  [303] = {.count = 1, .reusable = true}, SHIFT(247),
  [305] = {.count = 1, .reusable = true}, SHIFT(262),
  [307] = {.count = 1, .reusable = true}, SHIFT(266),
  [309] = {.count = 1, .reusable = true}, SHIFT(268),
  [311] = {.count = 1, .reusable = true}, SHIFT(269),
  [313] = {.count = 1, .reusable = true}, SHIFT(270),
  [315] = {.count = 1, .reusable = true}, SHIFT(271),
  [317] = {.count = 1, .reusable = true}, SHIFT(272),
  [319] = {.count = 1, .reusable = false}, SHIFT(273),
  [321] = {.count = 1, .reusable = false}, SHIFT(274),
  [323] = {.count = 1, .reusable = false}, SHIFT(275),
  [325] = {.count = 1, .reusable = true}, SHIFT(276),
  [327] = {.count = 1, .reusable = true}, SHIFT(277),
  [329] = {.count = 1, .reusable = true}, SHIFT(278),
  [331] = {.count = 1, .reusable = true}, SHIFT(280),
  [333] = {.count = 1, .reusable = true}, SHIFT(284),
  [335] = {.count = 1, .reusable = true}, SHIFT(285),
  [337] = {.count = 1, .reusable = true}, SHIFT(288),
  [339] = {.count = 1, .reusable = true}, SHIFT(290),
  [341] = {.count = 1, .reusable = true}, SHIFT(291),
  [343] = {.count = 1, .reusable = true}, SHIFT(292),
  [345] = {.count = 1, .reusable = true}, SHIFT(293),
  [347] = {.count = 1, .reusable = true}, SHIFT(299),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(301),
  [353] = {.count = 1, .reusable = false}, SHIFT(304),
  [355] = {.count = 1, .reusable = true}, SHIFT(303),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [359] = {.count = 1, .reusable = true}, SHIFT(305),
  [361] = {.count = 1, .reusable = false}, SHIFT(299),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [365] = {.count = 1, .reusable = true}, SHIFT(308),
  [367] = {.count = 1, .reusable = false}, SHIFT(309),
  [369] = {.count = 1, .reusable = false}, SHIFT(310),
  [371] = {.count = 1, .reusable = false}, SHIFT(311),
  [373] = {.count = 1, .reusable = false}, SHIFT(312),
  [375] = {.count = 1, .reusable = true}, SHIFT(313),
  [377] = {.count = 1, .reusable = true}, SHIFT(314),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [381] = {.count = 1, .reusable = true}, SHIFT(317),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(312),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [389] = {.count = 1, .reusable = true}, SHIFT(320),
  [391] = {.count = 1, .reusable = true}, SHIFT(322),
  [393] = {.count = 1, .reusable = true}, SHIFT(324),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [397] = {.count = 1, .reusable = true}, SHIFT(325),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [403] = {.count = 1, .reusable = true}, SHIFT(327),
  [405] = {.count = 1, .reusable = false}, SHIFT(329),
  [407] = {.count = 1, .reusable = true}, SHIFT(330),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [413] = {.count = 1, .reusable = true}, SHIFT(331),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [421] = {.count = 1, .reusable = false}, SHIFT(333),
  [423] = {.count = 1, .reusable = false}, SHIFT(334),
  [425] = {.count = 1, .reusable = true}, SHIFT(335),
  [427] = {.count = 1, .reusable = true}, SHIFT(336),
  [429] = {.count = 1, .reusable = true}, SHIFT(337),
  [431] = {.count = 1, .reusable = true}, SHIFT(338),
  [433] = {.count = 1, .reusable = true}, SHIFT(357),
  [435] = {.count = 1, .reusable = true}, SHIFT(339),
  [437] = {.count = 1, .reusable = true}, SHIFT(358),
  [439] = {.count = 1, .reusable = true}, SHIFT(359),
  [441] = {.count = 1, .reusable = true}, SHIFT(360),
  [443] = {.count = 1, .reusable = true}, SHIFT(365),
  [445] = {.count = 1, .reusable = true}, SHIFT(366),
  [447] = {.count = 1, .reusable = true}, SHIFT(367),
  [449] = {.count = 1, .reusable = true}, SHIFT(370),
  [451] = {.count = 1, .reusable = true}, SHIFT(377),
  [453] = {.count = 1, .reusable = true}, SHIFT(379),
  [455] = {.count = 1, .reusable = true}, SHIFT(380),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [461] = {.count = 1, .reusable = true}, SHIFT(396),
  [463] = {.count = 1, .reusable = true}, SHIFT(398),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [467] = {.count = 1, .reusable = true}, SHIFT(399),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [473] = {.count = 1, .reusable = true}, SHIFT(401),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(173),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(33),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(175),
  [506] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [508] = {.count = 1, .reusable = true}, SHIFT(402),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [512] = {.count = 1, .reusable = false}, SHIFT(403),
  [514] = {.count = 1, .reusable = false}, SHIFT(404),
  [516] = {.count = 1, .reusable = false}, SHIFT(405),
  [518] = {.count = 1, .reusable = false}, SHIFT(406),
  [520] = {.count = 1, .reusable = false}, SHIFT(407),
  [522] = {.count = 1, .reusable = true}, SHIFT(408),
  [524] = {.count = 1, .reusable = true}, SHIFT(409),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [528] = {.count = 1, .reusable = true}, SHIFT(410),
  [530] = {.count = 1, .reusable = true}, SHIFT(414),
  [532] = {.count = 1, .reusable = true}, SHIFT(415),
  [534] = {.count = 1, .reusable = true}, SHIFT(418),
  [536] = {.count = 1, .reusable = true}, SHIFT(420),
  [538] = {.count = 1, .reusable = true}, SHIFT(421),
  [540] = {.count = 1, .reusable = true}, SHIFT(422),
  [542] = {.count = 1, .reusable = true}, SHIFT(423),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 3),
  [546] = {.count = 1, .reusable = true}, SHIFT(424),
  [548] = {.count = 1, .reusable = true}, SHIFT(425),
  [550] = {.count = 1, .reusable = true}, SHIFT(427),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [556] = {.count = 1, .reusable = true}, SHIFT(428),
  [558] = {.count = 1, .reusable = true}, SHIFT(431),
  [560] = {.count = 1, .reusable = true}, SHIFT(432),
  [562] = {.count = 1, .reusable = true}, SHIFT(433),
  [564] = {.count = 1, .reusable = true}, SHIFT(434),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [568] = {.count = 1, .reusable = true}, SHIFT(436),
  [570] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(35),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(36),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(37),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(207),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(48),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [601] = {.count = 1, .reusable = true}, SHIFT(437),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [605] = {.count = 1, .reusable = true}, SHIFT(438),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [623] = {.count = 1, .reusable = true}, SHIFT(439),
  [625] = {.count = 1, .reusable = true}, SHIFT(440),
  [627] = {.count = 1, .reusable = true}, SHIFT(441),
  [629] = {.count = 1, .reusable = false}, SHIFT(442),
  [631] = {.count = 1, .reusable = false}, SHIFT(443),
  [633] = {.count = 1, .reusable = true}, SHIFT(444),
  [635] = {.count = 1, .reusable = true}, SHIFT(445),
  [637] = {.count = 1, .reusable = true}, SHIFT(446),
  [639] = {.count = 1, .reusable = true}, SHIFT(448),
  [641] = {.count = 1, .reusable = true}, SHIFT(455),
  [643] = {.count = 1, .reusable = true}, SHIFT(459),
  [645] = {.count = 1, .reusable = true}, SHIFT(460),
  [647] = {.count = 1, .reusable = true}, SHIFT(462),
  [649] = {.count = 1, .reusable = true}, SHIFT(464),
  [651] = {.count = 1, .reusable = true}, SHIFT(466),
  [653] = {.count = 1, .reusable = true}, SHIFT(467),
  [655] = {.count = 1, .reusable = false}, SHIFT(469),
  [657] = {.count = 1, .reusable = true}, SHIFT(470),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(69),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(70),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(71),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(72),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(270),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(96),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(74),
  [682] = {.count = 1, .reusable = true}, SHIFT(473),
  [684] = {.count = 1, .reusable = false}, SHIFT(474),
  [686] = {.count = 1, .reusable = false}, SHIFT(475),
  [688] = {.count = 1, .reusable = true}, SHIFT(476),
  [690] = {.count = 1, .reusable = true}, SHIFT(477),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [694] = {.count = 1, .reusable = true}, SHIFT(478),
  [696] = {.count = 1, .reusable = true}, SHIFT(482),
  [698] = {.count = 1, .reusable = true}, SHIFT(483),
  [700] = {.count = 1, .reusable = true}, SHIFT(484),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(98),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(99),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(291),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(108),
  [714] = {.count = 1, .reusable = true}, SHIFT(486),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [720] = {.count = 1, .reusable = true}, SHIFT(487),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [724] = {.count = 1, .reusable = true}, SHIFT(489),
  [726] = {.count = 1, .reusable = true}, SHIFT(491),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [732] = {.count = 1, .reusable = true}, SHIFT(492),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [736] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [738] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [740] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(304),
  [743] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [745] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(116),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(305),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(308),
  [758] = {.count = 1, .reusable = true}, SHIFT(493),
  [760] = {.count = 1, .reusable = true}, SHIFT(494),
  [762] = {.count = 1, .reusable = true}, SHIFT(495),
  [764] = {.count = 1, .reusable = true}, SHIFT(496),
  [766] = {.count = 1, .reusable = true}, SHIFT(497),
  [768] = {.count = 1, .reusable = true}, SHIFT(498),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [772] = {.count = 1, .reusable = true}, SHIFT(499),
  [774] = {.count = 1, .reusable = true}, SHIFT(500),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [780] = {.count = 1, .reusable = true}, SHIFT(502),
  [782] = {.count = 1, .reusable = true}, SHIFT(503),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [790] = {.count = 1, .reusable = true}, SHIFT(509),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [796] = {.count = 1, .reusable = false}, SHIFT(511),
  [798] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [800] = {.count = 1, .reusable = false}, SHIFT(512),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [806] = {.count = 1, .reusable = false}, SHIFT(513),
  [808] = {.count = 1, .reusable = true}, SHIFT(514),
  [810] = {.count = 1, .reusable = true}, SHIFT(515),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [814] = {.count = 1, .reusable = true}, SHIFT(516),
  [816] = {.count = 1, .reusable = true}, SHIFT(518),
  [818] = {.count = 1, .reusable = true}, SHIFT(527),
  [820] = {.count = 1, .reusable = true}, SHIFT(528),
  [822] = {.count = 1, .reusable = true}, SHIFT(543),
  [824] = {.count = 1, .reusable = true}, SHIFT(544),
  [826] = {.count = 1, .reusable = true}, SHIFT(545),
  [828] = {.count = 1, .reusable = true}, SHIFT(546),
  [830] = {.count = 1, .reusable = true}, SHIFT(547),
  [832] = {.count = 1, .reusable = true}, SHIFT(548),
  [834] = {.count = 1, .reusable = true}, SHIFT(552),
  [836] = {.count = 1, .reusable = true}, SHIFT(554),
  [838] = {.count = 1, .reusable = true}, SHIFT(555),
  [840] = {.count = 1, .reusable = true}, SHIFT(557),
  [842] = {.count = 1, .reusable = true}, SHIFT(559),
  [844] = {.count = 1, .reusable = true}, SHIFT(561),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [848] = {.count = 1, .reusable = true}, SHIFT(562),
  [850] = {.count = 1, .reusable = true}, SHIFT(563),
  [852] = {.count = 1, .reusable = true}, SHIFT(333),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [856] = {.count = 1, .reusable = true}, SHIFT(564),
  [858] = {.count = 1, .reusable = true}, SHIFT(566),
  [860] = {.count = 1, .reusable = true}, SHIFT(567),
  [862] = {.count = 1, .reusable = true}, SHIFT(574),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [866] = {.count = 1, .reusable = false}, SHIFT(431),
  [868] = {.count = 1, .reusable = true}, SHIFT(577),
  [870] = {.count = 1, .reusable = true}, SHIFT(578),
  [872] = {.count = 1, .reusable = true}, SHIFT(581),
  [874] = {.count = 1, .reusable = true}, SHIFT(583),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [880] = {.count = 1, .reusable = true}, SHIFT(585),
  [882] = {.count = 1, .reusable = true}, SHIFT(588),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [888] = {.count = 1, .reusable = true}, SHIFT(589),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [898] = {.count = 1, .reusable = true}, SHIFT(592),
  [900] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(35),
  [903] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(396),
  [906] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(145),
  [909] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(146),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(399),
  [915] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(108),
  [918] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(147),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(401),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [928] = {.count = 1, .reusable = false}, SHIFT(593),
  [930] = {.count = 1, .reusable = false}, SHIFT(594),
  [932] = {.count = 1, .reusable = true}, SHIFT(595),
  [934] = {.count = 1, .reusable = true}, SHIFT(596),
  [936] = {.count = 1, .reusable = true}, SHIFT(600),
  [938] = {.count = 1, .reusable = true}, SHIFT(601),
  [940] = {.count = 1, .reusable = true}, SHIFT(602),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [944] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(180),
  [947] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(181),
  [950] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(422),
  [953] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(190),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 4),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [960] = {.count = 1, .reusable = true}, SHIFT(604),
  [962] = {.count = 1, .reusable = true}, SHIFT(605),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [966] = {.count = 1, .reusable = true}, SHIFT(606),
  [968] = {.count = 1, .reusable = true}, SHIFT(607),
  [970] = {.count = 1, .reusable = true}, SHIFT(608),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [974] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(436),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [979] = {.count = 1, .reusable = true}, SHIFT(609),
  [981] = {.count = 1, .reusable = true}, SHIFT(610),
  [983] = {.count = 1, .reusable = true}, SHIFT(611),
  [985] = {.count = 1, .reusable = true}, SHIFT(612),
  [987] = {.count = 1, .reusable = true}, SHIFT(613),
  [989] = {.count = 1, .reusable = true}, SHIFT(614),
  [991] = {.count = 1, .reusable = true}, SHIFT(616),
  [993] = {.count = 1, .reusable = true}, SHIFT(618),
  [995] = {.count = 1, .reusable = true}, SHIFT(619),
  [997] = {.count = 1, .reusable = true}, SHIFT(623),
  [999] = {.count = 1, .reusable = false}, SHIFT(625),
  [1001] = {.count = 1, .reusable = true}, SHIFT(469),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [1007] = {.count = 1, .reusable = false}, SHIFT(626),
  [1009] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [1011] = {.count = 1, .reusable = true}, SHIFT(627),
  [1013] = {.count = 1, .reusable = true}, SHIFT(628),
  [1015] = {.count = 1, .reusable = true}, SHIFT(629),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [1019] = {.count = 1, .reusable = false}, SHIFT(630),
  [1021] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [1023] = {.count = 1, .reusable = true}, SHIFT(631),
  [1025] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [1027] = {.count = 1, .reusable = true}, SHIFT(632),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [1033] = {.count = 1, .reusable = true}, SHIFT(633),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [1039] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [1043] = {.count = 1, .reusable = true}, SHIFT(634),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [1047] = {.count = 1, .reusable = true}, SHIFT(635),
  [1049] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [1051] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [1053] = {.count = 1, .reusable = true}, SHIFT(637),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [1059] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1061] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1063] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [1065] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [1067] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [1069] = {.count = 1, .reusable = false}, SHIFT(639),
  [1071] = {.count = 1, .reusable = true}, SHIFT(640),
  [1073] = {.count = 1, .reusable = true}, SHIFT(642),
  [1075] = {.count = 1, .reusable = true}, SHIFT(643),
  [1077] = {.count = 1, .reusable = true}, SHIFT(644),
  [1079] = {.count = 1, .reusable = true}, SHIFT(646),
  [1081] = {.count = 1, .reusable = true}, SHIFT(653),
  [1083] = {.count = 1, .reusable = true}, SHIFT(656),
  [1085] = {.count = 1, .reusable = true}, SHIFT(657),
  [1087] = {.count = 1, .reusable = true}, SHIFT(659),
  [1089] = {.count = 1, .reusable = true}, SHIFT(661),
  [1091] = {.count = 1, .reusable = true}, SHIFT(663),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [1095] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(335),
  [1098] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(336),
  [1101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [1103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(338),
  [1106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(545),
  [1109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(190),
  [1112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(339),
  [1115] = {.count = 1, .reusable = true}, SHIFT(666),
  [1117] = {.count = 1, .reusable = true}, SHIFT(667),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1121] = {.count = 1, .reusable = true}, SHIFT(668),
  [1123] = {.count = 1, .reusable = true}, SHIFT(671),
  [1125] = {.count = 1, .reusable = true}, SHIFT(673),
  [1127] = {.count = 1, .reusable = true}, SHIFT(674),
  [1129] = {.count = 1, .reusable = true}, SHIFT(675),
  [1131] = {.count = 1, .reusable = true}, SHIFT(676),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1135] = {.count = 1, .reusable = true}, SHIFT(677),
  [1137] = {.count = 1, .reusable = true}, SHIFT(679),
  [1139] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1145] = {.count = 1, .reusable = true}, SHIFT(682),
  [1147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(35),
  [1150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(358),
  [1153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(359),
  [1156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(562),
  [1161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(108),
  [1164] = {.count = 1, .reusable = true}, SHIFT(683),
  [1166] = {.count = 1, .reusable = true}, SHIFT(684),
  [1168] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(566),
  [1173] = {.count = 1, .reusable = true}, SHIFT(685),
  [1175] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1177] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1179] = {.count = 1, .reusable = true}, SHIFT(686),
  [1181] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1183] = {.count = 1, .reusable = true}, SHIFT(688),
  [1185] = {.count = 1, .reusable = true}, SHIFT(690),
  [1187] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1189] = {.count = 1, .reusable = true}, SHIFT(691),
  [1191] = {.count = 1, .reusable = true}, SHIFT(692),
  [1193] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1195] = {.count = 1, .reusable = true}, SHIFT(693),
  [1197] = {.count = 1, .reusable = true}, SHIFT(694),
  [1199] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1203] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(592),
  [1208] = {.count = 1, .reusable = true}, SHIFT(701),
  [1210] = {.count = 1, .reusable = true}, SHIFT(702),
  [1212] = {.count = 1, .reusable = true}, SHIFT(703),
  [1214] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1216] = {.count = 1, .reusable = true}, SHIFT(704),
  [1218] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1220] = {.count = 1, .reusable = false}, SHIFT(705),
  [1222] = {.count = 1, .reusable = false}, SHIFT(706),
  [1224] = {.count = 1, .reusable = true}, SHIFT(707),
  [1226] = {.count = 1, .reusable = true}, SHIFT(708),
  [1228] = {.count = 1, .reusable = true}, SHIFT(709),
  [1230] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1232] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1234] = {.count = 1, .reusable = true}, SHIFT(710),
  [1236] = {.count = 1, .reusable = true}, SHIFT(711),
  [1238] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1240] = {.count = 1, .reusable = true}, SHIFT(712),
  [1242] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1244] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1246] = {.count = 1, .reusable = true}, SHIFT(713),
  [1248] = {.count = 1, .reusable = true}, SHIFT(714),
  [1250] = {.count = 1, .reusable = true}, SHIFT(715),
  [1252] = {.count = 1, .reusable = true}, SHIFT(716),
  [1254] = {.count = 1, .reusable = true}, SHIFT(717),
  [1256] = {.count = 1, .reusable = true}, SHIFT(718),
  [1258] = {.count = 1, .reusable = true}, SHIFT(720),
  [1260] = {.count = 1, .reusable = true}, SHIFT(722),
  [1262] = {.count = 1, .reusable = true}, SHIFT(723),
  [1264] = {.count = 1, .reusable = true}, SHIFT(728),
  [1266] = {.count = 1, .reusable = true}, SHIFT(729),
  [1268] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(546),
  [1273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(547),
  [1276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(675),
  [1279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(190),
  [1282] = {.count = 1, .reusable = true}, SHIFT(733),
  [1284] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1286] = {.count = 1, .reusable = true}, SHIFT(734),
  [1288] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1290] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(682),
  [1295] = {.count = 1, .reusable = false}, SHIFT(735),
  [1297] = {.count = 1, .reusable = false}, SHIFT(736),
  [1299] = {.count = 1, .reusable = true}, SHIFT(737),
  [1301] = {.count = 1, .reusable = true}, SHIFT(310),
  [1303] = {.count = 1, .reusable = true}, SHIFT(738),
  [1305] = {.count = 1, .reusable = true}, SHIFT(739),
  [1307] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1309] = {.count = 1, .reusable = true}, SHIFT(740),
  [1311] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1313] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1315] = {.count = 1, .reusable = true}, SHIFT(742),
  [1317] = {.count = 1, .reusable = true}, SHIFT(743),
  [1319] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1321] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1323] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1325] = {.count = 1, .reusable = true}, SHIFT(744),
  [1327] = {.count = 1, .reusable = false}, SHIFT(745),
  [1329] = {.count = 1, .reusable = false}, SHIFT(746),
  [1331] = {.count = 1, .reusable = true}, SHIFT(747),
  [1333] = {.count = 1, .reusable = true}, SHIFT(748),
  [1335] = {.count = 1, .reusable = true}, SHIFT(749),
  [1337] = {.count = 1, .reusable = true}, SHIFT(750),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1341] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1343] = {.count = 1, .reusable = true}, SHIFT(751),
  [1345] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1347] = {.count = 1, .reusable = true}, SHIFT(752),
  [1349] = {.count = 1, .reusable = true}, SHIFT(753),
  [1351] = {.count = 1, .reusable = true}, SHIFT(754),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
