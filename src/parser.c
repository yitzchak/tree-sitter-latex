#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 205
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 4
#define TOKEN_COUNT 40
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
  anon_sym_makeatletter = 22,
  anon_sym_makeatother = 23,
  sym_magic_comment = 24,
  sym_comment = 25,
  sym__escape = 26,
  sym_begin_group = 27,
  sym_end_group = 28,
  sym_math_shift = 29,
  sym_alignment_tab = 30,
  sym__end_of_line = 31,
  sym_parameter_char = 32,
  sym_superscript = 33,
  sym_subscript = 34,
  sym__name = 35,
  sym__at_name = 36,
  sym_active_char = 37,
  sym_text = 38,
  sym_number = 39,
  sym_document = 40,
  sym__text_mode = 41,
  sym_text_mode = 42,
  sym__at_text_mode = 43,
  sym_at_group = 44,
  sym__math_mode = 45,
  sym_math_mode = 46,
  sym_parameter = 47,
  sym_text_env = 48,
  sym_math_environment = 49,
  sym__display_math = 50,
  sym_tex_display_math = 51,
  sym_latex_display_math = 52,
  sym_begin_display_math = 53,
  sym_end_display_math = 54,
  sym_begin_inline_math = 55,
  sym_end_inline_math = 56,
  sym_display_math_env = 57,
  sym_display_math_begin = 58,
  sym_display_math_end = 59,
  sym_display_math_env_group = 60,
  sym__inline_math = 61,
  sym_tex_inline_math = 62,
  sym_latex_inline_math = 63,
  sym_inline_math_env = 64,
  sym_inline_math_begin = 65,
  sym_inline_math_end = 66,
  sym_inline_math_env_group = 67,
  sym_tag = 68,
  sym_tag_token = 69,
  sym_verbatim_env = 70,
  sym_verbatim_begin = 71,
  sym_verbatim_end = 72,
  sym_verbatim_text = 73,
  sym_verbatim_env_group = 74,
  sym_escaped = 75,
  sym_command = 76,
  sym_at_command = 77,
  sym_begin = 78,
  sym_begin_token = 79,
  sym_end = 80,
  sym_end_token = 81,
  sym_documentclass = 82,
  sym_documentclass_token = 83,
  sym_usepackage = 84,
  sym_usepackage_token = 85,
  sym_include = 86,
  sym_include_token = 87,
  sym_section = 88,
  sym_section_token = 89,
  sym_storage = 90,
  sym_storage_token = 91,
  sym_catcode = 92,
  sym_catcode_token = 93,
  sym_emph = 94,
  sym_emph_token = 95,
  sym_textbf = 96,
  sym_textbf_token = 97,
  sym_makeatletter = 98,
  sym_makeatletter_token = 99,
  sym_makeatother = 100,
  sym_makeatother_token = 101,
  sym_text_group = 102,
  sym_at_text_group = 103,
  sym_simple_text_group = 104,
  sym_opt_text_group = 105,
  sym_opt_at_text_group = 106,
  sym_math_group = 107,
  sym_opt_math_group = 108,
  sym_math_text_group = 109,
  sym_token = 110,
  sym_at_token = 111,
  sym_begin_opt = 112,
  sym_end_opt = 113,
  aux_sym_text_mode_repeat1 = 114,
  aux_sym_at_group_repeat1 = 115,
  aux_sym_math_mode_repeat1 = 116,
  aux_sym_verbatim_text_repeat1 = 117,
  aux_sym_verbatim_text_repeat2 = 118,
  anon_alias_sym_class_name = 119,
  anon_alias_sym_env_name = 120,
  anon_alias_sym_package_name = 121,
  anon_alias_sym_text = 122,
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
  [sym__at_text_mode] = "_at_text_mode",
  [sym_at_group] = "at_group",
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
  [sym_emph] = "emph",
  [sym_emph_token] = "emph_token",
  [sym_textbf] = "textbf",
  [sym_textbf_token] = "textbf_token",
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
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_at_group_repeat1] = "at_group_repeat1",
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
  [sym_emph] = {
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
  [sym_textbf_token] = {
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
        ADVANCE(145);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(157);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 158:
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
    case 159:
      if (lookahead == '%')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(160);
      END_STATE();
    case 161:
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
    case 162:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(20);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 164:
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
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(145);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(167);
      if (lookahead == 'e')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 169:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'd')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 174:
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
        ADVANCE(175);
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
        ADVANCE(145);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(86);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 178:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == 'V')
        ADVANCE(179);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead == 'e')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(230);
      if (lookahead == 'g')
        ADVANCE(235);
      if (lookahead == 'l')
        ADVANCE(240);
      if (lookahead == 'm')
        ADVANCE(249);
      if (lookahead == 's')
        ADVANCE(264);
      if (lookahead == 'v')
        ADVANCE(267);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(183);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(sym_verbatim_env_name);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(193);
      if (lookahead == 'a')
        ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_display_math_env_name);
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'g')
        ADVANCE(201);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'm')
        ADVANCE(214);
      if (lookahead == 's')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(198);
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
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(200);
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
      if (lookahead == 'y')
        ADVANCE(195);
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
      if (lookahead == 'o')
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
      if (lookahead == 'u')
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
      if (lookahead == 'p')
        ADVANCE(195);
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
      if (lookahead == 's')
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
        ADVANCE(209);
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
      if (lookahead == 'y')
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
      if (lookahead == 'm')
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(193);
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
      if (lookahead == 'a')
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
        ADVANCE(195);
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
      if (lookahead == 'e')
        ADVANCE(218);
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
        ADVANCE(221);
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
      if (lookahead == 's')
        ADVANCE(195);
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
      if (lookahead == 'q')
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
      if (lookahead == 'n')
        ADVANCE(224);
      if (lookahead == 'u')
        ADVANCE(225);
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
      if (lookahead == 'a')
        ADVANCE(197);
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
      if (lookahead == 'a')
        ADVANCE(226);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
        ADVANCE(228);
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
      if (lookahead == 'o')
        ADVANCE(229);
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
      if (lookahead == 'n')
        ADVANCE(195);
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
      if (lookahead == 'l')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(234);
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
      if (lookahead == 'g')
        ADVANCE(229);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      if (lookahead == 'e')
        ADVANCE(239);
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
      if (lookahead == 'r')
        ADVANCE(195);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(244);
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(187);
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
      if (lookahead == 'a')
        ADVANCE(250);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(257);
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
      if (lookahead == 't')
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_inline_math_env_name);
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
      if (lookahead == 'n')
        ADVANCE(254);
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(187);
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
        ADVANCE(261);
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
        ADVANCE(195);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(268);
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
      if (lookahead == 'r')
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
      if (lookahead == 'b')
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
      if (lookahead == 'a')
        ADVANCE(271);
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'm')
        ADVANCE(187);
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
      if (lookahead == 'V')
        ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 275:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(30);
      END_STATE();
    case 276:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 277:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 278:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(279);
      if (lookahead == 'b')
        ADVANCE(292);
      if (lookahead == 'c')
        ADVANCE(297);
      if (lookahead == 'd')
        ADVANCE(309);
      if (lookahead == 'e')
        ADVANCE(324);
      if (lookahead == 'i')
        ADVANCE(329);
      if (lookahead == 'k')
        ADVANCE(338);
      if (lookahead == 'm')
        ADVANCE(340);
      if (lookahead == 'p')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(377);
      if (lookahead == 'u')
        ADVANCE(383);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(280);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(281);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(282);
      if (lookahead == 'p')
        ADVANCE(287);
      if (lookahead == 's')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(283);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(284);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(288);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(289);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(293);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(294);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(295);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(304);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(299);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(300);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(301);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(302);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(64);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(305);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(306);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(307);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(310);
      if (lookahead == 'o')
        ADVANCE(312);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(311);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(313);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(314);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(315);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(316);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(317);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(318);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(319);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(320);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(321);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(322);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(323);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(326);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(327);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(328);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(330);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(331);
      if (lookahead == 'p')
        ADVANCE(336);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(333);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(334);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(337);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(335);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(339);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(298);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(341);
      if (lookahead == 'i')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(342);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(344);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(345);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(347);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(348);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(349);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(350);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(352);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(353);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(290);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(355);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(356);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == 't')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(358);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(361);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead == 'u')
        ADVANCE(368);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(364);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(365);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(366);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(367);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(285);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(369);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(370);
      if (lookahead == 's')
        ADVANCE(373);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(371);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(372);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(357);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead == 'u')
        ADVANCE(374);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(375);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(376);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(363);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(378);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'x')
        ADVANCE(379);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(380);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(381);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(382);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_textbf);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(384);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(385);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(386);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(387);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(388);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(389);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(390);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(391);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(392);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(325);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
      END_STATE();
    case 395:
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
        ADVANCE(175);
      if (lookahead == 'i')
        ADVANCE(90);
      if (lookahead == 'k')
        ADVANCE(99);
      if (lookahead == 'm')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(116);
      if (lookahead == 's')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(145);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 396:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(23);
      END_STATE();
    case 397:
      if (lookahead == '%')
        ADVANCE(38);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(279);
      if (lookahead == 'b')
        ADVANCE(292);
      if (lookahead == 'c')
        ADVANCE(297);
      if (lookahead == 'd')
        ADVANCE(309);
      if (lookahead == 'e')
        ADVANCE(324);
      if (lookahead == 'i')
        ADVANCE(329);
      if (lookahead == 'k')
        ADVANCE(338);
      if (lookahead == 'm')
        ADVANCE(398);
      if (lookahead == 'p')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(377);
      if (lookahead == 'u')
        ADVANCE(383);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(393);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(157);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(351);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(286);
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
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 159},
  [7] = {.lex_state = 161},
  [8] = {.lex_state = 162},
  [9] = {.lex_state = 162},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 161},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 161},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 161},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 161},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 161},
  [44] = {.lex_state = 161},
  [45] = {.lex_state = 158},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 158},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 161},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 161},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 173},
  [66] = {.lex_state = 163},
  [67] = {.lex_state = 174},
  [68] = {.lex_state = 161},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 178},
  [72] = {.lex_state = 275},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 275},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 161},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 161},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 161},
  [82] = {.lex_state = 161},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 276},
  [85] = {.lex_state = 277},
  [86] = {.lex_state = 161},
  [87] = {.lex_state = 161},
  [88] = {.lex_state = 278},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 161},
  [91] = {.lex_state = 161},
  [92] = {.lex_state = 161},
  [93] = {.lex_state = 161},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 161},
  [97] = {.lex_state = 161},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 161},
  [101] = {.lex_state = 158},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 161},
  [104] = {.lex_state = 158},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 161},
  [107] = {.lex_state = 158},
  [108] = {.lex_state = 161},
  [109] = {.lex_state = 395},
  [110] = {.lex_state = 161},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 161},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 161},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 396},
  [119] = {.lex_state = 161},
  [120] = {.lex_state = 161},
  [121] = {.lex_state = 34},
  [122] = {.lex_state = 161},
  [123] = {.lex_state = 34},
  [124] = {.lex_state = 34},
  [125] = {.lex_state = 161},
  [126] = {.lex_state = 178},
  [127] = {.lex_state = 161},
  [128] = {.lex_state = 163},
  [129] = {.lex_state = 173},
  [130] = {.lex_state = 163},
  [131] = {.lex_state = 161},
  [132] = {.lex_state = 161},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 158},
  [135] = {.lex_state = 158},
  [136] = {.lex_state = 158},
  [137] = {.lex_state = 158},
  [138] = {.lex_state = 158},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 275},
  [141] = {.lex_state = 275},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 163},
  [144] = {.lex_state = 275},
  [145] = {.lex_state = 275},
  [146] = {.lex_state = 161},
  [147] = {.lex_state = 161},
  [148] = {.lex_state = 161},
  [149] = {.lex_state = 277},
  [150] = {.lex_state = 159},
  [151] = {.lex_state = 161},
  [152] = {.lex_state = 161},
  [153] = {.lex_state = 397},
  [154] = {.lex_state = 161},
  [155] = {.lex_state = 158},
  [156] = {.lex_state = 161},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 161},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 161},
  [161] = {.lex_state = 36},
  [162] = {.lex_state = 161},
  [163] = {.lex_state = 158},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 161},
  [166] = {.lex_state = 158},
  [167] = {.lex_state = 158},
  [168] = {.lex_state = 161},
  [169] = {.lex_state = 161},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 161},
  [172] = {.lex_state = 161},
  [173] = {.lex_state = 178},
  [174] = {.lex_state = 161},
  [175] = {.lex_state = 178},
  [176] = {.lex_state = 161},
  [177] = {.lex_state = 158},
  [178] = {.lex_state = 275},
  [179] = {.lex_state = 161},
  [180] = {.lex_state = 275},
  [181] = {.lex_state = 161},
  [182] = {.lex_state = 275},
  [183] = {.lex_state = 158},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 275},
  [186] = {.lex_state = 275},
  [187] = {.lex_state = 275},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 163},
  [190] = {.lex_state = 275},
  [191] = {.lex_state = 161},
  [192] = {.lex_state = 161},
  [193] = {.lex_state = 158},
  [194] = {.lex_state = 161},
  [195] = {.lex_state = 36},
  [196] = {.lex_state = 161},
  [197] = {.lex_state = 161},
  [198] = {.lex_state = 158},
  [199] = {.lex_state = 161},
  [200] = {.lex_state = 275},
  [201] = {.lex_state = 34},
  [202] = {.lex_state = 275},
  [203] = {.lex_state = 163},
  [204] = {.lex_state = 161},
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
    [sym__text_mode] = STATE(29),
    [sym_text_mode] = STATE(9),
    [sym_at_group] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym_text_env] = STATE(29),
    [sym__display_math] = STATE(29),
    [sym_tex_display_math] = STATE(29),
    [sym_latex_display_math] = STATE(29),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(29),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(29),
    [sym_tex_inline_math] = STATE(29),
    [sym_latex_inline_math] = STATE(29),
    [sym_inline_math_env] = STATE(29),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(29),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(29),
    [sym_command] = STATE(29),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(29),
    [sym_opt_text_group] = STATE(29),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(29),
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
    [anon_sym_makeatletter] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(53),
  },
  [4] = {
    [sym__text_mode] = STATE(45),
    [sym_at_group] = STATE(45),
    [sym_parameter] = STATE(45),
    [sym_text_env] = STATE(45),
    [sym__display_math] = STATE(45),
    [sym_tex_display_math] = STATE(45),
    [sym_latex_display_math] = STATE(45),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(45),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(45),
    [sym_tex_inline_math] = STATE(45),
    [sym_latex_inline_math] = STATE(45),
    [sym_inline_math_env] = STATE(45),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(45),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(45),
    [sym_command] = STATE(45),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(45),
    [sym_opt_text_group] = STATE(45),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(57),
    [sym_text] = ACTIONS(57),
  },
  [5] = {
    [sym__math_mode] = STATE(54),
    [sym_math_mode] = STATE(49),
    [sym_parameter] = STATE(54),
    [sym_math_environment] = STATE(54),
    [sym_tag] = STATE(54),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(54),
    [sym_command] = STATE(54),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(54),
    [sym_opt_math_group] = STATE(54),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [6] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(67),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(69),
    [sym_begin_group] = ACTIONS(69),
    [sym_end_group] = ACTIONS(69),
    [sym_math_shift] = ACTIONS(69),
    [sym_alignment_tab] = ACTIONS(69),
    [sym_parameter_char] = ACTIONS(69),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [sym_active_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [10] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
  },
  [11] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(58),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
  },
  [12] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(59),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
  },
  [13] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(60),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
  },
  [14] = {
    [sym_verbatim_end] = STATE(62),
    [sym_verbatim_text] = STATE(63),
    [sym_end_token] = STATE(64),
    [aux_sym_verbatim_text_repeat1] = STATE(65),
    [aux_sym_verbatim_text_repeat2] = STATE(66),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
    [sym__end_of_line] = ACTIONS(81),
  },
  [15] = {
    [sym__text_mode] = STATE(70),
    [sym_at_group] = STATE(70),
    [sym_parameter] = STATE(70),
    [sym_text_env] = STATE(70),
    [sym__display_math] = STATE(70),
    [sym_tex_display_math] = STATE(70),
    [sym_latex_display_math] = STATE(70),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(70),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(70),
    [sym_tex_inline_math] = STATE(70),
    [sym_latex_inline_math] = STATE(70),
    [sym_inline_math_env] = STATE(70),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(70),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(70),
    [sym_command] = STATE(70),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(68),
    [sym_end_token] = STATE(69),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(70),
    [sym_opt_text_group] = STATE(70),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(70),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [16] = {
    [sym_display_math_env_group] = STATE(72),
    [sym_inline_math_env_group] = STATE(73),
    [sym_verbatim_env_group] = STATE(74),
    [sym_simple_text_group] = STATE(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(87),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
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
  [18] = {
    [sym_simple_text_group] = STATE(77),
    [sym_opt_text_group] = STATE(78),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [19] = {
    [sym_simple_text_group] = STATE(79),
    [sym_opt_text_group] = STATE(80),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [20] = {
    [sym_text_group] = STATE(81),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [21] = {
    [sym_text_group] = STATE(82),
    [sym_opt_text_group] = STATE(83),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [22] = {
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
  [23] = {
    [sym_escaped] = STATE(85),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(95),
  },
  [24] = {
    [sym_text_group] = STATE(86),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [25] = {
    [sym_text_group] = STATE(87),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [26] = {
    [sym__at_text_mode] = STATE(95),
    [sym_parameter] = STATE(95),
    [sym_text_env] = STATE(95),
    [sym__display_math] = STATE(95),
    [sym_tex_display_math] = STATE(95),
    [sym_latex_display_math] = STATE(95),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(95),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(95),
    [sym_tex_inline_math] = STATE(95),
    [sym_latex_inline_math] = STATE(95),
    [sym_inline_math_env] = STATE(95),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(95),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(95),
    [sym_at_command] = STATE(95),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_makeatother] = STATE(92),
    [sym_makeatother_token] = STATE(93),
    [sym_at_text_group] = STATE(95),
    [sym_opt_at_text_group] = STATE(95),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [27] = {
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(105),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(105),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(105),
    [sym_active_char] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
  },
  [28] = {
    [sym__text_mode] = STATE(98),
    [sym_at_group] = STATE(98),
    [sym_parameter] = STATE(98),
    [sym_text_env] = STATE(98),
    [sym__display_math] = STATE(98),
    [sym_tex_display_math] = STATE(98),
    [sym_latex_display_math] = STATE(98),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(98),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(98),
    [sym_tex_inline_math] = STATE(98),
    [sym_latex_inline_math] = STATE(98),
    [sym_inline_math_env] = STATE(98),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(98),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(98),
    [sym_command] = STATE(98),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(98),
    [sym_opt_text_group] = STATE(98),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(97),
    [aux_sym_text_mode_repeat1] = STATE(98),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
  },
  [29] = {
    [sym__text_mode] = STATE(99),
    [sym_at_group] = STATE(99),
    [sym_parameter] = STATE(99),
    [sym_text_env] = STATE(99),
    [sym__display_math] = STATE(99),
    [sym_tex_display_math] = STATE(99),
    [sym_latex_display_math] = STATE(99),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(99),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(99),
    [sym_tex_inline_math] = STATE(99),
    [sym_latex_inline_math] = STATE(99),
    [sym_inline_math_env] = STATE(99),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(99),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(99),
    [sym_command] = STATE(99),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(99),
    [sym_opt_text_group] = STATE(99),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(7),
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
  [30] = {
    [anon_sym_LBRACK] = ACTIONS(115),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(115),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(115),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [31] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(119),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(119),
    [sym_superscript] = ACTIONS(119),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
  },
  [33] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(121),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(123),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(125),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(125),
  },
  [36] = {
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
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
  },
  [39] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(133),
  },
  [40] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(135),
  },
  [41] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(137),
  },
  [42] = {
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_text] = ACTIONS(139),
  },
  [43] = {
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_end_group] = ACTIONS(143),
    [sym_math_shift] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_text] = ACTIONS(143),
  },
  [45] = {
    [sym__text_mode] = STATE(101),
    [sym_at_group] = STATE(101),
    [sym_parameter] = STATE(101),
    [sym_text_env] = STATE(101),
    [sym__display_math] = STATE(101),
    [sym_tex_display_math] = STATE(101),
    [sym_latex_display_math] = STATE(101),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(101),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(101),
    [sym_tex_inline_math] = STATE(101),
    [sym_latex_inline_math] = STATE(101),
    [sym_inline_math_env] = STATE(101),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(101),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(101),
    [sym_command] = STATE(101),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(101),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(145),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [46] = {
    [anon_sym_tag] = ACTIONS(149),
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(53),
  },
  [47] = {
    [sym__math_mode] = STATE(104),
    [sym_parameter] = STATE(104),
    [sym_math_environment] = STATE(104),
    [sym_tag] = STATE(104),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(104),
    [sym_command] = STATE(104),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(104),
    [sym_opt_math_group] = STATE(104),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_text] = ACTIONS(153),
  },
  [48] = {
    [sym__math_mode] = STATE(54),
    [sym_math_mode] = STATE(105),
    [sym_parameter] = STATE(54),
    [sym_math_environment] = STATE(54),
    [sym_tag] = STATE(54),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(54),
    [sym_command] = STATE(54),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(54),
    [sym_opt_math_group] = STATE(54),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [49] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(155),
  },
  [50] = {
    [sym_math_text_group] = STATE(108),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(157),
  },
  [51] = {
    [sym__math_mode] = STATE(111),
    [sym_parameter] = STATE(111),
    [sym_math_environment] = STATE(111),
    [sym_tag] = STATE(111),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(111),
    [sym_command] = STATE(111),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
    [sym_end] = STATE(110),
    [sym_end_token] = STATE(69),
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
    [sym_math_group] = STATE(111),
    [sym_opt_math_group] = STATE(111),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [52] = {
    [sym_simple_text_group] = STATE(75),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [53] = {
    [sym__math_mode] = STATE(113),
    [sym_parameter] = STATE(113),
    [sym_math_environment] = STATE(113),
    [sym_tag] = STATE(113),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(113),
    [sym_command] = STATE(113),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(113),
    [sym_opt_math_group] = STATE(113),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [sym_end_opt] = STATE(112),
    [aux_sym_math_mode_repeat1] = STATE(113),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [54] = {
    [sym__math_mode] = STATE(114),
    [sym_parameter] = STATE(114),
    [sym_math_environment] = STATE(114),
    [sym_tag] = STATE(114),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(114),
    [sym_command] = STATE(114),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(114),
    [sym_opt_math_group] = STATE(114),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_text] = ACTIONS(167),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_end_group] = ACTIONS(169),
    [sym_math_shift] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [56] = {
    [sym_end_display_math] = STATE(116),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(171),
  },
  [57] = {
    [sym__math_mode] = STATE(117),
    [sym_parameter] = STATE(117),
    [sym_math_environment] = STATE(117),
    [sym_tag] = STATE(117),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(117),
    [sym_command] = STATE(117),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(117),
    [sym_opt_math_group] = STATE(117),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [58] = {
    [sym_end_inline_math] = STATE(119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(175),
  },
  [59] = {
    [sym_display_math_end] = STATE(120),
    [sym_end_token] = STATE(121),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
  },
  [60] = {
    [sym_inline_math_end] = STATE(122),
    [sym_end_token] = STATE(123),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
  },
  [61] = {
    [anon_sym_end] = ACTIONS(177),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_text] = ACTIONS(179),
  },
  [63] = {
    [sym_verbatim_end] = STATE(125),
    [sym_end_token] = STATE(64),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(79),
  },
  [64] = {
    [sym_verbatim_env_group] = STATE(127),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(181),
  },
  [65] = {
    [aux_sym_verbatim_text_repeat1] = STATE(129),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(183),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(185),
  },
  [66] = {
    [aux_sym_verbatim_text_repeat1] = STATE(65),
    [aux_sym_verbatim_text_repeat2] = STATE(130),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(187),
    [sym__end_of_line] = ACTIONS(189),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(191),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [anon_sym_makeatletter] = ACTIONS(51),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(53),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(193),
    [sym_begin_group] = ACTIONS(193),
    [sym_end_group] = ACTIONS(193),
    [sym_math_shift] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_text] = ACTIONS(193),
  },
  [69] = {
    [sym_simple_text_group] = STATE(131),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [70] = {
    [sym__text_mode] = STATE(133),
    [sym_at_group] = STATE(133),
    [sym_parameter] = STATE(133),
    [sym_text_env] = STATE(133),
    [sym__display_math] = STATE(133),
    [sym_tex_display_math] = STATE(133),
    [sym_latex_display_math] = STATE(133),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(133),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(133),
    [sym_tex_inline_math] = STATE(133),
    [sym_latex_inline_math] = STATE(133),
    [sym_inline_math_env] = STATE(133),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(133),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(133),
    [sym_command] = STATE(133),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_end] = STATE(132),
    [sym_end_token] = STATE(69),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(133),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(133),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [71] = {
    [sym_display_math_env_name] = ACTIONS(197),
    [sym_inline_math_env_name] = ACTIONS(199),
    [sym_verbatim_env_name] = ACTIONS(201),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(203),
  },
  [72] = {
    [sym_text_group] = STATE(140),
    [sym_opt_text_group] = STATE(141),
    [sym_begin_opt] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(205),
    [sym__end_of_line] = ACTIONS(207),
  },
  [73] = {
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [74] = {
    [sym_text_group] = STATE(144),
    [sym_opt_text_group] = STATE(145),
    [sym_begin_opt] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(205),
    [sym__end_of_line] = ACTIONS(211),
  },
  [75] = {
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_text] = ACTIONS(213),
  },
  [76] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(215),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [78] = {
    [sym_simple_text_group] = STATE(146),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [80] = {
    [sym_simple_text_group] = STATE(147),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(91),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(221),
    [sym_end_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(221),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [sym_text] = ACTIONS(221),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
    [sym_end_group] = ACTIONS(223),
    [sym_math_shift] = ACTIONS(223),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_text] = ACTIONS(223),
  },
  [83] = {
    [sym_text_group] = STATE(148),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(15),
  },
  [84] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(225),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [86] = {
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
  [87] = {
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
  [88] = {
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
    [anon_sym_makeatother] = ACTIONS(233),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(235),
  },
  [89] = {
    [sym__at_text_mode] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(155),
    [sym_at_command] = STATE(155),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(155),
    [sym_opt_at_text_group] = STATE(155),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(99),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
  },
  [90] = {
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
  [91] = {
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
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(247),
    [sym_begin_group] = ACTIONS(247),
    [sym_end_group] = ACTIONS(247),
    [sym_math_shift] = ACTIONS(247),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(247),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(247),
    [sym_active_char] = ACTIONS(247),
    [sym_text] = ACTIONS(247),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(249),
    [sym_begin_group] = ACTIONS(249),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(249),
    [sym_alignment_tab] = ACTIONS(249),
    [sym_parameter_char] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [sym_active_char] = ACTIONS(249),
    [sym_text] = ACTIONS(249),
  },
  [94] = {
    [sym__at_text_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_text_env] = STATE(157),
    [sym__display_math] = STATE(157),
    [sym_tex_display_math] = STATE(157),
    [sym_latex_display_math] = STATE(157),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(157),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(157),
    [sym_tex_inline_math] = STATE(157),
    [sym_latex_inline_math] = STATE(157),
    [sym_inline_math_env] = STATE(157),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(157),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(157),
    [sym_at_command] = STATE(157),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(157),
    [sym_opt_at_text_group] = STATE(157),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [sym_end_opt] = STATE(156),
    [aux_sym_at_group_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(251),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(251),
    [sym_text] = ACTIONS(251),
  },
  [95] = {
    [sym__at_text_mode] = STATE(159),
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
    [sym_at_command] = STATE(159),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_makeatother] = STATE(158),
    [sym_makeatother_token] = STATE(93),
    [sym_at_text_group] = STATE(159),
    [sym_opt_at_text_group] = STATE(159),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(253),
    [sym_text] = ACTIONS(253),
  },
  [96] = {
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
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(257),
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
    [sym__text_mode] = STATE(161),
    [sym_at_group] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_text_env] = STATE(161),
    [sym__display_math] = STATE(161),
    [sym_tex_display_math] = STATE(161),
    [sym_latex_display_math] = STATE(161),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(161),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(161),
    [sym_tex_inline_math] = STATE(161),
    [sym_latex_inline_math] = STATE(161),
    [sym_inline_math_env] = STATE(161),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(161),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(161),
    [sym_opt_text_group] = STATE(161),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(160),
    [aux_sym_text_mode_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [99] = {
    [sym__text_mode] = STATE(99),
    [sym_at_group] = STATE(99),
    [sym_parameter] = STATE(99),
    [sym_text_env] = STATE(99),
    [sym__display_math] = STATE(99),
    [sym_tex_display_math] = STATE(99),
    [sym_latex_display_math] = STATE(99),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(99),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(99),
    [sym_tex_inline_math] = STATE(99),
    [sym_latex_inline_math] = STATE(99),
    [sym_inline_math_env] = STATE(99),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(99),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(99),
    [sym_command] = STATE(99),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(99),
    [sym_opt_text_group] = STATE(99),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(266),
    [sym_begin_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(272),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(278),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_RBRACK] = ACTIONS(284),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(284),
    [sym_begin_group] = ACTIONS(284),
    [sym_end_group] = ACTIONS(284),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(284),
    [sym_parameter_char] = ACTIONS(284),
    [sym_superscript] = ACTIONS(284),
    [sym_subscript] = ACTIONS(284),
    [sym_active_char] = ACTIONS(284),
    [sym_text] = ACTIONS(284),
  },
  [101] = {
    [sym__text_mode] = STATE(101),
    [sym_at_group] = STATE(101),
    [sym_parameter] = STATE(101),
    [sym_text_env] = STATE(101),
    [sym__display_math] = STATE(101),
    [sym_tex_display_math] = STATE(101),
    [sym_latex_display_math] = STATE(101),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(101),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(101),
    [sym_tex_inline_math] = STATE(101),
    [sym_latex_inline_math] = STATE(101),
    [sym_inline_math_env] = STATE(101),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(101),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(101),
    [sym_command] = STATE(101),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(101),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(266),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(261),
    [sym_math_shift] = ACTIONS(272),
    [sym_alignment_tab] = ACTIONS(286),
    [sym_parameter_char] = ACTIONS(278),
    [sym_superscript] = ACTIONS(286),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(286),
    [sym_text] = ACTIONS(286),
  },
  [102] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(289),
  },
  [103] = {
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
  [104] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_text] = ACTIONS(295),
  },
  [105] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(297),
  },
  [106] = {
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
  [107] = {
    [sym__text_mode] = STATE(167),
    [sym_text_mode] = STATE(166),
    [sym_at_group] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_text_env] = STATE(167),
    [sym__display_math] = STATE(167),
    [sym_tex_display_math] = STATE(167),
    [sym_latex_display_math] = STATE(167),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(167),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(167),
    [sym_tex_inline_math] = STATE(167),
    [sym_latex_inline_math] = STATE(167),
    [sym_inline_math_env] = STATE(167),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(167),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(167),
    [sym_command] = STATE(167),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(167),
    [sym_opt_text_group] = STATE(167),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(303),
    [sym_text] = ACTIONS(303),
  },
  [108] = {
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
  [109] = {
    [anon_sym_tag] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(191),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_emph] = ACTIONS(47),
    [anon_sym_textbf] = ACTIONS(49),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__name] = ACTIONS(53),
  },
  [110] = {
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
  [111] = {
    [sym__math_mode] = STATE(117),
    [sym_parameter] = STATE(117),
    [sym_math_environment] = STATE(117),
    [sym_tag] = STATE(117),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(117),
    [sym_command] = STATE(117),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
    [sym_end] = STATE(168),
    [sym_end_token] = STATE(69),
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
    [sym_math_group] = STATE(117),
    [sym_opt_math_group] = STATE(117),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_text] = ACTIONS(173),
  },
  [112] = {
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
  [113] = {
    [sym__math_mode] = STATE(170),
    [sym_parameter] = STATE(170),
    [sym_math_environment] = STATE(170),
    [sym_tag] = STATE(170),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(170),
    [sym_command] = STATE(170),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(170),
    [sym_opt_math_group] = STATE(170),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [sym_end_opt] = STATE(169),
    [aux_sym_math_mode_repeat1] = STATE(170),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_active_char] = ACTIONS(311),
    [sym_text] = ACTIONS(311),
  },
  [114] = {
    [sym__math_mode] = STATE(114),
    [sym_parameter] = STATE(114),
    [sym_math_environment] = STATE(114),
    [sym_tag] = STATE(114),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(114),
    [sym_command] = STATE(114),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(114),
    [sym_opt_math_group] = STATE(114),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(324),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(324),
    [sym_subscript] = ACTIONS(324),
    [sym_active_char] = ACTIONS(324),
    [sym_text] = ACTIONS(324),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(332),
    [sym_begin_group] = ACTIONS(332),
    [sym_end_group] = ACTIONS(332),
    [sym_math_shift] = ACTIONS(332),
    [sym_alignment_tab] = ACTIONS(332),
    [sym_parameter_char] = ACTIONS(332),
    [sym_superscript] = ACTIONS(332),
    [sym_subscript] = ACTIONS(332),
    [sym_active_char] = ACTIONS(332),
    [sym_text] = ACTIONS(332),
  },
  [117] = {
    [sym__math_mode] = STATE(117),
    [sym_parameter] = STATE(117),
    [sym_math_environment] = STATE(117),
    [sym_tag] = STATE(117),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(117),
    [sym_command] = STATE(117),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(117),
    [sym_opt_math_group] = STATE(117),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(334),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(334),
    [sym_subscript] = ACTIONS(334),
    [sym_active_char] = ACTIONS(334),
    [sym_text] = ACTIONS(334),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(337),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [119] = {
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
  [120] = {
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
  [121] = {
    [sym_display_math_env_group] = STATE(174),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(343),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [123] = {
    [sym_inline_math_env_group] = STATE(176),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(347),
  },
  [124] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(349),
  },
  [125] = {
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
  [126] = {
    [sym_verbatim_env_name] = ACTIONS(353),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(355),
    [sym_begin_group] = ACTIONS(355),
    [sym_end_group] = ACTIONS(355),
    [sym_math_shift] = ACTIONS(355),
    [sym_alignment_tab] = ACTIONS(355),
    [sym_parameter_char] = ACTIONS(355),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(355),
    [sym_text] = ACTIONS(355),
  },
  [128] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(357),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(359),
    [sym__end_of_line] = ACTIONS(359),
  },
  [129] = {
    [aux_sym_verbatim_text_repeat1] = STATE(129),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(361),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(364),
  },
  [130] = {
    [aux_sym_verbatim_text_repeat1] = STATE(65),
    [aux_sym_verbatim_text_repeat2] = STATE(130),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(366),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(359),
    [sym__end_of_line] = ACTIONS(369),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(372),
    [sym_begin_group] = ACTIONS(372),
    [sym_end_group] = ACTIONS(372),
    [sym_math_shift] = ACTIONS(372),
    [sym_alignment_tab] = ACTIONS(372),
    [sym_parameter_char] = ACTIONS(372),
    [sym_superscript] = ACTIONS(372),
    [sym_subscript] = ACTIONS(372),
    [sym_active_char] = ACTIONS(372),
    [sym_text] = ACTIONS(372),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(374),
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(374),
    [sym_end_group] = ACTIONS(374),
    [sym_math_shift] = ACTIONS(374),
    [sym_alignment_tab] = ACTIONS(374),
    [sym_parameter_char] = ACTIONS(374),
    [sym_superscript] = ACTIONS(374),
    [sym_subscript] = ACTIONS(374),
    [sym_active_char] = ACTIONS(374),
    [sym_text] = ACTIONS(374),
  },
  [133] = {
    [sym__text_mode] = STATE(133),
    [sym_at_group] = STATE(133),
    [sym_parameter] = STATE(133),
    [sym_text_env] = STATE(133),
    [sym__display_math] = STATE(133),
    [sym_tex_display_math] = STATE(133),
    [sym_latex_display_math] = STATE(133),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(133),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(133),
    [sym_tex_inline_math] = STATE(133),
    [sym_latex_inline_math] = STATE(133),
    [sym_inline_math_env] = STATE(133),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(133),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(133),
    [sym_command] = STATE(133),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(133),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(133),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(266),
    [sym_begin_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(272),
    [sym_alignment_tab] = ACTIONS(376),
    [sym_parameter_char] = ACTIONS(278),
    [sym_superscript] = ACTIONS(376),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(376),
    [sym_text] = ACTIONS(376),
  },
  [134] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(379),
  },
  [135] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(381),
  },
  [136] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(383),
  },
  [137] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(385),
  },
  [138] = {
    [sym__text_mode] = STATE(183),
    [sym_at_group] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_text_env] = STATE(183),
    [sym__display_math] = STATE(183),
    [sym_tex_display_math] = STATE(183),
    [sym_latex_display_math] = STATE(183),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(183),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(183),
    [sym_tex_inline_math] = STATE(183),
    [sym_latex_inline_math] = STATE(183),
    [sym_inline_math_env] = STATE(183),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(183),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(183),
    [sym_command] = STATE(183),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(183),
    [sym_opt_text_group] = STATE(183),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [139] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [140] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(393),
  },
  [141] = {
    [sym_text_group] = STATE(185),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(205),
    [sym__end_of_line] = ACTIONS(393),
  },
  [142] = {
    [sym__text_mode] = STATE(188),
    [sym_at_group] = STATE(188),
    [sym_parameter] = STATE(188),
    [sym_text_env] = STATE(188),
    [sym__display_math] = STATE(188),
    [sym_tex_display_math] = STATE(188),
    [sym_latex_display_math] = STATE(188),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(188),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(188),
    [sym_tex_inline_math] = STATE(188),
    [sym_latex_inline_math] = STATE(188),
    [sym_inline_math_env] = STATE(188),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(188),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(188),
    [sym_command] = STATE(188),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(188),
    [sym_opt_text_group] = STATE(188),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(187),
    [aux_sym_text_mode_repeat1] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(397),
    [sym_text] = ACTIONS(397),
  },
  [143] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(401),
    [sym__end_of_line] = ACTIONS(401),
  },
  [144] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(403),
  },
  [145] = {
    [sym_text_group] = STATE(190),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(205),
    [sym__end_of_line] = ACTIONS(403),
  },
  [146] = {
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
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_text] = ACTIONS(409),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(119),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [150] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_number] = ACTIONS(411),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_end_group] = ACTIONS(413),
    [sym_math_shift] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_text] = ACTIONS(413),
  },
  [152] = {
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
  [153] = {
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
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__at_name] = ACTIONS(235),
  },
  [154] = {
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
  [155] = {
    [sym__at_text_mode] = STATE(193),
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
    [sym_at_command] = STATE(193),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(193),
    [sym_opt_at_text_group] = STATE(193),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(193),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(99),
    [sym_end_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(421),
    [sym_text] = ACTIONS(421),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(423),
    [sym_begin_group] = ACTIONS(423),
    [sym_end_group] = ACTIONS(423),
    [sym_math_shift] = ACTIONS(423),
    [sym_alignment_tab] = ACTIONS(423),
    [sym_parameter_char] = ACTIONS(423),
    [sym_superscript] = ACTIONS(423),
    [sym_subscript] = ACTIONS(423),
    [sym_active_char] = ACTIONS(423),
    [sym_text] = ACTIONS(423),
  },
  [157] = {
    [sym__at_text_mode] = STATE(195),
    [sym_parameter] = STATE(195),
    [sym_text_env] = STATE(195),
    [sym__display_math] = STATE(195),
    [sym_tex_display_math] = STATE(195),
    [sym_latex_display_math] = STATE(195),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(195),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(195),
    [sym_tex_inline_math] = STATE(195),
    [sym_latex_inline_math] = STATE(195),
    [sym_inline_math_env] = STATE(195),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(195),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(195),
    [sym_at_command] = STATE(195),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(195),
    [sym_opt_at_text_group] = STATE(195),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [sym_end_opt] = STATE(194),
    [aux_sym_at_group_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(425),
    [sym_text] = ACTIONS(425),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(427),
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
  [159] = {
    [sym__at_text_mode] = STATE(159),
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
    [sym_at_command] = STATE(159),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(159),
    [sym_opt_at_text_group] = STATE(159),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(444),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(441),
    [sym_text] = ACTIONS(441),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(450),
    [sym_end_group] = ACTIONS(450),
    [sym_math_shift] = ACTIONS(450),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_text] = ACTIONS(450),
  },
  [161] = {
    [sym__text_mode] = STATE(161),
    [sym_at_group] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_text_env] = STATE(161),
    [sym__display_math] = STATE(161),
    [sym_tex_display_math] = STATE(161),
    [sym_latex_display_math] = STATE(161),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(161),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(161),
    [sym_tex_inline_math] = STATE(161),
    [sym_latex_inline_math] = STATE(161),
    [sym_inline_math_env] = STATE(161),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(161),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(161),
    [sym_opt_text_group] = STATE(161),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(266),
    [sym_begin_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(272),
    [sym_alignment_tab] = ACTIONS(452),
    [sym_parameter_char] = ACTIONS(278),
    [sym_superscript] = ACTIONS(452),
    [sym_subscript] = ACTIONS(281),
    [sym_active_char] = ACTIONS(452),
    [sym_text] = ACTIONS(452),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(455),
    [sym_begin_group] = ACTIONS(455),
    [sym_end_group] = ACTIONS(455),
    [sym_math_shift] = ACTIONS(455),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(455),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_text] = ACTIONS(455),
  },
  [163] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_end_group] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_text] = ACTIONS(457),
  },
  [164] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(460),
  },
  [165] = {
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
  [166] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(464),
  },
  [167] = {
    [sym__text_mode] = STATE(101),
    [sym_at_group] = STATE(101),
    [sym_parameter] = STATE(101),
    [sym_text_env] = STATE(101),
    [sym__display_math] = STATE(101),
    [sym_tex_display_math] = STATE(101),
    [sym_latex_display_math] = STATE(101),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(101),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(101),
    [sym_tex_inline_math] = STATE(101),
    [sym_latex_inline_math] = STATE(101),
    [sym_inline_math_env] = STATE(101),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(101),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(101),
    [sym_command] = STATE(101),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(101),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(111),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [168] = {
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
  [169] = {
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(468),
    [sym_begin_group] = ACTIONS(468),
    [sym_end_group] = ACTIONS(468),
    [sym_math_shift] = ACTIONS(468),
    [sym_alignment_tab] = ACTIONS(468),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(468),
    [sym_subscript] = ACTIONS(468),
    [sym_active_char] = ACTIONS(468),
    [sym_text] = ACTIONS(468),
  },
  [170] = {
    [sym__math_mode] = STATE(170),
    [sym_parameter] = STATE(170),
    [sym_math_environment] = STATE(170),
    [sym_tag] = STATE(170),
    [sym_tag_token] = STATE(50),
    [sym_escaped] = STATE(170),
    [sym_command] = STATE(170),
    [sym_begin] = STATE(51),
    [sym_begin_token] = STATE(52),
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
    [sym_math_group] = STATE(170),
    [sym_opt_math_group] = STATE(170),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(53),
    [aux_sym_math_mode_repeat1] = STATE(170),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(470),
    [sym_subscript] = ACTIONS(470),
    [sym_active_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [171] = {
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
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(475),
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
  [173] = {
    [sym_display_math_env_name] = ACTIONS(477),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(479),
    [sym_end_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(479),
    [sym_superscript] = ACTIONS(479),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [sym_text] = ACTIONS(479),
  },
  [175] = {
    [sym_inline_math_env_name] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_end_group] = ACTIONS(483),
    [sym_math_shift] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_text] = ACTIONS(483),
  },
  [177] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(485),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(487),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(487),
    [sym__end_of_line] = ACTIONS(487),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(489),
    [sym_begin_group] = ACTIONS(489),
    [sym_end_group] = ACTIONS(489),
    [sym_math_shift] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(489),
    [sym_parameter_char] = ACTIONS(489),
    [sym_superscript] = ACTIONS(489),
    [sym_subscript] = ACTIONS(489),
    [sym_active_char] = ACTIONS(489),
    [sym_text] = ACTIONS(489),
  },
  [180] = {
    [anon_sym_LBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(491),
    [sym__end_of_line] = ACTIONS(491),
  },
  [181] = {
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
  [182] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(143),
  },
  [183] = {
    [sym__text_mode] = STATE(101),
    [sym_at_group] = STATE(101),
    [sym_parameter] = STATE(101),
    [sym_text_env] = STATE(101),
    [sym__display_math] = STATE(101),
    [sym_tex_display_math] = STATE(101),
    [sym_latex_display_math] = STATE(101),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(101),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(101),
    [sym_tex_inline_math] = STATE(101),
    [sym_latex_inline_math] = STATE(101),
    [sym_inline_math_env] = STATE(101),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(101),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(101),
    [sym_command] = STATE(101),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(101),
    [sym_opt_text_group] = STATE(101),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(147),
    [sym_text] = ACTIONS(147),
  },
  [184] = {
    [anon_sym_LBRACK] = ACTIONS(497),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(497),
    [sym_begin_group] = ACTIONS(497),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(497),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [185] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(499),
  },
  [186] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(255),
    [sym__end_of_line] = ACTIONS(255),
  },
  [187] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(257),
    [sym__end_of_line] = ACTIONS(257),
  },
  [188] = {
    [sym__text_mode] = STATE(161),
    [sym_at_group] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_text_env] = STATE(161),
    [sym__display_math] = STATE(161),
    [sym_tex_display_math] = STATE(161),
    [sym_latex_display_math] = STATE(161),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(161),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(161),
    [sym_tex_inline_math] = STATE(161),
    [sym_latex_inline_math] = STATE(161),
    [sym_inline_math_env] = STATE(161),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(161),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
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
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(161),
    [sym_opt_text_group] = STATE(161),
    [sym_token] = STATE(17),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(202),
    [aux_sym_text_mode_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(259),
    [sym_text] = ACTIONS(259),
  },
  [189] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(501),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(503),
    [sym__end_of_line] = ACTIONS(503),
  },
  [190] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(505),
  },
  [191] = {
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
  [192] = {
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
  [193] = {
    [sym__at_text_mode] = STATE(193),
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
    [sym_at_command] = STATE(193),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(193),
    [sym_opt_at_text_group] = STATE(193),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(193),
    [anon_sym_LBRACK] = ACTIONS(429),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(435),
    [sym_end_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(444),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(513),
    [sym_text] = ACTIONS(513),
  },
  [194] = {
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(516),
    [sym_begin_group] = ACTIONS(516),
    [sym_end_group] = ACTIONS(516),
    [sym_math_shift] = ACTIONS(516),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(516),
    [sym_superscript] = ACTIONS(516),
    [sym_subscript] = ACTIONS(516),
    [sym_active_char] = ACTIONS(516),
    [sym_text] = ACTIONS(516),
  },
  [195] = {
    [sym__at_text_mode] = STATE(195),
    [sym_parameter] = STATE(195),
    [sym_text_env] = STATE(195),
    [sym__display_math] = STATE(195),
    [sym_tex_display_math] = STATE(195),
    [sym_latex_display_math] = STATE(195),
    [sym_begin_display_math] = STATE(10),
    [sym_begin_inline_math] = STATE(11),
    [sym_display_math_env] = STATE(195),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(195),
    [sym_tex_inline_math] = STATE(195),
    [sym_latex_inline_math] = STATE(195),
    [sym_inline_math_env] = STATE(195),
    [sym_inline_math_begin] = STATE(13),
    [sym_verbatim_env] = STATE(195),
    [sym_verbatim_begin] = STATE(14),
    [sym_escaped] = STATE(195),
    [sym_at_command] = STATE(195),
    [sym_begin] = STATE(15),
    [sym_begin_token] = STATE(16),
    [sym_documentclass] = STATE(91),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(91),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(91),
    [sym_include_token] = STATE(20),
    [sym_section] = STATE(91),
    [sym_section_token] = STATE(21),
    [sym_storage] = STATE(91),
    [sym_storage_token] = STATE(22),
    [sym_catcode] = STATE(91),
    [sym_catcode_token] = STATE(23),
    [sym_emph] = STATE(91),
    [sym_emph_token] = STATE(24),
    [sym_textbf] = STATE(91),
    [sym_textbf_token] = STATE(25),
    [sym_at_text_group] = STATE(195),
    [sym_opt_at_text_group] = STATE(195),
    [sym_at_token] = STATE(91),
    [sym_begin_opt] = STATE(94),
    [aux_sym_at_group_repeat1] = STATE(195),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(438),
    [sym_alignment_tab] = ACTIONS(518),
    [sym_parameter_char] = ACTIONS(444),
    [sym_superscript] = ACTIONS(518),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(518),
    [sym_text] = ACTIONS(518),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(521),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(521),
    [sym_alignment_tab] = ACTIONS(521),
    [sym_parameter_char] = ACTIONS(521),
    [sym_superscript] = ACTIONS(521),
    [sym_subscript] = ACTIONS(521),
    [sym_active_char] = ACTIONS(521),
    [sym_text] = ACTIONS(521),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
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
  [198] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_end_group] = ACTIONS(525),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(491),
    [sym_begin_group] = ACTIONS(491),
    [sym_end_group] = ACTIONS(491),
    [sym_math_shift] = ACTIONS(491),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [sym_active_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [200] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__end_of_line] = ACTIONS(284),
  },
  [201] = {
    [anon_sym_LBRACK] = ACTIONS(527),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(527),
    [sym_begin_group] = ACTIONS(527),
    [sym_alignment_tab] = ACTIONS(527),
    [sym_parameter_char] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [sym_active_char] = ACTIONS(527),
    [sym_text] = ACTIONS(527),
  },
  [202] = {
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_begin_group] = ACTIONS(450),
    [sym__end_of_line] = ACTIONS(450),
  },
  [203] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(529),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(531),
    [sym__end_of_line] = ACTIONS(531),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [sym_magic_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__escape] = ACTIONS(487),
    [sym_begin_group] = ACTIONS(487),
    [sym_end_group] = ACTIONS(487),
    [sym_math_shift] = ACTIONS(487),
    [sym_alignment_tab] = ACTIONS(487),
    [sym_parameter_char] = ACTIONS(487),
    [sym_superscript] = ACTIONS(487),
    [sym_subscript] = ACTIONS(487),
    [sym_active_char] = ACTIONS(487),
    [sym_text] = ACTIONS(487),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(29),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(30),
  [29] = {.count = 1, .reusable = true}, SHIFT(31),
  [31] = {.count = 1, .reusable = false}, SHIFT(32),
  [33] = {.count = 1, .reusable = false}, SHIFT(33),
  [35] = {.count = 1, .reusable = false}, SHIFT(34),
  [37] = {.count = 1, .reusable = false}, SHIFT(35),
  [39] = {.count = 1, .reusable = false}, SHIFT(36),
  [41] = {.count = 1, .reusable = false}, SHIFT(37),
  [43] = {.count = 1, .reusable = false}, SHIFT(38),
  [45] = {.count = 1, .reusable = true}, SHIFT(39),
  [47] = {.count = 1, .reusable = false}, SHIFT(40),
  [49] = {.count = 1, .reusable = false}, SHIFT(41),
  [51] = {.count = 1, .reusable = false}, SHIFT(42),
  [53] = {.count = 1, .reusable = false}, SHIFT(43),
  [55] = {.count = 1, .reusable = true}, SHIFT(44),
  [57] = {.count = 1, .reusable = true}, SHIFT(45),
  [59] = {.count = 1, .reusable = true}, SHIFT(46),
  [61] = {.count = 1, .reusable = true}, SHIFT(47),
  [63] = {.count = 1, .reusable = true}, SHIFT(48),
  [65] = {.count = 1, .reusable = true}, SHIFT(54),
  [67] = {.count = 1, .reusable = true}, SHIFT(55),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(57),
  [77] = {.count = 1, .reusable = false}, SHIFT(65),
  [79] = {.count = 1, .reusable = true}, SHIFT(61),
  [81] = {.count = 1, .reusable = true}, SHIFT(66),
  [83] = {.count = 1, .reusable = true}, SHIFT(67),
  [85] = {.count = 1, .reusable = true}, SHIFT(70),
  [87] = {.count = 1, .reusable = true}, SHIFT(71),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(76),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(84),
  [97] = {.count = 1, .reusable = true}, SHIFT(88),
  [99] = {.count = 1, .reusable = true}, SHIFT(89),
  [101] = {.count = 1, .reusable = true}, SHIFT(95),
  [103] = {.count = 1, .reusable = true}, SHIFT(90),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(96),
  [109] = {.count = 1, .reusable = true}, SHIFT(98),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(99),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(100),
  [147] = {.count = 1, .reusable = true}, SHIFT(101),
  [149] = {.count = 1, .reusable = false}, SHIFT(102),
  [151] = {.count = 1, .reusable = true}, SHIFT(103),
  [153] = {.count = 1, .reusable = true}, SHIFT(104),
  [155] = {.count = 1, .reusable = true}, SHIFT(106),
  [157] = {.count = 1, .reusable = true}, SHIFT(107),
  [159] = {.count = 1, .reusable = true}, SHIFT(109),
  [161] = {.count = 1, .reusable = true}, SHIFT(111),
  [163] = {.count = 1, .reusable = true}, SHIFT(113),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(114),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(115),
  [173] = {.count = 1, .reusable = true}, SHIFT(117),
  [175] = {.count = 1, .reusable = true}, SHIFT(118),
  [177] = {.count = 1, .reusable = true}, SHIFT(124),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(126),
  [183] = {.count = 1, .reusable = false}, SHIFT(129),
  [185] = {.count = 1, .reusable = true}, SHIFT(128),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [189] = {.count = 1, .reusable = true}, SHIFT(130),
  [191] = {.count = 1, .reusable = false}, SHIFT(124),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(133),
  [197] = {.count = 1, .reusable = false}, SHIFT(134),
  [199] = {.count = 1, .reusable = false}, SHIFT(135),
  [201] = {.count = 1, .reusable = false}, SHIFT(136),
  [203] = {.count = 1, .reusable = false}, SHIFT(137),
  [205] = {.count = 1, .reusable = true}, SHIFT(138),
  [207] = {.count = 1, .reusable = true}, SHIFT(139),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(143),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(137),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [225] = {.count = 1, .reusable = false}, SHIFT(149),
  [227] = {.count = 1, .reusable = true}, SHIFT(150),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [233] = {.count = 1, .reusable = false}, SHIFT(151),
  [235] = {.count = 1, .reusable = false}, SHIFT(152),
  [237] = {.count = 1, .reusable = true}, SHIFT(153),
  [239] = {.count = 1, .reusable = true}, SHIFT(154),
  [241] = {.count = 1, .reusable = true}, SHIFT(155),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [251] = {.count = 1, .reusable = true}, SHIFT(157),
  [253] = {.count = 1, .reusable = true}, SHIFT(159),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(161),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(99),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(101),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(162),
  [295] = {.count = 1, .reusable = true}, SHIFT(163),
  [297] = {.count = 1, .reusable = true}, SHIFT(164),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [301] = {.count = 1, .reusable = true}, SHIFT(165),
  [303] = {.count = 1, .reusable = true}, SHIFT(167),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [311] = {.count = 1, .reusable = true}, SHIFT(170),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(46),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(47),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(114),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [330] = {.count = 1, .reusable = true}, SHIFT(171),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(117),
  [337] = {.count = 1, .reusable = true}, SHIFT(172),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [343] = {.count = 1, .reusable = true}, SHIFT(173),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [347] = {.count = 1, .reusable = true}, SHIFT(175),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [353] = {.count = 1, .reusable = true}, SHIFT(177),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(129),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(65),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat2, 2), SHIFT_REPEAT(130),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(133),
  [379] = {.count = 1, .reusable = true}, SHIFT(178),
  [381] = {.count = 1, .reusable = true}, SHIFT(179),
  [383] = {.count = 1, .reusable = true}, SHIFT(180),
  [385] = {.count = 1, .reusable = true}, SHIFT(181),
  [387] = {.count = 1, .reusable = true}, SHIFT(182),
  [389] = {.count = 1, .reusable = true}, SHIFT(183),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [393] = {.count = 1, .reusable = true}, SHIFT(184),
  [395] = {.count = 1, .reusable = true}, SHIFT(186),
  [397] = {.count = 1, .reusable = true}, SHIFT(188),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [403] = {.count = 1, .reusable = true}, SHIFT(189),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(191),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [419] = {.count = 1, .reusable = true}, SHIFT(192),
  [421] = {.count = 1, .reusable = true}, SHIFT(193),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [425] = {.count = 1, .reusable = true}, SHIFT(195),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(153),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(89),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(159),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(90),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(161),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(163),
  [460] = {.count = 1, .reusable = true}, SHIFT(196),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [464] = {.count = 1, .reusable = true}, SHIFT(197),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(170),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [477] = {.count = 1, .reusable = true}, SHIFT(198),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [481] = {.count = 1, .reusable = true}, SHIFT(135),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [485] = {.count = 1, .reusable = true}, SHIFT(199),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(200),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [499] = {.count = 1, .reusable = true}, SHIFT(201),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 4),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [505] = {.count = 1, .reusable = true}, SHIFT(203),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(193),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(195),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [525] = {.count = 1, .reusable = true}, SHIFT(204),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_begin, 5),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
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
