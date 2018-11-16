#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 353
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 4
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_verb = 3,
  anon_sym_STAR = 4,
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
  [anon_sym_verb] = "verb",
  [anon_sym_STAR] = "*",
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
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'd')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 196:
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
        ADVANCE(197);
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
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'm')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 200:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(201);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'd')
        ADVANCE(220);
      if (lookahead == 'e')
        ADVANCE(246);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == 'g')
        ADVANCE(259);
      if (lookahead == 'l')
        ADVANCE(264);
      if (lookahead == 'm')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(288);
      if (lookahead == 'v')
        ADVANCE(291);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(202);
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead == 'l')
        ADVANCE(218);
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
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == 'a')
        ADVANCE(216);
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
      if (lookahead == 't')
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
        ADVANCE(215);
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
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(229);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 's')
        ADVANCE(241);
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
      if (lookahead == 'r')
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
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(217);
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(217);
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
      if (lookahead == 's')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(215);
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
        ADVANCE(217);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
        ADVANCE(217);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(248);
      if (lookahead == 'u')
        ADVANCE(249);
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
      if (lookahead == 'a')
        ADVANCE(221);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
    case 254:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(253);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(217);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(209);
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
      if (lookahead == 'a')
        ADVANCE(274);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead == 'u')
        ADVANCE(281);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(209);
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(217);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(216);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 299:
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
    case 300:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 301:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 302:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead == 'b')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(321);
      if (lookahead == 'd')
        ADVANCE(333);
      if (lookahead == 'e')
        ADVANCE(348);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'k')
        ADVANCE(370);
      if (lookahead == 'm')
        ADVANCE(372);
      if (lookahead == 'p')
        ADVANCE(386);
      if (lookahead == 's')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == 'v')
        ADVANCE(429);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'p')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(322);
      if (lookahead == 'h')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(66);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(334);
      if (lookahead == 'o')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(363);
      if (lookahead == 'p')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(373);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(389);
      if (lookahead == 't')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead == 'u')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(402);
      if (lookahead == 's')
        ADVANCE(405);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead == 'u')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(411);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(413);
      if (lookahead == 'i')
        ADVANCE(415);
      if (lookahead == 't')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(425);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(430);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(431);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(432);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 435:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(54);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(188);
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
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'n')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 437:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 438:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead == 'b')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(321);
      if (lookahead == 'd')
        ADVANCE(333);
      if (lookahead == 'e')
        ADVANCE(348);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'k')
        ADVANCE(370);
      if (lookahead == 'm')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(386);
      if (lookahead == 's')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == 'v')
        ADVANCE(429);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 440:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(441);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'k')
        ADVANCE(370);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(444);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(445);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 446:
      if (lookahead == '%')
        ADVANCE(20);
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
        ADVANCE(40);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead == 'b')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(321);
      if (lookahead == 'd')
        ADVANCE(333);
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'k')
        ADVANCE(370);
      if (lookahead == 'm')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(386);
      if (lookahead == 's')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(409);
      if (lookahead == 'u')
        ADVANCE(419);
      if (lookahead == 'v')
        ADVANCE(429);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(175);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(350);
      if (lookahead == 'n')
        ADVANCE(460);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(461);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 462:
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == 'b')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(441);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'e')
        ADVANCE(463);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'k')
        ADVANCE(370);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(433);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(434);
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
        ADVANCE(349);
      if (lookahead == 'n')
        ADVANCE(460);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
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
  [8] = {.lex_state = 178, .external_lex_state = 2},
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
  [32] = {.lex_state = 180},
  [33] = {.lex_state = 182, .external_lex_state = 2},
  [34] = {.lex_state = 183},
  [35] = {.lex_state = 183},
  [36] = {.lex_state = 177},
  [37] = {.lex_state = 182},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 182},
  [40] = {.lex_state = 182},
  [41] = {.lex_state = 182},
  [42] = {.lex_state = 183},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 182},
  [45] = {.lex_state = 182},
  [46] = {.lex_state = 182},
  [47] = {.lex_state = 182},
  [48] = {.lex_state = 182},
  [49] = {.lex_state = 183},
  [50] = {.lex_state = 183},
  [51] = {.lex_state = 177},
  [52] = {.lex_state = 176},
  [53] = {.lex_state = 185},
  [54] = {.lex_state = 176},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 178, .external_lex_state = 3},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 191},
  [69] = {.lex_state = 177},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 195},
  [73] = {.lex_state = 179},
  [74] = {.lex_state = 196},
  [75] = {.lex_state = 177},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 299},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 299},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 177},
  [85] = {.lex_state = 182},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 177},
  [88] = {.lex_state = 182},
  [89] = {.lex_state = 177},
  [90] = {.lex_state = 177},
  [91] = {.lex_state = 182},
  [92] = {.lex_state = 300},
  [93] = {.lex_state = 301},
  [94] = {.lex_state = 177},
  [95] = {.lex_state = 177},
  [96] = {.lex_state = 182},
  [97] = {.lex_state = 177},
  [98] = {.lex_state = 177},
  [99] = {.lex_state = 177},
  [100] = {.lex_state = 302},
  [101] = {.lex_state = 176},
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
  [117] = {.lex_state = 177},
  [118] = {.lex_state = 177},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 177},
  [122] = {.lex_state = 177},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 177},
  [126] = {.lex_state = 180},
  [127] = {.lex_state = 178, .external_lex_state = 2},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 182},
  [135] = {.lex_state = 182},
  [136] = {.lex_state = 177},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 36},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 177},
  [144] = {.lex_state = 177},
  [145] = {.lex_state = 176},
  [146] = {.lex_state = 182},
  [147] = {.lex_state = 177},
  [148] = {.lex_state = 176},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 177},
  [151] = {.lex_state = 176},
  [152] = {.lex_state = 177},
  [153] = {.lex_state = 435},
  [154] = {.lex_state = 177},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 177},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 178, .external_lex_state = 2},
  [160] = {.lex_state = 38},
  [161] = {.lex_state = 177},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 437},
  [164] = {.lex_state = 177},
  [165] = {.lex_state = 177},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 177},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 182},
  [170] = {.lex_state = 177},
  [171] = {.lex_state = 200},
  [172] = {.lex_state = 177},
  [173] = {.lex_state = 179},
  [174] = {.lex_state = 195},
  [175] = {.lex_state = 179},
  [176] = {.lex_state = 177},
  [177] = {.lex_state = 177},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 176},
  [180] = {.lex_state = 176},
  [181] = {.lex_state = 176},
  [182] = {.lex_state = 176},
  [183] = {.lex_state = 176},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 299},
  [186] = {.lex_state = 299},
  [187] = {.lex_state = 179},
  [188] = {.lex_state = 299},
  [189] = {.lex_state = 299},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 177},
  [192] = {.lex_state = 299},
  [193] = {.lex_state = 299},
  [194] = {.lex_state = 38},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 177},
  [197] = {.lex_state = 36},
  [198] = {.lex_state = 177},
  [199] = {.lex_state = 301},
  [200] = {.lex_state = 180},
  [201] = {.lex_state = 36},
  [202] = {.lex_state = 177},
  [203] = {.lex_state = 183},
  [204] = {.lex_state = 183},
  [205] = {.lex_state = 438},
  [206] = {.lex_state = 177},
  [207] = {.lex_state = 176},
  [208] = {.lex_state = 440},
  [209] = {.lex_state = 176},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 38},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 446},
  [217] = {.lex_state = 177},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 36},
  [222] = {.lex_state = 36},
  [223] = {.lex_state = 458},
  [224] = {.lex_state = 177},
  [225] = {.lex_state = 36},
  [226] = {.lex_state = 299},
  [227] = {.lex_state = 177},
  [228] = {.lex_state = 177},
  [229] = {.lex_state = 182},
  [230] = {.lex_state = 38},
  [231] = {.lex_state = 177},
  [232] = {.lex_state = 177},
  [233] = {.lex_state = 182},
  [234] = {.lex_state = 177},
  [235] = {.lex_state = 177},
  [236] = {.lex_state = 177},
  [237] = {.lex_state = 177},
  [238] = {.lex_state = 38},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 177},
  [241] = {.lex_state = 38},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 182},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 177},
  [246] = {.lex_state = 176},
  [247] = {.lex_state = 36},
  [248] = {.lex_state = 177},
  [249] = {.lex_state = 176},
  [250] = {.lex_state = 176},
  [251] = {.lex_state = 177},
  [252] = {.lex_state = 177},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 177},
  [255] = {.lex_state = 183},
  [256] = {.lex_state = 183},
  [257] = {.lex_state = 200},
  [258] = {.lex_state = 177},
  [259] = {.lex_state = 200},
  [260] = {.lex_state = 177},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 176},
  [263] = {.lex_state = 299},
  [264] = {.lex_state = 177},
  [265] = {.lex_state = 299},
  [266] = {.lex_state = 177},
  [267] = {.lex_state = 299},
  [268] = {.lex_state = 176},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 299},
  [271] = {.lex_state = 299},
  [272] = {.lex_state = 179},
  [273] = {.lex_state = 299},
  [274] = {.lex_state = 299},
  [275] = {.lex_state = 177},
  [276] = {.lex_state = 299},
  [277] = {.lex_state = 177},
  [278] = {.lex_state = 177},
  [279] = {.lex_state = 177},
  [280] = {.lex_state = 177},
  [281] = {.lex_state = 177},
  [282] = {.lex_state = 177},
  [283] = {.lex_state = 177},
  [284] = {.lex_state = 176},
  [285] = {.lex_state = 177},
  [286] = {.lex_state = 176},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 177},
  [289] = {.lex_state = 176},
  [290] = {.lex_state = 177},
  [291] = {.lex_state = 462},
  [292] = {.lex_state = 177},
  [293] = {.lex_state = 36},
  [294] = {.lex_state = 177},
  [295] = {.lex_state = 38},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 177},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 177},
  [300] = {.lex_state = 177},
  [301] = {.lex_state = 177},
  [302] = {.lex_state = 177},
  [303] = {.lex_state = 176},
  [304] = {.lex_state = 36},
  [305] = {.lex_state = 299},
  [306] = {.lex_state = 299},
  [307] = {.lex_state = 36},
  [308] = {.lex_state = 177},
  [309] = {.lex_state = 299},
  [310] = {.lex_state = 38},
  [311] = {.lex_state = 36},
  [312] = {.lex_state = 177},
  [313] = {.lex_state = 177},
  [314] = {.lex_state = 38},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 177},
  [317] = {.lex_state = 177},
  [318] = {.lex_state = 177},
  [319] = {.lex_state = 177},
  [320] = {.lex_state = 176},
  [321] = {.lex_state = 177},
  [322] = {.lex_state = 299},
  [323] = {.lex_state = 36},
  [324] = {.lex_state = 299},
  [325] = {.lex_state = 179},
  [326] = {.lex_state = 299},
  [327] = {.lex_state = 177},
  [328] = {.lex_state = 176},
  [329] = {.lex_state = 36},
  [330] = {.lex_state = 177},
  [331] = {.lex_state = 176},
  [332] = {.lex_state = 176},
  [333] = {.lex_state = 177},
  [334] = {.lex_state = 177},
  [335] = {.lex_state = 38},
  [336] = {.lex_state = 299},
  [337] = {.lex_state = 176},
  [338] = {.lex_state = 36},
  [339] = {.lex_state = 299},
  [340] = {.lex_state = 299},
  [341] = {.lex_state = 177},
  [342] = {.lex_state = 299},
  [343] = {.lex_state = 177},
  [344] = {.lex_state = 177},
  [345] = {.lex_state = 36},
  [346] = {.lex_state = 179},
  [347] = {.lex_state = 177},
  [348] = {.lex_state = 177},
  [349] = {.lex_state = 299},
  [350] = {.lex_state = 36},
  [351] = {.lex_state = 299},
  [352] = {.lex_state = 36},
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
    [anon_sym_STAR] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_text] = ACTIONS(133),
  },
  [35] = {
    [sym__whitespace] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
    [sym_end_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(141),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(141),
    [sym_active_char] = ACTIONS(141),
    [sym_text] = ACTIONS(141),
  },
  [37] = {
    [sym__whitespace] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(145),
  },
  [38] = {
    [sym__whitespace] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(149),
  },
  [39] = {
    [sym__whitespace] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(153),
  },
  [40] = {
    [sym__whitespace] = ACTIONS(155),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(157),
  },
  [41] = {
    [anon_sym_STAR] = ACTIONS(159),
    [sym__whitespace] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(163),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__whitespace] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_end_group] = ACTIONS(165),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_text] = ACTIONS(169),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(171),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(173),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(175),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(179),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(181),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(183),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(187),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(191),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(195),
    [sym_begin_group] = ACTIONS(195),
    [sym_math_shift] = ACTIONS(195),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(197),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__whitespace] = ACTIONS(201),
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
    [sym_text] = ACTIONS(203),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_end_group] = ACTIONS(205),
    [sym_math_shift] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_text] = ACTIONS(205),
  },
  [52] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(145),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [53] = {
    [anon_sym_tag] = ACTIONS(211),
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
    [sym__common] = STATE(148),
    [sym__math_mode_common] = STATE(148),
    [sym__math_mode] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_math_env] = STATE(148),
    [sym_tag] = STATE(148),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(148),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(148),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(148),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(148),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(148),
    [sym_opt_math_group] = STATE(148),
    [sym_token] = STATE(148),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(148),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(215),
  },
  [55] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(149),
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
    [sym_math_shift] = ACTIONS(217),
  },
  [57] = {
    [sym_math_text_group] = STATE(152),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(219),
  },
  [58] = {
    [sym__common] = STATE(155),
    [sym__math_mode_common] = STATE(155),
    [sym__math_mode] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_math_env] = STATE(155),
    [sym_tag] = STATE(155),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(155),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(154),
    [sym_end_token] = STATE(76),
    [sym_include] = STATE(155),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(155),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(155),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(155),
    [sym_opt_math_group] = STATE(155),
    [sym_token] = STATE(155),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(155),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [59] = {
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [60] = {
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
    [sym_end_opt] = STATE(156),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [61] = {
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
    [aux_sym_math_mode_repeat1] = STATE(158),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [62] = {
    [sym_verb_body] = ACTIONS(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [63] = {
    [sym_end_display_math] = STATE(161),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(233),
  },
  [64] = {
    [sym__common] = STATE(162),
    [sym__math_mode_common] = STATE(162),
    [sym__math_mode] = STATE(162),
    [sym_parameter] = STATE(162),
    [sym_math_env] = STATE(162),
    [sym_tag] = STATE(162),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(162),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(162),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(162),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(162),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(162),
    [sym_opt_math_group] = STATE(162),
    [sym_token] = STATE(162),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(162),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_text] = ACTIONS(235),
  },
  [65] = {
    [sym_end_inline_math] = STATE(164),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
  },
  [66] = {
    [sym_display_math_end] = STATE(165),
    [sym_end_token] = STATE(166),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [67] = {
    [sym_inline_math_end] = STATE(167),
    [sym_end_token] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(239),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [69] = {
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
  [70] = {
    [sym_verbatim_end] = STATE(170),
    [sym_end_token] = STATE(71),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [71] = {
    [sym_verbatim_env_group] = STATE(172),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(243),
  },
  [72] = {
    [aux_sym_verbatim_text_repeat1] = STATE(174),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(247),
  },
  [73] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(175),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym__end_of_line] = ACTIONS(251),
  },
  [74] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(253),
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
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
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
  [76] = {
    [sym_simple_text_group] = STATE(176),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [77] = {
    [sym__common] = STATE(178),
    [sym__text_mode_common] = STATE(178),
    [sym_inline_verbatim] = STATE(178),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(178),
    [sym_text_mode_at_region] = STATE(178),
    [sym_parameter] = STATE(178),
    [sym_text_env] = STATE(178),
    [sym__display_math] = STATE(178),
    [sym_tex_display_math] = STATE(178),
    [sym_latex_display_math] = STATE(178),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(178),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(178),
    [sym_tex_inline_math] = STATE(178),
    [sym_latex_inline_math] = STATE(178),
    [sym_inline_math_env] = STATE(178),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(178),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(177),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(178),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(178),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(178),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(178),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(178),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(178),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(178),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(178),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(178),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(178),
    [sym_token] = STATE(178),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(178),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(257),
    [sym_text] = ACTIONS(257),
  },
  [78] = {
    [sym_display_math_env_name] = ACTIONS(259),
    [sym_inline_math_env_name] = ACTIONS(261),
    [sym_verbatim_env_name] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(265),
  },
  [79] = {
    [sym_text_group] = STATE(185),
    [sym_opt_text_group] = STATE(186),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(269),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(271),
    [sym_begin_group] = ACTIONS(271),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(271),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [81] = {
    [sym_text_group] = STATE(188),
    [sym_opt_text_group] = STATE(189),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(273),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_math_shift] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [83] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(277),
  },
  [84] = {
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
  [85] = {
    [sym_simple_text_group] = STATE(191),
    [sym__whitespace] = ACTIONS(281),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [86] = {
    [sym__common] = STATE(194),
    [sym__text_mode_common] = STATE(194),
    [sym_inline_verbatim] = STATE(194),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(194),
    [sym_text_mode_at_region] = STATE(194),
    [sym_parameter] = STATE(194),
    [sym_text_env] = STATE(194),
    [sym__display_math] = STATE(194),
    [sym_tex_display_math] = STATE(194),
    [sym_latex_display_math] = STATE(194),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(194),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(194),
    [sym_tex_inline_math] = STATE(194),
    [sym_latex_inline_math] = STATE(194),
    [sym_inline_math_env] = STATE(194),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(194),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(194),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(194),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(194),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(194),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(194),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(194),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(194),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(194),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(194),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(194),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(194),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(194),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(194),
    [sym_opt_text_group] = STATE(194),
    [sym_token] = STATE(194),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(193),
    [aux_sym_text_mode_repeat1] = STATE(194),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(285),
    [sym_text] = ACTIONS(285),
  },
  [87] = {
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
  [88] = {
    [sym_simple_text_group] = STATE(196),
    [sym__whitespace] = ACTIONS(289),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [89] = {
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
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_end_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(293),
    [sym_text] = ACTIONS(293),
  },
  [91] = {
    [sym_text_group] = STATE(198),
    [sym__whitespace] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [92] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(299),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [94] = {
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
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(303),
  },
  [96] = {
    [sym_text_group] = STATE(202),
    [sym__whitespace] = ACTIONS(305),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [97] = {
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
  [98] = {
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
  [99] = {
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
  [100] = {
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
    [anon_sym_makeatother] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(315),
  },
  [101] = {
    [sym__common] = STATE(207),
    [sym__text_mode_common] = STATE(207),
    [sym_inline_verbatim] = STATE(207),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_text_env_at] = STATE(207),
    [sym__display_math_at] = STATE(207),
    [sym_tex_display_math_at] = STATE(207),
    [sym_latex_display_math_at] = STATE(207),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(207),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(207),
    [sym_tex_inline_math_at] = STATE(207),
    [sym_latex_inline_math_at] = STATE(207),
    [sym_inline_math_env_at] = STATE(207),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(207),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(207),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(207),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(207),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(207),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(207),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(207),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(207),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(207),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(207),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(207),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(207),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(207),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(207),
    [sym_opt_text_group_at] = STATE(207),
    [sym_token_at] = STATE(207),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(207),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(321),
    [sym_text] = ACTIONS(321),
  },
  [102] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(211),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(215),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(215),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(215),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(215),
    [sym_opt_math_group_at] = STATE(215),
    [sym_token_at] = STATE(215),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [103] = {
    [sym_makeatother] = STATE(217),
    [sym_makeatother_token] = STATE(118),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(331),
  },
  [104] = {
    [sym__common] = STATE(219),
    [sym__math_mode_common] = STATE(219),
    [sym__math_mode_at] = STATE(219),
    [sym_math_mode_at] = STATE(218),
    [sym_parameter] = STATE(219),
    [sym_math_env_at] = STATE(219),
    [sym_tag_at] = STATE(219),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(219),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(219),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(219),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(219),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(219),
    [sym_opt_math_group_at] = STATE(219),
    [sym_token_at] = STATE(219),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(219),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [105] = {
    [sym__common] = STATE(219),
    [sym__math_mode_common] = STATE(219),
    [sym__math_mode_at] = STATE(219),
    [sym_math_mode_at] = STATE(220),
    [sym_parameter] = STATE(219),
    [sym_math_env_at] = STATE(219),
    [sym_tag_at] = STATE(219),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(219),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(219),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(219),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(219),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(219),
    [sym_opt_math_group_at] = STATE(219),
    [sym_token_at] = STATE(219),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(219),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [106] = {
    [sym__common] = STATE(219),
    [sym__math_mode_common] = STATE(219),
    [sym__math_mode_at] = STATE(219),
    [sym_math_mode_at] = STATE(221),
    [sym_parameter] = STATE(219),
    [sym_math_env_at] = STATE(219),
    [sym_tag_at] = STATE(219),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(219),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(219),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(219),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(219),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(219),
    [sym_opt_math_group_at] = STATE(219),
    [sym_token_at] = STATE(219),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(219),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [107] = {
    [sym__common] = STATE(219),
    [sym__math_mode_common] = STATE(219),
    [sym__math_mode_at] = STATE(219),
    [sym_math_mode_at] = STATE(222),
    [sym_parameter] = STATE(219),
    [sym_math_env_at] = STATE(219),
    [sym_tag_at] = STATE(219),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(219),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(219),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(219),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(219),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(219),
    [sym_opt_math_group_at] = STATE(219),
    [sym_token_at] = STATE(219),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(219),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [108] = {
    [sym__common] = STATE(225),
    [sym__text_mode_common] = STATE(225),
    [sym_inline_verbatim] = STATE(225),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(225),
    [sym_parameter] = STATE(225),
    [sym_text_env_at] = STATE(225),
    [sym__display_math_at] = STATE(225),
    [sym_tex_display_math_at] = STATE(225),
    [sym_latex_display_math_at] = STATE(225),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(225),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(225),
    [sym_tex_inline_math_at] = STATE(225),
    [sym_latex_inline_math_at] = STATE(225),
    [sym_inline_math_env_at] = STATE(225),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(225),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(225),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(224),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(225),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(225),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(225),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(225),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(225),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(225),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(225),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(225),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(225),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(225),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(225),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(225),
    [sym_opt_text_group_at] = STATE(225),
    [sym_token_at] = STATE(225),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(225),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(335),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [109] = {
    [sym_display_math_env_group] = STATE(226),
    [sym_inline_math_env_group] = STATE(80),
    [sym_verbatim_env_group] = STATE(81),
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [110] = {
    [sym_text_group_at] = STATE(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [111] = {
    [sym_text_group_at] = STATE(228),
    [sym_opt_text_group_at] = STATE(229),
    [sym_begin_opt] = STATE(230),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [112] = {
    [sym_text_group_at] = STATE(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [113] = {
    [sym_text_group_at] = STATE(232),
    [sym_opt_text_group_at] = STATE(233),
    [sym_begin_opt] = STATE(230),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [114] = {
    [sym_text_group_at] = STATE(234),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [115] = {
    [sym_text_group_at] = STATE(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [116] = {
    [sym_text_group_at] = STATE(236),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [117] = {
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
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(341),
    [sym_begin_group] = ACTIONS(341),
    [sym_end_group] = ACTIONS(341),
    [sym_math_shift] = ACTIONS(341),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(341),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_text] = ACTIONS(341),
  },
  [119] = {
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
    [sym_end_opt] = STATE(237),
    [aux_sym_text_mode_at_repeat1] = STATE(238),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(343),
    [sym_text] = ACTIONS(343),
  },
  [120] = {
    [sym__common] = STATE(239),
    [sym__text_mode_common] = STATE(239),
    [sym_inline_verbatim] = STATE(239),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(239),
    [sym_parameter] = STATE(239),
    [sym_text_env_at] = STATE(239),
    [sym__display_math_at] = STATE(239),
    [sym_tex_display_math_at] = STATE(239),
    [sym_latex_display_math_at] = STATE(239),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(239),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(239),
    [sym_tex_inline_math_at] = STATE(239),
    [sym_latex_inline_math_at] = STATE(239),
    [sym_inline_math_env_at] = STATE(239),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(239),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(239),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(239),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(239),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(239),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(239),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(239),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(239),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(239),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(239),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(239),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(239),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(239),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(239),
    [sym_opt_text_group_at] = STATE(239),
    [sym_token_at] = STATE(239),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(239),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [121] = {
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
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
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
  [123] = {
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
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(353),
    [sym_text] = ACTIONS(353),
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
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(372),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(369),
    [sym_text] = ACTIONS(369),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(378),
    [sym_end_group] = ACTIONS(378),
    [sym_math_shift] = ACTIONS(378),
    [sym_alignment_tab] = ACTIONS(378),
    [sym_parameter_char] = ACTIONS(378),
    [sym_superscript] = ACTIONS(378),
    [sym_subscript] = ACTIONS(378),
    [sym_active_char] = ACTIONS(378),
    [sym_text] = ACTIONS(378),
  },
  [126] = {
    [aux_sym_parameter_repeat1] = STATE(126),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(380),
    [sym_number] = ACTIONS(383),
  },
  [127] = {
    [sym_verb_delim] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [128] = {
    [anon_sym_LBRACK] = ACTIONS(387),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [sym_active_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [130] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(393),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(395),
  },
  [133] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(397),
  },
  [134] = {
    [sym__whitespace] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(401),
  },
  [135] = {
    [anon_sym_STAR] = ACTIONS(403),
    [sym__whitespace] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(401),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(405),
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
  [137] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(407),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(409),
  },
  [139] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(411),
  },
  [140] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(413),
  },
  [141] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(415),
  },
  [142] = {
    [anon_sym_LBRACK] = ACTIONS(417),
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
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(419),
    [sym_end_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(419),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_text] = ACTIONS(419),
  },
  [144] = {
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
  [145] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(145),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(355),
    [sym_math_shift] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(423),
    [sym_parameter_char] = ACTIONS(372),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(423),
    [sym_text] = ACTIONS(423),
  },
  [146] = {
    [sym__whitespace] = ACTIONS(426),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(428),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(430),
    [sym_begin_group] = ACTIONS(430),
    [sym_end_group] = ACTIONS(430),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(430),
    [sym_parameter_char] = ACTIONS(430),
    [sym_superscript] = ACTIONS(430),
    [sym_subscript] = ACTIONS(430),
    [sym_active_char] = ACTIONS(430),
    [sym_text] = ACTIONS(430),
  },
  [148] = {
    [sym__common] = STATE(246),
    [sym__math_mode_common] = STATE(246),
    [sym__math_mode] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_math_env] = STATE(246),
    [sym_tag] = STATE(246),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(246),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(246),
    [sym_opt_math_group] = STATE(246),
    [sym_token] = STATE(246),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_text] = ACTIONS(434),
  },
  [149] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(436),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(438),
    [sym_end_group] = ACTIONS(438),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(438),
    [sym_superscript] = ACTIONS(438),
    [sym_subscript] = ACTIONS(438),
    [sym_active_char] = ACTIONS(438),
    [sym_text] = ACTIONS(438),
  },
  [151] = {
    [sym__common] = STATE(250),
    [sym__text_mode_common] = STATE(250),
    [sym_inline_verbatim] = STATE(250),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(250),
    [sym_text_mode] = STATE(249),
    [sym_text_mode_at_region] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_env] = STATE(250),
    [sym__display_math] = STATE(250),
    [sym_tex_display_math] = STATE(250),
    [sym_latex_display_math] = STATE(250),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(250),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(250),
    [sym_tex_inline_math] = STATE(250),
    [sym_latex_inline_math] = STATE(250),
    [sym_inline_math_env] = STATE(250),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(250),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(250),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(250),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(250),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(250),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(250),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(250),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(250),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(250),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(250),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(250),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(250),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(250),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(250),
    [sym_opt_text_group] = STATE(250),
    [sym_token] = STATE(250),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(250),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(440),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(442),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(442),
    [sym_text] = ACTIONS(442),
  },
  [152] = {
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
  [153] = {
    [anon_sym_tag] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(253),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [154] = {
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(446),
    [sym_begin_group] = ACTIONS(446),
    [sym_end_group] = ACTIONS(446),
    [sym_math_shift] = ACTIONS(446),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_text] = ACTIONS(446),
  },
  [155] = {
    [sym__common] = STATE(162),
    [sym__math_mode_common] = STATE(162),
    [sym__math_mode] = STATE(162),
    [sym_parameter] = STATE(162),
    [sym_math_env] = STATE(162),
    [sym_tag] = STATE(162),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(162),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(251),
    [sym_end_token] = STATE(76),
    [sym_include] = STATE(162),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(162),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(162),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(162),
    [sym_opt_math_group] = STATE(162),
    [sym_token] = STATE(162),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(162),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_text] = ACTIONS(235),
  },
  [156] = {
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
  [157] = {
    [sym__common] = STATE(253),
    [sym__math_mode_common] = STATE(253),
    [sym__math_mode] = STATE(253),
    [sym_parameter] = STATE(253),
    [sym_math_env] = STATE(253),
    [sym_tag] = STATE(253),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(253),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(253),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(253),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(253),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(253),
    [sym_opt_math_group] = STATE(253),
    [sym_token] = STATE(253),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(252),
    [aux_sym_math_mode_repeat1] = STATE(253),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_text] = ACTIONS(450),
  },
  [158] = {
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
    [aux_sym_math_mode_repeat1] = STATE(158),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(458),
    [sym_math_shift] = ACTIONS(461),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(463),
    [sym_subscript] = ACTIONS(463),
    [sym_active_char] = ACTIONS(463),
    [sym_text] = ACTIONS(463),
  },
  [159] = {
    [sym_verb_delim] = ACTIONS(469),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [160] = {
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(473),
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
  [162] = {
    [sym__common] = STATE(162),
    [sym__math_mode_common] = STATE(162),
    [sym__math_mode] = STATE(162),
    [sym_parameter] = STATE(162),
    [sym_math_env] = STATE(162),
    [sym_tag] = STATE(162),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(162),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(162),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(162),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(162),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(162),
    [sym_opt_math_group] = STATE(162),
    [sym_token] = STATE(162),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(162),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(475),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(475),
    [sym_subscript] = ACTIONS(475),
    [sym_active_char] = ACTIONS(475),
    [sym_text] = ACTIONS(475),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(480),
    [anon_sym_RBRACK] = ACTIONS(480),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(480),
    [sym_end_group] = ACTIONS(480),
    [sym_math_shift] = ACTIONS(480),
    [sym_alignment_tab] = ACTIONS(480),
    [sym_parameter_char] = ACTIONS(480),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [sym_active_char] = ACTIONS(480),
    [sym_text] = ACTIONS(480),
  },
  [165] = {
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
  [166] = {
    [sym_display_math_env_group] = STATE(258),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(484),
  },
  [167] = {
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
  [168] = {
    [sym_inline_math_env_group] = STATE(260),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(488),
  },
  [169] = {
    [sym__whitespace] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(492),
  },
  [170] = {
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
  [171] = {
    [sym_verbatim_env_name] = ACTIONS(496),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(498),
    [sym_begin_group] = ACTIONS(498),
    [sym_end_group] = ACTIONS(498),
    [sym_math_shift] = ACTIONS(498),
    [sym_alignment_tab] = ACTIONS(498),
    [sym_parameter_char] = ACTIONS(498),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(498),
    [sym_text] = ACTIONS(498),
  },
  [173] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(500),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(502),
    [sym__end_of_line] = ACTIONS(502),
  },
  [174] = {
    [aux_sym_verbatim_text_repeat1] = STATE(174),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(504),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(507),
  },
  [175] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(175),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(509),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(502),
    [sym__end_of_line] = ACTIONS(512),
  },
  [176] = {
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
  [177] = {
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
    [sym_active_char] = ACTIONS(517),
    [sym_text] = ACTIONS(517),
  },
  [178] = {
    [sym__common] = STATE(178),
    [sym__text_mode_common] = STATE(178),
    [sym_inline_verbatim] = STATE(178),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(178),
    [sym_text_mode_at_region] = STATE(178),
    [sym_parameter] = STATE(178),
    [sym_text_env] = STATE(178),
    [sym__display_math] = STATE(178),
    [sym_tex_display_math] = STATE(178),
    [sym_latex_display_math] = STATE(178),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(178),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(178),
    [sym_tex_inline_math] = STATE(178),
    [sym_latex_inline_math] = STATE(178),
    [sym_inline_math_env] = STATE(178),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(178),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(178),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(178),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(178),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(178),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(178),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(178),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(178),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(178),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(178),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(178),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(178),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(178),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(178),
    [sym_token] = STATE(178),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(178),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(372),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(519),
    [sym_text] = ACTIONS(519),
  },
  [179] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(522),
  },
  [180] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(524),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(526),
  },
  [182] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(528),
  },
  [183] = {
    [sym__common] = STATE(268),
    [sym__text_mode_common] = STATE(268),
    [sym_inline_verbatim] = STATE(268),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(268),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(530),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(532),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(532),
    [sym_text] = ACTIONS(532),
  },
  [184] = {
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(534),
    [sym_begin_group] = ACTIONS(534),
    [sym_alignment_tab] = ACTIONS(534),
    [sym_parameter_char] = ACTIONS(534),
    [sym_superscript] = ACTIONS(534),
    [sym_subscript] = ACTIONS(534),
    [sym_active_char] = ACTIONS(534),
    [sym_text] = ACTIONS(534),
  },
  [185] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(536),
  },
  [186] = {
    [sym_text_group] = STATE(271),
    [sym__whitespace] = ACTIONS(538),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(536),
  },
  [187] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(540),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(542),
    [sym__end_of_line] = ACTIONS(542),
  },
  [188] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(544),
  },
  [189] = {
    [sym_text_group] = STATE(274),
    [sym__whitespace] = ACTIONS(546),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(544),
  },
  [190] = {
    [sym_simple_text_group] = STATE(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [191] = {
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
  [192] = {
    [sym__whitespace] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
    [sym__end_of_line] = ACTIONS(349),
  },
  [193] = {
    [sym__whitespace] = ACTIONS(351),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(351),
    [sym__end_of_line] = ACTIONS(351),
  },
  [194] = {
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
    [sym_end_opt] = STATE(276),
    [aux_sym_text_mode_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(353),
    [sym_text] = ACTIONS(353),
  },
  [195] = {
    [sym_simple_text_group] = STATE(277),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(550),
    [anon_sym_RBRACK] = ACTIONS(550),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(550),
    [sym_begin_group] = ACTIONS(550),
    [sym_end_group] = ACTIONS(550),
    [sym_math_shift] = ACTIONS(550),
    [sym_alignment_tab] = ACTIONS(550),
    [sym_parameter_char] = ACTIONS(550),
    [sym_superscript] = ACTIONS(550),
    [sym_subscript] = ACTIONS(550),
    [sym_active_char] = ACTIONS(550),
    [sym_text] = ACTIONS(550),
  },
  [197] = {
    [sym_text_group] = STATE(278),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [198] = {
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
  [199] = {
    [anon_sym_EQ] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(554),
  },
  [201] = {
    [sym_text_group] = STATE(280),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [202] = {
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
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(558),
    [sym__whitespace] = ACTIONS(560),
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
    [sym_text] = ACTIONS(562),
  },
  [204] = {
    [sym__whitespace] = ACTIONS(564),
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
    [sym_text] = ACTIONS(568),
  },
  [205] = {
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
    [sym__name_at] = ACTIONS(315),
  },
  [206] = {
    [anon_sym_LBRACK] = ACTIONS(570),
    [anon_sym_RBRACK] = ACTIONS(570),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(570),
    [sym_begin_group] = ACTIONS(570),
    [sym_end_group] = ACTIONS(570),
    [sym_math_shift] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(570),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_text] = ACTIONS(570),
  },
  [207] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym_inline_verbatim] = STATE(284),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(284),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(572),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [208] = {
    [anon_sym_tag] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(315),
  },
  [209] = {
    [sym__common] = STATE(286),
    [sym__math_mode_common] = STATE(286),
    [sym__math_mode_at] = STATE(286),
    [sym_parameter] = STATE(286),
    [sym_math_env_at] = STATE(286),
    [sym_tag_at] = STATE(286),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(286),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(286),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(286),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(286),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(286),
    [sym_opt_math_group_at] = STATE(286),
    [sym_token_at] = STATE(286),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(286),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_end_group] = ACTIONS(576),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_text] = ACTIONS(578),
  },
  [210] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(287),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(215),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(215),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(215),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(215),
    [sym_opt_math_group_at] = STATE(215),
    [sym_token_at] = STATE(215),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_text] = ACTIONS(329),
  },
  [211] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(580),
  },
  [212] = {
    [sym_math_text_group_at] = STATE(290),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(582),
  },
  [213] = {
    [sym__common] = STATE(293),
    [sym__math_mode_common] = STATE(293),
    [sym__math_mode_at] = STATE(293),
    [sym_parameter] = STATE(293),
    [sym_math_env_at] = STATE(293),
    [sym_tag_at] = STATE(293),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(293),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(292),
    [sym_end_token] = STATE(76),
    [sym_include_at] = STATE(293),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(293),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(293),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(293),
    [sym_opt_math_group_at] = STATE(293),
    [sym_token_at] = STATE(293),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(293),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(586),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(586),
    [sym_subscript] = ACTIONS(586),
    [sym_active_char] = ACTIONS(586),
    [sym_text] = ACTIONS(586),
  },
  [214] = {
    [sym__common] = STATE(295),
    [sym__math_mode_common] = STATE(295),
    [sym__math_mode_at] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_math_env_at] = STATE(295),
    [sym_tag_at] = STATE(295),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(295),
    [sym_begin] = STATE(213),
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
    [sym_begin_opt] = STATE(214),
    [sym_end_opt] = STATE(294),
    [aux_sym_math_mode_at_repeat1] = STATE(295),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_text] = ACTIONS(588),
  },
  [215] = {
    [sym__common] = STATE(296),
    [sym__math_mode_common] = STATE(296),
    [sym__math_mode_at] = STATE(296),
    [sym_parameter] = STATE(296),
    [sym_math_env_at] = STATE(296),
    [sym_tag_at] = STATE(296),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(296),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(296),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(296),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(296),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(296),
    [sym_opt_math_group_at] = STATE(296),
    [sym_token_at] = STATE(296),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(296),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(590),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(592),
    [sym_subscript] = ACTIONS(592),
    [sym_active_char] = ACTIONS(592),
    [sym_text] = ACTIONS(592),
  },
  [216] = {
    [anon_sym_makeatother] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(596),
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
  [218] = {
    [sym_end_display_math] = STATE(297),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(233),
  },
  [219] = {
    [sym__common] = STATE(298),
    [sym__math_mode_common] = STATE(298),
    [sym__math_mode_at] = STATE(298),
    [sym_parameter] = STATE(298),
    [sym_math_env_at] = STATE(298),
    [sym_tag_at] = STATE(298),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(298),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(298),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(298),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(298),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(298),
    [sym_opt_math_group_at] = STATE(298),
    [sym_token_at] = STATE(298),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(298),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(590),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [220] = {
    [sym_end_inline_math] = STATE(299),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
  },
  [221] = {
    [sym_display_math_end] = STATE(300),
    [sym_end_token] = STATE(166),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [222] = {
    [sym_inline_math_end] = STATE(301),
    [sym_end_token] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [223] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(253),
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
    [sym__name_at] = ACTIONS(315),
  },
  [224] = {
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_end_group] = ACTIONS(600),
    [sym_math_shift] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_text] = ACTIONS(600),
  },
  [225] = {
    [sym__common] = STATE(239),
    [sym__text_mode_common] = STATE(239),
    [sym_inline_verbatim] = STATE(239),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(239),
    [sym_parameter] = STATE(239),
    [sym_text_env_at] = STATE(239),
    [sym__display_math_at] = STATE(239),
    [sym_tex_display_math_at] = STATE(239),
    [sym_latex_display_math_at] = STATE(239),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(239),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(239),
    [sym_tex_inline_math_at] = STATE(239),
    [sym_latex_inline_math_at] = STATE(239),
    [sym_inline_math_env_at] = STATE(239),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(239),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(239),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(302),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(239),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(239),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(239),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(239),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(239),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(239),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(239),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(239),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(239),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(239),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(239),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(239),
    [sym_opt_text_group_at] = STATE(239),
    [sym_token_at] = STATE(239),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(239),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(335),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(347),
    [sym_text] = ACTIONS(347),
  },
  [226] = {
    [sym_text_group_at] = STATE(305),
    [sym_opt_text_group_at] = STATE(306),
    [sym_begin_opt] = STATE(230),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(602),
    [sym__end_of_line] = ACTIONS(604),
  },
  [227] = {
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
  [228] = {
    [anon_sym_LBRACK] = ACTIONS(608),
    [anon_sym_RBRACK] = ACTIONS(608),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(608),
    [sym_begin_group] = ACTIONS(608),
    [sym_end_group] = ACTIONS(608),
    [sym_math_shift] = ACTIONS(608),
    [sym_alignment_tab] = ACTIONS(608),
    [sym_parameter_char] = ACTIONS(608),
    [sym_superscript] = ACTIONS(608),
    [sym_subscript] = ACTIONS(608),
    [sym_active_char] = ACTIONS(608),
    [sym_text] = ACTIONS(608),
  },
  [229] = {
    [sym_text_group_at] = STATE(308),
    [sym__whitespace] = ACTIONS(610),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [230] = {
    [sym__common] = STATE(310),
    [sym__text_mode_common] = STATE(310),
    [sym_inline_verbatim] = STATE(310),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_env_at] = STATE(310),
    [sym__display_math_at] = STATE(310),
    [sym_tex_display_math_at] = STATE(310),
    [sym_latex_display_math_at] = STATE(310),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(310),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(310),
    [sym_tex_inline_math_at] = STATE(310),
    [sym_latex_inline_math_at] = STATE(310),
    [sym_inline_math_env_at] = STATE(310),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(310),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(310),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(310),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(310),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(310),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(310),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(310),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(310),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(310),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(310),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(310),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(310),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(310),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(310),
    [sym_opt_text_group_at] = STATE(310),
    [sym_token_at] = STATE(310),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(309),
    [aux_sym_text_mode_at_repeat1] = STATE(310),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(612),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(612),
    [sym_text] = ACTIONS(612),
  },
  [231] = {
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
  [232] = {
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
  [233] = {
    [sym_text_group_at] = STATE(312),
    [sym__whitespace] = ACTIONS(618),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [234] = {
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
  [235] = {
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
  [238] = {
    [sym__common] = STATE(314),
    [sym__text_mode_common] = STATE(314),
    [sym_inline_verbatim] = STATE(314),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_text_env_at] = STATE(314),
    [sym__display_math_at] = STATE(314),
    [sym_tex_display_math_at] = STATE(314),
    [sym_latex_display_math_at] = STATE(314),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(314),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(314),
    [sym_tex_inline_math_at] = STATE(314),
    [sym_latex_inline_math_at] = STATE(314),
    [sym_inline_math_env_at] = STATE(314),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(314),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(314),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(314),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(314),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(314),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(314),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(314),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(314),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(314),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(314),
    [sym_opt_text_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(313),
    [aux_sym_text_mode_at_repeat1] = STATE(314),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(628),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(628),
    [sym_text] = ACTIONS(628),
  },
  [239] = {
    [sym__common] = STATE(239),
    [sym__text_mode_common] = STATE(239),
    [sym_inline_verbatim] = STATE(239),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(239),
    [sym_parameter] = STATE(239),
    [sym_text_env_at] = STATE(239),
    [sym__display_math_at] = STATE(239),
    [sym_tex_display_math_at] = STATE(239),
    [sym_latex_display_math_at] = STATE(239),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(239),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(239),
    [sym_tex_inline_math_at] = STATE(239),
    [sym_latex_inline_math_at] = STATE(239),
    [sym_inline_math_env_at] = STATE(239),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(239),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(239),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(239),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(239),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(239),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(239),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(239),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(239),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(239),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(239),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(239),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(239),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(239),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(239),
    [sym_opt_text_group_at] = STATE(239),
    [sym_token_at] = STATE(239),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(239),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(633),
    [sym_begin_group] = ACTIONS(636),
    [sym_math_shift] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(642),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(648),
    [sym_subscript] = ACTIONS(648),
    [sym_active_char] = ACTIONS(642),
    [sym_text] = ACTIONS(642),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(651),
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
  [241] = {
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
    [aux_sym_text_mode_repeat1] = STATE(241),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(360),
    [sym_begin_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(366),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(372),
    [sym_superscript] = ACTIONS(375),
    [sym_subscript] = ACTIONS(375),
    [sym_active_char] = ACTIONS(653),
    [sym_text] = ACTIONS(653),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(656),
  },
  [243] = {
    [sym__whitespace] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(656),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(656),
  },
  [244] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(660),
  },
  [245] = {
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
  [246] = {
    [sym__common] = STATE(246),
    [sym__math_mode_common] = STATE(246),
    [sym__math_mode] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_math_env] = STATE(246),
    [sym_tag] = STATE(246),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(246),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(246),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(246),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(246),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(246),
    [sym_opt_math_group] = STATE(246),
    [sym_token] = STATE(246),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(246),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(458),
    [sym_end_group] = ACTIONS(461),
    [sym_alignment_tab] = ACTIONS(664),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(664),
    [sym_subscript] = ACTIONS(664),
    [sym_active_char] = ACTIONS(664),
    [sym_text] = ACTIONS(664),
  },
  [247] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(667),
  },
  [248] = {
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
  [249] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(671),
  },
  [250] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(145),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [251] = {
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
  [252] = {
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
  [253] = {
    [sym__common] = STATE(253),
    [sym__math_mode_common] = STATE(253),
    [sym__math_mode] = STATE(253),
    [sym_parameter] = STATE(253),
    [sym_math_env] = STATE(253),
    [sym_tag] = STATE(253),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(253),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(253),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(253),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(253),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(253),
    [sym_opt_math_group] = STATE(253),
    [sym_token] = STATE(253),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(253),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_text] = ACTIONS(677),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(680),
    [sym_begin_group] = ACTIONS(680),
    [sym_end_group] = ACTIONS(680),
    [sym_math_shift] = ACTIONS(680),
    [sym_alignment_tab] = ACTIONS(680),
    [sym_parameter_char] = ACTIONS(680),
    [sym_superscript] = ACTIONS(680),
    [sym_subscript] = ACTIONS(680),
    [sym_active_char] = ACTIONS(680),
    [sym_text] = ACTIONS(680),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [sym__whitespace] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(682),
    [sym_end_group] = ACTIONS(682),
    [sym_math_shift] = ACTIONS(682),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(682),
    [sym_superscript] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_active_char] = ACTIONS(682),
    [sym_text] = ACTIONS(686),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [sym__whitespace] = ACTIONS(690),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_RBRACK] = ACTIONS(688),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(688),
    [sym_begin_group] = ACTIONS(688),
    [sym_end_group] = ACTIONS(688),
    [sym_math_shift] = ACTIONS(688),
    [sym_alignment_tab] = ACTIONS(688),
    [sym_parameter_char] = ACTIONS(688),
    [sym_superscript] = ACTIONS(688),
    [sym_subscript] = ACTIONS(688),
    [sym_active_char] = ACTIONS(688),
    [sym_text] = ACTIONS(692),
  },
  [257] = {
    [sym_display_math_env_name] = ACTIONS(694),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [258] = {
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
  [259] = {
    [sym_inline_math_env_name] = ACTIONS(698),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(700),
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
  [261] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(702),
  },
  [262] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(704),
  },
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(706),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(706),
    [sym__end_of_line] = ACTIONS(706),
  },
  [264] = {
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
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(710),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(710),
    [sym__end_of_line] = ACTIONS(710),
  },
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
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
  [267] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(205),
  },
  [268] = {
    [sym__common] = STATE(145),
    [sym__text_mode_common] = STATE(145),
    [sym_inline_verbatim] = STATE(145),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(145),
    [sym_text_mode_at_region] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(145),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(145),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(145),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(145),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(145),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(145),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(145),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(145),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(145),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(145),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(145),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(145),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(145),
    [sym_token] = STATE(145),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(145),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [269] = {
    [anon_sym_LBRACK] = ACTIONS(716),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(716),
    [sym_begin_group] = ACTIONS(716),
    [sym_alignment_tab] = ACTIONS(716),
    [sym_parameter_char] = ACTIONS(716),
    [sym_superscript] = ACTIONS(716),
    [sym_subscript] = ACTIONS(716),
    [sym_active_char] = ACTIONS(716),
    [sym_text] = ACTIONS(716),
  },
  [270] = {
    [sym_text_group] = STATE(324),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(718),
  },
  [271] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(718),
  },
  [272] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(720),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(722),
    [sym__end_of_line] = ACTIONS(722),
  },
  [273] = {
    [sym_text_group] = STATE(326),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(724),
  },
  [274] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(724),
  },
  [275] = {
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
  [276] = {
    [sym__whitespace] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(651),
    [sym__end_of_line] = ACTIONS(651),
  },
  [277] = {
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
  [278] = {
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
  [279] = {
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
  [280] = {
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
  [281] = {
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
  [282] = {
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
  [283] = {
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
  [284] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym_inline_verbatim] = STATE(284),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(284),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(630),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(633),
    [sym_begin_group] = ACTIONS(636),
    [sym_end_group] = ACTIONS(742),
    [sym_math_shift] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(744),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(648),
    [sym_subscript] = ACTIONS(648),
    [sym_active_char] = ACTIONS(744),
    [sym_text] = ACTIONS(744),
  },
  [285] = {
    [anon_sym_LBRACK] = ACTIONS(747),
    [anon_sym_RBRACK] = ACTIONS(747),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(747),
    [sym_begin_group] = ACTIONS(747),
    [sym_end_group] = ACTIONS(747),
    [sym_math_shift] = ACTIONS(747),
    [sym_alignment_tab] = ACTIONS(747),
    [sym_parameter_char] = ACTIONS(747),
    [sym_superscript] = ACTIONS(747),
    [sym_subscript] = ACTIONS(747),
    [sym_active_char] = ACTIONS(747),
    [sym_text] = ACTIONS(747),
  },
  [286] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_end_group] = ACTIONS(749),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_text] = ACTIONS(751),
  },
  [287] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(753),
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
    [sym__text_mode_common] = STATE(332),
    [sym_inline_verbatim] = STATE(332),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(332),
    [sym_text_mode_at] = STATE(331),
    [sym_parameter] = STATE(332),
    [sym_text_env_at] = STATE(332),
    [sym__display_math_at] = STATE(332),
    [sym_tex_display_math_at] = STATE(332),
    [sym_latex_display_math_at] = STATE(332),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(332),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(332),
    [sym_tex_inline_math_at] = STATE(332),
    [sym_latex_inline_math_at] = STATE(332),
    [sym_inline_math_env_at] = STATE(332),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(332),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(332),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(332),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(332),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(332),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(332),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(332),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(332),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(332),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(332),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(332),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(332),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(332),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(332),
    [sym_opt_text_group_at] = STATE(332),
    [sym_token_at] = STATE(332),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(332),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(757),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(759),
    [sym_text] = ACTIONS(759),
  },
  [290] = {
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
  [291] = {
    [anon_sym_tag] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(253),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(315),
  },
  [292] = {
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
  [293] = {
    [sym__common] = STATE(298),
    [sym__math_mode_common] = STATE(298),
    [sym__math_mode_at] = STATE(298),
    [sym_parameter] = STATE(298),
    [sym_math_env_at] = STATE(298),
    [sym_tag_at] = STATE(298),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(298),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(333),
    [sym_end_token] = STATE(76),
    [sym_include_at] = STATE(298),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(298),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(298),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(298),
    [sym_opt_math_group_at] = STATE(298),
    [sym_token_at] = STATE(298),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(298),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(584),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(598),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(598),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(598),
    [sym_text] = ACTIONS(598),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(765),
    [sym_end_group] = ACTIONS(765),
    [sym_math_shift] = ACTIONS(765),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(765),
    [sym_superscript] = ACTIONS(765),
    [sym_subscript] = ACTIONS(765),
    [sym_active_char] = ACTIONS(765),
    [sym_text] = ACTIONS(765),
  },
  [295] = {
    [sym__common] = STATE(335),
    [sym__math_mode_common] = STATE(335),
    [sym__math_mode_at] = STATE(335),
    [sym_parameter] = STATE(335),
    [sym_math_env_at] = STATE(335),
    [sym_tag_at] = STATE(335),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(335),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(335),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(335),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(335),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(335),
    [sym_opt_math_group_at] = STATE(335),
    [sym_token_at] = STATE(335),
    [sym_begin_opt] = STATE(214),
    [sym_end_opt] = STATE(334),
    [aux_sym_math_mode_at_repeat1] = STATE(335),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(767),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(767),
    [sym_subscript] = ACTIONS(767),
    [sym_active_char] = ACTIONS(767),
    [sym_text] = ACTIONS(767),
  },
  [296] = {
    [sym__common] = STATE(296),
    [sym__math_mode_common] = STATE(296),
    [sym__math_mode_at] = STATE(296),
    [sym_parameter] = STATE(296),
    [sym_math_env_at] = STATE(296),
    [sym_tag_at] = STATE(296),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(296),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(296),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(296),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(296),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(296),
    [sym_opt_math_group_at] = STATE(296),
    [sym_token_at] = STATE(296),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(296),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(769),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(775),
    [sym_math_shift] = ACTIONS(778),
    [sym_alignment_tab] = ACTIONS(780),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(780),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(780),
    [sym_text] = ACTIONS(780),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(786),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [298] = {
    [sym__common] = STATE(298),
    [sym__math_mode_common] = STATE(298),
    [sym__math_mode_at] = STATE(298),
    [sym_parameter] = STATE(298),
    [sym_math_env_at] = STATE(298),
    [sym_tag_at] = STATE(298),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(298),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(298),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(298),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(298),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(298),
    [sym_opt_math_group_at] = STATE(298),
    [sym_token_at] = STATE(298),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(298),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(769),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(775),
    [sym_alignment_tab] = ACTIONS(788),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(788),
    [sym_subscript] = ACTIONS(788),
    [sym_active_char] = ACTIONS(788),
    [sym_text] = ACTIONS(788),
  },
  [299] = {
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
  [300] = {
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
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(795),
    [anon_sym_RBRACK] = ACTIONS(795),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(795),
    [sym_begin_group] = ACTIONS(795),
    [sym_end_group] = ACTIONS(795),
    [sym_math_shift] = ACTIONS(795),
    [sym_alignment_tab] = ACTIONS(795),
    [sym_parameter_char] = ACTIONS(795),
    [sym_superscript] = ACTIONS(795),
    [sym_subscript] = ACTIONS(795),
    [sym_active_char] = ACTIONS(795),
    [sym_text] = ACTIONS(795),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(797),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(797),
    [sym_begin_group] = ACTIONS(797),
    [sym_end_group] = ACTIONS(797),
    [sym_math_shift] = ACTIONS(797),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_parameter_char] = ACTIONS(797),
    [sym_superscript] = ACTIONS(797),
    [sym_subscript] = ACTIONS(797),
    [sym_active_char] = ACTIONS(797),
    [sym_text] = ACTIONS(797),
  },
  [303] = {
    [sym__common] = STATE(337),
    [sym__text_mode_common] = STATE(337),
    [sym_inline_verbatim] = STATE(337),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(337),
    [sym_parameter] = STATE(337),
    [sym_text_env_at] = STATE(337),
    [sym__display_math_at] = STATE(337),
    [sym_tex_display_math_at] = STATE(337),
    [sym_latex_display_math_at] = STATE(337),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(337),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(337),
    [sym_tex_inline_math_at] = STATE(337),
    [sym_latex_inline_math_at] = STATE(337),
    [sym_inline_math_env_at] = STATE(337),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(337),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(337),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(337),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(337),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(337),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(337),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(337),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(337),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(337),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(337),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(337),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(337),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(337),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(337),
    [sym_opt_text_group_at] = STATE(337),
    [sym_token_at] = STATE(337),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(337),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(799),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(801),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(801),
    [sym_text] = ACTIONS(801),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(803),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(803),
    [sym_begin_group] = ACTIONS(803),
    [sym_alignment_tab] = ACTIONS(803),
    [sym_parameter_char] = ACTIONS(803),
    [sym_superscript] = ACTIONS(803),
    [sym_subscript] = ACTIONS(803),
    [sym_active_char] = ACTIONS(803),
    [sym_text] = ACTIONS(803),
  },
  [305] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(805),
  },
  [306] = {
    [sym_text_group_at] = STATE(340),
    [sym__whitespace] = ACTIONS(807),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(602),
    [sym__end_of_line] = ACTIONS(805),
  },
  [307] = {
    [sym_text_group_at] = STATE(341),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [308] = {
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
  [309] = {
    [sym__whitespace] = ACTIONS(626),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(626),
    [sym__end_of_line] = ACTIONS(626),
  },
  [310] = {
    [sym__common] = STATE(314),
    [sym__text_mode_common] = STATE(314),
    [sym_inline_verbatim] = STATE(314),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_text_env_at] = STATE(314),
    [sym__display_math_at] = STATE(314),
    [sym_tex_display_math_at] = STATE(314),
    [sym_latex_display_math_at] = STATE(314),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(314),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(314),
    [sym_tex_inline_math_at] = STATE(314),
    [sym_latex_inline_math_at] = STATE(314),
    [sym_inline_math_env_at] = STATE(314),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(314),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(314),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(314),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(314),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(314),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(314),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(314),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(314),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(314),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(314),
    [sym_opt_text_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(342),
    [aux_sym_text_mode_at_repeat1] = STATE(314),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(628),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(628),
    [sym_text] = ACTIONS(628),
  },
  [311] = {
    [sym_text_group_at] = STATE(343),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [313] = {
    [anon_sym_LBRACK] = ACTIONS(813),
    [anon_sym_RBRACK] = ACTIONS(813),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(813),
    [sym_begin_group] = ACTIONS(813),
    [sym_end_group] = ACTIONS(813),
    [sym_math_shift] = ACTIONS(813),
    [sym_alignment_tab] = ACTIONS(813),
    [sym_parameter_char] = ACTIONS(813),
    [sym_superscript] = ACTIONS(813),
    [sym_subscript] = ACTIONS(813),
    [sym_active_char] = ACTIONS(813),
    [sym_text] = ACTIONS(813),
  },
  [314] = {
    [sym__common] = STATE(314),
    [sym__text_mode_common] = STATE(314),
    [sym_inline_verbatim] = STATE(314),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(314),
    [sym_parameter] = STATE(314),
    [sym_text_env_at] = STATE(314),
    [sym__display_math_at] = STATE(314),
    [sym_tex_display_math_at] = STATE(314),
    [sym_latex_display_math_at] = STATE(314),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(314),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(314),
    [sym_tex_inline_math_at] = STATE(314),
    [sym_latex_inline_math_at] = STATE(314),
    [sym_inline_math_env_at] = STATE(314),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(314),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(314),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(314),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(314),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(314),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(314),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(314),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(314),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(314),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(314),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(314),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(314),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(314),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(314),
    [sym_opt_text_group_at] = STATE(314),
    [sym_token_at] = STATE(314),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(314),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(742),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(633),
    [sym_begin_group] = ACTIONS(636),
    [sym_math_shift] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(815),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(648),
    [sym_subscript] = ACTIONS(648),
    [sym_active_char] = ACTIONS(815),
    [sym_text] = ACTIONS(815),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(818),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(818),
  },
  [316] = {
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
  [317] = {
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
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [anon_sym_LBRACK] = ACTIONS(824),
    [anon_sym_RBRACK] = ACTIONS(824),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(824),
    [sym_begin_group] = ACTIONS(824),
    [sym_end_group] = ACTIONS(824),
    [sym_math_shift] = ACTIONS(824),
    [sym_alignment_tab] = ACTIONS(824),
    [sym_parameter_char] = ACTIONS(824),
    [sym_superscript] = ACTIONS(824),
    [sym_subscript] = ACTIONS(824),
    [sym_active_char] = ACTIONS(824),
    [sym_text] = ACTIONS(824),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(826),
    [anon_sym_RBRACK] = ACTIONS(826),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(826),
    [sym_begin_group] = ACTIONS(826),
    [sym_end_group] = ACTIONS(826),
    [sym_math_shift] = ACTIONS(826),
    [sym_alignment_tab] = ACTIONS(826),
    [sym_parameter_char] = ACTIONS(826),
    [sym_superscript] = ACTIONS(826),
    [sym_subscript] = ACTIONS(826),
    [sym_active_char] = ACTIONS(826),
    [sym_text] = ACTIONS(826),
  },
  [320] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(828),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [anon_sym_RBRACK] = ACTIONS(710),
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
  [322] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(421),
  },
  [323] = {
    [anon_sym_LBRACK] = ACTIONS(830),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(830),
    [sym_begin_group] = ACTIONS(830),
    [sym_alignment_tab] = ACTIONS(830),
    [sym_parameter_char] = ACTIONS(830),
    [sym_superscript] = ACTIONS(830),
    [sym_subscript] = ACTIONS(830),
    [sym_active_char] = ACTIONS(830),
    [sym_text] = ACTIONS(830),
  },
  [324] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(832),
  },
  [325] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(834),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(836),
    [sym__end_of_line] = ACTIONS(836),
  },
  [326] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(838),
  },
  [327] = {
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_RBRACK] = ACTIONS(840),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(840),
    [sym_begin_group] = ACTIONS(840),
    [sym_end_group] = ACTIONS(840),
    [sym_math_shift] = ACTIONS(840),
    [sym_alignment_tab] = ACTIONS(840),
    [sym_parameter_char] = ACTIONS(840),
    [sym_superscript] = ACTIONS(840),
    [sym_subscript] = ACTIONS(840),
    [sym_active_char] = ACTIONS(840),
    [sym_text] = ACTIONS(840),
  },
  [328] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(328),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(328),
    [sym_opt_math_group_at] = STATE(328),
    [sym_token_at] = STATE(328),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(769),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(775),
    [sym_end_group] = ACTIONS(778),
    [sym_alignment_tab] = ACTIONS(842),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(842),
    [sym_active_char] = ACTIONS(842),
    [sym_text] = ACTIONS(842),
  },
  [329] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(845),
  },
  [330] = {
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
  [331] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(849),
  },
  [332] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym_inline_verbatim] = STATE(284),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(284),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [333] = {
    [anon_sym_LBRACK] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(851),
    [sym_begin_group] = ACTIONS(851),
    [sym_end_group] = ACTIONS(851),
    [sym_math_shift] = ACTIONS(851),
    [sym_alignment_tab] = ACTIONS(851),
    [sym_parameter_char] = ACTIONS(851),
    [sym_superscript] = ACTIONS(851),
    [sym_subscript] = ACTIONS(851),
    [sym_active_char] = ACTIONS(851),
    [sym_text] = ACTIONS(851),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_RBRACK] = ACTIONS(853),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(853),
    [sym_begin_group] = ACTIONS(853),
    [sym_end_group] = ACTIONS(853),
    [sym_math_shift] = ACTIONS(853),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(853),
    [sym_superscript] = ACTIONS(853),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [sym_text] = ACTIONS(853),
  },
  [335] = {
    [sym__common] = STATE(335),
    [sym__math_mode_common] = STATE(335),
    [sym__math_mode_at] = STATE(335),
    [sym_parameter] = STATE(335),
    [sym_math_env_at] = STATE(335),
    [sym_tag_at] = STATE(335),
    [sym_tag_token] = STATE(212),
    [sym_escaped] = STATE(335),
    [sym_begin] = STATE(213),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(335),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(335),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(335),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(335),
    [sym_opt_math_group_at] = STATE(335),
    [sym_token_at] = STATE(335),
    [sym_begin_opt] = STATE(214),
    [aux_sym_math_mode_at_repeat1] = STATE(335),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(778),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(772),
    [sym_begin_group] = ACTIONS(775),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_active_char] = ACTIONS(855),
    [sym_text] = ACTIONS(855),
  },
  [336] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(570),
  },
  [337] = {
    [sym__common] = STATE(284),
    [sym__text_mode_common] = STATE(284),
    [sym_inline_verbatim] = STATE(284),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(284),
    [sym_parameter] = STATE(284),
    [sym_text_env_at] = STATE(284),
    [sym__display_math_at] = STATE(284),
    [sym_tex_display_math_at] = STATE(284),
    [sym_latex_display_math_at] = STATE(284),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(284),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(284),
    [sym_tex_inline_math_at] = STATE(284),
    [sym_latex_inline_math_at] = STATE(284),
    [sym_inline_math_env_at] = STATE(284),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(284),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(284),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(284),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(284),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(284),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(284),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(284),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(284),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(284),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(284),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(284),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(284),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(284),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(284),
    [sym_opt_text_group_at] = STATE(284),
    [sym_token_at] = STATE(284),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(284),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(858),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(574),
    [sym_text] = ACTIONS(574),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_parameter_char] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_active_char] = ACTIONS(860),
    [sym_text] = ACTIONS(860),
  },
  [339] = {
    [sym_text_group_at] = STATE(351),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(602),
    [sym__end_of_line] = ACTIONS(862),
  },
  [340] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(862),
  },
  [341] = {
    [anon_sym_LBRACK] = ACTIONS(864),
    [anon_sym_RBRACK] = ACTIONS(864),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [342] = {
    [sym__whitespace] = ACTIONS(813),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(813),
    [sym__end_of_line] = ACTIONS(813),
  },
  [343] = {
    [anon_sym_LBRACK] = ACTIONS(866),
    [anon_sym_RBRACK] = ACTIONS(866),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [344] = {
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
  [345] = {
    [anon_sym_LBRACK] = ACTIONS(868),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(868),
    [sym_begin_group] = ACTIONS(868),
    [sym_alignment_tab] = ACTIONS(868),
    [sym_parameter_char] = ACTIONS(868),
    [sym_superscript] = ACTIONS(868),
    [sym_subscript] = ACTIONS(868),
    [sym_active_char] = ACTIONS(868),
    [sym_text] = ACTIONS(868),
  },
  [346] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(870),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(872),
    [sym__end_of_line] = ACTIONS(872),
  },
  [347] = {
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
  [348] = {
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
  [349] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(740),
  },
  [350] = {
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
  [351] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(880),
  },
  [352] = {
    [anon_sym_LBRACK] = ACTIONS(882),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(882),
    [sym_begin_group] = ACTIONS(882),
    [sym_alignment_tab] = ACTIONS(882),
    [sym_parameter_char] = ACTIONS(882),
    [sym_superscript] = ACTIONS(882),
    [sym_subscript] = ACTIONS(882),
    [sym_active_char] = ACTIONS(882),
    [sym_text] = ACTIONS(882),
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
  [127] = {.count = 1, .reusable = true}, SHIFT(127),
  [129] = {.count = 1, .reusable = false}, SHIFT(128),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [135] = {.count = 1, .reusable = false}, SHIFT(129),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(130),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(131),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(132),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [155] = {.count = 1, .reusable = true}, SHIFT(133),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(134),
  [161] = {.count = 1, .reusable = true}, SHIFT(135),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [167] = {.count = 1, .reusable = false}, SHIFT(136),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(137),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(138),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(139),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(140),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(141),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [193] = {.count = 1, .reusable = false}, SHIFT(142),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [201] = {.count = 1, .reusable = false}, SHIFT(143),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(144),
  [209] = {.count = 1, .reusable = true}, SHIFT(145),
  [211] = {.count = 1, .reusable = false}, SHIFT(146),
  [213] = {.count = 1, .reusable = true}, SHIFT(147),
  [215] = {.count = 1, .reusable = true}, SHIFT(148),
  [217] = {.count = 1, .reusable = true}, SHIFT(150),
  [219] = {.count = 1, .reusable = true}, SHIFT(151),
  [221] = {.count = 1, .reusable = true}, SHIFT(153),
  [223] = {.count = 1, .reusable = true}, SHIFT(155),
  [225] = {.count = 1, .reusable = true}, SHIFT(157),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [229] = {.count = 1, .reusable = true}, SHIFT(158),
  [231] = {.count = 1, .reusable = true}, SHIFT(159),
  [233] = {.count = 1, .reusable = true}, SHIFT(160),
  [235] = {.count = 1, .reusable = true}, SHIFT(162),
  [237] = {.count = 1, .reusable = true}, SHIFT(163),
  [239] = {.count = 1, .reusable = true}, SHIFT(169),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(171),
  [245] = {.count = 1, .reusable = false}, SHIFT(174),
  [247] = {.count = 1, .reusable = true}, SHIFT(173),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [251] = {.count = 1, .reusable = true}, SHIFT(175),
  [253] = {.count = 1, .reusable = false}, SHIFT(169),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(178),
  [259] = {.count = 1, .reusable = false}, SHIFT(179),
  [261] = {.count = 1, .reusable = false}, SHIFT(180),
  [263] = {.count = 1, .reusable = false}, SHIFT(181),
  [265] = {.count = 1, .reusable = false}, SHIFT(182),
  [267] = {.count = 1, .reusable = true}, SHIFT(183),
  [269] = {.count = 1, .reusable = true}, SHIFT(184),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [273] = {.count = 1, .reusable = true}, SHIFT(187),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(182),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [281] = {.count = 1, .reusable = true}, SHIFT(190),
  [283] = {.count = 1, .reusable = true}, SHIFT(192),
  [285] = {.count = 1, .reusable = true}, SHIFT(194),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [289] = {.count = 1, .reusable = true}, SHIFT(195),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(197),
  [297] = {.count = 1, .reusable = false}, SHIFT(199),
  [299] = {.count = 1, .reusable = true}, SHIFT(200),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(201),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [313] = {.count = 1, .reusable = false}, SHIFT(203),
  [315] = {.count = 1, .reusable = false}, SHIFT(204),
  [317] = {.count = 1, .reusable = true}, SHIFT(205),
  [319] = {.count = 1, .reusable = true}, SHIFT(206),
  [321] = {.count = 1, .reusable = true}, SHIFT(207),
  [323] = {.count = 1, .reusable = true}, SHIFT(208),
  [325] = {.count = 1, .reusable = true}, SHIFT(209),
  [327] = {.count = 1, .reusable = true}, SHIFT(210),
  [329] = {.count = 1, .reusable = true}, SHIFT(215),
  [331] = {.count = 1, .reusable = true}, SHIFT(216),
  [333] = {.count = 1, .reusable = true}, SHIFT(219),
  [335] = {.count = 1, .reusable = true}, SHIFT(223),
  [337] = {.count = 1, .reusable = true}, SHIFT(225),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [343] = {.count = 1, .reusable = true}, SHIFT(238),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [347] = {.count = 1, .reusable = true}, SHIFT(239),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(241),
  [355] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(126),
  [383] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(242),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [403] = {.count = 1, .reusable = true}, SHIFT(243),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(145),
  [426] = {.count = 1, .reusable = true}, SHIFT(244),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [432] = {.count = 1, .reusable = true}, SHIFT(245),
  [434] = {.count = 1, .reusable = true}, SHIFT(246),
  [436] = {.count = 1, .reusable = true}, SHIFT(247),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [440] = {.count = 1, .reusable = true}, SHIFT(248),
  [442] = {.count = 1, .reusable = true}, SHIFT(250),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [450] = {.count = 1, .reusable = true}, SHIFT(253),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(158),
  [466] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [469] = {.count = 1, .reusable = true}, SHIFT(254),
  [471] = {.count = 1, .reusable = true}, SHIFT(255),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(162),
  [478] = {.count = 1, .reusable = true}, SHIFT(256),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [484] = {.count = 1, .reusable = true}, SHIFT(257),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(259),
  [490] = {.count = 1, .reusable = true}, SHIFT(261),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [496] = {.count = 1, .reusable = true}, SHIFT(262),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [500] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(174),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [509] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(72),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(175),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(178),
  [522] = {.count = 1, .reusable = true}, SHIFT(263),
  [524] = {.count = 1, .reusable = true}, SHIFT(264),
  [526] = {.count = 1, .reusable = true}, SHIFT(265),
  [528] = {.count = 1, .reusable = true}, SHIFT(266),
  [530] = {.count = 1, .reusable = true}, SHIFT(267),
  [532] = {.count = 1, .reusable = true}, SHIFT(268),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [536] = {.count = 1, .reusable = true}, SHIFT(269),
  [538] = {.count = 1, .reusable = true}, SHIFT(270),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [544] = {.count = 1, .reusable = true}, SHIFT(272),
  [546] = {.count = 1, .reusable = true}, SHIFT(273),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [554] = {.count = 1, .reusable = true}, SHIFT(279),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [560] = {.count = 1, .reusable = false}, SHIFT(281),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [564] = {.count = 1, .reusable = false}, SHIFT(282),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [572] = {.count = 1, .reusable = true}, SHIFT(283),
  [574] = {.count = 1, .reusable = true}, SHIFT(284),
  [576] = {.count = 1, .reusable = true}, SHIFT(285),
  [578] = {.count = 1, .reusable = true}, SHIFT(286),
  [580] = {.count = 1, .reusable = true}, SHIFT(288),
  [582] = {.count = 1, .reusable = true}, SHIFT(289),
  [584] = {.count = 1, .reusable = true}, SHIFT(291),
  [586] = {.count = 1, .reusable = true}, SHIFT(293),
  [588] = {.count = 1, .reusable = true}, SHIFT(295),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [592] = {.count = 1, .reusable = true}, SHIFT(296),
  [594] = {.count = 1, .reusable = true}, SHIFT(203),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [598] = {.count = 1, .reusable = true}, SHIFT(298),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [602] = {.count = 1, .reusable = true}, SHIFT(303),
  [604] = {.count = 1, .reusable = true}, SHIFT(304),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [610] = {.count = 1, .reusable = true}, SHIFT(307),
  [612] = {.count = 1, .reusable = true}, SHIFT(310),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [618] = {.count = 1, .reusable = true}, SHIFT(311),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [628] = {.count = 1, .reusable = true}, SHIFT(314),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(205),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(101),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(102),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(239),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(241),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 4),
  [658] = {.count = 1, .reusable = true}, SHIFT(315),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(246),
  [667] = {.count = 1, .reusable = true}, SHIFT(316),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [671] = {.count = 1, .reusable = true}, SHIFT(317),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(253),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [684] = {.count = 1, .reusable = false}, SHIFT(318),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [690] = {.count = 1, .reusable = false}, SHIFT(319),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [694] = {.count = 1, .reusable = true}, SHIFT(320),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [698] = {.count = 1, .reusable = true}, SHIFT(180),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [704] = {.count = 1, .reusable = true}, SHIFT(321),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [714] = {.count = 1, .reusable = true}, SHIFT(322),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [718] = {.count = 1, .reusable = true}, SHIFT(323),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [724] = {.count = 1, .reusable = true}, SHIFT(325),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [742] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(284),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [749] = {.count = 1, .reusable = true}, SHIFT(327),
  [751] = {.count = 1, .reusable = true}, SHIFT(328),
  [753] = {.count = 1, .reusable = true}, SHIFT(329),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [757] = {.count = 1, .reusable = true}, SHIFT(330),
  [759] = {.count = 1, .reusable = true}, SHIFT(332),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [767] = {.count = 1, .reusable = true}, SHIFT(335),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(208),
  [775] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(209),
  [778] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(296),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(298),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [799] = {.count = 1, .reusable = true}, SHIFT(336),
  [801] = {.count = 1, .reusable = true}, SHIFT(337),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [805] = {.count = 1, .reusable = true}, SHIFT(338),
  [807] = {.count = 1, .reusable = true}, SHIFT(339),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(314),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 5),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [828] = {.count = 1, .reusable = true}, SHIFT(344),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [832] = {.count = 1, .reusable = true}, SHIFT(345),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [838] = {.count = 1, .reusable = true}, SHIFT(346),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [845] = {.count = 1, .reusable = true}, SHIFT(347),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [849] = {.count = 1, .reusable = true}, SHIFT(348),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [855] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(335),
  [858] = {.count = 1, .reusable = true}, SHIFT(349),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [862] = {.count = 1, .reusable = true}, SHIFT(350),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [880] = {.count = 1, .reusable = true}, SHIFT(352),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
