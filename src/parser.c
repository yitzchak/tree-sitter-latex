#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 219
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 4
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

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
  anon_sym_textbf = 21,
  anon_sym_textit = 22,
  anon_sym_texttt = 23,
  anon_sym_makeatletter = 24,
  anon_sym_makeatother = 25,
  sym_magic_comment = 26,
  sym_comment = 27,
  sym__escape = 28,
  sym_begin_group = 29,
  sym_end_group = 30,
  sym_math_shift = 31,
  sym_alignment_tab = 32,
  sym__end_of_line = 33,
  sym_parameter_char = 34,
  sym_superscript = 35,
  sym_subscript = 36,
  sym__name = 37,
  sym__at_name = 38,
  sym_active_char = 39,
  sym_text = 40,
  sym_number = 41,
  sym_document = 42,
  sym__text_mode = 43,
  sym_text_mode = 44,
  sym__text_mode_at = 45,
  sym_text_mode_at = 46,
  sym__math_mode = 47,
  sym_math_mode = 48,
  sym_parameter = 49,
  sym_text_env = 50,
  sym_math_environment = 51,
  sym__display_math = 52,
  sym_tex_display_math = 53,
  sym_latex_display_math = 54,
  sym_begin_display_math = 55,
  sym_end_display_math = 56,
  sym_begin_inline_math = 57,
  sym_end_inline_math = 58,
  sym_display_math_env = 59,
  sym_display_math_begin = 60,
  sym_display_math_end = 61,
  sym_display_math_env_group = 62,
  sym__inline_math = 63,
  sym_tex_inline_math = 64,
  sym_latex_inline_math = 65,
  sym_inline_math_env = 66,
  sym_inline_math_begin = 67,
  sym_inline_math_end = 68,
  sym_inline_math_env_group = 69,
  sym_tag = 70,
  sym_tag_token = 71,
  sym_verbatim_env = 72,
  sym_verbatim_begin = 73,
  sym_verbatim_end = 74,
  sym_verbatim_text = 75,
  sym_verbatim_env_group = 76,
  sym_escaped = 77,
  sym_command = 78,
  sym_command_at = 79,
  sym_begin = 80,
  sym_begin_token = 81,
  sym_end = 82,
  sym_end_token = 83,
  sym_documentclass = 84,
  sym_documentclass_token = 85,
  sym_usepackage = 86,
  sym_usepackage_token = 87,
  sym_include = 88,
  sym_include_token = 89,
  sym_section = 90,
  sym_section_token = 91,
  sym_storage = 92,
  sym_storage_token = 93,
  sym_catcode = 94,
  sym_catcode_token = 95,
  sym_emph = 96,
  sym_emph_at = 97,
  sym_emph_token = 98,
  sym_textbf = 99,
  sym_textbf_at = 100,
  sym_textbf_token = 101,
  sym_textit = 102,
  sym_textit_at = 103,
  sym_textit_token = 104,
  sym_texttt = 105,
  sym_texttt_at = 106,
  sym_texttt_token = 107,
  sym_makeatletter = 108,
  sym_makeatletter_token = 109,
  sym_makeatother = 110,
  sym_makeatother_token = 111,
  sym_text_group = 112,
  sym_text_group_at = 113,
  sym_simple_text_group = 114,
  sym_opt_text_group = 115,
  sym_opt_text_group_at = 116,
  sym_math_group = 117,
  sym_opt_math_group = 118,
  sym_math_text_group = 119,
  sym_token = 120,
  sym_token_at = 121,
  sym_begin_opt = 122,
  sym_end_opt = 123,
  aux_sym_text_mode_repeat1 = 124,
  aux_sym_text_mode_at_repeat1 = 125,
  aux_sym_math_mode_repeat1 = 126,
  aux_sym_verbatim_text_repeat1 = 127,
  aux_sym_verbatim_text_repeat2 = 128,
  anon_alias_sym_class_name = 129,
  anon_alias_sym_env_name = 130,
  anon_alias_sym_package_name = 131,
  anon_alias_sym_text = 132,
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
  [sym__at_name] = "_at_name",
  [sym_active_char] = "active_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__text_mode] = "_text_mode",
  [sym_text_mode] = "text_mode",
  [sym__text_mode_at] = "_text_mode_at",
  [sym_text_mode_at] = "text_mode_at",
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_text_env] = "text_env",
  [sym_math_environment] = "math_environment",
  [sym__display_math] = "_display_math",
  [sym_tex_display_math] = "tex_display_math",
  [sym_latex_display_math] = "latex_display_math",
  [sym_begin_display_math] = "begin_display_math",
  [sym_end_display_math] = "end_display_math",
  [sym_begin_inline_math] = "begin_inline_math",
  [sym_end_inline_math] = "end_inline_math",
  [sym_display_math_env] = "display_math_env",
  [sym_display_math_begin] = "display_math_begin",
  [sym_display_math_end] = "display_math_end",
  [sym_display_math_env_group] = "display_math_env_group",
  [sym__inline_math] = "_inline_math",
  [sym_tex_inline_math] = "tex_inline_math",
  [sym_latex_inline_math] = "latex_inline_math",
  [sym_inline_math_env] = "inline_math_env",
  [sym_inline_math_begin] = "inline_math_begin",
  [sym_inline_math_end] = "inline_math_end",
  [sym_inline_math_env_group] = "inline_math_env_group",
  [sym_tag] = "tag",
  [sym_tag_token] = "tag_token",
  [sym_verbatim_env] = "verbatim_env",
  [sym_verbatim_begin] = "verbatim_begin",
  [sym_verbatim_end] = "verbatim_end",
  [sym_verbatim_text] = "verbatim_text",
  [sym_verbatim_env_group] = "verbatim_env_group",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_command_at] = "command_at",
  [sym_begin] = "begin",
  [sym_begin_token] = "begin_token",
  [sym_end] = "end",
  [sym_end_token] = "end_token",
  [sym_documentclass] = "documentclass",
  [sym_documentclass_token] = "documentclass_token",
  [sym_usepackage] = "usepackage",
  [sym_usepackage_token] = "usepackage_token",
  [sym_include] = "include",
  [sym_include_token] = "include_token",
  [sym_section] = "section",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_emph] = "emph",
  [sym_emph_at] = "emph_at",
  [sym_emph_token] = "emph_token",
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
  [sym_opt_math_group] = "opt_math_group",
  [sym_math_text_group] = "math_text_group",
  [sym_token] = "token",
  [sym_token_at] = "token_at",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_text_mode_at_repeat1] = "text_mode_at_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
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
  [sym__at_name] = {
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
  [sym__math_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_math_mode] = {
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
  [sym_math_environment] = {
    .visible = true,
    .named = true,
  },
  [sym__display_math] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math] = {
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
  [sym_display_math_begin] = {
    .visible = true,
    .named = true,
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
  [sym_tex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env] = {
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
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_at] = {
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
  [sym_include_token] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
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
  [sym_opt_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text_group] = {
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
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
      if (lookahead == 'n')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'p')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'i')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(119);
      if (lookahead == 't')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'x')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(143);
      if (lookahead == 'i')
        ADVANCE(145);
      if (lookahead == 't')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 162:
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
    case 163:
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 165:
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
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 168:
      if (lookahead == '%')
        ADVANCE(38);
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
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(169);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(171);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 173:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'd')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 178:
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
        ADVANCE(179);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(101);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 182:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(183);
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'e')
        ADVANCE(226);
      if (lookahead == 'f')
        ADVANCE(234);
      if (lookahead == 'g')
        ADVANCE(239);
      if (lookahead == 'l')
        ADVANCE(244);
      if (lookahead == 'm')
        ADVANCE(253);
      if (lookahead == 's')
        ADVANCE(268);
      if (lookahead == 'v')
        ADVANCE(271);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(197);
      if (lookahead == 'a')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(197);
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
      if (lookahead == 'a')
        ADVANCE(201);
      if (lookahead == 'g')
        ADVANCE(205);
      if (lookahead == 'i')
        ADVANCE(209);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(221);
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
      if (lookahead == 'r')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(199);
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
      if (lookahead == 'r')
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(211);
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(213);
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
      if (lookahead == 'y')
        ADVANCE(214);
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(197);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(199);
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
      if (lookahead == 'e')
        ADVANCE(222);
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
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
      if (lookahead == 's')
        ADVANCE(199);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(201);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
        ADVANCE(231);
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
      if (lookahead == 'i')
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
      if (lookahead == 'o')
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
      if (lookahead == 'n')
        ADVANCE(199);
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
        ADVANCE(233);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
        ADVANCE(241);
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
      if (lookahead == 'h')
        ADVANCE(242);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
        ADVANCE(199);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
        ADVANCE(247);
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
      if (lookahead == 'i')
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'n')
        ADVANCE(252);
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
      if (lookahead == 'g')
        ADVANCE(191);
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
      if (lookahead == 'a')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(257);
      if (lookahead == 'u')
        ADVANCE(261);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(191);
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
      if (lookahead == 'l')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(266);
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
      if (lookahead == 'n')
        ADVANCE(267);
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
      if (lookahead == 'e')
        ADVANCE(199);
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
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(270);
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
      if (lookahead == 'i')
        ADVANCE(198);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
        ADVANCE(274);
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
      if (lookahead == 'a')
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
      if (lookahead == 'm')
        ADVANCE(191);
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
      if (lookahead == 'V')
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 279:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 280:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 281:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 282:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'b')
        ADVANCE(296);
      if (lookahead == 'c')
        ADVANCE(301);
      if (lookahead == 'd')
        ADVANCE(313);
      if (lookahead == 'e')
        ADVANCE(328);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'p')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(381);
      if (lookahead == 'u')
        ADVANCE(391);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(284);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(286);
      if (lookahead == 'p')
        ADVANCE(291);
      if (lookahead == 's')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(287);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(288);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(292);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(293);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(295);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(297);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'h')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(314);
      if (lookahead == 'o')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(324);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(331);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(335);
      if (lookahead == 'p')
        ADVANCE(340);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(338);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(341);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(345);
      if (lookahead == 'i')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(354);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (lookahead == 't')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(362);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(367);
      if (lookahead == 'u')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(370);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(374);
      if (lookahead == 's')
        ADVANCE(377);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(367);
      if (lookahead == 'u')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'x')
        ADVANCE(383);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(385);
      if (lookahead == 'i')
        ADVANCE(387);
      if (lookahead == 't')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_textit);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_texttt);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(395);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(396);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(397);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(398);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(399);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(400);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(329);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
      END_STATE();
    case 403:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(52);
      if (lookahead == 'c')
        ADVANCE(57);
      if (lookahead == 'd')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(179);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(169);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(149);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 404:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 405:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'b')
        ADVANCE(296);
      if (lookahead == 'c')
        ADVANCE(301);
      if (lookahead == 'd')
        ADVANCE(313);
      if (lookahead == 'e')
        ADVANCE(328);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(406);
      if (lookahead == 'p')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(381);
      if (lookahead == 'u')
        ADVANCE(391);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(401);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(161);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(290);
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
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 163},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 166},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 165},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 165},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 168},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 165},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 173},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 177},
  [70] = {.lex_state = 167},
  [71] = {.lex_state = 178},
  [72] = {.lex_state = 165},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 182},
  [76] = {.lex_state = 279},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 279},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 165},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 280},
  [89] = {.lex_state = 281},
  [90] = {.lex_state = 165},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 165},
  [94] = {.lex_state = 282},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 165},
  [97] = {.lex_state = 165},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 34},
  [102] = {.lex_state = 165},
  [103] = {.lex_state = 165},
  [104] = {.lex_state = 36},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 165},
  [107] = {.lex_state = 165},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 165},
  [111] = {.lex_state = 162},
  [112] = {.lex_state = 34},
  [113] = {.lex_state = 165},
  [114] = {.lex_state = 162},
  [115] = {.lex_state = 34},
  [116] = {.lex_state = 165},
  [117] = {.lex_state = 162},
  [118] = {.lex_state = 165},
  [119] = {.lex_state = 403},
  [120] = {.lex_state = 165},
  [121] = {.lex_state = 34},
  [122] = {.lex_state = 165},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 165},
  [127] = {.lex_state = 34},
  [128] = {.lex_state = 404},
  [129] = {.lex_state = 165},
  [130] = {.lex_state = 165},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 165},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 165},
  [136] = {.lex_state = 182},
  [137] = {.lex_state = 165},
  [138] = {.lex_state = 167},
  [139] = {.lex_state = 177},
  [140] = {.lex_state = 167},
  [141] = {.lex_state = 165},
  [142] = {.lex_state = 165},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 162},
  [145] = {.lex_state = 162},
  [146] = {.lex_state = 162},
  [147] = {.lex_state = 162},
  [148] = {.lex_state = 162},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 279},
  [151] = {.lex_state = 279},
  [152] = {.lex_state = 36},
  [153] = {.lex_state = 167},
  [154] = {.lex_state = 279},
  [155] = {.lex_state = 279},
  [156] = {.lex_state = 165},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 165},
  [159] = {.lex_state = 281},
  [160] = {.lex_state = 163},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 165},
  [163] = {.lex_state = 405},
  [164] = {.lex_state = 165},
  [165] = {.lex_state = 162},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 165},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 165},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 165},
  [173] = {.lex_state = 34},
  [174] = {.lex_state = 165},
  [175] = {.lex_state = 36},
  [176] = {.lex_state = 165},
  [177] = {.lex_state = 162},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 165},
  [180] = {.lex_state = 162},
  [181] = {.lex_state = 162},
  [182] = {.lex_state = 165},
  [183] = {.lex_state = 165},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 165},
  [186] = {.lex_state = 165},
  [187] = {.lex_state = 182},
  [188] = {.lex_state = 165},
  [189] = {.lex_state = 182},
  [190] = {.lex_state = 165},
  [191] = {.lex_state = 162},
  [192] = {.lex_state = 279},
  [193] = {.lex_state = 165},
  [194] = {.lex_state = 279},
  [195] = {.lex_state = 165},
  [196] = {.lex_state = 279},
  [197] = {.lex_state = 162},
  [198] = {.lex_state = 34},
  [199] = {.lex_state = 279},
  [200] = {.lex_state = 279},
  [201] = {.lex_state = 279},
  [202] = {.lex_state = 36},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 279},
  [205] = {.lex_state = 165},
  [206] = {.lex_state = 165},
  [207] = {.lex_state = 162},
  [208] = {.lex_state = 165},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 165},
  [212] = {.lex_state = 162},
  [213] = {.lex_state = 165},
  [214] = {.lex_state = 279},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 279},
  [217] = {.lex_state = 167},
  [218] = {.lex_state = 165},
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
    [sym__text_mode] = STATE(31),
    [sym_text_mode] = STATE(9),
    [sym_text_mode_at] = STATE(31),
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
    [sym_command] = STATE(31),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(31),
    [sym_opt_text_group] = STATE(31),
    [sym_token] = STATE(17),
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
    [sym_superscript] = ACTIONS(19),
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
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatletter] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [4] = {
    [sym__text_mode] = STATE(49),
    [sym_text_mode_at] = STATE(49),
    [sym_parameter] = STATE(49),
    [sym_text_env] = STATE(49),
    [sym__display_math] = STATE(49),
    [sym_tex_display_math] = STATE(49),
    [sym_latex_display_math] = STATE(49),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(49),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(49),
    [sym_tex_inline_math] = STATE(49),
    [sym_latex_inline_math] = STATE(49),
    [sym_inline_math_env] = STATE(49),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(49),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(49),
    [sym_command] = STATE(49),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(49),
    [sym_opt_text_group] = STATE(49),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(49),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(59),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(61),
    [sym_text] = ACTIONS(61),
  },
  [5] = {
    [sym__math_mode] = STATE(58),
    [sym_math_mode] = STATE(53),
    [sym_parameter] = STATE(58),
    [sym_math_environment] = STATE(58),
    [sym_tag] = STATE(58),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(58),
    [sym_command] = STATE(58),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(58),
    [sym_opt_math_group] = STATE(58),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(67),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [6] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(71),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(73),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(73),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_text] = ACTIONS(73),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(60),
    [sym_parameter] = STATE(61),
    [sym_math_environment] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(61),
    [sym_command] = STATE(61),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [11] = {
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(62),
    [sym_parameter] = STATE(61),
    [sym_math_environment] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(61),
    [sym_command] = STATE(61),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [12] = {
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(61),
    [sym_math_environment] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(61),
    [sym_command] = STATE(61),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [13] = {
    [sym__math_mode] = STATE(61),
    [sym_math_mode] = STATE(64),
    [sym_parameter] = STATE(61),
    [sym_math_environment] = STATE(61),
    [sym_tag] = STATE(61),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(61),
    [sym_command] = STATE(61),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(61),
    [sym_opt_math_group] = STATE(61),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(61),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
  },
  [14] = {
    [sym_verbatim_end] = STATE(66),
    [sym_verbatim_text] = STATE(67),
    [sym_end_token] = STATE(68),
    [aux_sym_verbatim_text_repeat1] = STATE(69),
    [aux_sym_verbatim_text_repeat2] = STATE(70),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
    [sym__end_of_line] = ACTIONS(85),
  },
  [15] = {
    [sym__text_mode] = STATE(74),
    [sym_text_mode_at] = STATE(74),
    [sym_parameter] = STATE(74),
    [sym_text_env] = STATE(74),
    [sym__display_math] = STATE(74),
    [sym_tex_display_math] = STATE(74),
    [sym_latex_display_math] = STATE(74),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(74),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(74),
    [sym_tex_inline_math] = STATE(74),
    [sym_latex_inline_math] = STATE(74),
    [sym_inline_math_env] = STATE(74),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(74),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(74),
    [sym_command] = STATE(74),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(72),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(74),
    [sym_opt_text_group] = STATE(74),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(76),
    [sym_inline_math_env_group] = STATE(77),
    [sym_verbatim_env_group] = STATE(78),
    [sym_simple_text_group] = STATE(79),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(93),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
  },
  [18] = {
    [sym_simple_text_group] = STATE(81),
    [sym_opt_text_group] = STATE(82),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [19] = {
    [sym_simple_text_group] = STATE(83),
    [sym_opt_text_group] = STATE(84),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [20] = {
    [sym_text_group] = STATE(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [sym_text_group] = STATE(86),
    [sym_opt_text_group] = STATE(87),
    [sym_begin_opt] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [22] = {
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
  [23] = {
    [sym_escaped] = STATE(89),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(99),
  },
  [24] = {
    [sym_text_group] = STATE(90),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(91),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym_text_group] = STATE(92),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [27] = {
    [sym_text_group] = STATE(93),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [28] = {
    [sym__text_mode_at] = STATE(105),
    [sym_parameter] = STATE(105),
    [sym_text_env] = STATE(105),
    [sym__display_math] = STATE(105),
    [sym_tex_display_math] = STATE(105),
    [sym_latex_display_math] = STATE(105),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(105),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(105),
    [sym_tex_inline_math] = STATE(105),
    [sym_latex_inline_math] = STATE(105),
    [sym_inline_math_env] = STATE(105),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(105),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(105),
    [sym_command_at] = STATE(105),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_makeatother] = STATE(102),
    [sym_makeatother_token] = STATE(103),
    [sym_text_group_at] = STATE(105),
    [sym_opt_text_group_at] = STATE(105),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
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
    [sym__text_mode] = STATE(108),
    [sym_text_mode_at] = STATE(108),
    [sym_parameter] = STATE(108),
    [sym_text_env] = STATE(108),
    [sym__display_math] = STATE(108),
    [sym_tex_display_math] = STATE(108),
    [sym_latex_display_math] = STATE(108),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(108),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(108),
    [sym_tex_inline_math] = STATE(108),
    [sym_latex_inline_math] = STATE(108),
    [sym_inline_math_env] = STATE(108),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(108),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(108),
    [sym_command] = STATE(108),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(108),
    [sym_opt_text_group] = STATE(108),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(107),
    [aux_sym_text_mode_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(113),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
  },
  [31] = {
    [sym__text_mode] = STATE(109),
    [sym_text_mode_at] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_text_env] = STATE(109),
    [sym__display_math] = STATE(109),
    [sym_tex_display_math] = STATE(109),
    [sym_latex_display_math] = STATE(109),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(109),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(109),
    [sym_tex_inline_math] = STATE(109),
    [sym_latex_inline_math] = STATE(109),
    [sym_inline_math_env] = STATE(109),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(109),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(109),
    [sym_opt_text_group] = STATE(109),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(117),
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
    [sym_active_char] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
  },
  [33] = {
    [anon_sym_LBRACK] = ACTIONS(121),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
    [sym_end_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(123),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [sym_text] = ACTIONS(123),
  },
  [35] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(125),
  },
  [36] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(127),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(129),
  },
  [38] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(131),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(133),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(135),
    [sym_begin_group] = ACTIONS(135),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(135),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(135),
    [sym_active_char] = ACTIONS(135),
    [sym_text] = ACTIONS(135),
  },
  [41] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(137),
  },
  [42] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(139),
  },
  [43] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(141),
  },
  [44] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(143),
  },
  [45] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(145),
  },
  [46] = {
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_math_shift] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [47] = {
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_text] = ACTIONS(151),
  },
  [49] = {
    [sym__text_mode] = STATE(111),
    [sym_text_mode_at] = STATE(111),
    [sym_parameter] = STATE(111),
    [sym_text_env] = STATE(111),
    [sym__display_math] = STATE(111),
    [sym_tex_display_math] = STATE(111),
    [sym_latex_display_math] = STATE(111),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(111),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(111),
    [sym_tex_inline_math] = STATE(111),
    [sym_latex_inline_math] = STATE(111),
    [sym_inline_math_env] = STATE(111),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(111),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(111),
    [sym_command] = STATE(111),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(111),
    [sym_opt_text_group] = STATE(111),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [50] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [51] = {
    [sym__math_mode] = STATE(114),
    [sym_parameter] = STATE(114),
    [sym_math_environment] = STATE(114),
    [sym_tag] = STATE(114),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(114),
    [sym_command] = STATE(114),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(114),
    [sym_opt_math_group] = STATE(114),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [52] = {
    [sym__math_mode] = STATE(58),
    [sym_math_mode] = STATE(115),
    [sym_parameter] = STATE(58),
    [sym_math_environment] = STATE(58),
    [sym_tag] = STATE(58),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(58),
    [sym_command] = STATE(58),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(58),
    [sym_opt_math_group] = STATE(58),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [53] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(163),
  },
  [54] = {
    [sym_math_text_group] = STATE(118),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(165),
  },
  [55] = {
    [sym__math_mode] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_math_environment] = STATE(121),
    [sym_tag] = STATE(121),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(121),
    [sym_command] = STATE(121),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_end] = STATE(120),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(121),
    [sym_opt_math_group] = STATE(121),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [56] = {
    [sym_simple_text_group] = STATE(79),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [57] = {
    [sym__math_mode] = STATE(123),
    [sym_parameter] = STATE(123),
    [sym_math_environment] = STATE(123),
    [sym_tag] = STATE(123),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(123),
    [sym_command] = STATE(123),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(123),
    [sym_opt_math_group] = STATE(123),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [sym_end_opt] = STATE(122),
    [aux_sym_math_mode_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(171),
    [sym_active_char] = ACTIONS(171),
    [sym_text] = ACTIONS(171),
  },
  [58] = {
    [sym__math_mode] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_math_environment] = STATE(124),
    [sym_tag] = STATE(124),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(124),
    [sym_command] = STATE(124),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(124),
    [sym_opt_math_group] = STATE(124),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(173),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_text] = ACTIONS(175),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(177),
    [sym_begin_group] = ACTIONS(177),
    [sym_end_group] = ACTIONS(177),
    [sym_math_shift] = ACTIONS(177),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(177),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_text] = ACTIONS(177),
  },
  [60] = {
    [sym_end_display_math] = STATE(126),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(179),
  },
  [61] = {
    [sym__math_mode] = STATE(127),
    [sym_parameter] = STATE(127),
    [sym_math_environment] = STATE(127),
    [sym_tag] = STATE(127),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(127),
    [sym_command] = STATE(127),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(127),
    [sym_opt_math_group] = STATE(127),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(181),
  },
  [62] = {
    [sym_end_inline_math] = STATE(129),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(183),
  },
  [63] = {
    [sym_display_math_end] = STATE(130),
    [sym_end_token] = STATE(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [64] = {
    [sym_inline_math_end] = STATE(132),
    [sym_end_token] = STATE(133),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [65] = {
    [anon_sym_end] = ACTIONS(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(187),
    [sym_begin_group] = ACTIONS(187),
    [sym_end_group] = ACTIONS(187),
    [sym_math_shift] = ACTIONS(187),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(187),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_text] = ACTIONS(187),
  },
  [67] = {
    [sym_verbatim_end] = STATE(135),
    [sym_end_token] = STATE(68),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
  },
  [68] = {
    [sym_verbatim_env_group] = STATE(137),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(189),
  },
  [69] = {
    [aux_sym_verbatim_text_repeat1] = STATE(139),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(191),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(193),
  },
  [70] = {
    [aux_sym_verbatim_text_repeat1] = STATE(69),
    [aux_sym_verbatim_text_repeat2] = STATE(140),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(195),
    [sym__end_of_line] = ACTIONS(197),
  },
  [71] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatletter] = ACTIONS(55),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(201),
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
    [sym_text] = ACTIONS(201),
  },
  [73] = {
    [sym_simple_text_group] = STATE(141),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [74] = {
    [sym__text_mode] = STATE(143),
    [sym_text_mode_at] = STATE(143),
    [sym_parameter] = STATE(143),
    [sym_text_env] = STATE(143),
    [sym__display_math] = STATE(143),
    [sym_tex_display_math] = STATE(143),
    [sym_latex_display_math] = STATE(143),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(143),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(143),
    [sym_tex_inline_math] = STATE(143),
    [sym_latex_inline_math] = STATE(143),
    [sym_inline_math_env] = STATE(143),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(143),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(143),
    [sym_command] = STATE(143),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(142),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(143),
    [sym_opt_text_group] = STATE(143),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [75] = {
    [sym_display_math_env_name] = ACTIONS(205),
    [sym_inline_math_env_name] = ACTIONS(207),
    [sym_verbatim_env_name] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(211),
  },
  [76] = {
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(151),
    [sym_begin_opt] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(213),
    [sym__end_of_line] = ACTIONS(215),
  },
  [77] = {
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_text] = ACTIONS(217),
  },
  [78] = {
    [sym_text_group] = STATE(154),
    [sym_opt_text_group] = STATE(155),
    [sym_begin_opt] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(213),
    [sym__end_of_line] = ACTIONS(219),
  },
  [79] = {
    [anon_sym_LBRACK] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(221),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [sym_text] = ACTIONS(221),
  },
  [80] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(223),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [82] = {
    [sym_simple_text_group] = STATE(156),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [84] = {
    [sym_simple_text_group] = STATE(157),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(95),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(229),
    [sym_end_group] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [86] = {
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
  [87] = {
    [sym_text_group] = STATE(158),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [88] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(235),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_end_group] = ACTIONS(237),
    [sym_math_shift] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_text] = ACTIONS(237),
  },
  [91] = {
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
  [92] = {
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
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_text] = ACTIONS(243),
  },
  [94] = {
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
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [anon_sym_makeatother] = ACTIONS(245),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(247),
  },
  [95] = {
    [sym__text_mode_at] = STATE(165),
    [sym_parameter] = STATE(165),
    [sym_text_env] = STATE(165),
    [sym__display_math] = STATE(165),
    [sym_tex_display_math] = STATE(165),
    [sym_latex_display_math] = STATE(165),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(165),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(165),
    [sym_tex_inline_math] = STATE(165),
    [sym_latex_inline_math] = STATE(165),
    [sym_inline_math_env] = STATE(165),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(165),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(165),
    [sym_command_at] = STATE(165),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(165),
    [sym_opt_text_group_at] = STATE(165),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(253),
    [sym_text] = ACTIONS(253),
  },
  [96] = {
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
  [97] = {
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(257),
    [sym_begin_group] = ACTIONS(257),
    [sym_end_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(257),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(257),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [sym_active_char] = ACTIONS(257),
    [sym_text] = ACTIONS(257),
  },
  [98] = {
    [sym_text_group_at] = STATE(166),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [99] = {
    [sym_text_group_at] = STATE(167),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [100] = {
    [sym_text_group_at] = STATE(168),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [101] = {
    [sym_text_group_at] = STATE(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(103),
  },
  [102] = {
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
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_end_group] = ACTIONS(261),
    [sym_math_shift] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
  },
  [104] = {
    [sym__text_mode_at] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_text_env] = STATE(171),
    [sym__display_math] = STATE(171),
    [sym_tex_display_math] = STATE(171),
    [sym_latex_display_math] = STATE(171),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(171),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(171),
    [sym_tex_inline_math] = STATE(171),
    [sym_latex_inline_math] = STATE(171),
    [sym_inline_math_env] = STATE(171),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(171),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(171),
    [sym_command_at] = STATE(171),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(171),
    [sym_opt_text_group_at] = STATE(171),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [sym_end_opt] = STATE(170),
    [aux_sym_text_mode_at_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(263),
    [sym_text] = ACTIONS(263),
  },
  [105] = {
    [sym__text_mode_at] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_env] = STATE(173),
    [sym__display_math] = STATE(173),
    [sym_tex_display_math] = STATE(173),
    [sym_latex_display_math] = STATE(173),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(173),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(173),
    [sym_tex_inline_math] = STATE(173),
    [sym_latex_inline_math] = STATE(173),
    [sym_inline_math_env] = STATE(173),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(173),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(173),
    [sym_command_at] = STATE(173),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_makeatother] = STATE(172),
    [sym_makeatother_token] = STATE(103),
    [sym_text_group_at] = STATE(173),
    [sym_opt_text_group_at] = STATE(173),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(265),
    [sym_text] = ACTIONS(265),
  },
  [106] = {
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
  [107] = {
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
  [108] = {
    [sym__text_mode] = STATE(175),
    [sym_text_mode_at] = STATE(175),
    [sym_parameter] = STATE(175),
    [sym_text_env] = STATE(175),
    [sym__display_math] = STATE(175),
    [sym_tex_display_math] = STATE(175),
    [sym_latex_display_math] = STATE(175),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(175),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(175),
    [sym_tex_inline_math] = STATE(175),
    [sym_latex_inline_math] = STATE(175),
    [sym_inline_math_env] = STATE(175),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(175),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(175),
    [sym_command] = STATE(175),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(175),
    [sym_opt_text_group] = STATE(175),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(174),
    [aux_sym_text_mode_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [109] = {
    [sym__text_mode] = STATE(109),
    [sym_text_mode_at] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_text_env] = STATE(109),
    [sym__display_math] = STATE(109),
    [sym_tex_display_math] = STATE(109),
    [sym_latex_display_math] = STATE(109),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(109),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(109),
    [sym_tex_inline_math] = STATE(109),
    [sym_latex_inline_math] = STATE(109),
    [sym_inline_math_env] = STATE(109),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(109),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(109),
    [sym_opt_text_group] = STATE(109),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(287),
    [sym_text] = ACTIONS(287),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(296),
    [sym_begin_group] = ACTIONS(296),
    [sym_end_group] = ACTIONS(296),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(296),
    [sym_parameter_char] = ACTIONS(296),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(296),
    [sym_active_char] = ACTIONS(296),
    [sym_text] = ACTIONS(296),
  },
  [111] = {
    [sym__text_mode] = STATE(111),
    [sym_text_mode_at] = STATE(111),
    [sym_parameter] = STATE(111),
    [sym_text_env] = STATE(111),
    [sym__display_math] = STATE(111),
    [sym_tex_display_math] = STATE(111),
    [sym_latex_display_math] = STATE(111),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(111),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(111),
    [sym_tex_inline_math] = STATE(111),
    [sym_latex_inline_math] = STATE(111),
    [sym_inline_math_env] = STATE(111),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(111),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(111),
    [sym_command] = STATE(111),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(111),
    [sym_opt_text_group] = STATE(111),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(298),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(298),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(298),
    [sym_text] = ACTIONS(298),
  },
  [112] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(301),
  },
  [113] = {
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
  [114] = {
    [sym__math_mode] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_math_environment] = STATE(177),
    [sym_tag] = STATE(177),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(177),
    [sym_command] = STATE(177),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(177),
    [sym_opt_math_group] = STATE(177),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_text] = ACTIONS(307),
  },
  [115] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(309),
  },
  [116] = {
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
  [117] = {
    [sym__text_mode] = STATE(181),
    [sym_text_mode] = STATE(180),
    [sym_text_mode_at] = STATE(181),
    [sym_parameter] = STATE(181),
    [sym_text_env] = STATE(181),
    [sym__display_math] = STATE(181),
    [sym_tex_display_math] = STATE(181),
    [sym_latex_display_math] = STATE(181),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(181),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(181),
    [sym_tex_inline_math] = STATE(181),
    [sym_latex_inline_math] = STATE(181),
    [sym_inline_math_env] = STATE(181),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(181),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(181),
    [sym_command] = STATE(181),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(181),
    [sym_opt_text_group] = STATE(181),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(181),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(315),
    [sym_text] = ACTIONS(315),
  },
  [118] = {
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(317),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(317),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(317),
    [sym_active_char] = ACTIONS(317),
    [sym_text] = ACTIONS(317),
  },
  [119] = {
    [anon_sym_tag] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(57),
  },
  [120] = {
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
  [121] = {
    [sym__math_mode] = STATE(127),
    [sym_parameter] = STATE(127),
    [sym_math_environment] = STATE(127),
    [sym_tag] = STATE(127),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(127),
    [sym_command] = STATE(127),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_end] = STATE(182),
    [sym_end_token] = STATE(73),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(127),
    [sym_opt_math_group] = STATE(127),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_text] = ACTIONS(181),
  },
  [122] = {
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
  [123] = {
    [sym__math_mode] = STATE(184),
    [sym_parameter] = STATE(184),
    [sym_math_environment] = STATE(184),
    [sym_tag] = STATE(184),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(184),
    [sym_command] = STATE(184),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(184),
    [sym_opt_math_group] = STATE(184),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [sym_end_opt] = STATE(183),
    [aux_sym_math_mode_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_text] = ACTIONS(323),
  },
  [124] = {
    [sym__math_mode] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_math_environment] = STATE(124),
    [sym_tag] = STATE(124),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(124),
    [sym_command] = STATE(124),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(124),
    [sym_opt_math_group] = STATE(124),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(328),
    [sym_begin_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(334),
    [sym_alignment_tab] = ACTIONS(336),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(336),
    [sym_subscript] = ACTIONS(336),
    [sym_active_char] = ACTIONS(336),
    [sym_text] = ACTIONS(336),
  },
  [125] = {
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(344),
    [sym_begin_group] = ACTIONS(344),
    [sym_end_group] = ACTIONS(344),
    [sym_math_shift] = ACTIONS(344),
    [sym_alignment_tab] = ACTIONS(344),
    [sym_parameter_char] = ACTIONS(344),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [sym_active_char] = ACTIONS(344),
    [sym_text] = ACTIONS(344),
  },
  [127] = {
    [sym__math_mode] = STATE(127),
    [sym_parameter] = STATE(127),
    [sym_math_environment] = STATE(127),
    [sym_tag] = STATE(127),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(127),
    [sym_command] = STATE(127),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(127),
    [sym_opt_math_group] = STATE(127),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(328),
    [sym_begin_group] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(346),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(346),
    [sym_subscript] = ACTIONS(346),
    [sym_active_char] = ACTIONS(346),
    [sym_text] = ACTIONS(346),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(349),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [129] = {
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
  [130] = {
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
  [131] = {
    [sym_display_math_env_group] = STATE(188),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(355),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(357),
    [sym_begin_group] = ACTIONS(357),
    [sym_end_group] = ACTIONS(357),
    [sym_math_shift] = ACTIONS(357),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(357),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(357),
    [sym_active_char] = ACTIONS(357),
    [sym_text] = ACTIONS(357),
  },
  [133] = {
    [sym_inline_math_env_group] = STATE(190),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(359),
  },
  [134] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(361),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
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
  [136] = {
    [sym_verbatim_env_name] = ACTIONS(365),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(367),
    [sym_begin_group] = ACTIONS(367),
    [sym_end_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [138] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(369),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(371),
    [sym__end_of_line] = ACTIONS(371),
  },
  [139] = {
    [aux_sym_verbatim_text_repeat1] = STATE(139),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(373),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(376),
  },
  [140] = {
    [aux_sym_verbatim_text_repeat1] = STATE(69),
    [aux_sym_verbatim_text_repeat2] = STATE(140),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(378),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(371),
    [sym__end_of_line] = ACTIONS(381),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(384),
    [sym_begin_group] = ACTIONS(384),
    [sym_end_group] = ACTIONS(384),
    [sym_math_shift] = ACTIONS(384),
    [sym_alignment_tab] = ACTIONS(384),
    [sym_parameter_char] = ACTIONS(384),
    [sym_superscript] = ACTIONS(384),
    [sym_subscript] = ACTIONS(384),
    [sym_active_char] = ACTIONS(384),
    [sym_text] = ACTIONS(384),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(386),
    [sym_begin_group] = ACTIONS(386),
    [sym_end_group] = ACTIONS(386),
    [sym_math_shift] = ACTIONS(386),
    [sym_alignment_tab] = ACTIONS(386),
    [sym_parameter_char] = ACTIONS(386),
    [sym_superscript] = ACTIONS(386),
    [sym_subscript] = ACTIONS(386),
    [sym_active_char] = ACTIONS(386),
    [sym_text] = ACTIONS(386),
  },
  [143] = {
    [sym__text_mode] = STATE(143),
    [sym_text_mode_at] = STATE(143),
    [sym_parameter] = STATE(143),
    [sym_text_env] = STATE(143),
    [sym__display_math] = STATE(143),
    [sym_tex_display_math] = STATE(143),
    [sym_latex_display_math] = STATE(143),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(143),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(143),
    [sym_tex_inline_math] = STATE(143),
    [sym_latex_inline_math] = STATE(143),
    [sym_inline_math_env] = STATE(143),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(143),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(143),
    [sym_command] = STATE(143),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(143),
    [sym_opt_text_group] = STATE(143),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(275),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(388),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(388),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(388),
    [sym_text] = ACTIONS(388),
  },
  [144] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(391),
  },
  [145] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(393),
  },
  [146] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(395),
  },
  [147] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(397),
  },
  [148] = {
    [sym__text_mode] = STATE(197),
    [sym_text_mode_at] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_env] = STATE(197),
    [sym__display_math] = STATE(197),
    [sym_tex_display_math] = STATE(197),
    [sym_latex_display_math] = STATE(197),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(197),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(197),
    [sym_tex_inline_math] = STATE(197),
    [sym_latex_inline_math] = STATE(197),
    [sym_inline_math_env] = STATE(197),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(197),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(197),
    [sym_command] = STATE(197),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(197),
    [sym_opt_text_group] = STATE(197),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [149] = {
    [anon_sym_LBRACK] = ACTIONS(403),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(403),
    [sym_begin_group] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(403),
    [sym_superscript] = ACTIONS(403),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(405),
  },
  [151] = {
    [sym_text_group] = STATE(199),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(213),
    [sym__end_of_line] = ACTIONS(405),
  },
  [152] = {
    [sym__text_mode] = STATE(202),
    [sym_text_mode_at] = STATE(202),
    [sym_parameter] = STATE(202),
    [sym_text_env] = STATE(202),
    [sym__display_math] = STATE(202),
    [sym_tex_display_math] = STATE(202),
    [sym_latex_display_math] = STATE(202),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(202),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(202),
    [sym_tex_inline_math] = STATE(202),
    [sym_latex_inline_math] = STATE(202),
    [sym_inline_math_env] = STATE(202),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(202),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(202),
    [sym_command] = STATE(202),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(202),
    [sym_opt_text_group] = STATE(202),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(201),
    [aux_sym_text_mode_repeat1] = STATE(202),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [153] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(411),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(413),
    [sym__end_of_line] = ACTIONS(413),
  },
  [154] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(415),
  },
  [155] = {
    [sym_text_group] = STATE(204),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(213),
    [sym__end_of_line] = ACTIONS(415),
  },
  [156] = {
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
  [157] = {
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
  [158] = {
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
  [159] = {
    [anon_sym_EQ] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [160] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(423),
  },
  [161] = {
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
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
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
  [163] = {
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
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_textit] = ACTIONS(51),
    [anon_sym_texttt] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(247),
  },
  [164] = {
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
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
  [165] = {
    [sym__text_mode_at] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_text_env] = STATE(207),
    [sym__display_math] = STATE(207),
    [sym_tex_display_math] = STATE(207),
    [sym_latex_display_math] = STATE(207),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(207),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(207),
    [sym_tex_inline_math] = STATE(207),
    [sym_latex_inline_math] = STATE(207),
    [sym_inline_math_env] = STATE(207),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(207),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(207),
    [sym_command_at] = STATE(207),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(207),
    [sym_opt_text_group_at] = STATE(207),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(207),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(431),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(435),
    [sym_end_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(435),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [sym_text] = ACTIONS(435),
  },
  [167] = {
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(437),
    [sym_begin_group] = ACTIONS(437),
    [sym_end_group] = ACTIONS(437),
    [sym_math_shift] = ACTIONS(437),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(437),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [sym_text] = ACTIONS(437),
  },
  [168] = {
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
  [169] = {
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
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [171] = {
    [sym__text_mode_at] = STATE(209),
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
    [sym_command_at] = STATE(209),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(209),
    [sym_opt_text_group_at] = STATE(209),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [sym_end_opt] = STATE(208),
    [aux_sym_text_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(447),
    [sym_begin_group] = ACTIONS(447),
    [sym_end_group] = ACTIONS(447),
    [sym_math_shift] = ACTIONS(447),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(447),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(447),
    [sym_text] = ACTIONS(447),
  },
  [173] = {
    [sym__text_mode_at] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_env] = STATE(173),
    [sym__display_math] = STATE(173),
    [sym_tex_display_math] = STATE(173),
    [sym_latex_display_math] = STATE(173),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(173),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(173),
    [sym_tex_inline_math] = STATE(173),
    [sym_latex_inline_math] = STATE(173),
    [sym_inline_math_env] = STATE(173),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(173),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(173),
    [sym_command_at] = STATE(173),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(173),
    [sym_opt_text_group_at] = STATE(173),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(455),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(461),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(461),
    [sym_text] = ACTIONS(461),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [175] = {
    [sym__text_mode] = STATE(175),
    [sym_text_mode_at] = STATE(175),
    [sym_parameter] = STATE(175),
    [sym_text_env] = STATE(175),
    [sym__display_math] = STATE(175),
    [sym_tex_display_math] = STATE(175),
    [sym_latex_display_math] = STATE(175),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(175),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(175),
    [sym_tex_inline_math] = STATE(175),
    [sym_latex_inline_math] = STATE(175),
    [sym_inline_math_env] = STATE(175),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(175),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(175),
    [sym_command] = STATE(175),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(175),
    [sym_opt_text_group] = STATE(175),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(281),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(472),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(472),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(472),
    [sym_text] = ACTIONS(472),
  },
  [176] = {
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(475),
    [sym_begin_group] = ACTIONS(475),
    [sym_end_group] = ACTIONS(475),
    [sym_math_shift] = ACTIONS(475),
    [sym_alignment_tab] = ACTIONS(475),
    [sym_parameter_char] = ACTIONS(475),
    [sym_superscript] = ACTIONS(475),
    [sym_subscript] = ACTIONS(475),
    [sym_active_char] = ACTIONS(475),
    [sym_text] = ACTIONS(475),
  },
  [177] = {
    [sym__math_mode] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_math_environment] = STATE(177),
    [sym_tag] = STATE(177),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(177),
    [sym_command] = STATE(177),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(177),
    [sym_opt_math_group] = STATE(177),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(328),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(334),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(477),
    [sym_subscript] = ACTIONS(477),
    [sym_active_char] = ACTIONS(477),
    [sym_text] = ACTIONS(477),
  },
  [178] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(480),
  },
  [179] = {
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
  [180] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(484),
  },
  [181] = {
    [sym__text_mode] = STATE(111),
    [sym_text_mode_at] = STATE(111),
    [sym_parameter] = STATE(111),
    [sym_text_env] = STATE(111),
    [sym__display_math] = STATE(111),
    [sym_tex_display_math] = STATE(111),
    [sym_latex_display_math] = STATE(111),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(111),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(111),
    [sym_tex_inline_math] = STATE(111),
    [sym_latex_inline_math] = STATE(111),
    [sym_inline_math_env] = STATE(111),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(111),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(111),
    [sym_command] = STATE(111),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(111),
    [sym_opt_text_group] = STATE(111),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [182] = {
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
  [183] = {
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
  [184] = {
    [sym__math_mode] = STATE(184),
    [sym_parameter] = STATE(184),
    [sym_math_environment] = STATE(184),
    [sym_tag] = STATE(184),
    [sym_tag_token] = STATE(54),
    [sym_escaped] = STATE(184),
    [sym_command] = STATE(184),
    [sym_begin] = STATE(55),
    [sym_begin_token] = STATE(56),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_math_group] = STATE(184),
    [sym_opt_math_group] = STATE(184),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(57),
    [aux_sym_math_mode_repeat1] = STATE(184),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(334),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(328),
    [sym_begin_group] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(490),
    [sym_subscript] = ACTIONS(490),
    [sym_active_char] = ACTIONS(490),
    [sym_text] = ACTIONS(490),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_end_group] = ACTIONS(493),
    [sym_math_shift] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_text] = ACTIONS(493),
  },
  [186] = {
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
  [187] = {
    [sym_display_math_env_name] = ACTIONS(497),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(499),
    [sym_begin_group] = ACTIONS(499),
    [sym_end_group] = ACTIONS(499),
    [sym_math_shift] = ACTIONS(499),
    [sym_alignment_tab] = ACTIONS(499),
    [sym_parameter_char] = ACTIONS(499),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(499),
    [sym_text] = ACTIONS(499),
  },
  [189] = {
    [sym_inline_math_env_name] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(503),
    [sym_begin_group] = ACTIONS(503),
    [sym_end_group] = ACTIONS(503),
    [sym_math_shift] = ACTIONS(503),
    [sym_alignment_tab] = ACTIONS(503),
    [sym_parameter_char] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [sym_active_char] = ACTIONS(503),
    [sym_text] = ACTIONS(503),
  },
  [191] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(505),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(507),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(507),
    [sym__end_of_line] = ACTIONS(507),
  },
  [193] = {
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
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(511),
    [sym__end_of_line] = ACTIONS(511),
  },
  [195] = {
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
  [196] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(151),
  },
  [197] = {
    [sym__text_mode] = STATE(111),
    [sym_text_mode_at] = STATE(111),
    [sym_parameter] = STATE(111),
    [sym_text_env] = STATE(111),
    [sym__display_math] = STATE(111),
    [sym_tex_display_math] = STATE(111),
    [sym_latex_display_math] = STATE(111),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(111),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(111),
    [sym_tex_inline_math] = STATE(111),
    [sym_latex_inline_math] = STATE(111),
    [sym_inline_math_env] = STATE(111),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(111),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(111),
    [sym_command] = STATE(111),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(111),
    [sym_opt_text_group] = STATE(111),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [aux_sym_text_mode_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(515),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(155),
    [sym_text] = ACTIONS(155),
  },
  [198] = {
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(517),
    [sym_begin_group] = ACTIONS(517),
    [sym_alignment_tab] = ACTIONS(517),
    [sym_parameter_char] = ACTIONS(517),
    [sym_superscript] = ACTIONS(517),
    [sym_subscript] = ACTIONS(517),
    [sym_active_char] = ACTIONS(517),
    [sym_text] = ACTIONS(517),
  },
  [199] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(519),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(267),
    [sym__end_of_line] = ACTIONS(267),
  },
  [201] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(269),
    [sym__end_of_line] = ACTIONS(269),
  },
  [202] = {
    [sym__text_mode] = STATE(175),
    [sym_text_mode_at] = STATE(175),
    [sym_parameter] = STATE(175),
    [sym_text_env] = STATE(175),
    [sym__display_math] = STATE(175),
    [sym_tex_display_math] = STATE(175),
    [sym_latex_display_math] = STATE(175),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(175),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(175),
    [sym_tex_inline_math] = STATE(175),
    [sym_latex_inline_math] = STATE(175),
    [sym_inline_math_env] = STATE(175),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(175),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(175),
    [sym_command] = STATE(175),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(17),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(17),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(17),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(17),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(17),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(17),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(17),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(17),
    [sym_textbf_token] = STATE(25),
    [sym_textit] = STATE(17),
    [sym_textit_token] = STATE(26),
    [sym_texttt] = STATE(17),
    [sym_texttt_token] = STATE(27),
    [sym_makeatletter] = STATE(28),
    [sym_makeatletter_token] = STATE(29),
    [sym_text_group] = STATE(175),
    [sym_opt_text_group] = STATE(175),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(30),
    [sym_end_opt] = STATE(216),
    [aux_sym_text_mode_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(271),
    [sym_text] = ACTIONS(271),
  },
  [203] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(521),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(523),
    [sym__end_of_line] = ACTIONS(523),
  },
  [204] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(525),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_end_group] = ACTIONS(527),
    [sym_math_shift] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(527),
  },
  [206] = {
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
  [207] = {
    [sym__text_mode_at] = STATE(207),
    [sym_parameter] = STATE(207),
    [sym_text_env] = STATE(207),
    [sym__display_math] = STATE(207),
    [sym_tex_display_math] = STATE(207),
    [sym_latex_display_math] = STATE(207),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(207),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(207),
    [sym_tex_inline_math] = STATE(207),
    [sym_latex_inline_math] = STATE(207),
    [sym_inline_math_env] = STATE(207),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(207),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(207),
    [sym_command_at] = STATE(207),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(207),
    [sym_opt_text_group_at] = STATE(207),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(207),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(455),
    [sym_end_group] = ACTIONS(531),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(533),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(533),
    [sym_text] = ACTIONS(533),
  },
  [208] = {
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
  [209] = {
    [sym__text_mode_at] = STATE(209),
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
    [sym_command_at] = STATE(209),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(97),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(97),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(97),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(97),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(97),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(97),
    [sym_catcode_token] = STATE(23),
    [sym_emph_at] = STATE(97),
    [sym_emph_token] = STATE(98),
    [sym_textbf_at] = STATE(97),
    [sym_textbf_token] = STATE(99),
    [sym_textit_at] = STATE(97),
    [sym_textit_token] = STATE(100),
    [sym_texttt_at] = STATE(97),
    [sym_texttt_token] = STATE(101),
    [sym_text_group_at] = STATE(209),
    [sym_opt_text_group_at] = STATE(209),
    [sym_token_at] = STATE(97),
    [sym_begin_opt] = STATE(104),
    [aux_sym_text_mode_at_repeat1] = STATE(209),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(531),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(455),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(467),
    [sym_active_char] = ACTIONS(538),
    [sym_text] = ACTIONS(538),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(541),
    [sym_begin_group] = ACTIONS(541),
    [sym_end_group] = ACTIONS(541),
    [sym_math_shift] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(541),
    [sym_parameter_char] = ACTIONS(541),
    [sym_superscript] = ACTIONS(541),
    [sym_subscript] = ACTIONS(541),
    [sym_active_char] = ACTIONS(541),
    [sym_text] = ACTIONS(541),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(543),
    [sym_begin_group] = ACTIONS(543),
    [sym_end_group] = ACTIONS(543),
    [sym_math_shift] = ACTIONS(543),
    [sym_alignment_tab] = ACTIONS(543),
    [sym_parameter_char] = ACTIONS(543),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [sym_active_char] = ACTIONS(543),
    [sym_text] = ACTIONS(543),
  },
  [212] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(545),
  },
  [213] = {
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
  [214] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(296),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(547),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(547),
    [sym_begin_group] = ACTIONS(547),
    [sym_alignment_tab] = ACTIONS(547),
    [sym_parameter_char] = ACTIONS(547),
    [sym_superscript] = ACTIONS(547),
    [sym_subscript] = ACTIONS(547),
    [sym_active_char] = ACTIONS(547),
    [sym_text] = ACTIONS(547),
  },
  [216] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(470),
    [sym__end_of_line] = ACTIONS(470),
  },
  [217] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(549),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(551),
    [sym__end_of_line] = ACTIONS(551),
  },
  [218] = {
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
  [59] = {.count = 1, .reusable = true}, SHIFT(48),
  [61] = {.count = 1, .reusable = true}, SHIFT(49),
  [63] = {.count = 1, .reusable = true}, SHIFT(50),
  [65] = {.count = 1, .reusable = true}, SHIFT(51),
  [67] = {.count = 1, .reusable = true}, SHIFT(52),
  [69] = {.count = 1, .reusable = true}, SHIFT(58),
  [71] = {.count = 1, .reusable = true}, SHIFT(59),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(61),
  [81] = {.count = 1, .reusable = false}, SHIFT(69),
  [83] = {.count = 1, .reusable = true}, SHIFT(65),
  [85] = {.count = 1, .reusable = true}, SHIFT(70),
  [87] = {.count = 1, .reusable = true}, SHIFT(71),
  [89] = {.count = 1, .reusable = true}, SHIFT(74),
  [91] = {.count = 1, .reusable = true}, SHIFT(75),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(80),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(88),
  [101] = {.count = 1, .reusable = true}, SHIFT(94),
  [103] = {.count = 1, .reusable = true}, SHIFT(95),
  [105] = {.count = 1, .reusable = true}, SHIFT(105),
  [107] = {.count = 1, .reusable = true}, SHIFT(96),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(106),
  [113] = {.count = 1, .reusable = true}, SHIFT(108),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(109),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(110),
  [155] = {.count = 1, .reusable = true}, SHIFT(111),
  [157] = {.count = 1, .reusable = false}, SHIFT(112),
  [159] = {.count = 1, .reusable = true}, SHIFT(113),
  [161] = {.count = 1, .reusable = true}, SHIFT(114),
  [163] = {.count = 1, .reusable = true}, SHIFT(116),
  [165] = {.count = 1, .reusable = true}, SHIFT(117),
  [167] = {.count = 1, .reusable = true}, SHIFT(119),
  [169] = {.count = 1, .reusable = true}, SHIFT(121),
  [171] = {.count = 1, .reusable = true}, SHIFT(123),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(124),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(125),
  [181] = {.count = 1, .reusable = true}, SHIFT(127),
  [183] = {.count = 1, .reusable = true}, SHIFT(128),
  [185] = {.count = 1, .reusable = true}, SHIFT(134),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(136),
  [191] = {.count = 1, .reusable = false}, SHIFT(139),
  [193] = {.count = 1, .reusable = true}, SHIFT(138),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [197] = {.count = 1, .reusable = true}, SHIFT(140),
  [199] = {.count = 1, .reusable = false}, SHIFT(134),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(143),
  [205] = {.count = 1, .reusable = false}, SHIFT(144),
  [207] = {.count = 1, .reusable = false}, SHIFT(145),
  [209] = {.count = 1, .reusable = false}, SHIFT(146),
  [211] = {.count = 1, .reusable = false}, SHIFT(147),
  [213] = {.count = 1, .reusable = true}, SHIFT(148),
  [215] = {.count = 1, .reusable = true}, SHIFT(149),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(153),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(147),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [233] = {.count = 1, .reusable = false}, SHIFT(159),
  [235] = {.count = 1, .reusable = true}, SHIFT(160),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [245] = {.count = 1, .reusable = false}, SHIFT(161),
  [247] = {.count = 1, .reusable = false}, SHIFT(162),
  [249] = {.count = 1, .reusable = true}, SHIFT(163),
  [251] = {.count = 1, .reusable = true}, SHIFT(164),
  [253] = {.count = 1, .reusable = true}, SHIFT(165),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode_at, 1, .alias_sequence_id = 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_command_at, 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(171),
  [265] = {.count = 1, .reusable = true}, SHIFT(173),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(175),
  [273] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(109),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(111),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [305] = {.count = 1, .reusable = true}, SHIFT(176),
  [307] = {.count = 1, .reusable = true}, SHIFT(177),
  [309] = {.count = 1, .reusable = true}, SHIFT(178),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [313] = {.count = 1, .reusable = true}, SHIFT(179),
  [315] = {.count = 1, .reusable = true}, SHIFT(181),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [323] = {.count = 1, .reusable = true}, SHIFT(184),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(50),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(51),
  [334] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(124),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [342] = {.count = 1, .reusable = true}, SHIFT(185),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(127),
  [349] = {.count = 1, .reusable = true}, SHIFT(186),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [355] = {.count = 1, .reusable = true}, SHIFT(187),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [359] = {.count = 1, .reusable = true}, SHIFT(189),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [365] = {.count = 1, .reusable = true}, SHIFT(191),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [371] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(139),
  [376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(69),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(140),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(143),
  [391] = {.count = 1, .reusable = true}, SHIFT(192),
  [393] = {.count = 1, .reusable = true}, SHIFT(193),
  [395] = {.count = 1, .reusable = true}, SHIFT(194),
  [397] = {.count = 1, .reusable = true}, SHIFT(195),
  [399] = {.count = 1, .reusable = true}, SHIFT(196),
  [401] = {.count = 1, .reusable = true}, SHIFT(197),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [405] = {.count = 1, .reusable = true}, SHIFT(198),
  [407] = {.count = 1, .reusable = true}, SHIFT(200),
  [409] = {.count = 1, .reusable = true}, SHIFT(202),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [415] = {.count = 1, .reusable = true}, SHIFT(203),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [423] = {.count = 1, .reusable = true}, SHIFT(205),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_token_at, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 2),
  [431] = {.count = 1, .reusable = true}, SHIFT(206),
  [433] = {.count = 1, .reusable = true}, SHIFT(207),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_emph_at, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_at, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_textit_at, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_at, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 2),
  [445] = {.count = 1, .reusable = true}, SHIFT(209),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode_at, 3),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(2),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(163),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(95),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(5),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(173),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(6),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(96),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(175),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(177),
  [480] = {.count = 1, .reusable = true}, SHIFT(210),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [484] = {.count = 1, .reusable = true}, SHIFT(211),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(184),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [497] = {.count = 1, .reusable = true}, SHIFT(212),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [501] = {.count = 1, .reusable = true}, SHIFT(145),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [505] = {.count = 1, .reusable = true}, SHIFT(213),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [515] = {.count = 1, .reusable = true}, SHIFT(214),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [519] = {.count = 1, .reusable = true}, SHIFT(215),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [525] = {.count = 1, .reusable = true}, SHIFT(217),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_text_group_at, 3),
  [531] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(207),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group_at, 3),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_at_repeat1, 2), SHIFT_REPEAT(209),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [545] = {.count = 1, .reusable = true}, SHIFT(218),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
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
