#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 616
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 4
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  sym_implicit_math_shift = 3,
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
  [sym_implicit_math_shift] = "implicit_math_shift",
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
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead != '}' &&
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
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(183);
      if (lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 184:
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
    case 185:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(188);
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
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 191:
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(20);
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
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(37);
      END_STATE();
    case 437:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(438);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(188);
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
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(199);
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
        ADVANCE(441);
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
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(445);
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
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(446);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(447);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_tag);
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
        ADVANCE(441);
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
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'e')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(362);
      if (lookahead == 'k')
        ADVANCE(371);
      if (lookahead == 't')
        ADVANCE(445);
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
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 177, .external_lex_state = 2},
  [5] = {.lex_state = 36, .external_lex_state = 3},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 36, .external_lex_state = 4},
  [9] = {.lex_state = 178},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 179},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 38},
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
  [32] = {.lex_state = 180},
  [33] = {.lex_state = 36, .external_lex_state = 4},
  [34] = {.lex_state = 182},
  [35] = {.lex_state = 182},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 184},
  [38] = {.lex_state = 184},
  [39] = {.lex_state = 184},
  [40] = {.lex_state = 184},
  [41] = {.lex_state = 184},
  [42] = {.lex_state = 182},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 184},
  [45] = {.lex_state = 184},
  [46] = {.lex_state = 184},
  [47] = {.lex_state = 184},
  [48] = {.lex_state = 184},
  [49] = {.lex_state = 182},
  [50] = {.lex_state = 182},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 177, .external_lex_state = 2},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 36, .external_lex_state = 3},
  [55] = {.lex_state = 177, .external_lex_state = 2},
  [56] = {.lex_state = 36, .external_lex_state = 4},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 179},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 177, .external_lex_state = 2},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 38},
  [76] = {.lex_state = 177, .external_lex_state = 2},
  [77] = {.lex_state = 180},
  [78] = {.lex_state = 38},
  [79] = {.lex_state = 185},
  [80] = {.lex_state = 177, .external_lex_state = 2},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 191, .external_lex_state = 3},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36, .external_lex_state = 3},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 36, .external_lex_state = 3},
  [91] = {.lex_state = 180},
  [92] = {.lex_state = 178, .external_lex_state = 5},
  [93] = {.lex_state = 185},
  [94] = {.lex_state = 177, .external_lex_state = 2},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 36},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 192},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 196},
  [108] = {.lex_state = 179},
  [109] = {.lex_state = 197},
  [110] = {.lex_state = 38},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 201},
  [114] = {.lex_state = 300},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 300},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 184},
  [121] = {.lex_state = 38},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 184},
  [124] = {.lex_state = 38},
  [125] = {.lex_state = 38},
  [126] = {.lex_state = 184},
  [127] = {.lex_state = 301},
  [128] = {.lex_state = 302},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 38},
  [131] = {.lex_state = 184},
  [132] = {.lex_state = 38},
  [133] = {.lex_state = 38},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 303},
  [136] = {.lex_state = 177, .external_lex_state = 2},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 36},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 38},
  [153] = {.lex_state = 38},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 38},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 38},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 38},
  [161] = {.lex_state = 180},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 184},
  [169] = {.lex_state = 184},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 36},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 36},
  [177] = {.lex_state = 38},
  [178] = {.lex_state = 177, .external_lex_state = 2},
  [179] = {.lex_state = 436, .external_lex_state = 2},
  [180] = {.lex_state = 436, .external_lex_state = 2},
  [181] = {.lex_state = 177, .external_lex_state = 2},
  [182] = {.lex_state = 177, .external_lex_state = 2},
  [183] = {.lex_state = 177, .external_lex_state = 2},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 191, .external_lex_state = 3},
  [186] = {.lex_state = 178, .external_lex_state = 5},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 177, .external_lex_state = 2},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 36},
  [194] = {.lex_state = 177, .external_lex_state = 2},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 177, .external_lex_state = 2},
  [199] = {.lex_state = 184},
  [200] = {.lex_state = 177, .external_lex_state = 2},
  [201] = {.lex_state = 184},
  [202] = {.lex_state = 177, .external_lex_state = 2},
  [203] = {.lex_state = 177, .external_lex_state = 2},
  [204] = {.lex_state = 184},
  [205] = {.lex_state = 302},
  [206] = {.lex_state = 177, .external_lex_state = 2},
  [207] = {.lex_state = 177, .external_lex_state = 2},
  [208] = {.lex_state = 184},
  [209] = {.lex_state = 177, .external_lex_state = 2},
  [210] = {.lex_state = 177, .external_lex_state = 2},
  [211] = {.lex_state = 177, .external_lex_state = 2},
  [212] = {.lex_state = 303},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 177, .external_lex_state = 2},
  [215] = {.lex_state = 177, .external_lex_state = 2},
  [216] = {.lex_state = 177, .external_lex_state = 2},
  [217] = {.lex_state = 177, .external_lex_state = 2},
  [218] = {.lex_state = 38},
  [219] = {.lex_state = 38},
  [220] = {.lex_state = 177, .external_lex_state = 2},
  [221] = {.lex_state = 177, .external_lex_state = 2},
  [222] = {.lex_state = 184},
  [223] = {.lex_state = 36, .external_lex_state = 3},
  [224] = {.lex_state = 182, .external_lex_state = 3},
  [225] = {.lex_state = 182, .external_lex_state = 3},
  [226] = {.lex_state = 185},
  [227] = {.lex_state = 177, .external_lex_state = 2},
  [228] = {.lex_state = 36, .external_lex_state = 3},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 38},
  [232] = {.lex_state = 177, .external_lex_state = 2},
  [233] = {.lex_state = 191, .external_lex_state = 3},
  [234] = {.lex_state = 38},
  [235] = {.lex_state = 177, .external_lex_state = 2},
  [236] = {.lex_state = 36, .external_lex_state = 3},
  [237] = {.lex_state = 437},
  [238] = {.lex_state = 36, .external_lex_state = 3},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 36},
  [241] = {.lex_state = 177, .external_lex_state = 2},
  [242] = {.lex_state = 36, .external_lex_state = 3},
  [243] = {.lex_state = 302},
  [244] = {.lex_state = 36, .external_lex_state = 3},
  [245] = {.lex_state = 36, .external_lex_state = 3},
  [246] = {.lex_state = 38},
  [247] = {.lex_state = 36, .external_lex_state = 3},
  [248] = {.lex_state = 36, .external_lex_state = 3},
  [249] = {.lex_state = 36, .external_lex_state = 4},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 177, .external_lex_state = 2},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 177, .external_lex_state = 2},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 439},
  [262] = {.lex_state = 38},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 38},
  [266] = {.lex_state = 36},
  [267] = {.lex_state = 184},
  [268] = {.lex_state = 38},
  [269] = {.lex_state = 201},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 179},
  [272] = {.lex_state = 196},
  [273] = {.lex_state = 179},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 38},
  [276] = {.lex_state = 36},
  [277] = {.lex_state = 177, .external_lex_state = 2},
  [278] = {.lex_state = 177, .external_lex_state = 2},
  [279] = {.lex_state = 177, .external_lex_state = 2},
  [280] = {.lex_state = 177, .external_lex_state = 2},
  [281] = {.lex_state = 177, .external_lex_state = 2},
  [282] = {.lex_state = 36},
  [283] = {.lex_state = 300},
  [284] = {.lex_state = 300},
  [285] = {.lex_state = 179},
  [286] = {.lex_state = 300},
  [287] = {.lex_state = 300},
  [288] = {.lex_state = 36},
  [289] = {.lex_state = 38},
  [290] = {.lex_state = 300},
  [291] = {.lex_state = 300},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 38},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 38},
  [297] = {.lex_state = 302},
  [298] = {.lex_state = 180},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 38},
  [301] = {.lex_state = 182},
  [302] = {.lex_state = 182},
  [303] = {.lex_state = 440},
  [304] = {.lex_state = 177, .external_lex_state = 2},
  [305] = {.lex_state = 38},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 36},
  [309] = {.lex_state = 36},
  [310] = {.lex_state = 36},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 36},
  [313] = {.lex_state = 36},
  [314] = {.lex_state = 36},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 36},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 38},
  [320] = {.lex_state = 177, .external_lex_state = 2},
  [321] = {.lex_state = 442},
  [322] = {.lex_state = 177, .external_lex_state = 2},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 36},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 36},
  [329] = {.lex_state = 448},
  [330] = {.lex_state = 38},
  [331] = {.lex_state = 36},
  [332] = {.lex_state = 36},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 36},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 460},
  [337] = {.lex_state = 38},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 300},
  [340] = {.lex_state = 38},
  [341] = {.lex_state = 38},
  [342] = {.lex_state = 184},
  [343] = {.lex_state = 38},
  [344] = {.lex_state = 38},
  [345] = {.lex_state = 38},
  [346] = {.lex_state = 184},
  [347] = {.lex_state = 38},
  [348] = {.lex_state = 38},
  [349] = {.lex_state = 38},
  [350] = {.lex_state = 440},
  [351] = {.lex_state = 38},
  [352] = {.lex_state = 38},
  [353] = {.lex_state = 36},
  [354] = {.lex_state = 38},
  [355] = {.lex_state = 38},
  [356] = {.lex_state = 36},
  [357] = {.lex_state = 184},
  [358] = {.lex_state = 177, .external_lex_state = 2},
  [359] = {.lex_state = 177, .external_lex_state = 2},
  [360] = {.lex_state = 177, .external_lex_state = 2},
  [361] = {.lex_state = 191, .external_lex_state = 3},
  [362] = {.lex_state = 177, .external_lex_state = 2},
  [363] = {.lex_state = 36, .external_lex_state = 4},
  [364] = {.lex_state = 38},
  [365] = {.lex_state = 177, .external_lex_state = 2},
  [366] = {.lex_state = 439},
  [367] = {.lex_state = 177, .external_lex_state = 2},
  [368] = {.lex_state = 177, .external_lex_state = 2},
  [369] = {.lex_state = 36},
  [370] = {.lex_state = 177, .external_lex_state = 2},
  [371] = {.lex_state = 36},
  [372] = {.lex_state = 177, .external_lex_state = 2},
  [373] = {.lex_state = 201},
  [374] = {.lex_state = 177, .external_lex_state = 2},
  [375] = {.lex_state = 177, .external_lex_state = 2},
  [376] = {.lex_state = 177, .external_lex_state = 2},
  [377] = {.lex_state = 177, .external_lex_state = 2},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 177, .external_lex_state = 2},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 177, .external_lex_state = 2},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 177, .external_lex_state = 2},
  [384] = {.lex_state = 180},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 177, .external_lex_state = 2},
  [387] = {.lex_state = 436, .external_lex_state = 2},
  [388] = {.lex_state = 448},
  [389] = {.lex_state = 177, .external_lex_state = 2},
  [390] = {.lex_state = 177, .external_lex_state = 2},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 36, .external_lex_state = 3},
  [393] = {.lex_state = 36, .external_lex_state = 3},
  [394] = {.lex_state = 177, .external_lex_state = 2},
  [395] = {.lex_state = 177, .external_lex_state = 2},
  [396] = {.lex_state = 177, .external_lex_state = 2},
  [397] = {.lex_state = 177, .external_lex_state = 2},
  [398] = {.lex_state = 177, .external_lex_state = 2},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 177, .external_lex_state = 2},
  [401] = {.lex_state = 38},
  [402] = {.lex_state = 36, .external_lex_state = 3},
  [403] = {.lex_state = 177, .external_lex_state = 2},
  [404] = {.lex_state = 38},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 36, .external_lex_state = 3},
  [407] = {.lex_state = 177, .external_lex_state = 2},
  [408] = {.lex_state = 177, .external_lex_state = 2},
  [409] = {.lex_state = 36},
  [410] = {.lex_state = 36, .external_lex_state = 3},
  [411] = {.lex_state = 36, .external_lex_state = 3},
  [412] = {.lex_state = 36, .external_lex_state = 3},
  [413] = {.lex_state = 177, .external_lex_state = 2},
  [414] = {.lex_state = 180},
  [415] = {.lex_state = 36, .external_lex_state = 3},
  [416] = {.lex_state = 38},
  [417] = {.lex_state = 38},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 182},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 177, .external_lex_state = 2},
  [422] = {.lex_state = 38},
  [423] = {.lex_state = 38},
  [424] = {.lex_state = 182},
  [425] = {.lex_state = 201},
  [426] = {.lex_state = 38},
  [427] = {.lex_state = 201},
  [428] = {.lex_state = 38},
  [429] = {.lex_state = 36},
  [430] = {.lex_state = 177, .external_lex_state = 2},
  [431] = {.lex_state = 300},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 300},
  [434] = {.lex_state = 38},
  [435] = {.lex_state = 300},
  [436] = {.lex_state = 177, .external_lex_state = 2},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 300},
  [439] = {.lex_state = 300},
  [440] = {.lex_state = 179},
  [441] = {.lex_state = 300},
  [442] = {.lex_state = 300},
  [443] = {.lex_state = 38},
  [444] = {.lex_state = 300},
  [445] = {.lex_state = 38},
  [446] = {.lex_state = 38},
  [447] = {.lex_state = 38},
  [448] = {.lex_state = 38},
  [449] = {.lex_state = 38},
  [450] = {.lex_state = 38},
  [451] = {.lex_state = 436, .external_lex_state = 2},
  [452] = {.lex_state = 177, .external_lex_state = 2},
  [453] = {.lex_state = 177, .external_lex_state = 2},
  [454] = {.lex_state = 36},
  [455] = {.lex_state = 36},
  [456] = {.lex_state = 36},
  [457] = {.lex_state = 36},
  [458] = {.lex_state = 36},
  [459] = {.lex_state = 36},
  [460] = {.lex_state = 177, .external_lex_state = 2},
  [461] = {.lex_state = 36},
  [462] = {.lex_state = 177, .external_lex_state = 2},
  [463] = {.lex_state = 177, .external_lex_state = 2},
  [464] = {.lex_state = 184},
  [465] = {.lex_state = 177, .external_lex_state = 2},
  [466] = {.lex_state = 177, .external_lex_state = 2},
  [467] = {.lex_state = 184},
  [468] = {.lex_state = 177, .external_lex_state = 2},
  [469] = {.lex_state = 177, .external_lex_state = 2},
  [470] = {.lex_state = 177, .external_lex_state = 2},
  [471] = {.lex_state = 177, .external_lex_state = 2},
  [472] = {.lex_state = 38},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 177, .external_lex_state = 2},
  [475] = {.lex_state = 442},
  [476] = {.lex_state = 177, .external_lex_state = 2},
  [477] = {.lex_state = 38},
  [478] = {.lex_state = 36},
  [479] = {.lex_state = 36},
  [480] = {.lex_state = 38},
  [481] = {.lex_state = 177, .external_lex_state = 2},
  [482] = {.lex_state = 36},
  [483] = {.lex_state = 38},
  [484] = {.lex_state = 177, .external_lex_state = 2},
  [485] = {.lex_state = 38},
  [486] = {.lex_state = 464},
  [487] = {.lex_state = 38},
  [488] = {.lex_state = 36},
  [489] = {.lex_state = 38},
  [490] = {.lex_state = 38},
  [491] = {.lex_state = 36},
  [492] = {.lex_state = 38},
  [493] = {.lex_state = 36},
  [494] = {.lex_state = 38},
  [495] = {.lex_state = 38},
  [496] = {.lex_state = 38},
  [497] = {.lex_state = 38},
  [498] = {.lex_state = 177, .external_lex_state = 2},
  [499] = {.lex_state = 36},
  [500] = {.lex_state = 300},
  [501] = {.lex_state = 300},
  [502] = {.lex_state = 36},
  [503] = {.lex_state = 38},
  [504] = {.lex_state = 300},
  [505] = {.lex_state = 38},
  [506] = {.lex_state = 36},
  [507] = {.lex_state = 38},
  [508] = {.lex_state = 38},
  [509] = {.lex_state = 38},
  [510] = {.lex_state = 36},
  [511] = {.lex_state = 177, .external_lex_state = 2},
  [512] = {.lex_state = 36},
  [513] = {.lex_state = 177, .external_lex_state = 2},
  [514] = {.lex_state = 436, .external_lex_state = 2},
  [515] = {.lex_state = 436, .external_lex_state = 2},
  [516] = {.lex_state = 201},
  [517] = {.lex_state = 177, .external_lex_state = 2},
  [518] = {.lex_state = 201},
  [519] = {.lex_state = 177, .external_lex_state = 2},
  [520] = {.lex_state = 177, .external_lex_state = 2},
  [521] = {.lex_state = 177, .external_lex_state = 2},
  [522] = {.lex_state = 177, .external_lex_state = 2},
  [523] = {.lex_state = 177, .external_lex_state = 2},
  [524] = {.lex_state = 177, .external_lex_state = 2},
  [525] = {.lex_state = 177, .external_lex_state = 2},
  [526] = {.lex_state = 177, .external_lex_state = 2},
  [527] = {.lex_state = 177, .external_lex_state = 2},
  [528] = {.lex_state = 177, .external_lex_state = 2},
  [529] = {.lex_state = 177, .external_lex_state = 2},
  [530] = {.lex_state = 177, .external_lex_state = 2},
  [531] = {.lex_state = 177, .external_lex_state = 2},
  [532] = {.lex_state = 177, .external_lex_state = 2},
  [533] = {.lex_state = 38},
  [534] = {.lex_state = 36, .external_lex_state = 3},
  [535] = {.lex_state = 177, .external_lex_state = 2},
  [536] = {.lex_state = 36, .external_lex_state = 3},
  [537] = {.lex_state = 36, .external_lex_state = 3},
  [538] = {.lex_state = 38},
  [539] = {.lex_state = 38},
  [540] = {.lex_state = 38},
  [541] = {.lex_state = 177, .external_lex_state = 2},
  [542] = {.lex_state = 38},
  [543] = {.lex_state = 300},
  [544] = {.lex_state = 36},
  [545] = {.lex_state = 300},
  [546] = {.lex_state = 179},
  [547] = {.lex_state = 300},
  [548] = {.lex_state = 177, .external_lex_state = 2},
  [549] = {.lex_state = 177, .external_lex_state = 2},
  [550] = {.lex_state = 36},
  [551] = {.lex_state = 177, .external_lex_state = 2},
  [552] = {.lex_state = 177, .external_lex_state = 2},
  [553] = {.lex_state = 177, .external_lex_state = 2},
  [554] = {.lex_state = 177, .external_lex_state = 2},
  [555] = {.lex_state = 177, .external_lex_state = 2},
  [556] = {.lex_state = 177, .external_lex_state = 2},
  [557] = {.lex_state = 36},
  [558] = {.lex_state = 177, .external_lex_state = 2},
  [559] = {.lex_state = 36},
  [560] = {.lex_state = 177, .external_lex_state = 2},
  [561] = {.lex_state = 177, .external_lex_state = 2},
  [562] = {.lex_state = 177, .external_lex_state = 2},
  [563] = {.lex_state = 177, .external_lex_state = 2},
  [564] = {.lex_state = 177, .external_lex_state = 2},
  [565] = {.lex_state = 177, .external_lex_state = 2},
  [566] = {.lex_state = 177, .external_lex_state = 2},
  [567] = {.lex_state = 36},
  [568] = {.lex_state = 177, .external_lex_state = 2},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 177, .external_lex_state = 2},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 38},
  [574] = {.lex_state = 177, .external_lex_state = 2},
  [575] = {.lex_state = 177, .external_lex_state = 2},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 38},
  [578] = {.lex_state = 38},
  [579] = {.lex_state = 300},
  [580] = {.lex_state = 177, .external_lex_state = 2},
  [581] = {.lex_state = 36},
  [582] = {.lex_state = 300},
  [583] = {.lex_state = 300},
  [584] = {.lex_state = 38},
  [585] = {.lex_state = 300},
  [586] = {.lex_state = 38},
  [587] = {.lex_state = 177, .external_lex_state = 2},
  [588] = {.lex_state = 177, .external_lex_state = 2},
  [589] = {.lex_state = 177, .external_lex_state = 2},
  [590] = {.lex_state = 177, .external_lex_state = 2},
  [591] = {.lex_state = 177, .external_lex_state = 2},
  [592] = {.lex_state = 177, .external_lex_state = 2},
  [593] = {.lex_state = 177, .external_lex_state = 2},
  [594] = {.lex_state = 36, .external_lex_state = 3},
  [595] = {.lex_state = 38},
  [596] = {.lex_state = 36},
  [597] = {.lex_state = 179},
  [598] = {.lex_state = 36},
  [599] = {.lex_state = 177, .external_lex_state = 2},
  [600] = {.lex_state = 177, .external_lex_state = 2},
  [601] = {.lex_state = 177, .external_lex_state = 2},
  [602] = {.lex_state = 177, .external_lex_state = 2},
  [603] = {.lex_state = 177, .external_lex_state = 2},
  [604] = {.lex_state = 177, .external_lex_state = 2},
  [605] = {.lex_state = 177, .external_lex_state = 2},
  [606] = {.lex_state = 38},
  [607] = {.lex_state = 38},
  [608] = {.lex_state = 300},
  [609] = {.lex_state = 36},
  [610] = {.lex_state = 300},
  [611] = {.lex_state = 177, .external_lex_state = 2},
  [612] = {.lex_state = 177, .external_lex_state = 2},
  [613] = {.lex_state = 177, .external_lex_state = 2},
  [614] = {.lex_state = 177, .external_lex_state = 2},
  [615] = {.lex_state = 36},
};

enum {
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
  ts_external_token_implicit_math_shift,
  ts_external_token_end_group,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
  [ts_external_token_implicit_math_shift] = sym_implicit_math_shift,
  [ts_external_token_end_group] = sym_end_group,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
    [ts_external_token_implicit_math_shift] = true,
    [ts_external_token_end_group] = true,
  },
  [2] = {
    [ts_external_token_end_group] = true,
  },
  [3] = {
    [ts_external_token_implicit_math_shift] = true,
  },
  [4] = {
    [ts_external_token_verb_delim] = true,
  },
  [5] = {
    [ts_external_token_verb_body] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [sym_implicit_math_shift] = ACTIONS(1),
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
    [sym__common] = STATE(76),
    [sym__text_mode_common] = STATE(76),
    [sym_inline_verbatim] = STATE(76),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(76),
    [sym_text_mode_at_region] = STATE(76),
    [sym_parameter] = STATE(76),
    [sym_text_env] = STATE(76),
    [sym__display_math] = STATE(76),
    [sym_tex_display_math] = STATE(76),
    [sym_latex_display_math] = STATE(76),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(76),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(76),
    [sym_tex_inline_math] = STATE(76),
    [sym_latex_inline_math] = STATE(76),
    [sym_inline_math_env] = STATE(76),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(76),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(76),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(76),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(76),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(76),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(76),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(76),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(76),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(76),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(76),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(76),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(76),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(76),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(76),
    [sym_opt_text_group] = STATE(76),
    [sym_token] = STATE(76),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(76),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(67),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(71),
    [sym_text] = ACTIONS(71),
  },
  [5] = {
    [sym__common] = STATE(90),
    [sym__math_mode_common] = STATE(90),
    [sym__math_mode] = STATE(90),
    [sym_math_mode] = STATE(82),
    [sym_parameter] = STATE(90),
    [sym_math_env] = STATE(90),
    [sym_tag] = STATE(90),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(90),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(90),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(90),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(90),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(90),
    [sym_opt_math_group] = STATE(90),
    [sym_token] = STATE(90),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(90),
    [aux_sym_parameter_repeat1] = STATE(91),
    [sym_implicit_math_shift] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(89),
    [sym_math_shift] = ACTIONS(89),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(89),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(89),
    [sym_active_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [8] = {
    [sym_verb_delim] = ACTIONS(93),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(95),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [11] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(100),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [12] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(101),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [13] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(102),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [14] = {
    [sym_verbatim_end] = STATE(104),
    [sym_verbatim_text] = STATE(105),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(108),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(113),
  },
  [17] = {
    [sym_simple_text_group] = STATE(119),
    [sym_opt_text_group] = STATE(120),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [18] = {
    [sym_simple_text_group] = STATE(122),
    [sym_opt_text_group] = STATE(123),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [19] = {
    [sym_text_group] = STATE(124),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [20] = {
    [sym_text_group] = STATE(125),
    [sym_opt_text_group] = STATE(126),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [22] = {
    [sym_escaped] = STATE(128),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(119),
  },
  [23] = {
    [sym_text_group] = STATE(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [24] = {
    [sym_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(132),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(134),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_math_shift] = ACTIONS(129),
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
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
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(137),
  },
  [32] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(141),
  },
  [33] = {
    [sym_verb_delim] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(149),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(155),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_text] = ACTIONS(157),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(161),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(165),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(169),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(173),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(177),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(185),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(187),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(191),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(195),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(197),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(199),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(201),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(203),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(207),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(211),
    [sym_math_shift] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(211),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(211),
    [sym_active_char] = ACTIONS(211),
    [sym_text] = ACTIONS(213),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym__whitespace] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_math_shift] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(219),
  },
  [51] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(221),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(223),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [anon_sym_makeatletter] = ACTIONS(59),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(225),
  },
  [52] = {
    [sym__common] = STATE(182),
    [sym__text_mode_common] = STATE(182),
    [sym_inline_verbatim] = STATE(182),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(182),
    [sym_text_mode_at_region] = STATE(182),
    [sym_parameter] = STATE(182),
    [sym_text_env] = STATE(182),
    [sym__display_math] = STATE(182),
    [sym_tex_display_math] = STATE(182),
    [sym_latex_display_math] = STATE(182),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(182),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(182),
    [sym_tex_inline_math] = STATE(182),
    [sym_latex_inline_math] = STATE(182),
    [sym_inline_math_env] = STATE(182),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(182),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(182),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(182),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(182),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(182),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(182),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(182),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(182),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(182),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(182),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(182),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(182),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(182),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(182),
    [sym_opt_text_group] = STATE(182),
    [sym_token] = STATE(182),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(182),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_text] = ACTIONS(231),
  },
  [54] = {
    [sym__common] = STATE(90),
    [sym__math_mode_common] = STATE(90),
    [sym__math_mode] = STATE(90),
    [sym_math_mode] = STATE(185),
    [sym_parameter] = STATE(90),
    [sym_math_env] = STATE(90),
    [sym_tag] = STATE(90),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(90),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(90),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(90),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(90),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(90),
    [sym_opt_math_group] = STATE(90),
    [sym_token] = STATE(90),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(90),
    [aux_sym_parameter_repeat1] = STATE(91),
    [sym_implicit_math_shift] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [55] = {
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(89),
    [sym_end_group] = ACTIONS(89),
    [sym_math_shift] = ACTIONS(89),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(89),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(89),
    [sym_active_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [56] = {
    [sym_verb_delim] = ACTIONS(237),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [57] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(187),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [58] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(188),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [59] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(189),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [60] = {
    [sym__common] = STATE(99),
    [sym__math_mode_common] = STATE(99),
    [sym__math_mode] = STATE(99),
    [sym_math_mode] = STATE(190),
    [sym_parameter] = STATE(99),
    [sym_math_env] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(99),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(99),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(99),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(99),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(99),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [61] = {
    [sym_verbatim_end] = STATE(191),
    [sym_verbatim_text] = STATE(192),
    [sym_end_token] = STATE(193),
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(108),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
    [sym__end_of_line] = ACTIONS(107),
  },
  [62] = {
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
    [sym_end] = STATE(194),
    [sym_end_token] = STATE(195),
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
    [aux_sym_text_mode_repeat1] = STATE(196),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(239),
    [sym_text] = ACTIONS(239),
  },
  [63] = {
    [sym_simple_text_group] = STATE(198),
    [sym_opt_text_group] = STATE(199),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [64] = {
    [sym_simple_text_group] = STATE(200),
    [sym_opt_text_group] = STATE(201),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [65] = {
    [sym_text_group] = STATE(202),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [66] = {
    [sym_text_group] = STATE(203),
    [sym_opt_text_group] = STATE(204),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_end_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [68] = {
    [sym_escaped] = STATE(205),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(119),
  },
  [69] = {
    [sym_text_group] = STATE(206),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [70] = {
    [sym_text_group] = STATE(207),
    [sym_opt_text_group] = STATE(208),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [71] = {
    [sym_text_group] = STATE(209),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [72] = {
    [sym_text_group] = STATE(210),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [73] = {
    [sym_text_group] = STATE(211),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [74] = {
    [sym__common] = STATE(155),
    [sym__text_mode_common] = STATE(155),
    [sym_inline_verbatim] = STATE(155),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(155),
    [sym_text_mode_at] = STATE(213),
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
    [sym_makeatother] = STATE(214),
    [sym_makeatother_token] = STATE(215),
    [sym_text_group_at] = STATE(155),
    [sym_opt_text_group_at] = STATE(155),
    [sym_token_at] = STATE(155),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [75] = {
    [sym__common] = STATE(218),
    [sym__text_mode_common] = STATE(218),
    [sym_inline_verbatim] = STATE(218),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(218),
    [sym_text_mode_at_region] = STATE(218),
    [sym_parameter] = STATE(218),
    [sym_text_env] = STATE(218),
    [sym__display_math] = STATE(218),
    [sym_tex_display_math] = STATE(218),
    [sym_latex_display_math] = STATE(218),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(218),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(218),
    [sym_tex_inline_math] = STATE(218),
    [sym_latex_inline_math] = STATE(218),
    [sym_inline_math_env] = STATE(218),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(218),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(218),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(218),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(218),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(218),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(218),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(218),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(218),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(218),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(218),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(218),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(218),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(218),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(218),
    [sym_opt_text_group] = STATE(218),
    [sym_token] = STATE(218),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(217),
    [aux_sym_text_mode_repeat1] = STATE(218),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(247),
    [sym_text] = ACTIONS(247),
  },
  [76] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [77] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(253),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
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
  [79] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(259),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(261),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(263),
  },
  [80] = {
    [sym__common] = STATE(232),
    [sym__math_mode_common] = STATE(232),
    [sym__math_mode] = STATE(232),
    [sym_parameter] = STATE(232),
    [sym_math_env] = STATE(232),
    [sym_tag] = STATE(232),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(232),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(232),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(232),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(232),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(232),
    [sym_opt_math_group] = STATE(232),
    [sym_token] = STATE(232),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(232),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [81] = {
    [sym__common] = STATE(90),
    [sym__math_mode_common] = STATE(90),
    [sym__math_mode] = STATE(90),
    [sym_math_mode] = STATE(233),
    [sym_parameter] = STATE(90),
    [sym_math_env] = STATE(90),
    [sym_tag] = STATE(90),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(90),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(90),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(90),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(90),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(90),
    [sym_opt_math_group] = STATE(90),
    [sym_token] = STATE(90),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(90),
    [aux_sym_parameter_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [82] = {
    [sym_implicit_math_shift] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(273),
  },
  [83] = {
    [sym_math_text_group] = STATE(236),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(275),
  },
  [84] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_math_env] = STATE(240),
    [sym_tag] = STATE(240),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(238),
    [sym_end_token] = STATE(239),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(240),
    [sym_opt_math_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [sym_text] = ACTIONS(279),
  },
  [85] = {
    [sym_simple_text_group] = STATE(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [86] = {
    [sym_text_group] = STATE(242),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(281),
  },
  [87] = {
    [sym_implicit_math_shift] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [88] = {
    [sym_escaped] = STATE(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(119),
  },
  [89] = {
    [sym__common] = STATE(246),
    [sym__math_mode_common] = STATE(246),
    [sym__math_mode] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_math_env] = STATE(246),
    [sym_tag] = STATE(246),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(246),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(246),
    [sym_opt_math_group] = STATE(246),
    [sym_token] = STATE(246),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(245),
    [aux_sym_math_mode_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(285),
    [sym_active_char] = ACTIONS(285),
    [sym_text] = ACTIONS(285),
  },
  [90] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env] = STATE(247),
    [sym_tag] = STATE(247),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(247),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(247),
    [sym_opt_math_group] = STATE(247),
    [sym_token] = STATE(247),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(247),
    [aux_sym_parameter_repeat1] = STATE(91),
    [sym_implicit_math_shift] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [sym_text] = ACTIONS(289),
  },
  [91] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(139),
    [sym_number] = ACTIONS(291),
  },
  [92] = {
    [sym_verb_body] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [93] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [94] = {
    [sym__common] = STATE(251),
    [sym__math_mode_common] = STATE(251),
    [sym__math_mode] = STATE(251),
    [sym_parameter] = STATE(251),
    [sym_math_env] = STATE(251),
    [sym_tag] = STATE(251),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(251),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(251),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(251),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(251),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(251),
    [sym_opt_math_group] = STATE(251),
    [sym_token] = STATE(251),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(251),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(295),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_text] = ACTIONS(297),
  },
  [95] = {
    [sym_end_display_math] = STATE(253),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(299),
  },
  [96] = {
    [sym_math_text_group] = STATE(255),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(301),
  },
  [97] = {
    [sym__common] = STATE(257),
    [sym__math_mode_common] = STATE(257),
    [sym__math_mode] = STATE(257),
    [sym_parameter] = STATE(257),
    [sym_math_env] = STATE(257),
    [sym_tag] = STATE(257),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(257),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(256),
    [sym_end_token] = STATE(111),
    [sym_include] = STATE(257),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(257),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(257),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(257),
    [sym_opt_math_group] = STATE(257),
    [sym_token] = STATE(257),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(257),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(303),
  },
  [98] = {
    [sym__common] = STATE(259),
    [sym__math_mode_common] = STATE(259),
    [sym__math_mode] = STATE(259),
    [sym_parameter] = STATE(259),
    [sym_math_env] = STATE(259),
    [sym_tag] = STATE(259),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(259),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(259),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(259),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(259),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(259),
    [sym_opt_math_group] = STATE(259),
    [sym_token] = STATE(259),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(258),
    [aux_sym_math_mode_repeat1] = STATE(259),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_text] = ACTIONS(305),
  },
  [99] = {
    [sym__common] = STATE(260),
    [sym__math_mode_common] = STATE(260),
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_env] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(260),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(260),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [100] = {
    [sym_end_inline_math] = STATE(262),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(309),
  },
  [101] = {
    [sym_display_math_end] = STATE(263),
    [sym_end_token] = STATE(264),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [102] = {
    [sym_inline_math_end] = STATE(265),
    [sym_end_token] = STATE(266),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [103] = {
    [anon_sym_end] = ACTIONS(311),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_text] = ACTIONS(313),
  },
  [105] = {
    [sym_verbatim_end] = STATE(268),
    [sym_end_token] = STATE(106),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [106] = {
    [sym_verbatim_env_group] = STATE(270),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(315),
  },
  [107] = {
    [aux_sym_verbatim_text_repeat1] = STATE(272),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(319),
  },
  [108] = {
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(273),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(103),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
    [sym__end_of_line] = ACTIONS(323),
  },
  [109] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(325),
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
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_math_shift] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [111] = {
    [sym_simple_text_group] = STATE(274),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [112] = {
    [sym__common] = STATE(276),
    [sym__text_mode_common] = STATE(276),
    [sym_inline_verbatim] = STATE(276),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(276),
    [sym_text_mode_at_region] = STATE(276),
    [sym_parameter] = STATE(276),
    [sym_text_env] = STATE(276),
    [sym__display_math] = STATE(276),
    [sym_tex_display_math] = STATE(276),
    [sym_latex_display_math] = STATE(276),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(276),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(276),
    [sym_tex_inline_math] = STATE(276),
    [sym_latex_inline_math] = STATE(276),
    [sym_inline_math_env] = STATE(276),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(276),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(276),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(275),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(276),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(276),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(276),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(276),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(276),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(276),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(276),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(276),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(276),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(276),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(276),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(276),
    [sym_opt_text_group] = STATE(276),
    [sym_token] = STATE(276),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(276),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(337),
  },
  [114] = {
    [sym_text_group] = STATE(283),
    [sym_opt_text_group] = STATE(284),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(341),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
    [sym_text_group] = STATE(286),
    [sym_opt_text_group] = STATE(287),
    [sym_begin_opt] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(345),
  },
  [117] = {
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_math_shift] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [118] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(349),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_math_shift] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [120] = {
    [sym_simple_text_group] = STATE(289),
    [sym__whitespace] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [121] = {
    [sym__common] = STATE(292),
    [sym__text_mode_common] = STATE(292),
    [sym_inline_verbatim] = STATE(292),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(292),
    [sym_text_mode_at_region] = STATE(292),
    [sym_parameter] = STATE(292),
    [sym_text_env] = STATE(292),
    [sym__display_math] = STATE(292),
    [sym_tex_display_math] = STATE(292),
    [sym_latex_display_math] = STATE(292),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(292),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(292),
    [sym_tex_inline_math] = STATE(292),
    [sym_latex_inline_math] = STATE(292),
    [sym_inline_math_env] = STATE(292),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(292),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(292),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(292),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(292),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(292),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(292),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(292),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(292),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(292),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(292),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(292),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(292),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(292),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(292),
    [sym_opt_text_group] = STATE(292),
    [sym_token] = STATE(292),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(291),
    [aux_sym_text_mode_repeat1] = STATE(292),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(355),
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
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [123] = {
    [sym_simple_text_group] = STATE(294),
    [sym__whitespace] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_math_shift] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_text] = ACTIONS(365),
  },
  [126] = {
    [sym_text_group] = STATE(296),
    [sym__whitespace] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [127] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [128] = {
    [anon_sym_EQ] = ACTIONS(371),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_math_shift] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(375),
    [sym_begin_group] = ACTIONS(375),
    [sym_math_shift] = ACTIONS(375),
    [sym_alignment_tab] = ACTIONS(375),
    [sym_parameter_char] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(375),
    [sym_text] = ACTIONS(375),
  },
  [131] = {
    [sym_text_group] = STATE(300),
    [sym__whitespace] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [135] = {
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
    [anon_sym_makeatother] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(387),
  },
  [136] = {
    [sym__common] = STATE(320),
    [sym__text_mode_common] = STATE(320),
    [sym_inline_verbatim] = STATE(320),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(320),
    [sym_parameter] = STATE(320),
    [sym_text_env_at] = STATE(320),
    [sym__display_math_at] = STATE(320),
    [sym_tex_display_math_at] = STATE(320),
    [sym_latex_display_math_at] = STATE(320),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(320),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(320),
    [sym_tex_inline_math_at] = STATE(320),
    [sym_latex_inline_math_at] = STATE(320),
    [sym_inline_math_env_at] = STATE(320),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(320),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(320),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(320),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(320),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(320),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(320),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(320),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(320),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(320),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(320),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(320),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(320),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(320),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(320),
    [sym_opt_text_group_at] = STATE(320),
    [sym_token_at] = STATE(320),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(320),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(397),
    [sym_text] = ACTIONS(397),
  },
  [137] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_math_mode_at] = STATE(324),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [138] = {
    [sym_makeatother] = STATE(330),
    [sym_makeatother_token] = STATE(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(407),
  },
  [139] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(331),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [140] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(333),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [141] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(334),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [142] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(335),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [143] = {
    [sym__common] = STATE(338),
    [sym__text_mode_common] = STATE(338),
    [sym_inline_verbatim] = STATE(338),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(338),
    [sym_parameter] = STATE(338),
    [sym_text_env_at] = STATE(338),
    [sym__display_math_at] = STATE(338),
    [sym_tex_display_math_at] = STATE(338),
    [sym_latex_display_math_at] = STATE(338),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(338),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(338),
    [sym_tex_inline_math_at] = STATE(338),
    [sym_latex_inline_math_at] = STATE(338),
    [sym_inline_math_env_at] = STATE(338),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(338),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(338),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(337),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(338),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(338),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(338),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(338),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(338),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(338),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(338),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(338),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(338),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(338),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(338),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(338),
    [sym_opt_text_group_at] = STATE(338),
    [sym_token_at] = STATE(338),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(338),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [144] = {
    [sym_display_math_env_group] = STATE(339),
    [sym_inline_math_env_group] = STATE(115),
    [sym_verbatim_env_group] = STATE(116),
    [sym_simple_text_group] = STATE(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(113),
  },
  [145] = {
    [sym_text_group_at] = STATE(340),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [146] = {
    [sym_text_group_at] = STATE(341),
    [sym_opt_text_group_at] = STATE(342),
    [sym_begin_opt] = STATE(343),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [147] = {
    [sym_text_group_at] = STATE(344),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [148] = {
    [sym_text_group_at] = STATE(345),
    [sym_opt_text_group_at] = STATE(346),
    [sym_begin_opt] = STATE(343),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [149] = {
    [sym_text_group_at] = STATE(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [150] = {
    [sym_text_group_at] = STATE(348),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [151] = {
    [sym_text_group_at] = STATE(349),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_math_shift] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_text] = ACTIONS(415),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(417),
    [sym_begin_group] = ACTIONS(417),
    [sym_math_shift] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(417),
    [sym_parameter_char] = ACTIONS(417),
    [sym_superscript] = ACTIONS(417),
    [sym_subscript] = ACTIONS(417),
    [sym_active_char] = ACTIONS(417),
    [sym_text] = ACTIONS(417),
  },
  [154] = {
    [sym__common] = STATE(352),
    [sym__text_mode_common] = STATE(352),
    [sym_inline_verbatim] = STATE(352),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(352),
    [sym_parameter] = STATE(352),
    [sym_text_env_at] = STATE(352),
    [sym__display_math_at] = STATE(352),
    [sym_tex_display_math_at] = STATE(352),
    [sym_latex_display_math_at] = STATE(352),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(352),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(352),
    [sym_tex_inline_math_at] = STATE(352),
    [sym_latex_inline_math_at] = STATE(352),
    [sym_inline_math_env_at] = STATE(352),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(352),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(352),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(352),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(352),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(352),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(352),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(352),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(352),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(352),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(352),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(352),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(352),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(352),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(352),
    [sym_opt_text_group_at] = STATE(352),
    [sym_token_at] = STATE(352),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(351),
    [aux_sym_text_mode_at_repeat1] = STATE(352),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [155] = {
    [sym__common] = STATE(353),
    [sym__text_mode_common] = STATE(353),
    [sym_inline_verbatim] = STATE(353),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(353),
    [sym_parameter] = STATE(353),
    [sym_text_env_at] = STATE(353),
    [sym__display_math_at] = STATE(353),
    [sym_tex_display_math_at] = STATE(353),
    [sym_latex_display_math_at] = STATE(353),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(353),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(353),
    [sym_tex_inline_math_at] = STATE(353),
    [sym_latex_inline_math_at] = STATE(353),
    [sym_inline_math_env_at] = STATE(353),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(353),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(353),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(353),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(353),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(353),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(353),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(353),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(353),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(353),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(353),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(353),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(353),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(353),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(353),
    [sym_opt_text_group_at] = STATE(353),
    [sym_token_at] = STATE(353),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(353),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(429),
    [sym_math_shift] = ACTIONS(429),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(429),
    [sym_superscript] = ACTIONS(429),
    [sym_subscript] = ACTIONS(429),
    [sym_active_char] = ACTIONS(429),
    [sym_text] = ACTIONS(429),
  },
  [158] = {
    [sym__common] = STATE(355),
    [sym__text_mode_common] = STATE(355),
    [sym_inline_verbatim] = STATE(355),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(355),
    [sym_text_mode_at_region] = STATE(355),
    [sym_parameter] = STATE(355),
    [sym_text_env] = STATE(355),
    [sym__display_math] = STATE(355),
    [sym_tex_display_math] = STATE(355),
    [sym_latex_display_math] = STATE(355),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(355),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(355),
    [sym_tex_inline_math] = STATE(355),
    [sym_latex_inline_math] = STATE(355),
    [sym_inline_math_env] = STATE(355),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(355),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(355),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(355),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(355),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(355),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(355),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(355),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(355),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(355),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(355),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(355),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(355),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(355),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(355),
    [sym_opt_text_group] = STATE(355),
    [sym_token] = STATE(355),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(354),
    [aux_sym_text_mode_repeat1] = STATE(355),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
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
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(444),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(447),
    [sym_text] = ACTIONS(447),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(456),
    [sym_math_shift] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(456),
    [sym_parameter_char] = ACTIONS(456),
    [sym_superscript] = ACTIONS(456),
    [sym_subscript] = ACTIONS(456),
    [sym_active_char] = ACTIONS(456),
    [sym_text] = ACTIONS(456),
  },
  [161] = {
    [aux_sym_parameter_repeat1] = STATE(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(458),
    [sym_number] = ACTIONS(461),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(463),
    [sym_begin_group] = ACTIONS(463),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(463),
    [sym_superscript] = ACTIONS(463),
    [sym_subscript] = ACTIONS(463),
    [sym_active_char] = ACTIONS(463),
    [sym_text] = ACTIONS(463),
  },
  [163] = {
    [anon_sym_LBRACK] = ACTIONS(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(465),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [sym_text] = ACTIONS(465),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(467),
  },
  [165] = {
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(469),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(471),
  },
  [167] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(473),
  },
  [168] = {
    [sym__whitespace] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(479),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(477),
  },
  [169] = {
    [sym__whitespace] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(477),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(477),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(481),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_text] = ACTIONS(481),
  },
  [171] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(483),
  },
  [172] = {
    [anon_sym_LBRACK] = ACTIONS(485),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(485),
  },
  [173] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(487),
  },
  [174] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(489),
  },
  [175] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(491),
  },
  [176] = {
    [anon_sym_LBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_math_shift] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(495),
    [sym_alignment_tab] = ACTIONS(495),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(495),
    [sym_subscript] = ACTIONS(495),
    [sym_active_char] = ACTIONS(495),
    [sym_text] = ACTIONS(495),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(157),
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
  [179] = {
    [sym__whitespace] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_end_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(185),
  },
  [180] = {
    [sym__whitespace] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_end_group] = ACTIONS(215),
    [sym_math_shift] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(219),
  },
  [181] = {
    [anon_sym_LBRACK] = ACTIONS(231),
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
  [182] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(501),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [183] = {
    [anon_sym_LBRACK] = ACTIONS(255),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_text] = ACTIONS(255),
  },
  [184] = {
    [sym__common] = STATE(90),
    [sym__math_mode_common] = STATE(90),
    [sym__math_mode] = STATE(90),
    [sym_math_mode] = STATE(361),
    [sym_parameter] = STATE(90),
    [sym_math_env] = STATE(90),
    [sym_tag] = STATE(90),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(90),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(90),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(90),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(90),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(90),
    [sym_opt_math_group] = STATE(90),
    [sym_token] = STATE(90),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(90),
    [aux_sym_parameter_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(81),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [185] = {
    [sym_implicit_math_shift] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(503),
  },
  [186] = {
    [sym_verb_body] = ACTIONS(505),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [187] = {
    [sym_end_display_math] = STATE(365),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(507),
  },
  [188] = {
    [sym_end_inline_math] = STATE(367),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(509),
  },
  [189] = {
    [sym_display_math_end] = STATE(368),
    [sym_end_token] = STATE(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [190] = {
    [sym_inline_math_end] = STATE(370),
    [sym_end_token] = STATE(371),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [191] = {
    [anon_sym_LBRACK] = ACTIONS(313),
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
  [192] = {
    [sym_verbatim_end] = STATE(372),
    [sym_end_token] = STATE(193),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [193] = {
    [sym_verbatim_env_group] = STATE(374),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(511),
  },
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_end_group] = ACTIONS(327),
    [sym_math_shift] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [195] = {
    [sym_simple_text_group] = STATE(375),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [196] = {
    [sym__common] = STATE(276),
    [sym__text_mode_common] = STATE(276),
    [sym_inline_verbatim] = STATE(276),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(276),
    [sym_text_mode_at_region] = STATE(276),
    [sym_parameter] = STATE(276),
    [sym_text_env] = STATE(276),
    [sym__display_math] = STATE(276),
    [sym_tex_display_math] = STATE(276),
    [sym_latex_display_math] = STATE(276),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(276),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(276),
    [sym_tex_inline_math] = STATE(276),
    [sym_latex_inline_math] = STATE(276),
    [sym_inline_math_env] = STATE(276),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(276),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(276),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(376),
    [sym_end_token] = STATE(195),
    [sym_documentclass] = STATE(276),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(276),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(276),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(276),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(276),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(276),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(276),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(276),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(276),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(276),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(276),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(276),
    [sym_opt_text_group] = STATE(276),
    [sym_token] = STATE(276),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(276),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [197] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(513),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_end_group] = ACTIONS(351),
    [sym_math_shift] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_text] = ACTIONS(351),
  },
  [199] = {
    [sym_simple_text_group] = STATE(379),
    [sym__whitespace] = ACTIONS(515),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [200] = {
    [anon_sym_LBRACK] = ACTIONS(359),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [201] = {
    [sym_simple_text_group] = STATE(381),
    [sym__whitespace] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [202] = {
    [anon_sym_LBRACK] = ACTIONS(363),
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
  [203] = {
    [anon_sym_LBRACK] = ACTIONS(365),
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
  [204] = {
    [sym_text_group] = STATE(383),
    [sym__whitespace] = ACTIONS(519),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [205] = {
    [anon_sym_EQ] = ACTIONS(521),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [206] = {
    [anon_sym_LBRACK] = ACTIONS(373),
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
  [207] = {
    [anon_sym_LBRACK] = ACTIONS(375),
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
  [208] = {
    [sym_text_group] = STATE(386),
    [sym__whitespace] = ACTIONS(523),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [209] = {
    [anon_sym_LBRACK] = ACTIONS(379),
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
  [210] = {
    [anon_sym_LBRACK] = ACTIONS(381),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_end_group] = ACTIONS(383),
    [sym_math_shift] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [212] = {
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
    [anon_sym_makeatother] = ACTIONS(525),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(387),
  },
  [213] = {
    [sym_makeatother] = STATE(389),
    [sym_makeatother_token] = STATE(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(527),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(415),
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
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(417),
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
  [216] = {
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [217] = {
    [anon_sym_LBRACK] = ACTIONS(429),
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
  [218] = {
    [sym__common] = STATE(355),
    [sym__text_mode_common] = STATE(355),
    [sym_inline_verbatim] = STATE(355),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(355),
    [sym_text_mode_at_region] = STATE(355),
    [sym_parameter] = STATE(355),
    [sym_text_env] = STATE(355),
    [sym__display_math] = STATE(355),
    [sym_tex_display_math] = STATE(355),
    [sym_latex_display_math] = STATE(355),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(355),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(355),
    [sym_tex_inline_math] = STATE(355),
    [sym_latex_inline_math] = STATE(355),
    [sym_inline_math_env] = STATE(355),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(355),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(355),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(355),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(355),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(355),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(355),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(355),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(355),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(355),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(355),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(355),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(355),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(355),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(355),
    [sym_opt_text_group] = STATE(355),
    [sym_token] = STATE(355),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(390),
    [aux_sym_text_mode_repeat1] = STATE(355),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(529),
    [sym_begin_group] = ACTIONS(529),
    [sym_math_shift] = ACTIONS(529),
    [sym_alignment_tab] = ACTIONS(529),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(529),
    [sym_subscript] = ACTIONS(529),
    [sym_active_char] = ACTIONS(529),
    [sym_text] = ACTIONS(529),
  },
  [220] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(531),
    [sym_begin_group] = ACTIONS(534),
    [sym_end_group] = ACTIONS(433),
    [sym_math_shift] = ACTIONS(537),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(543),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(546),
    [sym_active_char] = ACTIONS(540),
    [sym_text] = ACTIONS(540),
  },
  [221] = {
    [anon_sym_LBRACK] = ACTIONS(456),
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
  [222] = {
    [sym__whitespace] = ACTIONS(549),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(551),
  },
  [223] = {
    [sym_implicit_math_shift] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_text] = ACTIONS(157),
  },
  [224] = {
    [sym_implicit_math_shift] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(185),
  },
  [225] = {
    [sym_implicit_math_shift] = ACTIONS(215),
    [sym__whitespace] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_math_shift] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(219),
  },
  [226] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(221),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(223),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(225),
  },
  [227] = {
    [sym__common] = STATE(395),
    [sym__math_mode_common] = STATE(395),
    [sym__math_mode] = STATE(395),
    [sym_parameter] = STATE(395),
    [sym_math_env] = STATE(395),
    [sym_tag] = STATE(395),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(395),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(395),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(395),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(395),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(395),
    [sym_opt_math_group] = STATE(395),
    [sym_token] = STATE(395),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(395),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(557),
    [sym_alignment_tab] = ACTIONS(559),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(559),
    [sym_subscript] = ACTIONS(559),
    [sym_active_char] = ACTIONS(559),
    [sym_text] = ACTIONS(559),
  },
  [228] = {
    [sym_implicit_math_shift] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(561),
    [sym_begin_group] = ACTIONS(561),
    [sym_math_shift] = ACTIONS(561),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(561),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_text] = ACTIONS(561),
  },
  [229] = {
    [sym_math_text_group] = STATE(397),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(563),
  },
  [230] = {
    [sym__common] = STATE(399),
    [sym__math_mode_common] = STATE(399),
    [sym__math_mode] = STATE(399),
    [sym_parameter] = STATE(399),
    [sym_math_env] = STATE(399),
    [sym_tag] = STATE(399),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(399),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(398),
    [sym_end_token] = STATE(195),
    [sym_include] = STATE(399),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(399),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(399),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(399),
    [sym_opt_math_group] = STATE(399),
    [sym_token] = STATE(399),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(399),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(565),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(565),
    [sym_subscript] = ACTIONS(565),
    [sym_active_char] = ACTIONS(565),
    [sym_text] = ACTIONS(565),
  },
  [231] = {
    [sym__common] = STATE(401),
    [sym__math_mode_common] = STATE(401),
    [sym__math_mode] = STATE(401),
    [sym_parameter] = STATE(401),
    [sym_math_env] = STATE(401),
    [sym_tag] = STATE(401),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(401),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(401),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(401),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(401),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(401),
    [sym_opt_math_group] = STATE(401),
    [sym_token] = STATE(401),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(400),
    [aux_sym_math_mode_repeat1] = STATE(401),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(567),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(567),
    [sym_subscript] = ACTIONS(567),
    [sym_active_char] = ACTIONS(567),
    [sym_text] = ACTIONS(567),
  },
  [232] = {
    [sym__common] = STATE(403),
    [sym__math_mode_common] = STATE(403),
    [sym__math_mode] = STATE(403),
    [sym_parameter] = STATE(403),
    [sym_math_env] = STATE(403),
    [sym_tag] = STATE(403),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(403),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(403),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(403),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(403),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(403),
    [sym_opt_math_group] = STATE(403),
    [sym_token] = STATE(403),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(403),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(569),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [233] = {
    [sym_implicit_math_shift] = ACTIONS(573),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(575),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(577),
    [sym_begin_group] = ACTIONS(577),
    [sym_math_shift] = ACTIONS(577),
    [sym_alignment_tab] = ACTIONS(577),
    [sym_parameter_char] = ACTIONS(577),
    [sym_superscript] = ACTIONS(577),
    [sym_subscript] = ACTIONS(577),
    [sym_active_char] = ACTIONS(577),
    [sym_text] = ACTIONS(577),
  },
  [235] = {
    [sym__common] = STATE(408),
    [sym__text_mode_common] = STATE(408),
    [sym_inline_verbatim] = STATE(408),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(408),
    [sym_text_mode] = STATE(407),
    [sym_text_mode_at_region] = STATE(408),
    [sym_parameter] = STATE(408),
    [sym_text_env] = STATE(408),
    [sym__display_math] = STATE(408),
    [sym_tex_display_math] = STATE(408),
    [sym_latex_display_math] = STATE(408),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(408),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(408),
    [sym_tex_inline_math] = STATE(408),
    [sym_latex_inline_math] = STATE(408),
    [sym_inline_math_env] = STATE(408),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(408),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(408),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(408),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(408),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(408),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(408),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(408),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(408),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(408),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(408),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(408),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(408),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(408),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(408),
    [sym_opt_text_group] = STATE(408),
    [sym_token] = STATE(408),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(408),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(579),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [236] = {
    [sym_implicit_math_shift] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(583),
    [sym_math_shift] = ACTIONS(583),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(583),
    [sym_superscript] = ACTIONS(583),
    [sym_subscript] = ACTIONS(583),
    [sym_active_char] = ACTIONS(583),
    [sym_text] = ACTIONS(583),
  },
  [237] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(325),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [238] = {
    [sym_implicit_math_shift] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(585),
    [sym_math_shift] = ACTIONS(585),
    [sym_alignment_tab] = ACTIONS(585),
    [sym_parameter_char] = ACTIONS(585),
    [sym_superscript] = ACTIONS(585),
    [sym_subscript] = ACTIONS(585),
    [sym_active_char] = ACTIONS(585),
    [sym_text] = ACTIONS(585),
  },
  [239] = {
    [sym_simple_text_group] = STATE(410),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(587),
  },
  [240] = {
    [sym__common] = STATE(260),
    [sym__math_mode_common] = STATE(260),
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_env] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(411),
    [sym_end_token] = STATE(239),
    [sym_include] = STATE(260),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(260),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [241] = {
    [sym__common] = STATE(413),
    [sym__text_mode_common] = STATE(413),
    [sym_inline_verbatim] = STATE(413),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(413),
    [sym_text_mode_at_region] = STATE(413),
    [sym_parameter] = STATE(413),
    [sym_text_env] = STATE(413),
    [sym__display_math] = STATE(413),
    [sym_tex_display_math] = STATE(413),
    [sym_latex_display_math] = STATE(413),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(413),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(413),
    [sym_tex_inline_math] = STATE(413),
    [sym_latex_inline_math] = STATE(413),
    [sym_inline_math_env] = STATE(413),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(413),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(413),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(413),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(413),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(413),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(413),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(413),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(413),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(413),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(413),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(413),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(413),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(413),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(413),
    [sym_opt_text_group] = STATE(413),
    [sym_token] = STATE(413),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(413),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(589),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(591),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(591),
    [sym_text] = ACTIONS(591),
  },
  [242] = {
    [sym_implicit_math_shift] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_text] = ACTIONS(363),
  },
  [243] = {
    [anon_sym_EQ] = ACTIONS(593),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [244] = {
    [sym_implicit_math_shift] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [245] = {
    [sym_implicit_math_shift] = ACTIONS(595),
    [anon_sym_LBRACK] = ACTIONS(595),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(595),
    [sym_begin_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(595),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(595),
    [sym_subscript] = ACTIONS(595),
    [sym_active_char] = ACTIONS(595),
    [sym_text] = ACTIONS(595),
  },
  [246] = {
    [sym__common] = STATE(416),
    [sym__math_mode_common] = STATE(416),
    [sym__math_mode] = STATE(416),
    [sym_parameter] = STATE(416),
    [sym_math_env] = STATE(416),
    [sym_tag] = STATE(416),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(416),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(416),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(416),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(416),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(416),
    [sym_opt_math_group] = STATE(416),
    [sym_token] = STATE(416),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(415),
    [aux_sym_math_mode_repeat1] = STATE(416),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(597),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(597),
    [sym_subscript] = ACTIONS(597),
    [sym_active_char] = ACTIONS(597),
    [sym_text] = ACTIONS(597),
  },
  [247] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env] = STATE(247),
    [sym_tag] = STATE(247),
    [sym_tag_token] = STATE(83),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(84),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(247),
    [sym_include_token] = STATE(86),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(87),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(88),
    [sym_math_group] = STATE(247),
    [sym_opt_math_group] = STATE(247),
    [sym_token] = STATE(247),
    [sym_begin_opt] = STATE(89),
    [aux_sym_math_mode_repeat1] = STATE(247),
    [aux_sym_parameter_repeat1] = STATE(91),
    [sym_implicit_math_shift] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(601),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(604),
    [sym_begin_group] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(599),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(613),
    [sym_superscript] = ACTIONS(610),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [sym_text] = ACTIONS(610),
  },
  [248] = {
    [sym_implicit_math_shift] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(456),
    [sym_math_shift] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(456),
    [sym_parameter_char] = ACTIONS(456),
    [sym_superscript] = ACTIONS(456),
    [sym_subscript] = ACTIONS(456),
    [sym_active_char] = ACTIONS(456),
    [sym_text] = ACTIONS(456),
  },
  [249] = {
    [sym_verb_delim] = ACTIONS(616),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [250] = {
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
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
  [251] = {
    [sym__common] = STATE(403),
    [sym__math_mode_common] = STATE(403),
    [sym__math_mode] = STATE(403),
    [sym_parameter] = STATE(403),
    [sym_math_env] = STATE(403),
    [sym_tag] = STATE(403),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(403),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(403),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(403),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(403),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(403),
    [sym_opt_math_group] = STATE(403),
    [sym_token] = STATE(403),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(403),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(618),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [252] = {
    [anon_sym_RBRACK] = ACTIONS(620),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_math_shift] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(622),
    [sym_superscript] = ACTIONS(622),
    [sym_subscript] = ACTIONS(622),
    [sym_active_char] = ACTIONS(622),
    [sym_text] = ACTIONS(622),
  },
  [254] = {
    [sym__common] = STATE(408),
    [sym__text_mode_common] = STATE(408),
    [sym_inline_verbatim] = STATE(408),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(408),
    [sym_text_mode] = STATE(421),
    [sym_text_mode_at_region] = STATE(408),
    [sym_parameter] = STATE(408),
    [sym_text_env] = STATE(408),
    [sym__display_math] = STATE(408),
    [sym_tex_display_math] = STATE(408),
    [sym_latex_display_math] = STATE(408),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(408),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(408),
    [sym_tex_inline_math] = STATE(408),
    [sym_latex_inline_math] = STATE(408),
    [sym_inline_math_env] = STATE(408),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(408),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(408),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(408),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(408),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(408),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(408),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(408),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(408),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(408),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(408),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(408),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(408),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(408),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(408),
    [sym_opt_text_group] = STATE(408),
    [sym_token] = STATE(408),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(408),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(624),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(583),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(583),
    [sym_superscript] = ACTIONS(583),
    [sym_subscript] = ACTIONS(583),
    [sym_active_char] = ACTIONS(583),
    [sym_text] = ACTIONS(583),
  },
  [256] = {
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(585),
    [sym_alignment_tab] = ACTIONS(585),
    [sym_parameter_char] = ACTIONS(585),
    [sym_superscript] = ACTIONS(585),
    [sym_subscript] = ACTIONS(585),
    [sym_active_char] = ACTIONS(585),
    [sym_text] = ACTIONS(585),
  },
  [257] = {
    [sym__common] = STATE(260),
    [sym__math_mode_common] = STATE(260),
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_env] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(422),
    [sym_end_token] = STATE(111),
    [sym_include] = STATE(260),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(260),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(595),
    [sym_begin_group] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(595),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(595),
    [sym_subscript] = ACTIONS(595),
    [sym_active_char] = ACTIONS(595),
    [sym_text] = ACTIONS(595),
  },
  [259] = {
    [sym__common] = STATE(416),
    [sym__math_mode_common] = STATE(416),
    [sym__math_mode] = STATE(416),
    [sym_parameter] = STATE(416),
    [sym_math_env] = STATE(416),
    [sym_tag] = STATE(416),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(416),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(416),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(416),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(416),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(416),
    [sym_opt_math_group] = STATE(416),
    [sym_token] = STATE(416),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(423),
    [aux_sym_math_mode_repeat1] = STATE(416),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(597),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(597),
    [sym_subscript] = ACTIONS(597),
    [sym_active_char] = ACTIONS(597),
    [sym_text] = ACTIONS(597),
  },
  [260] = {
    [sym__common] = STATE(260),
    [sym__math_mode_common] = STATE(260),
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_env] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(260),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(260),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(601),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(626),
    [sym_begin_group] = ACTIONS(629),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_text] = ACTIONS(632),
  },
  [261] = {
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(640),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(640),
    [sym_begin_group] = ACTIONS(640),
    [sym_math_shift] = ACTIONS(640),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(640),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [sym_text] = ACTIONS(640),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(642),
    [sym_begin_group] = ACTIONS(642),
    [sym_math_shift] = ACTIONS(642),
    [sym_alignment_tab] = ACTIONS(642),
    [sym_parameter_char] = ACTIONS(642),
    [sym_superscript] = ACTIONS(642),
    [sym_subscript] = ACTIONS(642),
    [sym_active_char] = ACTIONS(642),
    [sym_text] = ACTIONS(642),
  },
  [264] = {
    [sym_display_math_env_group] = STATE(426),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(644),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_math_shift] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_active_char] = ACTIONS(646),
    [sym_text] = ACTIONS(646),
  },
  [266] = {
    [sym_inline_math_env_group] = STATE(428),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(648),
  },
  [267] = {
    [sym__whitespace] = ACTIONS(650),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(652),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(654),
    [sym_begin_group] = ACTIONS(654),
    [sym_math_shift] = ACTIONS(654),
    [sym_alignment_tab] = ACTIONS(654),
    [sym_parameter_char] = ACTIONS(654),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(654),
    [sym_text] = ACTIONS(654),
  },
  [269] = {
    [sym_verbatim_env_name] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_RBRACK] = ACTIONS(658),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(658),
    [sym_begin_group] = ACTIONS(658),
    [sym_math_shift] = ACTIONS(658),
    [sym_alignment_tab] = ACTIONS(658),
    [sym_parameter_char] = ACTIONS(658),
    [sym_superscript] = ACTIONS(658),
    [sym_subscript] = ACTIONS(658),
    [sym_active_char] = ACTIONS(658),
    [sym_text] = ACTIONS(658),
  },
  [271] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(660),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(662),
    [sym__end_of_line] = ACTIONS(662),
  },
  [272] = {
    [aux_sym_verbatim_text_repeat1] = STATE(272),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(664),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(667),
  },
  [273] = {
    [aux_sym_verbatim_text_repeat1] = STATE(107),
    [aux_sym_verbatim_text_repeat2] = STATE(273),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(669),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(662),
    [sym__end_of_line] = ACTIONS(672),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_math_shift] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_text] = ACTIONS(675),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_math_shift] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(677),
  },
  [276] = {
    [sym__common] = STATE(276),
    [sym__text_mode_common] = STATE(276),
    [sym_inline_verbatim] = STATE(276),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(276),
    [sym_text_mode_at_region] = STATE(276),
    [sym_parameter] = STATE(276),
    [sym_text_env] = STATE(276),
    [sym__display_math] = STATE(276),
    [sym_tex_display_math] = STATE(276),
    [sym_latex_display_math] = STATE(276),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(276),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(276),
    [sym_tex_inline_math] = STATE(276),
    [sym_latex_inline_math] = STATE(276),
    [sym_inline_math_env] = STATE(276),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(276),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(276),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(276),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(276),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(276),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(276),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(276),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(276),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(276),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(276),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(276),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(276),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(276),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(276),
    [sym_opt_text_group] = STATE(276),
    [sym_token] = STATE(276),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(276),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(444),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(679),
    [sym_text] = ACTIONS(679),
  },
  [277] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(682),
  },
  [278] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(684),
  },
  [279] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(686),
  },
  [280] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(688),
  },
  [281] = {
    [sym__common] = STATE(436),
    [sym__text_mode_common] = STATE(436),
    [sym_inline_verbatim] = STATE(436),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(436),
    [sym_text_mode_at_region] = STATE(436),
    [sym_parameter] = STATE(436),
    [sym_text_env] = STATE(436),
    [sym__display_math] = STATE(436),
    [sym_tex_display_math] = STATE(436),
    [sym_latex_display_math] = STATE(436),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(436),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(436),
    [sym_tex_inline_math] = STATE(436),
    [sym_latex_inline_math] = STATE(436),
    [sym_inline_math_env] = STATE(436),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(436),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(436),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(436),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(436),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(436),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(436),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(436),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(436),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(436),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(436),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(436),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(436),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(436),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(436),
    [sym_opt_text_group] = STATE(436),
    [sym_token] = STATE(436),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(436),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(690),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(692),
    [sym_text] = ACTIONS(692),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(694),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(694),
    [sym_begin_group] = ACTIONS(694),
    [sym_alignment_tab] = ACTIONS(694),
    [sym_parameter_char] = ACTIONS(694),
    [sym_superscript] = ACTIONS(694),
    [sym_subscript] = ACTIONS(694),
    [sym_active_char] = ACTIONS(694),
    [sym_text] = ACTIONS(694),
  },
  [283] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(696),
  },
  [284] = {
    [sym_text_group] = STATE(439),
    [sym__whitespace] = ACTIONS(698),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(696),
  },
  [285] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(700),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(702),
    [sym__end_of_line] = ACTIONS(702),
  },
  [286] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(704),
  },
  [287] = {
    [sym_text_group] = STATE(442),
    [sym__whitespace] = ACTIONS(706),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(704),
  },
  [288] = {
    [sym_simple_text_group] = STATE(443),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(708),
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_RBRACK] = ACTIONS(708),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(708),
    [sym_begin_group] = ACTIONS(708),
    [sym_math_shift] = ACTIONS(708),
    [sym_alignment_tab] = ACTIONS(708),
    [sym_parameter_char] = ACTIONS(708),
    [sym_superscript] = ACTIONS(708),
    [sym_subscript] = ACTIONS(708),
    [sym_active_char] = ACTIONS(708),
    [sym_text] = ACTIONS(708),
  },
  [290] = {
    [sym__whitespace] = ACTIONS(427),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(427),
    [sym__end_of_line] = ACTIONS(427),
  },
  [291] = {
    [sym__whitespace] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(429),
    [sym__end_of_line] = ACTIONS(429),
  },
  [292] = {
    [sym__common] = STATE(355),
    [sym__text_mode_common] = STATE(355),
    [sym_inline_verbatim] = STATE(355),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(355),
    [sym_text_mode_at_region] = STATE(355),
    [sym_parameter] = STATE(355),
    [sym_text_env] = STATE(355),
    [sym__display_math] = STATE(355),
    [sym_tex_display_math] = STATE(355),
    [sym_latex_display_math] = STATE(355),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(355),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(355),
    [sym_tex_inline_math] = STATE(355),
    [sym_latex_inline_math] = STATE(355),
    [sym_inline_math_env] = STATE(355),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(355),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(355),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(355),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(355),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(355),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(355),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(355),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(355),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(355),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(355),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(355),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(355),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(355),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(355),
    [sym_opt_text_group] = STATE(355),
    [sym_token] = STATE(355),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(444),
    [aux_sym_text_mode_repeat1] = STATE(355),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(431),
    [sym_text] = ACTIONS(431),
  },
  [293] = {
    [sym_simple_text_group] = STATE(445),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(115),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [anon_sym_RBRACK] = ACTIONS(710),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(710),
    [sym_begin_group] = ACTIONS(710),
    [sym_math_shift] = ACTIONS(710),
    [sym_alignment_tab] = ACTIONS(710),
    [sym_parameter_char] = ACTIONS(710),
    [sym_superscript] = ACTIONS(710),
    [sym_subscript] = ACTIONS(710),
    [sym_active_char] = ACTIONS(710),
    [sym_text] = ACTIONS(710),
  },
  [295] = {
    [sym_text_group] = STATE(446),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_math_shift] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_active_char] = ACTIONS(712),
    [sym_text] = ACTIONS(712),
  },
  [297] = {
    [anon_sym_EQ] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [298] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(714),
  },
  [299] = {
    [sym_text_group] = STATE(448),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_RBRACK] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_math_shift] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_text] = ACTIONS(716),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [sym__whitespace] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(718),
    [sym_begin_group] = ACTIONS(718),
    [sym_math_shift] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(718),
    [sym_parameter_char] = ACTIONS(718),
    [sym_superscript] = ACTIONS(718),
    [sym_subscript] = ACTIONS(718),
    [sym_active_char] = ACTIONS(718),
    [sym_text] = ACTIONS(722),
  },
  [302] = {
    [sym__whitespace] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(726),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(726),
    [sym_begin_group] = ACTIONS(726),
    [sym_math_shift] = ACTIONS(726),
    [sym_alignment_tab] = ACTIONS(726),
    [sym_parameter_char] = ACTIONS(726),
    [sym_superscript] = ACTIONS(726),
    [sym_subscript] = ACTIONS(726),
    [sym_active_char] = ACTIONS(726),
    [sym_text] = ACTIONS(728),
  },
  [303] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(221),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(223),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_emph] = ACTIONS(49),
    [anon_sym_footnote] = ACTIONS(51),
    [anon_sym_textbf] = ACTIONS(53),
    [anon_sym_textit] = ACTIONS(55),
    [anon_sym_texttt] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(730),
  },
  [304] = {
    [sym__common] = STATE(453),
    [sym__text_mode_common] = STATE(453),
    [sym_inline_verbatim] = STATE(453),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(453),
    [sym_parameter] = STATE(453),
    [sym_text_env_at] = STATE(453),
    [sym__display_math_at] = STATE(453),
    [sym_tex_display_math_at] = STATE(453),
    [sym_latex_display_math_at] = STATE(453),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(453),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(453),
    [sym_tex_inline_math_at] = STATE(453),
    [sym_latex_inline_math_at] = STATE(453),
    [sym_inline_math_env_at] = STATE(453),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(453),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(453),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(453),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(453),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(453),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(453),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(453),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(453),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(453),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(453),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(453),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(453),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(453),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(453),
    [sym_opt_text_group_at] = STATE(453),
    [sym_token_at] = STATE(453),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(453),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(732),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(734),
    [sym_text] = ACTIONS(734),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_math_shift] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_active_char] = ACTIONS(736),
    [sym_text] = ACTIONS(736),
  },
  [306] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_math_mode_at] = STATE(455),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(738),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [307] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(456),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [308] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(457),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [309] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(458),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [310] = {
    [sym__common] = STATE(332),
    [sym__math_mode_common] = STATE(332),
    [sym__math_mode_at] = STATE(332),
    [sym_math_mode_at] = STATE(459),
    [sym_parameter] = STATE(332),
    [sym_math_env_at] = STATE(332),
    [sym_tag_at] = STATE(332),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(332),
    [sym_opt_math_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [311] = {
    [sym__common] = STATE(461),
    [sym__text_mode_common] = STATE(461),
    [sym_inline_verbatim] = STATE(461),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(461),
    [sym_parameter] = STATE(461),
    [sym_text_env_at] = STATE(461),
    [sym__display_math_at] = STATE(461),
    [sym_tex_display_math_at] = STATE(461),
    [sym_latex_display_math_at] = STATE(461),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(461),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(461),
    [sym_tex_inline_math_at] = STATE(461),
    [sym_latex_inline_math_at] = STATE(461),
    [sym_inline_math_env_at] = STATE(461),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(461),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(461),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(460),
    [sym_end_token] = STATE(195),
    [sym_documentclass] = STATE(461),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(461),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(461),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(461),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(461),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(461),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(461),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(461),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(461),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(461),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(461),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(461),
    [sym_opt_text_group_at] = STATE(461),
    [sym_token_at] = STATE(461),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(461),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(740),
    [sym_text] = ACTIONS(740),
  },
  [312] = {
    [sym_text_group_at] = STATE(462),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [313] = {
    [sym_text_group_at] = STATE(463),
    [sym_opt_text_group_at] = STATE(464),
    [sym_begin_opt] = STATE(343),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [314] = {
    [sym_text_group_at] = STATE(465),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [315] = {
    [sym_text_group_at] = STATE(466),
    [sym_opt_text_group_at] = STATE(467),
    [sym_begin_opt] = STATE(343),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [316] = {
    [sym_text_group_at] = STATE(468),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [317] = {
    [sym_text_group_at] = STATE(469),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [318] = {
    [sym_text_group_at] = STATE(470),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [319] = {
    [sym__common] = STATE(472),
    [sym__text_mode_common] = STATE(472),
    [sym_inline_verbatim] = STATE(472),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(472),
    [sym_parameter] = STATE(472),
    [sym_text_env_at] = STATE(472),
    [sym__display_math_at] = STATE(472),
    [sym_tex_display_math_at] = STATE(472),
    [sym_latex_display_math_at] = STATE(472),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(472),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(472),
    [sym_tex_inline_math_at] = STATE(472),
    [sym_latex_inline_math_at] = STATE(472),
    [sym_inline_math_env_at] = STATE(472),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(472),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(472),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(472),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(472),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(472),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(472),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(472),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(472),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(472),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(472),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(472),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(472),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(472),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(472),
    [sym_opt_text_group_at] = STATE(472),
    [sym_token_at] = STATE(472),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(471),
    [aux_sym_text_mode_at_repeat1] = STATE(472),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(742),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(742),
    [sym_text] = ACTIONS(742),
  },
  [320] = {
    [sym__common] = STATE(474),
    [sym__text_mode_common] = STATE(474),
    [sym_inline_verbatim] = STATE(474),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(474),
    [sym_parameter] = STATE(474),
    [sym_text_env_at] = STATE(474),
    [sym__display_math_at] = STATE(474),
    [sym_tex_display_math_at] = STATE(474),
    [sym_latex_display_math_at] = STATE(474),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(474),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(474),
    [sym_tex_inline_math_at] = STATE(474),
    [sym_latex_inline_math_at] = STATE(474),
    [sym_inline_math_env_at] = STATE(474),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(474),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(474),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(474),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(474),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(474),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(474),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(474),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(474),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(474),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(474),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(474),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(474),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(474),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(474),
    [sym_opt_text_group_at] = STATE(474),
    [sym_token_at] = STATE(474),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(474),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(744),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [321] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(387),
  },
  [322] = {
    [sym__common] = STATE(481),
    [sym__math_mode_common] = STATE(481),
    [sym__math_mode_at] = STATE(481),
    [sym_parameter] = STATE(481),
    [sym_math_env_at] = STATE(481),
    [sym_tag_at] = STATE(481),
    [sym_tag_token] = STATE(478),
    [sym_escaped] = STATE(481),
    [sym_begin] = STATE(479),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(481),
    [sym_include_token] = STATE(312),
    [sym_storage] = STATE(481),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(481),
    [sym_catcode_token] = STATE(68),
    [sym_math_group_at] = STATE(481),
    [sym_opt_math_group_at] = STATE(481),
    [sym_token_at] = STATE(481),
    [sym_begin_opt] = STATE(480),
    [aux_sym_math_mode_at_repeat1] = STATE(481),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(752),
    [sym_alignment_tab] = ACTIONS(754),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(754),
    [sym_subscript] = ACTIONS(754),
    [sym_active_char] = ACTIONS(754),
    [sym_text] = ACTIONS(754),
  },
  [323] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_math_mode_at] = STATE(482),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [324] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(756),
  },
  [325] = {
    [sym_math_text_group_at] = STATE(485),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(758),
  },
  [326] = {
    [sym__common] = STATE(488),
    [sym__math_mode_common] = STATE(488),
    [sym__math_mode_at] = STATE(488),
    [sym_parameter] = STATE(488),
    [sym_math_env_at] = STATE(488),
    [sym_tag_at] = STATE(488),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(488),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(487),
    [sym_end_token] = STATE(111),
    [sym_include_at] = STATE(488),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(488),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(488),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(488),
    [sym_opt_math_group_at] = STATE(488),
    [sym_token_at] = STATE(488),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(488),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_active_char] = ACTIONS(762),
    [sym_text] = ACTIONS(762),
  },
  [327] = {
    [sym__common] = STATE(490),
    [sym__math_mode_common] = STATE(490),
    [sym__math_mode_at] = STATE(490),
    [sym_parameter] = STATE(490),
    [sym_math_env_at] = STATE(490),
    [sym_tag_at] = STATE(490),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(490),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(490),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(490),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(490),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(490),
    [sym_opt_math_group_at] = STATE(490),
    [sym_token_at] = STATE(490),
    [sym_begin_opt] = STATE(327),
    [sym_end_opt] = STATE(489),
    [aux_sym_math_mode_at_repeat1] = STATE(490),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(764),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(764),
    [sym_subscript] = ACTIONS(764),
    [sym_active_char] = ACTIONS(764),
    [sym_text] = ACTIONS(764),
  },
  [328] = {
    [sym__common] = STATE(491),
    [sym__math_mode_common] = STATE(491),
    [sym__math_mode_at] = STATE(491),
    [sym_parameter] = STATE(491),
    [sym_math_env_at] = STATE(491),
    [sym_tag_at] = STATE(491),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(491),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(491),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(491),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(491),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(491),
    [sym_opt_math_group_at] = STATE(491),
    [sym_token_at] = STATE(491),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(491),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(766),
    [sym_alignment_tab] = ACTIONS(768),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(768),
    [sym_subscript] = ACTIONS(768),
    [sym_active_char] = ACTIONS(768),
    [sym_text] = ACTIONS(768),
  },
  [329] = {
    [anon_sym_makeatother] = ACTIONS(770),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(772),
    [anon_sym_LBRACK] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(772),
    [sym_math_shift] = ACTIONS(772),
    [sym_alignment_tab] = ACTIONS(772),
    [sym_parameter_char] = ACTIONS(772),
    [sym_superscript] = ACTIONS(772),
    [sym_subscript] = ACTIONS(772),
    [sym_active_char] = ACTIONS(772),
    [sym_text] = ACTIONS(772),
  },
  [331] = {
    [sym_end_display_math] = STATE(492),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(299),
  },
  [332] = {
    [sym__common] = STATE(493),
    [sym__math_mode_common] = STATE(493),
    [sym__math_mode_at] = STATE(493),
    [sym_parameter] = STATE(493),
    [sym_math_env_at] = STATE(493),
    [sym_tag_at] = STATE(493),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(493),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(493),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(493),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(493),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(493),
    [sym_opt_math_group_at] = STATE(493),
    [sym_token_at] = STATE(493),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(493),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(766),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [333] = {
    [sym_end_inline_math] = STATE(494),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(309),
  },
  [334] = {
    [sym_display_math_end] = STATE(495),
    [sym_end_token] = STATE(264),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [335] = {
    [sym_inline_math_end] = STATE(496),
    [sym_end_token] = STATE(266),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [336] = {
    [aux_sym_SLASHverb_BSLASH_STAR_QMARK_SLASH] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(325),
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
    [sym__name_at] = ACTIONS(387),
  },
  [337] = {
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_RBRACK] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(776),
    [sym_begin_group] = ACTIONS(776),
    [sym_math_shift] = ACTIONS(776),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(776),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [338] = {
    [sym__common] = STATE(353),
    [sym__text_mode_common] = STATE(353),
    [sym_inline_verbatim] = STATE(353),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(353),
    [sym_parameter] = STATE(353),
    [sym_text_env_at] = STATE(353),
    [sym__display_math_at] = STATE(353),
    [sym_tex_display_math_at] = STATE(353),
    [sym_latex_display_math_at] = STATE(353),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(353),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(353),
    [sym_tex_inline_math_at] = STATE(353),
    [sym_latex_inline_math_at] = STATE(353),
    [sym_inline_math_env_at] = STATE(353),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(353),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(353),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(497),
    [sym_end_token] = STATE(111),
    [sym_documentclass] = STATE(353),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(353),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(353),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(353),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(353),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(353),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(353),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(353),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(353),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(353),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(353),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(353),
    [sym_opt_text_group_at] = STATE(353),
    [sym_token_at] = STATE(353),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(353),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [339] = {
    [sym_text_group_at] = STATE(500),
    [sym_opt_text_group_at] = STATE(501),
    [sym_begin_opt] = STATE(343),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(778),
    [sym__end_of_line] = ACTIONS(780),
  },
  [340] = {
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(782),
    [sym_begin_group] = ACTIONS(782),
    [sym_math_shift] = ACTIONS(782),
    [sym_alignment_tab] = ACTIONS(782),
    [sym_parameter_char] = ACTIONS(782),
    [sym_superscript] = ACTIONS(782),
    [sym_subscript] = ACTIONS(782),
    [sym_active_char] = ACTIONS(782),
    [sym_text] = ACTIONS(782),
  },
  [341] = {
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [342] = {
    [sym_text_group_at] = STATE(503),
    [sym__whitespace] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [343] = {
    [sym__common] = STATE(505),
    [sym__text_mode_common] = STATE(505),
    [sym_inline_verbatim] = STATE(505),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(505),
    [sym_parameter] = STATE(505),
    [sym_text_env_at] = STATE(505),
    [sym__display_math_at] = STATE(505),
    [sym_tex_display_math_at] = STATE(505),
    [sym_latex_display_math_at] = STATE(505),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(505),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(505),
    [sym_tex_inline_math_at] = STATE(505),
    [sym_latex_inline_math_at] = STATE(505),
    [sym_inline_math_env_at] = STATE(505),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(505),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(505),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(505),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(505),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(505),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(505),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(505),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(505),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(505),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(505),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(505),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(505),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(505),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(505),
    [sym_opt_text_group_at] = STATE(505),
    [sym_token_at] = STATE(505),
    [sym_begin_opt] = STATE(154),
    [sym_end_opt] = STATE(504),
    [aux_sym_text_mode_at_repeat1] = STATE(505),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [344] = {
    [anon_sym_LBRACK] = ACTIONS(790),
    [anon_sym_RBRACK] = ACTIONS(790),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(790),
    [sym_begin_group] = ACTIONS(790),
    [sym_math_shift] = ACTIONS(790),
    [sym_alignment_tab] = ACTIONS(790),
    [sym_parameter_char] = ACTIONS(790),
    [sym_superscript] = ACTIONS(790),
    [sym_subscript] = ACTIONS(790),
    [sym_active_char] = ACTIONS(790),
    [sym_text] = ACTIONS(790),
  },
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(792),
    [anon_sym_RBRACK] = ACTIONS(792),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(792),
    [sym_begin_group] = ACTIONS(792),
    [sym_math_shift] = ACTIONS(792),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(792),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(792),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [346] = {
    [sym_text_group_at] = STATE(507),
    [sym__whitespace] = ACTIONS(794),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [347] = {
    [anon_sym_LBRACK] = ACTIONS(796),
    [anon_sym_RBRACK] = ACTIONS(796),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(796),
    [sym_begin_group] = ACTIONS(796),
    [sym_math_shift] = ACTIONS(796),
    [sym_alignment_tab] = ACTIONS(796),
    [sym_parameter_char] = ACTIONS(796),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(796),
    [sym_active_char] = ACTIONS(796),
    [sym_text] = ACTIONS(796),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(798),
    [anon_sym_RBRACK] = ACTIONS(798),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(798),
    [sym_begin_group] = ACTIONS(798),
    [sym_math_shift] = ACTIONS(798),
    [sym_alignment_tab] = ACTIONS(798),
    [sym_parameter_char] = ACTIONS(798),
    [sym_superscript] = ACTIONS(798),
    [sym_subscript] = ACTIONS(798),
    [sym_active_char] = ACTIONS(798),
    [sym_text] = ACTIONS(798),
  },
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(800),
    [sym_begin_group] = ACTIONS(800),
    [sym_math_shift] = ACTIONS(800),
    [sym_alignment_tab] = ACTIONS(800),
    [sym_parameter_char] = ACTIONS(800),
    [sym_superscript] = ACTIONS(800),
    [sym_subscript] = ACTIONS(800),
    [sym_active_char] = ACTIONS(800),
    [sym_text] = ACTIONS(800),
  },
  [350] = {
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
    [sym__name_at] = ACTIONS(387),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(802),
    [sym_begin_group] = ACTIONS(802),
    [sym_math_shift] = ACTIONS(802),
    [sym_alignment_tab] = ACTIONS(802),
    [sym_parameter_char] = ACTIONS(802),
    [sym_superscript] = ACTIONS(802),
    [sym_subscript] = ACTIONS(802),
    [sym_active_char] = ACTIONS(802),
    [sym_text] = ACTIONS(802),
  },
  [352] = {
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [353] = {
    [sym__common] = STATE(353),
    [sym__text_mode_common] = STATE(353),
    [sym_inline_verbatim] = STATE(353),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(353),
    [sym_parameter] = STATE(353),
    [sym_text_env_at] = STATE(353),
    [sym__display_math_at] = STATE(353),
    [sym_tex_display_math_at] = STATE(353),
    [sym_latex_display_math_at] = STATE(353),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(353),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(353),
    [sym_tex_inline_math_at] = STATE(353),
    [sym_latex_inline_math_at] = STATE(353),
    [sym_inline_math_env_at] = STATE(353),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(353),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(353),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(353),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(353),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(353),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(353),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(353),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(353),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(353),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(353),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(353),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(353),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(353),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(353),
    [sym_opt_text_group_at] = STATE(353),
    [sym_token_at] = STATE(353),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(353),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(806),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(812),
    [sym_math_shift] = ACTIONS(815),
    [sym_alignment_tab] = ACTIONS(818),
    [sym_parameter_char] = ACTIONS(821),
    [sym_superscript] = ACTIONS(824),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(818),
    [sym_text] = ACTIONS(818),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_math_shift] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_active_char] = ACTIONS(827),
    [sym_text] = ACTIONS(827),
  },
  [355] = {
    [sym__common] = STATE(355),
    [sym__text_mode_common] = STATE(355),
    [sym_inline_verbatim] = STATE(355),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(355),
    [sym_text_mode_at_region] = STATE(355),
    [sym_parameter] = STATE(355),
    [sym_text_env] = STATE(355),
    [sym__display_math] = STATE(355),
    [sym_tex_display_math] = STATE(355),
    [sym_latex_display_math] = STATE(355),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(355),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(355),
    [sym_tex_inline_math] = STATE(355),
    [sym_latex_inline_math] = STATE(355),
    [sym_inline_math_env] = STATE(355),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(355),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(355),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(355),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(355),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(355),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(355),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(355),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(355),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(355),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(355),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(355),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(355),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(355),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(355),
    [sym_opt_text_group] = STATE(355),
    [sym_token] = STATE(355),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(355),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(444),
    [sym_alignment_tab] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(829),
    [sym_text] = ACTIONS(829),
  },
  [356] = {
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(832),
  },
  [357] = {
    [sym__whitespace] = ACTIONS(834),
    [anon_sym_LBRACK] = ACTIONS(832),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(832),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(481),
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
  [359] = {
    [anon_sym_LBRACK] = ACTIONS(495),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(495),
    [sym_end_group] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(495),
    [sym_alignment_tab] = ACTIONS(495),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(495),
    [sym_subscript] = ACTIONS(495),
    [sym_active_char] = ACTIONS(495),
    [sym_text] = ACTIONS(495),
  },
  [360] = {
    [anon_sym_LBRACK] = ACTIONS(529),
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
  [361] = {
    [sym_implicit_math_shift] = ACTIONS(836),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(838),
  },
  [362] = {
    [anon_sym_LBRACK] = ACTIONS(577),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(577),
    [sym_begin_group] = ACTIONS(577),
    [sym_end_group] = ACTIONS(577),
    [sym_math_shift] = ACTIONS(577),
    [sym_alignment_tab] = ACTIONS(577),
    [sym_parameter_char] = ACTIONS(577),
    [sym_superscript] = ACTIONS(577),
    [sym_subscript] = ACTIONS(577),
    [sym_active_char] = ACTIONS(577),
    [sym_text] = ACTIONS(577),
  },
  [363] = {
    [sym_verb_delim] = ACTIONS(840),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [364] = {
    [anon_sym_RBRACK] = ACTIONS(842),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [365] = {
    [anon_sym_LBRACK] = ACTIONS(622),
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
  [366] = {
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [367] = {
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(640),
    [sym_begin_group] = ACTIONS(640),
    [sym_end_group] = ACTIONS(640),
    [sym_math_shift] = ACTIONS(640),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(640),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [sym_text] = ACTIONS(640),
  },
  [368] = {
    [anon_sym_LBRACK] = ACTIONS(642),
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
  [369] = {
    [sym_display_math_env_group] = STATE(517),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(846),
  },
  [370] = {
    [anon_sym_LBRACK] = ACTIONS(646),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_end_group] = ACTIONS(646),
    [sym_math_shift] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_active_char] = ACTIONS(646),
    [sym_text] = ACTIONS(646),
  },
  [371] = {
    [sym_inline_math_env_group] = STATE(519),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(848),
  },
  [372] = {
    [anon_sym_LBRACK] = ACTIONS(654),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(654),
    [sym_begin_group] = ACTIONS(654),
    [sym_end_group] = ACTIONS(654),
    [sym_math_shift] = ACTIONS(654),
    [sym_alignment_tab] = ACTIONS(654),
    [sym_parameter_char] = ACTIONS(654),
    [sym_superscript] = ACTIONS(654),
    [sym_subscript] = ACTIONS(654),
    [sym_active_char] = ACTIONS(654),
    [sym_text] = ACTIONS(654),
  },
  [373] = {
    [sym_verbatim_env_name] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [374] = {
    [anon_sym_LBRACK] = ACTIONS(658),
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
  [375] = {
    [anon_sym_LBRACK] = ACTIONS(675),
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
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_end_group] = ACTIONS(677),
    [sym_math_shift] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(677),
  },
  [377] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(852),
  },
  [378] = {
    [sym_simple_text_group] = STATE(522),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [379] = {
    [anon_sym_LBRACK] = ACTIONS(708),
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
  [380] = {
    [sym_simple_text_group] = STATE(523),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(241),
  },
  [381] = {
    [anon_sym_LBRACK] = ACTIONS(710),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(710),
    [sym_begin_group] = ACTIONS(710),
    [sym_end_group] = ACTIONS(710),
    [sym_math_shift] = ACTIONS(710),
    [sym_alignment_tab] = ACTIONS(710),
    [sym_parameter_char] = ACTIONS(710),
    [sym_superscript] = ACTIONS(710),
    [sym_subscript] = ACTIONS(710),
    [sym_active_char] = ACTIONS(710),
    [sym_text] = ACTIONS(710),
  },
  [382] = {
    [sym_text_group] = STATE(524),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_end_group] = ACTIONS(712),
    [sym_math_shift] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_active_char] = ACTIONS(712),
    [sym_text] = ACTIONS(712),
  },
  [384] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(854),
  },
  [385] = {
    [sym_text_group] = STATE(526),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(65),
  },
  [386] = {
    [anon_sym_LBRACK] = ACTIONS(716),
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
  [387] = {
    [sym__whitespace] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(718),
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
    [sym_text] = ACTIONS(722),
  },
  [388] = {
    [anon_sym_makeatother] = ACTIONS(858),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [389] = {
    [anon_sym_LBRACK] = ACTIONS(772),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(772),
    [sym_end_group] = ACTIONS(772),
    [sym_math_shift] = ACTIONS(772),
    [sym_alignment_tab] = ACTIONS(772),
    [sym_parameter_char] = ACTIONS(772),
    [sym_superscript] = ACTIONS(772),
    [sym_subscript] = ACTIONS(772),
    [sym_active_char] = ACTIONS(772),
    [sym_text] = ACTIONS(772),
  },
  [390] = {
    [anon_sym_LBRACK] = ACTIONS(827),
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
  [391] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(860),
  },
  [392] = {
    [sym_implicit_math_shift] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(481),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_text] = ACTIONS(481),
  },
  [393] = {
    [sym_implicit_math_shift] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(495),
    [sym_begin_group] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(495),
    [sym_alignment_tab] = ACTIONS(495),
    [sym_parameter_char] = ACTIONS(495),
    [sym_superscript] = ACTIONS(495),
    [sym_subscript] = ACTIONS(495),
    [sym_active_char] = ACTIONS(495),
    [sym_text] = ACTIONS(495),
  },
  [394] = {
    [anon_sym_LBRACK] = ACTIONS(561),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(561),
    [sym_begin_group] = ACTIONS(561),
    [sym_end_group] = ACTIONS(561),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(561),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_text] = ACTIONS(561),
  },
  [395] = {
    [sym__common] = STATE(403),
    [sym__math_mode_common] = STATE(403),
    [sym__math_mode] = STATE(403),
    [sym_parameter] = STATE(403),
    [sym_math_env] = STATE(403),
    [sym_tag] = STATE(403),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(403),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(403),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(403),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(403),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(403),
    [sym_opt_math_group] = STATE(403),
    [sym_token] = STATE(403),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(403),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(862),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_text] = ACTIONS(571),
  },
  [396] = {
    [sym__common] = STATE(408),
    [sym__text_mode_common] = STATE(408),
    [sym_inline_verbatim] = STATE(408),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(408),
    [sym_text_mode] = STATE(530),
    [sym_text_mode_at_region] = STATE(408),
    [sym_parameter] = STATE(408),
    [sym_text_env] = STATE(408),
    [sym__display_math] = STATE(408),
    [sym_tex_display_math] = STATE(408),
    [sym_latex_display_math] = STATE(408),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(408),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(408),
    [sym_tex_inline_math] = STATE(408),
    [sym_latex_inline_math] = STATE(408),
    [sym_inline_math_env] = STATE(408),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(408),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(408),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(408),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(408),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(408),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(408),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(408),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(408),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(408),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(408),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(408),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(408),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(408),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(408),
    [sym_opt_text_group] = STATE(408),
    [sym_token] = STATE(408),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(408),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(864),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(581),
    [sym_text] = ACTIONS(581),
  },
  [397] = {
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(583),
    [sym_end_group] = ACTIONS(583),
    [sym_alignment_tab] = ACTIONS(583),
    [sym_parameter_char] = ACTIONS(583),
    [sym_superscript] = ACTIONS(583),
    [sym_subscript] = ACTIONS(583),
    [sym_active_char] = ACTIONS(583),
    [sym_text] = ACTIONS(583),
  },
  [398] = {
    [anon_sym_LBRACK] = ACTIONS(585),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(585),
    [sym_end_group] = ACTIONS(585),
    [sym_alignment_tab] = ACTIONS(585),
    [sym_parameter_char] = ACTIONS(585),
    [sym_superscript] = ACTIONS(585),
    [sym_subscript] = ACTIONS(585),
    [sym_active_char] = ACTIONS(585),
    [sym_text] = ACTIONS(585),
  },
  [399] = {
    [sym__common] = STATE(260),
    [sym__math_mode_common] = STATE(260),
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_env] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(260),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(531),
    [sym_end_token] = STATE(195),
    [sym_include] = STATE(260),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(260),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(260),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(260),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [400] = {
    [anon_sym_LBRACK] = ACTIONS(595),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(595),
    [sym_begin_group] = ACTIONS(595),
    [sym_end_group] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(595),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(595),
    [sym_subscript] = ACTIONS(595),
    [sym_active_char] = ACTIONS(595),
    [sym_text] = ACTIONS(595),
  },
  [401] = {
    [sym__common] = STATE(416),
    [sym__math_mode_common] = STATE(416),
    [sym__math_mode] = STATE(416),
    [sym_parameter] = STATE(416),
    [sym_math_env] = STATE(416),
    [sym_tag] = STATE(416),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(416),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(416),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(416),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(416),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(416),
    [sym_opt_math_group] = STATE(416),
    [sym_token] = STATE(416),
    [sym_begin_opt] = STATE(98),
    [sym_end_opt] = STATE(532),
    [aux_sym_math_mode_repeat1] = STATE(416),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(597),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(597),
    [sym_subscript] = ACTIONS(597),
    [sym_active_char] = ACTIONS(597),
    [sym_text] = ACTIONS(597),
  },
  [402] = {
    [sym_implicit_math_shift] = ACTIONS(866),
    [anon_sym_LBRACK] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(866),
    [sym_begin_group] = ACTIONS(866),
    [sym_math_shift] = ACTIONS(866),
    [sym_alignment_tab] = ACTIONS(866),
    [sym_parameter_char] = ACTIONS(866),
    [sym_superscript] = ACTIONS(866),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(866),
    [sym_text] = ACTIONS(866),
  },
  [403] = {
    [sym__common] = STATE(403),
    [sym__math_mode_common] = STATE(403),
    [sym__math_mode] = STATE(403),
    [sym_parameter] = STATE(403),
    [sym_math_env] = STATE(403),
    [sym_tag] = STATE(403),
    [sym_tag_token] = STATE(229),
    [sym_escaped] = STATE(403),
    [sym_begin] = STATE(230),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(403),
    [sym_include_token] = STATE(65),
    [sym_storage] = STATE(403),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(403),
    [sym_catcode_token] = STATE(68),
    [sym_math_group] = STATE(403),
    [sym_opt_math_group] = STATE(403),
    [sym_token] = STATE(403),
    [sym_begin_opt] = STATE(231),
    [aux_sym_math_mode_repeat1] = STATE(403),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(601),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(871),
    [sym_end_group] = ACTIONS(599),
    [sym_alignment_tab] = ACTIONS(874),
    [sym_parameter_char] = ACTIONS(877),
    [sym_superscript] = ACTIONS(874),
    [sym_subscript] = ACTIONS(874),
    [sym_active_char] = ACTIONS(874),
    [sym_text] = ACTIONS(874),
  },
  [404] = {
    [ts_builtin_sym_end] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_RBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_math_shift] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [405] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(882),
  },
  [406] = {
    [sym_implicit_math_shift] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [407] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(886),
  },
  [408] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [409] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(888),
  },
  [410] = {
    [sym_implicit_math_shift] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_math_shift] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_text] = ACTIONS(675),
  },
  [411] = {
    [sym_implicit_math_shift] = ACTIONS(890),
    [anon_sym_LBRACK] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [412] = {
    [sym_implicit_math_shift] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_text] = ACTIONS(231),
  },
  [413] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(892),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [414] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(894),
  },
  [415] = {
    [sym_implicit_math_shift] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [416] = {
    [sym__common] = STATE(416),
    [sym__math_mode_common] = STATE(416),
    [sym__math_mode] = STATE(416),
    [sym_parameter] = STATE(416),
    [sym_math_env] = STATE(416),
    [sym_tag] = STATE(416),
    [sym_tag_token] = STATE(96),
    [sym_escaped] = STATE(416),
    [sym_begin] = STATE(97),
    [sym_begin_token] = STATE(85),
    [sym_include] = STATE(416),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(416),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(416),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(416),
    [sym_opt_math_group] = STATE(416),
    [sym_token] = STATE(416),
    [sym_begin_opt] = STATE(98),
    [aux_sym_math_mode_repeat1] = STATE(416),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(599),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(626),
    [sym_begin_group] = ACTIONS(629),
    [sym_alignment_tab] = ACTIONS(898),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(898),
    [sym_subscript] = ACTIONS(898),
    [sym_active_char] = ACTIONS(898),
    [sym_text] = ACTIONS(898),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(901),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(901),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(901),
    [sym_begin_group] = ACTIONS(901),
    [sym_math_shift] = ACTIONS(901),
    [sym_alignment_tab] = ACTIONS(901),
    [sym_parameter_char] = ACTIONS(901),
    [sym_superscript] = ACTIONS(901),
    [sym_subscript] = ACTIONS(901),
    [sym_active_char] = ACTIONS(901),
    [sym_text] = ACTIONS(901),
  },
  [418] = {
    [anon_sym_LBRACK] = ACTIONS(866),
    [anon_sym_RBRACK] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(866),
    [sym_begin_group] = ACTIONS(866),
    [sym_alignment_tab] = ACTIONS(866),
    [sym_parameter_char] = ACTIONS(866),
    [sym_superscript] = ACTIONS(866),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(866),
    [sym_text] = ACTIONS(866),
  },
  [419] = {
    [ts_builtin_sym_end] = ACTIONS(903),
    [sym__whitespace] = ACTIONS(905),
    [anon_sym_LBRACK] = ACTIONS(903),
    [anon_sym_RBRACK] = ACTIONS(903),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(903),
    [sym_begin_group] = ACTIONS(903),
    [sym_math_shift] = ACTIONS(903),
    [sym_alignment_tab] = ACTIONS(903),
    [sym_parameter_char] = ACTIONS(903),
    [sym_superscript] = ACTIONS(903),
    [sym_subscript] = ACTIONS(903),
    [sym_active_char] = ACTIONS(903),
    [sym_text] = ACTIONS(907),
  },
  [420] = {
    [anon_sym_LBRACK] = ACTIONS(884),
    [anon_sym_RBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(884),
    [sym_begin_group] = ACTIONS(884),
    [sym_alignment_tab] = ACTIONS(884),
    [sym_parameter_char] = ACTIONS(884),
    [sym_superscript] = ACTIONS(884),
    [sym_subscript] = ACTIONS(884),
    [sym_active_char] = ACTIONS(884),
    [sym_text] = ACTIONS(884),
  },
  [421] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(909),
  },
  [422] = {
    [anon_sym_LBRACK] = ACTIONS(890),
    [anon_sym_RBRACK] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(890),
    [sym_begin_group] = ACTIONS(890),
    [sym_alignment_tab] = ACTIONS(890),
    [sym_parameter_char] = ACTIONS(890),
    [sym_superscript] = ACTIONS(890),
    [sym_subscript] = ACTIONS(890),
    [sym_active_char] = ACTIONS(890),
    [sym_text] = ACTIONS(890),
  },
  [423] = {
    [anon_sym_LBRACK] = ACTIONS(896),
    [anon_sym_RBRACK] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(896),
    [sym_begin_group] = ACTIONS(896),
    [sym_alignment_tab] = ACTIONS(896),
    [sym_parameter_char] = ACTIONS(896),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(896),
    [sym_active_char] = ACTIONS(896),
    [sym_text] = ACTIONS(896),
  },
  [424] = {
    [ts_builtin_sym_end] = ACTIONS(911),
    [sym__whitespace] = ACTIONS(913),
    [anon_sym_LBRACK] = ACTIONS(911),
    [anon_sym_RBRACK] = ACTIONS(911),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(911),
    [sym_begin_group] = ACTIONS(911),
    [sym_math_shift] = ACTIONS(911),
    [sym_alignment_tab] = ACTIONS(911),
    [sym_parameter_char] = ACTIONS(911),
    [sym_superscript] = ACTIONS(911),
    [sym_subscript] = ACTIONS(911),
    [sym_active_char] = ACTIONS(911),
    [sym_text] = ACTIONS(915),
  },
  [425] = {
    [sym_display_math_env_name] = ACTIONS(917),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [426] = {
    [ts_builtin_sym_end] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(919),
    [anon_sym_RBRACK] = ACTIONS(919),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(919),
    [sym_begin_group] = ACTIONS(919),
    [sym_math_shift] = ACTIONS(919),
    [sym_alignment_tab] = ACTIONS(919),
    [sym_parameter_char] = ACTIONS(919),
    [sym_superscript] = ACTIONS(919),
    [sym_subscript] = ACTIONS(919),
    [sym_active_char] = ACTIONS(919),
    [sym_text] = ACTIONS(919),
  },
  [427] = {
    [sym_inline_math_env_name] = ACTIONS(921),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [428] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(923),
    [anon_sym_RBRACK] = ACTIONS(923),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(923),
    [sym_begin_group] = ACTIONS(923),
    [sym_math_shift] = ACTIONS(923),
    [sym_alignment_tab] = ACTIONS(923),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(923),
    [sym_subscript] = ACTIONS(923),
    [sym_active_char] = ACTIONS(923),
    [sym_text] = ACTIONS(923),
  },
  [429] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(925),
  },
  [430] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(927),
  },
  [431] = {
    [anon_sym_LBRACK] = ACTIONS(929),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(929),
    [sym__end_of_line] = ACTIONS(929),
  },
  [432] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(931),
    [anon_sym_RBRACK] = ACTIONS(931),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(931),
    [sym_begin_group] = ACTIONS(931),
    [sym_math_shift] = ACTIONS(931),
    [sym_alignment_tab] = ACTIONS(931),
    [sym_parameter_char] = ACTIONS(931),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(931),
    [sym_active_char] = ACTIONS(931),
    [sym_text] = ACTIONS(931),
  },
  [433] = {
    [anon_sym_LBRACK] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(933),
    [sym__end_of_line] = ACTIONS(933),
  },
  [434] = {
    [ts_builtin_sym_end] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(935),
    [sym_begin_group] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(935),
    [sym_alignment_tab] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(935),
    [sym_superscript] = ACTIONS(935),
    [sym_subscript] = ACTIONS(935),
    [sym_active_char] = ACTIONS(935),
    [sym_text] = ACTIONS(935),
  },
  [435] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(231),
  },
  [436] = {
    [sym__common] = STATE(220),
    [sym__text_mode_common] = STATE(220),
    [sym_inline_verbatim] = STATE(220),
    [sym_verb_token] = STATE(56),
    [sym__text_mode] = STATE(220),
    [sym_text_mode_at_region] = STATE(220),
    [sym_parameter] = STATE(220),
    [sym_text_env] = STATE(220),
    [sym__display_math] = STATE(220),
    [sym_tex_display_math] = STATE(220),
    [sym_latex_display_math] = STATE(220),
    [sym_begin_display_math] = STATE(57),
    [sym_begin_inline_math] = STATE(58),
    [sym_display_math_env] = STATE(220),
    [sym_display_math_begin] = STATE(59),
    [sym__inline_math] = STATE(220),
    [sym_tex_inline_math] = STATE(220),
    [sym_latex_inline_math] = STATE(220),
    [sym_inline_math_env] = STATE(220),
    [sym_inline_math_begin] = STATE(60),
    [sym_verbatim_env] = STATE(220),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(220),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(220),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(220),
    [sym_usepackage_token] = STATE(64),
    [sym_include] = STATE(220),
    [sym_include_token] = STATE(65),
    [sym_section] = STATE(220),
    [sym_section_token] = STATE(66),
    [sym_storage] = STATE(220),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(220),
    [sym_catcode_token] = STATE(68),
    [sym_emph] = STATE(220),
    [sym_emph_token] = STATE(69),
    [sym_footnote] = STATE(220),
    [sym_footnote_token] = STATE(70),
    [sym_textbf] = STATE(220),
    [sym_textbf_token] = STATE(71),
    [sym_textit] = STATE(220),
    [sym_textit_token] = STATE(72),
    [sym_texttt] = STATE(220),
    [sym_texttt_token] = STATE(73),
    [sym_makeatletter] = STATE(74),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(220),
    [sym_opt_text_group] = STATE(220),
    [sym_token] = STATE(220),
    [sym_begin_opt] = STATE(75),
    [aux_sym_text_mode_repeat1] = STATE(220),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(937),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [437] = {
    [anon_sym_LBRACK] = ACTIONS(939),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(939),
    [sym_begin_group] = ACTIONS(939),
    [sym_alignment_tab] = ACTIONS(939),
    [sym_parameter_char] = ACTIONS(939),
    [sym_superscript] = ACTIONS(939),
    [sym_subscript] = ACTIONS(939),
    [sym_active_char] = ACTIONS(939),
    [sym_text] = ACTIONS(939),
  },
  [438] = {
    [sym_text_group] = STATE(545),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(941),
  },
  [439] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(941),
  },
  [440] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(943),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(945),
    [sym__end_of_line] = ACTIONS(945),
  },
  [441] = {
    [sym_text_group] = STATE(547),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(947),
  },
  [442] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(947),
  },
  [443] = {
    [ts_builtin_sym_end] = ACTIONS(949),
    [anon_sym_LBRACK] = ACTIONS(949),
    [anon_sym_RBRACK] = ACTIONS(949),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(949),
    [sym_begin_group] = ACTIONS(949),
    [sym_math_shift] = ACTIONS(949),
    [sym_alignment_tab] = ACTIONS(949),
    [sym_parameter_char] = ACTIONS(949),
    [sym_superscript] = ACTIONS(949),
    [sym_subscript] = ACTIONS(949),
    [sym_active_char] = ACTIONS(949),
    [sym_text] = ACTIONS(949),
  },
  [444] = {
    [sym__whitespace] = ACTIONS(827),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(827),
    [sym__end_of_line] = ACTIONS(827),
  },
  [445] = {
    [ts_builtin_sym_end] = ACTIONS(951),
    [anon_sym_LBRACK] = ACTIONS(951),
    [anon_sym_RBRACK] = ACTIONS(951),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(951),
    [sym_begin_group] = ACTIONS(951),
    [sym_math_shift] = ACTIONS(951),
    [sym_alignment_tab] = ACTIONS(951),
    [sym_parameter_char] = ACTIONS(951),
    [sym_superscript] = ACTIONS(951),
    [sym_subscript] = ACTIONS(951),
    [sym_active_char] = ACTIONS(951),
    [sym_text] = ACTIONS(951),
  },
  [446] = {
    [ts_builtin_sym_end] = ACTIONS(953),
    [anon_sym_LBRACK] = ACTIONS(953),
    [anon_sym_RBRACK] = ACTIONS(953),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(953),
    [sym_begin_group] = ACTIONS(953),
    [sym_math_shift] = ACTIONS(953),
    [sym_alignment_tab] = ACTIONS(953),
    [sym_parameter_char] = ACTIONS(953),
    [sym_superscript] = ACTIONS(953),
    [sym_subscript] = ACTIONS(953),
    [sym_active_char] = ACTIONS(953),
    [sym_text] = ACTIONS(953),
  },
  [447] = {
    [ts_builtin_sym_end] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(955),
    [anon_sym_RBRACK] = ACTIONS(955),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(955),
    [sym_begin_group] = ACTIONS(955),
    [sym_math_shift] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(955),
    [sym_parameter_char] = ACTIONS(955),
    [sym_superscript] = ACTIONS(955),
    [sym_subscript] = ACTIONS(955),
    [sym_active_char] = ACTIONS(955),
    [sym_text] = ACTIONS(955),
  },
  [448] = {
    [ts_builtin_sym_end] = ACTIONS(957),
    [anon_sym_LBRACK] = ACTIONS(957),
    [anon_sym_RBRACK] = ACTIONS(957),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(957),
    [sym_begin_group] = ACTIONS(957),
    [sym_math_shift] = ACTIONS(957),
    [sym_alignment_tab] = ACTIONS(957),
    [sym_parameter_char] = ACTIONS(957),
    [sym_superscript] = ACTIONS(957),
    [sym_subscript] = ACTIONS(957),
    [sym_active_char] = ACTIONS(957),
    [sym_text] = ACTIONS(957),
  },
  [449] = {
    [ts_builtin_sym_end] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(959),
    [anon_sym_RBRACK] = ACTIONS(959),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(959),
    [sym_begin_group] = ACTIONS(959),
    [sym_math_shift] = ACTIONS(959),
    [sym_alignment_tab] = ACTIONS(959),
    [sym_parameter_char] = ACTIONS(959),
    [sym_superscript] = ACTIONS(959),
    [sym_subscript] = ACTIONS(959),
    [sym_active_char] = ACTIONS(959),
    [sym_text] = ACTIONS(959),
  },
  [450] = {
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_RBRACK] = ACTIONS(961),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(961),
    [sym_begin_group] = ACTIONS(961),
    [sym_math_shift] = ACTIONS(961),
    [sym_alignment_tab] = ACTIONS(961),
    [sym_parameter_char] = ACTIONS(961),
    [sym_superscript] = ACTIONS(961),
    [sym_subscript] = ACTIONS(961),
    [sym_active_char] = ACTIONS(961),
    [sym_text] = ACTIONS(961),
  },
  [451] = {
    [sym__whitespace] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(726),
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
    [sym_text] = ACTIONS(728),
  },
  [452] = {
    [anon_sym_LBRACK] = ACTIONS(736),
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
  [453] = {
    [sym__common] = STATE(474),
    [sym__text_mode_common] = STATE(474),
    [sym_inline_verbatim] = STATE(474),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(474),
    [sym_parameter] = STATE(474),
    [sym_text_env_at] = STATE(474),
    [sym__display_math_at] = STATE(474),
    [sym_tex_display_math_at] = STATE(474),
    [sym_latex_display_math_at] = STATE(474),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(474),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(474),
    [sym_tex_inline_math_at] = STATE(474),
    [sym_latex_inline_math_at] = STATE(474),
    [sym_inline_math_env_at] = STATE(474),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(474),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(474),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(474),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(474),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(474),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(474),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(474),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(474),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(474),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(474),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(474),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(474),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(474),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(474),
    [sym_opt_text_group_at] = STATE(474),
    [sym_token_at] = STATE(474),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(474),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(965),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [454] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_math_mode_at] = STATE(550),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_text] = ACTIONS(405),
  },
  [455] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(967),
  },
  [456] = {
    [sym_end_display_math] = STATE(552),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(507),
  },
  [457] = {
    [sym_end_inline_math] = STATE(553),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(509),
  },
  [458] = {
    [sym_display_math_end] = STATE(554),
    [sym_end_token] = STATE(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [459] = {
    [sym_inline_math_end] = STATE(555),
    [sym_end_token] = STATE(371),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
  },
  [460] = {
    [anon_sym_LBRACK] = ACTIONS(776),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(776),
    [sym_begin_group] = ACTIONS(776),
    [sym_end_group] = ACTIONS(776),
    [sym_math_shift] = ACTIONS(776),
    [sym_alignment_tab] = ACTIONS(776),
    [sym_parameter_char] = ACTIONS(776),
    [sym_superscript] = ACTIONS(776),
    [sym_subscript] = ACTIONS(776),
    [sym_active_char] = ACTIONS(776),
    [sym_text] = ACTIONS(776),
  },
  [461] = {
    [sym__common] = STATE(353),
    [sym__text_mode_common] = STATE(353),
    [sym_inline_verbatim] = STATE(353),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(353),
    [sym_parameter] = STATE(353),
    [sym_text_env_at] = STATE(353),
    [sym__display_math_at] = STATE(353),
    [sym_tex_display_math_at] = STATE(353),
    [sym_latex_display_math_at] = STATE(353),
    [sym_begin_display_math] = STATE(139),
    [sym_begin_inline_math] = STATE(140),
    [sym_display_math_env_at] = STATE(353),
    [sym_display_math_begin_at] = STATE(141),
    [sym__inline_math_at] = STATE(353),
    [sym_tex_inline_math_at] = STATE(353),
    [sym_latex_inline_math_at] = STATE(353),
    [sym_inline_math_env_at] = STATE(353),
    [sym_inline_math_begin] = STATE(142),
    [sym_verbatim_env] = STATE(353),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(353),
    [sym_begin] = STATE(143),
    [sym_begin_token] = STATE(144),
    [sym_end] = STATE(556),
    [sym_end_token] = STATE(195),
    [sym_documentclass] = STATE(353),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(353),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(353),
    [sym_include_token] = STATE(145),
    [sym_section_at] = STATE(353),
    [sym_section_token] = STATE(146),
    [sym_storage] = STATE(353),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(353),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(353),
    [sym_emph_token] = STATE(147),
    [sym_footnote_at] = STATE(353),
    [sym_footnote_token] = STATE(148),
    [sym_textbf_at] = STATE(353),
    [sym_textbf_token] = STATE(149),
    [sym_textit_at] = STATE(353),
    [sym_textit_token] = STATE(150),
    [sym_texttt_at] = STATE(353),
    [sym_texttt_token] = STATE(151),
    [sym_text_group_at] = STATE(353),
    [sym_opt_text_group_at] = STATE(353),
    [sym_token_at] = STATE(353),
    [sym_begin_opt] = STATE(154),
    [aux_sym_text_mode_at_repeat1] = STATE(353),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [462] = {
    [anon_sym_LBRACK] = ACTIONS(782),
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
  [463] = {
    [anon_sym_LBRACK] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [464] = {
    [sym_text_group_at] = STATE(558),
    [sym__whitespace] = ACTIONS(969),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [465] = {
    [anon_sym_LBRACK] = ACTIONS(790),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(790),
    [sym_begin_group] = ACTIONS(790),
    [sym_end_group] = ACTIONS(790),
    [sym_math_shift] = ACTIONS(790),
    [sym_alignment_tab] = ACTIONS(790),
    [sym_parameter_char] = ACTIONS(790),
    [sym_superscript] = ACTIONS(790),
    [sym_subscript] = ACTIONS(790),
    [sym_active_char] = ACTIONS(790),
    [sym_text] = ACTIONS(790),
  },
  [466] = {
    [anon_sym_LBRACK] = ACTIONS(792),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(792),
    [sym_begin_group] = ACTIONS(792),
    [sym_end_group] = ACTIONS(792),
    [sym_math_shift] = ACTIONS(792),
    [sym_alignment_tab] = ACTIONS(792),
    [sym_parameter_char] = ACTIONS(792),
    [sym_superscript] = ACTIONS(792),
    [sym_subscript] = ACTIONS(792),
    [sym_active_char] = ACTIONS(792),
    [sym_text] = ACTIONS(792),
  },
  [467] = {
    [sym_text_group_at] = STATE(560),
    [sym__whitespace] = ACTIONS(971),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [468] = {
    [anon_sym_LBRACK] = ACTIONS(796),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(796),
    [sym_begin_group] = ACTIONS(796),
    [sym_end_group] = ACTIONS(796),
    [sym_math_shift] = ACTIONS(796),
    [sym_alignment_tab] = ACTIONS(796),
    [sym_parameter_char] = ACTIONS(796),
    [sym_superscript] = ACTIONS(796),
    [sym_subscript] = ACTIONS(796),
    [sym_active_char] = ACTIONS(796),
    [sym_text] = ACTIONS(796),
  },
  [469] = {
    [anon_sym_LBRACK] = ACTIONS(798),
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
  [470] = {
    [anon_sym_LBRACK] = ACTIONS(800),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(800),
    [sym_begin_group] = ACTIONS(800),
    [sym_end_group] = ACTIONS(800),
    [sym_math_shift] = ACTIONS(800),
    [sym_alignment_tab] = ACTIONS(800),
    [sym_parameter_char] = ACTIONS(800),
    [sym_superscript] = ACTIONS(800),
    [sym_subscript] = ACTIONS(800),
    [sym_active_char] = ACTIONS(800),
    [sym_text] = ACTIONS(800),
  },
  [471] = {
    [anon_sym_LBRACK] = ACTIONS(802),
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
  [472] = {
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
    [sym_end_opt] = STATE(561),
    [aux_sym_text_mode_at_repeat1] = STATE(509),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [473] = {
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_RBRACK] = ACTIONS(973),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(973),
    [sym_begin_group] = ACTIONS(973),
    [sym_math_shift] = ACTIONS(973),
    [sym_alignment_tab] = ACTIONS(973),
    [sym_parameter_char] = ACTIONS(973),
    [sym_superscript] = ACTIONS(973),
    [sym_subscript] = ACTIONS(973),
    [sym_active_char] = ACTIONS(973),
    [sym_text] = ACTIONS(973),
  },
  [474] = {
    [sym__common] = STATE(474),
    [sym__text_mode_common] = STATE(474),
    [sym_inline_verbatim] = STATE(474),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(474),
    [sym_parameter] = STATE(474),
    [sym_text_env_at] = STATE(474),
    [sym__display_math_at] = STATE(474),
    [sym_tex_display_math_at] = STATE(474),
    [sym_latex_display_math_at] = STATE(474),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(474),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(474),
    [sym_tex_inline_math_at] = STATE(474),
    [sym_latex_inline_math_at] = STATE(474),
    [sym_inline_math_env_at] = STATE(474),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(474),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(474),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(474),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(474),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(474),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(474),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(474),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(474),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(474),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(474),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(474),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(474),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(474),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(474),
    [sym_opt_text_group_at] = STATE(474),
    [sym_token_at] = STATE(474),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(474),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(806),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(975),
    [sym_begin_group] = ACTIONS(978),
    [sym_end_group] = ACTIONS(981),
    [sym_math_shift] = ACTIONS(983),
    [sym_alignment_tab] = ACTIONS(986),
    [sym_parameter_char] = ACTIONS(989),
    [sym_superscript] = ACTIONS(992),
    [sym_subscript] = ACTIONS(992),
    [sym_active_char] = ACTIONS(986),
    [sym_text] = ACTIONS(986),
  },
  [475] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(221),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(223),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(730),
  },
  [476] = {
    [sym__common] = STATE(563),
    [sym__math_mode_common] = STATE(563),
    [sym__math_mode_at] = STATE(563),
    [sym_parameter] = STATE(563),
    [sym_math_env_at] = STATE(563),
    [sym_tag_at] = STATE(563),
    [sym_tag_token] = STATE(478),
    [sym_escaped] = STATE(563),
    [sym_begin] = STATE(479),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(563),
    [sym_include_token] = STATE(312),
    [sym_storage] = STATE(563),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(563),
    [sym_catcode_token] = STATE(68),
    [sym_math_group_at] = STATE(563),
    [sym_opt_math_group_at] = STATE(563),
    [sym_token_at] = STATE(563),
    [sym_begin_opt] = STATE(480),
    [aux_sym_math_mode_at_repeat1] = STATE(563),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(995),
    [sym_alignment_tab] = ACTIONS(997),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(997),
    [sym_subscript] = ACTIONS(997),
    [sym_active_char] = ACTIONS(997),
    [sym_text] = ACTIONS(997),
  },
  [477] = {
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_RBRACK] = ACTIONS(999),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(999),
    [sym_begin_group] = ACTIONS(999),
    [sym_math_shift] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(999),
    [sym_parameter_char] = ACTIONS(999),
    [sym_superscript] = ACTIONS(999),
    [sym_subscript] = ACTIONS(999),
    [sym_active_char] = ACTIONS(999),
    [sym_text] = ACTIONS(999),
  },
  [478] = {
    [sym_math_text_group_at] = STATE(565),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1001),
  },
  [479] = {
    [sym__common] = STATE(567),
    [sym__math_mode_common] = STATE(567),
    [sym__math_mode_at] = STATE(567),
    [sym_parameter] = STATE(567),
    [sym_math_env_at] = STATE(567),
    [sym_tag_at] = STATE(567),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(567),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(566),
    [sym_end_token] = STATE(195),
    [sym_include_at] = STATE(567),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(567),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(567),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(567),
    [sym_opt_math_group_at] = STATE(567),
    [sym_token_at] = STATE(567),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(567),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1003),
  },
  [480] = {
    [sym__common] = STATE(569),
    [sym__math_mode_common] = STATE(569),
    [sym__math_mode_at] = STATE(569),
    [sym_parameter] = STATE(569),
    [sym_math_env_at] = STATE(569),
    [sym_tag_at] = STATE(569),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(569),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(569),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(569),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(569),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(569),
    [sym_opt_math_group_at] = STATE(569),
    [sym_token_at] = STATE(569),
    [sym_begin_opt] = STATE(327),
    [sym_end_opt] = STATE(568),
    [aux_sym_math_mode_at_repeat1] = STATE(569),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1005),
  },
  [481] = {
    [sym__common] = STATE(571),
    [sym__math_mode_common] = STATE(571),
    [sym__math_mode_at] = STATE(571),
    [sym_parameter] = STATE(571),
    [sym_math_env_at] = STATE(571),
    [sym_tag_at] = STATE(571),
    [sym_tag_token] = STATE(478),
    [sym_escaped] = STATE(571),
    [sym_begin] = STATE(479),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(571),
    [sym_include_token] = STATE(312),
    [sym_storage] = STATE(571),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(571),
    [sym_catcode_token] = STATE(68),
    [sym_math_group_at] = STATE(571),
    [sym_opt_math_group_at] = STATE(571),
    [sym_token_at] = STATE(571),
    [sym_begin_opt] = STATE(480),
    [aux_sym_math_mode_at_repeat1] = STATE(571),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(1007),
    [sym_alignment_tab] = ACTIONS(1009),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(1009),
    [sym_subscript] = ACTIONS(1009),
    [sym_active_char] = ACTIONS(1009),
    [sym_text] = ACTIONS(1009),
  },
  [482] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1011),
  },
  [483] = {
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1013),
    [sym_begin_group] = ACTIONS(1013),
    [sym_math_shift] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(1013),
    [sym_parameter_char] = ACTIONS(1013),
    [sym_superscript] = ACTIONS(1013),
    [sym_subscript] = ACTIONS(1013),
    [sym_active_char] = ACTIONS(1013),
    [sym_text] = ACTIONS(1013),
  },
  [484] = {
    [sym__common] = STATE(575),
    [sym__text_mode_common] = STATE(575),
    [sym_inline_verbatim] = STATE(575),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(575),
    [sym_text_mode_at] = STATE(574),
    [sym_parameter] = STATE(575),
    [sym_text_env_at] = STATE(575),
    [sym__display_math_at] = STATE(575),
    [sym_tex_display_math_at] = STATE(575),
    [sym_latex_display_math_at] = STATE(575),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(575),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(575),
    [sym_tex_inline_math_at] = STATE(575),
    [sym_latex_inline_math_at] = STATE(575),
    [sym_inline_math_env_at] = STATE(575),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(575),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(575),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(575),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(575),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(575),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(575),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(575),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(575),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(575),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(575),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(575),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(575),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(575),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(575),
    [sym_opt_text_group_at] = STATE(575),
    [sym_token_at] = STATE(575),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(575),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(1015),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1017),
  },
  [485] = {
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_RBRACK] = ACTIONS(1019),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1019),
    [sym_begin_group] = ACTIONS(1019),
    [sym_math_shift] = ACTIONS(1019),
    [sym_alignment_tab] = ACTIONS(1019),
    [sym_parameter_char] = ACTIONS(1019),
    [sym_superscript] = ACTIONS(1019),
    [sym_subscript] = ACTIONS(1019),
    [sym_active_char] = ACTIONS(1019),
    [sym_text] = ACTIONS(1019),
  },
  [486] = {
    [anon_sym_tag] = ACTIONS(257),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(325),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(387),
  },
  [487] = {
    [anon_sym_LBRACK] = ACTIONS(1021),
    [anon_sym_RBRACK] = ACTIONS(1021),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1021),
    [sym_begin_group] = ACTIONS(1021),
    [sym_math_shift] = ACTIONS(1021),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(1021),
    [sym_superscript] = ACTIONS(1021),
    [sym_subscript] = ACTIONS(1021),
    [sym_active_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1021),
  },
  [488] = {
    [sym__common] = STATE(493),
    [sym__math_mode_common] = STATE(493),
    [sym__math_mode_at] = STATE(493),
    [sym_parameter] = STATE(493),
    [sym_math_env_at] = STATE(493),
    [sym_tag_at] = STATE(493),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(493),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(576),
    [sym_end_token] = STATE(111),
    [sym_include_at] = STATE(493),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(493),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(493),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(493),
    [sym_opt_math_group_at] = STATE(493),
    [sym_token_at] = STATE(493),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(493),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [489] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [anon_sym_RBRACK] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1023),
    [sym_begin_group] = ACTIONS(1023),
    [sym_math_shift] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1023),
    [sym_parameter_char] = ACTIONS(1023),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1023),
    [sym_active_char] = ACTIONS(1023),
    [sym_text] = ACTIONS(1023),
  },
  [490] = {
    [sym__common] = STATE(578),
    [sym__math_mode_common] = STATE(578),
    [sym__math_mode_at] = STATE(578),
    [sym_parameter] = STATE(578),
    [sym_math_env_at] = STATE(578),
    [sym_tag_at] = STATE(578),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(578),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(578),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(578),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(578),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(578),
    [sym_opt_math_group_at] = STATE(578),
    [sym_token_at] = STATE(578),
    [sym_begin_opt] = STATE(327),
    [sym_end_opt] = STATE(577),
    [aux_sym_math_mode_at_repeat1] = STATE(578),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [491] = {
    [sym__common] = STATE(491),
    [sym__math_mode_common] = STATE(491),
    [sym__math_mode_at] = STATE(491),
    [sym_parameter] = STATE(491),
    [sym_math_env_at] = STATE(491),
    [sym_tag_at] = STATE(491),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(491),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(491),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(491),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(491),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(491),
    [sym_opt_math_group_at] = STATE(491),
    [sym_token_at] = STATE(491),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(491),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1030),
    [sym_begin_group] = ACTIONS(1033),
    [sym_math_shift] = ACTIONS(1036),
    [sym_alignment_tab] = ACTIONS(1038),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1038),
    [sym_subscript] = ACTIONS(1038),
    [sym_active_char] = ACTIONS(1038),
    [sym_text] = ACTIONS(1038),
  },
  [492] = {
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_RBRACK] = ACTIONS(1044),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1044),
    [sym_begin_group] = ACTIONS(1044),
    [sym_math_shift] = ACTIONS(1044),
    [sym_alignment_tab] = ACTIONS(1044),
    [sym_parameter_char] = ACTIONS(1044),
    [sym_superscript] = ACTIONS(1044),
    [sym_subscript] = ACTIONS(1044),
    [sym_active_char] = ACTIONS(1044),
    [sym_text] = ACTIONS(1044),
  },
  [493] = {
    [sym__common] = STATE(493),
    [sym__math_mode_common] = STATE(493),
    [sym__math_mode_at] = STATE(493),
    [sym_parameter] = STATE(493),
    [sym_math_env_at] = STATE(493),
    [sym_tag_at] = STATE(493),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(493),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(493),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(493),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(493),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(493),
    [sym_opt_math_group_at] = STATE(493),
    [sym_token_at] = STATE(493),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(493),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1030),
    [sym_begin_group] = ACTIONS(1033),
    [sym_alignment_tab] = ACTIONS(1046),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1046),
    [sym_subscript] = ACTIONS(1046),
    [sym_active_char] = ACTIONS(1046),
    [sym_text] = ACTIONS(1046),
  },
  [494] = {
    [anon_sym_LBRACK] = ACTIONS(1049),
    [anon_sym_RBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_math_shift] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [495] = {
    [anon_sym_LBRACK] = ACTIONS(1051),
    [anon_sym_RBRACK] = ACTIONS(1051),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1051),
    [sym_begin_group] = ACTIONS(1051),
    [sym_math_shift] = ACTIONS(1051),
    [sym_alignment_tab] = ACTIONS(1051),
    [sym_parameter_char] = ACTIONS(1051),
    [sym_superscript] = ACTIONS(1051),
    [sym_subscript] = ACTIONS(1051),
    [sym_active_char] = ACTIONS(1051),
    [sym_text] = ACTIONS(1051),
  },
  [496] = {
    [anon_sym_LBRACK] = ACTIONS(1053),
    [anon_sym_RBRACK] = ACTIONS(1053),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1053),
    [sym_begin_group] = ACTIONS(1053),
    [sym_math_shift] = ACTIONS(1053),
    [sym_alignment_tab] = ACTIONS(1053),
    [sym_parameter_char] = ACTIONS(1053),
    [sym_superscript] = ACTIONS(1053),
    [sym_subscript] = ACTIONS(1053),
    [sym_active_char] = ACTIONS(1053),
    [sym_text] = ACTIONS(1053),
  },
  [497] = {
    [anon_sym_LBRACK] = ACTIONS(1055),
    [anon_sym_RBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [498] = {
    [sym__common] = STATE(580),
    [sym__text_mode_common] = STATE(580),
    [sym_inline_verbatim] = STATE(580),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(580),
    [sym_parameter] = STATE(580),
    [sym_text_env_at] = STATE(580),
    [sym__display_math_at] = STATE(580),
    [sym_tex_display_math_at] = STATE(580),
    [sym_latex_display_math_at] = STATE(580),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(580),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(580),
    [sym_tex_inline_math_at] = STATE(580),
    [sym_latex_inline_math_at] = STATE(580),
    [sym_inline_math_env_at] = STATE(580),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(580),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(580),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(580),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(580),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(580),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(580),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(580),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(580),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(580),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(580),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(580),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(580),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(580),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(580),
    [sym_opt_text_group_at] = STATE(580),
    [sym_token_at] = STATE(580),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(580),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(1057),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(1059),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(1059),
    [sym_text] = ACTIONS(1059),
  },
  [499] = {
    [anon_sym_LBRACK] = ACTIONS(1061),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1061),
  },
  [500] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1063),
  },
  [501] = {
    [sym_text_group_at] = STATE(583),
    [sym__whitespace] = ACTIONS(1065),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(778),
    [sym__end_of_line] = ACTIONS(1063),
  },
  [502] = {
    [sym_text_group_at] = STATE(584),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [503] = {
    [anon_sym_LBRACK] = ACTIONS(1067),
    [anon_sym_RBRACK] = ACTIONS(1067),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [504] = {
    [sym__whitespace] = ACTIONS(802),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(802),
    [sym__end_of_line] = ACTIONS(802),
  },
  [505] = {
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
    [sym_end_opt] = STATE(585),
    [aux_sym_text_mode_at_repeat1] = STATE(509),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [506] = {
    [sym_text_group_at] = STATE(586),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [507] = {
    [anon_sym_LBRACK] = ACTIONS(1069),
    [anon_sym_RBRACK] = ACTIONS(1069),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1069),
    [sym_begin_group] = ACTIONS(1069),
    [sym_math_shift] = ACTIONS(1069),
    [sym_alignment_tab] = ACTIONS(1069),
    [sym_parameter_char] = ACTIONS(1069),
    [sym_superscript] = ACTIONS(1069),
    [sym_subscript] = ACTIONS(1069),
    [sym_active_char] = ACTIONS(1069),
    [sym_text] = ACTIONS(1069),
  },
  [508] = {
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_RBRACK] = ACTIONS(1071),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1071),
    [sym_begin_group] = ACTIONS(1071),
    [sym_math_shift] = ACTIONS(1071),
    [sym_alignment_tab] = ACTIONS(1071),
    [sym_parameter_char] = ACTIONS(1071),
    [sym_superscript] = ACTIONS(1071),
    [sym_subscript] = ACTIONS(1071),
    [sym_active_char] = ACTIONS(1071),
    [sym_text] = ACTIONS(1071),
  },
  [509] = {
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
    [aux_sym_text_mode_at_repeat1] = STATE(509),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(806),
    [anon_sym_RBRACK] = ACTIONS(981),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(812),
    [sym_math_shift] = ACTIONS(815),
    [sym_alignment_tab] = ACTIONS(1073),
    [sym_parameter_char] = ACTIONS(821),
    [sym_superscript] = ACTIONS(824),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(1073),
    [sym_text] = ACTIONS(1073),
  },
  [510] = {
    [anon_sym_LBRACK] = ACTIONS(1076),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1076),
  },
  [511] = {
    [anon_sym_LBRACK] = ACTIONS(880),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(880),
    [sym_begin_group] = ACTIONS(880),
    [sym_end_group] = ACTIONS(880),
    [sym_math_shift] = ACTIONS(880),
    [sym_alignment_tab] = ACTIONS(880),
    [sym_parameter_char] = ACTIONS(880),
    [sym_superscript] = ACTIONS(880),
    [sym_subscript] = ACTIONS(880),
    [sym_active_char] = ACTIONS(880),
    [sym_text] = ACTIONS(880),
  },
  [512] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1078),
  },
  [513] = {
    [anon_sym_LBRACK] = ACTIONS(901),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(901),
    [sym_begin_group] = ACTIONS(901),
    [sym_end_group] = ACTIONS(901),
    [sym_math_shift] = ACTIONS(901),
    [sym_alignment_tab] = ACTIONS(901),
    [sym_parameter_char] = ACTIONS(901),
    [sym_superscript] = ACTIONS(901),
    [sym_subscript] = ACTIONS(901),
    [sym_active_char] = ACTIONS(901),
    [sym_text] = ACTIONS(901),
  },
  [514] = {
    [sym__whitespace] = ACTIONS(1080),
    [anon_sym_LBRACK] = ACTIONS(903),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(903),
    [sym_begin_group] = ACTIONS(903),
    [sym_end_group] = ACTIONS(903),
    [sym_math_shift] = ACTIONS(903),
    [sym_alignment_tab] = ACTIONS(903),
    [sym_parameter_char] = ACTIONS(903),
    [sym_superscript] = ACTIONS(903),
    [sym_subscript] = ACTIONS(903),
    [sym_active_char] = ACTIONS(903),
    [sym_text] = ACTIONS(907),
  },
  [515] = {
    [sym__whitespace] = ACTIONS(1082),
    [anon_sym_LBRACK] = ACTIONS(911),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(911),
    [sym_begin_group] = ACTIONS(911),
    [sym_end_group] = ACTIONS(911),
    [sym_math_shift] = ACTIONS(911),
    [sym_alignment_tab] = ACTIONS(911),
    [sym_parameter_char] = ACTIONS(911),
    [sym_superscript] = ACTIONS(911),
    [sym_subscript] = ACTIONS(911),
    [sym_active_char] = ACTIONS(911),
    [sym_text] = ACTIONS(915),
  },
  [516] = {
    [sym_display_math_env_name] = ACTIONS(1084),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [517] = {
    [anon_sym_LBRACK] = ACTIONS(919),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(919),
    [sym_begin_group] = ACTIONS(919),
    [sym_end_group] = ACTIONS(919),
    [sym_math_shift] = ACTIONS(919),
    [sym_alignment_tab] = ACTIONS(919),
    [sym_parameter_char] = ACTIONS(919),
    [sym_superscript] = ACTIONS(919),
    [sym_subscript] = ACTIONS(919),
    [sym_active_char] = ACTIONS(919),
    [sym_text] = ACTIONS(919),
  },
  [518] = {
    [sym_inline_math_env_name] = ACTIONS(1086),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [519] = {
    [anon_sym_LBRACK] = ACTIONS(923),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(923),
    [sym_begin_group] = ACTIONS(923),
    [sym_end_group] = ACTIONS(923),
    [sym_math_shift] = ACTIONS(923),
    [sym_alignment_tab] = ACTIONS(923),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(923),
    [sym_subscript] = ACTIONS(923),
    [sym_active_char] = ACTIONS(923),
    [sym_text] = ACTIONS(923),
  },
  [520] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1088),
  },
  [521] = {
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(935),
    [sym_begin_group] = ACTIONS(935),
    [sym_end_group] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(935),
    [sym_alignment_tab] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(935),
    [sym_superscript] = ACTIONS(935),
    [sym_subscript] = ACTIONS(935),
    [sym_active_char] = ACTIONS(935),
    [sym_text] = ACTIONS(935),
  },
  [522] = {
    [anon_sym_LBRACK] = ACTIONS(949),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(949),
    [sym_begin_group] = ACTIONS(949),
    [sym_end_group] = ACTIONS(949),
    [sym_math_shift] = ACTIONS(949),
    [sym_alignment_tab] = ACTIONS(949),
    [sym_parameter_char] = ACTIONS(949),
    [sym_superscript] = ACTIONS(949),
    [sym_subscript] = ACTIONS(949),
    [sym_active_char] = ACTIONS(949),
    [sym_text] = ACTIONS(949),
  },
  [523] = {
    [anon_sym_LBRACK] = ACTIONS(951),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(951),
    [sym_begin_group] = ACTIONS(951),
    [sym_end_group] = ACTIONS(951),
    [sym_math_shift] = ACTIONS(951),
    [sym_alignment_tab] = ACTIONS(951),
    [sym_parameter_char] = ACTIONS(951),
    [sym_superscript] = ACTIONS(951),
    [sym_subscript] = ACTIONS(951),
    [sym_active_char] = ACTIONS(951),
    [sym_text] = ACTIONS(951),
  },
  [524] = {
    [anon_sym_LBRACK] = ACTIONS(953),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(953),
    [sym_begin_group] = ACTIONS(953),
    [sym_end_group] = ACTIONS(953),
    [sym_math_shift] = ACTIONS(953),
    [sym_alignment_tab] = ACTIONS(953),
    [sym_parameter_char] = ACTIONS(953),
    [sym_superscript] = ACTIONS(953),
    [sym_subscript] = ACTIONS(953),
    [sym_active_char] = ACTIONS(953),
    [sym_text] = ACTIONS(953),
  },
  [525] = {
    [anon_sym_LBRACK] = ACTIONS(955),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(955),
    [sym_begin_group] = ACTIONS(955),
    [sym_end_group] = ACTIONS(955),
    [sym_math_shift] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(955),
    [sym_parameter_char] = ACTIONS(955),
    [sym_superscript] = ACTIONS(955),
    [sym_subscript] = ACTIONS(955),
    [sym_active_char] = ACTIONS(955),
    [sym_text] = ACTIONS(955),
  },
  [526] = {
    [anon_sym_LBRACK] = ACTIONS(957),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(957),
    [sym_begin_group] = ACTIONS(957),
    [sym_end_group] = ACTIONS(957),
    [sym_math_shift] = ACTIONS(957),
    [sym_alignment_tab] = ACTIONS(957),
    [sym_parameter_char] = ACTIONS(957),
    [sym_superscript] = ACTIONS(957),
    [sym_subscript] = ACTIONS(957),
    [sym_active_char] = ACTIONS(957),
    [sym_text] = ACTIONS(957),
  },
  [527] = {
    [anon_sym_LBRACK] = ACTIONS(959),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(959),
    [sym_begin_group] = ACTIONS(959),
    [sym_end_group] = ACTIONS(959),
    [sym_math_shift] = ACTIONS(959),
    [sym_alignment_tab] = ACTIONS(959),
    [sym_parameter_char] = ACTIONS(959),
    [sym_superscript] = ACTIONS(959),
    [sym_subscript] = ACTIONS(959),
    [sym_active_char] = ACTIONS(959),
    [sym_text] = ACTIONS(959),
  },
  [528] = {
    [anon_sym_LBRACK] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(866),
    [sym_begin_group] = ACTIONS(866),
    [sym_end_group] = ACTIONS(866),
    [sym_alignment_tab] = ACTIONS(866),
    [sym_parameter_char] = ACTIONS(866),
    [sym_superscript] = ACTIONS(866),
    [sym_subscript] = ACTIONS(866),
    [sym_active_char] = ACTIONS(866),
    [sym_text] = ACTIONS(866),
  },
  [529] = {
    [anon_sym_LBRACK] = ACTIONS(884),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(884),
    [sym_begin_group] = ACTIONS(884),
    [sym_end_group] = ACTIONS(884),
    [sym_alignment_tab] = ACTIONS(884),
    [sym_parameter_char] = ACTIONS(884),
    [sym_superscript] = ACTIONS(884),
    [sym_subscript] = ACTIONS(884),
    [sym_active_char] = ACTIONS(884),
    [sym_text] = ACTIONS(884),
  },
  [530] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1090),
  },
  [531] = {
    [anon_sym_LBRACK] = ACTIONS(890),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(890),
    [sym_begin_group] = ACTIONS(890),
    [sym_end_group] = ACTIONS(890),
    [sym_alignment_tab] = ACTIONS(890),
    [sym_parameter_char] = ACTIONS(890),
    [sym_superscript] = ACTIONS(890),
    [sym_subscript] = ACTIONS(890),
    [sym_active_char] = ACTIONS(890),
    [sym_text] = ACTIONS(890),
  },
  [532] = {
    [anon_sym_LBRACK] = ACTIONS(896),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(896),
    [sym_begin_group] = ACTIONS(896),
    [sym_end_group] = ACTIONS(896),
    [sym_alignment_tab] = ACTIONS(896),
    [sym_parameter_char] = ACTIONS(896),
    [sym_superscript] = ACTIONS(896),
    [sym_subscript] = ACTIONS(896),
    [sym_active_char] = ACTIONS(896),
    [sym_text] = ACTIONS(896),
  },
  [533] = {
    [ts_builtin_sym_end] = ACTIONS(1092),
    [anon_sym_LBRACK] = ACTIONS(1092),
    [anon_sym_RBRACK] = ACTIONS(1092),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1092),
    [sym_begin_group] = ACTIONS(1092),
    [sym_math_shift] = ACTIONS(1092),
    [sym_alignment_tab] = ACTIONS(1092),
    [sym_parameter_char] = ACTIONS(1092),
    [sym_superscript] = ACTIONS(1092),
    [sym_subscript] = ACTIONS(1092),
    [sym_active_char] = ACTIONS(1092),
    [sym_text] = ACTIONS(1092),
  },
  [534] = {
    [sym_implicit_math_shift] = ACTIONS(1094),
    [anon_sym_LBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1094),
    [sym_begin_group] = ACTIONS(1094),
    [sym_math_shift] = ACTIONS(1094),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(1094),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1094),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [535] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1096),
  },
  [536] = {
    [sym_implicit_math_shift] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(529),
    [sym_begin_group] = ACTIONS(529),
    [sym_math_shift] = ACTIONS(529),
    [sym_alignment_tab] = ACTIONS(529),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(529),
    [sym_subscript] = ACTIONS(529),
    [sym_active_char] = ACTIONS(529),
    [sym_text] = ACTIONS(529),
  },
  [537] = {
    [sym_implicit_math_shift] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(955),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(955),
    [sym_begin_group] = ACTIONS(955),
    [sym_math_shift] = ACTIONS(955),
    [sym_alignment_tab] = ACTIONS(955),
    [sym_parameter_char] = ACTIONS(955),
    [sym_superscript] = ACTIONS(955),
    [sym_subscript] = ACTIONS(955),
    [sym_active_char] = ACTIONS(955),
    [sym_text] = ACTIONS(955),
  },
  [538] = {
    [ts_builtin_sym_end] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1098),
    [sym_begin_group] = ACTIONS(1098),
    [sym_math_shift] = ACTIONS(1098),
    [sym_alignment_tab] = ACTIONS(1098),
    [sym_parameter_char] = ACTIONS(1098),
    [sym_superscript] = ACTIONS(1098),
    [sym_subscript] = ACTIONS(1098),
    [sym_active_char] = ACTIONS(1098),
    [sym_text] = ACTIONS(1098),
  },
  [539] = {
    [anon_sym_LBRACK] = ACTIONS(1094),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1094),
    [sym_begin_group] = ACTIONS(1094),
    [sym_alignment_tab] = ACTIONS(1094),
    [sym_parameter_char] = ACTIONS(1094),
    [sym_superscript] = ACTIONS(1094),
    [sym_subscript] = ACTIONS(1094),
    [sym_active_char] = ACTIONS(1094),
    [sym_text] = ACTIONS(1094),
  },
  [540] = {
    [ts_builtin_sym_end] = ACTIONS(1100),
    [anon_sym_LBRACK] = ACTIONS(1100),
    [anon_sym_RBRACK] = ACTIONS(1100),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1100),
    [sym_begin_group] = ACTIONS(1100),
    [sym_math_shift] = ACTIONS(1100),
    [sym_alignment_tab] = ACTIONS(1100),
    [sym_parameter_char] = ACTIONS(1100),
    [sym_superscript] = ACTIONS(1100),
    [sym_subscript] = ACTIONS(1100),
    [sym_active_char] = ACTIONS(1100),
    [sym_text] = ACTIONS(1100),
  },
  [541] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1102),
  },
  [542] = {
    [ts_builtin_sym_end] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_math_shift] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_active_char] = ACTIONS(933),
    [sym_text] = ACTIONS(933),
  },
  [543] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(529),
  },
  [544] = {
    [anon_sym_LBRACK] = ACTIONS(1104),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1104),
    [sym_begin_group] = ACTIONS(1104),
    [sym_alignment_tab] = ACTIONS(1104),
    [sym_parameter_char] = ACTIONS(1104),
    [sym_superscript] = ACTIONS(1104),
    [sym_subscript] = ACTIONS(1104),
    [sym_active_char] = ACTIONS(1104),
    [sym_text] = ACTIONS(1104),
  },
  [545] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1106),
  },
  [546] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1108),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1110),
    [sym__end_of_line] = ACTIONS(1110),
  },
  [547] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1112),
  },
  [548] = {
    [anon_sym_LBRACK] = ACTIONS(961),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(961),
    [sym_begin_group] = ACTIONS(961),
    [sym_end_group] = ACTIONS(961),
    [sym_math_shift] = ACTIONS(961),
    [sym_alignment_tab] = ACTIONS(961),
    [sym_parameter_char] = ACTIONS(961),
    [sym_superscript] = ACTIONS(961),
    [sym_subscript] = ACTIONS(961),
    [sym_active_char] = ACTIONS(961),
    [sym_text] = ACTIONS(961),
  },
  [549] = {
    [anon_sym_LBRACK] = ACTIONS(973),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(973),
    [sym_begin_group] = ACTIONS(973),
    [sym_end_group] = ACTIONS(973),
    [sym_math_shift] = ACTIONS(973),
    [sym_alignment_tab] = ACTIONS(973),
    [sym_parameter_char] = ACTIONS(973),
    [sym_superscript] = ACTIONS(973),
    [sym_subscript] = ACTIONS(973),
    [sym_active_char] = ACTIONS(973),
    [sym_text] = ACTIONS(973),
  },
  [550] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1114),
  },
  [551] = {
    [anon_sym_LBRACK] = ACTIONS(1013),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1013),
    [sym_begin_group] = ACTIONS(1013),
    [sym_end_group] = ACTIONS(1013),
    [sym_math_shift] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(1013),
    [sym_parameter_char] = ACTIONS(1013),
    [sym_superscript] = ACTIONS(1013),
    [sym_subscript] = ACTIONS(1013),
    [sym_active_char] = ACTIONS(1013),
    [sym_text] = ACTIONS(1013),
  },
  [552] = {
    [anon_sym_LBRACK] = ACTIONS(1044),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1044),
    [sym_begin_group] = ACTIONS(1044),
    [sym_end_group] = ACTIONS(1044),
    [sym_math_shift] = ACTIONS(1044),
    [sym_alignment_tab] = ACTIONS(1044),
    [sym_parameter_char] = ACTIONS(1044),
    [sym_superscript] = ACTIONS(1044),
    [sym_subscript] = ACTIONS(1044),
    [sym_active_char] = ACTIONS(1044),
    [sym_text] = ACTIONS(1044),
  },
  [553] = {
    [anon_sym_LBRACK] = ACTIONS(1049),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_end_group] = ACTIONS(1049),
    [sym_math_shift] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1049),
  },
  [554] = {
    [anon_sym_LBRACK] = ACTIONS(1051),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1051),
    [sym_begin_group] = ACTIONS(1051),
    [sym_end_group] = ACTIONS(1051),
    [sym_math_shift] = ACTIONS(1051),
    [sym_alignment_tab] = ACTIONS(1051),
    [sym_parameter_char] = ACTIONS(1051),
    [sym_superscript] = ACTIONS(1051),
    [sym_subscript] = ACTIONS(1051),
    [sym_active_char] = ACTIONS(1051),
    [sym_text] = ACTIONS(1051),
  },
  [555] = {
    [anon_sym_LBRACK] = ACTIONS(1053),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [556] = {
    [anon_sym_LBRACK] = ACTIONS(1055),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [557] = {
    [sym_text_group_at] = STATE(599),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [558] = {
    [anon_sym_LBRACK] = ACTIONS(1067),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [559] = {
    [sym_text_group_at] = STATE(600),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [560] = {
    [anon_sym_LBRACK] = ACTIONS(1069),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1069),
    [sym_begin_group] = ACTIONS(1069),
    [sym_end_group] = ACTIONS(1069),
    [sym_math_shift] = ACTIONS(1069),
    [sym_alignment_tab] = ACTIONS(1069),
    [sym_parameter_char] = ACTIONS(1069),
    [sym_superscript] = ACTIONS(1069),
    [sym_subscript] = ACTIONS(1069),
    [sym_active_char] = ACTIONS(1069),
    [sym_text] = ACTIONS(1069),
  },
  [561] = {
    [anon_sym_LBRACK] = ACTIONS(1071),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1071),
    [sym_begin_group] = ACTIONS(1071),
    [sym_end_group] = ACTIONS(1071),
    [sym_math_shift] = ACTIONS(1071),
    [sym_alignment_tab] = ACTIONS(1071),
    [sym_parameter_char] = ACTIONS(1071),
    [sym_superscript] = ACTIONS(1071),
    [sym_subscript] = ACTIONS(1071),
    [sym_active_char] = ACTIONS(1071),
    [sym_text] = ACTIONS(1071),
  },
  [562] = {
    [anon_sym_LBRACK] = ACTIONS(999),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(999),
    [sym_begin_group] = ACTIONS(999),
    [sym_end_group] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(999),
    [sym_parameter_char] = ACTIONS(999),
    [sym_superscript] = ACTIONS(999),
    [sym_subscript] = ACTIONS(999),
    [sym_active_char] = ACTIONS(999),
    [sym_text] = ACTIONS(999),
  },
  [563] = {
    [sym__common] = STATE(571),
    [sym__math_mode_common] = STATE(571),
    [sym__math_mode_at] = STATE(571),
    [sym_parameter] = STATE(571),
    [sym_math_env_at] = STATE(571),
    [sym_tag_at] = STATE(571),
    [sym_tag_token] = STATE(478),
    [sym_escaped] = STATE(571),
    [sym_begin] = STATE(479),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(571),
    [sym_include_token] = STATE(312),
    [sym_storage] = STATE(571),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(571),
    [sym_catcode_token] = STATE(68),
    [sym_math_group_at] = STATE(571),
    [sym_opt_math_group_at] = STATE(571),
    [sym_token_at] = STATE(571),
    [sym_begin_opt] = STATE(480),
    [aux_sym_math_mode_at_repeat1] = STATE(571),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(1116),
    [sym_alignment_tab] = ACTIONS(1009),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(1009),
    [sym_subscript] = ACTIONS(1009),
    [sym_active_char] = ACTIONS(1009),
    [sym_text] = ACTIONS(1009),
  },
  [564] = {
    [sym__common] = STATE(575),
    [sym__text_mode_common] = STATE(575),
    [sym_inline_verbatim] = STATE(575),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(575),
    [sym_text_mode_at] = STATE(603),
    [sym_parameter] = STATE(575),
    [sym_text_env_at] = STATE(575),
    [sym__display_math_at] = STATE(575),
    [sym_tex_display_math_at] = STATE(575),
    [sym_latex_display_math_at] = STATE(575),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(575),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(575),
    [sym_tex_inline_math_at] = STATE(575),
    [sym_latex_inline_math_at] = STATE(575),
    [sym_inline_math_env_at] = STATE(575),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(575),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(575),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(575),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(575),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(575),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(575),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(575),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(575),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(575),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(575),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(575),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(575),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(575),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(575),
    [sym_opt_text_group_at] = STATE(575),
    [sym_token_at] = STATE(575),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(575),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(1118),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1017),
  },
  [565] = {
    [anon_sym_LBRACK] = ACTIONS(1019),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1019),
    [sym_begin_group] = ACTIONS(1019),
    [sym_end_group] = ACTIONS(1019),
    [sym_alignment_tab] = ACTIONS(1019),
    [sym_parameter_char] = ACTIONS(1019),
    [sym_superscript] = ACTIONS(1019),
    [sym_subscript] = ACTIONS(1019),
    [sym_active_char] = ACTIONS(1019),
    [sym_text] = ACTIONS(1019),
  },
  [566] = {
    [anon_sym_LBRACK] = ACTIONS(1021),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1021),
    [sym_begin_group] = ACTIONS(1021),
    [sym_end_group] = ACTIONS(1021),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(1021),
    [sym_superscript] = ACTIONS(1021),
    [sym_subscript] = ACTIONS(1021),
    [sym_active_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1021),
  },
  [567] = {
    [sym__common] = STATE(493),
    [sym__math_mode_common] = STATE(493),
    [sym__math_mode_at] = STATE(493),
    [sym_parameter] = STATE(493),
    [sym_math_env_at] = STATE(493),
    [sym_tag_at] = STATE(493),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(493),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_end] = STATE(604),
    [sym_end_token] = STATE(195),
    [sym_include_at] = STATE(493),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(493),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(493),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(493),
    [sym_opt_math_group_at] = STATE(493),
    [sym_token_at] = STATE(493),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(493),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(774),
    [sym_active_char] = ACTIONS(774),
    [sym_text] = ACTIONS(774),
  },
  [568] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [569] = {
    [sym__common] = STATE(578),
    [sym__math_mode_common] = STATE(578),
    [sym__math_mode_at] = STATE(578),
    [sym_parameter] = STATE(578),
    [sym_math_env_at] = STATE(578),
    [sym_tag_at] = STATE(578),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(578),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(578),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(578),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(578),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(578),
    [sym_opt_math_group_at] = STATE(578),
    [sym_token_at] = STATE(578),
    [sym_begin_opt] = STATE(327),
    [sym_end_opt] = STATE(605),
    [aux_sym_math_mode_at_repeat1] = STATE(578),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(399),
    [sym_begin_group] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1025),
  },
  [570] = {
    [anon_sym_LBRACK] = ACTIONS(1120),
    [anon_sym_RBRACK] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_math_shift] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_active_char] = ACTIONS(1120),
    [sym_text] = ACTIONS(1120),
  },
  [571] = {
    [sym__common] = STATE(571),
    [sym__math_mode_common] = STATE(571),
    [sym__math_mode_at] = STATE(571),
    [sym_parameter] = STATE(571),
    [sym_math_env_at] = STATE(571),
    [sym_tag_at] = STATE(571),
    [sym_tag_token] = STATE(478),
    [sym_escaped] = STATE(571),
    [sym_begin] = STATE(479),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(571),
    [sym_include_token] = STATE(312),
    [sym_storage] = STATE(571),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(571),
    [sym_catcode_token] = STATE(68),
    [sym_math_group_at] = STATE(571),
    [sym_opt_math_group_at] = STATE(571),
    [sym_token_at] = STATE(571),
    [sym_begin_opt] = STATE(480),
    [aux_sym_math_mode_at_repeat1] = STATE(571),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1122),
    [sym_begin_group] = ACTIONS(1125),
    [sym_end_group] = ACTIONS(1036),
    [sym_alignment_tab] = ACTIONS(1128),
    [sym_parameter_char] = ACTIONS(1131),
    [sym_superscript] = ACTIONS(1128),
    [sym_subscript] = ACTIONS(1128),
    [sym_active_char] = ACTIONS(1128),
    [sym_text] = ACTIONS(1128),
  },
  [572] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1134),
  },
  [573] = {
    [anon_sym_LBRACK] = ACTIONS(1136),
    [anon_sym_RBRACK] = ACTIONS(1136),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1136),
    [sym_begin_group] = ACTIONS(1136),
    [sym_math_shift] = ACTIONS(1136),
    [sym_alignment_tab] = ACTIONS(1136),
    [sym_parameter_char] = ACTIONS(1136),
    [sym_superscript] = ACTIONS(1136),
    [sym_subscript] = ACTIONS(1136),
    [sym_active_char] = ACTIONS(1136),
    [sym_text] = ACTIONS(1136),
  },
  [574] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1138),
  },
  [575] = {
    [sym__common] = STATE(474),
    [sym__text_mode_common] = STATE(474),
    [sym_inline_verbatim] = STATE(474),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(474),
    [sym_parameter] = STATE(474),
    [sym_text_env_at] = STATE(474),
    [sym__display_math_at] = STATE(474),
    [sym_tex_display_math_at] = STATE(474),
    [sym_latex_display_math_at] = STATE(474),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(474),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(474),
    [sym_tex_inline_math_at] = STATE(474),
    [sym_latex_inline_math_at] = STATE(474),
    [sym_inline_math_env_at] = STATE(474),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(474),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(474),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(474),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(474),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(474),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(474),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(474),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(474),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(474),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(474),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(474),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(474),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(474),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(474),
    [sym_opt_text_group_at] = STATE(474),
    [sym_token_at] = STATE(474),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(474),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(423),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [576] = {
    [anon_sym_LBRACK] = ACTIONS(1140),
    [anon_sym_RBRACK] = ACTIONS(1140),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1140),
    [sym_begin_group] = ACTIONS(1140),
    [sym_math_shift] = ACTIONS(1140),
    [sym_alignment_tab] = ACTIONS(1140),
    [sym_parameter_char] = ACTIONS(1140),
    [sym_superscript] = ACTIONS(1140),
    [sym_subscript] = ACTIONS(1140),
    [sym_active_char] = ACTIONS(1140),
    [sym_text] = ACTIONS(1140),
  },
  [577] = {
    [anon_sym_LBRACK] = ACTIONS(1142),
    [anon_sym_RBRACK] = ACTIONS(1142),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1142),
    [sym_begin_group] = ACTIONS(1142),
    [sym_math_shift] = ACTIONS(1142),
    [sym_alignment_tab] = ACTIONS(1142),
    [sym_parameter_char] = ACTIONS(1142),
    [sym_superscript] = ACTIONS(1142),
    [sym_subscript] = ACTIONS(1142),
    [sym_active_char] = ACTIONS(1142),
    [sym_text] = ACTIONS(1142),
  },
  [578] = {
    [sym__common] = STATE(578),
    [sym__math_mode_common] = STATE(578),
    [sym__math_mode_at] = STATE(578),
    [sym_parameter] = STATE(578),
    [sym_math_env_at] = STATE(578),
    [sym_tag_at] = STATE(578),
    [sym_tag_token] = STATE(325),
    [sym_escaped] = STATE(578),
    [sym_begin] = STATE(326),
    [sym_begin_token] = STATE(85),
    [sym_include_at] = STATE(578),
    [sym_include_token] = STATE(145),
    [sym_storage] = STATE(578),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(578),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(578),
    [sym_opt_math_group_at] = STATE(578),
    [sym_token_at] = STATE(578),
    [sym_begin_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(578),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(1027),
    [anon_sym_RBRACK] = ACTIONS(1036),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1030),
    [sym_begin_group] = ACTIONS(1033),
    [sym_alignment_tab] = ACTIONS(1144),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1144),
    [sym_subscript] = ACTIONS(1144),
    [sym_active_char] = ACTIONS(1144),
    [sym_text] = ACTIONS(1144),
  },
  [579] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(736),
  },
  [580] = {
    [sym__common] = STATE(474),
    [sym__text_mode_common] = STATE(474),
    [sym_inline_verbatim] = STATE(474),
    [sym_verb_token] = STATE(56),
    [sym__text_mode_at] = STATE(474),
    [sym_parameter] = STATE(474),
    [sym_text_env_at] = STATE(474),
    [sym__display_math_at] = STATE(474),
    [sym_tex_display_math_at] = STATE(474),
    [sym_latex_display_math_at] = STATE(474),
    [sym_begin_display_math] = STATE(307),
    [sym_begin_inline_math] = STATE(308),
    [sym_display_math_env_at] = STATE(474),
    [sym_display_math_begin_at] = STATE(309),
    [sym__inline_math_at] = STATE(474),
    [sym_tex_inline_math_at] = STATE(474),
    [sym_latex_inline_math_at] = STATE(474),
    [sym_inline_math_env_at] = STATE(474),
    [sym_inline_math_begin] = STATE(310),
    [sym_verbatim_env] = STATE(474),
    [sym_verbatim_begin] = STATE(61),
    [sym_escaped] = STATE(474),
    [sym_begin] = STATE(311),
    [sym_begin_token] = STATE(144),
    [sym_documentclass] = STATE(474),
    [sym_documentclass_token] = STATE(63),
    [sym_usepackage] = STATE(474),
    [sym_usepackage_token] = STATE(64),
    [sym_include_at] = STATE(474),
    [sym_include_token] = STATE(312),
    [sym_section_at] = STATE(474),
    [sym_section_token] = STATE(313),
    [sym_storage] = STATE(474),
    [sym_storage_token] = STATE(67),
    [sym_catcode] = STATE(474),
    [sym_catcode_token] = STATE(68),
    [sym_emph_at] = STATE(474),
    [sym_emph_token] = STATE(314),
    [sym_footnote_at] = STATE(474),
    [sym_footnote_token] = STATE(315),
    [sym_textbf_at] = STATE(474),
    [sym_textbf_token] = STATE(316),
    [sym_textit_at] = STATE(474),
    [sym_textit_token] = STATE(317),
    [sym_texttt_at] = STATE(474),
    [sym_texttt_token] = STATE(318),
    [sym_text_group_at] = STATE(474),
    [sym_opt_text_group_at] = STATE(474),
    [sym_token_at] = STATE(474),
    [sym_begin_opt] = STATE(319),
    [aux_sym_text_mode_at_repeat1] = STATE(474),
    [aux_sym_parameter_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(1147),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(746),
    [sym_text] = ACTIONS(746),
  },
  [581] = {
    [anon_sym_LBRACK] = ACTIONS(1149),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1149),
    [sym_begin_group] = ACTIONS(1149),
    [sym_alignment_tab] = ACTIONS(1149),
    [sym_parameter_char] = ACTIONS(1149),
    [sym_superscript] = ACTIONS(1149),
    [sym_subscript] = ACTIONS(1149),
    [sym_active_char] = ACTIONS(1149),
    [sym_text] = ACTIONS(1149),
  },
  [582] = {
    [sym_text_group_at] = STATE(610),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(778),
    [sym__end_of_line] = ACTIONS(1151),
  },
  [583] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1151),
  },
  [584] = {
    [anon_sym_LBRACK] = ACTIONS(1153),
    [anon_sym_RBRACK] = ACTIONS(1153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1153),
    [sym_begin_group] = ACTIONS(1153),
    [sym_math_shift] = ACTIONS(1153),
    [sym_alignment_tab] = ACTIONS(1153),
    [sym_parameter_char] = ACTIONS(1153),
    [sym_superscript] = ACTIONS(1153),
    [sym_subscript] = ACTIONS(1153),
    [sym_active_char] = ACTIONS(1153),
    [sym_text] = ACTIONS(1153),
  },
  [585] = {
    [sym__whitespace] = ACTIONS(1071),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(1071),
    [sym__end_of_line] = ACTIONS(1071),
  },
  [586] = {
    [anon_sym_LBRACK] = ACTIONS(1155),
    [anon_sym_RBRACK] = ACTIONS(1155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1155),
    [sym_begin_group] = ACTIONS(1155),
    [sym_math_shift] = ACTIONS(1155),
    [sym_alignment_tab] = ACTIONS(1155),
    [sym_parameter_char] = ACTIONS(1155),
    [sym_superscript] = ACTIONS(1155),
    [sym_subscript] = ACTIONS(1155),
    [sym_active_char] = ACTIONS(1155),
    [sym_text] = ACTIONS(1155),
  },
  [587] = {
    [anon_sym_LBRACK] = ACTIONS(1092),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1092),
    [sym_begin_group] = ACTIONS(1092),
    [sym_end_group] = ACTIONS(1092),
    [sym_math_shift] = ACTIONS(1092),
    [sym_alignment_tab] = ACTIONS(1092),
    [sym_parameter_char] = ACTIONS(1092),
    [sym_superscript] = ACTIONS(1092),
    [sym_subscript] = ACTIONS(1092),
    [sym_active_char] = ACTIONS(1092),
    [sym_text] = ACTIONS(1092),
  },
  [588] = {
    [anon_sym_LBRACK] = ACTIONS(1098),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1098),
    [sym_begin_group] = ACTIONS(1098),
    [sym_end_group] = ACTIONS(1098),
    [sym_math_shift] = ACTIONS(1098),
    [sym_alignment_tab] = ACTIONS(1098),
    [sym_parameter_char] = ACTIONS(1098),
    [sym_superscript] = ACTIONS(1098),
    [sym_subscript] = ACTIONS(1098),
    [sym_active_char] = ACTIONS(1098),
    [sym_text] = ACTIONS(1098),
  },
  [589] = {
    [anon_sym_LBRACK] = ACTIONS(1100),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1100),
    [sym_begin_group] = ACTIONS(1100),
    [sym_end_group] = ACTIONS(1100),
    [sym_math_shift] = ACTIONS(1100),
    [sym_alignment_tab] = ACTIONS(1100),
    [sym_parameter_char] = ACTIONS(1100),
    [sym_superscript] = ACTIONS(1100),
    [sym_subscript] = ACTIONS(1100),
    [sym_active_char] = ACTIONS(1100),
    [sym_text] = ACTIONS(1100),
  },
  [590] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1157),
  },
  [591] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1159),
  },
  [592] = {
    [anon_sym_LBRACK] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_end_group] = ACTIONS(933),
    [sym_math_shift] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_active_char] = ACTIONS(933),
    [sym_text] = ACTIONS(933),
  },
  [593] = {
    [anon_sym_LBRACK] = ACTIONS(1094),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [594] = {
    [sym_implicit_math_shift] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(935),
    [sym_begin_group] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(935),
    [sym_alignment_tab] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(935),
    [sym_superscript] = ACTIONS(935),
    [sym_subscript] = ACTIONS(935),
    [sym_active_char] = ACTIONS(935),
    [sym_text] = ACTIONS(935),
  },
  [595] = {
    [ts_builtin_sym_end] = ACTIONS(929),
    [anon_sym_LBRACK] = ACTIONS(929),
    [anon_sym_RBRACK] = ACTIONS(929),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(929),
    [sym_begin_group] = ACTIONS(929),
    [sym_math_shift] = ACTIONS(929),
    [sym_alignment_tab] = ACTIONS(929),
    [sym_parameter_char] = ACTIONS(929),
    [sym_superscript] = ACTIONS(929),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(929),
    [sym_text] = ACTIONS(929),
  },
  [596] = {
    [anon_sym_LBRACK] = ACTIONS(1161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1161),
    [sym_begin_group] = ACTIONS(1161),
    [sym_alignment_tab] = ACTIONS(1161),
    [sym_parameter_char] = ACTIONS(1161),
    [sym_superscript] = ACTIONS(1161),
    [sym_subscript] = ACTIONS(1161),
    [sym_active_char] = ACTIONS(1161),
    [sym_text] = ACTIONS(1161),
  },
  [597] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1165),
    [sym__end_of_line] = ACTIONS(1165),
  },
  [598] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(1167),
  },
  [599] = {
    [anon_sym_LBRACK] = ACTIONS(1153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1153),
    [sym_begin_group] = ACTIONS(1153),
    [sym_end_group] = ACTIONS(1153),
    [sym_math_shift] = ACTIONS(1153),
    [sym_alignment_tab] = ACTIONS(1153),
    [sym_parameter_char] = ACTIONS(1153),
    [sym_superscript] = ACTIONS(1153),
    [sym_subscript] = ACTIONS(1153),
    [sym_active_char] = ACTIONS(1153),
    [sym_text] = ACTIONS(1153),
  },
  [600] = {
    [anon_sym_LBRACK] = ACTIONS(1155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1155),
    [sym_begin_group] = ACTIONS(1155),
    [sym_end_group] = ACTIONS(1155),
    [sym_math_shift] = ACTIONS(1155),
    [sym_alignment_tab] = ACTIONS(1155),
    [sym_parameter_char] = ACTIONS(1155),
    [sym_superscript] = ACTIONS(1155),
    [sym_subscript] = ACTIONS(1155),
    [sym_active_char] = ACTIONS(1155),
    [sym_text] = ACTIONS(1155),
  },
  [601] = {
    [anon_sym_LBRACK] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [602] = {
    [anon_sym_LBRACK] = ACTIONS(1136),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1136),
    [sym_begin_group] = ACTIONS(1136),
    [sym_end_group] = ACTIONS(1136),
    [sym_alignment_tab] = ACTIONS(1136),
    [sym_parameter_char] = ACTIONS(1136),
    [sym_superscript] = ACTIONS(1136),
    [sym_subscript] = ACTIONS(1136),
    [sym_active_char] = ACTIONS(1136),
    [sym_text] = ACTIONS(1136),
  },
  [603] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(1169),
  },
  [604] = {
    [anon_sym_LBRACK] = ACTIONS(1140),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1140),
    [sym_begin_group] = ACTIONS(1140),
    [sym_end_group] = ACTIONS(1140),
    [sym_alignment_tab] = ACTIONS(1140),
    [sym_parameter_char] = ACTIONS(1140),
    [sym_superscript] = ACTIONS(1140),
    [sym_subscript] = ACTIONS(1140),
    [sym_active_char] = ACTIONS(1140),
    [sym_text] = ACTIONS(1140),
  },
  [605] = {
    [anon_sym_LBRACK] = ACTIONS(1142),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1142),
    [sym_begin_group] = ACTIONS(1142),
    [sym_end_group] = ACTIONS(1142),
    [sym_alignment_tab] = ACTIONS(1142),
    [sym_parameter_char] = ACTIONS(1142),
    [sym_superscript] = ACTIONS(1142),
    [sym_subscript] = ACTIONS(1142),
    [sym_active_char] = ACTIONS(1142),
    [sym_text] = ACTIONS(1142),
  },
  [606] = {
    [anon_sym_LBRACK] = ACTIONS(1171),
    [anon_sym_RBRACK] = ACTIONS(1171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1171),
    [sym_math_shift] = ACTIONS(1171),
    [sym_alignment_tab] = ACTIONS(1171),
    [sym_parameter_char] = ACTIONS(1171),
    [sym_superscript] = ACTIONS(1171),
    [sym_subscript] = ACTIONS(1171),
    [sym_active_char] = ACTIONS(1171),
    [sym_text] = ACTIONS(1171),
  },
  [607] = {
    [anon_sym_LBRACK] = ACTIONS(1173),
    [anon_sym_RBRACK] = ACTIONS(1173),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1173),
    [sym_begin_group] = ACTIONS(1173),
    [sym_math_shift] = ACTIONS(1173),
    [sym_alignment_tab] = ACTIONS(1173),
    [sym_parameter_char] = ACTIONS(1173),
    [sym_superscript] = ACTIONS(1173),
    [sym_subscript] = ACTIONS(1173),
    [sym_active_char] = ACTIONS(1173),
    [sym_text] = ACTIONS(1173),
  },
  [608] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(973),
  },
  [609] = {
    [anon_sym_LBRACK] = ACTIONS(1175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1175),
    [sym_begin_group] = ACTIONS(1175),
    [sym_alignment_tab] = ACTIONS(1175),
    [sym_parameter_char] = ACTIONS(1175),
    [sym_superscript] = ACTIONS(1175),
    [sym_subscript] = ACTIONS(1175),
    [sym_active_char] = ACTIONS(1175),
    [sym_text] = ACTIONS(1175),
  },
  [610] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(1177),
  },
  [611] = {
    [anon_sym_LBRACK] = ACTIONS(929),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(929),
    [sym_begin_group] = ACTIONS(929),
    [sym_end_group] = ACTIONS(929),
    [sym_math_shift] = ACTIONS(929),
    [sym_alignment_tab] = ACTIONS(929),
    [sym_parameter_char] = ACTIONS(929),
    [sym_superscript] = ACTIONS(929),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(929),
    [sym_text] = ACTIONS(929),
  },
  [612] = {
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(931),
    [sym_begin_group] = ACTIONS(931),
    [sym_end_group] = ACTIONS(931),
    [sym_math_shift] = ACTIONS(931),
    [sym_alignment_tab] = ACTIONS(931),
    [sym_parameter_char] = ACTIONS(931),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(931),
    [sym_active_char] = ACTIONS(931),
    [sym_text] = ACTIONS(931),
  },
  [613] = {
    [anon_sym_LBRACK] = ACTIONS(1171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1171),
    [sym_begin_group] = ACTIONS(1171),
    [sym_end_group] = ACTIONS(1171),
    [sym_math_shift] = ACTIONS(1171),
    [sym_alignment_tab] = ACTIONS(1171),
    [sym_parameter_char] = ACTIONS(1171),
    [sym_superscript] = ACTIONS(1171),
    [sym_subscript] = ACTIONS(1171),
    [sym_active_char] = ACTIONS(1171),
    [sym_text] = ACTIONS(1171),
  },
  [614] = {
    [anon_sym_LBRACK] = ACTIONS(1173),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1173),
    [sym_begin_group] = ACTIONS(1173),
    [sym_end_group] = ACTIONS(1173),
    [sym_alignment_tab] = ACTIONS(1173),
    [sym_parameter_char] = ACTIONS(1173),
    [sym_superscript] = ACTIONS(1173),
    [sym_subscript] = ACTIONS(1173),
    [sym_active_char] = ACTIONS(1173),
    [sym_text] = ACTIONS(1173),
  },
  [615] = {
    [anon_sym_LBRACK] = ACTIONS(1179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(1179),
    [sym_begin_group] = ACTIONS(1179),
    [sym_alignment_tab] = ACTIONS(1179),
    [sym_parameter_char] = ACTIONS(1179),
    [sym_superscript] = ACTIONS(1179),
    [sym_subscript] = ACTIONS(1179),
    [sym_active_char] = ACTIONS(1179),
    [sym_text] = ACTIONS(1179),
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
  [71] = {.count = 1, .reusable = true}, SHIFT(76),
  [73] = {.count = 1, .reusable = true}, SHIFT(77),
  [75] = {.count = 1, .reusable = true}, SHIFT(55),
  [77] = {.count = 1, .reusable = true}, SHIFT(78),
  [79] = {.count = 1, .reusable = true}, SHIFT(79),
  [81] = {.count = 1, .reusable = true}, SHIFT(80),
  [83] = {.count = 1, .reusable = true}, SHIFT(81),
  [85] = {.count = 1, .reusable = true}, SHIFT(90),
  [87] = {.count = 1, .reusable = true}, SHIFT(91),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_common, 1, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [93] = {.count = 1, .reusable = true}, SHIFT(92),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(93),
  [99] = {.count = 1, .reusable = true}, SHIFT(94),
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
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 2),
  [145] = {.count = 1, .reusable = false}, SHIFT(162),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [151] = {.count = 1, .reusable = false}, SHIFT(163),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(164),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(165),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(166),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(167),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(168),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(169),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(170),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(171),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(172),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(173),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(174),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(175),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [209] = {.count = 1, .reusable = false}, SHIFT(176),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [217] = {.count = 1, .reusable = false}, SHIFT(177),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [221] = {.count = 1, .reusable = false}, SHIFT(178),
  [223] = {.count = 1, .reusable = false}, SHIFT(179),
  [225] = {.count = 1, .reusable = false}, SHIFT(180),
  [227] = {.count = 1, .reusable = true}, SHIFT(181),
  [229] = {.count = 1, .reusable = true}, SHIFT(182),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [233] = {.count = 1, .reusable = true}, SHIFT(183),
  [235] = {.count = 1, .reusable = true}, SHIFT(184),
  [237] = {.count = 1, .reusable = true}, SHIFT(186),
  [239] = {.count = 1, .reusable = true}, SHIFT(196),
  [241] = {.count = 1, .reusable = true}, SHIFT(197),
  [243] = {.count = 1, .reusable = true}, SHIFT(212),
  [245] = {.count = 1, .reusable = true}, SHIFT(216),
  [247] = {.count = 1, .reusable = true}, SHIFT(218),
  [249] = {.count = 1, .reusable = true}, SHIFT(219),
  [251] = {.count = 1, .reusable = true}, SHIFT(220),
  [253] = {.count = 1, .reusable = true}, SHIFT(221),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 2),
  [257] = {.count = 1, .reusable = false}, SHIFT(222),
  [259] = {.count = 1, .reusable = false}, SHIFT(223),
  [261] = {.count = 1, .reusable = false}, SHIFT(224),
  [263] = {.count = 1, .reusable = false}, SHIFT(225),
  [265] = {.count = 1, .reusable = true}, SHIFT(226),
  [267] = {.count = 1, .reusable = true}, SHIFT(227),
  [269] = {.count = 1, .reusable = true}, SHIFT(228),
  [271] = {.count = 1, .reusable = true}, SHIFT(232),
  [273] = {.count = 1, .reusable = true}, SHIFT(234),
  [275] = {.count = 1, .reusable = true}, SHIFT(235),
  [277] = {.count = 1, .reusable = true}, SHIFT(237),
  [279] = {.count = 1, .reusable = true}, SHIFT(240),
  [281] = {.count = 1, .reusable = true}, SHIFT(241),
  [283] = {.count = 1, .reusable = true}, SHIFT(244),
  [285] = {.count = 1, .reusable = true}, SHIFT(246),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [289] = {.count = 1, .reusable = true}, SHIFT(247),
  [291] = {.count = 1, .reusable = true}, SHIFT(248),
  [293] = {.count = 1, .reusable = true}, SHIFT(249),
  [295] = {.count = 1, .reusable = true}, SHIFT(250),
  [297] = {.count = 1, .reusable = true}, SHIFT(251),
  [299] = {.count = 1, .reusable = true}, SHIFT(252),
  [301] = {.count = 1, .reusable = true}, SHIFT(254),
  [303] = {.count = 1, .reusable = true}, SHIFT(257),
  [305] = {.count = 1, .reusable = true}, SHIFT(259),
  [307] = {.count = 1, .reusable = true}, SHIFT(260),
  [309] = {.count = 1, .reusable = true}, SHIFT(261),
  [311] = {.count = 1, .reusable = true}, SHIFT(267),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(269),
  [317] = {.count = 1, .reusable = false}, SHIFT(272),
  [319] = {.count = 1, .reusable = true}, SHIFT(271),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(273),
  [325] = {.count = 1, .reusable = false}, SHIFT(267),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(276),
  [331] = {.count = 1, .reusable = false}, SHIFT(277),
  [333] = {.count = 1, .reusable = false}, SHIFT(278),
  [335] = {.count = 1, .reusable = false}, SHIFT(279),
  [337] = {.count = 1, .reusable = false}, SHIFT(280),
  [339] = {.count = 1, .reusable = true}, SHIFT(281),
  [341] = {.count = 1, .reusable = true}, SHIFT(282),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [345] = {.count = 1, .reusable = true}, SHIFT(285),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [349] = {.count = 1, .reusable = true}, SHIFT(280),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [353] = {.count = 1, .reusable = true}, SHIFT(288),
  [355] = {.count = 1, .reusable = true}, SHIFT(290),
  [357] = {.count = 1, .reusable = true}, SHIFT(292),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [361] = {.count = 1, .reusable = true}, SHIFT(293),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(295),
  [369] = {.count = 1, .reusable = false}, SHIFT(297),
  [371] = {.count = 1, .reusable = true}, SHIFT(298),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(299),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(301),
  [387] = {.count = 1, .reusable = false}, SHIFT(302),
  [389] = {.count = 1, .reusable = true}, SHIFT(303),
  [391] = {.count = 1, .reusable = true}, SHIFT(304),
  [393] = {.count = 1, .reusable = true}, SHIFT(305),
  [395] = {.count = 1, .reusable = true}, SHIFT(306),
  [397] = {.count = 1, .reusable = true}, SHIFT(320),
  [399] = {.count = 1, .reusable = true}, SHIFT(321),
  [401] = {.count = 1, .reusable = true}, SHIFT(322),
  [403] = {.count = 1, .reusable = true}, SHIFT(323),
  [405] = {.count = 1, .reusable = true}, SHIFT(328),
  [407] = {.count = 1, .reusable = true}, SHIFT(329),
  [409] = {.count = 1, .reusable = true}, SHIFT(332),
  [411] = {.count = 1, .reusable = true}, SHIFT(336),
  [413] = {.count = 1, .reusable = true}, SHIFT(338),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [419] = {.count = 1, .reusable = true}, SHIFT(350),
  [421] = {.count = 1, .reusable = true}, SHIFT(352),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [425] = {.count = 1, .reusable = true}, SHIFT(353),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(355),
  [433] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(159),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(161),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [475] = {.count = 1, .reusable = true}, SHIFT(356),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(357),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [497] = {.count = 1, .reusable = false}, SHIFT(358),
  [499] = {.count = 1, .reusable = false}, SHIFT(359),
  [501] = {.count = 1, .reusable = true}, SHIFT(360),
  [503] = {.count = 1, .reusable = true}, SHIFT(362),
  [505] = {.count = 1, .reusable = true}, SHIFT(363),
  [507] = {.count = 1, .reusable = true}, SHIFT(364),
  [509] = {.count = 1, .reusable = true}, SHIFT(366),
  [511] = {.count = 1, .reusable = true}, SHIFT(373),
  [513] = {.count = 1, .reusable = true}, SHIFT(377),
  [515] = {.count = 1, .reusable = true}, SHIFT(378),
  [517] = {.count = 1, .reusable = true}, SHIFT(380),
  [519] = {.count = 1, .reusable = true}, SHIFT(382),
  [521] = {.count = 1, .reusable = true}, SHIFT(384),
  [523] = {.count = 1, .reusable = true}, SHIFT(385),
  [525] = {.count = 1, .reusable = false}, SHIFT(387),
  [527] = {.count = 1, .reusable = true}, SHIFT(388),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(51),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(52),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(54),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(220),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(77),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(55),
  [549] = {.count = 1, .reusable = true}, SHIFT(391),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [553] = {.count = 1, .reusable = false}, SHIFT(392),
  [555] = {.count = 1, .reusable = false}, SHIFT(393),
  [557] = {.count = 1, .reusable = true}, SHIFT(394),
  [559] = {.count = 1, .reusable = true}, SHIFT(395),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [563] = {.count = 1, .reusable = true}, SHIFT(396),
  [565] = {.count = 1, .reusable = true}, SHIFT(399),
  [567] = {.count = 1, .reusable = true}, SHIFT(401),
  [569] = {.count = 1, .reusable = true}, SHIFT(402),
  [571] = {.count = 1, .reusable = true}, SHIFT(403),
  [573] = {.count = 1, .reusable = true}, SHIFT(404),
  [575] = {.count = 1, .reusable = true}, SHIFT(405),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [579] = {.count = 1, .reusable = true}, SHIFT(406),
  [581] = {.count = 1, .reusable = true}, SHIFT(408),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [587] = {.count = 1, .reusable = true}, SHIFT(409),
  [589] = {.count = 1, .reusable = true}, SHIFT(412),
  [591] = {.count = 1, .reusable = true}, SHIFT(413),
  [593] = {.count = 1, .reusable = true}, SHIFT(414),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [597] = {.count = 1, .reusable = true}, SHIFT(416),
  [599] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(79),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(80),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(247),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(91),
  [616] = {.count = 1, .reusable = true}, SHIFT(417),
  [618] = {.count = 1, .reusable = true}, SHIFT(418),
  [620] = {.count = 1, .reusable = true}, SHIFT(419),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [624] = {.count = 1, .reusable = true}, SHIFT(420),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(93),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(94),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(260),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [638] = {.count = 1, .reusable = true}, SHIFT(424),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [644] = {.count = 1, .reusable = true}, SHIFT(425),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [648] = {.count = 1, .reusable = true}, SHIFT(427),
  [650] = {.count = 1, .reusable = true}, SHIFT(429),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [656] = {.count = 1, .reusable = true}, SHIFT(430),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [660] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [662] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(272),
  [667] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [669] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(107),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(273),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(276),
  [682] = {.count = 1, .reusable = true}, SHIFT(431),
  [684] = {.count = 1, .reusable = true}, SHIFT(432),
  [686] = {.count = 1, .reusable = true}, SHIFT(433),
  [688] = {.count = 1, .reusable = true}, SHIFT(434),
  [690] = {.count = 1, .reusable = true}, SHIFT(435),
  [692] = {.count = 1, .reusable = true}, SHIFT(436),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [696] = {.count = 1, .reusable = true}, SHIFT(437),
  [698] = {.count = 1, .reusable = true}, SHIFT(438),
  [700] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [704] = {.count = 1, .reusable = true}, SHIFT(440),
  [706] = {.count = 1, .reusable = true}, SHIFT(441),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [714] = {.count = 1, .reusable = true}, SHIFT(447),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [720] = {.count = 1, .reusable = false}, SHIFT(449),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [724] = {.count = 1, .reusable = false}, SHIFT(450),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [730] = {.count = 1, .reusable = false}, SHIFT(451),
  [732] = {.count = 1, .reusable = true}, SHIFT(452),
  [734] = {.count = 1, .reusable = true}, SHIFT(453),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [738] = {.count = 1, .reusable = true}, SHIFT(454),
  [740] = {.count = 1, .reusable = true}, SHIFT(461),
  [742] = {.count = 1, .reusable = true}, SHIFT(472),
  [744] = {.count = 1, .reusable = true}, SHIFT(473),
  [746] = {.count = 1, .reusable = true}, SHIFT(474),
  [748] = {.count = 1, .reusable = true}, SHIFT(475),
  [750] = {.count = 1, .reusable = true}, SHIFT(476),
  [752] = {.count = 1, .reusable = true}, SHIFT(477),
  [754] = {.count = 1, .reusable = true}, SHIFT(481),
  [756] = {.count = 1, .reusable = true}, SHIFT(483),
  [758] = {.count = 1, .reusable = true}, SHIFT(484),
  [760] = {.count = 1, .reusable = true}, SHIFT(486),
  [762] = {.count = 1, .reusable = true}, SHIFT(488),
  [764] = {.count = 1, .reusable = true}, SHIFT(490),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [768] = {.count = 1, .reusable = true}, SHIFT(491),
  [770] = {.count = 1, .reusable = true}, SHIFT(301),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [774] = {.count = 1, .reusable = true}, SHIFT(493),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [778] = {.count = 1, .reusable = true}, SHIFT(498),
  [780] = {.count = 1, .reusable = true}, SHIFT(499),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [786] = {.count = 1, .reusable = true}, SHIFT(502),
  [788] = {.count = 1, .reusable = true}, SHIFT(505),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [794] = {.count = 1, .reusable = true}, SHIFT(506),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [804] = {.count = 1, .reusable = true}, SHIFT(509),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [809] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(350),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(136),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(137),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(353),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(355),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [834] = {.count = 1, .reusable = true}, SHIFT(510),
  [836] = {.count = 1, .reusable = true}, SHIFT(511),
  [838] = {.count = 1, .reusable = true}, SHIFT(512),
  [840] = {.count = 1, .reusable = true}, SHIFT(513),
  [842] = {.count = 1, .reusable = true}, SHIFT(514),
  [844] = {.count = 1, .reusable = true}, SHIFT(515),
  [846] = {.count = 1, .reusable = true}, SHIFT(516),
  [848] = {.count = 1, .reusable = true}, SHIFT(518),
  [850] = {.count = 1, .reusable = true}, SHIFT(520),
  [852] = {.count = 1, .reusable = true}, SHIFT(521),
  [854] = {.count = 1, .reusable = true}, SHIFT(525),
  [856] = {.count = 1, .reusable = false}, SHIFT(527),
  [858] = {.count = 1, .reusable = true}, SHIFT(387),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [862] = {.count = 1, .reusable = true}, SHIFT(528),
  [864] = {.count = 1, .reusable = true}, SHIFT(529),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(226),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(227),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(403),
  [877] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(77),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 4),
  [882] = {.count = 1, .reusable = true}, SHIFT(533),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [886] = {.count = 1, .reusable = true}, SHIFT(534),
  [888] = {.count = 1, .reusable = true}, SHIFT(535),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [892] = {.count = 1, .reusable = true}, SHIFT(536),
  [894] = {.count = 1, .reusable = true}, SHIFT(537),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [898] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(416),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [905] = {.count = 1, .reusable = false}, SHIFT(538),
  [907] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [909] = {.count = 1, .reusable = true}, SHIFT(539),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [913] = {.count = 1, .reusable = false}, SHIFT(540),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [917] = {.count = 1, .reusable = true}, SHIFT(541),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [921] = {.count = 1, .reusable = true}, SHIFT(278),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [927] = {.count = 1, .reusable = true}, SHIFT(542),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [937] = {.count = 1, .reusable = true}, SHIFT(543),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [941] = {.count = 1, .reusable = true}, SHIFT(544),
  [943] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [947] = {.count = 1, .reusable = true}, SHIFT(546),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [961] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [963] = {.count = 1, .reusable = false}, SHIFT(548),
  [965] = {.count = 1, .reusable = true}, SHIFT(549),
  [967] = {.count = 1, .reusable = true}, SHIFT(551),
  [969] = {.count = 1, .reusable = true}, SHIFT(557),
  [971] = {.count = 1, .reusable = true}, SHIFT(559),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [975] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(303),
  [978] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(304),
  [981] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [983] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(306),
  [986] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(474),
  [989] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(77),
  [992] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(55),
  [995] = {.count = 1, .reusable = true}, SHIFT(562),
  [997] = {.count = 1, .reusable = true}, SHIFT(563),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [1001] = {.count = 1, .reusable = true}, SHIFT(564),
  [1003] = {.count = 1, .reusable = true}, SHIFT(567),
  [1005] = {.count = 1, .reusable = true}, SHIFT(569),
  [1007] = {.count = 1, .reusable = true}, SHIFT(570),
  [1009] = {.count = 1, .reusable = true}, SHIFT(571),
  [1011] = {.count = 1, .reusable = true}, SHIFT(572),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [1015] = {.count = 1, .reusable = true}, SHIFT(573),
  [1017] = {.count = 1, .reusable = true}, SHIFT(575),
  [1019] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [1025] = {.count = 1, .reusable = true}, SHIFT(578),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(321),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(322),
  [1036] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [1038] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(491),
  [1041] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(493),
  [1049] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [1051] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [1057] = {.count = 1, .reusable = true}, SHIFT(579),
  [1059] = {.count = 1, .reusable = true}, SHIFT(580),
  [1061] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [1063] = {.count = 1, .reusable = true}, SHIFT(581),
  [1065] = {.count = 1, .reusable = true}, SHIFT(582),
  [1067] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [1069] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [1071] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [1073] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(509),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [1078] = {.count = 1, .reusable = true}, SHIFT(587),
  [1080] = {.count = 1, .reusable = false}, SHIFT(588),
  [1082] = {.count = 1, .reusable = false}, SHIFT(589),
  [1084] = {.count = 1, .reusable = true}, SHIFT(590),
  [1086] = {.count = 1, .reusable = true}, SHIFT(591),
  [1088] = {.count = 1, .reusable = true}, SHIFT(592),
  [1090] = {.count = 1, .reusable = true}, SHIFT(593),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1096] = {.count = 1, .reusable = true}, SHIFT(594),
  [1098] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [1102] = {.count = 1, .reusable = true}, SHIFT(595),
  [1104] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1106] = {.count = 1, .reusable = true}, SHIFT(596),
  [1108] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [1110] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1112] = {.count = 1, .reusable = true}, SHIFT(597),
  [1114] = {.count = 1, .reusable = true}, SHIFT(598),
  [1116] = {.count = 1, .reusable = true}, SHIFT(601),
  [1118] = {.count = 1, .reusable = true}, SHIFT(602),
  [1120] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [1122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(475),
  [1125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(476),
  [1128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(571),
  [1131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(77),
  [1134] = {.count = 1, .reusable = true}, SHIFT(606),
  [1136] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [1138] = {.count = 1, .reusable = true}, SHIFT(607),
  [1140] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [1142] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [1144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(578),
  [1147] = {.count = 1, .reusable = true}, SHIFT(608),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [1151] = {.count = 1, .reusable = true}, SHIFT(609),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [1157] = {.count = 1, .reusable = true}, SHIFT(611),
  [1159] = {.count = 1, .reusable = true}, SHIFT(612),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [1163] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [1165] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [1167] = {.count = 1, .reusable = true}, SHIFT(613),
  [1169] = {.count = 1, .reusable = true}, SHIFT(614),
  [1171] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [1173] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [1175] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [1177] = {.count = 1, .reusable = true}, SHIFT(615),
  [1179] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
