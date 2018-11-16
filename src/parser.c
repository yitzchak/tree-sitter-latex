#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 346
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 4
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_verb_body = 1,
  sym_verb_delim = 2,
  anon_sym_verb = 3,
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
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 21,
  anon_sym_EQ = 22,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 23,
  anon_sym_emph = 24,
  anon_sym_footnote = 25,
  anon_sym_textbf = 26,
  anon_sym_textit = 27,
  anon_sym_texttt = 28,
  anon_sym_makeatletter = 29,
  anon_sym_makeatother = 30,
  sym_magic_comment = 31,
  sym_comment = 32,
  sym__escape = 33,
  sym_begin_group = 34,
  sym_end_group = 35,
  sym_math_shift = 36,
  sym_alignment_tab = 37,
  sym__end_of_line = 38,
  sym_parameter_char = 39,
  sym_superscript = 40,
  sym_subscript = 41,
  sym__name = 42,
  sym__name_at = 43,
  sym_active_char = 44,
  sym_text = 45,
  sym_number = 46,
  sym_document = 47,
  sym__common = 48,
  sym__text_mode_common = 49,
  sym_inline_verbatim = 50,
  sym_verb_token = 51,
  sym__text_mode = 52,
  sym_text_mode = 53,
  sym__text_mode_at = 54,
  sym_text_mode_at = 55,
  sym_text_mode_at_region = 56,
  sym__math_mode_common = 57,
  sym__math_mode = 58,
  sym_math_mode = 59,
  sym__math_mode_at = 60,
  sym_math_mode_at = 61,
  sym_parameter = 62,
  sym_text_env = 63,
  sym_text_env_at = 64,
  sym_math_env = 65,
  sym_math_env_at = 66,
  sym__display_math = 67,
  sym__display_math_at = 68,
  sym_tex_display_math = 69,
  sym_tex_display_math_at = 70,
  sym_latex_display_math = 71,
  sym_latex_display_math_at = 72,
  sym_begin_display_math = 73,
  sym_end_display_math = 74,
  sym_begin_inline_math = 75,
  sym_end_inline_math = 76,
  sym_display_math_env = 77,
  sym_display_math_env_at = 78,
  sym_display_math_begin = 79,
  sym_display_math_begin_at = 80,
  sym_display_math_end = 81,
  sym_display_math_env_group = 82,
  sym__inline_math = 83,
  sym__inline_math_at = 84,
  sym_tex_inline_math = 85,
  sym_tex_inline_math_at = 86,
  sym_latex_inline_math = 87,
  sym_latex_inline_math_at = 88,
  sym_inline_math_env = 89,
  sym_inline_math_env_at = 90,
  sym_inline_math_begin = 91,
  sym_inline_math_end = 92,
  sym_inline_math_env_group = 93,
  sym_tag = 94,
  sym_tag_at = 95,
  sym_tag_token = 96,
  sym_verbatim_env = 97,
  sym_verbatim_begin = 98,
  sym_verbatim_end = 99,
  sym_verbatim_text = 100,
  sym_verbatim_env_group = 101,
  sym_escaped = 102,
  sym_begin = 103,
  sym_begin_token = 104,
  sym_end = 105,
  sym_end_token = 106,
  sym_documentclass = 107,
  sym_documentclass_token = 108,
  sym_usepackage = 109,
  sym_usepackage_token = 110,
  sym_include = 111,
  sym_include_at = 112,
  sym_include_token = 113,
  sym_section = 114,
  sym_section_at = 115,
  sym_section_token = 116,
  sym_storage = 117,
  sym_storage_token = 118,
  sym_catcode = 119,
  sym_catcode_token = 120,
  sym_emph = 121,
  sym_emph_at = 122,
  sym_emph_token = 123,
  sym_footnote = 124,
  sym_footnote_at = 125,
  sym_footnote_token = 126,
  sym_textbf = 127,
  sym_textbf_at = 128,
  sym_textbf_token = 129,
  sym_textit = 130,
  sym_textit_at = 131,
  sym_textit_token = 132,
  sym_texttt = 133,
  sym_texttt_at = 134,
  sym_texttt_token = 135,
  sym_makeatletter = 136,
  sym_makeatletter_token = 137,
  sym_makeatother = 138,
  sym_makeatother_token = 139,
  sym_text_group = 140,
  sym_text_group_at = 141,
  sym_simple_text_group = 142,
  sym_opt_text_group = 143,
  sym_opt_text_group_at = 144,
  sym_math_group = 145,
  sym_math_group_at = 146,
  sym_opt_math_group = 147,
  sym_opt_math_group_at = 148,
  sym_math_text_group = 149,
  sym_math_text_group_at = 150,
  sym_token = 151,
  sym_token_at = 152,
  sym_begin_opt = 153,
  sym_end_opt = 154,
  aux_sym_text_mode_repeat1 = 155,
  aux_sym_text_mode_at_repeat1 = 156,
  aux_sym_math_mode_repeat1 = 157,
  aux_sym_math_mode_at_repeat1 = 158,
  aux_sym_parameter_repeat1 = 159,
  aux_sym_verbatim_text_repeat1 = 160,
  aux_sym_verbatim_text_repeat2 = 161,
  anon_alias_sym_class_name = 162,
  anon_alias_sym_env_name = 163,
  anon_alias_sym_package_name = 164,
  anon_alias_sym_text = 165,
};

static const char *ts_symbol_names[] = {
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [ts_builtin_sym_end] = "END",
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
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
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
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 39:
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
      ACCEPT_TOKEN(anon_sym_verb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 175:
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
        ADVANCE(36);
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
      ADVANCE(36);
      END_STATE();
    case 177:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(180);
      END_STATE();
    case 181:
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
        ADVANCE(33);
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
        ADVANCE(183);
      ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 184:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(185);
      if (lookahead == 'd')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 190:
      if (lookahead == '%')
        ADVANCE(20);
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
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 195:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
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
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(174);
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
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(200);
      if (lookahead == 'a')
        ADVANCE(209);
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(251);
      if (lookahead == 'g')
        ADVANCE(256);
      if (lookahead == 'l')
        ADVANCE(261);
      if (lookahead == 'm')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == 'v')
        ADVANCE(288);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(295);
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
      if (lookahead == 'a')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(226);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(238);
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
      if (lookahead == 'r')
        ADVANCE(219);
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
      if (lookahead == 'r')
        ADVANCE(220);
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
      if (lookahead == 'a')
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
        ADVANCE(36);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(224);
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
      if (lookahead == 'u')
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
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
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
        ADVANCE(228);
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 237:
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
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(240);
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(245);
      if (lookahead == 'u')
        ADVANCE(246);
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
      if (lookahead == 'a')
        ADVANCE(218);
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
      if (lookahead == 'a')
        ADVANCE(247);
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
      if (lookahead == 't')
        ADVANCE(248);
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
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
      if (lookahead == 'a')
        ADVANCE(253);
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(250);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
        ADVANCE(258);
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(271);
      if (lookahead == 'i')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(278);
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
      if (lookahead == 't')
        ADVANCE(272);
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
      if (lookahead == 'h')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(276);
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
      if (lookahead == 'e')
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
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
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
      if (lookahead == 't')
        ADVANCE(280);
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
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
      if (lookahead == 'n')
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
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
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
      if (lookahead == 'l')
        ADVANCE(287);
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
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(290);
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
    case 295:
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
    case 296:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 297:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 298:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'b')
        ADVANCE(312);
      if (lookahead == 'c')
        ADVANCE(317);
      if (lookahead == 'd')
        ADVANCE(329);
      if (lookahead == 'e')
        ADVANCE(344);
      if (lookahead == 'f')
        ADVANCE(349);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'k')
        ADVANCE(366);
      if (lookahead == 'm')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(382);
      if (lookahead == 's')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == 'v')
        ADVANCE(425);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(302);
      if (lookahead == 'p')
        ADVANCE(307);
      if (lookahead == 's')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name_at);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(318);
      if (lookahead == 'h')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == '`')
        ADVANCE(65);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(330);
      if (lookahead == 'o')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'm')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (lookahead == 'm')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'o')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(359);
      if (lookahead == 'p')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'l')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'u')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(369);
      if (lookahead == 'i')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(385);
      if (lookahead == 't')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'h')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead == 'u')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'i')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'o')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(398);
      if (lookahead == 's')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead == 'u')
        ADVANCE(402);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(403);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 's')
        ADVANCE(404);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(406);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'x')
        ADVANCE(407);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(408);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(409);
      if (lookahead == 'i')
        ADVANCE(411);
      if (lookahead == 't')
        ADVANCE(413);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'f')
        ADVANCE(410);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(412);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 't')
        ADVANCE(414);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(416);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(417);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'p')
        ADVANCE(418);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(419);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'c')
        ADVANCE(420);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'k')
        ADVANCE(421);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'a')
        ADVANCE(422);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(423);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'e')
        ADVANCE(424);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(426);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'r')
        ADVANCE(427);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'b')
        ADVANCE(428);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 431:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(53);
      if (lookahead == 'c')
        ADVANCE(185);
      if (lookahead == 'd')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(47);
      END_STATE();
    case 433:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 434:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'b')
        ADVANCE(312);
      if (lookahead == 'c')
        ADVANCE(317);
      if (lookahead == 'd')
        ADVANCE(329);
      if (lookahead == 'e')
        ADVANCE(344);
      if (lookahead == 'f')
        ADVANCE(349);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'k')
        ADVANCE(366);
      if (lookahead == 'm')
        ADVANCE(435);
      if (lookahead == 'p')
        ADVANCE(382);
      if (lookahead == 's')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == 'v')
        ADVANCE(425);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 436:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(312);
      if (lookahead == 'c')
        ADVANCE(437);
      if (lookahead == 'd')
        ADVANCE(438);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'k')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(439);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(440);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'g')
        ADVANCE(441);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 442:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'm')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'a')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'k')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'a')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 't')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'o')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 't')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'h')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'e')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'r')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_makeatother);
      END_STATE();
    case 454:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'b')
        ADVANCE(312);
      if (lookahead == 'c')
        ADVANCE(317);
      if (lookahead == 'd')
        ADVANCE(329);
      if (lookahead == 'e')
        ADVANCE(455);
      if (lookahead == 'f')
        ADVANCE(349);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'k')
        ADVANCE(366);
      if (lookahead == 'm')
        ADVANCE(435);
      if (lookahead == 'p')
        ADVANCE(382);
      if (lookahead == 's')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(405);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead == 'v')
        ADVANCE(425);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (lookahead == 'm')
        ADVANCE(346);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__name_at);
      if (lookahead == 'd')
        ADVANCE(457);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    case 458:
      if (lookahead == '%')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(312);
      if (lookahead == 'c')
        ADVANCE(437);
      if (lookahead == 'd')
        ADVANCE(438);
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'k')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(439);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(429);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(174);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(306);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 175},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 176},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 35, .external_lex_state = 2},
  [9] = {.lex_state = 177},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 178},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 176},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 179},
  [33] = {.lex_state = 181, .external_lex_state = 2},
  [34] = {.lex_state = 182},
  [35] = {.lex_state = 182},
  [36] = {.lex_state = 176},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 181},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 176},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 181},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 181},
  [47] = {.lex_state = 181},
  [48] = {.lex_state = 181},
  [49] = {.lex_state = 182},
  [50] = {.lex_state = 182},
  [51] = {.lex_state = 176},
  [52] = {.lex_state = 175},
  [53] = {.lex_state = 184},
  [54] = {.lex_state = 175},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 177, .external_lex_state = 3},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 190},
  [69] = {.lex_state = 176},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 35},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 178},
  [74] = {.lex_state = 195},
  [75] = {.lex_state = 176},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 199},
  [79] = {.lex_state = 181},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 181},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 176},
  [85] = {.lex_state = 181},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 176},
  [88] = {.lex_state = 181},
  [89] = {.lex_state = 176},
  [90] = {.lex_state = 176},
  [91] = {.lex_state = 181},
  [92] = {.lex_state = 296},
  [93] = {.lex_state = 297},
  [94] = {.lex_state = 176},
  [95] = {.lex_state = 176},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 176},
  [98] = {.lex_state = 176},
  [99] = {.lex_state = 176},
  [100] = {.lex_state = 298},
  [101] = {.lex_state = 175},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 35},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 35},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 176},
  [118] = {.lex_state = 176},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 176},
  [122] = {.lex_state = 176},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 176},
  [126] = {.lex_state = 179},
  [127] = {.lex_state = 35, .external_lex_state = 2},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 176},
  [140] = {.lex_state = 176},
  [141] = {.lex_state = 175},
  [142] = {.lex_state = 181},
  [143] = {.lex_state = 176},
  [144] = {.lex_state = 175},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 176},
  [147] = {.lex_state = 175},
  [148] = {.lex_state = 176},
  [149] = {.lex_state = 431},
  [150] = {.lex_state = 176},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 176},
  [153] = {.lex_state = 37},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 35, .external_lex_state = 2},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 176},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 433},
  [160] = {.lex_state = 176},
  [161] = {.lex_state = 176},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 176},
  [164] = {.lex_state = 35},
  [165] = {.lex_state = 181},
  [166] = {.lex_state = 176},
  [167] = {.lex_state = 199},
  [168] = {.lex_state = 176},
  [169] = {.lex_state = 178},
  [170] = {.lex_state = 194},
  [171] = {.lex_state = 178},
  [172] = {.lex_state = 176},
  [173] = {.lex_state = 176},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 175},
  [176] = {.lex_state = 175},
  [177] = {.lex_state = 175},
  [178] = {.lex_state = 175},
  [179] = {.lex_state = 175},
  [180] = {.lex_state = 35},
  [181] = {.lex_state = 181},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 178},
  [184] = {.lex_state = 181},
  [185] = {.lex_state = 181},
  [186] = {.lex_state = 35},
  [187] = {.lex_state = 176},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 37},
  [191] = {.lex_state = 35},
  [192] = {.lex_state = 176},
  [193] = {.lex_state = 35},
  [194] = {.lex_state = 176},
  [195] = {.lex_state = 297},
  [196] = {.lex_state = 179},
  [197] = {.lex_state = 35},
  [198] = {.lex_state = 176},
  [199] = {.lex_state = 182},
  [200] = {.lex_state = 182},
  [201] = {.lex_state = 434},
  [202] = {.lex_state = 176},
  [203] = {.lex_state = 175},
  [204] = {.lex_state = 436},
  [205] = {.lex_state = 175},
  [206] = {.lex_state = 35},
  [207] = {.lex_state = 35},
  [208] = {.lex_state = 35},
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 37},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 442},
  [213] = {.lex_state = 176},
  [214] = {.lex_state = 35},
  [215] = {.lex_state = 35},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 35},
  [218] = {.lex_state = 35},
  [219] = {.lex_state = 454},
  [220] = {.lex_state = 176},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 181},
  [223] = {.lex_state = 176},
  [224] = {.lex_state = 176},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 176},
  [228] = {.lex_state = 176},
  [229] = {.lex_state = 181},
  [230] = {.lex_state = 176},
  [231] = {.lex_state = 176},
  [232] = {.lex_state = 176},
  [233] = {.lex_state = 176},
  [234] = {.lex_state = 37},
  [235] = {.lex_state = 35},
  [236] = {.lex_state = 176},
  [237] = {.lex_state = 37},
  [238] = {.lex_state = 35},
  [239] = {.lex_state = 176},
  [240] = {.lex_state = 175},
  [241] = {.lex_state = 35},
  [242] = {.lex_state = 176},
  [243] = {.lex_state = 175},
  [244] = {.lex_state = 175},
  [245] = {.lex_state = 176},
  [246] = {.lex_state = 176},
  [247] = {.lex_state = 37},
  [248] = {.lex_state = 176},
  [249] = {.lex_state = 182},
  [250] = {.lex_state = 182},
  [251] = {.lex_state = 199},
  [252] = {.lex_state = 176},
  [253] = {.lex_state = 199},
  [254] = {.lex_state = 176},
  [255] = {.lex_state = 35},
  [256] = {.lex_state = 175},
  [257] = {.lex_state = 181},
  [258] = {.lex_state = 176},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 176},
  [261] = {.lex_state = 181},
  [262] = {.lex_state = 175},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 181},
  [265] = {.lex_state = 181},
  [266] = {.lex_state = 178},
  [267] = {.lex_state = 181},
  [268] = {.lex_state = 181},
  [269] = {.lex_state = 176},
  [270] = {.lex_state = 181},
  [271] = {.lex_state = 176},
  [272] = {.lex_state = 176},
  [273] = {.lex_state = 176},
  [274] = {.lex_state = 176},
  [275] = {.lex_state = 176},
  [276] = {.lex_state = 176},
  [277] = {.lex_state = 176},
  [278] = {.lex_state = 175},
  [279] = {.lex_state = 176},
  [280] = {.lex_state = 175},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 176},
  [283] = {.lex_state = 175},
  [284] = {.lex_state = 176},
  [285] = {.lex_state = 458},
  [286] = {.lex_state = 176},
  [287] = {.lex_state = 35},
  [288] = {.lex_state = 176},
  [289] = {.lex_state = 37},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 176},
  [292] = {.lex_state = 35},
  [293] = {.lex_state = 176},
  [294] = {.lex_state = 176},
  [295] = {.lex_state = 176},
  [296] = {.lex_state = 176},
  [297] = {.lex_state = 175},
  [298] = {.lex_state = 35},
  [299] = {.lex_state = 181},
  [300] = {.lex_state = 181},
  [301] = {.lex_state = 35},
  [302] = {.lex_state = 176},
  [303] = {.lex_state = 181},
  [304] = {.lex_state = 37},
  [305] = {.lex_state = 35},
  [306] = {.lex_state = 176},
  [307] = {.lex_state = 176},
  [308] = {.lex_state = 37},
  [309] = {.lex_state = 176},
  [310] = {.lex_state = 176},
  [311] = {.lex_state = 176},
  [312] = {.lex_state = 176},
  [313] = {.lex_state = 175},
  [314] = {.lex_state = 176},
  [315] = {.lex_state = 181},
  [316] = {.lex_state = 35},
  [317] = {.lex_state = 181},
  [318] = {.lex_state = 178},
  [319] = {.lex_state = 181},
  [320] = {.lex_state = 176},
  [321] = {.lex_state = 175},
  [322] = {.lex_state = 35},
  [323] = {.lex_state = 176},
  [324] = {.lex_state = 175},
  [325] = {.lex_state = 175},
  [326] = {.lex_state = 176},
  [327] = {.lex_state = 176},
  [328] = {.lex_state = 37},
  [329] = {.lex_state = 181},
  [330] = {.lex_state = 175},
  [331] = {.lex_state = 35},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 181},
  [334] = {.lex_state = 176},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 176},
  [337] = {.lex_state = 176},
  [338] = {.lex_state = 35},
  [339] = {.lex_state = 178},
  [340] = {.lex_state = 176},
  [341] = {.lex_state = 176},
  [342] = {.lex_state = 181},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 181},
  [345] = {.lex_state = 35},
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
    [sym__whitespace] = ACTIONS(127),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(155),
  },
  [41] = {
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(157),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_text] = ACTIONS(159),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(161),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(163),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(165),
  },
  [45] = {
    [sym__whitespace] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(169),
  },
  [46] = {
    [sym__whitespace] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(173),
  },
  [47] = {
    [sym__whitespace] = ACTIONS(175),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(177),
  },
  [48] = {
    [sym__whitespace] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(181),
  },
  [49] = {
    [sym__whitespace] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(185),
    [sym_begin_group] = ACTIONS(185),
    [sym_math_shift] = ACTIONS(185),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(185),
    [sym_active_char] = ACTIONS(185),
    [sym_text] = ACTIONS(187),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym__whitespace] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(189),
    [sym_begin_group] = ACTIONS(189),
    [sym_end_group] = ACTIONS(189),
    [sym_math_shift] = ACTIONS(189),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(189),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_text] = ACTIONS(193),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(195),
    [sym_begin_group] = ACTIONS(195),
    [sym_end_group] = ACTIONS(195),
    [sym_math_shift] = ACTIONS(195),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [52] = {
    [sym__common] = STATE(141),
    [sym__text_mode_common] = STATE(141),
    [sym_inline_verbatim] = STATE(141),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(141),
    [sym_text_mode_at_region] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_env] = STATE(141),
    [sym__display_math] = STATE(141),
    [sym_tex_display_math] = STATE(141),
    [sym_latex_display_math] = STATE(141),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(141),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(141),
    [sym_tex_inline_math] = STATE(141),
    [sym_latex_inline_math] = STATE(141),
    [sym_inline_math_env] = STATE(141),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(141),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(141),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(141),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(141),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(141),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(141),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(141),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(141),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(141),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [53] = {
    [anon_sym_tag] = ACTIONS(201),
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
    [sym__common] = STATE(144),
    [sym__math_mode_common] = STATE(144),
    [sym__math_mode] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_math_env] = STATE(144),
    [sym_tag] = STATE(144),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(144),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(144),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(144),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(144),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(144),
    [sym_opt_math_group] = STATE(144),
    [sym_token] = STATE(144),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(144),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_text] = ACTIONS(205),
  },
  [55] = {
    [sym__common] = STATE(61),
    [sym__math_mode_common] = STATE(61),
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(145),
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
    [sym_math_shift] = ACTIONS(207),
  },
  [57] = {
    [sym_math_text_group] = STATE(148),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(209),
  },
  [58] = {
    [sym__common] = STATE(151),
    [sym__math_mode_common] = STATE(151),
    [sym__math_mode] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_math_env] = STATE(151),
    [sym_tag] = STATE(151),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(151),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(150),
    [sym_end_token] = STATE(76),
    [sym_include] = STATE(151),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(151),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(151),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(151),
    [sym_opt_math_group] = STATE(151),
    [sym_token] = STATE(151),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(151),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(213),
  },
  [59] = {
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [60] = {
    [sym__common] = STATE(153),
    [sym__math_mode_common] = STATE(153),
    [sym__math_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_math_env] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(153),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(153),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(153),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(153),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(153),
    [sym_opt_math_group] = STATE(153),
    [sym_token] = STATE(153),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(152),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_text] = ACTIONS(215),
  },
  [61] = {
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
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_text] = ACTIONS(219),
  },
  [62] = {
    [sym_verb_body] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [63] = {
    [sym_end_display_math] = STATE(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
  },
  [64] = {
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
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [65] = {
    [sym_end_inline_math] = STATE(160),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
  },
  [66] = {
    [sym_display_math_end] = STATE(161),
    [sym_end_token] = STATE(162),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [67] = {
    [sym_inline_math_end] = STATE(163),
    [sym_end_token] = STATE(164),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
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
  [70] = {
    [sym_verbatim_end] = STATE(166),
    [sym_end_token] = STATE(71),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [71] = {
    [sym_verbatim_env_group] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(233),
  },
  [72] = {
    [aux_sym_verbatim_text_repeat1] = STATE(170),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(237),
  },
  [73] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(171),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(239),
    [sym__end_of_line] = ACTIONS(241),
  },
  [74] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(243),
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
  [76] = {
    [sym_simple_text_group] = STATE(172),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [77] = {
    [sym__common] = STATE(174),
    [sym__text_mode_common] = STATE(174),
    [sym_inline_verbatim] = STATE(174),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(174),
    [sym_text_mode_at_region] = STATE(174),
    [sym_parameter] = STATE(174),
    [sym_text_env] = STATE(174),
    [sym__display_math] = STATE(174),
    [sym_tex_display_math] = STATE(174),
    [sym_latex_display_math] = STATE(174),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(174),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(174),
    [sym_tex_inline_math] = STATE(174),
    [sym_latex_inline_math] = STATE(174),
    [sym_inline_math_env] = STATE(174),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(174),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(174),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(173),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(174),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(174),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(174),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(174),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(174),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(174),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(174),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(174),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(174),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(174),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(174),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(174),
    [sym_opt_text_group] = STATE(174),
    [sym_token] = STATE(174),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(174),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(247),
    [sym_text] = ACTIONS(247),
  },
  [78] = {
    [sym_display_math_env_name] = ACTIONS(249),
    [sym_inline_math_env_name] = ACTIONS(251),
    [sym_verbatim_env_name] = ACTIONS(253),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(255),
  },
  [79] = {
    [sym_text_group] = STATE(181),
    [sym_opt_text_group] = STATE(182),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(259),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [81] = {
    [sym_text_group] = STATE(184),
    [sym_opt_text_group] = STATE(185),
    [sym_begin_opt] = STATE(86),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(263),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(265),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [83] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(267),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [85] = {
    [sym_simple_text_group] = STATE(187),
    [sym__whitespace] = ACTIONS(271),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [86] = {
    [sym__common] = STATE(190),
    [sym__text_mode_common] = STATE(190),
    [sym_inline_verbatim] = STATE(190),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(190),
    [sym_text_mode_at_region] = STATE(190),
    [sym_parameter] = STATE(190),
    [sym_text_env] = STATE(190),
    [sym__display_math] = STATE(190),
    [sym_tex_display_math] = STATE(190),
    [sym_latex_display_math] = STATE(190),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(190),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(190),
    [sym_tex_inline_math] = STATE(190),
    [sym_latex_inline_math] = STATE(190),
    [sym_inline_math_env] = STATE(190),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(190),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(190),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(190),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(190),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(190),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(190),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(190),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(190),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(190),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(190),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(190),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(190),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(190),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(190),
    [sym_opt_text_group] = STATE(190),
    [sym_token] = STATE(190),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(189),
    [aux_sym_text_mode_repeat1] = STATE(190),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(273),
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
  [87] = {
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
  [88] = {
    [sym_simple_text_group] = STATE(192),
    [sym__whitespace] = ACTIONS(279),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [89] = {
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
  [90] = {
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
  [91] = {
    [sym_text_group] = STATE(194),
    [sym__whitespace] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [92] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(289),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [94] = {
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
  [95] = {
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
  [96] = {
    [sym_text_group] = STATE(198),
    [sym__whitespace] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [97] = {
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
  [98] = {
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
  [99] = {
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
    [anon_sym_makeatother] = ACTIONS(303),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(305),
  },
  [101] = {
    [sym__common] = STATE(203),
    [sym__text_mode_common] = STATE(203),
    [sym_inline_verbatim] = STATE(203),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(203),
    [sym_parameter] = STATE(203),
    [sym_text_env_at] = STATE(203),
    [sym__display_math_at] = STATE(203),
    [sym_tex_display_math_at] = STATE(203),
    [sym_latex_display_math_at] = STATE(203),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(203),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(203),
    [sym_tex_inline_math_at] = STATE(203),
    [sym_latex_inline_math_at] = STATE(203),
    [sym_inline_math_env_at] = STATE(203),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(203),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(203),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(203),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(203),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(203),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(203),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(203),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(203),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(203),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(203),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(203),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(203),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(203),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(203),
    [sym_opt_text_group_at] = STATE(203),
    [sym_token_at] = STATE(203),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(203),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(311),
    [sym_text] = ACTIONS(311),
  },
  [102] = {
    [sym__common] = STATE(211),
    [sym__math_mode_common] = STATE(211),
    [sym__math_mode_at] = STATE(211),
    [sym_math_mode_at] = STATE(207),
    [sym_parameter] = STATE(211),
    [sym_math_env_at] = STATE(211),
    [sym_tag_at] = STATE(211),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(211),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(211),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(211),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(211),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(211),
    [sym_opt_math_group_at] = STATE(211),
    [sym_token_at] = STATE(211),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(211),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [103] = {
    [sym_makeatother] = STATE(213),
    [sym_makeatother_token] = STATE(118),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(321),
  },
  [104] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(214),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [105] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(216),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [106] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(217),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [107] = {
    [sym__common] = STATE(215),
    [sym__math_mode_common] = STATE(215),
    [sym__math_mode_at] = STATE(215),
    [sym_math_mode_at] = STATE(218),
    [sym_parameter] = STATE(215),
    [sym_math_env_at] = STATE(215),
    [sym_tag_at] = STATE(215),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(215),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(215),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [108] = {
    [sym__common] = STATE(221),
    [sym__text_mode_common] = STATE(221),
    [sym_inline_verbatim] = STATE(221),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(221),
    [sym_parameter] = STATE(221),
    [sym_text_env_at] = STATE(221),
    [sym__display_math_at] = STATE(221),
    [sym_tex_display_math_at] = STATE(221),
    [sym_latex_display_math_at] = STATE(221),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(221),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(221),
    [sym_tex_inline_math_at] = STATE(221),
    [sym_latex_inline_math_at] = STATE(221),
    [sym_inline_math_env_at] = STATE(221),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(221),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(221),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(220),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(221),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(221),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(221),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(221),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(221),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(221),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(221),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(221),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(221),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(221),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(221),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(221),
    [sym_opt_text_group_at] = STATE(221),
    [sym_token_at] = STATE(221),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(221),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [109] = {
    [sym_display_math_env_group] = STATE(222),
    [sym_inline_math_env_group] = STATE(80),
    [sym_verbatim_env_group] = STATE(81),
    [sym_simple_text_group] = STATE(82),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [110] = {
    [sym_text_group_at] = STATE(223),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [111] = {
    [sym_text_group_at] = STATE(224),
    [sym_opt_text_group_at] = STATE(225),
    [sym_begin_opt] = STATE(226),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [112] = {
    [sym_text_group_at] = STATE(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [113] = {
    [sym_text_group_at] = STATE(228),
    [sym_opt_text_group_at] = STATE(229),
    [sym_begin_opt] = STATE(226),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [114] = {
    [sym_text_group_at] = STATE(230),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [115] = {
    [sym_text_group_at] = STATE(231),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [116] = {
    [sym_text_group_at] = STATE(232),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [117] = {
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
  [118] = {
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
  [119] = {
    [sym__common] = STATE(234),
    [sym__text_mode_common] = STATE(234),
    [sym_inline_verbatim] = STATE(234),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(234),
    [sym_parameter] = STATE(234),
    [sym_text_env_at] = STATE(234),
    [sym__display_math_at] = STATE(234),
    [sym_tex_display_math_at] = STATE(234),
    [sym_latex_display_math_at] = STATE(234),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(234),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(234),
    [sym_tex_inline_math_at] = STATE(234),
    [sym_latex_inline_math_at] = STATE(234),
    [sym_inline_math_env_at] = STATE(234),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(234),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(234),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(234),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(234),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(234),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(234),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(234),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(234),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(234),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(234),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(234),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(234),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(234),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(234),
    [sym_opt_text_group_at] = STATE(234),
    [sym_token_at] = STATE(234),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(233),
    [aux_sym_text_mode_at_repeat1] = STATE(234),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [120] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym_inline_verbatim] = STATE(235),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(235),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
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
  [121] = {
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
  [122] = {
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
  [123] = {
    [sym__common] = STATE(237),
    [sym__text_mode_common] = STATE(237),
    [sym_inline_verbatim] = STATE(237),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(237),
    [sym_text_mode_at_region] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_text_env] = STATE(237),
    [sym__display_math] = STATE(237),
    [sym_tex_display_math] = STATE(237),
    [sym_latex_display_math] = STATE(237),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(237),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(237),
    [sym_tex_inline_math] = STATE(237),
    [sym_latex_inline_math] = STATE(237),
    [sym_inline_math_env] = STATE(237),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(237),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(237),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(237),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(237),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(237),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(237),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(237),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(237),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(237),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(237),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(237),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(237),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(237),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(237),
    [sym_opt_text_group] = STATE(237),
    [sym_token] = STATE(237),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(236),
    [aux_sym_text_mode_repeat1] = STATE(237),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(343),
    [sym_text] = ACTIONS(343),
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
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(359),
    [sym_text] = ACTIONS(359),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_RBRACK] = ACTIONS(368),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(368),
    [sym_begin_group] = ACTIONS(368),
    [sym_end_group] = ACTIONS(368),
    [sym_math_shift] = ACTIONS(368),
    [sym_alignment_tab] = ACTIONS(368),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(368),
    [sym_subscript] = ACTIONS(368),
    [sym_active_char] = ACTIONS(368),
    [sym_text] = ACTIONS(368),
  },
  [126] = {
    [aux_sym_parameter_repeat1] = STATE(126),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(370),
    [sym_number] = ACTIONS(373),
  },
  [127] = {
    [sym_verb_delim] = ACTIONS(375),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [128] = {
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(377),
    [sym_alignment_tab] = ACTIONS(377),
    [sym_parameter_char] = ACTIONS(377),
    [sym_superscript] = ACTIONS(377),
    [sym_subscript] = ACTIONS(377),
    [sym_active_char] = ACTIONS(377),
    [sym_text] = ACTIONS(377),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [130] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(381),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(383),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(385),
  },
  [133] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(387),
  },
  [134] = {
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(389),
  },
  [135] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(391),
  },
  [136] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(393),
  },
  [137] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(395),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_active_char] = ACTIONS(397),
    [sym_text] = ACTIONS(397),
  },
  [139] = {
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
  [140] = {
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
  [141] = {
    [sym__common] = STATE(141),
    [sym__text_mode_common] = STATE(141),
    [sym_inline_verbatim] = STATE(141),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(141),
    [sym_text_mode_at_region] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_env] = STATE(141),
    [sym__display_math] = STATE(141),
    [sym_tex_display_math] = STATE(141),
    [sym_latex_display_math] = STATE(141),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(141),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(141),
    [sym_tex_inline_math] = STATE(141),
    [sym_latex_inline_math] = STATE(141),
    [sym_inline_math_env] = STATE(141),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(141),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(141),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(141),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(141),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(141),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(141),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(141),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(141),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(141),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [142] = {
    [sym__whitespace] = ACTIONS(406),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(408),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(410),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(410),
    [sym_begin_group] = ACTIONS(410),
    [sym_end_group] = ACTIONS(410),
    [sym_math_shift] = ACTIONS(410),
    [sym_alignment_tab] = ACTIONS(410),
    [sym_parameter_char] = ACTIONS(410),
    [sym_superscript] = ACTIONS(410),
    [sym_subscript] = ACTIONS(410),
    [sym_active_char] = ACTIONS(410),
    [sym_text] = ACTIONS(410),
  },
  [144] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_math_env] = STATE(240),
    [sym_tag] = STATE(240),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(240),
    [sym_opt_math_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(412),
    [sym_alignment_tab] = ACTIONS(414),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(414),
    [sym_subscript] = ACTIONS(414),
    [sym_active_char] = ACTIONS(414),
    [sym_text] = ACTIONS(414),
  },
  [145] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(416),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(418),
    [sym_begin_group] = ACTIONS(418),
    [sym_end_group] = ACTIONS(418),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(418),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(418),
    [sym_subscript] = ACTIONS(418),
    [sym_active_char] = ACTIONS(418),
    [sym_text] = ACTIONS(418),
  },
  [147] = {
    [sym__common] = STATE(244),
    [sym__text_mode_common] = STATE(244),
    [sym_inline_verbatim] = STATE(244),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(244),
    [sym_text_mode] = STATE(243),
    [sym_text_mode_at_region] = STATE(244),
    [sym_parameter] = STATE(244),
    [sym_text_env] = STATE(244),
    [sym__display_math] = STATE(244),
    [sym_tex_display_math] = STATE(244),
    [sym_latex_display_math] = STATE(244),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(244),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(244),
    [sym_tex_inline_math] = STATE(244),
    [sym_latex_inline_math] = STATE(244),
    [sym_inline_math_env] = STATE(244),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(244),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(244),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(244),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(244),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(244),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(244),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(244),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(244),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(244),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(244),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(244),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(244),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(244),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(244),
    [sym_opt_text_group] = STATE(244),
    [sym_token] = STATE(244),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(244),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(420),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(422),
    [sym_text] = ACTIONS(422),
  },
  [148] = {
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(424),
    [sym_end_group] = ACTIONS(424),
    [sym_math_shift] = ACTIONS(424),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(424),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_text] = ACTIONS(424),
  },
  [149] = {
    [anon_sym_tag] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(243),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(61),
  },
  [150] = {
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
  [151] = {
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
    [sym_end] = STATE(245),
    [sym_end_token] = STATE(76),
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
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [152] = {
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(428),
    [sym_begin_group] = ACTIONS(428),
    [sym_end_group] = ACTIONS(428),
    [sym_math_shift] = ACTIONS(428),
    [sym_alignment_tab] = ACTIONS(428),
    [sym_parameter_char] = ACTIONS(428),
    [sym_superscript] = ACTIONS(428),
    [sym_subscript] = ACTIONS(428),
    [sym_active_char] = ACTIONS(428),
    [sym_text] = ACTIONS(428),
  },
  [153] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env] = STATE(247),
    [sym_tag] = STATE(247),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(247),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(247),
    [sym_opt_math_group] = STATE(247),
    [sym_token] = STATE(247),
    [sym_begin_opt] = STATE(60),
    [sym_end_opt] = STATE(246),
    [aux_sym_math_mode_repeat1] = STATE(247),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(67),
    [sym_begin_group] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(430),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(430),
    [sym_subscript] = ACTIONS(430),
    [sym_active_char] = ACTIONS(430),
    [sym_text] = ACTIONS(430),
  },
  [154] = {
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
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(438),
    [sym_math_shift] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [155] = {
    [sym_verb_delim] = ACTIONS(449),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [156] = {
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [157] = {
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
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_text] = ACTIONS(455),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_end_group] = ACTIONS(460),
    [sym_math_shift] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(462),
    [sym_begin_group] = ACTIONS(462),
    [sym_end_group] = ACTIONS(462),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(462),
    [sym_subscript] = ACTIONS(462),
    [sym_active_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [162] = {
    [sym_display_math_env_group] = STATE(252),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(464),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(466),
    [sym_begin_group] = ACTIONS(466),
    [sym_end_group] = ACTIONS(466),
    [sym_math_shift] = ACTIONS(466),
    [sym_alignment_tab] = ACTIONS(466),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(466),
    [sym_subscript] = ACTIONS(466),
    [sym_active_char] = ACTIONS(466),
    [sym_text] = ACTIONS(466),
  },
  [164] = {
    [sym_inline_math_env_group] = STATE(254),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(468),
  },
  [165] = {
    [sym__whitespace] = ACTIONS(470),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(472),
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
    [sym_verbatim_env_name] = ACTIONS(476),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [168] = {
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
  [169] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(480),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(482),
    [sym__end_of_line] = ACTIONS(482),
  },
  [170] = {
    [aux_sym_verbatim_text_repeat1] = STATE(170),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(484),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(487),
  },
  [171] = {
    [aux_sym_verbatim_text_repeat1] = STATE(72),
    [aux_sym_verbatim_text_repeat2] = STATE(171),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(489),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(482),
    [sym__end_of_line] = ACTIONS(492),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
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
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(497),
    [sym_begin_group] = ACTIONS(497),
    [sym_end_group] = ACTIONS(497),
    [sym_math_shift] = ACTIONS(497),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(497),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [174] = {
    [sym__common] = STATE(174),
    [sym__text_mode_common] = STATE(174),
    [sym_inline_verbatim] = STATE(174),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(174),
    [sym_text_mode_at_region] = STATE(174),
    [sym_parameter] = STATE(174),
    [sym_text_env] = STATE(174),
    [sym__display_math] = STATE(174),
    [sym_tex_display_math] = STATE(174),
    [sym_latex_display_math] = STATE(174),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(174),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(174),
    [sym_tex_inline_math] = STATE(174),
    [sym_latex_inline_math] = STATE(174),
    [sym_inline_math_env] = STATE(174),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(174),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(174),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(174),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(174),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(174),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(174),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(174),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(174),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(174),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(174),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(174),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(174),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(174),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(174),
    [sym_opt_text_group] = STATE(174),
    [sym_token] = STATE(174),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(174),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(499),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(499),
    [sym_text] = ACTIONS(499),
  },
  [175] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(502),
  },
  [176] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(504),
  },
  [177] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(506),
  },
  [178] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(508),
  },
  [179] = {
    [sym__common] = STATE(262),
    [sym__text_mode_common] = STATE(262),
    [sym_inline_verbatim] = STATE(262),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(262),
    [sym_text_mode_at_region] = STATE(262),
    [sym_parameter] = STATE(262),
    [sym_text_env] = STATE(262),
    [sym__display_math] = STATE(262),
    [sym_tex_display_math] = STATE(262),
    [sym_latex_display_math] = STATE(262),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(262),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(262),
    [sym_tex_inline_math] = STATE(262),
    [sym_latex_inline_math] = STATE(262),
    [sym_inline_math_env] = STATE(262),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(262),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(262),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(262),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(262),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(262),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(262),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(262),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(262),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(262),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(262),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(262),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(262),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(262),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(262),
    [sym_opt_text_group] = STATE(262),
    [sym_token] = STATE(262),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(262),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(510),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(512),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(512),
    [sym_text] = ACTIONS(512),
  },
  [180] = {
    [anon_sym_LBRACK] = ACTIONS(514),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(514),
    [sym_begin_group] = ACTIONS(514),
    [sym_alignment_tab] = ACTIONS(514),
    [sym_parameter_char] = ACTIONS(514),
    [sym_superscript] = ACTIONS(514),
    [sym_subscript] = ACTIONS(514),
    [sym_active_char] = ACTIONS(514),
    [sym_text] = ACTIONS(514),
  },
  [181] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(516),
  },
  [182] = {
    [sym_text_group] = STATE(265),
    [sym__whitespace] = ACTIONS(518),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(516),
  },
  [183] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(520),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(522),
    [sym__end_of_line] = ACTIONS(522),
  },
  [184] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(524),
  },
  [185] = {
    [sym_text_group] = STATE(268),
    [sym__whitespace] = ACTIONS(526),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(524),
  },
  [186] = {
    [sym_simple_text_group] = STATE(269),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(528),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(528),
    [sym_begin_group] = ACTIONS(528),
    [sym_end_group] = ACTIONS(528),
    [sym_math_shift] = ACTIONS(528),
    [sym_alignment_tab] = ACTIONS(528),
    [sym_parameter_char] = ACTIONS(528),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(528),
    [sym_text] = ACTIONS(528),
  },
  [188] = {
    [sym__whitespace] = ACTIONS(339),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(339),
  },
  [189] = {
    [sym__whitespace] = ACTIONS(341),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(341),
    [sym__end_of_line] = ACTIONS(341),
  },
  [190] = {
    [sym__common] = STATE(237),
    [sym__text_mode_common] = STATE(237),
    [sym_inline_verbatim] = STATE(237),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(237),
    [sym_text_mode_at_region] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_text_env] = STATE(237),
    [sym__display_math] = STATE(237),
    [sym_tex_display_math] = STATE(237),
    [sym_latex_display_math] = STATE(237),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(237),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(237),
    [sym_tex_inline_math] = STATE(237),
    [sym_latex_inline_math] = STATE(237),
    [sym_inline_math_env] = STATE(237),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(237),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(237),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(237),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(237),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(237),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(237),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(237),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(237),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(237),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(237),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(237),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(237),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(237),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(237),
    [sym_opt_text_group] = STATE(237),
    [sym_token] = STATE(237),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(270),
    [aux_sym_text_mode_repeat1] = STATE(237),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(343),
    [sym_text] = ACTIONS(343),
  },
  [191] = {
    [sym_simple_text_group] = STATE(271),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(97),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(530),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(530),
    [sym_begin_group] = ACTIONS(530),
    [sym_end_group] = ACTIONS(530),
    [sym_math_shift] = ACTIONS(530),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(530),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_text] = ACTIONS(530),
  },
  [193] = {
    [sym_text_group] = STATE(272),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(532),
    [sym_begin_group] = ACTIONS(532),
    [sym_end_group] = ACTIONS(532),
    [sym_math_shift] = ACTIONS(532),
    [sym_alignment_tab] = ACTIONS(532),
    [sym_parameter_char] = ACTIONS(532),
    [sym_superscript] = ACTIONS(532),
    [sym_subscript] = ACTIONS(532),
    [sym_active_char] = ACTIONS(532),
    [sym_text] = ACTIONS(532),
  },
  [195] = {
    [anon_sym_EQ] = ACTIONS(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [196] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(534),
  },
  [197] = {
    [sym_text_group] = STATE(274),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(536),
    [sym_begin_group] = ACTIONS(536),
    [sym_end_group] = ACTIONS(536),
    [sym_math_shift] = ACTIONS(536),
    [sym_alignment_tab] = ACTIONS(536),
    [sym_parameter_char] = ACTIONS(536),
    [sym_superscript] = ACTIONS(536),
    [sym_subscript] = ACTIONS(536),
    [sym_active_char] = ACTIONS(536),
    [sym_text] = ACTIONS(536),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [sym__whitespace] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_end_group] = ACTIONS(538),
    [sym_math_shift] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_text] = ACTIONS(542),
  },
  [200] = {
    [sym__whitespace] = ACTIONS(544),
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
    [sym_text] = ACTIONS(548),
  },
  [201] = {
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
    [sym__name_at] = ACTIONS(305),
  },
  [202] = {
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
  [203] = {
    [sym__common] = STATE(278),
    [sym__text_mode_common] = STATE(278),
    [sym_inline_verbatim] = STATE(278),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_text_env_at] = STATE(278),
    [sym__display_math_at] = STATE(278),
    [sym_tex_display_math_at] = STATE(278),
    [sym_latex_display_math_at] = STATE(278),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(278),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(278),
    [sym_tex_inline_math_at] = STATE(278),
    [sym_latex_inline_math_at] = STATE(278),
    [sym_inline_math_env_at] = STATE(278),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(278),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(278),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(278),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(278),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(278),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(278),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(278),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(278),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(278),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(278),
    [sym_opt_text_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(278),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(552),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [204] = {
    [anon_sym_tag] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(305),
  },
  [205] = {
    [sym__common] = STATE(280),
    [sym__math_mode_common] = STATE(280),
    [sym__math_mode_at] = STATE(280),
    [sym_parameter] = STATE(280),
    [sym_math_env_at] = STATE(280),
    [sym_tag_at] = STATE(280),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(280),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(280),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(280),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(280),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(280),
    [sym_opt_math_group_at] = STATE(280),
    [sym_token_at] = STATE(280),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(280),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(556),
    [sym_alignment_tab] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_text] = ACTIONS(558),
  },
  [206] = {
    [sym__common] = STATE(211),
    [sym__math_mode_common] = STATE(211),
    [sym__math_mode_at] = STATE(211),
    [sym_math_mode_at] = STATE(281),
    [sym_parameter] = STATE(211),
    [sym_math_env_at] = STATE(211),
    [sym_tag_at] = STATE(211),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(211),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(211),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(211),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(211),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(211),
    [sym_opt_math_group_at] = STATE(211),
    [sym_token_at] = STATE(211),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(211),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_text] = ACTIONS(319),
  },
  [207] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(560),
  },
  [208] = {
    [sym_math_text_group_at] = STATE(284),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(562),
  },
  [209] = {
    [sym__common] = STATE(287),
    [sym__math_mode_common] = STATE(287),
    [sym__math_mode_at] = STATE(287),
    [sym_parameter] = STATE(287),
    [sym_math_env_at] = STATE(287),
    [sym_tag_at] = STATE(287),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(287),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(286),
    [sym_end_token] = STATE(76),
    [sym_include_at] = STATE(287),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(287),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(287),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(287),
    [sym_opt_math_group_at] = STATE(287),
    [sym_token_at] = STATE(287),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(287),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(564),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(566),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(566),
    [sym_subscript] = ACTIONS(566),
    [sym_active_char] = ACTIONS(566),
    [sym_text] = ACTIONS(566),
  },
  [210] = {
    [sym__common] = STATE(289),
    [sym__math_mode_common] = STATE(289),
    [sym__math_mode_at] = STATE(289),
    [sym_parameter] = STATE(289),
    [sym_math_env_at] = STATE(289),
    [sym_tag_at] = STATE(289),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(289),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(289),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(289),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(289),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(289),
    [sym_opt_math_group_at] = STATE(289),
    [sym_token_at] = STATE(289),
    [sym_begin_opt] = STATE(210),
    [sym_end_opt] = STATE(288),
    [aux_sym_math_mode_at_repeat1] = STATE(289),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_text] = ACTIONS(568),
  },
  [211] = {
    [sym__common] = STATE(290),
    [sym__math_mode_common] = STATE(290),
    [sym__math_mode_at] = STATE(290),
    [sym_parameter] = STATE(290),
    [sym_math_env_at] = STATE(290),
    [sym_tag_at] = STATE(290),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(290),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(290),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(290),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(290),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(290),
    [sym_opt_math_group_at] = STATE(290),
    [sym_token_at] = STATE(290),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(290),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(570),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(572),
    [sym_subscript] = ACTIONS(572),
    [sym_active_char] = ACTIONS(572),
    [sym_text] = ACTIONS(572),
  },
  [212] = {
    [anon_sym_makeatother] = ACTIONS(574),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(576),
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
  [214] = {
    [sym_end_display_math] = STATE(291),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
  },
  [215] = {
    [sym__common] = STATE(292),
    [sym__math_mode_common] = STATE(292),
    [sym__math_mode_at] = STATE(292),
    [sym_parameter] = STATE(292),
    [sym_math_env_at] = STATE(292),
    [sym_tag_at] = STATE(292),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(292),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(292),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(292),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(292),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(292),
    [sym_opt_math_group_at] = STATE(292),
    [sym_token_at] = STATE(292),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(292),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(570),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_text] = ACTIONS(578),
  },
  [216] = {
    [sym_end_inline_math] = STATE(293),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
  },
  [217] = {
    [sym_display_math_end] = STATE(294),
    [sym_end_token] = STATE(162),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [218] = {
    [sym_inline_math_end] = STATE(295),
    [sym_end_token] = STATE(164),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
  },
  [219] = {
    [anon_sym_verb] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(243),
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
    [sym__name_at] = ACTIONS(305),
  },
  [220] = {
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(580),
    [sym_begin_group] = ACTIONS(580),
    [sym_end_group] = ACTIONS(580),
    [sym_math_shift] = ACTIONS(580),
    [sym_alignment_tab] = ACTIONS(580),
    [sym_parameter_char] = ACTIONS(580),
    [sym_superscript] = ACTIONS(580),
    [sym_subscript] = ACTIONS(580),
    [sym_active_char] = ACTIONS(580),
    [sym_text] = ACTIONS(580),
  },
  [221] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym_inline_verbatim] = STATE(235),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_end] = STATE(296),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(235),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(337),
    [sym_text] = ACTIONS(337),
  },
  [222] = {
    [sym_text_group_at] = STATE(299),
    [sym_opt_text_group_at] = STATE(300),
    [sym_begin_opt] = STATE(226),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(582),
    [sym__end_of_line] = ACTIONS(584),
  },
  [223] = {
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
  [224] = {
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(588),
    [sym_begin_group] = ACTIONS(588),
    [sym_end_group] = ACTIONS(588),
    [sym_math_shift] = ACTIONS(588),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(588),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_text] = ACTIONS(588),
  },
  [225] = {
    [sym_text_group_at] = STATE(302),
    [sym__whitespace] = ACTIONS(590),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [226] = {
    [sym__common] = STATE(304),
    [sym__text_mode_common] = STATE(304),
    [sym_inline_verbatim] = STATE(304),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(304),
    [sym_parameter] = STATE(304),
    [sym_text_env_at] = STATE(304),
    [sym__display_math_at] = STATE(304),
    [sym_tex_display_math_at] = STATE(304),
    [sym_latex_display_math_at] = STATE(304),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(304),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(304),
    [sym_tex_inline_math_at] = STATE(304),
    [sym_latex_inline_math_at] = STATE(304),
    [sym_inline_math_env_at] = STATE(304),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(304),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(304),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(304),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(304),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(304),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(304),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(304),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(304),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(304),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(304),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(304),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(304),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(304),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(304),
    [sym_opt_text_group_at] = STATE(304),
    [sym_token_at] = STATE(304),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(303),
    [aux_sym_text_mode_at_repeat1] = STATE(304),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(592),
    [sym_text] = ACTIONS(592),
  },
  [227] = {
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(594),
    [sym_begin_group] = ACTIONS(594),
    [sym_end_group] = ACTIONS(594),
    [sym_math_shift] = ACTIONS(594),
    [sym_alignment_tab] = ACTIONS(594),
    [sym_parameter_char] = ACTIONS(594),
    [sym_superscript] = ACTIONS(594),
    [sym_subscript] = ACTIONS(594),
    [sym_active_char] = ACTIONS(594),
    [sym_text] = ACTIONS(594),
  },
  [228] = {
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
  [229] = {
    [sym_text_group_at] = STATE(306),
    [sym__whitespace] = ACTIONS(598),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [230] = {
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
  [231] = {
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
  [232] = {
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
  [233] = {
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
  [234] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env_at] = STATE(308),
    [sym__display_math_at] = STATE(308),
    [sym_tex_display_math_at] = STATE(308),
    [sym_latex_display_math_at] = STATE(308),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(308),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(308),
    [sym_tex_inline_math_at] = STATE(308),
    [sym_latex_inline_math_at] = STATE(308),
    [sym_inline_math_env_at] = STATE(308),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(308),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(308),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(308),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(308),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(308),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(308),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(308),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(308),
    [sym_opt_text_group_at] = STATE(308),
    [sym_token_at] = STATE(308),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(307),
    [aux_sym_text_mode_at_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(608),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(608),
    [sym_text] = ACTIONS(608),
  },
  [235] = {
    [sym__common] = STATE(235),
    [sym__text_mode_common] = STATE(235),
    [sym_inline_verbatim] = STATE(235),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(235),
    [sym_parameter] = STATE(235),
    [sym_text_env_at] = STATE(235),
    [sym__display_math_at] = STATE(235),
    [sym_tex_display_math_at] = STATE(235),
    [sym_latex_display_math_at] = STATE(235),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(235),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(235),
    [sym_tex_inline_math_at] = STATE(235),
    [sym_latex_inline_math_at] = STATE(235),
    [sym_inline_math_env_at] = STATE(235),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(235),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(235),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(235),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(235),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(235),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(235),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(235),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(235),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(235),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(235),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(235),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(235),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(235),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(235),
    [sym_opt_text_group_at] = STATE(235),
    [sym_token_at] = STATE(235),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(235),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(610),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(616),
    [sym_math_shift] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(625),
    [sym_superscript] = ACTIONS(628),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(622),
    [sym_text] = ACTIONS(622),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(631),
    [sym_begin_group] = ACTIONS(631),
    [sym_end_group] = ACTIONS(631),
    [sym_math_shift] = ACTIONS(631),
    [sym_alignment_tab] = ACTIONS(631),
    [sym_parameter_char] = ACTIONS(631),
    [sym_superscript] = ACTIONS(631),
    [sym_subscript] = ACTIONS(631),
    [sym_active_char] = ACTIONS(631),
    [sym_text] = ACTIONS(631),
  },
  [237] = {
    [sym__common] = STATE(237),
    [sym__text_mode_common] = STATE(237),
    [sym_inline_verbatim] = STATE(237),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(237),
    [sym_text_mode_at_region] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_text_env] = STATE(237),
    [sym__display_math] = STATE(237),
    [sym_tex_display_math] = STATE(237),
    [sym_latex_display_math] = STATE(237),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(237),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(237),
    [sym_tex_inline_math] = STATE(237),
    [sym_latex_inline_math] = STATE(237),
    [sym_inline_math_env] = STATE(237),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(237),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(237),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(237),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(237),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(237),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(237),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(237),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(237),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(237),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(237),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(237),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(237),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(237),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(237),
    [sym_opt_text_group] = STATE(237),
    [sym_token] = STATE(237),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(237),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(633),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(633),
    [sym_text] = ACTIONS(633),
  },
  [238] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(636),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(638),
    [sym_begin_group] = ACTIONS(638),
    [sym_end_group] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(638),
    [sym_alignment_tab] = ACTIONS(638),
    [sym_parameter_char] = ACTIONS(638),
    [sym_superscript] = ACTIONS(638),
    [sym_subscript] = ACTIONS(638),
    [sym_active_char] = ACTIONS(638),
    [sym_text] = ACTIONS(638),
  },
  [240] = {
    [sym__common] = STATE(240),
    [sym__math_mode_common] = STATE(240),
    [sym__math_mode] = STATE(240),
    [sym_parameter] = STATE(240),
    [sym_math_env] = STATE(240),
    [sym_tag] = STATE(240),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(240),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(240),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(240),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(240),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(240),
    [sym_opt_math_group] = STATE(240),
    [sym_token] = STATE(240),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(240),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(438),
    [sym_end_group] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(640),
    [sym_active_char] = ACTIONS(640),
    [sym_text] = ACTIONS(640),
  },
  [241] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(643),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(645),
    [sym_begin_group] = ACTIONS(645),
    [sym_end_group] = ACTIONS(645),
    [sym_math_shift] = ACTIONS(645),
    [sym_alignment_tab] = ACTIONS(645),
    [sym_parameter_char] = ACTIONS(645),
    [sym_superscript] = ACTIONS(645),
    [sym_subscript] = ACTIONS(645),
    [sym_active_char] = ACTIONS(645),
    [sym_text] = ACTIONS(645),
  },
  [243] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(647),
  },
  [244] = {
    [sym__common] = STATE(141),
    [sym__text_mode_common] = STATE(141),
    [sym_inline_verbatim] = STATE(141),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(141),
    [sym_text_mode_at_region] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_env] = STATE(141),
    [sym__display_math] = STATE(141),
    [sym_tex_display_math] = STATE(141),
    [sym_latex_display_math] = STATE(141),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(141),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(141),
    [sym_tex_inline_math] = STATE(141),
    [sym_latex_inline_math] = STATE(141),
    [sym_inline_math_env] = STATE(141),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(141),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(141),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(141),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(141),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(141),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(141),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(141),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(141),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(141),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [245] = {
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
  [247] = {
    [sym__common] = STATE(247),
    [sym__math_mode_common] = STATE(247),
    [sym__math_mode] = STATE(247),
    [sym_parameter] = STATE(247),
    [sym_math_env] = STATE(247),
    [sym_tag] = STATE(247),
    [sym_tag_token] = STATE(57),
    [sym_escaped] = STATE(247),
    [sym_begin] = STATE(58),
    [sym_begin_token] = STATE(59),
    [sym_include] = STATE(247),
    [sym_include_token] = STATE(19),
    [sym_storage] = STATE(247),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(247),
    [sym_catcode_token] = STATE(22),
    [sym_math_group] = STATE(247),
    [sym_opt_math_group] = STATE(247),
    [sym_token] = STATE(247),
    [sym_begin_opt] = STATE(60),
    [aux_sym_math_mode_repeat1] = STATE(247),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(653),
    [sym_subscript] = ACTIONS(653),
    [sym_active_char] = ACTIONS(653),
    [sym_text] = ACTIONS(653),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(656),
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
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(658),
    [sym__whitespace] = ACTIONS(660),
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
    [sym_text] = ACTIONS(662),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [sym__whitespace] = ACTIONS(666),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_RBRACK] = ACTIONS(664),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(664),
    [sym_begin_group] = ACTIONS(664),
    [sym_end_group] = ACTIONS(664),
    [sym_math_shift] = ACTIONS(664),
    [sym_alignment_tab] = ACTIONS(664),
    [sym_parameter_char] = ACTIONS(664),
    [sym_superscript] = ACTIONS(664),
    [sym_subscript] = ACTIONS(664),
    [sym_active_char] = ACTIONS(664),
    [sym_text] = ACTIONS(668),
  },
  [251] = {
    [sym_display_math_env_name] = ACTIONS(670),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_end_group] = ACTIONS(672),
    [sym_math_shift] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_active_char] = ACTIONS(672),
    [sym_text] = ACTIONS(672),
  },
  [253] = {
    [sym_inline_math_env_name] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [254] = {
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
  [255] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(678),
  },
  [256] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(680),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(682),
    [sym__end_of_line] = ACTIONS(682),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(684),
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
    [sym_text] = ACTIONS(684),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(686),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(686),
    [sym__end_of_line] = ACTIONS(686),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(688),
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
    [sym_text] = ACTIONS(688),
  },
  [261] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(195),
  },
  [262] = {
    [sym__common] = STATE(141),
    [sym__text_mode_common] = STATE(141),
    [sym_inline_verbatim] = STATE(141),
    [sym_verb_token] = STATE(8),
    [sym__text_mode] = STATE(141),
    [sym_text_mode_at_region] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_env] = STATE(141),
    [sym__display_math] = STATE(141),
    [sym_tex_display_math] = STATE(141),
    [sym_latex_display_math] = STATE(141),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(141),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(141),
    [sym_tex_inline_math] = STATE(141),
    [sym_latex_inline_math] = STATE(141),
    [sym_inline_math_env] = STATE(141),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(141),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(141),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(141),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(141),
    [sym_usepackage_token] = STATE(18),
    [sym_include] = STATE(141),
    [sym_include_token] = STATE(19),
    [sym_section] = STATE(141),
    [sym_section_token] = STATE(20),
    [sym_storage] = STATE(141),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(141),
    [sym_catcode_token] = STATE(22),
    [sym_emph] = STATE(141),
    [sym_emph_token] = STATE(23),
    [sym_footnote] = STATE(141),
    [sym_footnote_token] = STATE(24),
    [sym_textbf] = STATE(141),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(141),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(141),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(141),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(690),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_active_char] = ACTIONS(692),
    [sym_text] = ACTIONS(692),
  },
  [264] = {
    [sym_text_group] = STATE(317),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(694),
  },
  [265] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(694),
  },
  [266] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(696),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(698),
    [sym__end_of_line] = ACTIONS(698),
  },
  [267] = {
    [sym_text_group] = STATE(319),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(700),
  },
  [268] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(700),
  },
  [269] = {
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
  [270] = {
    [sym__whitespace] = ACTIONS(631),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(631),
    [sym__end_of_line] = ACTIONS(631),
  },
  [271] = {
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
  [272] = {
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
  [273] = {
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
  [274] = {
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
  [275] = {
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
  [276] = {
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
  [277] = {
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
  [278] = {
    [sym__common] = STATE(278),
    [sym__text_mode_common] = STATE(278),
    [sym_inline_verbatim] = STATE(278),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_text_env_at] = STATE(278),
    [sym__display_math_at] = STATE(278),
    [sym_tex_display_math_at] = STATE(278),
    [sym_latex_display_math_at] = STATE(278),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(278),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(278),
    [sym_tex_inline_math_at] = STATE(278),
    [sym_latex_inline_math_at] = STATE(278),
    [sym_inline_math_env_at] = STATE(278),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(278),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(278),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(278),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(278),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(278),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(278),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(278),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(278),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(278),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(278),
    [sym_opt_text_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(278),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(610),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(616),
    [sym_end_group] = ACTIONS(718),
    [sym_math_shift] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(720),
    [sym_parameter_char] = ACTIONS(625),
    [sym_superscript] = ACTIONS(628),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(720),
    [sym_text] = ACTIONS(720),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(723),
    [anon_sym_RBRACK] = ACTIONS(723),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(723),
    [sym_begin_group] = ACTIONS(723),
    [sym_end_group] = ACTIONS(723),
    [sym_math_shift] = ACTIONS(723),
    [sym_alignment_tab] = ACTIONS(723),
    [sym_parameter_char] = ACTIONS(723),
    [sym_superscript] = ACTIONS(723),
    [sym_subscript] = ACTIONS(723),
    [sym_active_char] = ACTIONS(723),
    [sym_text] = ACTIONS(723),
  },
  [280] = {
    [sym__common] = STATE(321),
    [sym__math_mode_common] = STATE(321),
    [sym__math_mode_at] = STATE(321),
    [sym_parameter] = STATE(321),
    [sym_math_env_at] = STATE(321),
    [sym_tag_at] = STATE(321),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(321),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(321),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(321),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(321),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(321),
    [sym_opt_math_group_at] = STATE(321),
    [sym_token_at] = STATE(321),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(321),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(725),
    [sym_alignment_tab] = ACTIONS(727),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(727),
    [sym_subscript] = ACTIONS(727),
    [sym_active_char] = ACTIONS(727),
    [sym_text] = ACTIONS(727),
  },
  [281] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(729),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(731),
    [anon_sym_RBRACK] = ACTIONS(731),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(731),
    [sym_begin_group] = ACTIONS(731),
    [sym_end_group] = ACTIONS(731),
    [sym_math_shift] = ACTIONS(731),
    [sym_alignment_tab] = ACTIONS(731),
    [sym_parameter_char] = ACTIONS(731),
    [sym_superscript] = ACTIONS(731),
    [sym_subscript] = ACTIONS(731),
    [sym_active_char] = ACTIONS(731),
    [sym_text] = ACTIONS(731),
  },
  [283] = {
    [sym__common] = STATE(325),
    [sym__text_mode_common] = STATE(325),
    [sym_inline_verbatim] = STATE(325),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(325),
    [sym_text_mode_at] = STATE(324),
    [sym_parameter] = STATE(325),
    [sym_text_env_at] = STATE(325),
    [sym__display_math_at] = STATE(325),
    [sym_tex_display_math_at] = STATE(325),
    [sym_latex_display_math_at] = STATE(325),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(325),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(325),
    [sym_tex_inline_math_at] = STATE(325),
    [sym_latex_inline_math_at] = STATE(325),
    [sym_inline_math_env_at] = STATE(325),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(325),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(325),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(325),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(325),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(325),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(325),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(325),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(325),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(325),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(325),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(325),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(325),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(325),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(325),
    [sym_opt_text_group_at] = STATE(325),
    [sym_token_at] = STATE(325),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(325),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(733),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(735),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(735),
    [sym_text] = ACTIONS(735),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(737),
    [anon_sym_RBRACK] = ACTIONS(737),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(737),
    [sym_begin_group] = ACTIONS(737),
    [sym_end_group] = ACTIONS(737),
    [sym_math_shift] = ACTIONS(737),
    [sym_alignment_tab] = ACTIONS(737),
    [sym_parameter_char] = ACTIONS(737),
    [sym_superscript] = ACTIONS(737),
    [sym_subscript] = ACTIONS(737),
    [sym_active_char] = ACTIONS(737),
    [sym_text] = ACTIONS(737),
  },
  [285] = {
    [anon_sym_tag] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(243),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name_at] = ACTIONS(305),
  },
  [286] = {
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
  [287] = {
    [sym__common] = STATE(292),
    [sym__math_mode_common] = STATE(292),
    [sym__math_mode_at] = STATE(292),
    [sym_parameter] = STATE(292),
    [sym_math_env_at] = STATE(292),
    [sym_tag_at] = STATE(292),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(292),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_end] = STATE(326),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(292),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(564),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_text] = ACTIONS(578),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_end_group] = ACTIONS(741),
    [sym_math_shift] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_text] = ACTIONS(741),
  },
  [289] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [sym_end_opt] = STATE(327),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(743),
    [sym_subscript] = ACTIONS(743),
    [sym_active_char] = ACTIONS(743),
    [sym_text] = ACTIONS(743),
  },
  [290] = {
    [sym__common] = STATE(290),
    [sym__math_mode_common] = STATE(290),
    [sym__math_mode_at] = STATE(290),
    [sym_parameter] = STATE(290),
    [sym_math_env_at] = STATE(290),
    [sym_tag_at] = STATE(290),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(290),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(290),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(290),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(290),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(290),
    [sym_opt_math_group_at] = STATE(290),
    [sym_token_at] = STATE(290),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(290),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(745),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(751),
    [sym_math_shift] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(756),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(756),
    [sym_subscript] = ACTIONS(756),
    [sym_active_char] = ACTIONS(756),
    [sym_text] = ACTIONS(756),
  },
  [291] = {
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
  [292] = {
    [sym__common] = STATE(292),
    [sym__math_mode_common] = STATE(292),
    [sym__math_mode_at] = STATE(292),
    [sym_parameter] = STATE(292),
    [sym_math_env_at] = STATE(292),
    [sym_tag_at] = STATE(292),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(292),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(292),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(292),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(292),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(292),
    [sym_opt_math_group_at] = STATE(292),
    [sym_token_at] = STATE(292),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(292),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(745),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(764),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(764),
    [sym_subscript] = ACTIONS(764),
    [sym_active_char] = ACTIONS(764),
    [sym_text] = ACTIONS(764),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(767),
    [anon_sym_RBRACK] = ACTIONS(767),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(767),
    [sym_begin_group] = ACTIONS(767),
    [sym_end_group] = ACTIONS(767),
    [sym_math_shift] = ACTIONS(767),
    [sym_alignment_tab] = ACTIONS(767),
    [sym_parameter_char] = ACTIONS(767),
    [sym_superscript] = ACTIONS(767),
    [sym_subscript] = ACTIONS(767),
    [sym_active_char] = ACTIONS(767),
    [sym_text] = ACTIONS(767),
  },
  [294] = {
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
  [297] = {
    [sym__common] = STATE(330),
    [sym__text_mode_common] = STATE(330),
    [sym_inline_verbatim] = STATE(330),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(330),
    [sym_parameter] = STATE(330),
    [sym_text_env_at] = STATE(330),
    [sym__display_math_at] = STATE(330),
    [sym_tex_display_math_at] = STATE(330),
    [sym_latex_display_math_at] = STATE(330),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(330),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(330),
    [sym_tex_inline_math_at] = STATE(330),
    [sym_latex_inline_math_at] = STATE(330),
    [sym_inline_math_env_at] = STATE(330),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(330),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(330),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(330),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(330),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(330),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(330),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(330),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(330),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(330),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(330),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(330),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(330),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(330),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(330),
    [sym_opt_text_group_at] = STATE(330),
    [sym_token_at] = STATE(330),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(330),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(775),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(777),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(777),
    [sym_text] = ACTIONS(777),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(779),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(779),
    [sym_begin_group] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(779),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(779),
    [sym_subscript] = ACTIONS(779),
    [sym_active_char] = ACTIONS(779),
    [sym_text] = ACTIONS(779),
  },
  [299] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(781),
  },
  [300] = {
    [sym_text_group_at] = STATE(333),
    [sym__whitespace] = ACTIONS(783),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(582),
    [sym__end_of_line] = ACTIONS(781),
  },
  [301] = {
    [sym_text_group_at] = STATE(334),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(785),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(785),
    [sym_begin_group] = ACTIONS(785),
    [sym_end_group] = ACTIONS(785),
    [sym_math_shift] = ACTIONS(785),
    [sym_alignment_tab] = ACTIONS(785),
    [sym_parameter_char] = ACTIONS(785),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(785),
    [sym_active_char] = ACTIONS(785),
    [sym_text] = ACTIONS(785),
  },
  [303] = {
    [sym__whitespace] = ACTIONS(606),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(606),
    [sym__end_of_line] = ACTIONS(606),
  },
  [304] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env_at] = STATE(308),
    [sym__display_math_at] = STATE(308),
    [sym_tex_display_math_at] = STATE(308),
    [sym_latex_display_math_at] = STATE(308),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(308),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(308),
    [sym_tex_inline_math_at] = STATE(308),
    [sym_latex_inline_math_at] = STATE(308),
    [sym_inline_math_env_at] = STATE(308),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(308),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(308),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(308),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(308),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(308),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(308),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(308),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(308),
    [sym_opt_text_group_at] = STATE(308),
    [sym_token_at] = STATE(308),
    [sym_begin_opt] = STATE(119),
    [sym_end_opt] = STATE(335),
    [aux_sym_text_mode_at_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(608),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(608),
    [sym_text] = ACTIONS(608),
  },
  [305] = {
    [sym_text_group_at] = STATE(336),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(105),
  },
  [306] = {
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
  [307] = {
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
  [308] = {
    [sym__common] = STATE(308),
    [sym__text_mode_common] = STATE(308),
    [sym_inline_verbatim] = STATE(308),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_env_at] = STATE(308),
    [sym__display_math_at] = STATE(308),
    [sym_tex_display_math_at] = STATE(308),
    [sym_latex_display_math_at] = STATE(308),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(308),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(308),
    [sym_tex_inline_math_at] = STATE(308),
    [sym_latex_inline_math_at] = STATE(308),
    [sym_inline_math_env_at] = STATE(308),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(308),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(308),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(308),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(308),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(308),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(308),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(308),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(308),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(308),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(308),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(308),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(308),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(308),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(308),
    [sym_opt_text_group_at] = STATE(308),
    [sym_token_at] = STATE(308),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(308),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(616),
    [sym_math_shift] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(791),
    [sym_parameter_char] = ACTIONS(625),
    [sym_superscript] = ACTIONS(628),
    [sym_subscript] = ACTIONS(628),
    [sym_active_char] = ACTIONS(791),
    [sym_text] = ACTIONS(791),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(794),
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
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(796),
    [anon_sym_RBRACK] = ACTIONS(796),
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
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(798),
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
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
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
  [313] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(802),
  },
  [314] = {
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
  [315] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(401),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(804),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(804),
    [sym_begin_group] = ACTIONS(804),
    [sym_alignment_tab] = ACTIONS(804),
    [sym_parameter_char] = ACTIONS(804),
    [sym_superscript] = ACTIONS(804),
    [sym_subscript] = ACTIONS(804),
    [sym_active_char] = ACTIONS(804),
    [sym_text] = ACTIONS(804),
  },
  [317] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(806),
  },
  [318] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(808),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(810),
    [sym__end_of_line] = ACTIONS(810),
  },
  [319] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(812),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_RBRACK] = ACTIONS(814),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(814),
    [sym_begin_group] = ACTIONS(814),
    [sym_end_group] = ACTIONS(814),
    [sym_math_shift] = ACTIONS(814),
    [sym_alignment_tab] = ACTIONS(814),
    [sym_parameter_char] = ACTIONS(814),
    [sym_superscript] = ACTIONS(814),
    [sym_subscript] = ACTIONS(814),
    [sym_active_char] = ACTIONS(814),
    [sym_text] = ACTIONS(814),
  },
  [321] = {
    [sym__common] = STATE(321),
    [sym__math_mode_common] = STATE(321),
    [sym__math_mode_at] = STATE(321),
    [sym_parameter] = STATE(321),
    [sym_math_env_at] = STATE(321),
    [sym_tag_at] = STATE(321),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(321),
    [sym_begin] = STATE(209),
    [sym_begin_token] = STATE(59),
    [sym_include_at] = STATE(321),
    [sym_include_token] = STATE(110),
    [sym_storage] = STATE(321),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(321),
    [sym_catcode_token] = STATE(22),
    [sym_math_group_at] = STATE(321),
    [sym_opt_math_group_at] = STATE(321),
    [sym_token_at] = STATE(321),
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(321),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(745),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(751),
    [sym_end_group] = ACTIONS(754),
    [sym_alignment_tab] = ACTIONS(816),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(816),
    [sym_subscript] = ACTIONS(816),
    [sym_active_char] = ACTIONS(816),
    [sym_text] = ACTIONS(816),
  },
  [322] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(819),
  },
  [323] = {
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
  [324] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(823),
  },
  [325] = {
    [sym__common] = STATE(278),
    [sym__text_mode_common] = STATE(278),
    [sym_inline_verbatim] = STATE(278),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_text_env_at] = STATE(278),
    [sym__display_math_at] = STATE(278),
    [sym_tex_display_math_at] = STATE(278),
    [sym_latex_display_math_at] = STATE(278),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(278),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(278),
    [sym_tex_inline_math_at] = STATE(278),
    [sym_latex_inline_math_at] = STATE(278),
    [sym_inline_math_env_at] = STATE(278),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(278),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(278),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(278),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(278),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(278),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(278),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(278),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(278),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(278),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(278),
    [sym_opt_text_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(278),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(335),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [326] = {
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
  [327] = {
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
  [328] = {
    [sym__common] = STATE(328),
    [sym__math_mode_common] = STATE(328),
    [sym__math_mode_at] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_math_env_at] = STATE(328),
    [sym_tag_at] = STATE(328),
    [sym_tag_token] = STATE(208),
    [sym_escaped] = STATE(328),
    [sym_begin] = STATE(209),
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
    [sym_begin_opt] = STATE(210),
    [aux_sym_math_mode_at_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_RBRACK] = ACTIONS(754),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(748),
    [sym_begin_group] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(829),
    [sym_subscript] = ACTIONS(829),
    [sym_active_char] = ACTIONS(829),
    [sym_text] = ACTIONS(829),
  },
  [329] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(550),
  },
  [330] = {
    [sym__common] = STATE(278),
    [sym__text_mode_common] = STATE(278),
    [sym_inline_verbatim] = STATE(278),
    [sym_verb_token] = STATE(8),
    [sym__text_mode_at] = STATE(278),
    [sym_parameter] = STATE(278),
    [sym_text_env_at] = STATE(278),
    [sym__display_math_at] = STATE(278),
    [sym_tex_display_math_at] = STATE(278),
    [sym_latex_display_math_at] = STATE(278),
    [sym_begin_display_math] = STATE(104),
    [sym_begin_inline_math] = STATE(105),
    [sym_display_math_env_at] = STATE(278),
    [sym_display_math_begin_at] = STATE(106),
    [sym__inline_math_at] = STATE(278),
    [sym_tex_inline_math_at] = STATE(278),
    [sym_latex_inline_math_at] = STATE(278),
    [sym_inline_math_env_at] = STATE(278),
    [sym_inline_math_begin] = STATE(107),
    [sym_verbatim_env] = STATE(278),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(278),
    [sym_begin] = STATE(108),
    [sym_begin_token] = STATE(109),
    [sym_documentclass] = STATE(278),
    [sym_documentclass_token] = STATE(17),
    [sym_usepackage] = STATE(278),
    [sym_usepackage_token] = STATE(18),
    [sym_include_at] = STATE(278),
    [sym_include_token] = STATE(110),
    [sym_section_at] = STATE(278),
    [sym_section_token] = STATE(111),
    [sym_storage] = STATE(278),
    [sym_storage_token] = STATE(21),
    [sym_catcode] = STATE(278),
    [sym_catcode_token] = STATE(22),
    [sym_emph_at] = STATE(278),
    [sym_emph_token] = STATE(112),
    [sym_footnote_at] = STATE(278),
    [sym_footnote_token] = STATE(113),
    [sym_textbf_at] = STATE(278),
    [sym_textbf_token] = STATE(114),
    [sym_textit_at] = STATE(278),
    [sym_textit_token] = STATE(115),
    [sym_texttt_at] = STATE(278),
    [sym_texttt_token] = STATE(116),
    [sym_text_group_at] = STATE(278),
    [sym_opt_text_group_at] = STATE(278),
    [sym_token_at] = STATE(278),
    [sym_begin_opt] = STATE(119),
    [aux_sym_text_mode_at_repeat1] = STATE(278),
    [aux_sym_parameter_repeat1] = STATE(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(105),
    [sym_end_group] = ACTIONS(832),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(554),
    [sym_text] = ACTIONS(554),
  },
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(834),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(834),
    [sym_begin_group] = ACTIONS(834),
    [sym_alignment_tab] = ACTIONS(834),
    [sym_parameter_char] = ACTIONS(834),
    [sym_superscript] = ACTIONS(834),
    [sym_subscript] = ACTIONS(834),
    [sym_active_char] = ACTIONS(834),
    [sym_text] = ACTIONS(834),
  },
  [332] = {
    [sym_text_group_at] = STATE(344),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(582),
    [sym__end_of_line] = ACTIONS(836),
  },
  [333] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(836),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_RBRACK] = ACTIONS(838),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(838),
    [sym_begin_group] = ACTIONS(838),
    [sym_end_group] = ACTIONS(838),
    [sym_math_shift] = ACTIONS(838),
    [sym_alignment_tab] = ACTIONS(838),
    [sym_parameter_char] = ACTIONS(838),
    [sym_superscript] = ACTIONS(838),
    [sym_subscript] = ACTIONS(838),
    [sym_active_char] = ACTIONS(838),
    [sym_text] = ACTIONS(838),
  },
  [335] = {
    [sym__whitespace] = ACTIONS(789),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(789),
    [sym__end_of_line] = ACTIONS(789),
  },
  [336] = {
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
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(682),
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
    [sym_text] = ACTIONS(682),
  },
  [338] = {
    [anon_sym_LBRACK] = ACTIONS(842),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(842),
    [sym_begin_group] = ACTIONS(842),
    [sym_alignment_tab] = ACTIONS(842),
    [sym_parameter_char] = ACTIONS(842),
    [sym_superscript] = ACTIONS(842),
    [sym_subscript] = ACTIONS(842),
    [sym_active_char] = ACTIONS(842),
    [sym_text] = ACTIONS(842),
  },
  [339] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(844),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(846),
    [sym__end_of_line] = ACTIONS(846),
  },
  [340] = {
    [anon_sym_LBRACK] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(848),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(848),
    [sym_begin_group] = ACTIONS(848),
    [sym_end_group] = ACTIONS(848),
    [sym_math_shift] = ACTIONS(848),
    [sym_alignment_tab] = ACTIONS(848),
    [sym_parameter_char] = ACTIONS(848),
    [sym_superscript] = ACTIONS(848),
    [sym_subscript] = ACTIONS(848),
    [sym_active_char] = ACTIONS(848),
    [sym_text] = ACTIONS(848),
  },
  [341] = {
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
  [342] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(716),
  },
  [343] = {
    [anon_sym_LBRACK] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(852),
    [sym_begin_group] = ACTIONS(852),
    [sym_alignment_tab] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(852),
    [sym_superscript] = ACTIONS(852),
    [sym_subscript] = ACTIONS(852),
    [sym_active_char] = ACTIONS(852),
    [sym_text] = ACTIONS(852),
  },
  [344] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(854),
  },
  [345] = {
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
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(133),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(134),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(135),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(136),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(137),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(138),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [191] = {.count = 1, .reusable = false}, SHIFT(139),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(140),
  [199] = {.count = 1, .reusable = true}, SHIFT(141),
  [201] = {.count = 1, .reusable = false}, SHIFT(142),
  [203] = {.count = 1, .reusable = true}, SHIFT(143),
  [205] = {.count = 1, .reusable = true}, SHIFT(144),
  [207] = {.count = 1, .reusable = true}, SHIFT(146),
  [209] = {.count = 1, .reusable = true}, SHIFT(147),
  [211] = {.count = 1, .reusable = true}, SHIFT(149),
  [213] = {.count = 1, .reusable = true}, SHIFT(151),
  [215] = {.count = 1, .reusable = true}, SHIFT(153),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(154),
  [221] = {.count = 1, .reusable = true}, SHIFT(155),
  [223] = {.count = 1, .reusable = true}, SHIFT(156),
  [225] = {.count = 1, .reusable = true}, SHIFT(158),
  [227] = {.count = 1, .reusable = true}, SHIFT(159),
  [229] = {.count = 1, .reusable = true}, SHIFT(165),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [233] = {.count = 1, .reusable = true}, SHIFT(167),
  [235] = {.count = 1, .reusable = false}, SHIFT(170),
  [237] = {.count = 1, .reusable = true}, SHIFT(169),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(171),
  [243] = {.count = 1, .reusable = false}, SHIFT(165),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(174),
  [249] = {.count = 1, .reusable = false}, SHIFT(175),
  [251] = {.count = 1, .reusable = false}, SHIFT(176),
  [253] = {.count = 1, .reusable = false}, SHIFT(177),
  [255] = {.count = 1, .reusable = false}, SHIFT(178),
  [257] = {.count = 1, .reusable = true}, SHIFT(179),
  [259] = {.count = 1, .reusable = true}, SHIFT(180),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(183),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(178),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [271] = {.count = 1, .reusable = true}, SHIFT(186),
  [273] = {.count = 1, .reusable = true}, SHIFT(188),
  [275] = {.count = 1, .reusable = true}, SHIFT(190),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [279] = {.count = 1, .reusable = true}, SHIFT(191),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(193),
  [287] = {.count = 1, .reusable = false}, SHIFT(195),
  [289] = {.count = 1, .reusable = true}, SHIFT(196),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(197),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [303] = {.count = 1, .reusable = false}, SHIFT(199),
  [305] = {.count = 1, .reusable = false}, SHIFT(200),
  [307] = {.count = 1, .reusable = true}, SHIFT(201),
  [309] = {.count = 1, .reusable = true}, SHIFT(202),
  [311] = {.count = 1, .reusable = true}, SHIFT(203),
  [313] = {.count = 1, .reusable = true}, SHIFT(204),
  [315] = {.count = 1, .reusable = true}, SHIFT(205),
  [317] = {.count = 1, .reusable = true}, SHIFT(206),
  [319] = {.count = 1, .reusable = true}, SHIFT(211),
  [321] = {.count = 1, .reusable = true}, SHIFT(212),
  [323] = {.count = 1, .reusable = true}, SHIFT(215),
  [325] = {.count = 1, .reusable = true}, SHIFT(219),
  [327] = {.count = 1, .reusable = true}, SHIFT(221),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [333] = {.count = 1, .reusable = true}, SHIFT(234),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(235),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(237),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(32),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(126),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(141),
  [406] = {.count = 1, .reusable = true}, SHIFT(238),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [412] = {.count = 1, .reusable = true}, SHIFT(239),
  [414] = {.count = 1, .reusable = true}, SHIFT(240),
  [416] = {.count = 1, .reusable = true}, SHIFT(241),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [420] = {.count = 1, .reusable = true}, SHIFT(242),
  [422] = {.count = 1, .reusable = true}, SHIFT(244),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [430] = {.count = 1, .reusable = true}, SHIFT(247),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(53),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(54),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(154),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(32),
  [449] = {.count = 1, .reusable = true}, SHIFT(248),
  [451] = {.count = 1, .reusable = true}, SHIFT(249),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(158),
  [458] = {.count = 1, .reusable = true}, SHIFT(250),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [464] = {.count = 1, .reusable = true}, SHIFT(251),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [468] = {.count = 1, .reusable = true}, SHIFT(253),
  [470] = {.count = 1, .reusable = true}, SHIFT(255),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [476] = {.count = 1, .reusable = true}, SHIFT(256),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [480] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [482] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(170),
  [487] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(72),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(171),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(174),
  [502] = {.count = 1, .reusable = true}, SHIFT(257),
  [504] = {.count = 1, .reusable = true}, SHIFT(258),
  [506] = {.count = 1, .reusable = true}, SHIFT(259),
  [508] = {.count = 1, .reusable = true}, SHIFT(260),
  [510] = {.count = 1, .reusable = true}, SHIFT(261),
  [512] = {.count = 1, .reusable = true}, SHIFT(262),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [516] = {.count = 1, .reusable = true}, SHIFT(263),
  [518] = {.count = 1, .reusable = true}, SHIFT(264),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [524] = {.count = 1, .reusable = true}, SHIFT(266),
  [526] = {.count = 1, .reusable = true}, SHIFT(267),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [534] = {.count = 1, .reusable = true}, SHIFT(273),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [540] = {.count = 1, .reusable = false}, SHIFT(275),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [544] = {.count = 1, .reusable = false}, SHIFT(276),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_token_at, 2),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [552] = {.count = 1, .reusable = true}, SHIFT(277),
  [554] = {.count = 1, .reusable = true}, SHIFT(278),
  [556] = {.count = 1, .reusable = true}, SHIFT(279),
  [558] = {.count = 1, .reusable = true}, SHIFT(280),
  [560] = {.count = 1, .reusable = true}, SHIFT(282),
  [562] = {.count = 1, .reusable = true}, SHIFT(283),
  [564] = {.count = 1, .reusable = true}, SHIFT(285),
  [566] = {.count = 1, .reusable = true}, SHIFT(287),
  [568] = {.count = 1, .reusable = true}, SHIFT(289),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode_at, 1),
  [572] = {.count = 1, .reusable = true}, SHIFT(290),
  [574] = {.count = 1, .reusable = true}, SHIFT(199),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at_region, 3),
  [578] = {.count = 1, .reusable = true}, SHIFT(292),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 2),
  [582] = {.count = 1, .reusable = true}, SHIFT(297),
  [584] = {.count = 1, .reusable = true}, SHIFT(298),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_include_at, 2),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 2),
  [590] = {.count = 1, .reusable = true}, SHIFT(301),
  [592] = {.count = 1, .reusable = true}, SHIFT(304),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 2),
  [598] = {.count = 1, .reusable = true}, SHIFT(305),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [608] = {.count = 1, .reusable = true}, SHIFT(308),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(201),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(101),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(102),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(235),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(237),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(240),
  [643] = {.count = 1, .reusable = true}, SHIFT(309),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [647] = {.count = 1, .reusable = true}, SHIFT(310),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(247),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [660] = {.count = 1, .reusable = false}, SHIFT(311),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [666] = {.count = 1, .reusable = false}, SHIFT(312),
  [668] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [670] = {.count = 1, .reusable = true}, SHIFT(313),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [674] = {.count = 1, .reusable = true}, SHIFT(176),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [680] = {.count = 1, .reusable = true}, SHIFT(314),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [690] = {.count = 1, .reusable = true}, SHIFT(315),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [694] = {.count = 1, .reusable = true}, SHIFT(316),
  [696] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [700] = {.count = 1, .reusable = true}, SHIFT(318),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 4, .alias_sequence_id = 7),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 4, .alias_sequence_id = 8),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 4),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 3),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [718] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(278),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 2),
  [725] = {.count = 1, .reusable = true}, SHIFT(320),
  [727] = {.count = 1, .reusable = true}, SHIFT(321),
  [729] = {.count = 1, .reusable = true}, SHIFT(322),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math_at, 3),
  [733] = {.count = 1, .reusable = true}, SHIFT(323),
  [735] = {.count = 1, .reusable = true}, SHIFT(325),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_tag_at, 2),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 2),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 2),
  [743] = {.count = 1, .reusable = true}, SHIFT(328),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(204),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(205),
  [754] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(290),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(32),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math_at, 3),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(292),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math_at, 3),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_at, 3),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_at, 3),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_text_env_at, 3),
  [775] = {.count = 1, .reusable = true}, SHIFT(329),
  [777] = {.count = 1, .reusable = true}, SHIFT(330),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 3),
  [781] = {.count = 1, .reusable = true}, SHIFT(331),
  [783] = {.count = 1, .reusable = true}, SHIFT(332),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 3),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 3),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(308),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 3),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 3),
  [802] = {.count = 1, .reusable = true}, SHIFT(337),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [806] = {.count = 1, .reusable = true}, SHIFT(338),
  [808] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [812] = {.count = 1, .reusable = true}, SHIFT(339),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_math_group_at, 3),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(321),
  [819] = {.count = 1, .reusable = true}, SHIFT(340),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 2),
  [823] = {.count = 1, .reusable = true}, SHIFT(341),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_math_env_at, 3),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group_at, 3),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_at_repeat1, 2), SHIFT_REPEAT(328),
  [832] = {.count = 1, .reusable = true}, SHIFT(342),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 4),
  [836] = {.count = 1, .reusable = true}, SHIFT(343),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym_section_at, 4),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_at, 4),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 6),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 6),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 6),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math_at, 5),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group_at, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 5),
  [854] = {.count = 1, .reusable = true}, SHIFT(345),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin_at, 6),
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
