#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 283
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_display_math_env_name = 5,
  sym_inline_math_env_name = 6,
  anon_sym_verbatim = 7,
  anon_sym_Verbatim = 8,
  anon_sym_Verbatim_STAR = 9,
  anon_sym_BVerbatim = 10,
  anon_sym_BVerbatim_STAR = 11,
  anon_sym_LVerbatim = 12,
  anon_sym_LVerbatim_STAR = 13,
  anon_sym_lstlisting = 14,
  anon_sym_minted = 15,
  anon_sym_tag = 16,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 17,
  anon_sym_begin = 18,
  anon_sym_end = 19,
  anon_sym_documentclass = 20,
  anon_sym_usepackage = 21,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 22,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 23,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 24,
  anon_sym_EQ = 25,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 26,
  anon_sym_makeatletter = 27,
  anon_sym_makeatother = 28,
  sym__escape = 29,
  sym_begin_group = 30,
  sym_end_group = 31,
  sym_math_shift = 32,
  sym_alignment_tab = 33,
  sym__end_of_line = 34,
  sym_parameter_char = 35,
  sym_superscript = 36,
  sym_subscript = 37,
  sym__name = 38,
  sym__at_name = 39,
  sym_active_char = 40,
  sym_comment_char = 41,
  sym_text = 42,
  sym_number = 43,
  sym__verbatim_token = 44,
  sym_magic = 45,
  sym_comment_text = 46,
  sym_document = 47,
  sym__text_mode = 48,
  sym_text_mode = 49,
  sym__at_text_mode = 50,
  sym_at_group = 51,
  sym__math_mode = 52,
  sym_math_mode = 53,
  sym_parameter = 54,
  sym_text_environment = 55,
  sym_math_environment = 56,
  sym__display_math = 57,
  sym_tex_display_math = 58,
  sym_latex_display_math = 59,
  sym_begin_display_math = 60,
  sym_end_display_math = 61,
  sym_begin_inline_math = 62,
  sym_end_inline_math = 63,
  sym_display_math_env = 64,
  sym_display_math_begin = 65,
  sym_display_math_end = 66,
  sym_display_math_env_group = 67,
  sym__inline_math = 68,
  sym_tex_inline_math = 69,
  sym_latex_inline_math = 70,
  sym_inline_math_env = 71,
  sym_inline_math_begin = 72,
  sym_inline_math_end = 73,
  sym_inline_math_env_group = 74,
  sym_begin_verbatim = 75,
  sym_end_verbatim = 76,
  sym_begin_Verbatim = 77,
  sym_end_Verbatim = 78,
  sym_begin_Verbatim_star = 79,
  sym_end_Verbatim_star = 80,
  sym_begin_BVerbatim = 81,
  sym_end_BVerbatim = 82,
  sym_begin_BVerbatim_star = 83,
  sym_end_BVerbatim_star = 84,
  sym_begin_LVerbatim = 85,
  sym_end_LVerbatim = 86,
  sym_begin_LVerbatim_star = 87,
  sym_end_LVerbatim_star = 88,
  sym_begin_lstlisting = 89,
  sym_end_lstlisting = 90,
  sym_begin_minted = 91,
  sym_end_minted = 92,
  sym_tag = 93,
  sym_tag_token = 94,
  sym_verbatim_environment = 95,
  sym_escaped = 96,
  sym_command = 97,
  sym_at_command = 98,
  sym_begin = 99,
  sym_begin_token = 100,
  sym_end = 101,
  sym_end_token = 102,
  sym_documentclass = 103,
  sym_documentclass_token = 104,
  sym_usepackage = 105,
  sym_usepackage_token = 106,
  sym_include = 107,
  sym_include_token = 108,
  sym_section = 109,
  sym_section_token = 110,
  sym_storage = 111,
  sym_storage_token = 112,
  sym_catcode = 113,
  sym_catcode_token = 114,
  sym_makeatletter = 115,
  sym_makeatletter_token = 116,
  sym_makeatother = 117,
  sym_makeatother_token = 118,
  sym_text_group = 119,
  sym_at_text_group = 120,
  sym_simple_text_group = 121,
  sym_opt_text_group = 122,
  sym_opt_at_text_group = 123,
  sym_math_group = 124,
  sym_opt_math_group = 125,
  sym_math_text_group = 126,
  sym_token = 127,
  sym_at_token = 128,
  sym_comment = 129,
  sym_verbatim_text = 130,
  sym_begin_opt = 131,
  sym_end_opt = 132,
  aux_sym_text_mode_repeat1 = 133,
  aux_sym_at_group_repeat1 = 134,
  aux_sym_math_mode_repeat1 = 135,
  aux_sym_verbatim_text_repeat1 = 136,
  anon_alias_sym_env_name = 137,
  anon_alias_sym_text = 138,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_display_math_env_name] = "display_math_env_name",
  [sym_inline_math_env_name] = "inline_math_env_name",
  [anon_sym_verbatim] = "verbatim",
  [anon_sym_Verbatim] = "Verbatim",
  [anon_sym_Verbatim_STAR] = "Verbatim*",
  [anon_sym_BVerbatim] = "BVerbatim",
  [anon_sym_BVerbatim_STAR] = "BVerbatim*",
  [anon_sym_LVerbatim] = "LVerbatim",
  [anon_sym_LVerbatim_STAR] = "LVerbatim*",
  [anon_sym_lstlisting] = "lstlisting",
  [anon_sym_minted] = "minted",
  [anon_sym_tag] = "tag",
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
  [anon_sym_makeatletter] = "makeatletter",
  [anon_sym_makeatother] = "makeatother",
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
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym__verbatim_token] = "_verbatim_token",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_document] = "document",
  [sym__text_mode] = "_text_mode",
  [sym_text_mode] = "text_mode",
  [sym__at_text_mode] = "_at_text_mode",
  [sym_at_group] = "at_group",
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_text_environment] = "text_environment",
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
  [sym_begin_verbatim] = "begin_verbatim",
  [sym_end_verbatim] = "end_verbatim",
  [sym_begin_Verbatim] = "begin_Verbatim",
  [sym_end_Verbatim] = "end_Verbatim",
  [sym_begin_Verbatim_star] = "begin_Verbatim_star",
  [sym_end_Verbatim_star] = "end_Verbatim_star",
  [sym_begin_BVerbatim] = "begin_BVerbatim",
  [sym_end_BVerbatim] = "end_BVerbatim",
  [sym_begin_BVerbatim_star] = "begin_BVerbatim_star",
  [sym_end_BVerbatim_star] = "end_BVerbatim_star",
  [sym_begin_LVerbatim] = "begin_LVerbatim",
  [sym_end_LVerbatim] = "end_LVerbatim",
  [sym_begin_LVerbatim_star] = "begin_LVerbatim_star",
  [sym_end_LVerbatim_star] = "end_LVerbatim_star",
  [sym_begin_lstlisting] = "begin_lstlisting",
  [sym_end_lstlisting] = "end_lstlisting",
  [sym_begin_minted] = "begin_minted",
  [sym_end_minted] = "end_minted",
  [sym_tag] = "tag",
  [sym_tag_token] = "tag_token",
  [sym_verbatim_environment] = "verbatim_environment",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_at_command] = "at_command",
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
  [sym_makeatletter] = "makeatletter",
  [sym_makeatletter_token] = "makeatletter_token",
  [sym_makeatother] = "makeatother",
  [sym_makeatother_token] = "makeatother_token",
  [sym_text_group] = "text_group",
  [sym_at_text_group] = "at_text_group",
  [sym_simple_text_group] = "simple_text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_opt_at_text_group] = "opt_at_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
  [sym_math_text_group] = "math_text_group",
  [sym_token] = "token",
  [sym_at_token] = "at_token",
  [sym_comment] = "comment",
  [sym_verbatim_text] = "verbatim_text",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_at_group_repeat1] = "at_group_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [anon_alias_sym_env_name] = "env_name",
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
  [anon_sym_verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVerbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVerbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LVerbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LVerbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lstlisting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
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
  [anon_sym_makeatletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatother] = {
    .visible = true,
    .named = false,
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
  [sym_comment_char] = {
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
  [sym__verbatim_token] = {
    .visible = false,
    .named = true,
  },
  [sym_magic] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
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
  [sym__at_text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_at_group] = {
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
  [sym_text_environment] = {
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
  [sym_begin_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_Verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_Verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_Verbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_Verbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_BVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_BVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_BVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_BVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_LVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_LVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_LVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_LVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_lstlisting] = {
    .visible = true,
    .named = true,
  },
  [sym_end_lstlisting] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_minted] = {
    .visible = true,
    .named = true,
  },
  [sym_end_minted] = {
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
  [sym_verbatim_environment] = {
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
  [sym_at_command] = {
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
  [sym_at_text_group] = {
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
  [sym_opt_at_text_group] = {
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
  [sym_at_token] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
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
  [aux_sym_at_group_repeat1] = {
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
  [anon_alias_sym_env_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_text,
  },
  [2] = {
    [1] = anon_alias_sym_env_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'V')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(75);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'e')
        ADVANCE(129);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'g')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(150);
      if (lookahead == 'k')
        ADVANCE(159);
      if (lookahead == 'l')
        ADVANCE(161);
      if (lookahead == 'm')
        ADVANCE(171);
      if (lookahead == 'p')
        ADVANCE(203);
      if (lookahead == 's')
        ADVANCE(211);
      if (lookahead == 't')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(231);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == 'x')
        ADVANCE(249);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '}')
        ADVANCE(251);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'T')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'X')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'V')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'V')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(58);
      if (lookahead == 's')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_display_math_env_name);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == 'h')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == '`')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == 'g')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(109);
      if (lookahead == 'o')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 'q')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(134);
      if (lookahead == 'u')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(146);
      if (lookahead == 'd')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(152);
      if (lookahead == 'p')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(172);
      if (lookahead == 'i')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(173);
      if (lookahead == 't')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead == 'o')
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(192);
      if (lookahead == 't')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_minted);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(206);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(212);
      if (lookahead == 'p')
        ADVANCE(217);
      if (lookahead == 'u')
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(212);
      if (lookahead == 'u')
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 253:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'V')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(75);
      if (lookahead == 'd')
        ADVANCE(88);
      if (lookahead == 'e')
        ADVANCE(129);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'g')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(150);
      if (lookahead == 'k')
        ADVANCE(159);
      if (lookahead == 'l')
        ADVANCE(161);
      if (lookahead == 'm')
        ADVANCE(171);
      if (lookahead == 'p')
        ADVANCE(203);
      if (lookahead == 's')
        ADVANCE(211);
      if (lookahead == 't')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(231);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == 'x')
        ADVANCE(249);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '}')
        ADVANCE(251);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(254);
      END_STATE();
    case 255:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 260:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(261);
      if (lookahead == 'b')
        ADVANCE(274);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'k')
        ADVANCE(315);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(332);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead == 'u')
        ADVANCE(355);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'p')
        ADVANCE(269);
      if (lookahead == 's')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead == 'h')
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'p')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(318);
      if (lookahead == 'i')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'u')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(348);
      if (lookahead == 's')
        ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead == 'u')
        ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 369:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '}')
        ADVANCE(251);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(257);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 371:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(254);
      END_STATE();
    case 372:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '}')
        ADVANCE(251);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      ADVANCE(257);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == '!')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == '!')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == '!')
        ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(382);
      END_STATE();
    case 384:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      END_STATE();
    case 385:
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__verbatim_token);
      END_STATE();
    case 387:
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(386);
      END_STATE();
    case 388:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      END_STATE();
    case 389:
      if (lookahead == 'a')
        ADVANCE(261);
      if (lookahead == 'b')
        ADVANCE(274);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'k')
        ADVANCE(315);
      if (lookahead == 'm')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(332);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead == 't')
        ADVANCE(391);
      if (lookahead == 'u')
        ADVANCE(355);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(386);
      END_STATE();
    case 395:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(261);
      if (lookahead == 'b')
        ADVANCE(274);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'k')
        ADVANCE(315);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(332);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead == 'u')
        ADVANCE(355);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(366);
      if (lookahead == 'n')
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 399:
      if (lookahead == 'B')
        ADVANCE(400);
      if (lookahead == 'L')
        ADVANCE(410);
      if (lookahead == 'V')
        ADVANCE(420);
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'd')
        ADVANCE(437);
      if (lookahead == 'e')
        ADVANCE(463);
      if (lookahead == 'f')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(476);
      if (lookahead == 'l')
        ADVANCE(481);
      if (lookahead == 'm')
        ADVANCE(491);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == 'v')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(434);
      if (lookahead == 'a')
        ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(438);
      if (lookahead == 'g')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(446);
      if (lookahead == 'm')
        ADVANCE(455);
      if (lookahead == 's')
        ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(465);
      if (lookahead == 'u')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(492);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead == 'u')
        ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_minted);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(400);
      if (lookahead == 'L')
        ADVANCE(410);
      if (lookahead == 'V')
        ADVANCE(420);
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'd')
        ADVANCE(437);
      if (lookahead == 'e')
        ADVANCE(463);
      if (lookahead == 'f')
        ADVANCE(471);
      if (lookahead == 'g')
        ADVANCE(476);
      if (lookahead == 'l')
        ADVANCE(481);
      if (lookahead == 'm')
        ADVANCE(491);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == 'v')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(257);
      END_STATE();
    case 519:
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    case 521:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 522:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(522);
      END_STATE();
    case 523:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(524);
      if (lookahead == 'b')
        ADVANCE(536);
      if (lookahead == 'c')
        ADVANCE(541);
      if (lookahead == 'd')
        ADVANCE(553);
      if (lookahead == 'i')
        ADVANCE(568);
      if (lookahead == 'k')
        ADVANCE(577);
      if (lookahead == 'm')
        ADVANCE(579);
      if (lookahead == 'p')
        ADVANCE(593);
      if (lookahead == 's')
        ADVANCE(601);
      if (lookahead == 'u')
        ADVANCE(616);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(525);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(526);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(527);
      if (lookahead == 'p')
        ADVANCE(531);
      if (lookahead == 's')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(528);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(529);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(532);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(533);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(535);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(537);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(538);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(540);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(542);
      if (lookahead == 'h')
        ADVANCE(548);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(543);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(544);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(545);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(546);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(547);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(82);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(549);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(550);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(551);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(552);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(556);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(557);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(558);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(559);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(560);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(561);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(562);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(563);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(564);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(565);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(566);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(567);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(569);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(570);
      if (lookahead == 'p')
        ADVANCE(575);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(571);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(572);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(573);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(574);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(576);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(574);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(578);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(542);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(580);
      if (lookahead == 'i')
        ADVANCE(590);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(581);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(582);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(583);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(584);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(586);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(587);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(588);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(589);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(591);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(592);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(594);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(595);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(596);
      if (lookahead == 't')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(597);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(598);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(599);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(600);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(602);
      if (lookahead == 'u')
        ADVANCE(607);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(603);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(604);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(605);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(606);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(608);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(609);
      if (lookahead == 's')
        ADVANCE(612);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(610);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(611);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(596);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(602);
      if (lookahead == 'u')
        ADVANCE(613);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(614);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(615);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(602);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(617);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(618);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(619);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(620);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(621);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(622);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(623);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(624);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(625);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(627);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(554);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 629:
      if (lookahead == 'a')
        ADVANCE(261);
      if (lookahead == 'b')
        ADVANCE(274);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(291);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'k')
        ADVANCE(315);
      if (lookahead == 'm')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(332);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead == 't')
        ADVANCE(391);
      if (lookahead == 'u')
        ADVANCE(355);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 630:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(630);
      END_STATE();
    case 631:
      if (lookahead == 'e')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(631);
      END_STATE();
    case 632:
      if (lookahead == 'n')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'd')
        ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 635:
      if (lookahead == '}')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(635);
      END_STATE();
    case 636:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(524);
      if (lookahead == 'b')
        ADVANCE(536);
      if (lookahead == 'c')
        ADVANCE(541);
      if (lookahead == 'd')
        ADVANCE(553);
      if (lookahead == 'i')
        ADVANCE(568);
      if (lookahead == 'k')
        ADVANCE(577);
      if (lookahead == 'm')
        ADVANCE(637);
      if (lookahead == 'p')
        ADVANCE(593);
      if (lookahead == 's')
        ADVANCE(601);
      if (lookahead == 'u')
        ADVANCE(616);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(367);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(590);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 638:
      if (lookahead == 'B')
        ADVANCE(639);
      if (lookahead == 'L')
        ADVANCE(648);
      if (lookahead == 'V')
        ADVANCE(657);
      if (lookahead == 'a')
        ADVANCE(665);
      if (lookahead == 'd')
        ADVANCE(672);
      if (lookahead == 'e')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(706);
      if (lookahead == 'g')
        ADVANCE(711);
      if (lookahead == 'l')
        ADVANCE(716);
      if (lookahead == 'm')
        ADVANCE(726);
      if (lookahead == 's')
        ADVANCE(742);
      if (lookahead == 'v')
        ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(638);
      END_STATE();
    case 639:
      if (lookahead == 'V')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'e')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'r')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'b')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'a')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 't')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'i')
        ADVANCE(646);
      END_STATE();
    case 646:
      if (lookahead == 'm')
        ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(25);
      END_STATE();
    case 648:
      if (lookahead == 'V')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'e')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'r')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'b')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'a')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 't')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'i')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 'm')
        ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(36);
      END_STATE();
    case 657:
      if (lookahead == 'e')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 'r')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 'b')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'a')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 't')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'i')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 'm')
        ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(45);
      END_STATE();
    case 665:
      if (lookahead == 'l')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 'i')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'g')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'n')
        ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(670);
      END_STATE();
    case 670:
      if (lookahead == 't')
        ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(67);
      END_STATE();
    case 672:
      if (lookahead == 'a')
        ADVANCE(673);
      if (lookahead == 'g')
        ADVANCE(677);
      if (lookahead == 'i')
        ADVANCE(681);
      if (lookahead == 'm')
        ADVANCE(690);
      if (lookahead == 's')
        ADVANCE(693);
      END_STATE();
    case 673:
      if (lookahead == 'r')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'r')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'a')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'y')
        ADVANCE(671);
      END_STATE();
    case 677:
      if (lookahead == 'r')
        ADVANCE(678);
      END_STATE();
    case 678:
      if (lookahead == 'o')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'u')
        ADVANCE(680);
      END_STATE();
    case 680:
      if (lookahead == 'p')
        ADVANCE(671);
      END_STATE();
    case 681:
      if (lookahead == 's')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'p')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'l')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'a')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 'y')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'm')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'a')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 't')
        ADVANCE(689);
      END_STATE();
    case 689:
      if (lookahead == 'h')
        ADVANCE(67);
      END_STATE();
    case 690:
      if (lookahead == 'a')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 't')
        ADVANCE(692);
      END_STATE();
    case 692:
      if (lookahead == 'h')
        ADVANCE(671);
      END_STATE();
    case 693:
      if (lookahead == 'e')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'r')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'i')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'e')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 's')
        ADVANCE(671);
      END_STATE();
    case 698:
      if (lookahead == 'q')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'n')
        ADVANCE(700);
      if (lookahead == 'u')
        ADVANCE(701);
      END_STATE();
    case 700:
      if (lookahead == 'a')
        ADVANCE(673);
      END_STATE();
    case 701:
      if (lookahead == 'a')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 't')
        ADVANCE(703);
      END_STATE();
    case 703:
      if (lookahead == 'i')
        ADVANCE(704);
      END_STATE();
    case 704:
      if (lookahead == 'o')
        ADVANCE(705);
      END_STATE();
    case 705:
      if (lookahead == 'n')
        ADVANCE(671);
      END_STATE();
    case 706:
      if (lookahead == 'l')
        ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == 'a')
        ADVANCE(708);
      END_STATE();
    case 708:
      if (lookahead == 'l')
        ADVANCE(709);
      END_STATE();
    case 709:
      if (lookahead == 'i')
        ADVANCE(710);
      END_STATE();
    case 710:
      if (lookahead == 'g')
        ADVANCE(705);
      END_STATE();
    case 711:
      if (lookahead == 'a')
        ADVANCE(712);
      END_STATE();
    case 712:
      if (lookahead == 't')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'h')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'e')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'r')
        ADVANCE(671);
      END_STATE();
    case 716:
      if (lookahead == 's')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 't')
        ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 'l')
        ADVANCE(719);
      END_STATE();
    case 719:
      if (lookahead == 'i')
        ADVANCE(720);
      END_STATE();
    case 720:
      if (lookahead == 's')
        ADVANCE(721);
      END_STATE();
    case 721:
      if (lookahead == 't')
        ADVANCE(722);
      END_STATE();
    case 722:
      if (lookahead == 'i')
        ADVANCE(723);
      END_STATE();
    case 723:
      if (lookahead == 'n')
        ADVANCE(724);
      END_STATE();
    case 724:
      if (lookahead == 'g')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 726:
      if (lookahead == 'a')
        ADVANCE(727);
      if (lookahead == 'i')
        ADVANCE(730);
      if (lookahead == 'u')
        ADVANCE(735);
      END_STATE();
    case 727:
      if (lookahead == 't')
        ADVANCE(728);
      END_STATE();
    case 728:
      if (lookahead == 'h')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      END_STATE();
    case 730:
      if (lookahead == 'n')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 't')
        ADVANCE(732);
      END_STATE();
    case 732:
      if (lookahead == 'e')
        ADVANCE(733);
      END_STATE();
    case 733:
      if (lookahead == 'd')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 735:
      if (lookahead == 'l')
        ADVANCE(736);
      END_STATE();
    case 736:
      if (lookahead == 't')
        ADVANCE(737);
      END_STATE();
    case 737:
      if (lookahead == 'i')
        ADVANCE(738);
      END_STATE();
    case 738:
      if (lookahead == 'l')
        ADVANCE(739);
      END_STATE();
    case 739:
      if (lookahead == 'i')
        ADVANCE(740);
      END_STATE();
    case 740:
      if (lookahead == 'n')
        ADVANCE(741);
      END_STATE();
    case 741:
      if (lookahead == 'e')
        ADVANCE(671);
      END_STATE();
    case 742:
      if (lookahead == 'p')
        ADVANCE(743);
      END_STATE();
    case 743:
      if (lookahead == 'l')
        ADVANCE(744);
      END_STATE();
    case 744:
      if (lookahead == 'i')
        ADVANCE(670);
      END_STATE();
    case 745:
      if (lookahead == 'e')
        ADVANCE(746);
      END_STATE();
    case 746:
      if (lookahead == 'r')
        ADVANCE(747);
      END_STATE();
    case 747:
      if (lookahead == 'b')
        ADVANCE(748);
      END_STATE();
    case 748:
      if (lookahead == 'a')
        ADVANCE(749);
      END_STATE();
    case 749:
      if (lookahead == 't')
        ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == 'i')
        ADVANCE(751);
      END_STATE();
    case 751:
      if (lookahead == 'm')
        ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 255},
  [2] = {.lex_state = 258},
  [3] = {.lex_state = 260},
  [4] = {.lex_state = 369},
  [5] = {.lex_state = 255},
  [6] = {.lex_state = 371},
  [7] = {.lex_state = 372},
  [8] = {.lex_state = 374},
  [9] = {.lex_state = 384},
  [10] = {.lex_state = 384},
  [11] = {.lex_state = 255},
  [12] = {.lex_state = 255},
  [13] = {.lex_state = 255},
  [14] = {.lex_state = 255},
  [15] = {.lex_state = 385},
  [16] = {.lex_state = 387},
  [17] = {.lex_state = 387},
  [18] = {.lex_state = 387},
  [19] = {.lex_state = 387},
  [20] = {.lex_state = 387},
  [21] = {.lex_state = 387},
  [22] = {.lex_state = 387},
  [23] = {.lex_state = 388},
  [24] = {.lex_state = 255},
  [25] = {.lex_state = 388},
  [26] = {.lex_state = 372},
  [27] = {.lex_state = 388},
  [28] = {.lex_state = 388},
  [29] = {.lex_state = 388},
  [30] = {.lex_state = 388},
  [31] = {.lex_state = 372},
  [32] = {.lex_state = 388},
  [33] = {.lex_state = 255},
  [34] = {.lex_state = 255},
  [35] = {.lex_state = 258},
  [36] = {.lex_state = 255},
  [37] = {.lex_state = 255},
  [38] = {.lex_state = 255},
  [39] = {.lex_state = 372},
  [40] = {.lex_state = 388},
  [41] = {.lex_state = 388},
  [42] = {.lex_state = 388},
  [43] = {.lex_state = 388},
  [44] = {.lex_state = 388},
  [45] = {.lex_state = 372},
  [46] = {.lex_state = 388},
  [47] = {.lex_state = 255},
  [48] = {.lex_state = 372},
  [49] = {.lex_state = 372},
  [50] = {.lex_state = 369},
  [51] = {.lex_state = 389},
  [52] = {.lex_state = 369},
  [53] = {.lex_state = 255},
  [54] = {.lex_state = 388},
  [55] = {.lex_state = 388},
  [56] = {.lex_state = 255},
  [57] = {.lex_state = 388},
  [58] = {.lex_state = 258},
  [59] = {.lex_state = 255},
  [60] = {.lex_state = 372},
  [61] = {.lex_state = 372},
  [62] = {.lex_state = 388},
  [63] = {.lex_state = 255},
  [64] = {.lex_state = 388},
  [65] = {.lex_state = 388},
  [66] = {.lex_state = 388},
  [67] = {.lex_state = 388},
  [68] = {.lex_state = 394},
  [69] = {.lex_state = 385},
  [70] = {.lex_state = 388},
  [71] = {.lex_state = 258},
  [72] = {.lex_state = 385},
  [73] = {.lex_state = 388},
  [74] = {.lex_state = 385},
  [75] = {.lex_state = 388},
  [76] = {.lex_state = 385},
  [77] = {.lex_state = 388},
  [78] = {.lex_state = 385},
  [79] = {.lex_state = 388},
  [80] = {.lex_state = 385},
  [81] = {.lex_state = 388},
  [82] = {.lex_state = 385},
  [83] = {.lex_state = 388},
  [84] = {.lex_state = 369},
  [85] = {.lex_state = 385},
  [86] = {.lex_state = 395},
  [87] = {.lex_state = 372},
  [88] = {.lex_state = 388},
  [89] = {.lex_state = 255},
  [90] = {.lex_state = 399},
  [91] = {.lex_state = 519},
  [92] = {.lex_state = 255},
  [93] = {.lex_state = 255},
  [94] = {.lex_state = 255},
  [95] = {.lex_state = 372},
  [96] = {.lex_state = 388},
  [97] = {.lex_state = 258},
  [98] = {.lex_state = 372},
  [99] = {.lex_state = 388},
  [100] = {.lex_state = 372},
  [101] = {.lex_state = 372},
  [102] = {.lex_state = 388},
  [103] = {.lex_state = 521},
  [104] = {.lex_state = 522},
  [105] = {.lex_state = 523},
  [106] = {.lex_state = 369},
  [107] = {.lex_state = 372},
  [108] = {.lex_state = 372},
  [109] = {.lex_state = 372},
  [110] = {.lex_state = 372},
  [111] = {.lex_state = 258},
  [112] = {.lex_state = 255},
  [113] = {.lex_state = 372},
  [114] = {.lex_state = 372},
  [115] = {.lex_state = 258},
  [116] = {.lex_state = 255},
  [117] = {.lex_state = 372},
  [118] = {.lex_state = 369},
  [119] = {.lex_state = 388},
  [120] = {.lex_state = 372},
  [121] = {.lex_state = 369},
  [122] = {.lex_state = 388},
  [123] = {.lex_state = 372},
  [124] = {.lex_state = 369},
  [125] = {.lex_state = 372},
  [126] = {.lex_state = 629},
  [127] = {.lex_state = 372},
  [128] = {.lex_state = 255},
  [129] = {.lex_state = 372},
  [130] = {.lex_state = 258},
  [131] = {.lex_state = 255},
  [132] = {.lex_state = 388},
  [133] = {.lex_state = 372},
  [134] = {.lex_state = 255},
  [135] = {.lex_state = 630},
  [136] = {.lex_state = 372},
  [137] = {.lex_state = 631},
  [138] = {.lex_state = 372},
  [139] = {.lex_state = 388},
  [140] = {.lex_state = 372},
  [141] = {.lex_state = 388},
  [142] = {.lex_state = 372},
  [143] = {.lex_state = 388},
  [144] = {.lex_state = 394},
  [145] = {.lex_state = 388},
  [146] = {.lex_state = 388},
  [147] = {.lex_state = 385},
  [148] = {.lex_state = 385},
  [149] = {.lex_state = 258},
  [150] = {.lex_state = 388},
  [151] = {.lex_state = 388},
  [152] = {.lex_state = 388},
  [153] = {.lex_state = 388},
  [154] = {.lex_state = 388},
  [155] = {.lex_state = 388},
  [156] = {.lex_state = 388},
  [157] = {.lex_state = 388},
  [158] = {.lex_state = 388},
  [159] = {.lex_state = 388},
  [160] = {.lex_state = 388},
  [161] = {.lex_state = 388},
  [162] = {.lex_state = 385},
  [163] = {.lex_state = 369},
  [164] = {.lex_state = 388},
  [165] = {.lex_state = 388},
  [166] = {.lex_state = 372},
  [167] = {.lex_state = 372},
  [168] = {.lex_state = 255},
  [169] = {.lex_state = 635},
  [170] = {.lex_state = 635},
  [171] = {.lex_state = 635},
  [172] = {.lex_state = 635},
  [173] = {.lex_state = 635},
  [174] = {.lex_state = 635},
  [175] = {.lex_state = 635},
  [176] = {.lex_state = 635},
  [177] = {.lex_state = 635},
  [178] = {.lex_state = 635},
  [179] = {.lex_state = 635},
  [180] = {.lex_state = 635},
  [181] = {.lex_state = 369},
  [182] = {.lex_state = 255},
  [183] = {.lex_state = 519},
  [184] = {.lex_state = 519},
  [185] = {.lex_state = 258},
  [186] = {.lex_state = 372},
  [187] = {.lex_state = 388},
  [188] = {.lex_state = 388},
  [189] = {.lex_state = 258},
  [190] = {.lex_state = 372},
  [191] = {.lex_state = 372},
  [192] = {.lex_state = 522},
  [193] = {.lex_state = 371},
  [194] = {.lex_state = 372},
  [195] = {.lex_state = 372},
  [196] = {.lex_state = 636},
  [197] = {.lex_state = 372},
  [198] = {.lex_state = 369},
  [199] = {.lex_state = 372},
  [200] = {.lex_state = 258},
  [201] = {.lex_state = 372},
  [202] = {.lex_state = 255},
  [203] = {.lex_state = 372},
  [204] = {.lex_state = 258},
  [205] = {.lex_state = 372},
  [206] = {.lex_state = 369},
  [207] = {.lex_state = 388},
  [208] = {.lex_state = 372},
  [209] = {.lex_state = 635},
  [210] = {.lex_state = 369},
  [211] = {.lex_state = 372},
  [212] = {.lex_state = 372},
  [213] = {.lex_state = 258},
  [214] = {.lex_state = 372},
  [215] = {.lex_state = 372},
  [216] = {.lex_state = 638},
  [217] = {.lex_state = 372},
  [218] = {.lex_state = 638},
  [219] = {.lex_state = 372},
  [220] = {.lex_state = 638},
  [221] = {.lex_state = 372},
  [222] = {.lex_state = 638},
  [223] = {.lex_state = 385},
  [224] = {.lex_state = 638},
  [225] = {.lex_state = 638},
  [226] = {.lex_state = 638},
  [227] = {.lex_state = 638},
  [228] = {.lex_state = 638},
  [229] = {.lex_state = 638},
  [230] = {.lex_state = 385},
  [231] = {.lex_state = 388},
  [232] = {.lex_state = 519},
  [233] = {.lex_state = 372},
  [234] = {.lex_state = 385},
  [235] = {.lex_state = 387},
  [236] = {.lex_state = 387},
  [237] = {.lex_state = 387},
  [238] = {.lex_state = 387},
  [239] = {.lex_state = 387},
  [240] = {.lex_state = 387},
  [241] = {.lex_state = 387},
  [242] = {.lex_state = 388},
  [243] = {.lex_state = 372},
  [244] = {.lex_state = 519},
  [245] = {.lex_state = 369},
  [246] = {.lex_state = 255},
  [247] = {.lex_state = 519},
  [248] = {.lex_state = 519},
  [249] = {.lex_state = 519},
  [250] = {.lex_state = 258},
  [251] = {.lex_state = 388},
  [252] = {.lex_state = 372},
  [253] = {.lex_state = 372},
  [254] = {.lex_state = 369},
  [255] = {.lex_state = 372},
  [256] = {.lex_state = 258},
  [257] = {.lex_state = 372},
  [258] = {.lex_state = 372},
  [259] = {.lex_state = 635},
  [260] = {.lex_state = 635},
  [261] = {.lex_state = 635},
  [262] = {.lex_state = 635},
  [263] = {.lex_state = 635},
  [264] = {.lex_state = 635},
  [265] = {.lex_state = 635},
  [266] = {.lex_state = 635},
  [267] = {.lex_state = 635},
  [268] = {.lex_state = 638},
  [269] = {.lex_state = 519},
  [270] = {.lex_state = 255},
  [271] = {.lex_state = 519},
  [272] = {.lex_state = 372},
  [273] = {.lex_state = 372},
  [274] = {.lex_state = 372},
  [275] = {.lex_state = 372},
  [276] = {.lex_state = 372},
  [277] = {.lex_state = 372},
  [278] = {.lex_state = 372},
  [279] = {.lex_state = 372},
  [280] = {.lex_state = 372},
  [281] = {.lex_state = 635},
  [282] = {.lex_state = 372},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_display_math_env_name] = ACTIONS(3),
    [sym_inline_math_env_name] = ACTIONS(3),
    [anon_sym_verbatim] = ACTIONS(3),
    [anon_sym_Verbatim] = ACTIONS(3),
    [anon_sym_Verbatim_STAR] = ACTIONS(1),
    [anon_sym_BVerbatim] = ACTIONS(3),
    [anon_sym_BVerbatim_STAR] = ACTIONS(1),
    [anon_sym_LVerbatim] = ACTIONS(3),
    [anon_sym_LVerbatim_STAR] = ACTIONS(1),
    [anon_sym_lstlisting] = ACTIONS(3),
    [anon_sym_minted] = ACTIONS(3),
    [anon_sym_tag] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_documentclass] = ACTIONS(3),
    [anon_sym_usepackage] = ACTIONS(3),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(3),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(1),
    [anon_sym_makeatletter] = ACTIONS(3),
    [anon_sym_makeatother] = ACTIONS(3),
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym__name] = ACTIONS(3),
    [sym__at_name] = ACTIONS(3),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_magic] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(9),
    [sym__text_mode] = STATE(36),
    [sym_text_mode] = STATE(10),
    [sym_at_group] = STATE(36),
    [sym_parameter] = STATE(36),
    [sym_text_environment] = STATE(36),
    [sym__display_math] = STATE(36),
    [sym_tex_display_math] = STATE(36),
    [sym_latex_display_math] = STATE(36),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(36),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(36),
    [sym_tex_inline_math] = STATE(36),
    [sym_latex_inline_math] = STATE(36),
    [sym_inline_math_env] = STATE(36),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(36),
    [sym_escaped] = STATE(36),
    [sym_command] = STATE(36),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(36),
    [sym_opt_text_group] = STATE(36),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(36),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym__escape] = ACTIONS(25),
    [sym_begin_group] = ACTIONS(25),
    [sym_math_shift] = ACTIONS(25),
    [sym_alignment_tab] = ACTIONS(25),
    [sym_parameter_char] = ACTIONS(25),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(25),
    [sym_comment_char] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
  },
  [3] = {
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
    [anon_sym_makeatletter] = ACTIONS(49),
    [sym__name] = ACTIONS(51),
  },
  [4] = {
    [sym__text_mode] = STATE(50),
    [sym_at_group] = STATE(50),
    [sym_parameter] = STATE(50),
    [sym_text_environment] = STATE(50),
    [sym__display_math] = STATE(50),
    [sym_tex_display_math] = STATE(50),
    [sym_latex_display_math] = STATE(50),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(50),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(50),
    [sym_tex_inline_math] = STATE(50),
    [sym_latex_inline_math] = STATE(50),
    [sym_inline_math_env] = STATE(50),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(50),
    [sym_escaped] = STATE(50),
    [sym_command] = STATE(50),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(50),
    [sym_opt_text_group] = STATE(50),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(50),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(50),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(57),
  },
  [5] = {
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(54),
    [sym_parameter] = STATE(59),
    [sym_math_environment] = STATE(59),
    [sym_tag] = STATE(59),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(59),
    [sym_command] = STATE(59),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(59),
    [sym_opt_math_group] = STATE(59),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(59),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(67),
  },
  [6] = {
    [sym_number] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(73),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(73),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(73),
    [sym_text] = ACTIONS(71),
  },
  [8] = {
    [sym_magic] = ACTIONS(75),
    [sym_comment_text] = ACTIONS(77),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [11] = {
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(62),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [12] = {
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(64),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [13] = {
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [14] = {
    [sym__math_mode] = STATE(63),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_tag] = STATE(63),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(63),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [15] = {
    [sym_verbatim_text] = STATE(67),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [16] = {
    [sym_opt_text_group] = STATE(69),
    [sym_verbatim_text] = STATE(70),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [17] = {
    [sym_opt_text_group] = STATE(72),
    [sym_verbatim_text] = STATE(73),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [18] = {
    [sym_opt_text_group] = STATE(74),
    [sym_verbatim_text] = STATE(75),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [19] = {
    [sym_opt_text_group] = STATE(76),
    [sym_verbatim_text] = STATE(77),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [20] = {
    [sym_opt_text_group] = STATE(78),
    [sym_verbatim_text] = STATE(79),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [21] = {
    [sym_opt_text_group] = STATE(80),
    [sym_verbatim_text] = STATE(81),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [22] = {
    [sym_opt_text_group] = STATE(82),
    [sym_verbatim_text] = STATE(83),
    [sym_begin_opt] = STATE(71),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(89),
  },
  [23] = {
    [sym_text_group] = STATE(85),
    [sym_begin_group] = ACTIONS(91),
  },
  [24] = {
    [sym__text_mode] = STATE(89),
    [sym_at_group] = STATE(89),
    [sym_parameter] = STATE(89),
    [sym_text_environment] = STATE(89),
    [sym__display_math] = STATE(89),
    [sym_tex_display_math] = STATE(89),
    [sym_latex_display_math] = STATE(89),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(89),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(89),
    [sym_tex_inline_math] = STATE(89),
    [sym_latex_inline_math] = STATE(89),
    [sym_inline_math_env] = STATE(89),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(89),
    [sym_escaped] = STATE(89),
    [sym_command] = STATE(89),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_end] = STATE(87),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(89),
    [sym_opt_text_group] = STATE(89),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(89),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(95),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(97),
  },
  [25] = {
    [sym_display_math_env_group] = STATE(91),
    [sym_inline_math_env_group] = STATE(92),
    [sym_simple_text_group] = STATE(93),
    [sym_begin_group] = ACTIONS(99),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(103),
    [sym_end_group] = ACTIONS(103),
    [sym_math_shift] = ACTIONS(103),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(103),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [sym_comment_char] = ACTIONS(103),
    [sym_text] = ACTIONS(101),
  },
  [27] = {
    [sym_simple_text_group] = STATE(95),
    [sym_opt_text_group] = STATE(96),
    [sym_begin_opt] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
  },
  [28] = {
    [sym_simple_text_group] = STATE(98),
    [sym_opt_text_group] = STATE(99),
    [sym_begin_opt] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(107),
  },
  [29] = {
    [sym_text_group] = STATE(100),
    [sym_begin_group] = ACTIONS(109),
  },
  [30] = {
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(102),
    [sym_begin_opt] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(109),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [sym__escape] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(113),
    [sym_end_group] = ACTIONS(113),
    [sym_math_shift] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(113),
    [sym_superscript] = ACTIONS(113),
    [sym_subscript] = ACTIONS(113),
    [sym_active_char] = ACTIONS(113),
    [sym_comment_char] = ACTIONS(113),
    [sym_text] = ACTIONS(111),
  },
  [32] = {
    [sym_escaped] = STATE(104),
    [sym__escape] = ACTIONS(115),
  },
  [33] = {
    [sym__at_text_mode] = STATE(112),
    [sym_parameter] = STATE(112),
    [sym_text_environment] = STATE(112),
    [sym__display_math] = STATE(112),
    [sym_tex_display_math] = STATE(112),
    [sym_latex_display_math] = STATE(112),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(112),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(112),
    [sym_tex_inline_math] = STATE(112),
    [sym_latex_inline_math] = STATE(112),
    [sym_inline_math_env] = STATE(112),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(112),
    [sym_escaped] = STATE(112),
    [sym_at_command] = STATE(112),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_makeatother] = STATE(109),
    [sym_makeatother_token] = STATE(110),
    [sym_at_text_group] = STATE(112),
    [sym_opt_at_text_group] = STATE(112),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(112),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(121),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(125),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(127),
    [sym_text] = ACTIONS(129),
  },
  [35] = {
    [sym__text_mode] = STATE(115),
    [sym_at_group] = STATE(115),
    [sym_parameter] = STATE(115),
    [sym_text_environment] = STATE(115),
    [sym__display_math] = STATE(115),
    [sym_tex_display_math] = STATE(115),
    [sym_latex_display_math] = STATE(115),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(115),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(115),
    [sym_tex_inline_math] = STATE(115),
    [sym_latex_inline_math] = STATE(115),
    [sym_inline_math_env] = STATE(115),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(115),
    [sym_escaped] = STATE(115),
    [sym_command] = STATE(115),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(115),
    [sym_opt_text_group] = STATE(115),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(115),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(114),
    [aux_sym_text_mode_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(133),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(135),
  },
  [36] = {
    [sym__text_mode] = STATE(116),
    [sym_at_group] = STATE(116),
    [sym_parameter] = STATE(116),
    [sym_text_environment] = STATE(116),
    [sym__display_math] = STATE(116),
    [sym_tex_display_math] = STATE(116),
    [sym_latex_display_math] = STATE(116),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(116),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(116),
    [sym_tex_inline_math] = STATE(116),
    [sym_latex_inline_math] = STATE(116),
    [sym_inline_math_env] = STATE(116),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(116),
    [sym_escaped] = STATE(116),
    [sym_command] = STATE(116),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(116),
    [sym_opt_text_group] = STATE(116),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(116),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(141),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_comment_char] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
  },
  [38] = {
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_comment_char] = ACTIONS(147),
    [sym_text] = ACTIONS(149),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
    [sym_end_group] = ACTIONS(153),
    [sym_math_shift] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_comment_char] = ACTIONS(153),
    [sym_text] = ACTIONS(151),
  },
  [40] = {
    [sym_begin_group] = ACTIONS(155),
  },
  [41] = {
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
  },
  [42] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
  },
  [43] = {
    [sym_begin_group] = ACTIONS(161),
  },
  [44] = {
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(167),
    [sym_end_group] = ACTIONS(167),
    [sym_math_shift] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_comment_char] = ACTIONS(167),
    [sym_text] = ACTIONS(165),
  },
  [46] = {
    [sym__escape] = ACTIONS(169),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym__escape] = ACTIONS(171),
    [sym_begin_group] = ACTIONS(171),
    [sym_math_shift] = ACTIONS(171),
    [sym_alignment_tab] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(171),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(171),
    [sym_active_char] = ACTIONS(171),
    [sym_comment_char] = ACTIONS(171),
    [sym_text] = ACTIONS(173),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [sym__escape] = ACTIONS(177),
    [sym_begin_group] = ACTIONS(177),
    [sym_end_group] = ACTIONS(177),
    [sym_math_shift] = ACTIONS(177),
    [sym_alignment_tab] = ACTIONS(177),
    [sym_parameter_char] = ACTIONS(177),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(177),
    [sym_active_char] = ACTIONS(177),
    [sym_comment_char] = ACTIONS(177),
    [sym_text] = ACTIONS(175),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(181),
    [sym_end_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(181),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(181),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(181),
    [sym_text] = ACTIONS(179),
  },
  [50] = {
    [sym__text_mode] = STATE(118),
    [sym_at_group] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_environment] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(118),
    [sym_escaped] = STATE(118),
    [sym_command] = STATE(118),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(118),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(183),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(185),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(187),
  },
  [51] = {
    [anon_sym_tag] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__name] = ACTIONS(51),
  },
  [52] = {
    [sym__math_mode] = STATE(121),
    [sym_parameter] = STATE(121),
    [sym_math_environment] = STATE(121),
    [sym_tag] = STATE(121),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(121),
    [sym_command] = STATE(121),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(121),
    [sym_opt_math_group] = STATE(121),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(121),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(191),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(195),
  },
  [53] = {
    [sym__math_mode] = STATE(59),
    [sym_math_mode] = STATE(122),
    [sym_parameter] = STATE(59),
    [sym_math_environment] = STATE(59),
    [sym_tag] = STATE(59),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(59),
    [sym_command] = STATE(59),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(59),
    [sym_opt_math_group] = STATE(59),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(59),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(67),
  },
  [54] = {
    [sym_math_shift] = ACTIONS(197),
  },
  [55] = {
    [sym_math_text_group] = STATE(125),
    [sym_begin_group] = ACTIONS(199),
  },
  [56] = {
    [sym__math_mode] = STATE(128),
    [sym_parameter] = STATE(128),
    [sym_math_environment] = STATE(128),
    [sym_tag] = STATE(128),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(128),
    [sym_command] = STATE(128),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(127),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(128),
    [sym_opt_math_group] = STATE(128),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(128),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(128),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(205),
  },
  [57] = {
    [sym_simple_text_group] = STATE(93),
    [sym_begin_group] = ACTIONS(107),
  },
  [58] = {
    [sym__math_mode] = STATE(130),
    [sym_parameter] = STATE(130),
    [sym_math_environment] = STATE(130),
    [sym_tag] = STATE(130),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(130),
    [sym_command] = STATE(130),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(130),
    [sym_opt_math_group] = STATE(130),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(130),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(129),
    [aux_sym_math_mode_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(209),
  },
  [59] = {
    [sym__math_mode] = STATE(131),
    [sym_parameter] = STATE(131),
    [sym_math_environment] = STATE(131),
    [sym_tag] = STATE(131),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(131),
    [sym_command] = STATE(131),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(131),
    [sym_opt_math_group] = STATE(131),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(131),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(215),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_end_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_comment_char] = ACTIONS(219),
    [sym_text] = ACTIONS(217),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_end_group] = ACTIONS(223),
    [sym_math_shift] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(223),
    [sym_text] = ACTIONS(221),
  },
  [62] = {
    [sym_end_display_math] = STATE(133),
    [sym__escape] = ACTIONS(225),
  },
  [63] = {
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_environment] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(134),
    [sym_command] = STATE(134),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(134),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(229),
  },
  [64] = {
    [sym_end_inline_math] = STATE(136),
    [sym__escape] = ACTIONS(231),
  },
  [65] = {
    [sym_display_math_end] = STATE(138),
    [sym_end_token] = STATE(139),
    [sym__escape] = ACTIONS(233),
  },
  [66] = {
    [sym_inline_math_end] = STATE(140),
    [sym_end_token] = STATE(141),
    [sym__escape] = ACTIONS(233),
  },
  [67] = {
    [sym_end_verbatim] = STATE(142),
    [sym_end_token] = STATE(143),
    [sym__escape] = ACTIONS(233),
  },
  [68] = {
    [aux_sym_verbatim_text_repeat1] = STATE(144),
    [sym__escape] = ACTIONS(235),
    [sym__verbatim_token] = ACTIONS(237),
  },
  [69] = {
    [sym_verbatim_text] = STATE(145),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [70] = {
    [sym_end_Verbatim] = STATE(142),
    [sym_end_token] = STATE(146),
    [sym__escape] = ACTIONS(233),
  },
  [71] = {
    [sym__text_mode] = STATE(149),
    [sym_at_group] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_environment] = STATE(149),
    [sym__display_math] = STATE(149),
    [sym_tex_display_math] = STATE(149),
    [sym_latex_display_math] = STATE(149),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(149),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(149),
    [sym_tex_inline_math] = STATE(149),
    [sym_latex_inline_math] = STATE(149),
    [sym_inline_math_env] = STATE(149),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(149),
    [sym_escaped] = STATE(149),
    [sym_command] = STATE(149),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(149),
    [sym_opt_text_group] = STATE(149),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(149),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(148),
    [aux_sym_text_mode_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(243),
  },
  [72] = {
    [sym_verbatim_text] = STATE(150),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [73] = {
    [sym_end_Verbatim_star] = STATE(142),
    [sym_end_token] = STATE(151),
    [sym__escape] = ACTIONS(233),
  },
  [74] = {
    [sym_verbatim_text] = STATE(152),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [75] = {
    [sym_end_BVerbatim] = STATE(142),
    [sym_end_token] = STATE(153),
    [sym__escape] = ACTIONS(233),
  },
  [76] = {
    [sym_verbatim_text] = STATE(154),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [77] = {
    [sym_end_BVerbatim_star] = STATE(142),
    [sym_end_token] = STATE(155),
    [sym__escape] = ACTIONS(233),
  },
  [78] = {
    [sym_verbatim_text] = STATE(156),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [79] = {
    [sym_end_LVerbatim] = STATE(142),
    [sym_end_token] = STATE(157),
    [sym__escape] = ACTIONS(233),
  },
  [80] = {
    [sym_verbatim_text] = STATE(158),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [81] = {
    [sym_end_LVerbatim_star] = STATE(142),
    [sym_end_token] = STATE(159),
    [sym__escape] = ACTIONS(233),
  },
  [82] = {
    [sym_verbatim_text] = STATE(160),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [83] = {
    [sym_end_lstlisting] = STATE(142),
    [sym_end_token] = STATE(161),
    [sym__escape] = ACTIONS(233),
  },
  [84] = {
    [sym__text_mode] = STATE(163),
    [sym_at_group] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_text_environment] = STATE(163),
    [sym__display_math] = STATE(163),
    [sym_tex_display_math] = STATE(163),
    [sym_latex_display_math] = STATE(163),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(163),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(163),
    [sym_tex_inline_math] = STATE(163),
    [sym_latex_inline_math] = STATE(163),
    [sym_inline_math_env] = STATE(163),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(163),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(163),
    [sym_opt_text_group] = STATE(163),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(163),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(245),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(247),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(249),
  },
  [85] = {
    [sym_verbatim_text] = STATE(164),
    [aux_sym_verbatim_text_repeat1] = STATE(68),
    [sym__verbatim_token] = ACTIONS(87),
  },
  [86] = {
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
    [anon_sym_makeatletter] = ACTIONS(49),
    [sym__name] = ACTIONS(51),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [sym__escape] = ACTIONS(255),
    [sym_begin_group] = ACTIONS(255),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(255),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(255),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(255),
    [sym_text] = ACTIONS(253),
  },
  [88] = {
    [sym_simple_text_group] = STATE(166),
    [sym_begin_group] = ACTIONS(107),
  },
  [89] = {
    [sym__text_mode] = STATE(168),
    [sym_at_group] = STATE(168),
    [sym_parameter] = STATE(168),
    [sym_text_environment] = STATE(168),
    [sym__display_math] = STATE(168),
    [sym_tex_display_math] = STATE(168),
    [sym_latex_display_math] = STATE(168),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(168),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(168),
    [sym_tex_inline_math] = STATE(168),
    [sym_latex_inline_math] = STATE(168),
    [sym_inline_math_env] = STATE(168),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(168),
    [sym_escaped] = STATE(168),
    [sym_command] = STATE(168),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_end] = STATE(167),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(168),
    [sym_opt_text_group] = STATE(168),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(168),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(168),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(257),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(259),
  },
  [90] = {
    [sym_display_math_env_name] = ACTIONS(261),
    [sym_inline_math_env_name] = ACTIONS(263),
    [anon_sym_verbatim] = ACTIONS(265),
    [anon_sym_Verbatim] = ACTIONS(267),
    [anon_sym_Verbatim_STAR] = ACTIONS(269),
    [anon_sym_BVerbatim] = ACTIONS(271),
    [anon_sym_BVerbatim_STAR] = ACTIONS(273),
    [anon_sym_LVerbatim] = ACTIONS(275),
    [anon_sym_LVerbatim_STAR] = ACTIONS(277),
    [anon_sym_lstlisting] = ACTIONS(279),
    [anon_sym_minted] = ACTIONS(281),
    [sym_text] = ACTIONS(283),
  },
  [91] = {
    [sym_text_group] = STATE(183),
    [sym_opt_text_group] = STATE(184),
    [sym_begin_opt] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(285),
    [sym__end_of_line] = ACTIONS(287),
  },
  [92] = {
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym__escape] = ACTIONS(289),
    [sym_begin_group] = ACTIONS(289),
    [sym_alignment_tab] = ACTIONS(289),
    [sym_parameter_char] = ACTIONS(289),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(289),
    [sym_active_char] = ACTIONS(289),
    [sym_comment_char] = ACTIONS(289),
    [sym_text] = ACTIONS(291),
  },
  [93] = {
    [anon_sym_LBRACK] = ACTIONS(293),
    [sym__escape] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(293),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(295),
  },
  [94] = {
    [sym_text] = ACTIONS(297),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(301),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [sym_active_char] = ACTIONS(301),
    [sym_comment_char] = ACTIONS(301),
    [sym_text] = ACTIONS(299),
  },
  [96] = {
    [sym_simple_text_group] = STATE(186),
    [sym_begin_group] = ACTIONS(107),
  },
  [97] = {
    [sym__text_mode] = STATE(189),
    [sym_at_group] = STATE(189),
    [sym_parameter] = STATE(189),
    [sym_text_environment] = STATE(189),
    [sym__display_math] = STATE(189),
    [sym_tex_display_math] = STATE(189),
    [sym_latex_display_math] = STATE(189),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(189),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(189),
    [sym_tex_inline_math] = STATE(189),
    [sym_latex_inline_math] = STATE(189),
    [sym_inline_math_env] = STATE(189),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(189),
    [sym_escaped] = STATE(189),
    [sym_command] = STATE(189),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(189),
    [sym_opt_text_group] = STATE(189),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(189),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(188),
    [aux_sym_text_mode_repeat1] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(305),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(307),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym__escape] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(311),
    [sym_end_group] = ACTIONS(311),
    [sym_math_shift] = ACTIONS(311),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_active_char] = ACTIONS(311),
    [sym_comment_char] = ACTIONS(311),
    [sym_text] = ACTIONS(309),
  },
  [99] = {
    [sym_simple_text_group] = STATE(190),
    [sym_begin_group] = ACTIONS(107),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym__escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_end_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(313),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym__escape] = ACTIONS(319),
    [sym_begin_group] = ACTIONS(319),
    [sym_end_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(319),
    [sym_parameter_char] = ACTIONS(319),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(319),
    [sym_active_char] = ACTIONS(319),
    [sym_comment_char] = ACTIONS(319),
    [sym_text] = ACTIONS(317),
  },
  [102] = {
    [sym_text_group] = STATE(191),
    [sym_begin_group] = ACTIONS(109),
  },
  [103] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(321),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(323),
  },
  [105] = {
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
    [anon_sym_makeatother] = ACTIONS(325),
    [sym__at_name] = ACTIONS(327),
  },
  [106] = {
    [sym__at_text_mode] = STATE(198),
    [sym_parameter] = STATE(198),
    [sym_text_environment] = STATE(198),
    [sym__display_math] = STATE(198),
    [sym_tex_display_math] = STATE(198),
    [sym_latex_display_math] = STATE(198),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(198),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(198),
    [sym_tex_inline_math] = STATE(198),
    [sym_latex_inline_math] = STATE(198),
    [sym_inline_math_env] = STATE(198),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(198),
    [sym_escaped] = STATE(198),
    [sym_at_command] = STATE(198),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(198),
    [sym_opt_at_text_group] = STATE(198),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(198),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(333),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(335),
  },
  [107] = {
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym__escape] = ACTIONS(337),
    [sym_begin_group] = ACTIONS(337),
    [sym_end_group] = ACTIONS(337),
    [sym_math_shift] = ACTIONS(337),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(337),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_comment_char] = ACTIONS(337),
    [sym_text] = ACTIONS(339),
  },
  [108] = {
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym__escape] = ACTIONS(341),
    [sym_begin_group] = ACTIONS(341),
    [sym_end_group] = ACTIONS(341),
    [sym_math_shift] = ACTIONS(341),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(341),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [sym_active_char] = ACTIONS(341),
    [sym_comment_char] = ACTIONS(341),
    [sym_text] = ACTIONS(343),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_end_group] = ACTIONS(347),
    [sym_math_shift] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_comment_char] = ACTIONS(347),
    [sym_text] = ACTIONS(345),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_end_group] = ACTIONS(351),
    [sym_math_shift] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_comment_char] = ACTIONS(351),
    [sym_text] = ACTIONS(349),
  },
  [111] = {
    [sym__at_text_mode] = STATE(200),
    [sym_parameter] = STATE(200),
    [sym_text_environment] = STATE(200),
    [sym__display_math] = STATE(200),
    [sym_tex_display_math] = STATE(200),
    [sym_latex_display_math] = STATE(200),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(200),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(200),
    [sym_tex_inline_math] = STATE(200),
    [sym_latex_inline_math] = STATE(200),
    [sym_inline_math_env] = STATE(200),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(200),
    [sym_escaped] = STATE(200),
    [sym_at_command] = STATE(200),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(200),
    [sym_opt_at_text_group] = STATE(200),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(200),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(199),
    [aux_sym_at_group_repeat1] = STATE(200),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(353),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(353),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(355),
  },
  [112] = {
    [sym__at_text_mode] = STATE(202),
    [sym_parameter] = STATE(202),
    [sym_text_environment] = STATE(202),
    [sym__display_math] = STATE(202),
    [sym_tex_display_math] = STATE(202),
    [sym_latex_display_math] = STATE(202),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(202),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(202),
    [sym_tex_inline_math] = STATE(202),
    [sym_latex_inline_math] = STATE(202),
    [sym_inline_math_env] = STATE(202),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(202),
    [sym_escaped] = STATE(202),
    [sym_at_command] = STATE(202),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_makeatother] = STATE(201),
    [sym_makeatother_token] = STATE(110),
    [sym_at_text_group] = STATE(202),
    [sym_opt_at_text_group] = STATE(202),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(202),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(202),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(357),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(357),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(359),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_comment_char] = ACTIONS(363),
    [sym_text] = ACTIONS(361),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym__escape] = ACTIONS(367),
    [sym_begin_group] = ACTIONS(367),
    [sym_end_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_comment_char] = ACTIONS(367),
    [sym_text] = ACTIONS(365),
  },
  [115] = {
    [sym__text_mode] = STATE(204),
    [sym_at_group] = STATE(204),
    [sym_parameter] = STATE(204),
    [sym_text_environment] = STATE(204),
    [sym__display_math] = STATE(204),
    [sym_tex_display_math] = STATE(204),
    [sym_latex_display_math] = STATE(204),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(204),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(204),
    [sym_tex_inline_math] = STATE(204),
    [sym_latex_inline_math] = STATE(204),
    [sym_inline_math_env] = STATE(204),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(204),
    [sym_escaped] = STATE(204),
    [sym_command] = STATE(204),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(204),
    [sym_opt_text_group] = STATE(204),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(204),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(203),
    [aux_sym_text_mode_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(369),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(371),
  },
  [116] = {
    [sym__text_mode] = STATE(116),
    [sym_at_group] = STATE(116),
    [sym_parameter] = STATE(116),
    [sym_text_environment] = STATE(116),
    [sym__display_math] = STATE(116),
    [sym_tex_display_math] = STATE(116),
    [sym_latex_display_math] = STATE(116),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(116),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(116),
    [sym_tex_inline_math] = STATE(116),
    [sym_latex_inline_math] = STATE(116),
    [sym_inline_math_env] = STATE(116),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(116),
    [sym_escaped] = STATE(116),
    [sym_command] = STATE(116),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(116),
    [sym_opt_text_group] = STATE(116),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(116),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(384),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(390),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(387),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(399),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [sym__escape] = ACTIONS(404),
    [sym_begin_group] = ACTIONS(404),
    [sym_end_group] = ACTIONS(404),
    [sym_math_shift] = ACTIONS(404),
    [sym_alignment_tab] = ACTIONS(404),
    [sym_parameter_char] = ACTIONS(404),
    [sym_superscript] = ACTIONS(404),
    [sym_subscript] = ACTIONS(404),
    [sym_active_char] = ACTIONS(404),
    [sym_comment_char] = ACTIONS(404),
    [sym_text] = ACTIONS(402),
  },
  [118] = {
    [sym__text_mode] = STATE(118),
    [sym_at_group] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_environment] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(118),
    [sym_escaped] = STATE(118),
    [sym_command] = STATE(118),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(118),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(406),
    [sym_math_shift] = ACTIONS(384),
    [sym_alignment_tab] = ACTIONS(408),
    [sym_parameter_char] = ACTIONS(390),
    [sym_superscript] = ACTIONS(408),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(408),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(411),
  },
  [119] = {
    [sym_begin_group] = ACTIONS(414),
  },
  [120] = {
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [sym__escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(416),
    [sym_end_group] = ACTIONS(416),
    [sym_math_shift] = ACTIONS(416),
    [sym_alignment_tab] = ACTIONS(416),
    [sym_parameter_char] = ACTIONS(416),
    [sym_superscript] = ACTIONS(416),
    [sym_subscript] = ACTIONS(416),
    [sym_active_char] = ACTIONS(416),
    [sym_comment_char] = ACTIONS(416),
    [sym_text] = ACTIONS(418),
  },
  [121] = {
    [sym__math_mode] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_math_environment] = STATE(206),
    [sym_tag] = STATE(206),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(206),
    [sym_command] = STATE(206),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(206),
    [sym_opt_math_group] = STATE(206),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(206),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(420),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(422),
    [sym_subscript] = ACTIONS(422),
    [sym_active_char] = ACTIONS(422),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(424),
  },
  [122] = {
    [sym_math_shift] = ACTIONS(426),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym__escape] = ACTIONS(430),
    [sym_begin_group] = ACTIONS(430),
    [sym_end_group] = ACTIONS(430),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(430),
    [sym_parameter_char] = ACTIONS(430),
    [sym_superscript] = ACTIONS(430),
    [sym_subscript] = ACTIONS(430),
    [sym_active_char] = ACTIONS(430),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(428),
  },
  [124] = {
    [sym__text_mode] = STATE(210),
    [sym_text_mode] = STATE(209),
    [sym_at_group] = STATE(210),
    [sym_parameter] = STATE(210),
    [sym_text_environment] = STATE(210),
    [sym__display_math] = STATE(210),
    [sym_tex_display_math] = STATE(210),
    [sym_latex_display_math] = STATE(210),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(210),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(210),
    [sym_tex_inline_math] = STATE(210),
    [sym_latex_inline_math] = STATE(210),
    [sym_inline_math_env] = STATE(210),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(210),
    [sym_escaped] = STATE(210),
    [sym_command] = STATE(210),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(210),
    [sym_opt_text_group] = STATE(210),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(210),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(210),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(432),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(434),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(436),
  },
  [125] = {
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [sym__escape] = ACTIONS(438),
    [sym_begin_group] = ACTIONS(438),
    [sym_end_group] = ACTIONS(438),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(438),
    [sym_parameter_char] = ACTIONS(438),
    [sym_superscript] = ACTIONS(438),
    [sym_subscript] = ACTIONS(438),
    [sym_active_char] = ACTIONS(438),
    [sym_comment_char] = ACTIONS(438),
    [sym_text] = ACTIONS(440),
  },
  [126] = {
    [anon_sym_tag] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__name] = ACTIONS(51),
  },
  [127] = {
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [sym__escape] = ACTIONS(442),
    [sym_begin_group] = ACTIONS(442),
    [sym_end_group] = ACTIONS(442),
    [sym_math_shift] = ACTIONS(442),
    [sym_alignment_tab] = ACTIONS(442),
    [sym_parameter_char] = ACTIONS(442),
    [sym_superscript] = ACTIONS(442),
    [sym_subscript] = ACTIONS(442),
    [sym_active_char] = ACTIONS(442),
    [sym_comment_char] = ACTIONS(442),
    [sym_text] = ACTIONS(444),
  },
  [128] = {
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_environment] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(134),
    [sym_command] = STATE(134),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_end] = STATE(211),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(134),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(229),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
    [sym__escape] = ACTIONS(446),
    [sym_begin_group] = ACTIONS(446),
    [sym_end_group] = ACTIONS(446),
    [sym_math_shift] = ACTIONS(446),
    [sym_alignment_tab] = ACTIONS(446),
    [sym_parameter_char] = ACTIONS(446),
    [sym_superscript] = ACTIONS(446),
    [sym_subscript] = ACTIONS(446),
    [sym_active_char] = ACTIONS(446),
    [sym_comment_char] = ACTIONS(446),
    [sym_text] = ACTIONS(448),
  },
  [130] = {
    [sym__math_mode] = STATE(213),
    [sym_parameter] = STATE(213),
    [sym_math_environment] = STATE(213),
    [sym_tag] = STATE(213),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(213),
    [sym_command] = STATE(213),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(213),
    [sym_opt_math_group] = STATE(213),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(213),
    [sym_begin_opt] = STATE(58),
    [sym_end_opt] = STATE(212),
    [aux_sym_math_mode_repeat1] = STATE(213),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(452),
  },
  [131] = {
    [sym__math_mode] = STATE(131),
    [sym_parameter] = STATE(131),
    [sym_math_environment] = STATE(131),
    [sym_tag] = STATE(131),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(131),
    [sym_command] = STATE(131),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(131),
    [sym_opt_math_group] = STATE(131),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(131),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(131),
    [anon_sym_LBRACK] = ACTIONS(454),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(460),
    [sym_math_shift] = ACTIONS(463),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [sym_comment_char] = ACTIONS(471),
    [sym_text] = ACTIONS(474),
  },
  [132] = {
    [anon_sym_RBRACK] = ACTIONS(477),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym__escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(481),
    [sym_end_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(481),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_comment_char] = ACTIONS(481),
    [sym_text] = ACTIONS(479),
  },
  [134] = {
    [sym__math_mode] = STATE(134),
    [sym_parameter] = STATE(134),
    [sym_math_environment] = STATE(134),
    [sym_tag] = STATE(134),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(134),
    [sym_command] = STATE(134),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(134),
    [sym_opt_math_group] = STATE(134),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(134),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(454),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_comment_char] = ACTIONS(471),
    [sym_text] = ACTIONS(486),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(489),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_end_group] = ACTIONS(493),
    [sym_math_shift] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_comment_char] = ACTIONS(493),
    [sym_text] = ACTIONS(491),
  },
  [137] = {
    [anon_sym_end] = ACTIONS(495),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [sym__escape] = ACTIONS(499),
    [sym_begin_group] = ACTIONS(499),
    [sym_end_group] = ACTIONS(499),
    [sym_math_shift] = ACTIONS(499),
    [sym_alignment_tab] = ACTIONS(499),
    [sym_parameter_char] = ACTIONS(499),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [sym_active_char] = ACTIONS(499),
    [sym_comment_char] = ACTIONS(499),
    [sym_text] = ACTIONS(497),
  },
  [139] = {
    [sym_display_math_env_group] = STATE(217),
    [sym_begin_group] = ACTIONS(501),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [sym__escape] = ACTIONS(505),
    [sym_begin_group] = ACTIONS(505),
    [sym_end_group] = ACTIONS(505),
    [sym_math_shift] = ACTIONS(505),
    [sym_alignment_tab] = ACTIONS(505),
    [sym_parameter_char] = ACTIONS(505),
    [sym_superscript] = ACTIONS(505),
    [sym_subscript] = ACTIONS(505),
    [sym_active_char] = ACTIONS(505),
    [sym_comment_char] = ACTIONS(505),
    [sym_text] = ACTIONS(503),
  },
  [141] = {
    [sym_inline_math_env_group] = STATE(219),
    [sym_begin_group] = ACTIONS(507),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_end_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [sym_comment_char] = ACTIONS(511),
    [sym_text] = ACTIONS(509),
  },
  [143] = {
    [sym_begin_group] = ACTIONS(513),
  },
  [144] = {
    [aux_sym_verbatim_text_repeat1] = STATE(144),
    [sym__escape] = ACTIONS(515),
    [sym__verbatim_token] = ACTIONS(517),
  },
  [145] = {
    [sym_end_Verbatim] = STATE(221),
    [sym_end_token] = STATE(146),
    [sym__escape] = ACTIONS(233),
  },
  [146] = {
    [sym_begin_group] = ACTIONS(520),
  },
  [147] = {
    [sym__verbatim_token] = ACTIONS(361),
  },
  [148] = {
    [sym__verbatim_token] = ACTIONS(365),
  },
  [149] = {
    [sym__text_mode] = STATE(204),
    [sym_at_group] = STATE(204),
    [sym_parameter] = STATE(204),
    [sym_text_environment] = STATE(204),
    [sym__display_math] = STATE(204),
    [sym_tex_display_math] = STATE(204),
    [sym_latex_display_math] = STATE(204),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(204),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(204),
    [sym_tex_inline_math] = STATE(204),
    [sym_latex_inline_math] = STATE(204),
    [sym_inline_math_env] = STATE(204),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(204),
    [sym_escaped] = STATE(204),
    [sym_command] = STATE(204),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(204),
    [sym_opt_text_group] = STATE(204),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(204),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(223),
    [aux_sym_text_mode_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(369),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(371),
  },
  [150] = {
    [sym_end_Verbatim_star] = STATE(221),
    [sym_end_token] = STATE(151),
    [sym__escape] = ACTIONS(233),
  },
  [151] = {
    [sym_begin_group] = ACTIONS(522),
  },
  [152] = {
    [sym_end_BVerbatim] = STATE(221),
    [sym_end_token] = STATE(153),
    [sym__escape] = ACTIONS(233),
  },
  [153] = {
    [sym_begin_group] = ACTIONS(524),
  },
  [154] = {
    [sym_end_BVerbatim_star] = STATE(221),
    [sym_end_token] = STATE(155),
    [sym__escape] = ACTIONS(233),
  },
  [155] = {
    [sym_begin_group] = ACTIONS(526),
  },
  [156] = {
    [sym_end_LVerbatim] = STATE(221),
    [sym_end_token] = STATE(157),
    [sym__escape] = ACTIONS(233),
  },
  [157] = {
    [sym_begin_group] = ACTIONS(528),
  },
  [158] = {
    [sym_end_LVerbatim_star] = STATE(221),
    [sym_end_token] = STATE(159),
    [sym__escape] = ACTIONS(233),
  },
  [159] = {
    [sym_begin_group] = ACTIONS(530),
  },
  [160] = {
    [sym_end_lstlisting] = STATE(221),
    [sym_end_token] = STATE(161),
    [sym__escape] = ACTIONS(233),
  },
  [161] = {
    [sym_begin_group] = ACTIONS(532),
  },
  [162] = {
    [sym__verbatim_token] = ACTIONS(179),
  },
  [163] = {
    [sym__text_mode] = STATE(118),
    [sym_at_group] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_environment] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(118),
    [sym_escaped] = STATE(118),
    [sym_command] = STATE(118),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(118),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(534),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(185),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(187),
  },
  [164] = {
    [sym_end_minted] = STATE(221),
    [sym_end_token] = STATE(231),
    [sym__escape] = ACTIONS(233),
  },
  [165] = {
    [sym_begin_group] = ACTIONS(536),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
    [sym__escape] = ACTIONS(540),
    [sym_begin_group] = ACTIONS(540),
    [sym_end_group] = ACTIONS(540),
    [sym_math_shift] = ACTIONS(540),
    [sym_alignment_tab] = ACTIONS(540),
    [sym_parameter_char] = ACTIONS(540),
    [sym_superscript] = ACTIONS(540),
    [sym_subscript] = ACTIONS(540),
    [sym_active_char] = ACTIONS(540),
    [sym_comment_char] = ACTIONS(540),
    [sym_text] = ACTIONS(538),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym__escape] = ACTIONS(544),
    [sym_begin_group] = ACTIONS(544),
    [sym_end_group] = ACTIONS(544),
    [sym_math_shift] = ACTIONS(544),
    [sym_alignment_tab] = ACTIONS(544),
    [sym_parameter_char] = ACTIONS(544),
    [sym_superscript] = ACTIONS(544),
    [sym_subscript] = ACTIONS(544),
    [sym_active_char] = ACTIONS(544),
    [sym_comment_char] = ACTIONS(544),
    [sym_text] = ACTIONS(542),
  },
  [168] = {
    [sym__text_mode] = STATE(168),
    [sym_at_group] = STATE(168),
    [sym_parameter] = STATE(168),
    [sym_text_environment] = STATE(168),
    [sym__display_math] = STATE(168),
    [sym_tex_display_math] = STATE(168),
    [sym_latex_display_math] = STATE(168),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(168),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(168),
    [sym_tex_inline_math] = STATE(168),
    [sym_latex_inline_math] = STATE(168),
    [sym_inline_math_env] = STATE(168),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(168),
    [sym_escaped] = STATE(168),
    [sym_command] = STATE(168),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(168),
    [sym_opt_text_group] = STATE(168),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(168),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(168),
    [anon_sym_LBRACK] = ACTIONS(375),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(384),
    [sym_alignment_tab] = ACTIONS(546),
    [sym_parameter_char] = ACTIONS(390),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(546),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(549),
  },
  [169] = {
    [sym_end_group] = ACTIONS(552),
  },
  [170] = {
    [sym_end_group] = ACTIONS(554),
  },
  [171] = {
    [sym_end_group] = ACTIONS(556),
  },
  [172] = {
    [sym_end_group] = ACTIONS(558),
  },
  [173] = {
    [sym_end_group] = ACTIONS(560),
  },
  [174] = {
    [sym_end_group] = ACTIONS(562),
  },
  [175] = {
    [sym_end_group] = ACTIONS(564),
  },
  [176] = {
    [sym_end_group] = ACTIONS(566),
  },
  [177] = {
    [sym_end_group] = ACTIONS(568),
  },
  [178] = {
    [sym_end_group] = ACTIONS(570),
  },
  [179] = {
    [sym_end_group] = ACTIONS(572),
  },
  [180] = {
    [sym_end_group] = ACTIONS(574),
  },
  [181] = {
    [sym__text_mode] = STATE(245),
    [sym_at_group] = STATE(245),
    [sym_parameter] = STATE(245),
    [sym_text_environment] = STATE(245),
    [sym__display_math] = STATE(245),
    [sym_tex_display_math] = STATE(245),
    [sym_latex_display_math] = STATE(245),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(245),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(245),
    [sym_tex_inline_math] = STATE(245),
    [sym_latex_inline_math] = STATE(245),
    [sym_inline_math_env] = STATE(245),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(245),
    [sym_escaped] = STATE(245),
    [sym_command] = STATE(245),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(245),
    [sym_opt_text_group] = STATE(245),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(245),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(245),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(576),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(578),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(580),
  },
  [182] = {
    [anon_sym_LBRACK] = ACTIONS(582),
    [sym__escape] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_active_char] = ACTIONS(582),
    [sym_comment_char] = ACTIONS(582),
    [sym_text] = ACTIONS(584),
  },
  [183] = {
    [sym__end_of_line] = ACTIONS(586),
  },
  [184] = {
    [sym_text_group] = STATE(247),
    [sym_begin_group] = ACTIONS(285),
    [sym__end_of_line] = ACTIONS(586),
  },
  [185] = {
    [sym__text_mode] = STATE(250),
    [sym_at_group] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_environment] = STATE(250),
    [sym__display_math] = STATE(250),
    [sym_tex_display_math] = STATE(250),
    [sym_latex_display_math] = STATE(250),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(250),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(250),
    [sym_tex_inline_math] = STATE(250),
    [sym_latex_inline_math] = STATE(250),
    [sym_inline_math_env] = STATE(250),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(250),
    [sym_escaped] = STATE(250),
    [sym_command] = STATE(250),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(250),
    [sym_opt_text_group] = STATE(250),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(250),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(249),
    [aux_sym_text_mode_repeat1] = STATE(250),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(590),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(590),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(590),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(592),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_RBRACK] = ACTIONS(596),
    [sym__escape] = ACTIONS(596),
    [sym_begin_group] = ACTIONS(596),
    [sym_end_group] = ACTIONS(596),
    [sym_math_shift] = ACTIONS(596),
    [sym_alignment_tab] = ACTIONS(596),
    [sym_parameter_char] = ACTIONS(596),
    [sym_superscript] = ACTIONS(596),
    [sym_subscript] = ACTIONS(596),
    [sym_active_char] = ACTIONS(596),
    [sym_comment_char] = ACTIONS(596),
    [sym_text] = ACTIONS(594),
  },
  [187] = {
    [sym_begin_group] = ACTIONS(361),
  },
  [188] = {
    [sym_begin_group] = ACTIONS(365),
  },
  [189] = {
    [sym__text_mode] = STATE(204),
    [sym_at_group] = STATE(204),
    [sym_parameter] = STATE(204),
    [sym_text_environment] = STATE(204),
    [sym__display_math] = STATE(204),
    [sym_tex_display_math] = STATE(204),
    [sym_latex_display_math] = STATE(204),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(204),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(204),
    [sym_tex_inline_math] = STATE(204),
    [sym_latex_inline_math] = STATE(204),
    [sym_inline_math_env] = STATE(204),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(204),
    [sym_escaped] = STATE(204),
    [sym_command] = STATE(204),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(204),
    [sym_opt_text_group] = STATE(204),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(204),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(251),
    [aux_sym_text_mode_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(369),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(371),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [sym__escape] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_end_group] = ACTIONS(600),
    [sym_math_shift] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_active_char] = ACTIONS(600),
    [sym_comment_char] = ACTIONS(600),
    [sym_text] = ACTIONS(598),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(604),
    [sym__escape] = ACTIONS(604),
    [sym_begin_group] = ACTIONS(604),
    [sym_end_group] = ACTIONS(604),
    [sym_math_shift] = ACTIONS(604),
    [sym_alignment_tab] = ACTIONS(604),
    [sym_parameter_char] = ACTIONS(604),
    [sym_superscript] = ACTIONS(604),
    [sym_subscript] = ACTIONS(604),
    [sym_active_char] = ACTIONS(604),
    [sym_comment_char] = ACTIONS(604),
    [sym_text] = ACTIONS(602),
  },
  [192] = {
    [anon_sym_EQ] = ACTIONS(151),
  },
  [193] = {
    [sym_number] = ACTIONS(606),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(608),
    [anon_sym_LBRACK] = ACTIONS(610),
    [anon_sym_RBRACK] = ACTIONS(610),
    [sym__escape] = ACTIONS(610),
    [sym_begin_group] = ACTIONS(610),
    [sym_end_group] = ACTIONS(610),
    [sym_math_shift] = ACTIONS(610),
    [sym_alignment_tab] = ACTIONS(610),
    [sym_parameter_char] = ACTIONS(610),
    [sym_superscript] = ACTIONS(610),
    [sym_subscript] = ACTIONS(610),
    [sym_active_char] = ACTIONS(610),
    [sym_comment_char] = ACTIONS(610),
    [sym_text] = ACTIONS(608),
  },
  [195] = {
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_RBRACK] = ACTIONS(612),
    [sym__escape] = ACTIONS(612),
    [sym_begin_group] = ACTIONS(612),
    [sym_end_group] = ACTIONS(612),
    [sym_math_shift] = ACTIONS(612),
    [sym_alignment_tab] = ACTIONS(612),
    [sym_parameter_char] = ACTIONS(612),
    [sym_superscript] = ACTIONS(612),
    [sym_subscript] = ACTIONS(612),
    [sym_active_char] = ACTIONS(612),
    [sym_comment_char] = ACTIONS(612),
    [sym_text] = ACTIONS(614),
  },
  [196] = {
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
    [sym__at_name] = ACTIONS(327),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(616),
    [sym__escape] = ACTIONS(616),
    [sym_begin_group] = ACTIONS(616),
    [sym_end_group] = ACTIONS(616),
    [sym_math_shift] = ACTIONS(616),
    [sym_alignment_tab] = ACTIONS(616),
    [sym_parameter_char] = ACTIONS(616),
    [sym_superscript] = ACTIONS(616),
    [sym_subscript] = ACTIONS(616),
    [sym_active_char] = ACTIONS(616),
    [sym_comment_char] = ACTIONS(616),
    [sym_text] = ACTIONS(618),
  },
  [198] = {
    [sym__at_text_mode] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_environment] = STATE(254),
    [sym__display_math] = STATE(254),
    [sym_tex_display_math] = STATE(254),
    [sym_latex_display_math] = STATE(254),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(254),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(254),
    [sym_tex_inline_math] = STATE(254),
    [sym_latex_inline_math] = STATE(254),
    [sym_inline_math_env] = STATE(254),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(254),
    [sym_escaped] = STATE(254),
    [sym_at_command] = STATE(254),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(254),
    [sym_opt_at_text_group] = STATE(254),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(254),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(620),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(622),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(622),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(624),
  },
  [199] = {
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [sym__escape] = ACTIONS(626),
    [sym_begin_group] = ACTIONS(626),
    [sym_end_group] = ACTIONS(626),
    [sym_math_shift] = ACTIONS(626),
    [sym_alignment_tab] = ACTIONS(626),
    [sym_parameter_char] = ACTIONS(626),
    [sym_superscript] = ACTIONS(626),
    [sym_subscript] = ACTIONS(626),
    [sym_active_char] = ACTIONS(626),
    [sym_comment_char] = ACTIONS(626),
    [sym_text] = ACTIONS(628),
  },
  [200] = {
    [sym__at_text_mode] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym__display_math] = STATE(256),
    [sym_tex_display_math] = STATE(256),
    [sym_latex_display_math] = STATE(256),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(256),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(256),
    [sym_tex_inline_math] = STATE(256),
    [sym_latex_inline_math] = STATE(256),
    [sym_inline_math_env] = STATE(256),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_at_command] = STATE(256),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(256),
    [sym_opt_at_text_group] = STATE(256),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(111),
    [sym_end_opt] = STATE(255),
    [aux_sym_at_group_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(630),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(630),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(630),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(632),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [sym__escape] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_end_group] = ACTIONS(636),
    [sym_math_shift] = ACTIONS(636),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_superscript] = ACTIONS(636),
    [sym_subscript] = ACTIONS(636),
    [sym_active_char] = ACTIONS(636),
    [sym_comment_char] = ACTIONS(636),
    [sym_text] = ACTIONS(634),
  },
  [202] = {
    [sym__at_text_mode] = STATE(202),
    [sym_parameter] = STATE(202),
    [sym_text_environment] = STATE(202),
    [sym__display_math] = STATE(202),
    [sym_tex_display_math] = STATE(202),
    [sym_latex_display_math] = STATE(202),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(202),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(202),
    [sym_tex_inline_math] = STATE(202),
    [sym_latex_inline_math] = STATE(202),
    [sym_inline_math_env] = STATE(202),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(202),
    [sym_escaped] = STATE(202),
    [sym_at_command] = STATE(202),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(202),
    [sym_opt_at_text_group] = STATE(202),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(202),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(202),
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(644),
    [sym_math_shift] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(650),
    [sym_parameter_char] = ACTIONS(653),
    [sym_superscript] = ACTIONS(650),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(650),
    [sym_comment_char] = ACTIONS(659),
    [sym_text] = ACTIONS(662),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_end_group] = ACTIONS(667),
    [sym_math_shift] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_comment_char] = ACTIONS(667),
    [sym_text] = ACTIONS(665),
  },
  [204] = {
    [sym__text_mode] = STATE(204),
    [sym_at_group] = STATE(204),
    [sym_parameter] = STATE(204),
    [sym_text_environment] = STATE(204),
    [sym__display_math] = STATE(204),
    [sym_tex_display_math] = STATE(204),
    [sym_latex_display_math] = STATE(204),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(204),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(204),
    [sym_tex_inline_math] = STATE(204),
    [sym_latex_inline_math] = STATE(204),
    [sym_inline_math_env] = STATE(204),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(204),
    [sym_escaped] = STATE(204),
    [sym_command] = STATE(204),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(204),
    [sym_opt_text_group] = STATE(204),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(204),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(406),
    [sym__escape] = ACTIONS(378),
    [sym_begin_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(384),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(390),
    [sym_superscript] = ACTIONS(669),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(669),
    [sym_comment_char] = ACTIONS(396),
    [sym_text] = ACTIONS(672),
  },
  [205] = {
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [sym__escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_end_group] = ACTIONS(675),
    [sym_math_shift] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_comment_char] = ACTIONS(675),
    [sym_text] = ACTIONS(677),
  },
  [206] = {
    [sym__math_mode] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_math_environment] = STATE(206),
    [sym_tag] = STATE(206),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(206),
    [sym_command] = STATE(206),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(206),
    [sym_opt_math_group] = STATE(206),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(206),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(454),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(460),
    [sym_end_group] = ACTIONS(463),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(679),
    [sym_comment_char] = ACTIONS(471),
    [sym_text] = ACTIONS(682),
  },
  [207] = {
    [sym_math_shift] = ACTIONS(685),
  },
  [208] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [sym__escape] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_end_group] = ACTIONS(687),
    [sym_math_shift] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_active_char] = ACTIONS(687),
    [sym_comment_char] = ACTIONS(687),
    [sym_text] = ACTIONS(689),
  },
  [209] = {
    [sym_end_group] = ACTIONS(691),
  },
  [210] = {
    [sym__text_mode] = STATE(118),
    [sym_at_group] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_environment] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(118),
    [sym_escaped] = STATE(118),
    [sym_command] = STATE(118),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(118),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(693),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(185),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(187),
  },
  [211] = {
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym__escape] = ACTIONS(695),
    [sym_begin_group] = ACTIONS(695),
    [sym_end_group] = ACTIONS(695),
    [sym_math_shift] = ACTIONS(695),
    [sym_alignment_tab] = ACTIONS(695),
    [sym_parameter_char] = ACTIONS(695),
    [sym_superscript] = ACTIONS(695),
    [sym_subscript] = ACTIONS(695),
    [sym_active_char] = ACTIONS(695),
    [sym_comment_char] = ACTIONS(695),
    [sym_text] = ACTIONS(697),
  },
  [212] = {
    [anon_sym_LBRACK] = ACTIONS(699),
    [anon_sym_RBRACK] = ACTIONS(699),
    [sym__escape] = ACTIONS(699),
    [sym_begin_group] = ACTIONS(699),
    [sym_end_group] = ACTIONS(699),
    [sym_math_shift] = ACTIONS(699),
    [sym_alignment_tab] = ACTIONS(699),
    [sym_parameter_char] = ACTIONS(699),
    [sym_superscript] = ACTIONS(699),
    [sym_subscript] = ACTIONS(699),
    [sym_active_char] = ACTIONS(699),
    [sym_comment_char] = ACTIONS(699),
    [sym_text] = ACTIONS(701),
  },
  [213] = {
    [sym__math_mode] = STATE(213),
    [sym_parameter] = STATE(213),
    [sym_math_environment] = STATE(213),
    [sym_tag] = STATE(213),
    [sym_tag_token] = STATE(55),
    [sym_escaped] = STATE(213),
    [sym_command] = STATE(213),
    [sym_begin] = STATE(56),
    [sym_begin_token] = STATE(57),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_math_group] = STATE(213),
    [sym_opt_math_group] = STATE(213),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(213),
    [sym_begin_opt] = STATE(58),
    [aux_sym_math_mode_repeat1] = STATE(213),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_active_char] = ACTIONS(703),
    [sym_comment_char] = ACTIONS(471),
    [sym_text] = ACTIONS(706),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(711),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym__escape] = ACTIONS(711),
    [sym_begin_group] = ACTIONS(711),
    [sym_end_group] = ACTIONS(711),
    [sym_math_shift] = ACTIONS(711),
    [sym_alignment_tab] = ACTIONS(711),
    [sym_parameter_char] = ACTIONS(711),
    [sym_superscript] = ACTIONS(711),
    [sym_subscript] = ACTIONS(711),
    [sym_active_char] = ACTIONS(711),
    [sym_comment_char] = ACTIONS(711),
    [sym_text] = ACTIONS(709),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_RBRACK] = ACTIONS(715),
    [sym__escape] = ACTIONS(715),
    [sym_begin_group] = ACTIONS(715),
    [sym_end_group] = ACTIONS(715),
    [sym_math_shift] = ACTIONS(715),
    [sym_alignment_tab] = ACTIONS(715),
    [sym_parameter_char] = ACTIONS(715),
    [sym_superscript] = ACTIONS(715),
    [sym_subscript] = ACTIONS(715),
    [sym_active_char] = ACTIONS(715),
    [sym_comment_char] = ACTIONS(715),
    [sym_text] = ACTIONS(713),
  },
  [216] = {
    [sym_display_math_env_name] = ACTIONS(717),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [sym__escape] = ACTIONS(721),
    [sym_begin_group] = ACTIONS(721),
    [sym_end_group] = ACTIONS(721),
    [sym_math_shift] = ACTIONS(721),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(721),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(721),
    [sym_text] = ACTIONS(719),
  },
  [218] = {
    [sym_inline_math_env_name] = ACTIONS(723),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(727),
    [anon_sym_RBRACK] = ACTIONS(727),
    [sym__escape] = ACTIONS(727),
    [sym_begin_group] = ACTIONS(727),
    [sym_end_group] = ACTIONS(727),
    [sym_math_shift] = ACTIONS(727),
    [sym_alignment_tab] = ACTIONS(727),
    [sym_parameter_char] = ACTIONS(727),
    [sym_superscript] = ACTIONS(727),
    [sym_subscript] = ACTIONS(727),
    [sym_active_char] = ACTIONS(727),
    [sym_comment_char] = ACTIONS(727),
    [sym_text] = ACTIONS(725),
  },
  [220] = {
    [anon_sym_verbatim] = ACTIONS(729),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym__escape] = ACTIONS(733),
    [sym_begin_group] = ACTIONS(733),
    [sym_end_group] = ACTIONS(733),
    [sym_math_shift] = ACTIONS(733),
    [sym_alignment_tab] = ACTIONS(733),
    [sym_parameter_char] = ACTIONS(733),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(733),
    [sym_active_char] = ACTIONS(733),
    [sym_comment_char] = ACTIONS(733),
    [sym_text] = ACTIONS(731),
  },
  [222] = {
    [anon_sym_Verbatim] = ACTIONS(735),
  },
  [223] = {
    [sym__verbatim_token] = ACTIONS(665),
  },
  [224] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(737),
  },
  [225] = {
    [anon_sym_BVerbatim] = ACTIONS(739),
  },
  [226] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(741),
  },
  [227] = {
    [anon_sym_LVerbatim] = ACTIONS(743),
  },
  [228] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(745),
  },
  [229] = {
    [anon_sym_lstlisting] = ACTIONS(747),
  },
  [230] = {
    [sym__verbatim_token] = ACTIONS(402),
  },
  [231] = {
    [sym_begin_group] = ACTIONS(749),
  },
  [232] = {
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym__end_of_line] = ACTIONS(753),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym__escape] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_end_group] = ACTIONS(757),
    [sym_math_shift] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_active_char] = ACTIONS(757),
    [sym_comment_char] = ACTIONS(757),
    [sym_text] = ACTIONS(755),
  },
  [234] = {
    [sym__verbatim_token] = ACTIONS(759),
  },
  [235] = {
    [anon_sym_LBRACK] = ACTIONS(761),
    [sym__verbatim_token] = ACTIONS(761),
  },
  [236] = {
    [anon_sym_LBRACK] = ACTIONS(763),
    [sym__verbatim_token] = ACTIONS(763),
  },
  [237] = {
    [anon_sym_LBRACK] = ACTIONS(765),
    [sym__verbatim_token] = ACTIONS(765),
  },
  [238] = {
    [anon_sym_LBRACK] = ACTIONS(767),
    [sym__verbatim_token] = ACTIONS(767),
  },
  [239] = {
    [anon_sym_LBRACK] = ACTIONS(769),
    [sym__verbatim_token] = ACTIONS(769),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(771),
    [sym__verbatim_token] = ACTIONS(771),
  },
  [241] = {
    [anon_sym_LBRACK] = ACTIONS(773),
    [sym__verbatim_token] = ACTIONS(773),
  },
  [242] = {
    [sym_begin_group] = ACTIONS(775),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(779),
    [anon_sym_RBRACK] = ACTIONS(779),
    [sym__escape] = ACTIONS(779),
    [sym_begin_group] = ACTIONS(779),
    [sym_end_group] = ACTIONS(779),
    [sym_math_shift] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(779),
    [sym_parameter_char] = ACTIONS(779),
    [sym_superscript] = ACTIONS(779),
    [sym_subscript] = ACTIONS(779),
    [sym_active_char] = ACTIONS(779),
    [sym_comment_char] = ACTIONS(779),
    [sym_text] = ACTIONS(777),
  },
  [244] = {
    [sym__end_of_line] = ACTIONS(179),
  },
  [245] = {
    [sym__text_mode] = STATE(118),
    [sym_at_group] = STATE(118),
    [sym_parameter] = STATE(118),
    [sym_text_environment] = STATE(118),
    [sym__display_math] = STATE(118),
    [sym_tex_display_math] = STATE(118),
    [sym_latex_display_math] = STATE(118),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(118),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(118),
    [sym_tex_inline_math] = STATE(118),
    [sym_latex_inline_math] = STATE(118),
    [sym_inline_math_env] = STATE(118),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(118),
    [sym_escaped] = STATE(118),
    [sym_command] = STATE(118),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(118),
    [sym_opt_text_group] = STATE(118),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(118),
    [sym_begin_opt] = STATE(35),
    [aux_sym_text_mode_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(781),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(185),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(187),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym__escape] = ACTIONS(783),
    [sym_begin_group] = ACTIONS(783),
    [sym_alignment_tab] = ACTIONS(783),
    [sym_parameter_char] = ACTIONS(783),
    [sym_superscript] = ACTIONS(783),
    [sym_subscript] = ACTIONS(783),
    [sym_active_char] = ACTIONS(783),
    [sym_comment_char] = ACTIONS(783),
    [sym_text] = ACTIONS(785),
  },
  [247] = {
    [sym__end_of_line] = ACTIONS(787),
  },
  [248] = {
    [sym_begin_group] = ACTIONS(363),
    [sym__end_of_line] = ACTIONS(361),
  },
  [249] = {
    [sym_begin_group] = ACTIONS(367),
    [sym__end_of_line] = ACTIONS(365),
  },
  [250] = {
    [sym__text_mode] = STATE(204),
    [sym_at_group] = STATE(204),
    [sym_parameter] = STATE(204),
    [sym_text_environment] = STATE(204),
    [sym__display_math] = STATE(204),
    [sym_tex_display_math] = STATE(204),
    [sym_latex_display_math] = STATE(204),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(204),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(204),
    [sym_tex_inline_math] = STATE(204),
    [sym_latex_inline_math] = STATE(204),
    [sym_inline_math_env] = STATE(204),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(204),
    [sym_escaped] = STATE(204),
    [sym_command] = STATE(204),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(26),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(26),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(26),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(26),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(26),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(26),
    [sym_catcode_token] = STATE(32),
    [sym_makeatletter] = STATE(33),
    [sym_makeatletter_token] = STATE(34),
    [sym_text_group] = STATE(204),
    [sym_opt_text_group] = STATE(204),
    [sym_token] = STATE(26),
    [sym_comment] = STATE(204),
    [sym_begin_opt] = STATE(35),
    [sym_end_opt] = STATE(271),
    [aux_sym_text_mode_repeat1] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(369),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(371),
  },
  [251] = {
    [sym_begin_group] = ACTIONS(665),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym__escape] = ACTIONS(791),
    [sym_begin_group] = ACTIONS(791),
    [sym_end_group] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(791),
    [sym_alignment_tab] = ACTIONS(791),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(791),
    [sym_subscript] = ACTIONS(791),
    [sym_active_char] = ACTIONS(791),
    [sym_comment_char] = ACTIONS(791),
    [sym_text] = ACTIONS(789),
  },
  [253] = {
    [anon_sym_LBRACK] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(793),
    [sym__escape] = ACTIONS(793),
    [sym_begin_group] = ACTIONS(793),
    [sym_end_group] = ACTIONS(793),
    [sym_math_shift] = ACTIONS(793),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(793),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(793),
    [sym_active_char] = ACTIONS(793),
    [sym_comment_char] = ACTIONS(793),
    [sym_text] = ACTIONS(795),
  },
  [254] = {
    [sym__at_text_mode] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_environment] = STATE(254),
    [sym__display_math] = STATE(254),
    [sym_tex_display_math] = STATE(254),
    [sym_latex_display_math] = STATE(254),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(254),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(254),
    [sym_tex_inline_math] = STATE(254),
    [sym_latex_inline_math] = STATE(254),
    [sym_inline_math_env] = STATE(254),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(254),
    [sym_escaped] = STATE(254),
    [sym_at_command] = STATE(254),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(254),
    [sym_opt_at_text_group] = STATE(254),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(254),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(638),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(644),
    [sym_end_group] = ACTIONS(797),
    [sym_math_shift] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(799),
    [sym_parameter_char] = ACTIONS(653),
    [sym_superscript] = ACTIONS(799),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(799),
    [sym_comment_char] = ACTIONS(659),
    [sym_text] = ACTIONS(802),
  },
  [255] = {
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_RBRACK] = ACTIONS(805),
    [sym__escape] = ACTIONS(805),
    [sym_begin_group] = ACTIONS(805),
    [sym_end_group] = ACTIONS(805),
    [sym_math_shift] = ACTIONS(805),
    [sym_alignment_tab] = ACTIONS(805),
    [sym_parameter_char] = ACTIONS(805),
    [sym_superscript] = ACTIONS(805),
    [sym_subscript] = ACTIONS(805),
    [sym_active_char] = ACTIONS(805),
    [sym_comment_char] = ACTIONS(805),
    [sym_text] = ACTIONS(807),
  },
  [256] = {
    [sym__at_text_mode] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym__display_math] = STATE(256),
    [sym_tex_display_math] = STATE(256),
    [sym_latex_display_math] = STATE(256),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(256),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(256),
    [sym_tex_inline_math] = STATE(256),
    [sym_latex_inline_math] = STATE(256),
    [sym_inline_math_env] = STATE(256),
    [sym_inline_math_begin] = STATE(14),
    [sym_begin_verbatim] = STATE(15),
    [sym_begin_Verbatim] = STATE(16),
    [sym_begin_Verbatim_star] = STATE(17),
    [sym_begin_BVerbatim] = STATE(18),
    [sym_begin_BVerbatim_star] = STATE(19),
    [sym_begin_LVerbatim] = STATE(20),
    [sym_begin_LVerbatim_star] = STATE(21),
    [sym_begin_lstlisting] = STATE(22),
    [sym_begin_minted] = STATE(23),
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_at_command] = STATE(256),
    [sym_begin] = STATE(24),
    [sym_begin_token] = STATE(25),
    [sym_documentclass] = STATE(108),
    [sym_documentclass_token] = STATE(27),
    [sym_usepackage] = STATE(108),
    [sym_usepackage_token] = STATE(28),
    [sym_include] = STATE(108),
    [sym_include_token] = STATE(29),
    [sym_section] = STATE(108),
    [sym_section_token] = STATE(30),
    [sym_storage] = STATE(108),
    [sym_storage_token] = STATE(31),
    [sym_catcode] = STATE(108),
    [sym_catcode_token] = STATE(32),
    [sym_at_text_group] = STATE(256),
    [sym_opt_at_text_group] = STATE(256),
    [sym_at_token] = STATE(108),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(111),
    [aux_sym_at_group_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(644),
    [sym_math_shift] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(653),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(656),
    [sym_active_char] = ACTIONS(809),
    [sym_comment_char] = ACTIONS(659),
    [sym_text] = ACTIONS(812),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(815),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_RBRACK] = ACTIONS(817),
    [sym__escape] = ACTIONS(817),
    [sym_begin_group] = ACTIONS(817),
    [sym_end_group] = ACTIONS(817),
    [sym_math_shift] = ACTIONS(817),
    [sym_alignment_tab] = ACTIONS(817),
    [sym_parameter_char] = ACTIONS(817),
    [sym_superscript] = ACTIONS(817),
    [sym_subscript] = ACTIONS(817),
    [sym_active_char] = ACTIONS(817),
    [sym_comment_char] = ACTIONS(817),
    [sym_text] = ACTIONS(815),
  },
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_RBRACK] = ACTIONS(819),
    [sym__escape] = ACTIONS(819),
    [sym_begin_group] = ACTIONS(819),
    [sym_end_group] = ACTIONS(819),
    [sym_math_shift] = ACTIONS(819),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(819),
    [sym_superscript] = ACTIONS(819),
    [sym_subscript] = ACTIONS(819),
    [sym_active_char] = ACTIONS(819),
    [sym_comment_char] = ACTIONS(819),
    [sym_text] = ACTIONS(821),
  },
  [259] = {
    [sym_end_group] = ACTIONS(823),
  },
  [260] = {
    [sym_end_group] = ACTIONS(825),
  },
  [261] = {
    [sym_end_group] = ACTIONS(827),
  },
  [262] = {
    [sym_end_group] = ACTIONS(829),
  },
  [263] = {
    [sym_end_group] = ACTIONS(831),
  },
  [264] = {
    [sym_end_group] = ACTIONS(833),
  },
  [265] = {
    [sym_end_group] = ACTIONS(835),
  },
  [266] = {
    [sym_end_group] = ACTIONS(837),
  },
  [267] = {
    [sym_end_group] = ACTIONS(839),
  },
  [268] = {
    [anon_sym_minted] = ACTIONS(841),
  },
  [269] = {
    [sym__end_of_line] = ACTIONS(402),
  },
  [270] = {
    [anon_sym_LBRACK] = ACTIONS(843),
    [sym__escape] = ACTIONS(843),
    [sym_begin_group] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(843),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [sym_comment_char] = ACTIONS(843),
    [sym_text] = ACTIONS(845),
  },
  [271] = {
    [sym_begin_group] = ACTIONS(667),
    [sym__end_of_line] = ACTIONS(665),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_RBRACK] = ACTIONS(751),
    [sym__escape] = ACTIONS(751),
    [sym_begin_group] = ACTIONS(751),
    [sym_end_group] = ACTIONS(751),
    [sym_math_shift] = ACTIONS(751),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(751),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_comment_char] = ACTIONS(751),
    [sym_text] = ACTIONS(753),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(849),
    [anon_sym_RBRACK] = ACTIONS(849),
    [sym__escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(849),
    [sym_end_group] = ACTIONS(849),
    [sym_math_shift] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(849),
    [sym_subscript] = ACTIONS(849),
    [sym_active_char] = ACTIONS(849),
    [sym_comment_char] = ACTIONS(849),
    [sym_text] = ACTIONS(847),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_RBRACK] = ACTIONS(853),
    [sym__escape] = ACTIONS(853),
    [sym_begin_group] = ACTIONS(853),
    [sym_end_group] = ACTIONS(853),
    [sym_math_shift] = ACTIONS(853),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(853),
    [sym_superscript] = ACTIONS(853),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [sym_comment_char] = ACTIONS(853),
    [sym_text] = ACTIONS(851),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym__escape] = ACTIONS(857),
    [sym_begin_group] = ACTIONS(857),
    [sym_end_group] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(857),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(857),
    [sym_superscript] = ACTIONS(857),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [sym_comment_char] = ACTIONS(857),
    [sym_text] = ACTIONS(855),
  },
  [276] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [sym__escape] = ACTIONS(861),
    [sym_begin_group] = ACTIONS(861),
    [sym_end_group] = ACTIONS(861),
    [sym_math_shift] = ACTIONS(861),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(861),
    [sym_superscript] = ACTIONS(861),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [sym_comment_char] = ACTIONS(861),
    [sym_text] = ACTIONS(859),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(863),
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_RBRACK] = ACTIONS(865),
    [sym__escape] = ACTIONS(865),
    [sym_begin_group] = ACTIONS(865),
    [sym_end_group] = ACTIONS(865),
    [sym_math_shift] = ACTIONS(865),
    [sym_alignment_tab] = ACTIONS(865),
    [sym_parameter_char] = ACTIONS(865),
    [sym_superscript] = ACTIONS(865),
    [sym_subscript] = ACTIONS(865),
    [sym_active_char] = ACTIONS(865),
    [sym_comment_char] = ACTIONS(865),
    [sym_text] = ACTIONS(863),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(867),
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(869),
    [sym__escape] = ACTIONS(869),
    [sym_begin_group] = ACTIONS(869),
    [sym_end_group] = ACTIONS(869),
    [sym_math_shift] = ACTIONS(869),
    [sym_alignment_tab] = ACTIONS(869),
    [sym_parameter_char] = ACTIONS(869),
    [sym_superscript] = ACTIONS(869),
    [sym_subscript] = ACTIONS(869),
    [sym_active_char] = ACTIONS(869),
    [sym_comment_char] = ACTIONS(869),
    [sym_text] = ACTIONS(867),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(871),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_RBRACK] = ACTIONS(873),
    [sym__escape] = ACTIONS(873),
    [sym_begin_group] = ACTIONS(873),
    [sym_end_group] = ACTIONS(873),
    [sym_math_shift] = ACTIONS(873),
    [sym_alignment_tab] = ACTIONS(873),
    [sym_parameter_char] = ACTIONS(873),
    [sym_superscript] = ACTIONS(873),
    [sym_subscript] = ACTIONS(873),
    [sym_active_char] = ACTIONS(873),
    [sym_comment_char] = ACTIONS(873),
    [sym_text] = ACTIONS(871),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [sym__escape] = ACTIONS(877),
    [sym_begin_group] = ACTIONS(877),
    [sym_end_group] = ACTIONS(877),
    [sym_math_shift] = ACTIONS(877),
    [sym_alignment_tab] = ACTIONS(877),
    [sym_parameter_char] = ACTIONS(877),
    [sym_superscript] = ACTIONS(877),
    [sym_subscript] = ACTIONS(877),
    [sym_active_char] = ACTIONS(877),
    [sym_comment_char] = ACTIONS(877),
    [sym_text] = ACTIONS(875),
  },
  [281] = {
    [sym_end_group] = ACTIONS(879),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(881),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [sym__escape] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_end_group] = ACTIONS(883),
    [sym_math_shift] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_active_char] = ACTIONS(883),
    [sym_comment_char] = ACTIONS(883),
    [sym_text] = ACTIONS(881),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(36),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(36),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(37),
  [31] = {.count = 1, .reusable = false}, SHIFT(38),
  [33] = {.count = 1, .reusable = false}, SHIFT(39),
  [35] = {.count = 1, .reusable = false}, SHIFT(40),
  [37] = {.count = 1, .reusable = false}, SHIFT(41),
  [39] = {.count = 1, .reusable = false}, SHIFT(42),
  [41] = {.count = 1, .reusable = false}, SHIFT(43),
  [43] = {.count = 1, .reusable = false}, SHIFT(44),
  [45] = {.count = 1, .reusable = false}, SHIFT(45),
  [47] = {.count = 1, .reusable = false}, SHIFT(46),
  [49] = {.count = 1, .reusable = false}, SHIFT(47),
  [51] = {.count = 1, .reusable = false}, SHIFT(48),
  [53] = {.count = 1, .reusable = false}, SHIFT(49),
  [55] = {.count = 1, .reusable = false}, SHIFT(50),
  [57] = {.count = 1, .reusable = true}, SHIFT(50),
  [59] = {.count = 1, .reusable = false}, SHIFT(51),
  [61] = {.count = 1, .reusable = false}, SHIFT(52),
  [63] = {.count = 1, .reusable = false}, SHIFT(53),
  [65] = {.count = 1, .reusable = false}, SHIFT(59),
  [67] = {.count = 1, .reusable = true}, SHIFT(59),
  [69] = {.count = 1, .reusable = true}, SHIFT(60),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(61),
  [77] = {.count = 1, .reusable = false}, SHIFT(61),
  [79] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [83] = {.count = 1, .reusable = false}, SHIFT(63),
  [85] = {.count = 1, .reusable = true}, SHIFT(63),
  [87] = {.count = 1, .reusable = true}, SHIFT(68),
  [89] = {.count = 1, .reusable = false}, SHIFT(68),
  [91] = {.count = 1, .reusable = true}, SHIFT(84),
  [93] = {.count = 1, .reusable = false}, SHIFT(86),
  [95] = {.count = 1, .reusable = false}, SHIFT(89),
  [97] = {.count = 1, .reusable = true}, SHIFT(89),
  [99] = {.count = 1, .reusable = true}, SHIFT(90),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(2),
  [107] = {.count = 1, .reusable = true}, SHIFT(94),
  [109] = {.count = 1, .reusable = true}, SHIFT(4),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(103),
  [117] = {.count = 1, .reusable = false}, SHIFT(105),
  [119] = {.count = 1, .reusable = false}, SHIFT(106),
  [121] = {.count = 1, .reusable = false}, SHIFT(112),
  [123] = {.count = 1, .reusable = false}, SHIFT(107),
  [125] = {.count = 1, .reusable = true}, SHIFT(112),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [131] = {.count = 1, .reusable = false}, SHIFT(113),
  [133] = {.count = 1, .reusable = false}, SHIFT(115),
  [135] = {.count = 1, .reusable = true}, SHIFT(115),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [139] = {.count = 1, .reusable = false}, SHIFT(116),
  [141] = {.count = 1, .reusable = true}, SHIFT(116),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(117),
  [185] = {.count = 1, .reusable = false}, SHIFT(118),
  [187] = {.count = 1, .reusable = true}, SHIFT(118),
  [189] = {.count = 1, .reusable = false}, SHIFT(119),
  [191] = {.count = 1, .reusable = false}, SHIFT(120),
  [193] = {.count = 1, .reusable = false}, SHIFT(121),
  [195] = {.count = 1, .reusable = true}, SHIFT(121),
  [197] = {.count = 1, .reusable = true}, SHIFT(123),
  [199] = {.count = 1, .reusable = true}, SHIFT(124),
  [201] = {.count = 1, .reusable = false}, SHIFT(126),
  [203] = {.count = 1, .reusable = false}, SHIFT(128),
  [205] = {.count = 1, .reusable = true}, SHIFT(128),
  [207] = {.count = 1, .reusable = false}, SHIFT(130),
  [209] = {.count = 1, .reusable = true}, SHIFT(130),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [213] = {.count = 1, .reusable = false}, SHIFT(131),
  [215] = {.count = 1, .reusable = true}, SHIFT(131),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(132),
  [227] = {.count = 1, .reusable = false}, SHIFT(134),
  [229] = {.count = 1, .reusable = true}, SHIFT(134),
  [231] = {.count = 1, .reusable = true}, SHIFT(135),
  [233] = {.count = 1, .reusable = true}, SHIFT(137),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_text, 1),
  [237] = {.count = 1, .reusable = false}, SHIFT(144),
  [239] = {.count = 1, .reusable = false}, SHIFT(147),
  [241] = {.count = 1, .reusable = false}, SHIFT(149),
  [243] = {.count = 1, .reusable = true}, SHIFT(149),
  [245] = {.count = 1, .reusable = false}, SHIFT(162),
  [247] = {.count = 1, .reusable = false}, SHIFT(163),
  [249] = {.count = 1, .reusable = true}, SHIFT(163),
  [251] = {.count = 1, .reusable = false}, SHIFT(165),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [257] = {.count = 1, .reusable = false}, SHIFT(168),
  [259] = {.count = 1, .reusable = true}, SHIFT(168),
  [261] = {.count = 1, .reusable = false}, SHIFT(169),
  [263] = {.count = 1, .reusable = false}, SHIFT(170),
  [265] = {.count = 1, .reusable = false}, SHIFT(171),
  [267] = {.count = 1, .reusable = false}, SHIFT(172),
  [269] = {.count = 1, .reusable = false}, SHIFT(173),
  [271] = {.count = 1, .reusable = false}, SHIFT(174),
  [273] = {.count = 1, .reusable = false}, SHIFT(175),
  [275] = {.count = 1, .reusable = false}, SHIFT(176),
  [277] = {.count = 1, .reusable = false}, SHIFT(177),
  [279] = {.count = 1, .reusable = false}, SHIFT(178),
  [281] = {.count = 1, .reusable = false}, SHIFT(179),
  [283] = {.count = 1, .reusable = false}, SHIFT(180),
  [285] = {.count = 1, .reusable = false}, SHIFT(181),
  [287] = {.count = 1, .reusable = true}, SHIFT(182),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_begin, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(180),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [303] = {.count = 1, .reusable = false}, SHIFT(187),
  [305] = {.count = 1, .reusable = false}, SHIFT(189),
  [307] = {.count = 1, .reusable = true}, SHIFT(189),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(192),
  [323] = {.count = 1, .reusable = true}, SHIFT(193),
  [325] = {.count = 1, .reusable = false}, SHIFT(194),
  [327] = {.count = 1, .reusable = false}, SHIFT(195),
  [329] = {.count = 1, .reusable = false}, SHIFT(196),
  [331] = {.count = 1, .reusable = false}, SHIFT(197),
  [333] = {.count = 1, .reusable = false}, SHIFT(198),
  [335] = {.count = 1, .reusable = true}, SHIFT(198),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_at_command, 1),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [353] = {.count = 1, .reusable = false}, SHIFT(200),
  [355] = {.count = 1, .reusable = true}, SHIFT(200),
  [357] = {.count = 1, .reusable = false}, SHIFT(202),
  [359] = {.count = 1, .reusable = true}, SHIFT(202),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(204),
  [371] = {.count = 1, .reusable = true}, SHIFT(204),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(116),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [396] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(8),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(116),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(118),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(118),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [420] = {.count = 1, .reusable = false}, SHIFT(205),
  [422] = {.count = 1, .reusable = false}, SHIFT(206),
  [424] = {.count = 1, .reusable = true}, SHIFT(206),
  [426] = {.count = 1, .reusable = true}, SHIFT(207),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [432] = {.count = 1, .reusable = false}, SHIFT(208),
  [434] = {.count = 1, .reusable = false}, SHIFT(210),
  [436] = {.count = 1, .reusable = true}, SHIFT(210),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [450] = {.count = 1, .reusable = false}, SHIFT(213),
  [452] = {.count = 1, .reusable = true}, SHIFT(213),
  [454] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [457] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(51),
  [460] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [463] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(131),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(8),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(131),
  [477] = {.count = 1, .reusable = true}, SHIFT(214),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(134),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(134),
  [489] = {.count = 1, .reusable = true}, SHIFT(215),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(165),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(216),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [507] = {.count = 1, .reusable = true}, SHIFT(218),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(220),
  [515] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [517] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(144),
  [520] = {.count = 1, .reusable = true}, SHIFT(222),
  [522] = {.count = 1, .reusable = true}, SHIFT(224),
  [524] = {.count = 1, .reusable = true}, SHIFT(225),
  [526] = {.count = 1, .reusable = true}, SHIFT(226),
  [528] = {.count = 1, .reusable = true}, SHIFT(227),
  [530] = {.count = 1, .reusable = true}, SHIFT(228),
  [532] = {.count = 1, .reusable = true}, SHIFT(229),
  [534] = {.count = 1, .reusable = false}, SHIFT(230),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(168),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(168),
  [552] = {.count = 1, .reusable = true}, SHIFT(232),
  [554] = {.count = 1, .reusable = true}, SHIFT(233),
  [556] = {.count = 1, .reusable = true}, SHIFT(234),
  [558] = {.count = 1, .reusable = true}, SHIFT(235),
  [560] = {.count = 1, .reusable = true}, SHIFT(236),
  [562] = {.count = 1, .reusable = true}, SHIFT(237),
  [564] = {.count = 1, .reusable = true}, SHIFT(238),
  [566] = {.count = 1, .reusable = true}, SHIFT(239),
  [568] = {.count = 1, .reusable = true}, SHIFT(240),
  [570] = {.count = 1, .reusable = true}, SHIFT(241),
  [572] = {.count = 1, .reusable = true}, SHIFT(242),
  [574] = {.count = 1, .reusable = true}, SHIFT(243),
  [576] = {.count = 1, .reusable = false}, SHIFT(244),
  [578] = {.count = 1, .reusable = false}, SHIFT(245),
  [580] = {.count = 1, .reusable = true}, SHIFT(245),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 3),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [586] = {.count = 1, .reusable = true}, SHIFT(246),
  [588] = {.count = 1, .reusable = false}, SHIFT(248),
  [590] = {.count = 1, .reusable = false}, SHIFT(250),
  [592] = {.count = 1, .reusable = true}, SHIFT(250),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(252),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_at_token, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [620] = {.count = 1, .reusable = false}, SHIFT(253),
  [622] = {.count = 1, .reusable = false}, SHIFT(254),
  [624] = {.count = 1, .reusable = true}, SHIFT(254),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [630] = {.count = 1, .reusable = false}, SHIFT(256),
  [632] = {.count = 1, .reusable = true}, SHIFT(256),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 3),
  [638] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [641] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(196),
  [644] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(106),
  [647] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [650] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(202),
  [653] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [656] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(107),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(8),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(202),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [669] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(204),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(204),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(206),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(206),
  [685] = {.count = 1, .reusable = true}, SHIFT(257),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [691] = {.count = 1, .reusable = true}, SHIFT(258),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [703] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(213),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(213),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [711] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [717] = {.count = 1, .reusable = true}, SHIFT(259),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [723] = {.count = 1, .reusable = true}, SHIFT(170),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [729] = {.count = 1, .reusable = true}, SHIFT(260),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [735] = {.count = 1, .reusable = true}, SHIFT(261),
  [737] = {.count = 1, .reusable = true}, SHIFT(262),
  [739] = {.count = 1, .reusable = true}, SHIFT(263),
  [741] = {.count = 1, .reusable = true}, SHIFT(264),
  [743] = {.count = 1, .reusable = true}, SHIFT(265),
  [745] = {.count = 1, .reusable = true}, SHIFT(266),
  [747] = {.count = 1, .reusable = true}, SHIFT(267),
  [749] = {.count = 1, .reusable = true}, SHIFT(268),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_begin_verbatim, 4),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [763] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [767] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [771] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_begin_minted, 4),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [779] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [781] = {.count = 1, .reusable = false}, SHIFT(269),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 4),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [787] = {.count = 1, .reusable = true}, SHIFT(270),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 3),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [797] = {.count = 1, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2),
  [799] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(254),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(254),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 3),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [809] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(256),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(256),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [823] = {.count = 1, .reusable = true}, SHIFT(272),
  [825] = {.count = 1, .reusable = true}, SHIFT(273),
  [827] = {.count = 1, .reusable = true}, SHIFT(274),
  [829] = {.count = 1, .reusable = true}, SHIFT(275),
  [831] = {.count = 1, .reusable = true}, SHIFT(276),
  [833] = {.count = 1, .reusable = true}, SHIFT(277),
  [835] = {.count = 1, .reusable = true}, SHIFT(278),
  [837] = {.count = 1, .reusable = true}, SHIFT(279),
  [839] = {.count = 1, .reusable = true}, SHIFT(280),
  [841] = {.count = 1, .reusable = true}, SHIFT(281),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 5),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [853] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [857] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [861] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [873] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [879] = {.count = 1, .reusable = true}, SHIFT(282),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
